#include <bits/stdc++.h>
using namespace std;
#define MAXN 203
char a[MAXN];
int val,l,op;
int find(int start,int end){
    int len=0;
    for(int i=start;i<=end;++i)
        if(a[i]>='A'&&a[i]<='Z')
            ++len;
    return len;
}
int main(){
	//freopen("6.in","r",stdin);
	//freopen("6.out","w",stdout);
    scanf("%d",&l);
    op=2;
    char c=getchar();
    while(!((c>='a'&&c<='z')||(c>='A'||c<='Z'))) c=getchar();
    for(int i=1;i<=l+1;++i){
        a[i]=c;
        if(a[i]==' '||i==l+1){
            val=max(val,find(op,i));
            op=i+1;
        }
        c=getchar();
    }
    cout<<val<<endl;
}
