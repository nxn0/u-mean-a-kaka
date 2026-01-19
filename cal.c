#include <stdio.h>
int main(){
	int x;float a,b,c;
	printf("-------------------------------------------------------------\n1.add 2.sub 3.mul 4.div\nchoose anyone\n--------------------------------------------------\n");
	scanf("%d", &x);
	printf("enter first variable: ")
;	scanf("%f", &a);
	printf("enter second variable: ");
	scanf("%f", &b);
	switch(x){
		case 1:
		c = a+b;
		printf("%.2f + %.2f = %.2f\n",a,b,c);
		break;
		case 2:
		c = a-b;
		printf("%.2f - %.2f = %.2f\n", a,b,c);
		break;
		case 3:
		c = a*b;
		printf("%.2f x %.2f = %2f \n",a,b,c);
		break;
		case 4:
		if(b==0){
			printf("nice try, genius\n");
			break;
		}
		else if (b==69){
			printf("420/69=%d\n",420/69);
			break;
		}
		else{
			c = a/b;
			printf("%.6f / %.6f = %.6f\n", a,b,c);
			break;
		}

		default:
			printf("guess imma read ur mind...\n");
		break;
	}
}


