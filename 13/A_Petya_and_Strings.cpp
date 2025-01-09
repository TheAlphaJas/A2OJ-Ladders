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
    string a,b;
    cin>>a>>b;
    rep(i,0,a.size()) {
        if (a[i] > 'Z') {a[i] = a[i] + 'Z' - 'z';}
        if (b[i] > 'Z') {b[i] = b[i] + 'Z' - 'z';}
    }
    if (a<b){cout<<"-1\n";} else if(a==b){cout<<"0\n";} else {cout<<"1\n";}
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