class Solution {
public:
    string decodeString(string s) {
        int index=0;
        string str=recurse(s,index);//Directly 0->not in recursion 
        return str;
    }
    string recurse(string &s,int &i){ //"Imp"->with refernce pass
        string ans="";
        int num=0;
        while(i<s.size()){
            if(isdigit(s[i])){
                num=num*10+(s[i]-'0');
            }
            else if(s[i]=='['){
                i++;
                string temp=recurse(s,i);
                while(num--){
                    ans+=temp;
                }
                num=0; //After while,,num=-1 that's why  
            }
            else if(s[i]==']')
            return ans;
            else ans+=s[i];
            i++;
            
        }
        return ans;
    }
};