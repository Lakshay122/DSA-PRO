#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // Method 1st

    // int sum = INT_MIN;
    // int ans = INT_MIN;
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = i; j < n; j++)
    //     {
    //         int sum = 0;
    //         for (int k = i; k <= j; k++)
    //         {
    //             sum += arr[k];
    //         }
    //         ans = max(ans, sum);
    //     }
    // }
    // cout << ans;

    // Method 2nd
    // int maxsum = INT_MIN;
    // for (int i = 0; i < n; i++)
    // {
    //     int currsum = 0;
    //     for (int j = i; j < n; j++)
    //     {
    //         currsum += arr[j];
    //         maxsum = max(maxsum, currsum);
    //     }
    // }
    // cout << maxsum;

    // Method 3rd
    // kadane alogorithm
    int sum = 0;
    int maxsum = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
        if (sum < arr[i])
        {
            sum = arr[i];
        }
        if (sum > maxsum)
        {
            maxsum = sum;
        }
    }
    cout << maxsum;

    return 0;
}