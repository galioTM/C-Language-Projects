// Use to Find Simple Interest
#include <stdio.h>
#include <math.h>
int main (){
	// Formula :- p*t*r/100 
	int p,t,r;
	float I;
  printf("Enter Amount Deatails \n");
  printf("Prinicipal Amount  = ");
  scanf("%d",&p);
  printf("Time in months       = ");
  scanf("%d",&t);
  printf("Rate of interest        = ");
  scanf("%d",&r);
  printf("Total Interest            = ");
  I=p*t*r/100;
  printf("%f",I);
  printf("/- \n");
  printf("Degined By Venkatesh");
  return 0;
 }