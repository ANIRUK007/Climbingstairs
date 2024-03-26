#include <stdio.h>

int climbStairs(int n) {
    if (n == 1) return 1;
    if (n == 2) return 2;

    int first = 1, second = 2, result;
    for (int i = 3; i <= n; ++i) {
        result = first + second;
        first = second;
        second = result;
    }
    return result;
}

int main() {
    int n;
    printf("Enter the number of steps: ");
    scanf("%d", &n);
    int ways = climbStairs(n);
    printf("Number of distinct ways to climb to the top: %d\n", ways);
    return 0;
}
