#include<stdio.h>
#include<math.h>

void ptbac2(long long l, long long m, long long n)
{
	if (l==0)
		  {
		  	if (m==0)
			  {	
					float z= n;
					printf("%.3lf",z);
		        } 
		  	else 
			  {
			  	printf("NONE\n");
				if (m>0) printf("+");
				else printf("-");
		      }
		  	
		  }
	  
	     else 
			{ 
			    
			
				double k = -m/(2.0*l);
		    	
		    	if ( l > 0 ) 
		    	{
		    		double y= l*k*k+m*k+n;
		    		printf("CT: (%.3lf, %.3lf)", k,y);
		    		
				}
				else
				{
				  double y= l*k*k+m*k+n;
		    		printf("CD: (%.3lf, %.3lf)", k,y);	
					
			    }
		    }
		
	
	
}




int main()
{ 
	long long a,b,c,d;
	double x1,x2;
	scanf("%lld%lld%lld%lld",&a,&b,&c,&d);
	
	if ( a==0 )
	{	
		ptbac2(b,c,d);		
	}
	
	
	
		
	else 
	{
	  	
			long long b2= 2*b;
			long long a2= 3*a;
			
			
			// delta y'
		    double delta = b2 * b2 - 4 * a2 * c;
	
	  
	    	if (delta > 0) 
			{
		        
		        x1 = (-b2 + sqrt(delta)) / (2.0 * a2);
		        x2 = (-b2 - sqrt(delta)) / (2.0 * a2);
		        printf("x1 = %.3lf\n", x1);
		        printf("x2 = %.3lf\n", x2);
	        
		        if ( 6*a*x1 +2*b > 0 )
		        { 
		          double cty= a*pow(x1,3)+b*pow(x1,2)+c*x1+d;
		          double cdy= a*pow(x2,3)+b*pow(x2,2)+c*x2+d;
		         printf("CD : (%.3lf, %.3lf)\n",x2,cdy);
		         printf("CT : (%.3lf, %.3lf)",x1,cty);
				}
				if ( 6*a*x1 +2*b < 0 )
		        { 
		          double cty= a*pow(x2,3)+b*pow(x2,2)+c*x2+d;
		          double cdy= a*pow(x1,3)+b*pow(x1,2)+c*x1+d;
		         printf("CD : (%.3lf, %.3lf)\n",x1,cdy);
		         printf("CT : (%.3lf, %.3lf)",x2,cty);
				}
	        
	    	} 
	    	
			else 
			{
	        
	        printf("NONE");
	        if (a > 0) printf("+");
	        else printf("-");
	        
	    	}	
        }
    	
 	    
		
	
	
	
return 0;	
}