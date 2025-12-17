#include <stdio.h>
int q[20]={0};
int front=-1,rear=-1;

int v[20]={0};
int arr[20][20],n;
int u;
void bfs(int start){
    v[start]=1;
    q[++rear]=start;



    while(front<=rear){
        u=q[++front];
        printf("%d \n",u);


        for(int i=1;i<=n;i++){
            if(arr[u][i]==1 && v[i]==0){
                q[++rear]=i;
                v[i]=1;
            }
        }}
    }
    




int main(){
    
    printf("enter the no of vertices ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            scanf("%d",&arr[i][j]);
        }
        //printf("\n");
    }


    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            printf("%d",arr[i][j]);
        }
        printf("\n");
    }

    bfs(1);

return 0;

}