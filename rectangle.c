#include<stdio.h>
typedef struct complex{ 
     float re,im; //data members
 } complex;

/*
typedef vs #define
*****************************
eg: typedef unsigned char BYTE;
BYTE can be used instead of unsigned char

i.e.
int main(){

    BYTE n1,n2;
    n1 ='c';
}
*****************************
#define hyd "hyderabad"
#define one 1
#define pi 3.14
*****************************
typedef is limited to giving symbolic names to types, only!
where as, #define for both value  and variable!
*/

int main(){

complex n1 ={3.1, 4.5};
printf("%f, %f",  n1.re, n1.im);
return 0;
}


