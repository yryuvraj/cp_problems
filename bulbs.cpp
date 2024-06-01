#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl '\n'
#define ip(a, n) for(int i = 0; i < n; ++i) cin >> a[i];
#define op(a, n) for(int i = 0; i < n; ++i) cout << a[i] << " "; cout << endl
#define all(x) (x).begin(),(x).end()

const int N = 1e5 + 7;
const int MOD = 1000000007;

bool isPerfectSquare(int n){
    if (n <= 1) {
        return true;
    }
    long long left = 1, right = n;
    while (left <= right) {
        long long mid = left + (right - left) / 2;
        long long square = mid * mid;
        if (square == n) {
            return true;
        }
        else if (square < n) {
            left = mid + 1;
        }
        else {
 
            right = mid - 1;
        }
    }
    return false;
}

void solve() {
    int n; 
    cin >> n; 
    /// any light buld will be on if the toggle qty is odd, and off if the toggle 
    /// qty is even..
    /// therefore -->
    int count = 0; 
    for(int i=1; i<=n; i++){
        if(isPerfectSquare(i) == true){
            count++;
        }
        else{
            continue;
        }
    }
    cout << count << endl;
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
