
#include <bits/stdc++.h>
using namespace std;

void TripletPairSum(int arr[], int size, int sum)
{

    vector<int> v;

    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)

        {
            for (int k = j + 1; k < size; k++)
            {
                if (arr[i] + arr[j]+arr[k] == sum)
                {
                    v.push_back(arr[i]);
                    v.push_back(arr[j]);
                    v.push_back(arr[k]);
                    v.push_back(0);
                }
            }
        }
    }

    for (auto e : v)
        cout << e << " ";
}

int main()
{
    int arr[7] = {1, 2, 3, 4, 5, 6, 7};

    int sum=10;

    TripletPairSum(arr, 7, sum);

    return 0;
}