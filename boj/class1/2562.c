#include <stdio.h>

int main(void)
{
	int	num[9];
	int	max, i, max_i;

	max = 0;
	i = -1;
	while (++i < 9)
	{
		scanf("%d", &num[i]);
		if (max < num[i])
		{
			max = num[i];
			max_i = i;
		}
	}
	printf("%d\n", max);
	printf("%d\n", max_i + 1);
	return (0);
}
