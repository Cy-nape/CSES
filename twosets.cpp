#include <bits/stdc++.h>
using namespace std;

// Function to divide the set into two subsets with equal sum
void twoset(vector<int> arr, long long n) {
    // Calculate the total sum of the first n natural numbers
    long long sum;
    sum = n * (n + 1) / 2;

    // If the total sum is odd, it's impossible to divide into two equal subsets
    if (sum % 2 != 0) {
        cout << "NO" << '\n'; // Output "NO" and return
        return;
    }

    // Target sum for each subset
    long long target = sum / 2;

    // Two vectors to store the two subsets
    vector<int> sub1, sub2;

    // Start from the largest number and try to form the first subset
    for (int i = n; i >= 1; i--) {
        if (target >= i) {
            // If the current number can fit into the target, add it to subset 1
            sub1.push_back(i);
            target -= i; // Reduce the target by the current number
        } else {
            // Otherwise, add the current number to subset 2
            sub2.push_back(i);
        }
    }

    // If we reach here, it means the division is possible
    cout << "YES" << '\n'; // Output "YES"

    // Output the size and elements of subset 2
    cout << sub2.size() << '\n';
    for (int num : sub2) {
        cout << num << " ";
    }
    cout << '\n';

    // Output the size and elements of subset 1
    cout << sub1.size() << '\n';
    for (int num : sub1) {
        cout << num << " ";
    }
    cout << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    long long n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        arr[i] = i + 1;
    }

    twoset(arr, n);

    return 0;
}
