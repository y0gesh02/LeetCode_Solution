class Solution {
public:
    int minimumDeviation(vector<int>& nums) {
        /* The deviation of the array is the maximum 
        difference between any two elements (max - min element)in the array. 
        
         nums = [4,1,5,20,3]   o/p= 3
         max=20 min=1  deviation = 19
         
         nums=[4, 2, 5, 10 ,3 ]  // 20%2==0 so 10 and 1%2==1 so 2
         max=10 min=2  deviation = 8
         
         nums=[4 , 2, 5 , 5 ,3  ]   // max%2==0 so 5 ans min%2==0 so 1
         max=5  min=2  deviation = 3
        */
        set<int> s;
        s.insert(nums.begin(),nums.end());  // set - stored the ele in sorted order
        int min_dev = (*s.rbegin() - *s.begin());    // max-min ele
        int val = *s.begin();
        while(val % 2 == 1){
            s.erase(val);
            s.insert(val*2);
            val = *s.begin();
            min_dev = min(min_dev, *s.rbegin() - val);
        }
        val = *s.rbegin();
        while(val % 2 == 0){
            s.erase(val);
            s.insert(val/2);
            val = *s.rbegin();
            min_dev = min(min_dev, val - *s.begin());
        }
        return min_dev;
    }
};