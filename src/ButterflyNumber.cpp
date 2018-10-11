/*
Problem statement goes here

*/
long long butterFlyNumber(long long N)
{
	if (N < 0)
		return -1;

	long long temp = N;
	while (N)
	{
		temp *= 10;
		temp += N % 10;
		if (temp < 0)
			return -1;
		N /= 10;
	}

	return temp;
}