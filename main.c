#include <stdio.h>
#include <stdlib.h>

void ai() {
    puts("You did it! Go call an admin");
}

int main() {
    int a[100], i, n, count = 0;

    scanf("%d", &n);
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    for (i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (a[i] == a[j])
                count = count + 1;
        }
    }
    if (count == n)
        printf("Yes");
    else {
        printf("No");
    }
    return 0;
}
