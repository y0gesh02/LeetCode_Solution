class Solution {
public:
    
     //t.c. logn +nlogn
    int hIndex(vector<int>& c) {
        int n=c.size();
        sort(c.begin(),c.end());
       
        int l=0;
        int h=n-1;
        while(l<=h){
            int mid=l+(h-l)/2;
            if(c[mid]==n-mid){
                return c[mid];//our optimal ans for all time when c[mid]==n-mid
            }
            else if(c[mid]>n-mid){
                h=mid-1;
            }
            else{
                l=mid+1;
            }
        }
        return n-l;//if we did not find c[mid]==n-mid we return all elemnt righthand side
    }
};
 