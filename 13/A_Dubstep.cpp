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
    string s;
    cin>>s;
    string v;
    vector<string> ans;
    for(auto x:s) {
        v.pb(x);
        if (v.size()>2) {
            if (v.substr(v.size()-3,3) == "WUB") {v.resize(v.size()-3); ans.pb(v); v.clear(); }
        }
    }
    if (v.size()!=0) {ans.pb(v);}
    for(auto x:ans) {if (x!= " ") {cout<<x<<" ";}} cout<<endl;
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