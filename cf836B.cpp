#include <bits/stdc++.h>
using namespace std;
#define MAXN 103
char a[MAXN][MAXN];
int main(){
	//freopen("b.in","r",stdin);
    int n,m;
    cin>>n>>m;
    for(int i=1;i<=n;++i)
        for(int j=1;j<=m;++j)
            cin>>a[i][j];
    if(n%3!=0&&m%3!=0){
        cout<<"No"<<endl;
        return 0;
    }
    else if(n%3==0&&m%3!=0){
        int p=n/3;
        for(int i=1;i<=n;++i){
            for(int j=1;j<=m;++j){
                if(j>1)
                    if(a[i][j]!=a[i][j-1]){
                        cout<<"No"<<endl;
                        return 0;
                    }
                if(i%p!=1&&p!=1)
                    if(a[i][j]!=a[i-1][j]){
                        cout<<"No"<<endl;
                        return 0;
                    }
        	}
                
    	}
    	cout<<"Yes"<<endl;
	}
    else if(n%3!=0&&m%3==0){
        int p=m/3;
        for(int i=1;i<=n;++i){
            for(int j=1;j<=m;++j){
                if(i>1)
                    if(a[i][j]!=a[i-1][j]){
                        cout<<"No"<<endl;
                        return 0;
                    }
                if(j%p!=1&&p!=1)
                    if(a[i][j]!=a[i][j-1]){
                        cout<<"No"<<endl;
                        return 0;
                    }
        	}
    	}
        cout<<"Yes"<<endl;        
    }
    else{
        int p=n/3,q=m/3;
        bool flag1=true,flag2=true;
        for(int i=1;i<=n;++i){
            for(int j=1;j<=m;++j){

                if(flag1&&j>1)
                    if(a[i][j]!=a[i][j-1]){
                        flag1=false;
                    }
                if(flag1&&i%p!=1&&p!=1)
                    if(a[i][j]!=a[i-1][j]){
                        flag1=false;
                    }
                if(flag2&&i>1)
                    if(a[i][j]!=a[i-1][j]){
                        flag2=false;
                    }
                if(flag2&&j%q!=1&&q!=1)
                    if(a[i][j]!=a[i][j-1]){
                        flag2=false;
                    }
                if((!flag1)&&(!flag2)){
                    cout<<"No"<<endl;
                        return 0;
                    }
        }
               
    	}
    cout<<"Yes"<<endl; 
	}
    
    
}
