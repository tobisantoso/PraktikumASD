#include <stdio.h>

int main () {
	int bil,batas,jumlah=0;
	scanf("%i" , &batas) ;
	
	for (bil=1; bil<=batas; bil++) {
	jumlah =jumlah + bil;}
	printf ("%i\n",jumlah) ;
	return 0;
	
}
