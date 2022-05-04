/*
**
** QWASAR.IO -- my_atoi
**
** @param {char*} param_1
**
** @return {int}
**
*/

//#include <ctype.h> // isdigit, isspace //	unused
//#include <stddef.h> // size_t //	unused
//#include <stdio.h> // printf //	debug

#undef isdigit
#undef isspace
#undef atoi

int isdigit(int c)
{
	return ( ( 48 <= c && c <= 57 ) ? 1 : 0 );
} // KVPB's IsDigit

int isspace(int c)
{
	return ( ( ( 9 <= c && c <= 13 ) || ( c == 32 ) ) ? 1 : 0 );
} // KVPB's IsSpace

int atoi( const char* a )
{
	int i = 0; //size_t i = 0;
	int c = 1; //bool Z__minus = false;
	int k = 0;

	while (isspace((int) a[k]))
		k++;
	if (a[k] == '-' || a[k] == '+')
	{
		if (a[k] == '-')
			c *= -1; //Z__minus = true;
		k += 1;
	}
	while (isdigit((int) a[k]))
	{
		i = i * 10 + a[k] - '0';
		k++;
	}
	//if ( Z__minus == true )
	//	return -i;
	//else
	//	return i;
	return ( c * i );
} // KVPB's ATOI

int my_atoi(char* param_1)
{
	return atoi( (const char*) param_1 );
}

/*int main()
{
	char* s_0 = "2";
	char* s_1 = "123";
	char* s_2 = "-10";
	//char* s = "-0123456789ABCDEF";

	printf("%d\n", my_atoi( s_0 ));
	printf("%d\n", my_atoi( s_1 ));
	printf("%d\n", my_atoi( s_2 ));
	//printf("%d\n", my_atoi( s ));
	return 0;
}*/ //	debug
