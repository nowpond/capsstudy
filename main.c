#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 6

void swap(int* px, int* py)
{
	int tmp;

	tmp = *px;
	*px = *py;
	*py = tmp;
}

void order(int arr[], int size)
{
	int* p;
	p = arr;

	for (int k = 0; k < SIZE; k++)
	{
		for (int s = 0; s < SIZE - 1; s++)
		{
			if (p[s] > p[s + 1])
				swap(&p[s], &p[s + 1]);
		}
	}
}
int main(void)
{
	int lotto[SIZE] = { 0 };
	int i, j;
	int* p;

	p = lotto;
	srand((unsigned)time(NULL));

	printf("로또 번호: ");

	for (i = 0; i < SIZE; i++)
	{
		p[i] = rand() % 45 + 1;
		for (j = 0; j < i; j++)
		{
			if (p[j] == p[i])
				i--;
		}
	}
	order(lotto, SIZE);
	for (i = 0; i < SIZE; i++)
		printf("%d ", p[i]);

	printf("\n");
	return 0;
}