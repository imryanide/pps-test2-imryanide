/*Write a program to find the weight of the camel given height, length and stomach radius. 

weight = pi * stomach_raduius^3 * sqrt(height * length). 

using four functions and following function signatures. 5 marks

void input_camel_details(float *radius, float *height, float *length)

float find_weight(float radius, float height, float length); void output(float radius, float height, float length, float weight); and int main()
*/

#include <stdio.h>
#include <math.h>

#define PI 3.14159

void input_camel_details(float *radius, float *height, float *length){
    printf("Enter the radius of the camel's stomach : \t");
    scanf("%f", radius);
    printf("Enter the height of the camel : \t");
    scanf("%f", height);
    printf("Enter the length of the camel : \t");
    scanf("%f", length);
}

float find_weight(float radius, float height, float length){
    //weight = pi * stomach_raduius^3 * sqrt(height * length). 
    float weight;
    weight = (PI * pow(radius,3) * sqrt(height*length));
    return weight;
}

void output(float radius, float height, float length, float weight){
    printf("The weight of the camel whose stomach radius is %0.2f and its height is %0.2f and its length is %0.2f is %0.2f \n   ",radius,height,length,weight);

}

int main(){
    float radius,height,length,weight;
    input_camel_details(&radius,&height,&length);
    weight = find_weight(radius,height,length);
    output(radius,height,length,weight);
    return 0;
}