#include<stdio.h>

int main()
{
    int a = 123, b = 123;
    if(!(a ^ b)){
        printf("same");
    }else{
        printf("different");
    }

    return 0;
}