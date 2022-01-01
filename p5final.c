/*

Write a program to find borga^x given x. The formula for finding borga^x
1 + x/3! + x^2/5! + x^3/7! .....

stop when the next term is less 0.000001, With four functions.

(1 + (x^n)/(2n+1)!)


*/

#include <stdio.h>
#include <math.h>
#include <time.h>

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
    float sum= 1.0, term, prev_term = 1; 
    int i = 1;
    do{
        /*
        sum = sum + term;
        term = (pow(x,i)/fact((2*i) + 1));
        term = get_term(x,i++);
        */
        term = prev_term * x/((i+1)*(i+2));
        sum += term;
        prev_term = term;
        i+=2;
    
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
    time_t seconds,first,second;
    first = time(NULL);
    int x;
    float result;
    x = input();
    result = sum(x);
    printf("Borga is : %lf \n",result);
    second = time(NULL);
    seconds = second - first;
    printf("%ld \n",seconds);
    return 0;

}