# include<stdio.h>

void main(){

char a, b, c, d, e, f, g, h;

a = 'A', b = 'n', c = 'i', d = 'n' , e = 'd', f = 'i', g = 't', h = 'a';

// This is the name output
printf("This is the name - %c%c%c%c%c%c%c%c \n", a,b,c,d,e,f,g,h);

//This line is for the uppercase
printf("This is the UpperCase style - %c%c%c%c%c%c%c%C \n",toupper(a),toupper(b),toupper(c),toupper(d), toupper(e), toupper(f), toupper(g), toupper(h) );

//This line is for the lowercase
printf("This is the LowerCase style - %c%c%c%c%c%c%c%c \n",tolower(a),tolower(b),tolower(c),tolower(d), tolower(e), tolower(f), tolower(g), tolower(h) );

}
