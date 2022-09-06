#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	int	m, n;
	char	**board;
	int	i, j, k, q;
	char	start;
	int	cnt, min;

	scanf("%d %d", &n, &m);
	board = malloc(sizeof(char *) * n);
	i = -1;
	while ( ++i < n)
	{
		board[i] = malloc(m + 1);
		scanf("%s", board[i]);
	}
	i = -1;
	min = 2147483647;
	while (++i + 8 < n)
	{
		j = -1;
		while ( ++j + 8 < m)
		{ 
			k = i - 1;
			cnt = 0;
			while (++k < i + 8)
			{
				q = j - 1;
				start = 'W';
				while (++q < j + 8)
				{
					if (start != board[k][q])
						cnt ++;
					start = start == 'W' ? 'B' : 'W';
				}
				start = start == 'B' ? 'B' : 'W';
			} 
			if ( 64 - cnt < cnt)
				cnt = 64 - cnt;
			if (cnt < min)
				min = cnt;
		}

	}
	printf("%d", cnt);
}
