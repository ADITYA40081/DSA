                                                                                                                               
#include <stdio.h>
#define INF 9999

int parent[10];

int find(int i){
    while(parent[i]) 
    i=parent[i];
    return i;
}


int main() {
    int n,cost[10][10],i,j,u,v,a,b,min,ne=1,total=0;
    
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            if(cost[i][j]==0) cost[i][j]=INF;
            
        }
    }
    
    while(ne<n){
        min=INF;
        for(i=1;i<=n;i++){
            for(j=1;j<=n;j++){
                if(cost[i][j]<min){
                    min=cost[i][j];
                    a=u=i;
                    b=v=j;
                }
            }
        }
        
        u=find(u);
        v=find(v);
        
        if(u!=v){
            parent[v]=u;
            printf("%d-(%d,%d)=%d",ne++,a,b,min);
            total+=min;
        }
    }
    
    

    return 0;
}