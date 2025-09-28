#include <stdio.h>
#include<math.h>
int main() {
    float height = 1.82;
    float weight = 72;
    // Complete the code
    float h=pow(height,2);
    float BMI=weight/h;
    printf("%f",BMI);
    return 0;
}
