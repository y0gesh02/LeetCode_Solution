class Solution {
public:
    string categorizeBox(int l, int w, int h, int m) {
        long long L=l;
        long long W=w;
        long long H=h;
        
        string ans="";
        long long t=10000;
        long long tt=1000000000;
        long long x=L*W;
        long long vol=x*H;
        if(L>=t || W>=t || H>=t || m>=t ||vol>=tt)ans="Bulky";
        if(m>=100 && ans!="")return "Both";
        if(m>=100)return "Heavy";
        if(ans=="")return "Neither";
        return ans;  
    }
};