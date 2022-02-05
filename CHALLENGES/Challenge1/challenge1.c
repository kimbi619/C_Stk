#include<stdio.h>
#include<stdlib.h>


/*--------2.) - A global double variable that is only accessible insie a file--------*/
static double two;
/*--------3.) - A global float variable with permanent storage----------------------*/
static float three;


/*--------6.) - A function that is only accessible within the file----------------------*/
static void restrictedFunc(void){
    printf("this function is only accessible within this file");
}

int main(int argc, char *argv[]){
/*--------1.) - Int variable with block scope and temporal storage----------*/
    int one; // 0R auto int one;

/*--------4.) - A float local variable with permanent storage----------------------*/
    static float four;

/*--------5.) - A register int variable ----------------------*/
    register int five;

    restrictedFunc();
    return 0;
}