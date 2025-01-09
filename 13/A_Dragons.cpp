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
    ll int s,n;
    cin>>s>>n;
    pair<ll int,ll int> p[n];
    rep(i,0,n) {cin>>p[i].first>>p[i].second; p[i].second*=-1;}
    sort(p,p+n);
    ll int fl = 0;
    rep(i,0,n) {
        if(s<=p[i].first) {fl=1; break;}
        else {
            s += (-p[i].second);
        }
    }
    if (fl==1) {cout<<"NO\n";} else{cout<<"YES\n";}
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