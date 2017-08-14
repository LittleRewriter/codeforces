#include <bits/stdc++.h>
using namespace std;
#define maxn 10003
int twose,fouse,onese;
int cou[4];
int main(){
    int n,k;
    cin>>n>>k;
    twose=n<<1,fouse=n;
    for(int i=0;i<k;++i){
        int p;cin>>p;
        while(p>=3){
            if(fouse>0)
                p-=4,--fouse;
            else if(twose>0)
                p-=2,--twose;
            else{
                cout<<"NO"<<endl;
                return 0;
            }
        }
        if(p>0) cou[p]++;
    }
    while(cou[2]){
        if(twose>0)
            --cou[2],--twose;
        else if(fouse>0)
            --cou[2],--fouse,++onese;
        else
            --cou[2],cou[1]+=2;
    }
    if(cou[1]<=onese+twose+2*fouse) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}
