#include <bits/stdc++.h>
using namespace std;
int dp[11][103][103];
int c,ans,n,q;
void printarr(){
	for(int i=0;i<=3;++i){
		for(int j=1;j<=3;++j){
			for(int l=1;l<=3;++l){
				cout<<dp[i][j][l]<<" ";
			}
			cout<<endl;
		}
		cout<<endl;
	}
}
int query(int t,int x1,int y1,int x2,int y2){
    ans=0;
    int e;
    for(int i=0;i<=c;++i){
        e=(t+i)%(c+1);
        ans+=e*(dp[i][x2][y2]-dp[i][x1-1][y2]-dp[i][x2][y1-1]+dp[i][x1-1][y1-1]);
    }
    return ans;
}
void init(){
    cin>>n>>q>>c;
    int x1,y1,k;
    for(int i=0;i<n;++i){
        cin>>x1>>y1>>k;
        dp[k][x1][y1]++;
    }
    for(int i=0;i<=c;++i)
        for(int j=1;j<=101;++j)
            for(int p=1;p<=101;++p)
            	dp[i][j][p]+=dp[i][j-1][p]+dp[i][j][p-1]-dp[i][j-1][p-1];
}
int main(){
    init();
    int t,x1,y1,x2,y2;
    while(q--){
        cin>>t>>x1>>y1>>x2>>y2;
        cout<<query(t,x1,y1,x2,y2)<<"\n";
    }
    return 0;
}
