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
    int n,k;
    cin>>n>>k;
    ll int a[n+2];
    rep(i,0,n+2) {a[i] = 0;}
    rep(i,1,n) {cin>>a[i];}
    rep(i,1,n+1) {a[i] = a[i-1] + a[i];}
    vector<pair<int,int>> v;
    lli mx = INT_MAX;
    rep(i,0,n-k + 1) {
        v.pb({a[i+k] - a[i],i});
    }
    sort(all(v));
    cout<<v[0].second + 1;
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