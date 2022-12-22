//  THIS ALGORITHM IS USEFUL WHEN ARRAY SIZE IS 
//  SHORT


#include <bits/stdc++.h>
using namespace std;

void SelectionSort(int arr[], int size)
{

    for (int i = 0; i < size - 1; i++)
    {
        int minIndex = i;
        for (int j = i + 1; j < size; j ++)
        {

            if (arr[minIndex] > arr[j])
                minIndex = j;
        }
        swap(arr[minIndex],arr[i]);
        cout<<"done"<<" ";
    }

    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }

}

int main()
{
    int arr[] = {1, 3, 4, 5, 6, 8, 6, 5121, 4, 0};

    int size = sizeof(arr) / sizeof(arr[0]);

    cout<<"hello";

    SelectionSort(arr, size);

    return 0;
}