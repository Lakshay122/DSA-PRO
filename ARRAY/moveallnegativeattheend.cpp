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
    // this method usefull if and only if order is not play any role in output
    //  in this method 2pointer approach is the best approach

    // int start=0;
    // int end=n-1;
    // while(start<end){
    //     if(arr[start]>=0)
    //     start++;

    //     else if(arr[end]<0)
    //     end--;

    //     else if(arr[start]<=0&&arr[end]>0){

    //         swap(arr[start],arr[end]);
    //         start++;
    //         end--;

    //     }
    // }
    // print the array

    // Method 2nd in this method the order is play role in output
    // in this method we use space also O(n)
    int countpos = 0;
    int countneg = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > 0)
            countpos++;
        

        else if (arr[i] <= 0)
            countneg++;
    }

    int arr1[countpos];
    int i = 0;
    int j = 0;
    int arr2[countneg];
    for (int k = 0; k < n; k++)
    {
        if (arr[k] > 0)
        {
            arr1[i] = arr[k];
            i++;
        }
        else if (arr[k] <= 0)
        {
            arr2[j] = arr[k];
            j++;
        }
    }
    int u = 0;
    for (u; u < countpos; u++)
    {
        arr[u] = arr1[u];
    }
    for (int l = 0; l < countneg; l++)
    {
        arr[u] = arr2[l];

        u++;
    }

    // simply print the array
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
