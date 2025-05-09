#include<stdio.h>
int main(){

    int row;
    printf("enter the row size:");
    scanf("%d",&row);


    int column;
    printf("enter the column size:");
    scanf("%d",&column);

    int arr[row][column];

    for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){
            printf("element are [%d][%d]",i,j);
            scanf("%d",&arr[i][j]);
        }
    }

    for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){
            for(int k=0;k<row;k++){
                for(int s=0;s<column;s++){
                    if(arr[i][j]<arr[k][s]){
                        int temp=arr[i][j];
                        arr[i][j]=arr[k][s];
                        arr[k][s]=temp;
                    }
                  
            }
        }
         
    }
}
for(int i=0;i<row;i++){
    for(int j=0;j<column;j++){
        printf("%d ",arr[i][j]);
    }
}
     
    return 0;
}