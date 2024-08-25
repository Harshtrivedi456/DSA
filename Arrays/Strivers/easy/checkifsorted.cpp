#include<iostream>
using namespace std;
int main(){
    int a[11]={1,2,3,4,5,5,5,5,5,4,8};
    int i=a[0];
    while(a[i]<11){
        if(a[i]>a[i+1]){
            cout<<"Array isn't sorted"<<endl;
            return 0;
        }
        else{
            i++;
        }
    } 
    cout<<"Array is sorted"<<endl;
          
    
    

}