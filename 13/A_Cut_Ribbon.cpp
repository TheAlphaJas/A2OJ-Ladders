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
    int n,a,b,c;
    cin>>n>>a>>b>>c;
    vector<lli> dp(max({n,a,b,c})+2,0);
    dp[a] =1; dp[b] = 1; dp[c] = 1;
    rep(i,0,n+2) {
        if (dp[i] == 0) {continue;}
        if (i + a<=n) {
            dp[i+a] = max(dp[i+a],dp[i]+1);
        }
        if (i + b<=n) {
            dp[i+b] = max(dp[i+b],dp[i]+1);
        }
        if (i + c<=n) {
            dp[i+c] = max(dp[i+c],dp[i]+1);
        }
    }
    cout<<dp[n];
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