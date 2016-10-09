#include "heap_sort.h"

//堆排序，测试通过
//堆排序是一种选择排序
//最好情况：O(n*logn)
//最坏情况：O(n*logn)
//平均情况：O(n*logn)
//辅助存储：O(1)
//稳定性：不稳定
void heapAdjust(vector<int> &nums, int pos, int n)		//以pos为顶点，n为堆底，对堆进行调整
{
	int tmp = nums[pos];
	int child = 2*pos+1;
	while(child < n)
	{
		if(child+1<n && nums[child]<nums[child+1])
		{
			++child;
		}
		if(tmp < nums[child])
		{
			nums[pos] = nums[child];
			pos = child;
			child = 2*pos+1;
		}else
		{
			break;
		}
		nums[pos] = tmp;
	}
}

void heapSort(vector<int> &nums)
{
	int n = nums.size();
	for(int i=(n-1)/2; i>=0; --i)				//初始化堆
	{
		heapAdjust(nums, i, n);
	}
	for(int i=n-1; i>0; --i)				//破坏堆并进行调整
	{
		swap(nums[0], nums[i]);
		heapAdjust(nums, 0, i);
	}
}