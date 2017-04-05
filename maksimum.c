#include <stdio.h>

int main () {
	int a,b,c,max;
	
	scanf ("%d\n%d\n%d", &a, &b, &c);
	
	if (a>b) {
	max=a;
	} 
	else {
	max=b;
	} 
	if (c>max)
	 max=c;
	
	printf("%d\n",max) ;
	return 0;
}
