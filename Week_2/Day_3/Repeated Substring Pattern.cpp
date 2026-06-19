#include <string>

using namespace std;

class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        string doubleS = s + s;
        return doubleS.find(s, 1) != s.length();
    }
};
