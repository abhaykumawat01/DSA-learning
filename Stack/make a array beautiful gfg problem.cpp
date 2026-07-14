#include<iostream>
#include<stack>
#include<vector>
using namespace std;

stack<int> beutifularray(int arr[],stack<int>&ans,int size){
    ans.push(arr[0]);
    for(int i=1;i<size;i++){
        //upcoming elements is positive 
        if(arr[i]>=0){
            //top of the stack is non negative
            if(ans.top()>=0){
                ans.push(arr[i]);
            }
            //top of the stack is negative
            else{
                ans.pop();
            }
        }
        //upcoming element is negative
        else{
            //top of the stack is non negative
            if(ans.top()>=0){
                ans.pop();
            }
            //top of the stack is negative
            else{
                ans.push(arr[i]);
            }
        }
    }
    return ans;
}

int main(){
    int arr[] = {2,3,5,-4,6,-2,-8,9}; 
    int size = sizeof(arr)/sizeof(arr[0]);
    stack<int>ans;
    beutifularray(arr,ans,size);
    vector<int> fans;
    while(!ans.empty()){
        fans.push_back(ans.top());
        ans.pop();
    }
    for(int i=fans.size();i>=0;i++){
        cout<<fans[i]<<" ";
    }
    return 0;
}