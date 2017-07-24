#include <stdio.h> 
#include <stdlib.h>

#define PROB 2

#define PROB1 1 
#define PROB2 2 
#define PROB3 3 
#define PROB4 4 
#define PROB5 5 
#define PROB6 6

void conv(unsigned long var);
void inv(unsigned long param);
/* 
#define setBit(var, pozitie) var|=(1<<pozitie) 
#define clearBit(var, pozitie) var&=~(1<<pozitie) 
#define getBit(var, pozitie) var&(1<<pozitite)

*/

int main(){

return 0;
}

#if(PROB == PROB1) 
void conv(unsigned long var) 
{ 
        int reminder, v[sizeof(var) * 8], nr_1 = 0, nr_0 = 0, k = 0;
        while (var != 0) 
        {
                reminder = var % 2; var = var / 2;

                if (reminder)
                {
                 nr_1++;
                }
                else
                {
                 nr_0++;
                }
                v[k] = reminder;
                k++;
         }
    for (int i = k - 1; i >= 0; i--)
    {
        printf("%d ", v[i]);
    }
}
#endif /* (PROB == PROB1) */

#if(PROB == PROB3) void inv(unsigned long param) { unsigned long temp = 0; unsigned long i; unsigned long NoOfBits = sizeof(param) * 8; unsigned long mask = 0;

for (i = 0; i < NoOfBits; i++){

    mask = param >> i;
    temp = temp + ((mask & 1) << (NoOfBits - 1 - i));

}
printf("%lu \n", temp);
} #endif /* (PROB == PROB3) */
