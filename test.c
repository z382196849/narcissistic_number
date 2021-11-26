#include<stdio.h>

int main()
{
    int i, j, k, n;
    for(n = 100; n <= 999; n++)
    {
 	i = n / 100;
	j = n / 10 - i * 10;
	k = n % 10;
	if(i * i * i + j * j * j + k * k * k == n)
	{
		printf("%d ", n);
	}
    }
    getchar();
    return;
}