//write a c program to determine eligibility for admission to a professional course based on the following criteria eligibility criteria :marks in maths >=65 and marks in phy >=55 and marks in chem >=50 and total in all three subject >=190 or total in maths  and physics>=140 -------------- input the marks obtained in physics : 65 input the marks obtained  in chemistry  :51 input the marks obtained in mathematics : 72 total marks of maths , physics and chemistry:188 total marks of maths and physics :137 the candidate is not eligible.

#include <stdio.h>

void main() 
{
    int maths, phy, chem, total_mpc, total_mp;

    printf("Input the marks obtained in Physics: ");
    scanf("%d", &phy);

    printf("Input the marks obtained in Chemistry: ");
    scanf("%d", &chem);

    printf("Input the marks obtained in Mathematics: ");
    scanf("%d", &maths);

    total_mpc = maths + phy + chem;
    total_mp = maths + phy;

    if ((maths >= 65 && phy >= 55 && chem >= 50 && total_mpc >= 190) ||
        (total_mp >= 140)) 
    { 
        printf("\nThe candidate is eligible. ");
    } 
    else 
    {
        printf("\nThe candidate is not eligible.");
    }

}