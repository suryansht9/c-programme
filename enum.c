 //WAP TO USE THE ENUM FUNCTION AND STORE YOUR ASKING OUTPUT VARIABLA THEN CALL IT
 /*#include <stdio.h>   
   enum weekdays{Sunday=15, Monday, Tuesday, Wednesday, Thursday, Friday, 
Saturday};   
  int main()   
 {   
  enum weekdays w; // variable declaration of weekdays type   
  w=Monday; // assigning value of Monday to w.   
  printf("The value of w is %d",w);   
     
 
return 0;

 }*/

 // WAP TO PRINT THE VALUR OF STORED VALUE WITH PASSING IT 
 /*#include <stdio.h>   
   enum weekdays{Sunday=15, Monday, Tuesday, Wednesday, Thursday, Friday, 
Saturday};   
  int main()   
 {   
  enum weekdays ; // variable declaration of weekdays type      
  printf("The value of monday is %d",Monday);   
     
 
return 0;

 }*/
//Let's demonstrate another example to understand the enum more clearly.
#include<stdio.h>
enum months
{january=1,february,march,april,may,june,july,august,september,october,november,december};
int main()
{
for(int i=january;i<=december;i++)
{
    printf("%d,",i);
}

return 0;
}