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
    set<int> disS;
    int n;
    cin>>n;
    int a[n], b[n];
    rep(i,0,n) {cin>>a[i]>>b[i];}
    rep(i,0,n) {
        if (a[i]!=b[i]) {disS.insert(b[i]);}
    }
    set<int> tosub;
    rep(i,0,n) {
        if (a[i] == b[i]) {if (tosub.count(b[i])) {tosub.erase(b[i]); continue;} if(disS.count(b[i])) {continue;} else {tosub.insert(b[i]); disS.insert(b[i]);}}
    }
    int cnt=0;
    rep(i,0,n) {if (disS.count(a[i])==0){cnt++;}}
    cout<<cnt+tosub.size();
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