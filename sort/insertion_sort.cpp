#include "insertion_sort.h"

//插入排序，测试通过
void insertionSort(vector<int> &nums)
{
	int n = nums.size();
	for (int i=1; i<n; ++i)
	{
		int j=i-1, num=nums[i];
		while (j>=0 && num<nums[j])
		{
			nums[j+1] = nums[j];
			--j;
		}
		nums[j+1] = num;
	}
}