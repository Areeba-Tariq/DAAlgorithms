#include <iostream>
using namespace std;
int main() {
  int arr[]={3,5,0,8,2};
  int N=5;
  for(int i=0;i<N;i++)
    {
      for(int j=1;j<N-i;j++)
        {
          if(arr[j-1]>arr[j])
          {
            swap(arr[j-1],arr[j]);
          }
        }
    }
  for(int i=0;i<N;i++)
    {
      cout<<arr[i];
    }
}