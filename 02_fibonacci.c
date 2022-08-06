/*Documentation
Name: Saba karim
Date: 11-06-2022
Description: A2 - WAP to generate positive Fibonacci numbers
Sample I/P : Enter a number: 8
Sample O/p : 0, 1, 1, 2, 3, 5, 8
*/

#include <stdio.h>

int main()
{
int sum = 0, num;
int a = 0;
int b = 1;
printf("Enter a number: ");// Inter the value 
scanf("%d", &num); //Read the value using scanf 

while(sum <= num) //Using while loop for checking the condition
{
printf("%d, ", sum);
a = b; //swap elements
b = sum;
sum = a + b; //sum of the last two terms 
}
if (num < 0)
printf("Invalid input");
return 0;

}

