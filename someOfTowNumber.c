#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	int a,b;
    float c,d;
    scanf("%d %d",&a,&b);
    scanf("%f %f", &c,&d);
    int sum = a+b;
    int defarent = a-b;
    float flSum = c+d;
    float Fldefarent = c-d;
    printf("%d %d\n",sum,defarent);
    printf("%0.1f %0.1f", flSum, Fldefarent);
    return 0;
}
