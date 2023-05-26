//calculating simple and compound intrest
#include <stdio.h>
#include <math.h>
int main()
{
	float p, r, t, a, si, ci;
	printf("enter principle amont");
	scanf("%f", &p);
	printf("enter rate");
	scanf("%f", &r);
	printf("enter time");
	scanf("%f", &t);
	//formula si=(p*r*t)/100
	si=(p*r*t)/100;
	printf("simple intrest=%f",si);
	//amount = p(1+r/100)^n
	a = p*(pow((1 + r/100), t));
	ci = a - p;
	printf("\ncompound intrest=%f" ,ci);
}
	