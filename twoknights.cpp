#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    long long n;
    cin>>n;
    for (int i = 1; i <= n; i++)
    {
        long long total_ways = (1LL * i * i * (i * i - 1)) / 2;
        long long attacking_positions = 4*(i-2)*(i-1);
        long long non_attacking_positions = total_ways - attacking_positions;
        cout<<non_attacking_positions<<'\n';
    }
    
    return 0;
}
