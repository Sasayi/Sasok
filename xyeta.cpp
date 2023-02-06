#include <cstdlib>
#include <iostream>
#include <stdbool.h>
#include <inttypes.h>
int main(int argc, char*argv[])
{
    int start, stop, step;
    printf("generator of progression.\n"
               "Enter start, stop, step:");
               scanf("%d%d%d", &start, &stop, &step);
              int sign = (step>0)? +1: -1;
              int sign1 = (step> 0)? +1: 0;
                   int x = start;
               while (sign1*sign*x < sign*stop)
               {
                   printf ("x=%d\n", x);
                   x+=step;
               }
    printf ("After: x=%d\n", x);
    return 0;
}
