#include<stdio.h>

main()
{
	const float pi =3.14;
	float r,area;
	
	printf("enter your value r =");
	scanf("%f",&r);
	
	area = pi * r * r;
	printf("Area = %.2f\n",area);
}
