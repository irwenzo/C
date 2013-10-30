#include <stdio.h>
int main(int argc, char * argv[]) {

    double x0=2.0;
    double x1=12.0;
    int n=4;
    int i;
    double a;
    double b;
    double dx;
    double S;
    double y;
    double x;
	
	 i=0;
    	 a=x0;
   	 dx=(x1-x0)/n;
    	 while(i<n)
	{
		b=a+dx;
		x=b-dx/2;
		y=x*x;
		S=x*y;
		printf("i=%d a=%5f b=%f x=%f y=%f S=%f\n", i, a, b, x, y, S);
		a=b;
		i=i+1;
	}	
	
    return 0;
}
