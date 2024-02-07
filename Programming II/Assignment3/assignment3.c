#include <stdio.h>

#define FILENAME __FILE__
#define DATE __DATE__
#define TIME __TIME__
#define LINE __LINE__

#define NEWLINE printf("\n")
#define MESSAGES(msg) printf("%s", msg)

#define PI 3.14
#define VOLUME(radius, height) (PI * (radius) * (radius) * (height))
#define AREA(radius, height) (2 * PI * (radius) * ((radius) + (height)))

float radius();
float height();

int main()
{
    printf("File: %s", FILENAME);
    NEWLINE;
    printf("Date: %s", DATE);
    NEWLINE;
    printf("Time: %s", TIME);
    NEWLINE;
    printf("Line: %d", LINE);
    NEWLINE;

    float r, h, area, volume;

    r = radius();
    h = height();

    area = AREA(r, h);
    volume = VOLUME(r, h);

    printf("Area of the cylinder is %.2f", area);
    NEWLINE;
    printf("Volume of the cylinder is %.2f", volume);
    NEWLINE;

    return 0;
}

float radius() {
    float r;
    MESSAGES("Enter radius: ");
    scanf("%f", &r);
    if(r <= 0) {
        MESSAGES("The value must be greater than ZERO.");
        NEWLINE;
        radius();
    }
    return r;
}

float height() {
    float h;
    MESSAGES("Enter height: ");
    scanf("%f", &h);
    if(h <= 0) {
        MESSAGES("The value must be greater then ZERO.");
        NEWLINE;
        height();
    }
    return h;
}