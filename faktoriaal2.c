#include <stdio.h>

int main (int argc, char *argv[]) {

        int i;
        int j;
	int z;
	int x;
	int fact_rida;
	int fact_tulp;

	fact_rida = 1;
	fact_tulp = 1;

        for(i = 1; i <= 6; i = i + 1){
		fact_rida = 1;

		for(z = 1; z <= i; z = z + 1)
		{
			fact_rida = fact_rida * z;
		}

		printf("%03d ", fact_rida);

 
        }

        for(j = 1; j <= 6; j = j + 1){
		fact_tulp = 1;

		for(x = 1; x <= j; x = x + 1)
		{
			fact_tulp = fact_tulp * x;
		}

		printf("%03d\n", fact_tulp);

 
        }
        return 0;
}
