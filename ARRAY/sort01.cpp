#include <bits/stdc++.h>
using namespace std;
int main()
{
    int count;
    cin >> count;
    int arr[count];
    for (int i = 0; i < count; i++)
    {
        cin >> arr[i];
        /* code */
    }

    // Method 1 //in this method we directly use the sort function that is predefined in header file
    //  sort(arr,arr+n);
    // after simply print thew array

    // Method 2nd
    // in this method simply count the no of zero and one after change the value of array with the  help the count the no of zero and one

    // int count0=0;
    // int count1=0;
    // for (int  i = 0; i < n; i++)
    // {
    //     if(arr[i]==1)
    //     count1++;
    //     else
    //     count0++;

    //     /* code */
    // }
    // int l=0;
    // for(int i=0;i<count0;i++){
    //     arr[l]=0;
    //     l++;
    // }
    // for (int i = 0; i < count1; i++)
    // {
    //     arr[l]=1;
    //     l++;
    //     /* code */
    // }
    // print the array

    // method 3rd
    // by using the 2pointer approach
    // with swapping function

    int start = 0;
    int end = count - 1;
    while (start < end)
    {
        if (arr[start] == 0)
            start++;
        else if (arr[end] == 1)
            end--;
        else
        {
            swap(arr[start], arr[end]);
            start++;
            end--;
        }
    }
    for(int i=0;i<count;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
