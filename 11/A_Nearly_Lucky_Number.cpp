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
    int cnt = 0;
    for(auto x:s) {if(x == '4'||x == '7') {cnt++;}}
    string g = to_string(cnt);
    set<char> S;
    for(auto x:g) {S.insert(x);}
    if (((S.size() == 2) && S.count('4') && S.count('7'))||(S.size() == 1 && S.count('4'))||(S.size() == 1 && S.count('7'))) {cout<<"YES\n";} else {cout<<"NO\n";}
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