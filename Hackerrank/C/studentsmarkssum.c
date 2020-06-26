#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

//Complete the following function.

int marks_summation(int* marks, int number_of_students, char gender) {
  //Write your code here.
  long int sum=0,i;
  if(gender =='b')
  {
    for(i=0;(2*i)<number_of_students;i++)
    {
        sum+=marks[2*i];
    }
}
if(gender=='g')
{
    for(i=0;(2*i+1)<number_of_students;i++)
    {
        //printf("%d",marks[2*i+1]);
        sum+=marks[2*i+1];
    }
}
return sum;
}

int main() {
    int number_of_students;
    char gender;
    int sum;
  
    scanf("%d", &number_of_students);
    int *marks = (int *) malloc(number_of_students * sizeof (int));
 
    for (int student = 0; student < number_of_students; student++) {
        scanf("%d", (marks + student));
    }
    
    scanf(" %c", &gender);
    sum = marks_summation(marks, number_of_students, gender);
    printf("%d", sum);
    free(marks);
 
    return 0;
}