#include<stdio.h>
void digits_of_num(int num){
    if(num==0)
        return;
    int digit=0;
    digit=num%10;
    num=num/10;
    digits_of_num(num);
    printf("%d ",digit);
}
int main(){
    int num;
    scanf("%d",&num);
    digits_of_num(num);
    return 0;
}