
// Reading Coordinates and finding distances between Two Points in Euclidean Space and Adding those Values

#include <stdio.h>
#include <math.h>

struct coordinates
{
	int xa;
	int ya;
	int xb;
	int yb;
	int x;
	int y;
	float total;
	float distance;
};

int main()
{
	struct coordinates line1, line2, line;

	printf("Starting is larger");

	printf("\nEnter the coordinates of First line : ");

	printf("\nStarting : ");
	scanf("%d %d", &line1.xa, &line1.ya);

	printf("\nEnding : ");
	scanf("%d %d", &line1.xb, &line1.yb);

	printf("\nEnter the coordinates of Second line : ");

	printf("\nStarting : ");
	scanf("%d %d", &line2.xa, &line2.ya);

	printf("\nEnding : ");
	scanf("%d %d", &line2.xb, &line2.yb);

	line1.x = line1.xa - line1.xb;
	line1.y = line1.ya - line1.yb;
	line2.x = line2.xa - line2.xb;
	line2.y = line2.ya - line2.yb;

	line1.distance = sqrt((line1.x * line1.x) + (line1.y * line1.y));
	line2.distance = sqrt((line2.x * line2.x) + (line2.y * line2.y));

	line.total = line1.distance + line2.distance;

	printf("\n\nThe Sum of Two Distance Values is %.2f", line.total);

	return 0;
}