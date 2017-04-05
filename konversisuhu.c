#include <stdio.h>

int main (){
	float t,a;
	char b[0];
	scanf("%f", &t);
	scanf("%s", &b[0]);
	switch (b[0])
	{
		case 'R' :
			a=t*4/5;
			break;
		case 'F' :
			a=t*9/5+32;
			break;
		case 'K':
			a=t+273.15;
			break;
	}
	printf("%.2f\n",a);
	return 0;
}
