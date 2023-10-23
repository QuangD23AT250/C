#include<stdio.h>

 int main()
 {
 	double n,max1=0,max2=0,ta=0,tb=0,tba,tbb;
 	scanf("%lf",&n);
 	for (int i=1;i<=n;i++)
 	{ 
 	   double a,b;
 		scanf("%lf%lf",&a,&b);
 		if(a>max1) max1=a;
 	    if(b>max2) max2=b;
 		
 		ta= ta+a;
		 tb= tb+b; 
	 }
	 tba=ta/n;
	 tbb=tb/n;
	 printf("%lld %lld %.2lf %.2lf",(long long)max1,(long long) max2,tba,tbb);
	 return 0;
 }
 
 