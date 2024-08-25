#include<iostream>
using namespace std;
string twosum(int a[],int size,int sum){
    int temp=0;
    for(int i=0;i<size;i++){
        temp=a[i];
        for(int i=0;i<size;i++){
            if(temp+a[i]==sum){
                 cout<<temp<<" "<<a[i]<<" "<<endl;
                return "Yes" ;
               
                
            }  
        }
    }   
    return "No";
}
int main(){
     int size;
    cout<<"size ";
    cin>>size;
    int a[size];
    for(int i=0;i<size;i++){
        cin>>a[i];
    }
    int sum;
    cout<<"Sum ";
    cin>>sum;
    string ans=twosum(a,size,sum);
    cout<<ans;
}