#include<stdio.h>

void main()
{
// -------------- Two integer value sum, sub, multip.,& divide below

int a,b,c,d,e,f;
a = 15;
b = 3;
printf("The integer values are these - %d , %d\n", a, b );

// SUM
c = a+b;
printf("This is the Integer Sum result- %d \n", c);

// SUBTRACT
d = a-b;
printf("This is the Integer Sub result- %d \n", d);

// MULTIPLICATION
e = a*b;
printf("This is the Integer Mul result- %d \n", e);

// Divide
f = a/b;
printf("This is the Integer Div result- %d \n\n", f);


// -------------- Two Float value sum, sub, multip.,& divide below

float m,n,o,p,q,r;

m = 45.35;
n = 5.45;
printf("The Float values are these - %.2f , %.2f\n", m, n );


// ---- SUM
o = m + n;
printf("This is the Float SUM result- %0.4f \n", o);

// ---- SUBTRACT
p = m - n;
printf("This is the Float SUB result- %0.4f \n", p);

// ---- MULTIPL
q = m * n;
printf("This is the Float MUL result- %0.4f \n", q);

// ---- DIVIDISION
r = m / n;
printf("This is the Float DIV result- %0.4f \n", r);



}
