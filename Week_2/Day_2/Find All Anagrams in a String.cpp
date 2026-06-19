#include <string>
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        int ns = s.length(), np = p.length();
        if (ns < np) return {};
        vector<int> countP(26, 0), countS(26, 0);
        for (int i = 0; i < np; i++) {
            countP[p[i] - 'a']++;
            countS[s[i] - 'a']++;
        }
        vector<int> result;
        if (countP == countS) result.push_back(0);
        for (int i = np; i < ns; i++) {
            countS[s[i] - 'a']++;
            countS[s[i - np] - 'a']--;
            if (countP == countS) {
                result.push_back(i - np + 1);
            }
        }
        return result;
    }
};
