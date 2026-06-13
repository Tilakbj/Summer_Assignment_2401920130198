class Solution {
public:
    int compress(vector<char>& chars) {
        int n=chars.size(),i=0,j=0,len=0,idx=0;
        while(j<=n){
            if(j==n || chars[i]!=chars[j] ){ //j==n for last grp
             len=j-i;
             chars[idx]=chars[i];
             idx++;
             if(len!=1){
                string s=to_string(len); //digits concept->reverse digits 
                for(char ch:s){
                    chars[idx]=ch;
                    idx++;
                }
             }
             i=j;
            }
            j++;
        }
        chars.resize(idx);
        return chars.size();
    }
};