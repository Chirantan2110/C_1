//Even Sum
//Given two space separated integers as user inputs, print YES if their sum is even else NO.

//code-
#include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d",&a,&b);
    int s=a+b;
    if(s%2==0){
        printf("YES");
    }
    else{
        printf("NO");
    }

    return 0;
}
