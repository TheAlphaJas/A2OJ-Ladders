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

vector<int> proc(vector<int> &a, int l, int r) {
    vector<int> out;
    vector<int> temp;
    for(int i=0;i<a.size();i++) {
        if (i>=l && i<=r) {temp.pb(a[i]);} else {
            if (i==r+1) {
                reverse(all(temp));
                for(auto x:temp) {out.pb(x);}
                temp.clear();
            }
            out.pb(a[i]);
        }
    }
    if (temp.size()>0) {
        reverse(all(temp));
        for(auto x:temp) {out.pb(x);}
        temp.clear();
    }
    return out;
}

bool checkvecs(vector<int> &a, vector<int> &b) {
    int n = a.size();
    if (b.size()!=n) {return 0;}
    rep(i,0,n) {if (a[i]!=b[i]) {return 0;}}
    return 1;
}

void solve() {
    int n;
    cin>>n;
    vector<int> a(n); rep(i,0,n) {cin>>a[i];}
    vector<int> v;
    rep(i,1,n-1) {
        if (a[i]>a[i-1]) {v.pb(1); } else {v.pb(-1);}
    }
    int l_mone=-1, r_mone=-1;
    rep(i,0,n-1) {if(v[i] == -1) {l_mone = i; break;}}
    for(int i=n-2;i>=0;i--) {if(v[i] == -1) {r_mone = i; break;}}
    if (l_mone == -1 || r_mone == -1) {cout<<"yes\n"; cout<<1<<" "<<1<<endl;} else {
    vector<int> nw = proc(a,l_mone, r_mone+1);
    vector<int> gt;
    for(auto x:nw)  {gt.pb(x);}
    sort(all(gt));
    bool fl=0;
    rep(i,0,n) {if (gt[i]!=nw[i]) {fl=1; break;}}
    if (fl==0) {cout<<"yes\n"; cout<<l_mone+1<<" "<<r_mone+2<<endl;} else {cout<<"no\n";}
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