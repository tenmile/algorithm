#include "heap_sort.h"

void heapSort(vector<int> &nums)
{
	int n = nums.size();
	for(int i=n-1; i>0; --i)				//初始化堆
	{
		if (nums[i] > nums[(i-1)/2])
		{
			swap(nums[i], nums[(i-1)/2]);
		}
	}
	for(int i=n-1; i>0; --i)					//破坏堆并进行调整
	{
		swap(nums[0], nums[i]);
		int p = 0;
		int child = 2*p+1;
		while(child < i-1)
		{
			if(child+1<i-1 && nums[child]<nums[child+1])
			{
				++child;
			}
			if(nums[p] < nums[child])
			{
				swap(nums[p], nums[child]);
				p = child;
				child = 2*p+1;
			}else
			{
				break;
			}
		}
	}
}