#include <stdio.h>
typedef struct complex
{
	int real;
	int imag;
} comp;

comp add(comp x, comp y)
{
	comp z;
	z.real = x.real + y.real;
	z.imag = x.imag + y.imag;
	return z;
}
comp sub(comp *p1, comp *p2)
{
	comp z;
	z.real = p1->real - p2->real;
	z.imag = p1->imag - p2->imag;
	return z;
}
int main()
{
	comp r1, r2, c1, c2;
	printf("\n Enter the 1st Complex Number: ");
	scanf("%d%d", &c1.real, &c1.imag);
	printf("\n Enter the 2nd Complex Number: ");
	scanf("%d%d", &c2.real, &c2.imag);
	//passing array to function....
	r1 = add(c1, c2);
	r2 = sub(&c1, &c2);
	printf("\n Addition of Complex Number is: %d + %di", r1.real, r1.imag);
	printf("\n Subtraction of Complex Number is: %d - %di", r2.real, r2.imag);
}
