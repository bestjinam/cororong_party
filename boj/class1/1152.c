#include <stdio.h>
int main(void)
{
    char    s[10000001];
    int     words;
    int	    b;
    int     i;

    i = 0;
    words = 0;
    gets(s);
    b = 0;
    while (s[i])
    {
	if (b == 0 && (s[i] != ' '))
	{
		b = 1;
		words ++;
	}
	else if (b == 1 && (s[i] == ' '))
		b = 0;
        i ++;
    }
    printf("%d\n", words);
}