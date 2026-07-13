#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node *next;
    Node(int data){
        this->data = data;
        next = NULL;
    }
};

class Stack{
    public:
    Node *top = NULL;
    int size = 0;
    //push
    void push(int value){
        Node *temp = new Node(value);
        if(temp==NULL){
            cout<<"stack overflow"<<endl;
            return;
        }
        else{
            temp->next = top;
            top = temp;
            size++;
            cout<<value<<" is pushed"<<endl;
            return;
        }
    }
    //pop
    void pop(){
        //is stack is empty
        if(top==NULL){
            cout<<"stack is underflow"<<endl;
            return;
        }
        else{
            Node *temp = top;
            top = top->next;
            cout<<temp->data<<" is poped"<<endl;
            delete temp;
        }
    }
    //peek
    int peek(){
        //stack is empty
        if(top==NULL){
            return -1;
        }
        else{
            return top->data;
        }
    }
    //size of the stack
    void IsSize(){
        cout<<size<<endl;
    }
    //stack is empty or not
    bool IsEmpty(){
        if(top==NULL)
            return 1;
        else
        return 0;
    }   
};

int main(){
    Stack s;
    s.push(2);
    cout<<s.peek()<<endl;
    s.pop();
    s.pop();
    cout<<s.IsEmpty()<<endl;
    s.IsSize();
    return 0;
}