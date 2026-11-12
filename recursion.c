#include <stdio.h>
#include <math.h>

typedef char *string;
int countDown(int n);


int main(void)
{
    countDown(5);
    return 0;
}

int countDown(int n) 
{   
    printf("Output: \n");

    if (n == 0) 
    {
        return 0;
    }

    countDown(n - 1);

    int sum = n + countDown(n - 1);
    printf("%i\n", sum);
    return sum;
}