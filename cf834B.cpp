#include <bits/stdc++.h>
#define maxn 1000010
using namespace std;
int n,k,arr[maxn],flag[26],cs[26];
void printarr(){
	for(int i=1;i<=n;++i)
		cout<<arr[i]<<" ";
	cout<<endl;
	for(int i=1;i<=n;++i)
		cout<<flag[i]<<" ";
	cout<<endl;
	for(int i=1;i<=n;++i)
		cout<<cs[i]<<" ";
	cout<<endl;
}
void init(){
    char c=getchar();
    for(int i=1;i<=n;++i){
        arr[i]=c-'A'+1;
        flag[c-'A'+1]=i;
        if(cs[c-'A'+1]==0)
            cs[c-'A'+1]=i;
        c=getchar();
    }
}
int main(){
    cin>>n>>k;
    getchar();
    init();
    //printarr();
    if(k==26){
        cout<<"NO"<<endl;
        return 0;
    }
    
    for(int i=1;i<=n;++i){
        if(i==cs[arr[i]])
            --k;
		
        if(k<0){
            cout<<"YES"<<endl;
            return 0;
        }
        if(flag[arr[i]]<=i)
            ++k;
    }
    if(k>=0)
        cout<<"NO"<<endl;
}
