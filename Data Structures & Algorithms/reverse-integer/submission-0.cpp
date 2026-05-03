class Solution {
public:
    int reverse(int x) {
        int num = abs(x);
        int res = 0;
        while (num > 0)
        {
            int rem = num%10;
            num /= 10;
            if (res > INT_MAX/10 || (res==INT_MAX/10 && rem > 7))
                return 0;
            if (res < INT_MIN/10 || (res==INT_MIN/10 && rem < -8))
                return 0;
            res = (res*10) + rem;
        }
        if (x<0)
            res = res * -1;
        return res;
    }
};
