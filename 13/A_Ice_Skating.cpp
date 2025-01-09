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
const int N = 1e2 + 10;
bool vis[N];
vector<int> v[N];
void dfs(int n) {
    vis[n]=1;
    for(auto x:v[n]) {
        if (vis[x]) {continue;}
        dfs(x);
    }
}

void solve() {
    int n;
    cin>>n;
    pair<int,int> p[n];
    rep(i,0,n) {cin>>p[i].first>>p[i].second;}
    rep(i,0,n) {
        rep(j,i+1,n-1-i) {
            if ((p[i].first == p[j].first) || (p[i].second == p[j].second)) {
                v[i+1].pb(j+1);
                v[j+1].pb(i+1);
            }
        }
    }
    int cnt = 0;
    rep(i,1,n) {
        if (vis[i]==0){cnt++; dfs(i);}
    }
    cout<<cnt-1;
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