class Solution {
public:
    int distinctPrimeFactors(vector<int>& nums) {
        set<int>st;
        for(int i=0;i<nums.size();i++){
            primeFactors(nums[i],st);
        }
        return st.size();
    }
    void primeFactors(long long int n,set<int>&st){
	int c=2;
	while(n>1){
		if(n%c==0){
		st.insert(c);
		n/=c;
		}
		else c++;
	}
    }

};


