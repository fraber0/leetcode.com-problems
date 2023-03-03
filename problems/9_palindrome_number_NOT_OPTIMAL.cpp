class Solution {
public:
    bool isPalindrome(int x) {
        string s = std::to_string(x);
        if(s.length() == 2)
        {
            if(s[0] == s[1])
            {
                return true;
            }else
            {
                return false;
            }
        }
        if(s.length() == 1)
        {
            return true;
        }
        
        int i=0, j=s.length()-1;
        while(i<j)
        {
            if(s[i] != s[j])
            {
                return false;
            }
            i++;
            j--;
        }
        return true;
    }
};
