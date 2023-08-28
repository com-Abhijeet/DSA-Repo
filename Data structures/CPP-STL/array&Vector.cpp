// We are going to use STL in this to learn and use for future purposes.
#include<iostream>
#include<array>
#include<vector>
using namespace std;

int main(){
    cout<<"--------------------------------------------------------------------------"<<endl;
    // array< type, size > name = { } ;     its a Stl array library , it has implementation similar to that of int arr[2] = {};
    array<int , 5> name = { 1 , 5 , 6  , 7  ,8};  

    cout<<"element at index 2: "<< name.at(2)<<endl;
    cout<<"--------------------------------------------------------------------------"<<endl;

    cout<<" Element at the front - > "<< name.front()<<endl;
    cout<<" Element at the Back - > "<< name.back()<<endl;


    // Vectors    Vectors are dynamic arrays   x2 the size everytime it reaches new capacity and a new element is entered.

    vector<int> v  ;  // initialize a vector 
    cout<<" capacity of vector V - > "<<v.capacity()<<endl; // shows the current capacity of the vector / how many elements it can store!

    v.push_back(1);
    cout<<" capacity of vector V - > "<<v.capacity()<<endl;

    v.push_back(2);
    cout<<" capacity of vector V - > "<<v.capacity()<<endl;

    v.push_back(3);
    cout<<" capacity of vector V - > "<<v.capacity()<<endl;

    cout<<" capacity of vector V - > "<<v.size()<<endl;  // Shows how many elements are currently stored in the vector 

    cout<<"vector before pop - >  ";
    for(int i:v){
        cout<<i<<" ";
    }
    cout<<endl;
    v.pop_back(); //removes the last element from the array

    cout<<"vector after pop - >  ";
    for(int i:v){
        cout<<i<<" ";
    }
    cout<<endl;

    cout<<"Size before clear - > "<<v.size()<<endl;
    v.clear(); // clears the vector , size becomes 0 but capacity stays the same
    
    cout<<"Size after clear - > "<<v.size()<<endl;

    //More vector operations

     vector<int> a(v); // copies all the element of v into a
     vector<int> b(5 , 1); // initializes a vector with size 5 having all elements 1

}
