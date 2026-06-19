#include <string>
#include <vector>
#include <unordered_map>
#include <algorithm>

using namespace std;

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> mp;
        for (const string& s : strs) {
            string sorted_s = s;
            sort(sorted_s.begin(), sorted_s.end());
            mp[sorted_s].push_back(s);
        }
        vector<vector<string>> result;
        result.reserve(mp.size());
        for (auto& p : mp) {
            result.push_back(move(p.second));
        }
        return result;
    }
};
