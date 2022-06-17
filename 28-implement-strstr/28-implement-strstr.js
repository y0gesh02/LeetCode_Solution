/**
 * @param {string} haystack
 * @param {string} needle
 * @return {number}
 */
var strStr = function(haystack, needle) {
   
    //var output = 0;
    var left = 0;
    var right = needle.length;

    while(right <= haystack.length) {
        if(haystack.slice(left, right) == needle) {
            return left;
        } 
        else{
             left++;
             right++;
         }
     }
    
    return -1;
};
