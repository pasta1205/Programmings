#include <stdio.h>
#include <math.h> // For sqrt function

// Define the structure
struct POINT {
    float Xco;
    float Yco;
};

int main() {
    struct POINT point1, point2;
    float distance;

    // Input first point
    printf("Enter the X and Y coordinates of the first point:\n");
    scanf("%f %f", &point1.Xco, &point1.Yco);

    // Input second point
    printf("Enter the X and Y coordinates of the second point:\n");
    scanf("%f %f", &point2.Xco, &point2.Yco);

    // Calculate the distance between the points
    distance = sqrt(pow(point2.Xco - point1.Xco, 2) + pow(point2.Yco - point1.Yco, 2));

    // Display the distance
    printf("\nThe distance between the two points is: %.2f\n", distance);

    return 0;
}