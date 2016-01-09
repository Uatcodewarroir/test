#include <setjmp.h>



jmp_buf recover;


int main(int argc, char const *argv[])
{
	volatile int i=0;
	for(;;)
	{
		if (setjmp(recover)!=0)
		{
			printf("that happen\n" );
			/* code */
		}
	}

	return 0;
}



void f()
{
	if(<somgthin crazy>){
		longjmp(recover,1);
	}
}