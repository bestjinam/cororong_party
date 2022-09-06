#include <stdio.h>

int	min(int a, int b, int c, int d)
{
	int	m;
	m = a;
	if ( m > b) 
		m = b;
	if ( m > c) 
		m = c;
	if ( m > d)
		m = d;
	return (m);
}

int	main(void)
{
	int	x, y, w, h;
	int	res;
	int	m;

	scanf("%d %d %d %d", &x, &y, &w, &h);
	m = min ((x - 0), (h - y), w - x, y - 0);
 	printf("%d", m);
	return (0);
}
