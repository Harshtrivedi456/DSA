// // // // #include<iostream>
// // // // using namespace std;
// // // // int main(){
// // // //     int i=0;
// // // //     int a[6]={1,2,2,3,4,5};
// // // //      cout<<"Original array "<<endl;
// // // //     for(i=0;i<6;i++){
// // // //     // cout<<endl;
// // // //     cout<<a[i]<<" ";}
// // // //     for( i=0;i<6;i++){
        
// // // //         if(a[i]==a[i+1]){
// // // //             if(a[i]==a[5]){
// // // //                if(a[i]==a[5]){
// // // //                 a[i]==a[i-1];
// // // //                }
// // // //                 break;
// // // //             }
// // // //             a[i+1]=a[i+2];
// // // //         }
// // // //     }
// // // //     cout<<endl;
// // // //     cout<<"Array after removing duplicates "<<endl;
// // // //     for(i=1;i<6;i++){
    
// // // //     cout<<a[i]<<" ";
// // // //     }
    
    
// // // #include<bits/stdc++.h>

// // // using namespace std;
// // // int removeDuplicates(int arr[], int n)
// // // {
// // //   int i = 0;
// // //   int arr[5]={1,2,3,4,5};
// // //     for (int j = 1; j < n; j++) {
// // //     if (arr[i] != arr[j]) {
// // //       i++;
// // //       arr[i] = arr[j];
// // //     }
// // //   }
// // //   return i + 1;}
// // // // }
// // // #include<iostream>
// // // using namespace std;
// // // int dup(int a[],int size){
// // //   for(int i=0;i<size;i++){
// // //     if(a[i]==a[i+1]){
// // //       for(int j=i;j<size-1;j++){
// // //         if(int j=size-1){
// // //           cout<<a[j];
// // //           break;
// // //         }
        
// // //         else{
// // //           a[j]=a[j+1];
// // //         }
// // //       }
     
// // //       }
// // //     }
// // //  for(int i=0;i<size;i++){
// // //         cout<<a[i]<<" ";
// // //   }
// // //   return 0;
// // // }
// // #include<iostream>
// // using namespace std;
// // int removeDuplicates(int arr[], int size)
// // {
// //   int i = 0;
// //   for (int j = 1; j < size; j++) {
// //     if (arr[i] != arr[j]) {
// //       i++;
// //       arr[i] = arr[j];
// //     }
// //   }
// //   return i + 1;}
// // int main(){
// //     int size;
// //     cout<<"size ";
// //     cin>>size;
// //     int a[size];
// //     for(int i=0;i<size;i++){
// //         cin>>a[i];
// //     }
// //     int dupa=removeDuplicates(a,size);
// //     for(int i=0;i<size;i++){
// //       cout<<a[i]<<" ";
// //       return 0;
// //     }}
 
// #include<iostream>

// using namespace std;
// int remove(int arr[], int size)
// {
//   int i = 0;
//   for (int j = 1; j < size; j++) {
//     if (arr[i] != arr[j]) {
//       i++;
//       arr[i] = arr[j];
//     }
//   }
//   return i + 1;
// }
// int main() {
//   // 
//     int size;
//     cout<<"size ";
//     cin>>size;
//     int arr[size];
//     for(int i=0;i<size;i++){
//         cin>>arr[i];
//     }
//   int k = remove(arr, size);
//   cout << "The array after removing duplicate elements is " << endl;
//   for (int i = 0; i < k; i++) {
//     cout << arr[i] << " ";
//   }
// }











#include<iostream.h>
using namespace std;
int removeDuplicates(int arr[], int n)
{
  int i = 0;
  for (int j = 1; j < n; j++) {
    if (arr[i] != arr[j]) {
      i++;
      arr[i] = arr[j];
    }
  }
  return i + 1;
}
int main() {
  int arr[] = {1,1,2,2,2,3,3};
  int n = sizeof(arr)/sizeof(arr[0]);
  int k = removeDuplicates(arr, n);
 cout<< "The array after removing duplicate elements is " << endl;
  for (int i = 0; i < k; i++) {
    cout << arr[i] << " ";
  }
}
