#include <iostream>
#include <vector>

using namespace std;

int minCoins(vector<int>& coins, int N) {
    int count = 0;
    for (int i = coins.size() - 1; i >= 0 && N > 0; --i) {
        count += N / coins[i];
        N %= coins[i];
    }
    return count;
}

int main() {
    vector<int> coins = {10, 25, 5}; // Example 1: coins[] = {10, 25, 5)
    int N = 30; // Example 1: N = 30
    cout << "Minimum number of coins required: " << minCoins(coins, N) << endl;

    coins = {1, 9, 6, 5}; // Example 2: coins[] = {1, 9, 6, 5)
    N = 4; // Example 2: N = 4
    cout << "Minimum number of coins required: " << minCoins(coins, N) << endl;

    return 0;
}

