#include <iostream>
using namespace std;

int main() {
  int arr[] = {3, 5, 10, 8, 2};
  int N = 5;
  
  // Insertion sort
  for (int i = 1; i < N; i++) {
    int key = arr[i];
    int j = i - 1;

    while (j >= 0 && key < arr[j]) {
      arr[j + 1] = arr[j];
      j--;
    }

    arr[j + 1] = key;
  }

  // Print sorted array
  for (int i = 0; i < N; i++) {
    cout << arr[i] << endl;
  }

  return 0;
}
