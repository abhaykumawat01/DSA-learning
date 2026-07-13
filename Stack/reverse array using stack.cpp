#include<iostream>
#include<stack>
using namespace std;

int main(){
    int arr[] = {3,4,2,1,5};
    stack<int>reverse;
    for(int i=0;i<5;i++){
        reverse.push(arr[i]);
    } 
    for(int i=0;i<5;i++){
        arr[i] = reverse.top();
        reverse.pop();
    }
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}