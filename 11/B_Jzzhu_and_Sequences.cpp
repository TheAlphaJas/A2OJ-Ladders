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
ll int MOD = 1e9 + 7;
void solve() {
    ll int x,y,n;
    cin>>x>>y>>n;
    n--;
    n = n%6;
    ll int ans=0;
    switch (n) {
        case 0:
        ans = x;
        break;
        case 1:
        ans = y;
        break;
        case 2:
        ans = y-x;
        break;
        case 3:
        ans = -x;
        break;
        case 4:
        ans = -y;
        break;
        case 5:
        ans = x-y;
        break;
    }
    while (ans < 0) {ans = MOD + ans;}
    ans = ans%MOD;
    cout<<ans;
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