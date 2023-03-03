class Solution {
public:
    int romanToInt(string s) {
        map < char, int > m;
        long long int sum = 0;
        
        m['I'] = 1;
        m['V'] = 5;
        m['X'] = 10;
        m['L'] = 50;
        m['C'] = 100;
        m['D'] = 500;
        m['M'] = 1000;
        
        sum += m[s[s.length()-1]];
        
        for(int i = s.length()-2; i >= 0; i--)
        {
            if(m[s[i]] < m[s[i+1]])
            {
                sum -= m[s[i]];
            }else
            {
                sum += m[s[i]];
            }
        }
        
        return sum;
    }
};
