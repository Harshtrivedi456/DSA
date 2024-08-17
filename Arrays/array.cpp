
// #include<iostream>
// using namespace std;
// // tranversal function
// int  display(int array[],int size){
//     for(int i=0;i<size+1;i++)
//     cout<<array[i]<<" ";

// }
// int main(){
//     int capacity=10,size=5;
//     int array[capacity]={2,5,3,6,7};
//     cout<<"Displaying array: ";
//     display(array,size);

// }

// Searching function
#include<iostream>
using namespace std;
int display(int array[],int size){
    for(int i=0;i<size+1;i++)
    cout<<array[i]<<" ";
}
int searching(int array[],int size,int key){
    for(int i=0;i<size+1;i++)
    {if(array[i]==key){
        return i;
        }
    }
    return -1;
    }
int main(){
    int capacity=10,size=5;
    int array[capacity]={2,5,3,6,7};
    // cout<<"Displaying array: ";
    // display(array,size);
    cout<<"searching element: ";
    int key=5;
    int index=searching(array,size,key);
    if(index>-1){
        cout<<"The element index is "<<index<<endl;
    }
    else{
        cout<<"The element index not found";
    }
}

