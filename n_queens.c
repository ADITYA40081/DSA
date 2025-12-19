#include <stdio.h>
#include <stdlib.h>

int n;
int b[20];   // b[row] = column position of queen

// Check if it is safe to place queen at (row, col)
int safe(int row, int col) {
    for (int i = 0; i < row; i++) {
        // same column or diagonal
        if (b[i] == col || abs(b[i] - col) == abs(i - row))
            return 0;
    }
    return 1;
}

// Print one solution
void printSolution() {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (b[i] == j)
                printf("Q ");
            else
                printf("* ");
        }
        printf("\n");
    }
    printf("\n");
}

// Solve using backtracking
void solve(int row) {
    if (row == n) {
        printSolution();
        return;
    }

    for (int col = 0; col < n; col++) {
        if (safe(row, col)) {
            b[row] = col;
            solve(row + 1);
        }
    }
}

int main() {
    printf("Enter number of queens: ");
    scanf("%d", &n);

    solve(0);

    return 0;
}
