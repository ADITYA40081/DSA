#include <stdio.h>

int arr[50][50];

int min(int x,int y){
    if(x<y)return x;
    return y;
}

void floyed(int v){
    for(int k=1;k<=v;k++){
        for(int i=1;i<=v;i++){
            for(int j=1;j<=v;j++){
                arr[i][j]=min(arr[i][j],arr[i][k]+arr[k][j]);
            }
        }
    }

    for(int i=1;i<=v;i++){
        for(int j=1;j<=v;j++){
            printf("%d ",arr[i][j]);
        }
    }

}

int main(){
    int V;
    printf("enter the no of vertices");
    scanf("%d",&V);
    for(int i=1;i<=V;i++){
        for(int j=1;j<=V;j++){
            scanf("%d",&arr[i][j]);
        }
    }

    floyed(V);


    return 0;
}