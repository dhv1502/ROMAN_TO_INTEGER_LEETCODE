#import <cstring>

class Solution {
public:
    int romanToInt(string s) {
        int final_value = 0;
        int i;
        char char_1;
        char char_2;
        int len = s.length();
        len = len - 1;
        for(i = len; i >= 0; --i) {
            if(i == 0) {
                final_value += return_value(s[0]);
            } 
            if(i != 0) { 
                char_1 = s[i];
                char_2 = s[i - 1];
                if((char_2 == 'I' && char_1 == 'V') || (char_2 == 'I' && char_1 == 'X')) {
                    final_value += return_value(char_1) - return_value(char_2);
                    i--;
                } else if ((char_2 == 'X' && char_1 == 'L') || (char_2 == 'X' && char_1 == 'C')) {
                    final_value += return_value(char_1) - return_value(char_2);
                    i--;
                } else if ((char_2 == 'C' && char_1 == 'D') || (char_2 == 'C' && char_1 == 'M')) {
                    final_value += return_value(char_1) - return_value(char_2);
                    i--;
                } else {
                    final_value += return_value(char_1);
                }
            }
        }
        return final_value;
    }
    
    int return_value(char ch){
        int return_value = 0;
        switch (ch) {
            case 'I':
                return_value = 1;
                break;
            case 'V':
                return_value = 5;
                break;
            case 'X':
                return_value = 10;
                break;
            case 'L':
                return_value = 50;
                break;
            case 'C':
                return_value = 100;
                break;
            case 'D':
                return_value = 500;
                break;
            case 'M':
                return_value = 1000;
                break;
        }
        return return_value;
    }
};
