#include <stdio.h>

int main () {
int m1,m2,m3,m4,m5;
int total;
float agg;
printf("Enter the marks of the 5 subjects:\n");
scanf("%d%d%d%d%d",&m1,&m2,&m3,&m4,&m5);

if (m1>=40 && m2>=40 && m3>=40 && m4>=40 && m5>=40) {
   total = m1+m2+m3+m4+m5;
   agg = total/5.0;
   printf("Result: Pass\n");
   printf("Agg: %.2f%%\n",agg);
   
   if (agg >=75)
      printf("Grade: Distinction\n");
   else if (agg >=60) 
      printf("Grade: First Division\n");
   else if (agg >= 50) 
      printf("Grade: Second grade\n");
     else 
      printf("Grade: Third Division\n");
      } else {
           printf("Result: FAIL\n");
           printf("Grade: No grade\n");
          }
          return 0;
          }
