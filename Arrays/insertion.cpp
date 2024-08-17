#include <iostream>
using namespace std;
int display(int arr[], int size)
{
    for (int i=0; i<size; i++)
    {
        cout << arr[i] << " ";
    }
}
void insertion(int arr[],int& size, int capacity, int element, int position){
    if(size>=capacity){
        cout<<"Array is full";
        return;
    }
    if(position<0||position>size){
        cout<<"Invalid Position";
        return;
    }
    for(int i=size;i>position;i--){
        if(arr[i]=arr[size]){
            arr[size+1]=arr[size];
        }
        arr[i]=arr[i-1];
    }
    arr[position]=element;
    size++;
}
int main()
{
    int capacity = 10, size = 5;
    int arr[capacity] = {2, 5, 3, 8, 3};
    int element = 5, position = 2;
    cout<<"Before insertion array is: "<<endl;
    int ans=display(arr,size);
    cout<<ans<<endl;
    insertion(arr, size, capacity, element, position);
    cout << "After insertion array is: " << endl;   
    display(arr, size);
    return 0;
}