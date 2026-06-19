#include <vector>
#include <string>

using namespace std;

class Solution {
public:
    int compress(vector<char>& chars) {
        int i = 0; // read pointer
        int index = 0; // write pointer
        int n = chars.size();
        while (i < n) {
            int j = i;
            while (j < n && chars[j] == chars[i]) {
                j++;
            }
            chars[index++] = chars[i];
            int count = j - i;
            if (count > 1) {
                string countStr = to_string(count);
                for (char c : countStr) {
                    chars[index++] = c;
                }
            }
            i = j;
        }
        return index;
    }
};
