#include<iostream>
#include<vector>
#include "RecursiveBinarySearch.h"
using namespace std;

bool RecursiveBinarySearch::search(std::vector<int> list, int target){
    int len = list.size();
    int middle = list[len/2];

    if(len == 0)
    {
        return false;
    }
    
    if(middle == target) 
    {
        return true;
    }

    if(middle > target){
        //取数组开始到中间的元素（不含中间元素）
        vector<int> split_list(list.begin(), list.begin()+len/2);
        return search(split_list, target);
    }

    if(middle < target){
        //取数组中间到最后的元素（不含中间元素）
        vector<int> split_list(list.begin()+len/2, list.end());
        return search(split_list, target);
    }
}