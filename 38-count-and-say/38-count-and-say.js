/**
 * @param {number} n
 * @return {string}
 */
var countAndSay = function(n) {
      
        let str = '1';
        if(n === 1) return str;
        while (n >1) {
            let curr = "";
            let count = 0;
            let say = str[0];
            for (let i = 0; i < str.length; i++) {
                  if (str[i] === say) {
                      count += 1;
                  }
                  else {
                      curr += count + say;
                      count = 1;
                      say = str[i];
                  }
            }
            str = curr +count+say;
             n -= 1;
         }
  return str;
};