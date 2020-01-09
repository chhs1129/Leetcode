class Solution {
public:
    int reverse(int x) {
        long return_val = 0;
        while(x){
            return_val=return_val*10+x%10;
            x=x/10;
        }
        return (return_val<INT_MIN || return_val>INT_MAX)?0:return_val;
    }
};
