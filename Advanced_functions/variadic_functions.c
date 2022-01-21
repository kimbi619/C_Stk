// this is a function that takes variable number of arguments as the parameter 

#include<stdio.h>
#include<stdarg.h>

double average(double v1, double v2, ...);
int main(){
    double v1 = 10.5, v2 = 2.5;
    int num1 = 6, num2 = 5;
    long num3 = 12L, num4 = 20L;

    printf("the average is %.4f \n", average(v1, 3.5, v2, 4.5, 0.0));

    return 0;
}

double average(double v1, double v2, ...){
    va_list parg;
    double sum  = v1 + v2;
    double value;

    int count = 2;
    va_start(parg, v2);

    while((value = va_arg(parg, double)) != 0.0){
        sum += value;
        ++count;
    }
    printf("sum = %f, count = %f\n", sum, count);
    return sum/count;
}

