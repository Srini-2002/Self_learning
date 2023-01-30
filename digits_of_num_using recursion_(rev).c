#include<stdio.h>
int digits_of_num(int num){
    if(num==0)
        return 0;
    int digit=0;
    digit=num%10;
    printf("%d ",digit);
    num=num/10;
    digits_of_num(num);
}
int main(){
    int num;
    scanf("%d",&num);
    digits_of_num(num);
    return 0;
}