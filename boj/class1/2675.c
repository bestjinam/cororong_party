#include <stdio.h>
#include <string.h>

int	main(void)
{
	int	t, r;
	char	s[21];
	int	i, j, p;
	int	len;

	scanf("%d", &t);
	i = -1;
	while (++i < t)
	{
		scanf("%d", &r);
		scanf("%s", s);
		len = strlen(s);
		j = -1;
		while ( ++j < len)
		{
			p = -1;
			while (++p < r)
				printf("%c", s[j]);
		}
		printf("\n");
	}
	return (0);
}
