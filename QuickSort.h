#include<vector>
#include "Sort.h"

class QuickSort: public Sort{
    public:
        std::vector<int> sort(std::vector<int> list);
        void QSort(std::vector<int> &list, int left, int right);
};