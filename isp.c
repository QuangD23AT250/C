#include<stdio.h>
#include<math.h>

 int main()
 {
   
   
   int ax,ay,bx,by,cx,cy; 
   double AB,AC,BC,cos;
   scanf("%d%d%d%d%d%d",&ax,&ay,&bx,&by,&cx,&cy);
   AB= sqrt(pow(bx-ax,2)+pow(by-ay,2));
   BC= sqrt(pow(cx-bx,2)+pow(cy-by,2));
   AC= sqrt(pow(cx-ax,2)+pow(cy-ay,2));
 
  printf("%d%d%d",AB,AC,BC);
  
  cos=(pow(AB,2)+pow(AC,2)-pow(BC,2))/(2*AB*AC);
  
 
 return 0;
 }
