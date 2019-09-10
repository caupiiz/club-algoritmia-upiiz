#include <stdio.h>

typedef long int li;

int main() {
    li n, m;
    scanf("%ld %ld", &n, &m);
    li a = n/m, residuo = n % m;

    if(residuo == 0) {
        printf("%ld\n", a);
    }
    else if(a == 0) {
        printf("%ld/%ld\n", n, m);
    }
    else {
        printf("%ld %ld/%ld\n", a, residuo, m);
    }

    return 0;
}
