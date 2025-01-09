#include <bits/stdc++.h>
using namespace std;
//author: jasmer57
#define ll long long
#define lli long long int
#define pb push_back
#define rep(var, start, num) for(ulli var = start; var <start + num; var++)
#define all(x) x.begin(), x.end()
#define ulli unsigned long long int
#define ull unsigned long long
#define mkp make_pair
double INF = numeric_limits<double>::infinity();
bool sortbysec(const pair<ll,ll> &a,const pair<ll,ll> &b) { return (a.second < b.second); }

void solve() {
    int n;
    cin>>n;
    rep(i,0,2*n) {cout<<" ";} cout<<0<<endl;
    rep(i,1,n){
        rep(j,0,(2*(n-i))) {cout<<" ";}
        rep(j,0,i+1) {  cout<<j<<" ";}
        rep(j,0,i) { if (j!=i-1) {cout<<i-1-j<<" ";} else {cout<<i-1-j;}}
        //rep(j,0,2*(n-i) - 1) {cout<<" ";}
        cout<<endl;
    }
    for(int i=n-1; i>0; i--){
        rep(j,0,(2*(n-i))) {cout<<" ";}
        rep(j,0,i+1) {  cout<<j<<" ";}
        rep(j,0,i) { if (j!=i-1) {cout<<i-1-j<<" ";} else {cout<<i-1-j;}}
        //rep(j,0,2*(n-i) - 1) {cout<<" ";}
        cout<<endl;
    }
    rep(i,0,2*n) {cout<<" ";} cout<<0<<endl;
}
int main() {
    //add quotes incase input output file
    //freopen(input.txt,r,stdin);
    //freopen(output.txt,w,stdout);
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int tc = 1;
    //cin >> tc;
    for (int t = 1; t <= tc; t++) {
        solve();
    }
}