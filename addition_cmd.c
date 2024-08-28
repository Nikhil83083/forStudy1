#include <stdio.h>

int main(int argc, char *argv[])
{
	int a,b,sum;
	int i; //for loop counter
	sum=0;
	
	if(argc<2)
	{
		printf("please use \"prg_name value1 value2 ... \"\n");
		return -1;
	}
	
	for(i=1; i<argc; i++)
	{
		printf("arg[%2d]: %d\n",i,atoi(argv[i]));
		sum += atoi(argv[i]);
	}

	
	printf("SUM of all values: %d\n",sum);
	
	return 0;
}