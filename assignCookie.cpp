#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl '\n'
#define ip(a, n) for(int i = 0; i < n; ++i) cin >> a[i];
#define op(a, n) for(int i = 0; i < n; ++i) cout << a[i] << " "; cout << endl
#define all(x) x.begin(),x.end()

const int N = 1e5 + 7;
const int MOD = 1000000007;

// Assign Cookies (Greedy Question 1 - Striver Playlist)

void solve() {
    int n; 
    cin >> n; 
    vector<int>greed(n);
    for(int i=0; i<n; i++){
        cin >> greed[i];
    }
    int m; 
    cin >> m; 
    vector<int>size(m);
    for(int i=0; i<m; i++){
        cin >> size[i];
    }
    sort(greed.begin(), greed.end());
    sort(size.begin(), size.end());
    // okay so you were correct till sorting both the arrays, solving ahead
    // without the tutorial
    int count = 0;
    int left = 0; 
    int right = 0; 

    while(left <= n and right <= m){
        if(greed[left] <= size[right]){
            count++;
            left++;
            right++;
        }
        else{
            right++;
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

