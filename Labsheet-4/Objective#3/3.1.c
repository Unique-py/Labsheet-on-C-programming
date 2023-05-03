#include <stdio.h>
int main()
{       
    float avg;
    int v, sum,n;
    sum = 0; n=0;
    Jump:
    v =1;
    if(v<20)
    {
    	sum = sum +v;
    	v=v+2;
    	n++;
    	goto jump;
    	
	}
	avg = sum/n;
	printf("average = %f",avg);
	
}
