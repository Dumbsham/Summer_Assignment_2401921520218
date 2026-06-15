class Solution {
public:
    bool isPalindrome(string s) {
        string str = "";
        for(int i = 0;i < s.size();i++){
            if(isalnum(s[i])){
                str += s[i];
            }
        }
        int left = 0;
        int right = str.size()-1;

        for (char &c : str) {
        c = tolower(c);
    }
        while(left < right){
            if(str[left] != str[right]) return false;
                
            left++;
            right--;
            
        }
        return true;
    }

};
