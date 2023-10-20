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
			  	printf("None\n");
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
	  	
			long long o= 2*b;
			long long i= 3*a;
			
			
			// delta y'
		    double delta = o * o - 4 * i * c;
	
	  
	    	if (delta > 0) 
			{
		        
		        x1 = (-o + sqrt(delta)) / (2 * i);
		        x2 = (-o - sqrt(delta)) / (2 * i);
		        double f = (x1+x2)/2;
		        if (x1>x2)
		        {
		        	
		        	if (3*a*f*f + 2*b*f + c < 0)
		        	{
			          double yx1= a*pow(x1,3)+b*pow(x1,2)+c*x1+d;
			          double yx2= a*pow(x2,3)+b*pow(x2,2)+c*x2+d;
			         printf("CD: (%.3lf, %.3lf)\n",x2,yx2);
			         printf("CT: (%.3lf, %.3lf)",x1,yx1);
					}
					else 
					{
					  double yx1= a*pow(x1,3)+b*pow(x1,2)+c*x1+d;
			          double yx2= a*pow(x2,3)+b*pow(x2,2)+c*x2+d;
			         
			         printf("CT: (%.3lf, %.3lf)\n",x2,yx2);
			         printf("CD: (%.3lf, %.3lf)",x1,yx1);
					}		        			
				}
				else 
				{
				
		        	if (3*a*f*f + 2*b*f + c < 0)
		        	{
			          double yx1= a*pow(x1,3)+b*pow(x1,2)+c*x1+d;
			          double yx2= a*pow(x2,3)+b*pow(x2,2)+c*x2+d;
			         printf("CD: (%.3lf, %.3lf)\n",x1,yx1);
			         printf("CT: (%.3lf, %.3lf)",x2,yx2);
					}
					else 
					{
					  double yx1= a*pow(x1,3)+b*pow(x1,2)+c*x1+d;
			          double yx2= a*pow(x2,3)+b*pow(x2,2)+c*x2+d;
			          printf("CT: (%.3lf, %.3lf)\n",x1,yx1);
			         printf("CD: (%.3lf, %.3lf)\n",x2,yx2);
			        
					}		        			     			
					
				}
		        
		    }
	    	
			else 
			{
	        
	        printf("None\n");
	        if (a > 0) printf("+");
	        else printf("-");
	        
	    	}	
        }
    	
 	    
		
	
	
	
return 0;	
}