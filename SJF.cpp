#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl '\n'
#define ip(a, n) for(int i = 0; i < n; ++i) cin >> a[i];
#define op(a, n) for(int i = 0; i < n; ++i) cout << a[i] << " "; cout << endl
#define all(x) x.begin(),x.end()

const int N = 1e5 + 7;
const int MOD = 1000000007;

// SJF - Shortest Job First (Greedy Question 3 - Striver Playlist)

void solve() {
    int n; 
    cin >> n;
    vector<int>arr(n);
    
    /*
    
    4  3  7  1  2
    p1 p2 p3 p4 p5
    p4 -> p5 -> p2 -> p1 -> p3
    0 -- 1 -- 3 -- 6 -- 10 -- 17
    
    */
    
    ip(arr, n);
    sort(arr.begin(), arr.end());
    int t = 0; 
    int wt = 0; 
    for(int i=0; i<n; i++){
        wt += t; 
        t+= arr[i];
    }
    cout << wt/n << endl; //printing the average of the whole case
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

