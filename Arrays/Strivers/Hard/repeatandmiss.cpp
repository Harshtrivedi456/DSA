#include<iostream>
using namespace std;
int rpms(int a[],int size){
    int temp=0;
    for(int i=0;i<size;i++){
      for(int j=i;j<size;j++){
        if(a[i]==a[j]){
            temp=a[i];
        }
        // else{
        //     j++;
        // }
      }
    }
    return temp;
}

 int missingnum(int a[],int size){
    int sum=(size*(size+1)/2);
int S=0;
for(int i=0;i<size-1;i++){
    S=S+a[i];
}
int missingnumber=sum-S;
return missingnumber;
}
int main(){
    int size;
    cout<<"size ";
    cin>>size;
    int a[size];
    for(int i=0;i<size;i++){
        cin>>a[i];
    }
    int number=rpms(a,size);
    int missing=missingnum(a,size);
    cout<<"Reapeting number is "<<missing;
    cout<<"Missing number is "<<number;

}
