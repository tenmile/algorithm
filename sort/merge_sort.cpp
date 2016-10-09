#include "merge_sort.h"
#include "utilities.h"


//归并排序（非递归版本），测试通过
//最好情况：O(nlogn)
//最坏情况：O(nlogn)
//平均情况：O(nlogn)
//辅助存储：O(n)
//稳定性：稳定
void merge(vector<int> &nums, vector<int> &result, int b, int m, int e)
{
	int p=b, p1=b, p2=m;
	while(p1<m && p2<e)
	{
		if(nums[p1]<nums[p2])
		{
			result[p++] = nums[p1++];
		}else
		{
			result[p++] = nums[p2++];
		}
	}
	while(p1<m)
	{
		result[p++] = nums[p1++];
	}
	while(p2<e)
	{
		result[p++] = nums[p2++];
	}
	for(int i=b; i<e; ++i)
	{
		nums[i] = result[i];
	}
}

void mergeSort(vector<int> &nums)
{
	int n= nums.size();
	vector<int> result(n);
	for(int step=1; step<n; step*=2)
	{
		for(int i=0; i+step<n; i+=2*step)
		{
			merge(nums, result, i, i+step, i+2*step>=n? n: i+2*step);
		}
	}
}