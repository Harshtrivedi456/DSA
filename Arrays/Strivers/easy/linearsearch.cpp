#include<iostream>
using namespace std;
int searching (int arr[],int key,int size)
{
    for(int i=0;i<size;i++){
        if(arr[i]==key){
            cout<<"Key is present at index "<<i<<endl;
        break;
        }
    }


    
}

int main(){
    int size;
    cout<<"Size ";
    cin>>size;
    int arr[size];
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    int key;
    cout<<"enter key"<<endl;
    cin>>key;
    int ans=searching(arr,key,size) ;
    cout<<ans;   
}