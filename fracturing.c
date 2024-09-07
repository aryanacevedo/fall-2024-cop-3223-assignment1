#include <stdio.h>
#include <math.h>  // For mathematical calculations like sqrt and pow

// Define constant for PI as instructed
#define PI 3.14159

// Function: calculateDistance
// Purpose: Prompts user for two points, calculates the distance between them
// Algorithm: Distance formula sqrt((x2 - x1)^2 + (y2 - y1)^2)
// Input: Two points (x1, y1) and (x2, y2) from user
// Output: Prints the distance between the two points
double calculateDistance()
{
    double point_x1, point_y1, point_x2, point_y2;  // Coordinates of the two points

    // Prompt user for coordinates of the first point
    printf("Point #1 entered: x1 = ");
    scanf("%lf", &point_x1);
    printf("y1 = ");
    scanf("%lf", &point_y1);

    // Prompt user for coordinates of the second point
    printf("Point #2 entered: x2 = ");
    scanf("%lf", &point_x2);
    printf("y2 = ");
    scanf("%lf", &point_y2);

    // Calculate distance using the distance formula
    double distance = sqrt(pow(point_x2 - point_x1, 2) + pow(point_y2 - point_y1, 2));

    // Output the calculated distance
    printf("The distance between the two points is %.2lf\n", distance);

    // Return the computed distance
    return distance;
}

// Function: calculatePerimeter
// Purpose: Calculates the perimeter of the city based on distance
// Algorithm: Perimeter is calculated as PI * distance (assuming circular perimeter)
// Input: Distance from calculateDistance()
// Output: Prints the perimeter
double calculatePerimeter()
{
    double distance = calculateDistance();  // Use calculateDistance to get the distance

    // Calculate perimeter assuming circular shape
    double perimeter = PI * distance;

    // Output the calculated perimeter
    printf("The perimeter of the city encompassed by your request is %.2lf\n", perimeter);

    // Return difficulty rating (example: 2.0)
    return 2.0;
}

// Function: calculateArea
// Purpose: Calculates the area of the city
// Algorithm: Area is calculated as PI * (distance / 2)^2 (assuming circular area)
// Input: Distance from calculateDistance()
// Output: Prints the area
double calculateArea()
{
    double distance = calculateDistance();  // Use calculateDistance to get the distance

    // Calculate area assuming circular shape
    double area = PI * pow((distance / 2), 2);

    // Output the calculated area
    printf("The area of the city encompassed by your request is %.2lf\n", area);

    // Return difficulty rating (example: 3.0)
    return 3.0;
}

// Function: calculateWidth
// Purpose: Calculates the width of the city based on distance
// Input: Distance from calculateDistance()
// Output: Prints the width
double calculateWidth()
{
    double distance = calculateDistance();  // Use calculateDistance to get the distance

    // Output the width, which is equal to the diameter (distance)
    printf("The width of the city encompassed by your request is %.2lf\n", distance);

    // Return difficulty rating (example: 1.5)
    return 1.5;
}

// Function: calculateHeight
// Purpose: Calculates the height of the city based on distance
// Input: Distance from calculateDistance()
// Output: Prints the height
double calculateHeight()
{
    double distance = calculateDistance();  // Use calculateDistance to get the distance

    // Output the height, which is assumed to be the same as the width
    printf("The height of the city encompassed by your request is %.2lf\n", distance);

    // Return difficulty rating (example: 1.5)
    return 1.5;
}

// Bonus function: askForUserInput
// Purpose: Prompts the user to input a value
// Output: Returns the value entered by the user
double askForUserInput()
{
    double user_value;  // Variable to store user input
    printf("Please enter a value: ");
    scanf("%lf", &user_value);  // Read user input
    return user_value;
}

// Main function: no output, just calls other functions
// Arguments: int argc, char **argv
// Purpose: main entry point of the program, calls other functions
int main(int argc, char **argv)
{
    // Call all the necessary functions
    calculateDistance();
    calculatePerimeter();
    calculateArea();
    calculateWidth();
    calculateHeight();
    askForUserInput();
    return 0;
}
