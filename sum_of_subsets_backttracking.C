#include <stdio.h>

int set[10], subset[10];
int n, target;

void findSubsets(int index, int sum, int subsetSize) {

    if (sum == target) {
        
        for (int i = 0; i < subsetSize; i++)
            printf("%d ", subset[i]);
        printf("\n");
        return;
    }

    if (index == n || sum > target)
        return;

    subset[subsetSize] = set[index];
    findSubsets(index + 1, sum + set[index], subsetSize + 1);

    findSubsets(index + 1, sum, subsetSize);
}

int main() {
    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for (int i = 0; i < n; i++)
        scanf("%d", &set[i]);

    printf("Enter target sum: ");
    scanf("%d", &target);

    printf("Subsets with sum %d:\n", target);
    findSubsets(0, 0, 0);

    return 0;
}
