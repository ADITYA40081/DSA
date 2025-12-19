#include <stdio.h>

int cost[50][50],v[10],city,min_cost,min;
int count=0;
int next_city=-1;
void tsp(int c){
    int min=999;

    v[c]=1;
    printf("%d-> ",c);

    if(count==city-1){
        min_cost+=cost[c][0];
        printf("0");
        printf(" min cost:%d",min_cost);
        return;
    }

    for(int i=0;i<city;i++){
        if(v[i]==0 && cost[c][i]!=0 && cost[c][i]<min){
            min=cost[c][i];
            next_city=i;

        }
    }
    min_cost+=min;
    count++;
    tsp(next_city);

}

int main(){
    city=4;
    for(int i=0;i<city;i++){
        for(int j=0;j<city;j++){
            scanf("%d",&cost[i][j]);
        }
    }
    tsp(0);
}