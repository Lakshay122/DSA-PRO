#include <iostream>
using namespace std;
// void reversearr(string &s, int start, int end)
// {
//     if (start >= end)
//         return;

//     swap(s[start], s[end]);
//     // start++;
//     // end--;
//     reversearr(s, start + 1, end - 1);
// }
int main()
{
    string s = "geeks";
    int n = 5;


    // method1 TC = O(n)
    // for (int i = 1; i <= n / 2; i++)
    // {
    //     swap(s[i - 1], s[n - i]);
    //     /* code */
    // }



    // another way t0 solve this question   method2 TC = O(n)
    // best and easy way to solve the quesion
      
         for (int i = 0; i < n / 2; i++)
    {
        swap(s[i], s[n - i - 1]);
        /* code */
    }



    // method3 TC = O(n)
    // int start = 0;
    // int end = n - 1;
    // while (start < end)
    // {
    //     swap(s[start], s[end]);
    //     start++;
    //     end--;
    // }



    // method 4 TC = O(n) //recursive call of function
    //     int start = 0,
    //          end = n - 1;
    // reversearr(s, start, end);



    // in this method we make the new string so that its space complexity O(n) and time complexity O(n)
    // string rev = "";
    // for (int i = n - 1; i >= 0; i--)
    // {
    //     rev += s[i]; //also write as rev=rev+s[i]
    // }
    // cout<<rev;

    cout << s;
}