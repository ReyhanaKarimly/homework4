#include <stdio.h>
#include <conio.h>
#include <math.h>
int main()
{
	printf("Enter the legs of the right-angled triangle:");
	float a,b,c,S,P,r,R;
	scanf("%f%f",&a,&b);
	c=sqrt(a*a+b*b);
	S=a*b/2;
	P=a+b+c;
	r=(a+b-c)/2;
	R=c/2;
	printf("Hypotenuse=sqrt(a*a+b*b)=%.2fm",c);
	printf("\nSquare=a*b/2=%.2fm2,\nPerimeter=a+b+c=%.1fm,\nThe radius of the incircle=(a+b-c)/2=%.1fm",S,P,r);
	printf("\nThe radius of the circumcircle=c/2=%.1fm",R);
	getch();
}