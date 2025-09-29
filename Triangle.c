/*Triangle Type
Take the sides of a triangle as user inputs and find if the triangle is equilateral, isosceles, or scalene.

Note:
Equilateral Triangle: If all three sides of the triangle are equal, it is an equilateral triangle.
Isosceles Triangle: If at least two sides of the triangle are equal, it is an isosceles triangle.
Scalene Triangle: If all three sides of the triangle are different, it is a scalene triangle.
*/

//code-
#include <stdio.h>

int main() {
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    if(a==b && a==c && b==c){
        printf("Equilateral");
    }
    else if(a==b||a==c||b==c){
        printf("Isosceles");
    }
    else{
        printf("Scalene");
    }

    return 0;
}