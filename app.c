#include <stdio.h>

int main() {
printf("Enter the current temperature: ");
float temp;
scanf("%f", &temp);
printf("You entered %f\n", temp);
float celsius = convert(temp);
printf("%f F is %f C\n", temp, celsius);
return 0;
}

float convert(float f) {
return (f-32) * 5.0/9.0;
}
