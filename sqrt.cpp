#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl '\n'
#define ip(a, n) for(int i = 0; i < n; ++i) cin >> a[i];
#define op(a, n) for(int i = 0; i < n; ++i) cout << a[i] << " "; cout << endl
#define all(x) (x).begin(),(x).end()

const int N = 1e5 + 7;
const int MOD = 1000000007;

void solve() {
    int n; 
    cin >> n; 
    int l = 0; 
    int r = n;
    int ans = 0; 
    while(l<=r){
        int mid = l + (r-l)/2;
        if(mid*mid <= n){
            ans = mid; 
            l = mid+1;
        }
        else{
            r = mid - 1;
        }
    } 
    cout << ans << endl;
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 1;
    /// cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
