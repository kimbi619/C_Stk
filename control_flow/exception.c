#include<stdio.h>
#include<setjmp.h>

jmp_buf buf;
int main(){
    int i = setjmp(buf);
    printf(" i = %d \n", i);

    longjmp(buf, 42);
    printf("This line never gets printed");
    return 0;
}