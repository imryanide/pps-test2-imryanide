/*

Array processing With functions.
 6.) Write a program to find the average of odd numbers use following function prototypes.
  void input(int n, int a[n]);
  float odd_average(int n, int a[n]); 
  void output(int n, int a[n]); 
print all the elements of the array and then the average  and main.

*/
#include <stdio.h>

void input(int n, int a[n]){
    for (int i = 0; i < n; i++)
    {
        printf("Enter the next element of the array : \t");
        scanf("%d",&a[i]);
    }
}


float odd_average(int n, int a[n]){
    int sum=0,count;
    for (int i = 0; i < n; i++)
    {
        if (a[i]%2 != 0)
        {
            sum += a[i];
            count++;
        }  
    }
    if (sum != 0)
    {
        return sum/count;
    }
    
}   


void output(int n, int a[n], int avg){
    printf("the array is : \n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n and the average is %d \n",avg);
     
}

int main(){
    int n;
    printf("Enter the size of the array : \t");
    scanf("%d",&n);
    int a[n];
    input(n,a);
    float avg;
    avg = odd_average(n,a);
    output(n,a,avg);
    return 0;

}