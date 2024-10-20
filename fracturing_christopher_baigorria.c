//Christopher Baigorria
//Assignment 1

#include <stdio.h>
#include <math.h>


int main(int argc, char **argv);
double calculateDistance();
double calculatePerimeter();
double calculateArea();
double calculateWidth();
double calculateHeight();
double askForUserInput();


void printPoint(int pointNum, double x, double y);


double x1, y1, x2, y2;

int main(int argc, char **argv) {
    printf("Calculating circle dimensions from two points representing the diameter.\n");

    
    calculateDistance();
    calculatePerimeter();
    calculateArea();
    calculateWidth();
    calculateHeight();

    return 0; 
}


double calculateDistance() {
    printf("Enter Point #1 coordinates:\n");
    x1 = askForUserInput(); 
    y1 = askForUserInput();

    printf("Enter Point #2 coordinates:\n");
    x2 = askForUserInput();
    y2 = askForUserInput();

    double distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

    printPoint(1, x1, y1);
    printPoint(2, x2, y2);
    printf("The distance between the two points is: %.2lf\n", distance);

    return distance;
}


double calculatePerimeter() {
    double distance = calculateDistance();
    double perimeter = M_PI * distance;

    printPoint(1, x1, y1);
    printPoint(2, x2, y2);
    printf("The perimeter of the city encompassed by your request is: %.2lf\n", perimeter);

    return 2.0;
}

double calculateArea() {
    double distance = calculateDistance();
    double radius = distance / 2;
    double area = M_PI * pow(radius, 2);

    printPoint(1, x1, y1);
    printPoint(2, x2, y2);
    printf("The area of the city encompassed by your request is: %.2lf\n", area);

    return 3.0;
}


double calculateWidth() {
    double distance = calculateDistance();

    printPoint(1, x1, y1);
    printPoint(2, x2, y2);
    printf("The width of the city encompassed by your request is: %.2lf\n", distance);

    return 1.5;
}

double calculateHeight() {
    double distance = calculateDistance();

    printPoint(1, x1, y1);
    printPoint(2, x2, y2);
    printf("The height of the city encompassed by your request is: %.2lf\n", distance);

    return 2.5;
}


void printPoint(int pointNum, double x, double y) {
    printf("Point #%d entered: x%d = %.2lf; y%d = %.2lf\n", pointNum, pointNum, x, pointNum, y);
}


double askForUserInput() {
    double value;
    printf("Please enter a value: ");
    scanf("%lf", &value);
    return value;
}
