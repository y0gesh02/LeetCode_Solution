class Solution {
public:
    double angleClock(int hour, int minutes) {
        double t=30*hour;
        double t1=5.5*minutes;
        double ans=t-t1;
        if(ans<0) ans*=-1;
        if(ans>180) ans=360-ans;
        return ans;
    }
};