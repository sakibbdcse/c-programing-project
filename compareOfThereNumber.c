#include <stdio.h>

int main() {
    int n1, n2, n3 ;
    printf("Enter three of number: ");
    scanf("%d %d %d", &n1, &n2, &n3);
    
    if(n1>n2 && n1>n3){
        printf("The lergest number is: %d", n1);
    }
    else if(n1<n2 && n2>n3){
        printf("The largest number is: %d", n2);
    }
    else{
        printf("The largest Number is: %d", n3);
    }
}