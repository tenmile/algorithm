#include "shell_sort.h"
#include <vector>
#include <iostream>
#include <algorithm>
#include <stdlib.h>
#include <time.h>
using namespace std;

typedef void(*sort_func)(vector<int> &nums);
bool testFunc(sort_func f)
{
	vector<int> nums1(1000), nums2(1000);
	int cout = 10;
	while(cout)
	{
		srand(time(0));
		for (int i=0; i<1000; ++i)
		{
			int num = rand()%2000;
			nums1[i] = num;
			nums2[i] = num;
		}
		sort(nums1.begin(), nums1.end());
		(*f)(nums2);
		if (nums1 != nums2)
		{
			return false;
		}
		--cout;
	}
	return true;
}

int main()
{
	if (testFunc(shellSort))
	{
		cout<<"SUCCEDED!!!"<<endl;
	} 
	else
	{
		cout<<"FAILED!!!"<<endl;
	}
	return 0;
}