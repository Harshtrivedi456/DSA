// #include<iostream>
// using namespace std;
// int major(int a[],int size){
//     int count=1;
//     int temp=0;
//     int maj=0;
//     for(int i=0;i<size;i++){
//          for(int j=i;j<size;j++){
//             if(a[j]==a[j+1]){
//                 count++;
//                 temp=count;
//                 maj=a[j];
//             }
//             else{
//                 count=0;
//             }
//         }
    
//     if(temp>(size/3)){
//            return maj;

//     }
//     else{
//         return 0;
//     }
// }}
// int main(){
//       int size;
//     cout<<"size ";
//     cin>>size;
//     int a[size];
//     for(int i=0;i<size;i++){
//         cin>>a[i];
//     }
//     int majorele=major(a,size);
//     cout<<majorele;
// }




#include <bits/stdc++.h>
using namespace std;

int majorityElement(vector<int> v) {

    //size of the given array:
    int n = v.size();
    int cnt = 0; // count
    int el; // Element

    //applying the algorithm:
    for (int i = 0; i < n; i++) {
        if (cnt == 0) {
            cnt = 1;
            el = v[i];
        }
        else if (el == v[i]) cnt++;
        else cnt--;
    }

    //checking if the stored element
    // is the majority element:
    int cnt1 = 0;
    for (int i = 0; i < n; i++) {
        if (v[i] == el) cnt1++;
    }

    if (cnt1 > (n / 2)) return el;
    return -1;
}

int main()
{
    vector<int> arr = {2, 2, 1, 1, 1, 2, 2};
    int ans = majorityElement(arr);
    cout << "The majority element is: " << ans << endl;
    return 0;
}
