class Solution {
public:
    string intToRoman(int num) {
        string ans = "";
        while(num >= 1000){
            ans += "M";
            num = num - 1000;
        }
        while(num >= 900){
            ans += "CM";
            num = num - 900;
        }
        while(num >= 500){
            ans += "D";
            num = num - 500;
        }
        while(num >= 400){
            ans += "CD";
            num = num - 400;
        }
        while(num >= 100){
            ans += "C";
            num = num - 100;
        }
        while(num >= 90){
            ans += "XC";
            num = num - 90;
        }
        while(num >= 50){
            ans  += "L";
            num = num - 50;
        }
        while(num >= 40){
            ans += "XL";
            num = num - 40;
        }
        while(num >= 10){
            ans  += "X";
            num = num - 10;
        }
        while(num >= 9){
            ans += "IX";
            num = num - 9;
        }
        while(num >= 5){
            ans  += "V";
            num = num - 5;
        }
        while(num >= 4){
            ans += "IV";
            num = num - 4;
        }
        while(num >= 1){
            ans  += "I";
            num = num - 1;
        }
        return ans;
    }
};
