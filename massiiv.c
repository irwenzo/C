#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[]){
    int nr [100];
    int i;
    double rk=0;
    for(i=0; i<100; i=i++){
 		nr[i]=20+rand()%21;
	}
    for(i=0; i<100; i=i++){
	printf("%d\t%d\n", i, nr[i]);
	}
    for(i= 0; i<100; i++){ 
	printf("\n");
	rk +=(nr[i]*nr[i]);
	return(sqrt(rk/100));	
	printf("Ruutkeskmine: %f\n", rk/100);
	return 0;
	}
}



















