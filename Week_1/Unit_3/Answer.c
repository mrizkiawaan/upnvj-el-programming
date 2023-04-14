#include <stdio.h>
// #include<string.h> delete // if you use the second version

int main()
{
    int N, i, startNum;
    char option[10];

    printf("Enter the value of N (N is positive integer): ");
    scanf("%d", &N);

    printf("Enter 'even' or 'odd': ");
    scanf("%s", option);

    if (option[0] == 'e') {
        startNum = 2;
        printf("The first %d even numbers are: ", N);
    } else {
        startNum = 1;
        printf("The first %d odd numbers are: ", N);
    }

    for (i = 0; i < N; i++) {
        printf("%d ", startNum + 2 * i);
    }

    printf("\n");
    return 0;
}

/* another version 
int main()
{
    int N;
    char option[10];
    printf("Enter the value of N: ");
    scanf("%i", &N);
    printf("even / odd number: ");
    scanf("%s", &option);
    printf("The first %i %s numbers is ",N,option);

    if(strcmp(option,"odd") == 0){
        for(int i=1; i<=N; i++){
            printf("%d ", 2*i-1);
        }
    }else if(strcmp(option,"even") == 0){
        for(int i=1; i<=N; i++){
            printf("%d ", 2*i);
        }
    }

}
*/