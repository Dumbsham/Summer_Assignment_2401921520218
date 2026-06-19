#include <vector>
#include <stack>
#include <unordered_map>

using namespace std;

class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int, int> mp;
        stack<int> st;
        for (int num : nums2) {
            while (!st.empty() && st.top() < num) {
                mp[st.top()] = num;
                st.pop();
            }
            st.push(num);
        }
        vector<int> res;
        res.reserve(nums1.size());
        for (int num : nums1) {
            if (mp.count(num)) {
                res.push_back(mp[num]);
            } else {
                res.push_back(-1);
            }
        }
        return res;
    }
};
