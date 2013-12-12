#include <stdio.h>

float G(float x,float y,float w,float h, float Z){
	printf("G X GoTo 100 %f\n", x); 
	printf("G Y GoTo 200 %f\n", y);
	printf("G Z Down %f\n", -Z);
	printf("G X Move 30 %f\n", w);
	printf("G Y Move 44 %f\n", h);
	printf("G X Move -33 %f\n", -w);
	printf("G Y Move -44 %f\n", -h);
	printf("G Z Up %f\n", Z);
	
	return 0;
}




int main(int argc, char *argv[]){
	G(100,200,30,44);
	
	return 0;		
}	
	
