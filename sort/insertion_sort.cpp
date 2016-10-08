#include "insertion_sort.h"

//插入排序，测试通过
//最好情况：O(n^2)
//最坏情况：O(n^2)
//平均情况：O(n)
//辅助存储：O(1)
//稳定性：稳定
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