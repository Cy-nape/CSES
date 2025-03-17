#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);  // i alwasy use these lines in my code to make it little bit faster

    int n;
    cin >> n;

    vector<long long> arr(n);   //consider to use long long as may use big valuse dor the test in CSES
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    long long mov = 0;

    for (int i = 0; i < n - 1; i++) {
        if (arr[i + 1] < arr[i]) {
            mov += arr[i] - arr[i + 1];  //directly finding the number of moves we need to make it bigger 
            arr[i + 1] = arr[i];  
        }
    }

    cout << mov << endl;

    return 0;
}
