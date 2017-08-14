#include <bits/stdc++.h>
using namespace std;
int a[103];
int main(){
    int n,k;
    cin>>n>>k;
    int count=0;
    int i;
    for(i=0;i<n;++i)
        cin>>a[i];
    for(i=0;i<n;++i){
        if(a[i]>8){
            a[i+1]+=a[i]-8;
            a[i]=8;
        }
        count+=a[i];
        if(count>=k) break;
    }
    if(count>=k) cout<<i+1;
    else cout<<-1;
}
