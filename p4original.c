/*
When a camel is
a) sick its stomach_radius is less than height and less than length. 
b) happy its height is less than length and less than stomach_radius. 
c) tense its length is less than height and stomach_radius.

Write a program to find whether a camel is sick, happy, or tense. With functions and structure
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

int find_status(camel Asis){
    // 1 = sick, 2 = happy, 3 = tense, 0 = unknown
    int stat;
    if(Asis.radius < Asis.height && Asis.radius < Asis.length)
    {
        return 1;
    }
    else if(Asis.height < Asis.length && Asis.height < Asis.radius)
    {
        return 2;
    }
    else if(Asis.length < Asis.height && Asis.length < Asis.radius)
    {
        return 3;
    }
    else
    {
        return 0;
    }
}

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



void output(camel Asis, int status)
{
    // 1 = sick, 2 = happy, 3 = tense, 0 = unknown
    switch (status) {
    case 1:
        printf("Camel is sick");
        break;
    case 2:
        printf("Camel is happy");
        break;
    case 3:
        printf("Camel is tense");
        break;
    default:
        printf("Camel status is unknown.");
        break;
    } 
}


int main(){
    camel Asis;
    int status;
    Asis = input_camel();
    Asis = find_weight(Asis);
    status = find_status(Asis);
    output(Asis,status);
    return 0;
}
