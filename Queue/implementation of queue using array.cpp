#include<iostream>
using namespace std;

class Queue{
    public:
    int *arr;
    int size;
    int front;
    int rear;
    Queue(int size){
        this->size = size;
        front = -1;
        rear = -1;
        arr = new int[size];
    }
    //push
    void push(int value){
        //is queue is full
        if((rear+1)%size==front){
            cout<<"Queue overflow";
            return;
        }
        else{
            if(front==-1){
                front = rear = 0;
                arr[0] = value;
                return;
            }
            else{
                rear = (rear+1)%size;
                arr[rear] = value;
                cout<<value<<" is pushed";
                return;
            }
        }
    }
    //pop
    void pop(){
        //if queue is empty
        if(front==-1){
            cout<<"Queue underflow";
            return;
        }
        else{
            if(front==rear){
                front = rear = -1;
                return;
            }
            else{
                cout<<arr[front]<<" is popped";
                front = (front+1)%size;
                return;
            }
        }
    }
    //front
    int start(){
        //Queue is empty
        if(front==-1){
            return -1;
        }
        else{
            return arr[front];
        }
    }
    //IsFull
    bool IsFull(){
        return (rear+1)%size==front;
    }
    //IsEmpty
    bool IsEmpty(){
        return rear==front==-1;
    }
};

int main(){
    Queue q = Queue(5);
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    q.pop();
    q.push(10);
    q.push(10);
    return 0;
}