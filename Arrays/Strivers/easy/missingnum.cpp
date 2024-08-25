// #include<iostream>
// using namespace std;
// int missingnum(int arr[],int n){
// int sum=(n*(n+1)/2);
// int S=0;
// for(int i=0;i<n-1;i++){
//     S=S+arr[i];
// }
// int missingnumber=sum-S;
// return missingnumber;
// }

// int main(){
//     int n;
//     cout<<"n ";
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     int number=missingnum(arr,n);
//     cout<<"Missing number is "<<number;

// }




#include <bits/stdc++.h>
using namespace std;

int missingNumber(vector<int>&a, int N) {

    //Summation of first N numbers:
    int sum = (N * (N + 1)) / 2;

    //Summation of all array elements:
    int s2 = 0;
    for (int i = 0; i < N - 1; i++) {
        s2 += a[i];
    }

    int missingNum = sum - s2;
    return missingNum;
}

int main()
{
    int N = 5;
    vector<int> a = {1, 2, 4, 5};
    int ans = missingNumber(a, N);
    cout << "The missing number is: " << ans << endl;
    return 0;
}
