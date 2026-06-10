class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        int n=s.size();
        for(int len=1;len<=n/2;len++){
            if(n%len!=0)continue;
            string sub="";
            string str=s.substr(0,len);
            int times=n/len;
            for(int i=0;i<times;i++){
                sub+=str;
            }
            if(sub==s)return true;
            
        }
        return false;
    }
};