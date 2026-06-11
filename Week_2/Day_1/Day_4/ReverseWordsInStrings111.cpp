class Solution {
public:
    string reverseWords(string s) {
        reversestr(s,0);
       return s;
    }
    void reversestr(string &s,int start){
        if(start>=s.size())return;
              int end=start;
              while(end<s.size() && s[end]!=' ')
              end++;
              reverse(s.begin()+start,s.begin()+end);
              reversestr(s,end+1);
    }
};