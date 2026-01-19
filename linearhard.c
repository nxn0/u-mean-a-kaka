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
int main(){
 //this is hardcoded version
	double x[100]={1, 2, 3, 4, 5, 6, 7, 8, 9, 10,
	11, 12, 13, 14, 15, 16, 17, 18, 19, 20,
	21, 22, 23, 24, 25, 26, 27, 28, 29, 30,
	31, 32, 33, 34, 35, 36, 37, 38, 39, 40,
	41, 42, 43, 44, 45, 46, 47, 48, 49, 50,
	51, 52, 53, 54, 55, 56, 57, 58, 59, 60,
	61, 62, 63, 64, 65, 66, 67, 68, 69, 70,
	71, 72, 73, 74, 75, 76, 77, 78, 79, 80,
	81, 82, 83, 84, 85, 86, 87, 88, 89, 90,
	91, 92, 93, 94, 95, 96, 97, 98, 99, 100};
	
	double y[100]={2.1, 2.6, 3.1, 3.9, 4.2, 4.5, 5.0, 5.3, 5.8, 6.2,
	6.4, 7.0, 7.1, 7.7, 8.0, 8.3, 8.7, 9.0, 9.4, 9.9,
	10.1, 10.5, 10.8, 11.2, 11.5, 11.9, 12.3, 12.7, 12.9, 13.2,
	13.7, 14.0, 14.3, 14.7, 15.1, 15.4, 15.8, 16.0, 16.5, 16.9,
	17.2, 17.5, 17.9, 18.3, 18.6, 18.9, 19.3, 19.7, 20.0, 20.3,
	20.7, 21.1, 21.4, 21.7, 22.0, 22.4, 22.8, 23.1, 23.4, 23.8,
	24.1, 24.5, 24.8, 25.2, 25.5, 25.9, 26.2, 26.6, 26.9, 27.2,
	27.6, 27.9, 28.3, 28.7, 29.0, 29.3, 29.7, 30.0, 30.4, 30.7,
	31.0, 31.4, 31.7, 32.1, 32.4, 32.8, 33.1, 33.5, 33.8, 34.1,
	34.5, 34.8, 35.2, 35.5, 35.9, 36.2, 36.5, 36.9, 37.2, 37.6};
	int i;//loop var
	
	// sum of x and y training data
	double xs=0,ys=0,xys=0,sqs=0;
	for(i=0;i<100;i++){
		xs += x[i];
		ys += y[i];
		xys += x[i]*y[i];
		sqs += x[i]*x[i];
	}
	double m, c; /* m = ((sum of x*y)-(sum of x)*(sum of y))/
			 * ((sum of x^2)- ((sum of x)^2))*/
	m = ((100*xys) - (xs * ys)) / ((100*sqs) - (xs * xs));
	c = (ys - (m * xs)) / 100;
	//get inputs and predictions.
	//we use y=mx+c here, y is the prediction
	double xp ,yp;
	printf("enter a value of x to predict y: ");
	scanf("%lf" , & xp);
	yp = m * xp + c;
	printf("\ny = %lf\n", yp);
	return 0;
}
	




