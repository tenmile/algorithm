#include "quick_sort.h"


//快速排序，测试通过
//快速排序在最坏的情况下会退化成冒泡排序，快排是nlogn中平均性能最好的排序，基准点的选择尤为关键
//最好情况：O(n*logn)
//最坏情况：O(n^2)
//平均情况：O(n*logn)
//辅助存储：O(nlogn)，平均，递归消耗堆栈空间
//稳定性：不稳定
int partition(vector<int> &nums, int low, int high)
{
	int pivotValue = nums[low];
	while(low<high)
	{
		while(low<high && nums[high]>=pivotValue)
		{
			--high;
		}
		nums[low] = nums[high];
		if(low == high)
		{
			break;
		}
		while(low<high && nums[low]<=pivotValue)
		{
			++low;
		}
		nums[high] = nums[low]; 
	}
	nums[low] = pivotValue;
	return low;
}

void quickSort_impl(vector<int> &nums, int low, int high)
{
	if(low >= high)
	{
		return;
	}
	int pivot = partition(nums, low, high);
	quickSort_impl(nums, low, pivot-1);
	quickSort_impl(nums, pivot+1, high);
}

void quickSort(vector<int> &nums)
{
	quickSort_impl(nums, 0, nums.size()-1);
}