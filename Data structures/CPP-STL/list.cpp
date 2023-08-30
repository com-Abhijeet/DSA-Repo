//  List Data structure
// NO direct access / have to traverse .

#include <iostream>
#include<list>

using namespace std;

int main(){

    list<int> l ;
    l.push_back(10);
    l.push_front(20);

    for(int i : l ){
        cout<<i<<" ";
    }
    cout<<endl;

    l.erase(l.begin()); //erases the first element .

    // pop front , pop back
    //size after erase
    cout<<"size of list - > "<<l.size()<<endl;

}