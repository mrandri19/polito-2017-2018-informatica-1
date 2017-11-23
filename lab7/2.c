#include <stdio.h>
#include <math.h>

float quad_val(float n) { return n * n; }

double distance(float a_x, float a_y, float b_x, float b_y)
{
    return sqrt(pow((a_x - b_x), 2) + pow((a_y - b_y), 2));
}

int main()
{
    float a_x, a_y, b_x, b_y, c_x, c_y;

    scanf(" %f %f", &a_x, &a_y);
    scanf(" %f %f", &b_x, &b_y);
    scanf(" %f %f", &c_x, &c_y);

    printf("Perimeter %f\n", distance(a_x, a_y, b_x, b_y) + distance(b_x, b_y, c_x, c_y) + distance(c_x, c_y, a_x, a_y));

    return 0;
}