class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0 || (x!=0 && x%10==0))
            return 0;
        long return_val {};
        int original_x {x};
        while(x){
            return_val=return_val*10+x%10;
            x=x/10;
        }
        return return_val==original_x;
    }
};
