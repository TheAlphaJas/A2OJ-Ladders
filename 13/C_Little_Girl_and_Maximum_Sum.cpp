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
    ll int n,q;
    cin>>n>>q;
    ll int a[n];
    rep(i,0,n) {cin>>a[i];}
    vector<ll int> b(n+2,0);
    ll int l,r;
    rep(i,0,q) {
        cin>>l>>r;
        b[l]++;
        b[r+1]--;
    }
    vector<ll int> m;
    for(int i=1;i<=n;i++) {
        b[i]+=b[i-1];
        if (b[i]>0) {
        m.pb(b[i]);
        }
    }
    sort(all(m));
    reverse(all(m));
    sort(a,a+n);
    lli s=0;
    rep(i,0,m.size()) {
        s+=(a[n-1-i]*m[i]);
    }
    cout<<s<<endl;        
}

int main() {
    //add quotes incase input output file
    //freopen(input.txt,r,stdin);
    //freopen(output.txt,w,stdout);
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int tc = 1;
    // cin >> tc;
    for (int t = 1; t <= tc; t++) {
        solve();
    }
}