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
    int n,k;
    cin>>n>>k;
    int a[n];
    rep(i,0,n) {cin>>a[i]; a[i] = 5-a[i];}
    sort(a,a+n);
    // rep(i,0,n) {cout<<a[i]<<" ";}
    // cout<<endl;
    int j=n;
    rep(i,0,n) {if(a[i]>=k){j=i; break;}}
    cout<<(n-j)/3;
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