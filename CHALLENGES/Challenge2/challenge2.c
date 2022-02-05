#include<stdio.h>
#include<stdlib.h>


int sum(int var){
    static int sum = 0;
    sum += var;
    printf("%d \n", sum);
    return sum;
}


int main(int argc, char *argv[]){
    
    int check = 1;
    while(check){
        int input;
        printf("Enter value to add: ");
        scanf("%d", &input);

        /*-----check if user wants to terminate to end recursion-------*/
        printf("Enter 0/1...");
        scanf("%d", &check);
        sum(input);
    }

    return 0;
}