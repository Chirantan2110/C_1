/*Even Sum
Write a C program that calculates and prints the sum of all even numbers from 1 to a given positive integer n. Use a while loop to iterate through the numbers.
*/

//code-
#include <stdio.h>

int main() {
	int n,i=1,sum=0;
	scanf("%d",&n);
	while(i<=n){
	    if(i%2==0){
	sum=sum+i;}
		i++;
	}

	printf("%d",sum);

}
