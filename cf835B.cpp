#include <bits/stdc++.h>
using namespace std;
long long k,sum,arr[10],len;
void init(){
    cin>>k;
    char c=getchar();
    while(!isdigit(c))  c=getchar();
    while(isdigit(c)){
        sum+=c-'0';
        ++len;
        ++arr[c-'0'];
        c=getchar();
    }
}
int main(){
    
    /freopen("a.in","r",stdin);
    init();
    //cout<<len<<" "<<sum<<" ";
    if(sum>=k) {
        cout<<0<<endl;
        return 0;
    }
    for(long long i=0,p=0;i<len;++p){
        for(long long j=0;j<arr[p];++j){
            
            sum+=9-p;
            ++i;
            if(sum>=k){
                cout<<i<<endl;
                return 0;
            }
        }
    }

}
