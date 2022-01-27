#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
        /* code */
    }
    cout<<"write the value of k ";
    cin>>k;
      

      //method 1st  time complexity=O(nlogn)

      //firstly sort the array 
      //print the value of arr[k-1]

      //for sorting we use c++ stl function sort
   //   sort(arr,arr+n);  //lets understand this function this function is the predefined function that can be used to sorting now this function sort array element from arr+n-arr=n means function sort the last n element if we write sort(arr+1,arr+n) this function sort the last arr+n-arr-1=n-1 means sort the last n-1 element so conclusion of this function first write the begining at which start the sorting and after write the ending position

    //  cout<<arr[k-1];

    //2nd method by using a Priority Queue so if you dont know the what is Priority Queue see on google 
    //in which element can arranged in desending order so also called as we make max. Heap
    //this question also solve by Min.Heap so serach on google or other platform how to do this question by using Min. Heap 
    //but we can discuss about small explanation here 
    //Priority queues are a type of container adapters
    //in which elements are in nonincreasing order (hence we can see that each element of the queue has a priority {fixed order})
  
    //lets start to make priority queue
    priority_queue<int > p;
    for (int  i = 0; i < n; i++)
    {
        p.push(arr[i]); //push the element in queue in descending order

        /* code */
    }
    int ans,i=n-1;
    while(!p.empty()){
        if(i==k-1){
            ans=p.top();
            break;

        }
        i--;
        p.pop();
    }
    cout<<ans;
    

}