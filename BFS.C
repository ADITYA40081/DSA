#include <stdio.h>
int q[20]={0};
int front=-1,rear=-1;





int main(){
    int n;
    printf("enter the no of vertices ");
    scanf("%d",&n);
    int arr[n][n];
    int v[n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&arr[i][j]);
        }
        printf("\n");
    }
    printf("enter the starting node ");
    int start;
    scanf("%d",&start);

    q[++rear]=start;
    v[0]=start;

    while(front<=rear){
        int u=q[++front];
        printf("%d",u);
        for(int i=1;i<=n;i++){
            if(arr[u][i]==1 && v[i]==0){
                v[i]==1;
                q[++rear]=i;
            }
        }
    }






return 0;

}