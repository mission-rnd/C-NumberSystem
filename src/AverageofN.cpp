/*
Overview:
Given an array of N points 
calculate the average and return the value in interger type

don't change the function signature!
for invalid cases return -1
*/
#include<stdlib.h>

int averageOfN(int* arr, int N)
{
	if (arr==NULL)
		return -1;
	long long ans = 0;
	for (int i = 0; i < N; i++)
	{
		ans += arr[i];
	}
	return ans / N;
}