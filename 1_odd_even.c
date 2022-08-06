/*Documentation
Name: Saba karim
Date: 11-06-2022
Description: The user entered number should identified whether its a odd or a even number. Mention its sign too.
Sample I/P : Enter the value of 'n' : -2
Sample O/p : -2 is negative even number 
*/

#include <stdio.h>

int main()
{
    int num;
        printf("Enter the value of 'n' : "); //Read the value from user
        scanf ("%d" , &num); 
        

        if (num > 0 ) //if given value less then zero 
        {
            if (num % 2 == 0) // Used % operator to check num is perfectly divisible by 2 
            printf("%d  is positive even number" ,num); //print +ve even value 
        else
            printf("%d is positive odd number" ,num); //print +ve odd value 
            
        }
        else if (num < 0 ) //if given value greater then zero 
        {
            if (num % 2 == 0)
            printf("%d is negative even number" ,num); //print -ve even value
        else
            printf("%d is negative odd number" ,num); //print -ve odd value 
            
        }
        else 
            printf ("0 is neither odd nor even  "); // if user inter 0
            
        return 0;
}
