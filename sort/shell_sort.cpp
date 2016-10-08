#include "shell_sort.h"

//希尔排序，测试通过
//希尔排序是直接插入排序的改进，又叫缩小增量排序，增量由n/2, n/4, ... , 一直到1
//最好情况：O(n)
//最坏情况：O(n^2)
//平均情况：O(n^1.3)
//辅助存储：O(1)
//稳定性：不稳定
void shellSort(vector<int> &nums)
{
	int n = nums.size();
	int dk = n/2;
	while (dk >= 1)
	{
		for (int i=dk; i<n; i+=dk)
		{
			int j=i-dk, num=nums[i];
			while (j>=0 && num<nums[j])
			{
				nums[j+dk] = nums[j];
				j -= dk;
			}
			nums[j+dk] = num;
		}
		dk /= 2;
	}
}