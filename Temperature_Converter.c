#include <stdio.h>
#include <math.h>
#include <window.h>
float temp(float celsius); 

int main() {
    float celsius;
 
  printf("Enter Celcius :");
  scanf("%f", &celsius);
  float far =temp(celsius);
printf("Faranite is  %f \n" , far );
  

    return 0;
}
float temp(float celsius)
{

float far = (celsius * 9/5) +32;
return far;
}
