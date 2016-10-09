#include "merge_sort2.h"

//归并排序（递归版本），测试通过
//最好情况：O(nlogn)
//最坏情况：O(nlogn)
//平均情况：O(nlogn)
//辅助存储：O(n)
//稳定性：稳定
void merge(vector<int> &nums, vector<int> &result, int b, int m, int e);

void mergeSort2_impl(vector<int> &nums, vector<int> &result, int b, int e)
{
	if(b>=e-1)
	{
		return;
	}
	int m = (b+e)/2;
	mergeSort2_impl(nums, result, b, m);
	mergeSort2_impl(nums, result, m, e);
	merge(nums, result, b, m, e);
}

void mergeSort2(vector<int> &nums)
{
	vector<int> result(nums.size());
	mergeSort2_impl(nums, result, 0, nums.size());
}