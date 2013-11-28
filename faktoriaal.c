#include <stdio.h>
int main (int argc, char *argv[]) {

        int i;
        int j;
        for(i=1; i<=6; i=i+i){
                for(j = 1; j <= 6; j=j+j){
                        if(a*i<99)
                        {
                                printf("%03d", j*i);
                        } else
                        {
                                printf(" %d", j*i);
                        }
                }
                printf("\n");
        }
        return 0;
}
