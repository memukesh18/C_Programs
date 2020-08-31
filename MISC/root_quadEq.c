// program to find the roots of quadratic equation
// compile using "gcc -o root_quadEq root_quadEq.c -lm"

#include<stdio.h>
#include<math.h>

void main(){
	int a, b, c;
	float d, x1, x2;
	printf("Enter the coefficients of the equation :\n");
	scanf("%d %d %d",&a, &b, &c);
	d = (float) sqrt((b*b) - (4*a*c));
	x1 = ((-b) + d) / (2*a);	//to find the first root
	x2 = ((-b) - d) / (2*a);	// to find the second root
	printf("\nThe root of the equation are %f and %f\n", x1, x2); //to print the roots
}
