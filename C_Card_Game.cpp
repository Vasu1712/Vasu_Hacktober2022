#include <bits/stdc++.h>
using namespace std;
vector<int > fact(61);
int mod = 998244353;
void a(){
    int n=2;
    fact[1] = 1;
    fact[2] = 2;
    for(int i=3;i<=60;i++){
        n=n*i;
        n=n%mod;
        fact[i]=n%mod;
    }
}
int main(){
    int t;cin>>t;
    a();
    cout<<fact[3];
    while(t--){
        int n;cin>>n;

    }
}