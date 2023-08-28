// Deque or Double ended queue OR deck
// A deque is a sequence container with dynamic size that can be expanded or contracted on both ends (either its front or its back).
#include<iostream>
#include<deque>

using namespace std;

int main(){
    deque<int> a; //initializes a deque

    a.push_back(5); //adds a element from the back
    a.push_front(4); // adds the element from the front 

    for(int i:a){
        cout<<i<<" ";
    }
    cout<<endl;

    // a.pop_front(); //removes the element from the front 

    // for(int i: a){
    //     cout<<i<<" ";
    // }
    // cout<<endl;

    cout<<"Empty of Not - > "<<a.empty()<<endl;

    //before erase function
    cout<<"deque before erase - > ";
    for(int i:a){
        cout<<i<<" "; 
    }
    cout<<endl;
    a.erase(a.begin() , a.begin()+1); //erases the begin and one element after that.
    
    //after erase function
    cout<<"deque after erase - > "; 
    for(int i:a){
        cout<<i<<" "; 
    }
    cout<<endl;
    
}