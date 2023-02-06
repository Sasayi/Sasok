
#include <stdio.h>
int main(int argc, char*argv[])
{
    int start, stop, step1;
    printf("generator of progression.\n"
               "Enter start, stop, step1:");
               scanf("%d%d%d", &start, &stop, &step1);
              int sign = (step1>0)? +1: -1;
                   int x = start;
               while (sign*x < sign*stop)
               {
                   printf ("x=%d\n", x);
                   x+=step1;
               }
    printf ("After: x=%d\n", x);
    return 0;
}

