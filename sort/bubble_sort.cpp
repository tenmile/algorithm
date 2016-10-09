#include "bubble_sort.h"


//冒泡排序，属于交换排序，测试通过
//最好情况：O(n^2)
//最坏情况：O(n^2)
//平均情况：O(n^2)
//辅助存储：O(1)
//稳定性：稳定
//可进行改进，设置标志，若某一次排序没有进行交换，则表明排序已经完成
//可进行双向冒泡排序，可减少比较次数
void bubbleSort(vector<int> &nums)
{
	int n = nums.size();
	for(int i=0; i<n; ++i)
	{
		for(int j=0; j<n-i-1; ++j)
		{
			if(nums[j]>nums[j+1])
			{
				swap(nums[j], nums[j+1]);
			}
		}
	}
}