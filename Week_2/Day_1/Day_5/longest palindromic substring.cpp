class Solution {
public:
    string longestPalindrome(string s) {
        int n=s.size();//Expand through centre approach
        int start=0,maxlen=0;
        for(int i=0;i<n;i++){
            expand(s,i,i,start,maxlen,n);//odd length palindrome
            expand(s,i,i+1,start,maxlen,n);//even length palindrome
        }
        return s.substr(start,maxlen);//for portion of string
    }
    void expand(string &s,int left,int right,int &start,int &maxlen,int &n){
        while(left>=0 && right<n && (s[left]==s[right])){
              if(s[left]!=s[right]) break;
              else{
               int len=right-left+1;
               if(len>maxlen){
                start=left;
                maxlen=len;
               }
              }
              left--;
              right++;
        }
    }
};