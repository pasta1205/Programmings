#include <stdio.h>

struct DISTANCE {
    int kms;
    int metres;
};

struct DISTANCE ADDDISTANCE(struct DISTANCE d1, struct DISTANCE d2) {
    struct DISTANCE result;

    result.metres = d1.metres + d2.metres;

    result.kms = d1.kms + d2.kms + (result.metres / 1000);
    result.metres = result.metres % 1000;

    return result;
}

int main() 
{
    struct DISTANCE dist1, dist2, sum;

    printf("Enter first distance:\n");
    printf("Kilometres: ");
    scanf("%d", &dist1.kms);
    printf("Metres: ");
    scanf("%d", &dist1.metres);

    printf("Enter second distance:\n");
    printf("Kilometres: ");
    scanf("%d", &dist2.kms);
    printf("Metres: ");
    scanf("%d", &dist2.metres);

    sum = ADDDISTANCE(dist1, dist2);

    printf("\nSum of distances:\n");
    printf("Kilometres: %d\n", sum.kms);
    printf("Metres: %d\n", sum.metres);

    return 0;
}