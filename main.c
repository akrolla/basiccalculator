


#include<stdio.h>
#include<math.h>

int main(int argc, char *argv[])
{

	int num1, num2, ans ;
	char op , x;
	float fnum1, fnum2 ,fans;

	if(argc==4)
		{
		sscanf(argv[1], "%f" ,  &fnum1);
		sscanf(argv[2], "%c" , &op );
		sscanf(argv[3], "%f" , &fnum2 );
		
		
		switch(op)
			{
				case '+':
			
				fans = fnum1 + fnum2;

				printf("%f + %f = %f \n", fnum1, fnum2, fans);

				break;
		
				case '-':
			
				fans = fnum1 - fnum2;
			
				printf(" %f - %f = %f \n ", fnum1 ,fnum2, fans);

				break;
			
				case 'x' : 
				
			
				
				fans = fnum1 * fnum2;
			
				printf("%f x %f is %f \n", fnum1, fnum2, fans);
			
				break;
				
				
 
				case '/' : 
				fans = fnum1 / fnum2;
				if(fnum2==0)
					{
					printf("Error. Division by Zero\n.");
					}
					else
						{
				printf(" %f / %f = %f \n" , fnum1, fnum2, fans);
						}
				
				break;
				
				default: printf(" Error, is not a valid operator! \n");
				break;
			}
		}


			
				
	
		else if(argc==3)
		{
			sscanf(argv[2], "%f ",  &fnum1);
			sscanf(argv[1], "%c"  , &op );
			


			switch(op)
			{
				case 'n':
			
				fans = fnum1 *(-1);

				printf("the negation of %f is %f \n", fnum1, fans);

				break;
		
				case 'a':
			
				fans = fabs(fnum1);
			
				printf(" the absolute value of %f is %f. \n ", fnum1 , fans);

				break;
			
				case 's' : 
				fans = sqrt(fnum1);
			
				if(fnum1<0)
				{
				printf (" Cannot find Square root of Negative Number\n");
				}
					else
					{			
				printf(" the Square root of %f is %f.\n ", fnum1, fans);
					}
			
				break;
				
				
				default: printf(" Error, is not a valid operator!\n");
				break;

			}

		}


	else
		{
	printf("Error must provide correct number of inputs!\n");
		}

return 0;	
}








