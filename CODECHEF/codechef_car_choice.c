/*
Question : https://www.codechef.com/problems/CARCHOICE
*/

#include<stdio.h>

int main()
{
	int t, i; 
	float x, y, a, b;
	scanf("%d", &t);
	
	i = 0;
	while(i != t)
	{
		scanf("%f%f%f%f", &x, &a, &y, &b);
		
		if((y/x) < (b/a))
		{
			printf("-1\n");
		}
		else if((y/x) > (b/a))
		{
			printf("1\n");
		}
		else
		{
			printf("0\n");
		}
		i++;
	}
}
