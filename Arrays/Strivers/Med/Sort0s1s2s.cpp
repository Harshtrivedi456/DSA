
// #include<iostream>
// using namespace std;
// int main(){
//     int a[11]={1,2,0,1,2,0,2,1,0,2,0};
//     int i=a[0];
//     int max=a[11];
//     while(a[i]<11){
//         if(a[i]>a[i+1]){
//             max==a[i];
//             for(int j=i+1;j>0;j--){
//                 a[j]=a[j+1];
//             }
//             for(int j=0;j<11;j++){
//                 cout<<a[j];
//             }
//             // cout<<"Array isn't sorted"<<endl;
//             return 0;
//         }
//         else{
//             i++;
//         }
//     } 
//     cout<<"Array is sorted"<<endl;}


#include <bits/stdc++.h>
using namespace std;

void sortArray(vector<int>& arr, int n) {

    int low = 0, mid = 0, high = n - 1; // 3 pointers

    while (mid <= high) {
        if (arr[mid] == 0) {
            swap(arr[low], arr[mid]);
            low++;
            mid++;
        }
        else if (arr[mid] == 1) {
            mid++;
        }
        else {
            swap(arr[mid], arr[high]);
            high--;
        }
    }
}

int main()
{
    int n = 6;
    vector<int> arr = {0, 2, 1, 2, 0, 1};
    sortArray(arr, n);
    cout << "After sorting:" << endl;
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}
