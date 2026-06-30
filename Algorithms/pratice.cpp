//
// Created by Development on 30-06-2026.
//

#include <cstdio>

void change(int x) {
    x = 20;
}

void changep(int* x) {
    *x = 100;
}

int main() {
    int x = 8;
    changep(&x);
    printf("%d\n", x);
    return 0;
}