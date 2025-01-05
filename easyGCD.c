#include<stdio.h>
int main(void){
    int a,b , temp;
    scanf("%d" ,&a);
    scanf("%d" ,&b);

    if(b ==0){
        printf("GCD is: %d\n",a);
    }
    else{
        while(b >0){
            temp = a% b;
            a = b;
            b = temp;

        }
    }
    printf("GCD is: %d\n",a);
}
