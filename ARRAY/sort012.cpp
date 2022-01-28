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

    // Method 1 //in this method we directly use the sort function that is predefined in header file
    //  sort(arr,arr+n);
    // after simply print thew array

    // Method 2nd simply count the no of zeo and one and two
    //  after change the value of array elememt with the  help the count the no of zero and one and two

    // int zero = 0, one = 0, two = 0;
    // for (int i = 0; i < n; i++)
    // {
    //     if (arr[i] == 0)
    //     {
    //         zero++;
    //     }
    //     else if (arr[i] == 1)
    //         one++;

    //     else
    //         two++;
    // }
    // int l = 0;
    // for (int i = 0; i < zero; i++)
    // {
    //     arr[l] = 0;
    //     l++;
    // }
    // for (int i = 0; i < one; i++)
    // {
    //     arr[l] = 1;
    //     l++;
    // }
    // for (int i = 0; i < two; i++)
    // {
    //     arr[l] = 2;
    //     l++;
    // }

    //Method 3rd
    //by using the pointer approach


    int start = 0, mid = 0, end = n - 1;
    while (mid <= end)
    {
        if (arr[mid] == 0)
        {
            swap(arr[mid], arr[start]);
            start++;
            mid++;
        }
        else if (arr[mid] == 1)
        {
            mid++;
        }
        else if (arr[mid] == 2)
        {
            swap(arr[mid], arr[end]);
            end--;
        }
    }

    // print array
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
        /* code */
    }
    return 0;
}