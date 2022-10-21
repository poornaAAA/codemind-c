#include <stdio.h>

int main()
{
    int n, m,max;
    scanf("%d %d", &n, &m);
    max = (n > m) ? n : m;

    while (1) {
        if ((max % n== 0) && (max % m == 0)) {
            printf("%d", max);
            break;
        }
        ++max;
    }
    return 0;
}
