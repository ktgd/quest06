/*
**
** QWASAR.IO -- my_iterative_pow
**
** @param {int} param_1
** @param {int} param_2
**
** @return {int}
**
*/

int itrvpow( int b, int n )
{
	int x = 1;
	int i = 0;

	if ( n == 0 )
		return 1;
	else if ( n == 1 )
		return n;
	while ( i < n )
	{
		x = x * b;
		i++;
	}
	return x;
} // KVPB's ITRVPOW

int my_iterative_pow(int param_1, int param_2)
{
    return itrvpow( param_1, param_2 );
}
