/*Used to Find the Area of Circle*/
#include <stdio.h>
#include <math.h>
#define pie 3.14
int main() {
	//Formula= 3.14 *r*r
	int r; //int must be a number ( %d ) are must be a ( whole number)
	float a; // it is used to get values in points ( %f )
	printf("Enter the Radius of Circle:- ");
	scanf("%d", &r);
	printf("Area of Circle :-  ");
	a = 3.14 *r*r;
	printf("%f",r);
	return 0;
	/* Modified:- Pavan , Venkatesh */
	}