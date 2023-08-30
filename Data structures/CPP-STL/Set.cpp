// Stores all the unique elements and all the elements are returned in a sorted mannenr .

#include<iostream>
#include<set>

using namespace std;

int main(){
set<int>s;
s.insert(5);
s.insert(25);
s.insert(5);
s.insert(15);
s.insert(6);
s.insert(5);
s.insert(71);
s.insert(14);
s.insert(32);
s.insert(5);
s.insert(6);
s.insert(1);
s.insert(0);
s.insert(0);

cout<<" Elements in the set are - >"<<endl;
for(auto i : s){
    cout<<i<<" ";
}
cout<<endl;
cout<<" check for the element 5 in the set - >"<<s.count(5)<<endl;

set<int>::iterator it = s.begin();
it++;
//erasing the 2nd element ;
s.erase(it);


cout<<"elements after erase are: "<<endl;
for(auto i: s){
    cout<<i<<" ";
}
cout<<endl;



}