#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string str;
    cin >> str;

    vector<char> arr(str.begin(), str.end());  // Convert string to vector directly
    int n = arr.size();

    int maxcount = 0;  // Maximum repetition count
    int count = 1;     // Current character streak count

    char preword = arr[0];  // Track the previous character

    for (int i = 1; i < n; i++) {
        char word = arr[i];

        if (word == preword) {  // If the current character matches the previous one
            count++;
        } else {
            if (count >= maxcount) {
                maxcount = count;
            }
            count = 1;         // Reset count for the new character
        }

        preword = word;        // Update `preword` to the current character
    }

    // Final check for the last sequence
    maxcount = max(maxcount, count);

    cout << maxcount << "\n";

    return 0;
}
