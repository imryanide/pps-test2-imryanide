/*

Write a program to find borga^x given x. The formula for finding borga^x
1 + x/3! + x^2/5! + x^3/7! .....

stop when the next term is less 0.000001, With four functions.

(1 + (x^n)/(n+2)!)


*/

#include <stdio.h>
#include <math.h>

int fact(int x){
    if(x == 1)
    {
        return 1;
    }
    else
    {
        return x * fact(x-1);
    }
}

float get_term(int x,int i){
    float term;
    term = (pow(x,i)/fact((2*i) + 1));
    return term;
}

float sum(int x){
    float sum= 1.0, term=0; 
    int i = 1;
    do{
        sum = sum + term;
        term = get_term(x,i++); 
    } while (term>0.000001);
    return sum;
}


int input(){
    int x;
    printf("Enter the number to find the borga of : \t");
    scanf("%d",&x);
    return x;
}

int main(){
    int x;
    float result;
    x = input();
    result = sum(x);
    printf("Borga is : %lf \n",result);
    return 0;

}