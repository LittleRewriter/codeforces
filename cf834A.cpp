#include <bits/stdc++.h>
#ifdef WIN32
#define LL "%I64d"
#else
#define LL"%lld"
#endif//±àÒë¿ª¹Ø
using namespace std;
/*void read(long long &x){
    x=0;
    char c=getchar();
    while(isdigit(c)){
        x=(x*10+c-'0')%4;
        c=getchar();
    }
}*/
short lisanhua(char x){
    if(x==118)
        return 1;
    if(x==60)
        return 2;
    if(x==94)
        return 3;
    if(x==62)
        return 4;
}
int main(){
    char a,b;
    cin>>a>>b;
    short r1=lisanhua(a),r2=lisanhua(b);
    int dis=r1-r2;
    long long t;
    cin>>t;
    if(dis==0||dis==-2||dis==2)
        cout<<"undefined"<<endl;
    else if(dis<0){
    	t=t%4;
        dis=-dis;
        if(dis==t)
            cout<<"cw"<<endl;
        if(dis+t==4)
            cout<<"ccw"<<endl;
    }
    else{
    	t=t%4;
        if(dis==t)
            cout<<"ccw"<<endl;
        if(dis+t==4)
            cout<<"cw"<<endl;
    }
    return 0; 
    
}

