#include<iostream>
#include<vector>
#include "QuickSort.h"
#include "RecursiveBinarySearch.h"
using namespace std;

int main()
{
    vector<int> array = {1, 3, 5, 4, -5, 100, 7777, 2014};
    cout << "Given array is \n";
    for (int& num : array)
    {
        cout << num << " ";
    }

    cout<<endl;

    return 0;

}