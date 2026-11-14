class Solution {
public:
    bool isPalindrome(int x) {
        if (x<0)return 0;
        int dup = x;

        long long rev = 0;
        while(x!=0){
            long long ld = x%10;
            x=x/10;
            rev = (rev*10)+ld;
            
        }
        if(rev == dup) return true;
        else return false;
        
    }
};