class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>>ans;
        map<string,vector<string>>mpp;
        for(auto chari:strs){ //Imp->Sort + Hashmap
            string key=chari;
            sort(key.begin(),key.end());
            mpp[key].push_back(chari);
        }
        for(auto it:mpp){
            ans.push_back(it.second);
        }
        return ans;
    }
};