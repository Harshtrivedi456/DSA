// #include<iostream>
// using namespace std;
// int findthat(int arr[],int size){
//         int xoor=0;
//     for(int i=0;i<size;i++){
//         xoor=xoor^arr[i];
//     //     temp=arr[i];
//     //     for(int j=0;j<size;j++){
//     //         if(arr[j]!=temp){
//     //             temp=fone;
//     //             return fone ;
//     //         }
//     //         else{
//     //             return 0;
//     //         }
//     //     }
//     // }
//     // return fone;
// }return xoor;
// }
// int main(){
//      int size;
//     cout<<"size ";
//     cin>>size;
//     int arr[size];
//     for(int i=0;i<size;i++){
//         cin>>arr[i];
//     }
//     int foundthat=findthat(arr,size);
//     cout<<"That number is "<<foundthat;
// }





#include <bits/stdc++.h>
using namespace std;

int getSingleElement(vector<int> &arr) {
    //size of the array:
    int n = arr.size();

    // XOR all the elements:
    int xorr = 0;
    for (int i = 0; i < n; i++) {
        xorr = xorr ^ arr[i];
    }
    return xorr;
}

int main()
{
    vector<int> arr = {4, 1, 2, 1, 2};
    int ans = getSingleElement(arr);
    cout << "The single element is: " << ans << endl;
    return 0;
}