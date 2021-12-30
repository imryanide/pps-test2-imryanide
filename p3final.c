/*
Write a program to find the weight of the camel given height, length and stomach radius. 
weight = pi * stomach_raduius^3 * sqrt(height * length).
 using four functions and following function signatures.
   struct camel { float radius, height, length,weight; };
   typedef struct camel Camel; Camel input();
do not take weight as input from the user / float find_weight(Camel c); / pass by value
 or void find_weight(Camel *c); passing address variable  void output(Camel c); and int main()
*/

#include <stdio.h>
#include <math.h>

#define PI 3.14159

typedef struct _camel
{
    float radius;
    float height;
    float length;
    float weight;
}camel;


camel input_camel(){
    camel Asis;
    printf("Enter the radius of the camel's stomach : \t");
    scanf("%f", &Asis.radius);
    printf("Enter the height of the camel : \t");
    scanf("%f", &Asis.height);
    printf("Enter the length of the camel : \t");
    scanf("%f", &Asis.length);
    return Asis;
}


camel find_weight(camel Asis){
    //weight = pi * stomach_raduius^3 * sqrt(height * length). 

    Asis.weight = (PI * pow(Asis.radius,3) * sqrt(Asis.height*Asis.length));
    return Asis;
}



void output(camel Asis){
    printf("The weight of the camel whose stomach radius is %0.2f and its height is %0.2f and its length is %0.2f is %0.2f \n   ",Asis.radius,Asis.height,Asis.length,Asis.weight);
}


int main(){
    camel Asis;
    Asis = input_camel();
    Asis = find_weight(Asis);
    output(Asis);
    return 0;
}

