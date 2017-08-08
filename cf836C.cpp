#include <bits/stdc++.h>
using namespace std;
#define MAXN 103
struct seal{
    int x,y;
}w[MAXN];
int main(){
    int n,a,b;
    cin>>n>>a>>b;
    for(int i=1;i<=n;++i)
        cin>>w[i].x>>w[i].y;
    int ans=0;
    for(int i=1;i<n;++i){
        for(int j=i+1;j<=n;++j){
            if(max(w[i].x,w[j].x)<=a&&w[i].y+w[j].y<=b) 
				ans=max(ans,w[i].x*w[i].y+w[j].x*w[j].y);
            if(max(w[i].x,w[j].y)<=a&&w[i].y+w[j].x<=b) 
				ans=max(ans,w[i].x*w[i].y+w[j].x*w[j].y);
            if(max(w[i].y,w[j].x)<=a&&w[i].x+w[j].y<=b) 
				ans=max(ans,w[i].x*w[i].y+w[j].x*w[j].y);
            if(max(w[i].y,w[j].y)<=a&&w[i].x+w[j].x<=b) 
				ans=max(ans,w[i].x*w[i].y+w[j].x*w[j].y);
            if(max(w[i].x,w[j].x)<=b&&w[i].y+w[j].y<=a) 
				ans=max(ans,w[i].x*w[i].y+w[j].x*w[j].y);
            if(max(w[i].x,w[j].y)<=b&&w[i].y+w[j].x<=a) 
				ans=max(ans,w[i].x*w[i].y+w[j].x*w[j].y);
            if(max(w[i].y,w[j].x)<=b&&w[i].x+w[j].y<=a) 
				ans=max(ans,w[i].x*w[i].y+w[j].x*w[j].y);
            if(max(w[i].y,w[j].y)<=b&&w[i].x+w[j].x<=a) 
				ans=max(ans,w[i].x*w[i].y+w[j].x*w[j].y);
        }
    }
    cout<<ans<<endl;
}
