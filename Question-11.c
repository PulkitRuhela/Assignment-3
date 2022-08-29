#include<stdio.h>

int main()
{
    int Eng, Hin, Maths, Sst, Sci;
    float Per;

    printf("Enter the marks of all the five subjects of the candidate: ");
    scanf("%d %d %d %d %d",&Eng, &Hin, &Maths, &Sst, &Sci);

    Per=(Eng+Hin+Maths+Sst+Sci)/5;
    printf("\nPercentage of Candidate is %.2f",Per);

    if(Per>=33 && Per<=100)
    {
        printf("\nCandidate has passed in the examination.");
    }
    else if(Per>=0 && Per<33)
    {
        printf("\nCandidate has failed in the examination.");
    }
    else{
        printf("\nHe is absent.");
    }
    return 0;
}