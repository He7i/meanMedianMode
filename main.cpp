#include <iostream>
#include <algorithm>
 #include<numeric>
 #include <vector>
int main()
{
    //initial value array
    int arr[] = { 1, 2,4,4,4,12,3,6, 7};

    //find how many elements are in the array
    int n = sizeof(arr)/sizeof(arr[0]);
 
    //sort array in asc order
    std::sort(arr, arr + n);

    //find mean

    // initialise sum to zero
    /*  int sumOfValues = 0;

    sumOfValues = std::accumulate(arr,arr+n,sumOfValues);

    int mean =  sumOfValues/n;

    //find median

    //if array is equal number of entries 
    int median = 0;
    if(n/2 == 0){
        median = arr[n/2];
    }else{
        median = (arr[n/2] + arr[(n/2) - 1])/2;
    }
  
   //find mode
  

 */
    return 0;
}