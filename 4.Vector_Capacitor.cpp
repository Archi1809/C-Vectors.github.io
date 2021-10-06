//Capacity functions

// 1.size() – Returns the number of elements in the vector.
// 2.max_size() – Returns the maximum number of elements that the vector can hold.
// 3.capacity() – Returns the size of the storage space currently allocated to the vector expressed as number
// of elements.
// 4.resize(n) – Resizes the container so that it contains ‘n’ elements.
// 5.empty() – Returns whether the container is empty.
// 6.shrink_to_fit() – Reduces the capacity of the container to fit its size and destroys all elements beyond
// the capacity.
// 7.reserve() – Requests that the vector capacity be at least enough to contain n elements.

//Size and capacity ka ache se smjhna h check the youtube whic hi liked

// C++ program to illustrate the
// capacity function in vector
#include <iostream>
#include <vector>
  
using namespace std;
  
int main()
{
    vector<int> g1;
  
    for (int i = 1; i <= 5; i++)
        g1.push_back(i);
  
    cout << "Size : " << g1.size();
    cout << "\nCapacity : " << g1.capacity();
    cout << "\nMax_Size : " << g1.max_size();
  
    // resizes the vector size to 4
    g1.resize(4);
  
    // prints the vector size after resize()
    cout << "\nSize : " << g1.size();
  
    // checks if the vector is empty or not
    if (g1.empty() == false)
        cout << "\nVector is not empty";
    else
        cout << "\nVector is empty";
  
    // Shrinks the vector
    g1.shrink_to_fit();
    cout << "\nVector elements are: ";
    for (auto it = g1.begin(); it != g1.end(); it++)
        cout << *it << " ";
  
    return 0;
}

/*Output:
Size : 5
Capacity : 8
Max_Size : 4611686018427387903
Size : 4
Vector is not empty
Vector elements are: 1 2 3 4 */

//concept of size and capacity
/* for (int i = 1; i <= 5; i++)
        g1.push_back(i);
     

    value   size  capacity
    0       0     0
    1       1     2
    2       2     2
    3       3     4                // when 2 value are filled and 3rd entry is to be entered capcaity becomes
    4       4     4                // 2*current(capacity)= 4 and when 5th element is to be added it becomes
    5       5     8                  // 2*current(capacity) = 2*4  8 till 8 elemnet total to be fill
    6       6     8
    7       7     8
    8       8     8
    9       9     16
    10      
    .
    .
    .
    .
    .
    16     16     16
    17      17    32
    .
    .
    .
    .
     .
     .
     32
     33    33     64