#include<stdio.h>
int main(){
    int num;
    printf("Enter a binary number to change it to decimal:");
    scanf("%d",&num);
    int decimal=0;
    int place=1;
    int temp=0;
    while(num){
        temp=num%10;
        decimal=temp*place+decimal;
        place*=2;
        num=num/10;
    }
    printf("The equivalent decimal value is %d",decimal);
    return 0;
}
