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
    
   /*vector<int> data = {9, 7, 5, 11, 12, 2, 14, 3, 10, 6};
    QuickSort quickSort;

    cout << "Original Data: ";
    for (int num : data) {
        cout << num << " ";
    }
    cout << endl;

    vector<int> sortedData = quickSort.sort(data);

    cout << "Sorted Data: ";
    for (int num : sortedData) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
    */
}