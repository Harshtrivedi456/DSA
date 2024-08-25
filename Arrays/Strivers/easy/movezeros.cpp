#include<iostream>
using namespace std;
int main(){
    // int size;
    int arr[7]={1,0,2,0,5,0,7};
    // cout<<"Enter size of the array :"<<endl;
    // cin>>size;
    // int arr[size];
    //  cout<<"enter array element "<<endl;
    // for(int i=0;i<size;i++){
       
    //     cin>>arr[i];
    // }
    // cout<<"Your array "<<endl;
    // for(int i=0;i<size;i++){
    //     cout<<arr[i]<<" "<<endl;
    // }
    // // cout<<"Process of moving zeros at the end"<<endl;

    int temp=arr[7];
    for(int i=0;i<7;i++){
        if(arr[i]==0){
            temp=arr[i];
            for(int j=i;j<7;j++){
                arr[j]=arr[j+1];
            }
        }
    }
    cout<<"Your array after mopving zeos at the end"<<endl;
    for(int i=0;i<7;i++){
          cout<<arr[i]<<" ";
    }

}