#include<iostream>
#include<vector>
#include "BubbleSort.h"
using namespace std;

vector<int> BubbleSort::sort(vector<int> list){
    for(int i=0; i<list.size()-1; i++){
        for(int j=0; j<list.size()-1-i; i++){
            if(list[j]>list[j+1]){
                swap(list[j],list[j+1]);
            }
        }
    }
}