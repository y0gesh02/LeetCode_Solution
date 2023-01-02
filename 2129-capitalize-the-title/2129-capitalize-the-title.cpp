class Solution {
public:
    string capitalizeTitle(string title) {
        int n=title.size();
        int j=0;
        for(int i=0;i<=n;i++){
            if(i==n || title[i]==' '){
                if(i-j>2){
                    title[j]=toupper(title[j]);
                    
                }
                j=i+1;
            }
            else{
                title[i]=tolower(title[i]);
            }
        }
        return title;
    }
};
