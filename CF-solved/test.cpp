#include<bits/stdc++.h>
using namespace std;

int main() {
    int w, n, i;
    // cout << "Enter number of elements :";
    cin >> n;
    // cout << "Enter total weight that can be taken :";
    cin >> w;
    vector<int>wt(n), val(n);
    // cout << "Enter all elements value & weight:\n";
    for(i=0; i<n; i++) {
        cin >> val[i] >> wt[i];
    }
    
    memset(dp, -1, sizeof(dp));
    int maxValue = knapsack(w, wt, val, n-1);
    cout << "Max Value that can be carried: " << maxValue;

    return 0;
}