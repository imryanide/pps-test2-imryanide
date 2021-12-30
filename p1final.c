#include <stdio.h>
#include <math.h>

/*
Write a program to find distance between two points.
*/


typedef struct _coord
{
    int x;
    int y;
}coord;






coord input_coordinates(){
    coord a;
    printf("Enter the first co-ordinate : \t");
    scanf("%d", &a.x);
    printf("Enter the second co-ordinates : \t");
    scanf("%d", &a.y);
    return a;
}

int find_distance(coord a, coord b){
    // d=√((x_2-x_1)²+(y_2-y_1)²) 
    int distance;
    distance = sqrt((pow((b.x - a.x),2)) + (pow((b.y - a.y),2)));
    return distance;
}

void output(coord a, coord b, int dist){
    //
    printf("The distance between (%d,%d) and (%d,%d) is %d. \n",a.x,a.y,b.x,b.y,dist);
}


int main(){
    coord a,b;
    int distance;
    a = input_coordinates();
    b = input_coordinates();
    distance = find_distance(a,b);
    output(a,b,distance);
    return 0;

}