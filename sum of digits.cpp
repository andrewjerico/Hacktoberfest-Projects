#include<stdio.h>
int main(){
	
	int t; 
	int input;
	int sum;
	int c;
	scanf("%d", &t);
	while(t--){
		scanf("%d", &input);
		while(input!=0){
			c = input%10;
			sum = sum + c;
			input =input/10;
		}
	printf("%d\n", sum);
	sum=0;
	}
	
	return 0;
}
