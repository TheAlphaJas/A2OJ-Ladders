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
    string s;
    cin>>s;
    int uc=0,lc=0;
    for(auto x:s) {
        if (x<='Z') {uc++;} else {lc++;}
    }
    if (uc>lc) {
        for(auto x:s) {
            if (x > 'Z') {cout<<(char)(x + 'A' - 'a');} else {cout<<x;}
        }
    } else {
        for(auto x:s) {
            if (x > 'Z') {cout<<x;} else {cout<<(char)(x + 'a' - 'A');}
        }
    }
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