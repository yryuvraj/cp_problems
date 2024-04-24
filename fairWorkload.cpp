#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl '\n'
#define ip(a, n) for(int i = 0; i < n; ++i) cin >> a[i];
#define op(a, n) for(int i = 0; i < n; ++i) cout << a[i] << " "; cout << endl
#define all(x) (x).begin(),(x).end()

const int N = 1e5 + 7;
const int MOD = 1000000007;


bool possible(int x, vector<int>&a, int k){
    int used = 1; 
    int workload = 0; 
    for(int i=0; i<a.size(); i++){
        if(a[i] > x){
            return false;
        }
        if(a[i]+workload <= x){
            workload+=a[i];
        }
        else{
            used++;
            workload=0; 
            workload += a[i];
        }
    }

    if(used<=k){
        return true;
    }
    else{
        return false;
    }
}
void solve() {
    /// fair work load problem
    int k; 
    cin >> k;
    vector<int>arr = {10,20,30,40,50,60,70,80,90};
    int n = arr.size();
    int left = 0; // max of array 
    int right = 1e6; // sum of all elms of array 

    int ans = 1e6;
    while(left <= right){
        int mid  = left + (right - left)/2;
        if(possible(mid, arr, k)){
            ans = mid; 
            right = mid-1; 
        }
        else{
            left = mid+1; 
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
