#include <iostream>
#include <vector>
#include "QuickSort.h"
#include "RecursiveBinarySearch.h"

using namespace std;

int main(){

    vector<int> nums;
    int n;
    while(cin>>n){
        nums.push_back(n);
    }

    QuickSort qs;
    vector<int> sorted = qs.sort(nums);
    
    RecursiveBinarySearch rbs;
    cout<<boolalpha<<rbs.search(sorted,1)<<' ';
    
    for(int i:sorted){
        cout<< i << ' ';
    }
    cout<<endl;

}
