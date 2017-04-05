#include<stdio.h>

// Tobi San 

int main ()
{
	int a[20],i,max,min;
	
	for(i=1;i<=20;i++){
		scanf("%d",&a[i]);
	}
	for(i=1;i<=20;i++){
		printf("[H%d]%d\n",i,a[i]);
	}
	max=0;
	min=999;
	for (i=1;i<=20;i++){
		if (a[i]>=max){
			max=a[i];
		}
		if (a[i]<=min){
			min=a[i];
		}
	}
	printf("Tertinggi = %d\n", max);
	printf("Terendah = %d\n", min);
	return 0;
}