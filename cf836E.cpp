#include <bits/stdc++.h>
using namespace std;
#define MAXN 1000000000000
typedef long long LL;
LL t,gd,A,B,k;
deque<LL> N;
deque<LL>::iterator it;
LL gcd(LL x,LL y){
    return y==0?x:gcd(y,x%y);
}
void getNum(LL x){
	N.clear();
	if(x>1) N.push_back(x);
	for(int i=2;i*i<=x;++i){
		if(x%i==0) N.push_back(i),N.push_back(x/i);
	}
}
void f(LL x,LL y){
	bool r=false;
	k=MAXN;
	if(x==y||y==1){
		++t;
		return;
	}
	if(x==1){
		t+=y;
		return;
	}
    if(y==0) return;
    gd=gcd(x,y);
    A=x/gd,B=y/gd;
    getNum(A);
    for(it=N.begin();it!=N.end();++it){
    	k=min(k,B%(*it)),r=true;
	}	
    t+=k;
    f(x,y-k*gd);
	
}
int main(){
    LL x,y;
    cin>>x>>y;
    f(x,y);
    cout<<t;
}
