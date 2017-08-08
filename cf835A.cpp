#include <bits/stdc++.h>
using namespace std;
int main(){
    int s,v1,v2,t1,t2;
    cin>>s>>v1>>v2>>t1>>t2;
    int a=s*v1+2*t1;
    int b=s*v2+2*t2;
    //cout<<a<<b;
    if(a==b)
        cout<<"Friendship"<<endl;
    else if(a>b)
        cout<<"Second"<<endl;
    else if(a<b)
        cout<<"First"<<endl;
    return 0;
}
