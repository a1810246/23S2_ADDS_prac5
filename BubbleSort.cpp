#include<iostream>
#include<vector>
#include "BubbleSort.h"
using namespace std;

vector<int> BubbleSort::sort(vector<int> list){
    int size = list.size();
    for(int i=0; i<size-1; i++){
        for(int j=0; j<size-1-i; i++){
            if(list[j]>list[j+1]){
                swap(list[j],list[j+1]);
            }
        }
    }
    return list;
}