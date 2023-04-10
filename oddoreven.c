//Program to find the given number even or odd
#include<stdio.h>
int main(){
	int number;
	printf("Enter the number: \n");
	scanf("%d",&number);
	if((number%2)==0){
		printf("Number %d is Even number",number);}
	else{
		printf("Number %d is Odd number",number);
     	}
	return 0;
}

