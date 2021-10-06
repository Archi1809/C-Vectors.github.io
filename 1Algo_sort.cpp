
//Sorting is one of the most basic functions applied to data. It means arranging the data in a particular 
//fashion, which can be increasing or decreasing

// if using namespace std not used use std::sort(........)
//The prototype for sort is : 
//sort(startaddress, endaddress)

//The prototype for sort is : 
//sort(startaddress, endaddress)

#include<iostream>
#include<algorithm>

int main(){
    
    int arr[] = { 1,4,3,6,2,9,8,0,7,5};
    int n = sizeof(arr)/ sizeof(arr[0]);


   //Here it takes 2 parameters , beginning of the array and the length x upto which we want the array
   // to be sorted. I can choose n acc.ly whether x = 3 or 5 or 7 till n
    // std::sort(arr , arr + n);

    // std::cout<<"Sorting in ascending order"<<std::endl;
    // for(int i = 0 ;i<n ;i++){
    //     std::cout<<arr[i]<<" ";
    // }



    //For its descending part it takes 3 parameters We can pass “greater()” function to sort in descending 
    //order. This function does a comparison in a way that puts greater element before.
    std::sort(arr , arr +n , std::greater<int>());

    std::cout<<"Sorting in descending order"<<std::endl;
    for(int i = 0 ;i<n ;i++){
        std::cout<<arr[i]<<" ";
    }
    return 0;
}