#include<iostream>
#include<vector>
#include "QuickSort.h"
#include "RecursiveBinarySearch.h"
using namespace std;

int main()
{
   
   vector<int> data = {1, 3, 5, 4, -5, 100, 7777, 2014, 0};
    QuickSort quickSort;

    vector<int> sortedData = quickSort.sort(data);

    RecursiveBinarySearch bs;
    int target = 4;
    bool found = bs.search(sortedData, target);

    if (found) {
        cout <<"true"<<" ";
    } else {
        cout<<"false"<<" ";
    }

    for (int num : sortedData) {
        cout << num << " ";
    }

    return 0;
    
    
}