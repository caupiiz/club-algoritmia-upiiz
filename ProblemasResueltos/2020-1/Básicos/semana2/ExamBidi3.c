#include <stdio.h>
typedef long long int lli;
int main() {
    lli n;
    scanf("%lld", &n);
    char c;

    for (lli i = 0; i < n; i++) {
        if(i % 2 == 0) c = 'o';
        else c = 'a';
        for (lli j = 0; j < n; j++) {
            if(i == j) printf("X");
            else printf("%c", c);
        }
        printf("\n");
    }


    return 0;
}
