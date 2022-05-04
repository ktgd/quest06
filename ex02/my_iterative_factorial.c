/*
**
** QWASAR.IO -- my_iterative_factorial
**
** @param {int} param_1
**
** @return {int}
**
*/

int itrvfact( int n )
{
	int f; //= 1
	int i; //= 0

	f = 1;
	if ( n == 0 )
		return f; //1
	i = 1;
	while ( i <= n )
	{
		f = f * i;
		i++;
	}
	return f;
} // KVPB's ITRVFACT

int my_iterative_factorial(int param_1)
{
	return itrvfact( param_1 );
}
