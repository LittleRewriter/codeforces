#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
#define MAX 203*60
//如果每个数都有最多2的因子，则共有203*log10^18约为60个2的因子
struct num{
    LL n;
    int n2,n5;
}w[203];
LL dp[203][MAX],n,k;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cin>>n>>k;
    for(int i=1;i<=n;++i){
        cin>>w[i].n;
        while(w[i].n%2==0) ++w[i].n2,w[i].n>>=1;//枚举因数2
        while(w[i].n%5==0) ++w[i].n5,w[i].n/=5;//枚举因数5
    }
    for(int i=0;i<n;++i)
        for(int j=0;j<MAX;++j)
            dp[i][j]=INT_MIN;
    dp[0][0]=0;
    for(int i=1;i<=n;++i){//当前选择的数i
        for(int j=k;j>=1;--j){//选择的第j个数
            for(int l=MAX;l>=0;--l){//因数2的个数
                if(l-w[i].n2>=0){
                    dp[j][l]=max(dp[j][l],dp[j-1][l-w[i].n2]+w[i].n5);
                }
            }
        }
    }
    LL ans=0;
    for(LL j=0;j<MAX;++j)//枚举求出要求的结果
        ans=max(ans,min(j,dp[k][j]));
    cout<<ans;
}
