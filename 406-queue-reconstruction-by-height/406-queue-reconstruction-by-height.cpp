class Solution {
public:
   static bool compare(vector<int>& a,vector<int>&b){
        if(a[0]==b[0]){
            return a[1]<b[1];
        }
        return a[0] > b[0];
    }
    vector<vector<int>> reconstructQueue(vector<vector<int>>& people) {
        int n=people.size();
        vector<vector<int>>ans;
        sort(people.begin(),people.end(),compare);
        for(int i=0;i<n;i++){
            int idx=people[i][1];
            ans.insert(ans.begin()+idx,people[i]);
        }
        return ans;
    }
};
// Sort the array in decreasing order of their heights and if two people have same height, sort them in increasing order of their [1] index. (We used compare function for this)
// [[7,0], [4,4], [7,1], [5,0], [6,1], [5,2]] => [[7,0], [7,1], [6,1], [5,0], [5,2], [4,4]]