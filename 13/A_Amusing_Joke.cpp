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
    string a,b,c;
    cin>>a>>b>>c;
    a=a+b;
    sort(all(a));
    sort(all(c));
    if (a.size()!=c.size()) {cout<<"NO\n";} else {
        int n = a.size();
        bool fl=0;
        rep(i,0,n) {
            if (a[i]!=c[i]) {fl=1; break;}
        }
        if (fl) {cout<<"NO\n";} else {cout<<"YES\n";}
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