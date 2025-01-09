#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define lli long long int
#define pb push_back
#define rep(var, start, num) for(ulli var = start; var <start + num; var++)
#define all(x) x.begin(), x.end()
#define ulli unsigned long long int
void solve() {
    string s="";
    string g;
    cin>>g;
    int l=g.size();
    rep(i,0,l){
        if ((s=="")&&(g[i]=='h')) {s=s+g[i];}
        else if ((s=="h")&&(g[i]=='e')) {s=s+g[i];}
        else if ((s=="he")&&(g[i]=='l')) {s=s+g[i];}
        else if ((s=="hel")&&(g[i]=='l')) {s=s+g[i];}
        else if ((s=="hell")&&(g[i]=='o')) {s=s+g[i];} 
    }
   
    if (s=="hello") {cout<<"YES\n";} else {cout<<"NO\n";}
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int tc = 1;
    //cin >> tc;
    for (int t = 1; t <= tc; t++) {
solve();
    }
}