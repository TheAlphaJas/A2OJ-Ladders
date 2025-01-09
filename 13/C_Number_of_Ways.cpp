#include <bits/stdc++.h>
using namespace std;
//author: von_Braun
#define ll long long
#define lli long long int
#define pb push_back
#define rep(var, start, num) for(ulli var = start; var <start + num; var++)
#define all(x) x.begin(), x.end()
#define ulli unsigned long long int
#define ull unsigned long long
bool sortbysec(const pair<ll,ll> &a,const pair<ll,ll> &b) { return (a.second < b.second); }

void solve() {
    int n;
    cin>>n;
    int a[n];
    lli sum = 0;
    rep(i,0,n) {cin>>a[i]; sum+=a[i];}
    vector<int> fs,es;
    if (sum%3 != 0) {cout<<"0\n";} else {
        lli s1 = sum/3;
        lli ts = 0;
        rep(i,0,n) {ts+=a[i]; if(ts == s1) {fs.pb(i);}}
        ts = 0;
        for(int i = n-1;i>=0;i--) {ts+=a[i]; if (ts == s1) {es.pb(i);}}
    
    lli ans = 0;
    sort(all(es));
    for(auto x:fs) {
        auto g = upper_bound(all(es),x+1);
        int ds = abs(distance(g,es.begin()));
        ds = es.size() - ds;
        ans += ds;
    }
    cout<<ans;
    }
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