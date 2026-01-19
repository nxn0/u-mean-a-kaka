#include<stdio.h>
int main(){
	int a[50],k,i,n;
	printf("enter the limit: ");
	scanf("%d",&n);
	printf("enter the array elements: \n");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	printf("enter the element to be searched: ");
	scanf("%d",&k);
	int flag=0;
	for(i=0;i<n;i++){
		if(a[i]==k){
			flag=1;
			printf("key element found at position [%d]\n",i+1);
			break;
			}
		}
	if(flag==0){
		printf("key element not found. \n");
	}
	return 0;
}
