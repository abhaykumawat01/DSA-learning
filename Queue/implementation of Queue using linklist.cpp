#include<iostream>
using namespace std;
//Node
class Node{
    public:
    int data;
    Node *next;
    Node(int data){
        this->data = data;
        next = NULL;
    }
};
//Queue
class Queue{
    public:
    Node *head = NULL;
    Node *tail = NULL;
    int size = 0;
    //push
    void push(int value){
        if(head==NULL){
            head = new Node(value);
            tail = head;
            cout<<value<<" is pushed";
            size++;
            return;
        }
        else{
            Node *temp = new Node(value);
            tail->next = temp;
            tail = temp;
            cout<<value<<" is pushed";
            size++;
            return;
        }
    }
    //pop
    void pop(){
        //queue is empty
        if(head==NULL){
            cout<<"Queue is underflow";
            return;
        }
        else{
            Node *temp = head;
            cout<<head->data<<" is popped";
            head = head->next;
            delete temp;
            size--;
            return;
        }
    }
    //front
    int front(){
        if(head==NULL)
        return -1;
        else
        return head->data;
    }
    //Size
    int Size(){
        return size;
    }
    //IsEmpty
    bool IsEmpty(){
        return head==NULL;
    }
};

int main(){
    Queue q;
    q.push(15);
    q.push(25);
    q.push(35);
    q.push(45);
    q.push(55);
    q.push(65);
    q.pop();
    q.pop();
    cout<<q.front()<<endl;
    cout<<q.IsEmpty()<<endl;
    cout<<q.Size();
    return 0;
}