#include <stdio.h>

int main() {
    float height, width;
    printf("Enter Height of the Rectangle:\t");
    scanf("%f",&height);
    printf("\nEnter Width of the Rectangle:\t");
    scanf("%f",&width);
    printf("The Perimeter of the Rectangle: %.2f units",height*2+width*2);
    return 0;
}
