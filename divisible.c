// Check whether a number is divisible by both 3 and 5
#include <stdio.h>
int main(){
	int num;
	printf("type number \n");
	scanf("%d",&num);
	if(num % 3 == 0 && num % 5 == 0){
		printf("Yes\n");
	}else{
		printf("No\n");
	};
}
