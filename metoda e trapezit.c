/* trapezoid.c */
#include <stdio.h>


#include <math.h>


float f(float);
float a;
float b;
float x;
float h;
float sum;
int n;
int i;
// vendos 3,2,1

int main() {
    printf("Jepni vleren per  a: ");
    scanf("%f", &a);
    printf("Jepni vleren per  b: ");
    scanf("%f", &b);
    printf("vendosni numrin e katroreve: ");
    scanf("%d", &n);


    h = (b - a) / n;
    sum = (0.5 * h) * (f(a) + f(b));
    printf("%f\n", sum);
    for (i = 1; i < n; i++) {
        sum = sum + h * f(a + (i * h));
        printf("%f\n", sum);
    }
    printf("Vlera e integralit eshte: %f\n", sum);
}


float f(float x) {
    float value;


    value = 2*(x*x) + x;


    return value;
}