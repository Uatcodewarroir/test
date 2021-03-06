#include <stdio.h>
#include <stdarg.h>


int max_n(size_t count,...)
{
	int n,big;
	va_list numbers;
	va_start(numbers,count);
	big=va_arg(numbers,int);
	while(count--)
	{
		n=va_arg(numbers,int);
		if(n>big)
		{
			big=n;
		}
	}
	va_end(numbers);
	return big;

}



int main(int argc, char const *argv[])
{
	printf("max=%d\n",max_n(3,1,2,3) );
	return 0;
}