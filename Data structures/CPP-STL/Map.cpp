// Data in a map is stored in a key value , a key value points only to one unique value ,
//  . KEYS are Unique

#include<iostream>
#include<map>
using namespace std;
int main() {

    map<int , string > map;
    map[1] = "Jalna";
    map[2] = "Aurangabad";
    map[3] = "Pune";
    map[4] = "Mumbai";

    map.insert({5 , "Nashik"});

    cout<<"Map before erase ->";
    for(auto i: map){
        cout<<i.first<<" "<<i.second<<endl;
    }
    cout<<endl;

    cout<<"finding key in map -> 2 : "<<map.count(2)<<endl;

    map.erase(5);
    cout << endl <<"After erasing the element with key=5"<<endl ;
    for(auto i: map){
        cout<<i.first<<" "<<i.second<<endl;
    }

}