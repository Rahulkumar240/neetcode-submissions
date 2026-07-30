class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<int> mpp(26,0);

        for(char &it : s){
            mpp[it-'a']++;
        }

        for(char &it : t){
            mpp[it-'a']--;
        }

        bool allzeroes = all_of(begin(mpp),end(mpp),[](int element){
            return element == 0;
        });

        return allzeroes;
    }
};
