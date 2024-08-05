class Solution {
public:
    int romanToInt(string s) {
        
        int sum = 0;
        int postNum;
        int Num;

        
        for (int i = 1; i < s.length()+1; i++) {
            Num = getValue(s[i - 1]);
            postNum = getValue(s[i]);

            if (Num >= postNum) {
                sum = sum+Num;
            } else {
                sum = sum-Num;
            }
            
        }
        return sum;
    }

    int getValue(char ch) {
        switch (ch) {
        case 'I':
            return 1;
        case 'V':
            return 5;
        case 'X':
            return 10;
        case 'L':
            return 50;
        case 'C':
            return 100;
        case 'D':
            return 500;
        case 'M':
            return 1000;
        default:
            return 0;
        }
    }
};