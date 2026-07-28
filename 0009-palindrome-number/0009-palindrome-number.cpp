class Solution {
public:
    bool isPalindrome(int x) {
        if(x < 0){
            return false;
        }
        long temp = x;
        long rem = 0;
        long xCopy = x;
        while(xCopy > 0){
            rem = rem * 10 + (xCopy % 10);
            xCopy = xCopy / 10;
        }
        if(rem == temp)
            return true;
        else
            return false;
    }
};
       