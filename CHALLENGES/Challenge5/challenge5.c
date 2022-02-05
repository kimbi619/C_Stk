#include<stdio.h>
#include<stdlib.h>

struct myArray{
    int count;
    int arr[];
};

int size;

int main(int argc, char *argv[]){
    printf("Enter size: ");
    scanf("%d", &size);

    struct myArray *p;
    p = malloc(sizeof(struct myArray) + size * sizeof(int));
    

    printf("enter item: \n");
    for(int i = 0; i < size; i++){
        int input;

        printf(">>> ");
        scanf("%d", &input);

        p->arr[i] = input;
    }

    for(int i = 0; i < size; i++){
        printf("%d > ", p->arr[i]);
    }

    
    return 0;
}