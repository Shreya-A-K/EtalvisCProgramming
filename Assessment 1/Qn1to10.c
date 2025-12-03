#include <stdio.h>

int main(){
    //Qn1
    int n;
    printf("Input:");
    scanf("%d",&n);
    printf("Output (add 2) : %d\n",n+2);

    //qn2
    int n1;
    printf("Input:");
    scanf("%d",&n1);
    printf("Output (subtract 5) : %d\n",n1-5);

    //Qn3
    int n2;
    printf("Input:");
    scanf("%d",&n2);
    printf("Output (multiplied by 3): %d\n",n2*3);

    //Qn 4
    int n3;
    printf("Input:");
    scanf("%d",&n3);
    printf("Output (divided by 6 quotient): %d\n",n3/6);

    //Qn5
    int n4;
    printf("Input:");
    scanf("%d",&n4);
    printf("Output (divided by 8 remainder): %d\n",n4%8);

    //Qn6
    int n5;
    printf("Input:");
    scanf("%d",&n5);
    printf("Output (print one's digit): %d\n",n5%10);

    //Qn7
    int n6;
    printf("Input enter a 2 digit number:");
    scanf("%d",&n6);
    printf("Output (ten's digit is): %d\n",n6/10);

    //Qn8
    int n7;
    printf("Input enter a 3 digit number:");
    scanf("%d",&n7);
    printf("Output (one's digit): %d\n",n7%10);

    //Qn9
    int n8;
    printf("Input enter a 3 digit number:");
    scanf("%d",&n8);
    printf("Output (hundered's digit): %d\n",n8/100);

    //Qn10
    int n9;
    printf("Input enter a 3 digit number:");
    scanf("%d",&n7);
    printf("Output (ten's digit): %d\n",(n7%100)/10);



    return 0;
}