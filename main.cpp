#include <iostream>
#include <vector>
#include "QuickSort.h"
#include "RecursiveBinarySearch.h"

using namespace std;

int main(){

    vector<int> nums;
    int number;
    cin>>number;
    /*
    while(cin>>n){
        nums.push_back(n);
    }
    */
    for(int i=0; i<number; i++)
    {
        int n=0;
        cin>>n;
        nums.push_back(n);
    }

    QuickSort qs;
    vector<int> sorted = qs.sort(nums);
    
    RecursiveBinarySearch rbs;
    //cout<<boolalpha<<rbs.search(sorted,1)<<' ';
    bool found = rbs.search(sorted, 1);
    if(found==true)
    {
        cout<<"true"<<" ";
    }
    else
    {
        cout<<"false"<<" ";
    }

    for(int i:sorted){
        cout<< i << ' ';
    }
    cout<<endl;

}
