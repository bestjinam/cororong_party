#include <stdio.h>

int	main(void)
{
	int	n;
	char	num[101];
	int	i;
	int	res;

	i = -1;
	scanf("%d %s", &n, num);
	res = 0;
	while (++i < n)
		res += num[i] - '0';
	printf("%d", res);
	return (0);
}
