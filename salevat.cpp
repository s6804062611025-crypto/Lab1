#include <stdio.h>

int main() {
    float p1, p2, p3;
    float a, b, c;
    float vatA, vatB, vatC;

    printf("Item 1 price: ");
    scanf("%f", &p1);
    a = p1 * 0.95;
    vatA = a * 1.07;
    printf("Promo A: %.2f\n", a);
    printf("With VAT: %.2f\n\n", vatA);

    printf("Item 2 price: ");
    scanf("%f", &p2);
    b = (p1 + p2) * 0.85;
    vatB = b * 1.07;
    printf("Promo B: %.2f\n", b);
    printf("With VAT: %.2f\n\n", vatB);

    printf("Item 3 price: ");
    scanf("%f", &p3);
    c = (p1 + p2 + p3) * 0.70;
    vatC = c * 1.07;
    printf("Promo C: %.2f\n", c);
    printf("With VAT: %.2f\n", vatC);

    return 0;
}

