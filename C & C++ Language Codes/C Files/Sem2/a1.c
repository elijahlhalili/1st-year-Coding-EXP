#include <stdio.h>

int main (){
    int a, b, big;

    printf("Input a: ");
    scanf("%d", &a);
    printf("Input b: ");
    scanf("%d", &b);

    /*
    if (a>b){
        big = a;
    }
    else(
        big = b; 
    )
    */

    big = a>b ? a:b;
    printf("Big is: %d", big);

    return 0;
}

