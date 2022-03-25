class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        if(bills[0]>6)return false;
        int prev=0;
        int count10=0;
        int cnt20=0;
        for(int i=0;i<bills.size();i++){
            if(bills[i]==5)prev+=1;
            
            if(bills[i]==10){
                if(prev<0){
                    return false;
                }
                prev-=1;
                count10+=1;
            }
            if(bills[i]==20){
                if(prev<=0 ||prev<3 &&count10==0 ){
                    return false;
                }
                if(prev>=3 && count10==0){
                    prev-=3;
                }
                else if(prev>=1 && count10>=1){
                
                prev--;
                count10--;
                } 
            }
        }
        return true;
    }
};