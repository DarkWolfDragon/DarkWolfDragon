#include <stdio.h>

int main(){
    int favorite_number;
    printf("FAVORITE NUMBER INSERT\n");
    printf("__________________________________________________________________________________________________________________\n");
    printf("Enter your favorite_number.\n");
    printf("Only enter just the number, not any words.\n");
    printf("If you do, it will bug and put a random five digit nuber. So be wise about what you are doing.\n");
    printf("You can put the number now.\n");
    scanf("%d",&favorite_number);
    printf("Your favorite_number is %d",favorite_number);
    printf("_______________________________________________________________________________________________________________________________\n");
    return 0;
}