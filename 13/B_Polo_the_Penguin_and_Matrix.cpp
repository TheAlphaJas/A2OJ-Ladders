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

double findMedian(std::vector<int>& nums) {
    size_t n = nums.size();
    std::nth_element(nums.begin(), nums.begin() + n / 2, nums.end());
    if (n % 2 == 0) {
        // For even size, find the two middle elements
        int mid1 = nums[n / 2];
        std::nth_element(nums.begin(), nums.begin() + (n / 2 - 1), nums.end());
        int mid2 = nums[n / 2 - 1];
        return (mid1 + mid2) / 2.0;
    } else {
        return nums[n / 2]; // For odd size
    }
}

void solve() {
    int n,m,k;
    cin>>n>>m>>k;
    vector<int> v;
    int t;
    rep(i,0,n) {
        rep(j,0,m) {
            cin>>t; v.pb(t);
        }
    }      
    set<int> S;
    bool fl=0;
    for(auto x:v) {
        S.insert(x%k);
        if (S.size()>1) {fl=1; break;}
    }
    if (fl) {cout<<"-1\n";} else {
        rep(i,0,v.size()) {
            v[i] = v[i]/k;
        }
        sort(all(v));
        double m = findMedian(v);
        double ans= 0;
        for(auto x:v) {
            ans += abs(x - m);
        }
        cout<<(lli)ans;
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