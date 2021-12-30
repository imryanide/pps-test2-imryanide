/*
Write a program to find if the name of the camel is a nice name
Camels name is nice if it has at least 2 vowels and 2 consonants in it. with four functions
*/

#include<stdio.h>

void stringinput(char (*a)[50]){
    printf("Enter Camel's Name : ");
	scanf("%s",a[0]);
	printf("Camel's name is : %s \n",a[0]);
}


int isVowel(char x){
    if (x == 'a' || x == 'e' || x == 'i' || x == 'o'|| x == 'u' || x == 'A' || x == 'E' || x == 'I' || x == 'O'|| x == 'U')
    {
        return 1;
    }
    else
    {
        return 0;
    }
} 

int namecheck(char name[50]){
    int vow=0,cont = 0;
    for (int i = 0;name[i] !='\0' ; i++)
    {
        if (isVowel(name[i]) == 1)
        {
            vow++;
        }
        else
        {
            cont++;
        }
    }
    
    if (vow >=2 && cont >= 2)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void output(int res){
    if (res == 1)
    {
        printf("Camel has nice name");
    }
    else{
        printf("Camel is depressed cause bad name");
    }
}



int main(){
    char name[50];
    int res;
    stringinput(&name);
    res = namecheck(name);
    output(res);
    return 0;
}  
