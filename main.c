#include <stdio.h>
#include "evenodd.h"

int main(){

	int num, flag;
	printf("\n Enter a number:");
	scanf("%d", &num);
	flag = evenodd(num);
	if (flag == 1){
		printf("\n %d is EVEN",num);
	}
	else{
		printf("\n %d is ODD",num);
	}

	return 0;





}