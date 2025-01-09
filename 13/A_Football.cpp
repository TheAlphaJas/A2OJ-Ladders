#include <bits/stdc++.h>
using namespace std;
//jasmer57
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
    int l=s.size();
    int count=1;
    char p = s[0];
    int mxc=0;
    rep(i,1,l-1){
        if (s[i]==p) {count++;} else {count=1; p=s[i];}
        mxc=max(count,mxc);
    }
    //cout<<mxc;
    if (mxc>6) {cout<<"YES";} else {cout<<"NO";}
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