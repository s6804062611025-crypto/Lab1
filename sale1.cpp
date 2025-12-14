#include <stdio.h>

int main() {
    float p1, p2, p3;
    float a, b, c;

    printf("Item 1 price: ");
    scanf("%f", &p1);
    a = p1 * 0.95;
    printf("Promo A: %.2f\n\n", a);

    printf("Item 2 price: ");
    scanf("%f", &p2);
    b = (p1 + p2) * 0.85;
    printf("Promo B: %.2f\n\n", b);

    printf("Item 3 price: ");
    scanf("%f", &p3);
    c = (p1 + p2 + p3) * 0.70;
    printf("Promo C: %.2f\n", c);

    return 0;
}

