#include "shell_sort.h"

//ϣ�����򣬲���ͨ��
//ϣ��������ֱ�Ӳ�������ĸĽ����ֽ���С��������������n/2, n/4, ... , һֱ��1
//��������O(n)
//������O(n^2)
//ƽ�������O(n^1.3)
//�����洢��O(1)
//�ȶ��ԣ����ȶ�
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