#include <iostream> 
using namespace std; 
int display(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i];
    }
}
int deletion(int arr[],int &size,int capacity,int pos){
    if(size==capacity){
        cout<<"ARRAY IS FULL";
    }
    if(pos<0||pos>size){
        cout<<"Invalid position";
    }
    for(int i=pos;i<size;i++){
        arr[i]=arr[i+1];
        
    }
    size--;
}
int main() {
    int capacity=20,size=10,pos=3;
    int arr[capacity]={3,1,2,4,3,2,1,3,3,4};
    cout<<"displaying the array:\n";
    cout<<"Old array is:";
    display(arr,size);
    cout<<"\n";
    deletion(arr,size,,pos);
    cout<<"new array is:";
    display(arr,size);
}