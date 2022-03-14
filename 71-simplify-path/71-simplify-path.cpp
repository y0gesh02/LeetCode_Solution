class Solution {
public:
    string simplifyPath(string path) {
        string res;
        int n=path.size();
        stack<string >st;
        for(int i=0;i<n;i++){
            if(path[i]=='/'){
                continue;
            }
            string temp="";
            while(i<path.size() && path[i]!='/'){
                    temp+=path[i];
                    i++;
            }
           if(temp=="."){
                 continue;  
               }
           else if(temp==".."){
                  if(!st.empty()) st.pop();
               }
           else{
			// push the directory file name to stack
                st.push(temp);
            }
    }
         while(!st.empty())
        {
            res = "/" + st.top() + res;
            st.pop();
        }
        // if no directory or file is present
        if(res.size() == 0)
            return "/";
        
        return res;
        }
    
};