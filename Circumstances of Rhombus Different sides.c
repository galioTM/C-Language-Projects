/* Used to Measure the Circumferance of Rhombus with Different sides */
#include <stdio.h>
#include <math.h>
//Creator :- Venkatesh
//Formula :-  i=c=4*S+S+S+S
 
 int main (){
 	int a,b,c,d;
 	int s;
 	float i ;
 	printf("Enter Four Sides \n");
 	printf("First Side(A) = ");
 	scanf("%d",&a);
 	printf("Secound Side(B)= ");
 	scanf("%d",&b);
 	printf("Third Side(C) = ");
 	scanf("%d",&c);
 	printf("Fourth Side(D) = ");
 	scanf("%d",&d);
 	printf("Total sides Value:- " );
 	s=a+b+c+d;
 	printf("%d \n ",s);
 	
    printf("Total Circumfernce =");
    // i=c=4*s
    i = 4*s;
    printf("%f \n ",i);
    
    printf("Created By Venkatesh");
 	
 	}
