//Program that calculates the size of a TV

#include <stdio.h>
#include <math.h>

// Function prototypes
double calcDiagPythag(double width);
double calcDiagTrig(double width);

int main()
{
    printf("Enter width: ");
    int w;
    scanf("%d", &w);

    /* Pythagorean thm. solution
    // Calculate height
    int h = 9 * w / 16;

    // Calculate diagonal
    double diag = sqrt(h*h + w*w);
    */

    /*
    // Trig solution
    double theta = atan(9.0 / 16);
    //printf("theta: %lf\n", theta);  // Note: radians
    double diag = w / cos(theta);
    */

    // double diag = calcDiagTrig(w);
    double diag = calcDiagPythag(w);

    // Print out answer
    printf("Diagonal is %.0lf\n", diag);
}

double calcDiagPythag(double width)
{
    double h = 9.0 * width / 16;
    double d = sqrt(h*h + width*width);
    return d;
}

double calcDiagTrig(double width)
{
    double theta = atan(9.0 / 16);
    double d = width / cos(theta);
    return d;
}