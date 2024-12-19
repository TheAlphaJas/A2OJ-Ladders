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
    int n;
    cin>>n;
    int a[n];
    rep(i,0,n) {cin>>a[i];}
    int max_i=0, min_i=0, maxe=0, mine=INT_MAX;
    rep(i,0,n) {
        if (a[i]<=mine) {min_i = i; mine = a[i];}
        if (a[i]>maxe) {max_i = i; maxe = a[i];}
    }
    int z = n-1 - min_i;
    z += (max_i);
    if (min_i < max_i) {
        z--;
    }
    cout<<z<<endl;
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