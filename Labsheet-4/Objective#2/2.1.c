#include<stdio.h>
int main()
{
	float averge;
	int v,sum,n;
	sum = 0; n = 0;
	for(v=1;v<20;v= v+2)
	{
		sum = sum + v;
		n++;
		
	}
	average = sum /n;
	printf("average = %f",average);
}
