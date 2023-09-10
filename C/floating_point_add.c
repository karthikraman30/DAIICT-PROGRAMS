#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    float a;
    float b;
    scanf("%f",&a);
    scanf("%f",&b);
    int result=(a+b);
    printf("%.2f\n",a);
    printf("%.2f\n",b);
    printf("%d",result);
    
    return 0;
}