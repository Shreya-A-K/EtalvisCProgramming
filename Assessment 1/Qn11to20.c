#include <stdio.h>

int main(){
    //Qn 11
    //Print the sum of a 3 digit number
    int n;
    printf("Enter a 3 digit number:");
    scanf("%d",&n);
    int sum=0;
    while (n){
        sum+=n%10;
        n/=10;
    }
    printf("Sum of the digits is %d\n",sum);

    //Qn 12- Get a 2 digit number and print the reverse of it
    printf("Enter a 2 digit number to print it's reverse: ");
    scanf("%d",&n);
    printf("The reverse of the number is %d\n",(n%10)*10+(n/10));

    //Qn 14
    printf("Enter a 3 digit number to print it's reverse: ");
    scanf("%d",&n);
    printf("The reverse of the number is %d\n",(n%10)*100+((n%100)/10)*10+(n/100));

    //Qn 15
    //reverse only ten's and one's digit
    printf("Enter a 4 digit number to reverse only ten's and one's digit:");
    scanf("%d",&n);
    printf("The number with the required modification is: %d\n",(n/100)*100+((n%100)%10)*10+((n%100)/10));

    //Qn16
    //Get 2 digit and print 95 as 90 83 as 80 etc
    printf("Enter a 2 digit number:");
    scanf("%d",&n);
    printf("The number with the required modification is: %d\n",(n/10)*10);

    //Qn 17
    //get a 2 digit number and convert ten's digit to 1 
    printf("Enter a 2 digit number:");
    scanf("%d",&n);
    printf("The number with the required modification is: %d\n",10+(n%10));

    //Qn 18
    //get a 3 digit number and convert one's digit to 2
    printf("Enter a 3 digit number:");
    scanf("%d",&n);
    printf("The number with the required modification is: %d\n",(n/10)*10+2);

    //Qn 19
    //get a number subtract 5 only if it is odd
    printf("Enter a number:");
    scanf("%d",&n);
    printf("The number with the required modification is: %d\n",n-5*(n%2));

    //Qn 20 
    //Get a number and subtract 5 only if ten's digit is odd
    printf("Enter a number:");
    scanf("%d",&n);
    printf("The number with the required modification is: %d\n",n-5*(((n%100)/10)%2));
    


    return 0;
}