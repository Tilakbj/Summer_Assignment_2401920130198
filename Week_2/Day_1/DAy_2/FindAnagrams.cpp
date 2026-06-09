class Solution {
public:
    vector<int> findAnagrams(string s, string p) {

        vector<int> ans;

        int n = s.size();
        int m = p.size();

        if(m > n) return ans;

        vector<int> pfreq(26,0);
        vector<int> wfreq(26,0);

        // pattern frequency
        for(char ch : p)
            pfreq[ch-'a']++;

        // first window frequency
        for(int i=0;i<m;i++)
            wfreq[s[i]-'a']++;

        if(pfreq == wfreq)
            ans.push_back(0);

        // sliding window
        for(int i=m;i<n;i++) {

            wfreq[s[i]-'a']++;      // add new char
            wfreq[s[i-m]-'a']--;    // remove old char

            if(pfreq == wfreq)
                ans.push_back(i-m+1);
        }

        return ans;
    }
};