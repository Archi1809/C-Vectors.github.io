// Vectors are same as dynamic arrays with the ability to resize itself automatically when an element is 
// inserted or deleted, with their storage being handled automatically by the container.
//SYNTAX :
// vector<type> variable       or std::vector<int> variable

// Time Complexity: O(1)  for both begin() and end() func.
// 1. vector::begin() / vector::end()
// begin()/end()  function returns a bidirectional iterator to the first/last element of the container.
// Syntax : 
// vectorname.begin() / vectorname.end()

// Parameters(same for begin and end) :
// No parameters are passed.
// Returns :
// This function returns a bidirectional
// iterator pointing to the first/last element.

// Errors and Exceptions
// 1. It has a no exception throw guarantee. 
// 2. Shows error when a parameter is passed. 

#include<iostream>
#include<vector>
#include<string>
int main(){
    
    //Declarations forms of vectors
    //vector<int> vec1;
    std::vector<int> vec2{1, 12, 23, 45, 56, 67, 78}; // uniform initialization
    // vector<int> vec3 = {1, 2, 3, 4, 5, 6};       // initializer list
     
     //vec5 cause an error because we can't declare vector like that it has to be like vec3 or vec2..along 
     // value are added when declared
     //vector<int> vec5;
     //vec5 = { 1, 2, 3 };
    // vector<string> myvector{ "This", "is","Geeksforgeeks" };
 
    // vector<int> vec(6 ,  11); // fill in vec 11 six times

    for (auto it = vec2.begin(); it != vec2.end(); ++it)
        std::cout << *it <<" ";
    
    return 0;
}