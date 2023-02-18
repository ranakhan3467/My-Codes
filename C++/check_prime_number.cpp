#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
    ll n;
    cin>>n;
    ll rt = sqrt(n);
    bool flag=true;
    if(n>1 & n%2!=0) for(int i=3;i<=rt; i+=2) { if(n%i==0){ flag = 0; break; }}
    else {flag=false;}

    if(flag == true | n==2){cout<<"Yes"<<endl;}
    else if(flag == false){cout<<"No"<<endl;}
    return 0;
}
