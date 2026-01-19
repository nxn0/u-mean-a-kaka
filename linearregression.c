/*to find the m slope
 * y = mx + c
 * m = ((sum of x*y)-(sum of x)*(sum of y))/
 * ((sum of x^2)- ((sum of x)^2))
 * as u can see, x and y are values and m is rhw slopw .
 * first take the x and y corresponded and multply eaxh individual x values with y values then find the sum of their arrays.
 * then taking the entire sum of x and y is taken and multiplies, after that it is subtracted from the x and y sum
 * upper value is now there
 * then for denominator the sum of entire x is taken and squaewd abd is subtraced from the sum of individual x squars in an array 
 * numerator is divided by the denominator .
 * c = sum of y - m * sum of x / n 
 */
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
//building a small formula for today i have to study for exams
//make the values double
int main(){
	double x[50], y[50]; //malloc later
	int i,n;
	printf("enter the no of values for both x and y: ");
	scanf("%d" ,&n);
	printf("enter the values to pass to x: \n");
	for(i=0;i<n;i++){
		scanf("%lf", &x[i]);
	}
	printf("enter the values to pass to y: \n");
	for(i=0;i<n;i++){
		scanf("%lf", &y[i]);
	}
	// sum array initialization
	double xs=0,ys=0,xy[50]={0},sq[50]={0};
	for(i=0;i<n;i++){
		xs=xs+x[i];
		ys=ys+y[i];
		xy[i]=x[i]*y[i];
		sq[i]=x[i]*x[i];
	}
	double xys=0,sqs=0;
	for(i=0;i<n;i++){
		xys=xys+xy[i];
		sqs=sqs+sq[i];
	}
	double m, c; /* m = ((sum of x*y)-(sum of x)*(sum of y))/
			 * ((sum of x^2)- ((sum of x)^2))*/
	m = (xys - (xs * ys)) / (sqs - (xs * xs));
	c = (ys - m * xs) / n;
	




