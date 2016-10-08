#include "selection_sort.h"

//直接选择排序，测试通过
//最好情况：O(n^2)
//最坏情况：O(n^2)
//平均情况：O(n^2)
//辅助存储：O(1)
//稳定性：不稳定
//可进行改进，每次同时选择最小和最大的元素
void selectionSort(vector<int> &nums)
{
	int n = nums.size();
	for (int i=0; i<n; ++i)
	{
		int index = i;
		for (int j=i+1; j<n; ++j)
		{
			if (nums[j]<nums[index])
			{
				index = j;
			}
		}
		swap(nums[i], nums[index]);
	}
}