#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl '\n'
#define ip(a, n) for(int i = 0; i < n; ++i) cin >> a[i];
#define op(a, n) for(int i = 0; i < n; ++i) cout << a[i] << " "; cout << endl
#define all(x) x.begin(),x.end()

const int N = 1e5 + 7;
const int MOD = 1000000007;

// Lemonade Change (Greedy Question 2 - Striver Playlist)

void solve() {
    int n; 
    cin >> n; 
    vector<int>bills(n);
    ip(bills, n);
    // the catch is do you have enough change for the customer to be able to buy the    
    // lemonade --> if you do not have the change, you cannot sell the product to the 
    // customer
    int five = 0; 
    int ten = 0; 
    int twenty = 0; 
    for(int i=0; i<n; i++){
        if(bills[i] == 5){
            five++;
        }
        else if(bills[i] == 10){
            if(five){
                five--;
                ten++;
            }
            else{
                cout << "NO" << endl;
                return;
            }
        }
        else{
            if(ten and five){
                ten--; 
                five--; 
            }
            else if(five >= 3){
                five -= 3; 
            }
            else{
                cout << "NO" << endl;
                return;
            }
        }   
    }
    cout << "YES" << endl;

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

