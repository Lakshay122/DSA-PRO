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

    // method1st
    // this method is brute force
    // its time complexity=O(n^2)
    // space complexity=O(1)
    //  int maxprofit = 0;
    //  for (int i = 0; i < n - 1; i++)
    //  {
    //      for (int j = i + 1; j < n; j++)
    //      {
    //          if (arr[j] > arr[i])
    //          {
    //              maxprofit = max(maxprofit, arr[j] - arr[i]);
    //          }
    //      }
    //  }
    //  cout << maxprofit;

    // method2nd
    // its time complexty=O(n)
    // space complexity=O(n)
    // int help[n];
    // help[n - 1] = arr[n - 1];
    // int maxno = help[n - 1];
    // for (int i = n - 2; i >= 0; i--)
    // {

    //     help[i] = max(maxno, arr[i]);
    //     maxno = max(maxno, arr[i]);
    // }
    // int maxprofit = 0;
    // for (int i = 0; i < n; i++)
    // {
    //     if (help[i] > arr[i])
    //     {
    //         maxprofit = max(maxprofit, help[i] - arr[i]);
    //     }
    // }
    // cout << maxprofit;


    //method3rd
    //its time complexity isO(n)
    //its space complexoity is O(1)

    int minsofar=arr[0];
    int maxprofit=0;
    for(int i=0;i<n;i++){
        minsofar=min(minsofar,arr[i]);
        maxprofit=max(maxprofit,arr[i]-minsofar);
        }
        cout<<maxprofit;


    return 0;
}