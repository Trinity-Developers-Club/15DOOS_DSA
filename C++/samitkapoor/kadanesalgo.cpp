//Write a program to perform Kadane's Algorithm

#include <bits/stdc++.h>

using namespace std;

int kadane(vector<int> arr, int n) //creating a function to perform Kadane's Algorithm
{

    int max = arr[0];
    int temp_sum = 0;
    for (int i = 0; i < n; i++)
    {
        temp_sum += arr[i];
        if (temp_sum < arr[i])
            temp_sum = arr[i];

        if (temp_sum >= max)
            max = temp_sum;
    }

    return max;
}

int main()
{
    int n; //storing the size of the array
    cout << "Enter the elements inside the array: ";
    cin >> n;

    vector<int> arr(n, 0); //storing array elements
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int result = kadane(arr, n);
    cout << "The largest subarray sum is: " << result << endl; //output

    return 0;
}