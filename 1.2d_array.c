#include<stdio.h>
int main(){
    int arr[4][4]={{2,5,7,0},
                    {1,9,5,2},
                    {0,1,3,6},
                    {7,3,2,9}};
    int max_sum=0;
    int row_count=4;
    int col_count=4;
    int max_row_ind=0;
    int row;
   for(row=0;row<row_count;row++){
        int sum=0;
        for(int col=0;col<col_count;col++){
            sum+=arr[col][row];
        }
            if(sum>max_sum){
                max_sum=sum;
                max_row_ind=row;
            }
    }
    printf("%d ",max_sum);
    printf("%d",row);
   return 0;

    
}
