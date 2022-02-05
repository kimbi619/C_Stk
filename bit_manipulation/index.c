#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int convertBinaryToDecimal(long long binIN){
    int decimalValue = 0,  i = 0, remainder = 0;
    while(binIN != 0){
        remainder = binIN % 10;
        binIN = binIN / 10;
        decimalValue += remainder * pow(2, i);
        ++i;

    }
    printf("%d \n", decimalValue);
    return decimalValue;
}

int convertDecimalToBinary(int n){
    long long binOut;
    int remainder, i = 1;

    while(n != 0){
        remainder = n % 2;
        n = n / 2;
        binOut += remainder * i;
        i = i * 10;
    }
    printf("%lld \n", binOut);
    return binOut;
}

int main(int argc, char argv[]){
    long long binIN;
    int decIN;
    printf("Enter binary value: ");
    scanf("%lld", &binIN);
    convertBinaryToDecimal(binIN);

    printf("Enter decimal to convert: ");
    scanf("%d", &decIN);

    convertDecimalToBinary(decIN);
    return 0;
}