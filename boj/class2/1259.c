#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	num[6];
	int	len;
	int	i;
	int	t;

	while (1)
	{
		scanf("%s", num);
		if (*num == '0')
			return (0);
		len = strlen(num);
		if (len == 1)
		{
			printf("yes\n");
			continue ;
		}
		i = -1;
		t = 0;
		while ( ++i < len / 2)
		{
			if (num[i] == num[len - i - 1])
				t = 1;
			else
			{
				t = 0;
				break;
			}
		}
		if (t == 1)
			printf("yes\n");
		else
			printf("no\n");
	}
	return (0);
}		
