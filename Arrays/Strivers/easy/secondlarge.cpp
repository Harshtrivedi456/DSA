#include<iostream>
using namespace std;
int main(){
    int a[5]={1,7,4,3,5};
    int i,max;
    max=a[0];
    for (i=1;i<5;i++){
        if(max<a[i]){
             max=a[i];
        }
    }cout<<"Largest element is :"<<max<<endl;
int smax=a[0];
for(i=1;i<5;i++){
   if(a[i]>smax){
    if(a[i]!=max){
    smax=a[i];
       }   }
}
cout<<"Second largest element is :"<<smax<<endl;
}
  