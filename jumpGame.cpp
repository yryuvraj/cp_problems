#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl '\n'
#define ip(a, n) for(int i = 0; i < n; ++i) cin >> a[i];
#define op(a, n) for(int i = 0; i < n; ++i) cout << a[i] << " "; cout << endl
#define all(x) x.begin(),x.end()

const int N = 1e5 + 7;
const int MOD = 1000000007;

// Jump Game (Greedy Question 4 - Striver Playlist)

void solve() {
    int n; 
    cin >> n;
    vector<int>arr(n);
    ip(arr, n);
    int zero=0;
    if(find(arr.begin(), arr.end(), 0)!=arr.end()){
        // Found the item
        zero++;
    }
    else{
        cout << "Yes we can reach the end" << endl;
        return;
    }
    int maxi = 0; 
    for(int i=0; i<n; i++){
        if(i > maxi){
            cout << "No we cannot reach the end" << endl;
            return;
        }
        else{
            maxi = max(maxi, i+arr[i]);
        }
    }
    cout << "Yes we can reach the end" << endl;
    return;
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

