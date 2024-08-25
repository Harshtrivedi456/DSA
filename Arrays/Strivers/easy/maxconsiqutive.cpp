#include<iostream>
using namespace std;
int maxones(int size,int arr[]){
    int count=1;
    int maxi=0;
    for(int i=0;i<size;i++){
        if(arr[i]==arr[i+1]){
            if(arr[i]==1){
            count++;
            maxi=count;
            // if(arr[i+1]==1){
            //     count++;
            // }
            // else{
            //     count=0;
            // }  
        }}
        else{
            count=0;
        }

    }
    return maxi;
}
int main(){
     int size;
    cout<<"size ";
    cin>>size;
    int arr[size];
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    int maxone=maxones(size,arr);
    cout<<"Maximum consiqutive one is "<<maxone;
}