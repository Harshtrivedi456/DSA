#include<iostream>
using namespace std;
int major(int a[],int size){
    int count=1;
    int temp=0;
    int maj=0;
    for(int i=0;i<size;i++){
         for(int j=i;j<size;j++){
            if(a[j]==a[j+1]){
                count++;
                temp=count;
                maj=a[j];
            }
            else{
                count=0;
            }
        }
    
    if(temp>(size/3)){
           return maj;

    }
    else{
        return 0;
    }
}}
int main(){
      int size;
    cout<<"size ";
    cin>>size;
    int a[size];
    for(int i=0;i<size;i++){
        cin>>a[i];
    }
    int majorele=major(a,size);
    cout<<majorele;
}