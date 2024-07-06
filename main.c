#include <stdio.h>
#include <string.h>

#define SIZE 1760
#define Pi 3.14

int k;
double sin(), cos();

int main() {
    float A = 0, B = 0, i, j, z[SIZE];
    char b[SIZE];
    printf("\n1b[2J");
    for (;;) {
        memset(b, 32, SIZE);
        memset(z, 0, SIZE * 4);
        for (j = 0; j < 2 * Pi; j += 0.001) {
            for (i = 0; i < 2 * Pi; i += 0.05) {
                float c = sin(i), d = cos(j), e = sin(A), f = sin(j), g = cos(A),
                      h = d + 2, D = 1 / (c * h * e + f * g + 5), l = cos(i),
                      m = cos(B), n = sin(B),
                      t = c * h * g - f * e;

                int x = 40 + 30 * D * (l * h * m - t * n);
                int y = 12 + 15 * D * (l * h * n + t * m), o = x + 80 * y,
                    N = 8 * ((f * e - c * d * g) * m - c * d * e - f * g - l * d * n);
                if (0 < y && y < 22 && 0 < x && x < 80 && D > z[o]) {
                    z[o] = D;
                    b[o] = ".,-~:;=!*#$@:"[N > 0 ? N : 0];
                }
            }
        }

        printf("\x1b[H");
        for (k = 0; k < SIZE + 1; ++k)
            putchar(k % 80 ? b[k] : 10);
        A += 0.04;
        B += 0.02;
    }
    return 0;
}