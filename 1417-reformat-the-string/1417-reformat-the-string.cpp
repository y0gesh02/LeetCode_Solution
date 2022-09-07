class Solution {
public:
    string reformat(string s) {
        int n=s.size();
        string d="",a="";
        for(auto it:s){
            if(isalpha(it))a+=it;
            else d+=it;
        }
        if( abs(int(a.size() - d.size())) >1)return "";
        int i=0,j=0,k=0;
        if(a.size()>=d.size()){
            while(i<n){
               s[i++]=a[j++];
                s[i++]=d[k++];
            }
        }
        else{
              while(i<n){
               s[i++]=d[j++];
                s[i++]=a[k++];
            }
        }
        return s;
    }
};
