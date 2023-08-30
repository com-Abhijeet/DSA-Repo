#include<iostream>
#include<stack>
#include<queue>

using namespace std;

int main(){
    // Stack is first in last out
    stack<string> s ;

    s.push("Abhijeet");
    s.push("Ashish");
    s.push("vaishnav");
    s.push("shradha");
    s.push("something");

    cout<<" top element before Pop - >"<<s.top()<<endl;
    //    poping the elements from stack
    s.pop();
    cout<<" top element after Pop - >"<<s.top()<<endl;

    cout<<"Size of stack  - > "<<s.size()<<endl;

    cout<<"Empty or not  - > "<<s.empty()<<endl;

cout<<"------------------------- QUEUE ---------------------------"<<endl;
    //First in First out 
    queue<string> q;

    q.push("apple");
    q.push("Banana");
    q.push("Watermelon");
    q.push("Pineapple");

    cout<<" First element - > "<<q.front()<<endl;
    cout<<" Last element - > "<<q.back()<<endl;

    q.pop();
    cout<<" First element after Pop - >"<<q.front()<<endl;
    
}