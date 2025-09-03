#include <stdio.h>
#include <stdbool.h>

bool isPrime(int n) {
    if (n < 2) return false;
    for (int i = 2; i < n; i++) {  // ki?m tra t? 2 t?i n-1 (r?t ch?m)
        if (n % i == 0) return false;
    }
    return true;
}

int main() {
    int n;
    printf("Nhap n: ");
    scanf("%d", &n);

    int sum = 0;
    for (int i = 2; i <= n; i++) {
        if (isPrime(i)) {
            sum += i;
        }
    }

    printf("Tong cac so nguyen to <= %d la: %d\n", n, sum);
    return 0;
}

