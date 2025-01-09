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
    set<char> v = {'a','e','i','o','u','A','E','I','O','U','y','Y'};
    int l = s.size();
    string s1,s2;
    rep(i,0,l) {if (v.count(s[i]) == 0) { if (s[i]<'a') { s1 += (s[i] + 'a' - 'A');} else {s1 += s[i];}}}
    rep(i,0,s1.size()) {
        cout<<"."<<(char)(s1[i]);
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