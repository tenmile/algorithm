#include "shell_sort.h"
#include "insertion_sort.h"
#include "selection_sort.h"
#include "heap_sort.h"

#include <vector>
#include <iostream>
#include <algorithm>
#include <stdlib.h>
#include <time.h>
using namespace std;

typedef void(*sort_func)(vector<int> &nums);
ostream& operator<<(ostream &cout, vector<int> &nums)
{
	for (int i=0; i<nums.size(); ++i)
	{
		cout<<nums[i]<<" ";
	}
	cout<<endl;
	return cout;
}
bool testFunc(sort_func f)
{
	vector<int> nums1(1000), nums2(1000);
	int count = 100;
	while(count)
	{
		srand(time(NULL));
		for (int i=0; i<1000; ++i)
		{
			int num = rand()%1000;
			nums1[i] = num;
			nums2[i] = num;
		}
		sort(nums1.begin(), nums1.end());

		//cout<<"第"<<11-count<<"组数据："<<endl;
		//cout<<nums2;
		(*f)(nums2);
		//cout<<nums2<<endl;

		if (nums1 != nums2)
		{
			return false;
		}
		--count;
	}
	return true;
}

sort_func funs[] = {
	shellSort,
	insertionSort,
	selectionSort,
	heapSort
};

//测试用程序
int main()
{
	if (testFunc(heapSort))
	{
		cout<<"SUCCEDED!!!"<<endl;
	}  
	else
	{
		cout<<"FAILED!!!"<<endl;
	}
	system("pause");
	return 0;
}