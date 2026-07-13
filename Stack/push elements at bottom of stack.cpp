#include<iostream>
#include<stack>
using namespace std;

int main(){
    stack<int>s;
    for(int i=0;i<5;i++){
        s.push(i+3);
    }
    int x = 10; //insert this elements at the bottom of the stack
    stack<int>hold;
    while(!s.empty()){
        int value = s.top();
        hold.push(value);
        s.pop();
    }
    s.push(x);
    cout<<s.top()<<" ";
    while(!hold.empty()){
        int value = hold.top();
        s.push(value);
        cout<<s.top()<<" ";
        hold.pop();
    }
    return 0;
}