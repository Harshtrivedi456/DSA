int removeDuplicates(int arr[], int n)
{
  int i = 0;
  int arr[5]={1,2,3,4,5};
    for (int j = 1; j < n; j++) {
    if (arr[i] != arr[j]) {
      i++;
      arr[i] = arr[j];
    }
  }
  return i + 1;}
// }