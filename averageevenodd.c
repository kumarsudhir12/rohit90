#include<stdio.h>
int main(){
    int row;
    printf("enter the row size:");
    scanf("%d",&row);

    int column;
    printf("enter the column size:");
    scanf("%d",&column);
  int sum1=0;
  int sum2=0;
  int count1=0;
  int count2=0;
    int arr[row][column];

    for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){
            printf("element are [%d][%d]",i,j);
            scanf("%d",&arr[i][j]);
        }
    }

    for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){
          if(arr[i][j]%2==0){
            sum1=sum1+arr[i][j];
            count1++;
        
          }
          else{
            sum2=sum2+arr[i][j];
            count2++;
      
          }
            }
        }
        printf("avrerage of even no: %d\n",sum1/count1);
        
        printf("avrerage of odd no: %d",sum2/count2);
        
    
  
    return 0;

}