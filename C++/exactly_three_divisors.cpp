#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    vector<ll > primes;
    ll n =1000000;
    bitset<1000000> is_prime;
    primes.push_back(2);
    for(ll i=3; i<=n; i+=2){
        is_prime.set(i);
    }
    for (ll i=3; i*i <= n; i+=2) {
        if (is_prime[i]) {
            is_prime.reset(i*i);
        }
    }
    for(ll i=3; i<=n; i+=2){
        if (is_prime[i]) {
            primes.push_back(i);
        }
    }
    int t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        int flag=0;
        n=abs(n);
        for(int i=0;primes[i]*primes[i]<=n; i++) {
                if(n%primes[i]==0){
                    if(primes[i]*primes[i]!=n)flag+=2;
                    else flag++;
                    if(flag>1) break; }}

        if(flag<2 & n%2==0){
            for(int i=4; i<n; i+=2){
                if(n%i==0){ flag++;
                    if(flag>1) break; }}}

        if(n!=0 & flag == 1){cout<<"Yes"<<" ";}
        else{cout<<"No"<<" ";}
    }
    return 0;
}
