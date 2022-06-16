class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        int n=letters.size();
       // if(target==letters[n-1])return letters[0];
        int i=0;
        int j=n-1;
        char ans=letters[0];
        while(i<=j){
            int mid=(i+j)/2;
            if(target<letters[mid]){
                ans=letters[mid];
                j=mid-1;
            }
            else if(target>=letters[mid]){
                i=mid+1;
            }
        }
        return ans;
    }
};