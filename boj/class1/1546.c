#include <stdio.h>
#include <stdlib.h>

int main (void)
{
	int *scores;
	int subs;
	int i, max;
	double  sum;

	scanf("%d", &subs);
	scores = malloc(sizeof(int) * subs);
	i = 0;
	max = 0;
	while (i < subs)
	{
		scanf("%d", &scores[i]);
		if (scores[i] > max)
			max = scores[i];
		i ++;
	}
	sum = 0;
	i = 0;
	while (i < subs)
	{
		sum += (double) scores[i] / max * 100;
		i ++;
	}
	printf("%lf", (double) sum / subs);
	return (0);
}
