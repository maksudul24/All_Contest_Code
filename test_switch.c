#include <stdio.h>

main()
{

        int x;
        printf("Write a number: \n");
        scanf("%d", &x);
        switch (x)
        {
                case 1: {  printf("A\n"); break; }
                case 2: {  printf("AA\n"); break; }
                case 3: {  printf("AAA\n"); break; }
               default: {  printf("Wrong Number\n"); break; }
        }

}
