
#include<stdio.h>
#include<stdnoreturn.h>

_Noreturn my_exit();
void my_exit(){
    printf("exitiing \n");
    exit();
}
int main(){
    my_exit();
    return 0;
}