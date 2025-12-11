#include <stdio.h>

int main(){
	float n1,n2,n3;
	scanf("%f",&n1);
	printf("%.2f\n",(n1 * 95 / 100)); 
	scanf("%f",&n2);
	printf("%.2f\n",((n1+n2) * 85 / 100)); 
	scanf("%f",&n3);
	printf("%.2f\n",((n1+n2+n3) * 70 / 100)); 
}