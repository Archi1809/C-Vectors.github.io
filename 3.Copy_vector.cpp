#include<iostream>
#include<vector>

using namespace std;

int main(){
    
    vector<int> vec1{1, 2, 3, 4};

    //Method 1 : Iterative method.
    vector<int> vect2;
    for (int i=0; i<vect1.size(); i++)
        vect2.push_back(vec1[i]);


    //Method 2 : By assignment “=” operator
    vect2 = vec1 ;


    //Method 3 : By passing vector as constructor
    vector<int> vec3(vec1);

    //A new vector is created by changing a value 
    vec1[0] = 8;

    //Method 4 : By using inbuilt functions
    //copy(first_iterator_o, last_iterator_o, back_inserter())
    vector<int> vect3;
     // Copying vector by copy function
    copy(vec1.begin(), vec1.end(), back_inserter(vect3));

    //assign(first_iterator_o, last_iterator_o)
    //assigning vector using assign func
    vect3.assign(vec1.begin(), vec1.end());
  

  return 0;
}