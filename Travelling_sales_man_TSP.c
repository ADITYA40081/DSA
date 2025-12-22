// Online C compiler to run C program online
#include <stdio.h>

int adj[50][50],count=0,next_city=0,v[10]={0},city;
int min_cost=0;



void tsp(int c){
    int min=999;
    
    v[c]=1;
    printf("%d->",c);
    
    if(count==city-1){
        printf("0");
        min_cost+=adj[c][0];
        printf("\n min cost to reach the path:%d",min_cost);
        return;
    }
    
    for(int i=0;i<city;i++){
        if(adj[c][i]!=0 && v[i]==0 && adj[c][i]<min){
            next_city=i;
            min=adj[c][i];
        }
    }
    min_cost+=min;
    count++;
    tsp(next_city);
    
    
}
int main() {
    city=4;
    for(int i=0;i<city;i++){
        for(int j=0;j<city;j++){
            scanf("%d",&adj[i][j]);
        }
    }
    tsp(0);
    // Write C code here


    return 0;
}
