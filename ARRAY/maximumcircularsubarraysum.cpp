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
    // this approach is correct but time limit is exceed so we use better approach
    //  int maxsum=INT_MIN;
    //  for(int i=0;i<n;i++){
    //      int sum=0;
    //      for(int j=i;j<i+n;j++){
    //          sum+=arr[j%n];
    //          maxsum=max(maxsum,sum);
    //      }
    //  }
    // cout<<maxsum;

    // Method 2nd
    int maxi = INT_MIN;
    int mini = INT_MAX;

    int currsummax = 0;
    int currsummin = 0;
    int total = 0;
    for (int i = 0; i < n; i++)
    {
        currsummax += arr[i];
        maxi = max(maxi, currsummax);
        if (currsummax < 0)
            currsummax = 0;

        currsummin += arr[i];
        mini = min(mini, currsummin);
        if (currsummin > 0)
            currsummin = 0;

        total += arr[i];
    }
    if (maxi < 0)
     {   cout << maxi;
    return 0;
     }
    cout << max(maxi, total - mini);
    return 0;
}