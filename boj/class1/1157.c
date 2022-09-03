#include <stdio.h>
#include <string.h>

int main(void)
{
	char	str[1000001];
	int	i, len, num;
	int	max;
	char	max_char;
	int	count['a' - 'A'] = {0};

	scanf("%s", str);
	len = strlen(str);
	max_char = 0;
	i = 0;
	while (i < len)
	{
		if ('a' <= str[i] && str[i] <= 'z')
			str[i] -= 'a' - 'A';
		if ('A' <= str[i] && str[i] <= 'Z')
			count[str[i] - 'A'] ++;
		i ++;
	}
	i = 0;
	num = 0;
	max = 0;
	while (i <= ('z' - 'a'))
	{	
		if (count[i] > max)
		{
			max = count[i];
			max_char = i;
			num = 1;
		}
		else if (count[i] == max)
			num ++;
		i ++;
	}
	if (num == 1)
		printf("%c", (char) max_char + 'A');
	else
		printf("?");
	return (0);
}
