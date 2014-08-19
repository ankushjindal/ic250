#include <stdio.h>
#include <stdlib.h>
#include "complex.h"


int main(int argc, char *argv[])
{
	complex a,b;
	float firstP = atof(argv[2]);
	float secondP = atof(argv[3]);
	//printf("%f\n%f\n",firstP,secondP);
	switch (argv[1][0])
	{
		case 'p':
			a = makefrompolar(firstP,secondP);
			printf("Rectangular form: ");
			write(a);
			break;
		case 'r':
			a = makefromrect(firstP,secondP);
			//write(a);
			printf("Polar form: ");
			b = recttopolar(a);
			writepolar(b);
			break;
		default:
			printf("Invalid flag\n");
			return -1;
	}
	printf("Complex conjugate: ");
	write(conjugate(a));
	printf("Square of it: ");
	write(csquare(a));
	return 0;
}
