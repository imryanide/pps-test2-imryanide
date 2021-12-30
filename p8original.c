/*
8.) Write program to find the weight of a truck load of n camels.
Take input a) truck weight and b) height, radius and length of n camels and compute the total truck weight.
( Truck weight + weight of the camels) With functions - 5 marks.

Call functions from earlier programs where required.
float input_truck_weight(); 
int input_no_camels(); 
void input_camel_details(int n, Camel c[n]); 
float comput_total_weight(int n, Camel c[n], float truck_weight); 
void ouput(float total_truck_weight); and 
int main()
*/

#include<stdio.h>
#include<math.h>

#define PI 3.14159

typedef struct _camel
{
    float radius;
    float height;
    float length;
    float weight;
}camel;



float input_truck_weight(){
    float wt;
    printf("Enter the weight of the truck : \t");
    scanf("%f",&wt);
    return wt;
}

int input_no_camels(){
    int no;
    printf("Enter the number of camels : \t");
    scanf("%d",&no);
    return no;
}



float compute_total_weight(int n, camel asis[n], float truck_weight){
    float totalcamelweight = 0;
    float tempwt;
    //totalcamelweight =(n * (PI * pow(asis.radius,3) * sqrt(asis.height*asis.length)));
    for (int i = 0; i < n; i++)
    {   
        tempwt =((PI * pow(asis[i].radius,3) * sqrt(asis[i].height * asis[i].length)));
        totalcamelweight += tempwt;
    }
    

    float totalweight;
    totalweight = totalcamelweight+truck_weight;
    return totalweight;
}

camel inputcamel(){
    camel asis;
    printf("Enter the radius of the camel : \t");
    scanf("%f",&asis.radius);
    printf("Enter the height of the camel : \t");
    scanf("%f",&asis.height);
    printf("Enter the length of the camel : \t");
    scanf("%f",&asis.length);


    return asis;
}


void input_n_camels(int n, camel asis[n]){
    for (int i = 0; i < n; i++)
    {
        printf("Camel %d : \n",i+1);
        asis[i] = inputcamel();
    }
    
}

void output(float total_truck_weight){
    printf("Truck weight is : %f \n",total_truck_weight);
}

int main(){
    int n;
    float totalweight,x;
    x=input_truck_weight();
    n = input_no_camels();
    camel asis[n];
    input_n_camels(n,asis);
    totalweight =compute_total_weight(n,asis,x);
    output(totalweight);
    return 0;


}


