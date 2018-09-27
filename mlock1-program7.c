//Marquis Lockhart - CSCI 1110
//Program 7 - SUMS
#include <stdio.h>

double num;
int countAll=0;
int countPos=0;
int countNeg=0;
double sumPos=0;
double sumNeg=0;
double sumAll=0;
double avgPos=0;
double avgNeg=0;
double avgAll=0;
int i=0;

void sums(double arrayofNumbers[], int arraysize, double* sumPos,
          double* sumNeg, int numPos, int*numNeg)
{
    for(;i<arraysize;++i)
    {
        double currentnumber= arrayofNumbers[i];
        if(currentnumber<0.0)
        {
            sumNeg=sumNeg+currentnumber;
            amountNeg=amountNeg+1;
        }
        else
        {
            sumPos=sumPos+currentNumber;
            amountPos=amountPos+1
        }
    }
}
int main(void)
{
    const int array_size=10;
    double numbers[array_size];

    printf("Enter numbers:\n");
    scanf("%1f", &num);
    while(countAll<array_size&&num!=0)
    {
        numbers[countAll]=num;
        ++countAll;
        scanf("%1f", &num);
    }
    sums(numbers, countAll, &sumPos,
         &sumNeg, &countPos, &countNeg);
    sumAll=sumPos+sumNeg;
    if(countAll!=0)
        avgAll=sumAll/countAll;
    if(countPos!=0)
        avgPos=sumPos/countPos;
    if(countNeg!=0)
        avgNeg=sumNeg/countNeg;

    printf("\nStatistics:\n");
    printf("Desc\t\tNumber\t Total:\t\tAverage:\n");
    printf("Positive\t%d\t%.41f\t%.41f\n", countPos, sumPos, avgPos);
    printf("Negative\t%d\t%.41f\n", countNeg, sumNeg, avgNeg);
    printf("Overall\t\t%d\t%.41f\n", countAll, sumAll, avgAll);

    return 0;
}
