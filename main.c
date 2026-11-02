#include <stdio.h>
#include <math.h>

int main(void)
{
    int x1;
    int y1;
    int x2;
    int y2;

    printf("Введіть x1, y1, x2, y2: ");
    scanf("%d %d %d %d", &x1, &y1, &x2, &y2);

    double dx = (double)x2 - x1;
    double dy = (double)y2 - y1;
    double length = sqrt(dx * dx + dy * dy);

    printf("Довжина вектора: %.6f", length);
    return 0;
}
