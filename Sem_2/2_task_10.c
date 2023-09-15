#include <stdio.h>
int main()
{
	int n;
	int a[1000];
	scanf("%i", &n);
	for (int i = 0; i < n; ++i)
		scanf("%i", &a[i]);
	
	
	
	int l = 0, r = n - 1;
	while (r > l + 1)
	{
		int mid = (l + r) / 2;
		
		if ((a[mid] - a[0]) == mid)
			l = mid;
		else
		r = mid;
	}
	if (a[l] > a[r])
		printf("%i\n", l);
	else
		printf("%i\n", r);

}