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

ll int computeval(vector<char> &v) {
    map<char,int> mp;
    for(auto x:v) {mp[x]++;}
    ll int ans=0;
    for(auto x:v) {
        ans += (mp[x]);
    }
    return ans;
}

void solve() {
    ll int n,k;
    cin>>n>>k;
    char a[n];
    rep(i,0,n) {cin>>a[i];}
    map<char,ll int> mp;
    rep(i,0,n) {mp[a[i]]++;}
    vector<pair<ll int,char>> v;
    for(auto x:mp) {v.pb({x.second,x.first});}
    sort(all(v));
    reverse(all(v));
    vector<char> final;
    string ts;
    for(auto x:v) {
        rep(i,0,x.first) {ts+=x.second;}
    }

    rep(i,0,k) {
        final.pb(ts[i]);
    }
    cout<<endl;
    cout<<computeval(final);
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