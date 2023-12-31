#include <stdio.h>
int main()
{
	int n;
	int a[1000];
	scanf("%i", &n);
	
	for (int i = 0; i < n; ++i)
		scanf("%i", &a[i]);
	
	int x;
	scanf("%i", &x);
	
	if (a[n - 1] < x)
		printf("%i\n", n);
	else
	{
		int l = -1, r = n;
		
		while (r > l + 1)
		{
			int mid = (l + r) / 2;
			
			if (a[mid] >= x)
				r = mid;
			else
				l = mid;
		}
		printf("%i\n", r);
	}
}
