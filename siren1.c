#include <stdio.h>
#include <math.h>

int main()
{
    int i;
    double x, y;

    for (i=0; i<360; i++)
    {
        x = i * M_PI/180.0;
        y = sin(x);
        printf("%f\n", y);
    }
    return 0;
}
