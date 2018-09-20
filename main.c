#include <stdio.h>
int main()
{
    int num, count, sum = 0;
    
    printf("Enter a positive integer: ");
    scanf("%d", &num);
    
    // for loop terminates when n is less than count
    for(count = 1; count <= num; ++count)
    {
        sum += count;
    }
    
    printf("Sum = %d", sum);
    
    return 0;
    // Testovksi
}

//This is sum function
int sum(int a, int b)
{
    return a + b;
}

int sub(int a, int b)
{
    return a - b;
}

int mul(int a, int b)
{
    return a * b;
}

int div(int a, int b){
    return a / b;
}

int nesto(int a, int b){
	return a * a * b;
}
