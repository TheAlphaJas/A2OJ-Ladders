#include <bits/stdc++.h>
using namespace std;
//author: von_Braun
#define ll long long
#define lli long long int
#define pb push_back
#define rep(var, start, num) for(lli var = start; var <start + num; var++)
#define all(x) x.begin(), x.end()
#define ulli unsigned long long int
#define ull unsigned long long
bool sortbysec(const pair<ll,ll> &a,const pair<ll,ll> &b) { return (a.second < b.second); }

void solve() {
    int n = 3;
    int a[n][n];
    vector<vector<int>> status(n,vector<int>(n,1));

    rep(i,0,n) {
        rep(j,0,n) {
            cin>>a[i][j];
            a[i][j] = a[i][j]%2;
            if (a[i][j] == 1) {
                // cout<<i<<" "<<j<<endl;
                for(int x = i-1;x<=i+1;x++) {
                    for(int y = j-1;y<=j+1;y++) {
                        // cout<<x<<" "<<y<<endl;
                        if (x < 0) {continue;}
                        if (x >= 3) {continue;}
                        if (y < 0) {continue;}
                        if (y >= 3) {continue;}
                        if (x!=i && y!=j) {continue;}
                        // cout<<"proc "<<x<<" "<<y<<endl;
                        // cout<<status[x][y]<<endl;
                        status[x][y]++;
                    }
                }
            }
        }
    }

    rep(i,0,n) {
        rep(j,0,n) {
            status[i][j] = status[i][j]%2;
            cout<<status[i][j];
        }
        cout<<endl;
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