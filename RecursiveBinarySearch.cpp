#include<iostream>
#include<vector>
#include "RecursiveBinarySearch.h"
using namespace std;

bool RecursiveBinarySearch::search(std::vector<int> list, int target){
    int len = list.size();
    int middle = list[len/2];

    //If the len is zero, it means the target is not in the list.
    if(len == 0)
    {
        return false;
    }
    
    //If the middle is target, it means the target is found now.
    if(middle == target) 
    {
        return true;
    }

    if(middle > target){
        //getting the element from the beginning to the middle（exclude the middle element）
        vector<int> split_list(list.begin(), list.begin()+len/2);
        return search(split_list, target);
    }

    if(middle < target){
        //getting the element from the middle to the end（exclude the middle element）
        vector<int> split_list(list.begin()+len/2, list.end());
        return search(split_list, target);
    }
}