int countnum(int n)
{
	int nsave = n;
	int count = 0;

	while(nsave)
	{
		nsave /= 10;
		count++;
	}
	return (count);
}
