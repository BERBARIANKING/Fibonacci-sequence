#include <stdio.h>

void intro()
{
printf("Fibonacci sequence in c written by Nikolaos Bermparis\n");
puts("");

}

void fib(int x)
{
   long long int a=0 , b=1 , temp;
    printf("Fibonacci sequence with the current terms: %d\n", x);

    for (long int i=0; i<x; i++)
    {
        temp = a+b;
        printf("%d ", temp);
        a=b;
        b=temp;
    }

}

int main()
{
    intro();
    int x;
    printf("Enter Fibonacci terms: ");
    scanf("%d", &x);
    if(x<0)
    {
        printf("Wrong terms , exiting ...\n");
        exit(1);
    }
    fib(x);

    return 0;
}
