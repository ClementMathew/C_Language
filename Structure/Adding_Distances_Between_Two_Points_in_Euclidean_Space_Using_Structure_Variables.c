
// Read two Distances Values between two points in Euclidean Space, Store in Structure Variables and add those Values

#include <stdio.h>

struct EuclideanSpace
{
    int distance;
    int total;
};

int main()
{
    struct EuclideanSpace d1, d2;

    printf("Enter the two values : ");
    scanf("%d %d", &d1.distance, &d2.distance);

    d1.total = d1.distance + d2.distance;

    printf("The sum of the distance values is %d", d1.total);

    return 0;
}