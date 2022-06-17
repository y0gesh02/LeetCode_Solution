/**
 * @param {number} n
 * @return {string}
 */
var countAndSay = function(n) {
         let ans = '1';
         for(let i=0; i<n-1 ; i++){
             ans=say(ans);
         }
         return ans;
};
var say = function(temp){
    let count=0;
    let curr=temp[0];
    let str="";
    
    for (let i=0; i<=temp.length;i++){
        if(curr==temp[i]){
            count++;
        }else{
            str +=count+curr;
            count=1;
            curr=temp[i]
        }   
    }
return str;    
}
