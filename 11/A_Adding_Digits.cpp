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

int solve(int a, int b) {
    // if (n == 0) {return a;}
    // int ans=-1;
    // cout<<a<<" "<<b<<endl;
    if (a%b == 0) {return a;}
    for(int i=0;i<=9;i++) {
        int z = 10*a + i;
        // cout<<z<<endl;
        if (z%b == 0) {return z;}
    }
    return -1;
}

void solve() {
    int a,b,n;
    cin>>a>>b>>n;
    int mine = solve(a,b);
    if (mine!=-1) {
    string og = to_string(a);
    // cout<<mine;
    string s = to_string(mine);
    // cout<<s.size()<<" "<<og.size()<<" "<<n<<endl;
    if (s.size() > n + og.size()) {cout<<"-1\n";}
    else {
        cout<<s;
        rep(i,0,n-s.size()+og.size()) {cout<<"0";}
    }
    } else {
        cout<<"-1\n";
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