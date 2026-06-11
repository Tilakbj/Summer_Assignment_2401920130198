class Solution {
public:
vector<string>ans;
    vector<string> generateParenthesis(int n) {
        int open=0,closed=0;
        string s="";
        parent(s,open,closed,n);
        return ans;
    }
    bool isvalid(string s){
       int n=s.size(),cnt=0;
       for(int i=0;i<n;i++){
        if(s[i]=='(') cnt++;
        else cnt--;
        if(cnt<0) return false;//Closing bracket before invalid
       }
       return cnt==0;
    }
   void parent(string &s,int open,int closed,int n){
    if(s.size()==2*n){
        if(isvalid(s)){
            ans.push_back(s);
        }
        return;
    }
    s.push_back('('); //Whenever recurson tree mostly backtrack
    parent(s,open+1,closed,n);
    s.pop_back();
    s.push_back(')');
    parent(s,open,closed+1,n);
    s.pop_back();
   }
};