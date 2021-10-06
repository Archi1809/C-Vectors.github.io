//std::bsearch searches for an element in a sorted array. Finds an element equal to element pointed to by 
//key in an array pointed to by ptr.

// Syntax :
// void* bsearch( const void* key, const void* ptr, std::size_t count, std::size_t size, * comp );

// Parameters :
// key     -    element to be found
// ptr     -    pointer to the array to examine
// count   -    number of element in the array
// size    -    size of each element in the array in bytes
// comp    -    comparison function which returns ?a negative integer value if the first argument is less
//              than the second,a positive integer value if the first argument is greater than the second
//              and zero if the arguments are equal.


// Implementing the binary predicate comp :
// // Binary predicate which returns 0 if numbers found equal
// int comp(int* a, int* b)
// { 
//     if (*a < *b)
//         return -1;
//     else if (*a > *b)
//         return 1;
//     // elements found equal
//     else
//         return 0;
// }


//PROGRAM to implement std::bsearch
#include<bits/stdc++.h>         // or#include<iostream>

int compare(const void  *ap  , const void  *bp){

    // type casting
    const int *a = (int*)ap;
    const int *b = (int*)bp;

    if(*a < *b)
    return -1;
    else if(*a > *b)
    return 1 ; 
    else
    return 0 ;
}
int main(){
    int arr[] = {1, 334, 56, 76, 12};
    int size = sizeof(arr)/ sizeof(arr[0]);

    int key1 = 45;  // element to be found

    //calling std::binary
    //typecasting the returned pointer to int
    int* p1 = (int*)std::bsearch(&key1 , arr , size , sizeof(arr[0]) , compare);
    
//if typecasting not done
//void* bsearch (const void* key, const void* base, size_t num, size_t size, 
//                                            int (*compare)(const void*,const void*));
    
    // If non-zero value is returned, key is found
    if (p1)
        std::cout << key1 << " found at position " << (p1 - arr) << '\n';
    else
        std::cout << key1 << " not found\n";
  
    // Element to be found
    int key2 = 9;
  
    // Calling std::bsearch
    // Typecasting the returned pointer to int
    int* p2 = (int*)std::bsearch(&key2, arr, size , sizeof(arr[0]), compare);
  
    // If non-zero value is returned, key is found
    if (p2)
        std::cout << key2 << " found at position " << (p2 - arr) << '\n';
    else
        std::cout << key2 << " not found\n";
}



#include <iostream>
#include <cstdlib>
using namespace std;

int compare(const void* a, const void* b)
{
	const int* x = (int*) a;
	const int* y = (int*) b;
	return (*x - *y);
}

int main()
{
	const int num = 10;
	int arr[num] = {5,9,10,14,16,19,21,26,29,31};
	int key1 = 10;
	int *p1 = (int*)bsearch(&key1,arr,num,sizeof(int),compare);


//if typecasting not done
//void* bsearch (const void* key, const void* base, size_t num, size_t size, 
  //                                         int (*compare)(const void*,const void*));


	if(p1 == NULL)
		cout << key1 << " not found " << endl;
	else
		cout << key1 << " found at position " << (p1-arr) << endl;

	int key2 = 15;
	int *p2 = (int*)bsearch(&key2,arr,num,sizeof(int),compare);
	if(p2 == NULL)
		cout << key2 << " not found " << endl;
	else
		cout << key2 << " found at position " << (p2-arr) << endl;

        
	return 0;
}