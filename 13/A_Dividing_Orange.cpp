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
    set<int> S;
    for(int i=1;i<=n*k;i++) {S.insert(i);}
    // cout<<S.size()<<endl;
    int d[k];
    rep(i,0,k) {
        cin>>d[i];
        S.erase(d[i]);
    }     
    int c=0;
    for(auto x:S) {
        cout<<x<<" ";
        c++;
        if (c%n==n-1) {cout<<d[c/n]<<"\n"; c++;}
    } 
    if (S.size()==0) {
        rep(i,0,k) {
            cout<<d[i]<<endl;
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