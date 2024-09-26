#include<iostream>
#include<climits>
using namespace std;

int minCoins(int amount, int coins[], int n)
{
    int dp[amount + 1];
    for (int i = 0; i <= amount; i++)
        dp[i] = INT_MAX;
    dp[0] = 0;
    for (int i = 1; i <= amount; i++) {
        for (int j = 0; j < n; j++) {
            if (coins[j] <= i) {
                int sub_res = dp[i - coins[j]];
                if (sub_res != INT_MAX && sub_res + 1 < dp[i])
                    dp[i] = sub_res + 1;
            }
        }
    }
    return dp[amount] == INT_MAX ? -1 : dp[amount];
}

int main()
{
    int paidAmount;
    cin >> paidAmount;
    int coins[] = {1, 2, 5, 10, 50, 100};
    int n = sizeof(coins) / sizeof(coins[0]);
    int result = minCoins(paidAmount, coins, n);
    if (result == -1)
        cout << "Change cannot be given";
    else
        cout <<result;
    return 0;
}