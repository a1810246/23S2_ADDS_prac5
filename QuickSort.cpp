#include<iostream>
#include<vector>
#include "QuickSort.h"
using namespace std;

std::vector<int>  QuickSort::sort(std::vector<int> list){
    QSort(list, 0, list.size()-1);
    return list;
}

void QuickSort::QSort(vector<int> &list, int left, int right){
    if (left >= right) {
        return;
    }
    
    //find the middle value in the list
    int pivotIndex = left + (right - left) / 2;
    int pivotValue = list[pivotIndex];

    int i = left;
    int j = right;

    while(i <= j){
        while(list[i] < pivotValue){
            i++;
        }
       while(list[j] > pivotValue){
            j--;
        }

        if(i <= j){
            swap(list[i],list[j]);
            i++;
            j--;
        }
    }

    QSort(list, left, j);
    QSort(list, i, right);
}
