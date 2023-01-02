class Solution {
public:
    bool detectCapitalUse(string w) {
        if(w.size()<2)return true;
       
               if(isupper(w[0]) && isupper(w[1])){
                  for(int i=2;i<w.size();i++){
                      if(islower(w[i]))return false;
                  }
                   return true;
               }
              else if(isupper(w[0]) && islower(w[1])){
                 for(int i=1;i<w.size();i++){
                      if(isupper(w[i]))return false;
                  } 
                  return true;
                }
        else {
             for(int i=1;i<w.size();i++){
                      if(isupper(w[i]))return false;
                  }
            
        }
          
          return true;
    }
};