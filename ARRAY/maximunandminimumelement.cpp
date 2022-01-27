#include <bits/stdc++.h> //in this header file approx all header files are included of  c++ langauge so we use this header file in each and every program
using namespace std;
int main()
{
    int n;
    cin >> n;   //input the size of the array
    int arr[n]; // make the array of size n
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i]; //input the array element one by one by using the for loop
    }
    int maxno = INT_MIN; //here INT_MIN mean maxno store the minimum value that can be put in the int data type the meaning has been already know to the compiler
    int minno = INT_MAX; //here INT_Max mean minno store the maximum value that can be put in the int data type the meaning has been already know to the compiler

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > maxno)
            maxno = arr[i];

        if (minno > arr[i])
        {
            minno = arr[i];
        }
    }

    //another way
    // for (int i = 0; i < n; i++)
    // {
    //     maxno=max(maxno,arr[i]);  //here the max function is the predefined function that can be added in header file it return the maximum value between those two value and this value can be save in the maxno
    //     minno=min(minno,arr[i]);  //here the min function is the predefined function that can be added in header file it return the minimum value between those two value and this value can be save in the minno
    //     /* code */
    // }

    cout << maxno << " " << minno;
}