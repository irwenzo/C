#include <stdio.h>

int main(int argc, char *argv[]) {
    
    
        int k1;
        int k2;

    for (k1=1; k1<=8; ++k1)
        {
            for (k2=0; k2<=8; ++k2)
            {
                if (k2<k1)
                {
                    printf("#");
                }
                else
                {
                    printf("*");
                }
                
            }
        printf("\n");
    }
   return 0;
}
  
