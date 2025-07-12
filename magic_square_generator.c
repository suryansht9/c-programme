#include <stdio.h>

#define N 3

void generateMagicSquare(int n) {
    int magic[N][N] = {0};
    int num = 1, i = 0, j = n / 2;

    while (num <= n * n) {
        magic[i][j] = num++;
        int newi = (i - 1 + n) % n;
        int newj = (j + 1) % n;

        if (magic[newi][newj])
            i = (i + 1) % n;
        else {
            i = newi;
            j = newj;
        }
    }

    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++)
            printf("%3d ", magic[i][j]);
        printf("\n");
    }
}

int main() {
    generateMagicSquare(N);
    return 0;
}
