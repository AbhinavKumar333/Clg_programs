#include<stdio.h>
#include<stdlib.h>

int fibonacci(int n){

	if(n == 0){ return 0; }
	else if(n == 1){ return 1; }

	else{
		return (fibonacci(n-1)+fibonacci(n-2));
	}
}

void main(){
	int num,i;
	
	printf("Enter the number of fibonacci series to be displayed");
	scanf("%d",&num);
	for(i=0;i<num;i++){
		printf("%d",fibonacci(i));
	}
}
		

