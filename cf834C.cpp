#include <bits/stdc++.h>
using namespace std;
#define eps 0.000001
typedef long long ll;
void read(ll &x){
    x=0;
    char c=getchar();
    while(!isdigit(c))  c=getchar();
    while(isdigit(c)){
        x=x*10+c-'0';
        c=getchar();
    }

}
bool havealpha(ll a,ll b){
    ll t=round(pow((long double)a*b,1.0/3));
    if(fabs(t*t*t-a*b)<=eps&&a%t==0&&b%t==0)
        return 1;
    else return 0;    
}
int main(){
    ll q;
    read(q);
    ll m,n;
    for(int i=0;i<q;++i){
        read(m),read(n);
        if(havealpha(m,n))  
            cout<<"Yes"<<"\n";
        else    
            cout<<"No"<<"\n";
    }
}
