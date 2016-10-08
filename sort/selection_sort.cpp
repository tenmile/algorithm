#include "selection_sort.h"

//ֱ��ѡ�����򣬲���ͨ��
//��������O(n^2)
//������O(n^2)
//ƽ�������O(n^2)
//�����洢��O(1)
//�ȶ��ԣ����ȶ�
//�ɽ��иĽ���ÿ��ͬʱѡ����С������Ԫ��
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