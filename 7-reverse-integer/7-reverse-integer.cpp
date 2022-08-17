class Solution {
public:
    int reverse(int x) {
        long long num=0;
         if(x>=2147483647 || x<=-2147483648)
            return 0;
        bool flag=false;
        if(x<0) {
            x=x*-1;
            flag=true;
        }
        while(x>0){
                num=num*10;
                if(num>=2147483647 || num<=-2147483648)
                    return 0;
                num=num+(x%10);
                x=x/10;
            }
        
       if(flag==true) return -num;
        
        return num;
    }
};