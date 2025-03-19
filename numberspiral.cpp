#include <bits/stdc++.h> // Includes all standard libraries in C++
using namespace std;

// Function to calculate the number at position (x, y) in the spiral
long long answer(long long x, long long y) {
    // Find the maximum of the two coordinates
    long long mx = max(x, y);

    // If the maximum coordinate is even
    if (mx % 2 == 0) {
        // Special case: When y = 1 (the starting point of an even row)
        if (y == 1) {
            return mx * mx;
        }
        // Case 1: If x < mx (moving vertically down from the top-right corner)
        else if (x < mx) {
            return answer(mx, mx) - (mx - x);
        }
        // Case 2: If x == mx (we are exactly on the right boundary)
        else if (x == mx) {
            return (mx * mx - (y - 1));
        }
    }
    
    // If the maximum coordinate is odd
    else {
        // Special case: When x = 1 (the starting point of an odd column)
        if (x == 1) {
            return mx * mx;
        }
        // Case 3: If y < mx (moving horizontally from the bottom-left corner)
        else if (y < mx) {
            return answer(mx, mx) - (mx - y);
        }
        // Case 4: If y == mx (we are exactly on the bottom boundary)
        else if (y == mx) {
            return mx * mx - (x - 1);
        }
    }
}

// Function to handle each test case
void solve() {
    long long x, y;
    cin >> x >> y; // Input x (column) and y (row)
    cout << answer(x, y) << "\n"; // Output the result for each query
}

int main() {
    ios::sync_with_stdio(false); // Optimizes I/O operations for faster performance
    cin.tie(NULL);               // Unties cin and cout for efficiency

    int t;
    cin >> t; // Number of test cases
    while (t--) {
        solve(); // Process each test case
    }

    return 0; // Successful program termination
}
