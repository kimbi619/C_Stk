#include<stdio.h>

int len;
size_t size;
int sum;
int main(int argc, char *argv[]){
    printf("please enter length of array: ");
    scanf("%d", &len);
    int arr[size];

    printf("\nArray of size %d are: \n", len);

    for(int i = 0; i< len; i++){
        int input;
        printf(">>> ");
        scanf("%d", &input);

        arr[i] = input;
    }

    printf("The values are...");
    for(int i = 0; i< len; i++){
        printf("%d > ", arr[i]);
    }
    printf("\n");
    for(int i = 0; i< len; i++){
        sum += arr[i];
    }
        printf("sum is >>>>>>>> %d ", sum);

    return 0;
}