#include<stdio.h>

int main(){

int number;

scanf("%d",&number);

double sqrt,temp;

sqrt=number/2;
temp=0;

while(sqrt!=temp){
 temp=sqrt;
 sqrt=(number/temp+temp)/2;

}
 printf("The square root of '%d' is '%.10f'", number, sqrt);

 return 0;
}
