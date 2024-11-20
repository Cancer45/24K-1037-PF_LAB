#include <stdio.h>
#include <math.h>

typedef struct
{
    float x;
    float y;
} point;

float dist (point p[2]);
int in_rec (float rec[4], point p);

int main ()
{
    point p[2];
    float rec[4];
    
    //p1
    scanf("%f %f", &p[0].x, &p[0].y);

    //p2
    scanf("%f %f", &p[1].x, &p[1].y);

    //distance b/w the points
    printf("%.2f\n", dist(p));

    //rec boundaries
    printf("rectangle max, min height: ");
    scanf("%f %f", &rec[0], &rec[1]);

    printf("rectangle max, min width: ");
    scanf("%f %f", &rec[2], &rec[3]);

    for (int i = 0; i < 2; i++)
    {
        if (in_rec(rec, p[i]))
        {
            printf("point %d is in rectangle", i + 1);
        }
    }
}

float dist (point p[2])
{
    float sqdx = pow(p[0].x - p[0].x, 2);
    float sqdy = pow(p[1].y - p[1].y, 2);

    return sqrt(sqdx + sqdy);
}

//define in_rec function
int in_rec (float rec[4], point p)
{
    if (p.y < rec[0] && p.y > rec[1] && p.x < rec[2] && p.x > rec[3])
    {
        return 1;
    }

    return 0;
}
