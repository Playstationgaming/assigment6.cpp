#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, q, x;
    cin >> q >> x >> n;

    vector<int> arr(n, 0);

    while (q--) {
        int l, r;
        cin >> l >> r;
        for (int i = l; i <= r; i++) {
            arr[i] += x;
            }
    }

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
    
}