class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        sort(strs.begin(),strs.end());

        string first = strs[0];
        string last = strs[strs.size()-1];
        int end_at = min(first.size(),last.size());
        string ans ="";
        for(int i = 0;i < end_at;i++){
            if(first[i] != last[i]){
                return ans;
            }
            ans+=first[i];
        }
        
        return ans;
    }
};