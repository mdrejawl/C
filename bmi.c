#include <stdio.h>

void BMI (int, float);
int main(void)
{
  int w;
  float h;
       printf("Input the weight: ");
       scanf("%d", &w);
       printf("Input the height: ");
       scanf("%f", &h);
       BMI(w, h);
}

void BMI (int weight, float height){
    float temp = weight/ (height * height);
    printf("BMI = %f\n", temp);
    printf("\nGrade: ");
    temp < 18.5 ? printf("Under ") : temp < 25 ? printf("Normal ") : temp < 30 ? printf("Over ") : temp < 40 ? printf("Obese ") : printf("Error");
}

