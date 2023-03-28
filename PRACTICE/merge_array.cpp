#include <bits/stdc++.h>
using namespace std;

int main()
{
  int arr1[4] = {1, 2, 3, 4};

  int arr2[6] = {5, 6, 7, 8, 9, 10};

  int arr3[10];

  for (int i = 0; i < 10; i++)
  {
    if (i < 4)
      arr3[i] = arr1[i];

    else
    {
      arr3[i] = arr2[i - 4];
    }
  }

  for (int i = 0; i < 10; i++)
    cout << arr3[i] << " ";

  return 0;
}