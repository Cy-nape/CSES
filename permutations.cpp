#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;

    if (n == 1) {
        cout << "1" << endl;
    } else if (n == 2 || n == 3) {
        cout << "NO SOLUTION" << endl;
    } else {
        vector<int> even, odd;
        for (int i = 1; i <= n; i++) {
            if (i % 2 == 0) {
                even.push_back(i);
            } else {
                odd.push_back(i);
            }
        }
        for (int i : even) {
            cout << i << " ";
        }
        for (int i : odd) {
            cout << i << " ";
        }
        cout << endl;
    }

    return 0;
}
