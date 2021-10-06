// Binary search is a widely used searching algorithm that requires the array to be sorted before search is
// applied. The main idea behind this algorithm is to keep dividing the array in half (divide and conquer) 
// until the element is found, or all the elements are exhausted.
// It works by comparing the middle item of the array with our target, if it matches, it returns true otherwise 
// if the middle term is greater than the target, the search is performed in the left sub-array. 
// If the middle term is less than the target, the search is performed in the right sub-array.


//The prototype for binary search is : 
//binary_search(startaddress, endaddress, valuetofind)
//if using namespace std not used use std::binary_search(..........)

#include<iostream>
#include<algorithm>

void show(int a[] , int size){
    for(int i =0 ; i<size ; i++)
    std::cout<< a+i <<" ";         // a+i = a[i]
}
int main(){
    int arr[]= {21, 67, 15, 98, 34, 56, 62};
    int n = sizeof(arr) / sizeof(arr[0]);

    // Sorting array till 5th element i.e. arr[4].
    // std::sort(arr , arr + 3); 
    //remember sorting in binary search is done on full array and not just any part
    std::sort(arr , arr +n);
    show(arr , n);

    int z;
    std::cin>>z;
    std::cout<<"Going for binary search .Element to search at run time "<<std::endl;
    if(std::binary_search(arr , arr +n , z))
    std::cout<<"Element found in the array"<<std::endl;
    else
    std::cout<<"Element not found in the array"<<std::endl;

    
   std::cout<<"Going for Binary search . Element to be search not known at run time"<<std::endl;
   if(std::binary_search(a , a + n , 12))
   std::cout<<"Element found in the array"<<std::endl;
   else
   std::cout<<"Element not found in the array"<<std::endl;

//We can change beginning and end address acc.ly 
   std::cout<<endl<<"Binary Search 3rd time . Element searching end point is not till array fully completes"<<std::endl;
   if(std::binary_search(a , a[4] , 34)
   std::cout<<"Element found in the array"<<std::endl;
   else
   std::cout<<"Element not found in the array"<<std::endl;

return 0;
}