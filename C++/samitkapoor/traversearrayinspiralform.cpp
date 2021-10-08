/*

Write a program to access the square matrix in spiral format
For Example:
Input: 
1 2 3
4 5 6
7 8 9
Output:
1 2 3 6 9 8 7 4 5

*/

#include <bits/stdc++.h>

using namespace std;

void spiralForm(vector<vector<int>> a, int m, int n)
{
    //a is the matrix, m is the number of rows and n is the number of columns
    int r = 0, c = 0; //variables to keep track of the element we are currently on
    while (m > 0 && n > 0)
    {
        for (int i = 0; i < m; i++) //traversing through the top row in the boundary
        {
            cout << a[r][c] << " ";
            c++;
        }
        //handling index out of bounds situation
        c--;
        n--;
        r++;
        for (int i = 0; i < n; i++) //traversing through the right corner in the boundary
        {
            cout << a[r][c] << " ";
            r++;
        }
        //handling index out of bounds situation
        c--;
        m--;
        r--;
        for (int i = 0; i < m; i++) //traversing through the bottom corner in the boundary
        {
            cout << a[r][c] << " ";
            c--;
        }
        //handling index out of bounds situation
        c++;
        n--;
        r--;
        for (int i = 0; i < n; i++) //traversing through the left corner in the boundary
        {
            cout << a[r][c] << " ";
            r--;
        }
        //handling index out of bounds situation
        c++;
        m--;
        r++;
    }
}

int main()
{

    vector<vector<int>> a(3, vector<int>(3));     //initialising a 2D vector of rows = columns = 3
    cout << "Please enter the array elements:\n"; //taking input of the elements of the matrix
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> a[i][j];
        }
    }

    spiralForm(a, 3, 3);
    return 0;
}