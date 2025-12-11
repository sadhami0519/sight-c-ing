//program to print the following pattern
/*
INput 
5
output
1        1
12      12
123    123
1234  1234
1234512345
*/
#include <stdio.h>
int main(){
	int n;
	scanf("%d", &n);
    printf("\n");
    //Second half
	for (int r = 1; r<=n; r++){
		//Printing *
		for (int c = 1; c<=r; c++)
			printf("*");
		//Printing Space
		for (int j = 1; j<=(n-r)*2; j++)
			printf(" ");
		//Printing *
		for (int c = 1; c<=r; c++)
			printf("*");
		printf("\n");		
	}	
	//First half
	for (int r = n-1; r>=1; r--){
		//Printing *
		for (int c = 1; c<=r; c++)
			printf("*");
		//Printing Space
		for (int j = 1; j<=(n-r)*2; j++)
			printf(" ");
		//Printing *
		for (int c = 1; c<=r; c++)
			printf("*");
		printf("\n");		
	}	
	
	return 0;	
}