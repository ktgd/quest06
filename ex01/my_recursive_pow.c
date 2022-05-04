/*
**
** QWASAR.IO -- my_recursive_pow
**
** @param {int} param_1
** @param {int} param_2
**
** @return {int}
**
*/

int rcsvpow( int b, int n )
{
	int x;

	if ( n == 0 )
		return 1;
	if ( n % 2 == 0 )
	{
		x = rcsvpow( b, n / 2 );
		return ( x * x );
	}
	else
		return ( b * rcsvpow( b, n - 1 ) );
} // KVPB's RCSVPOW

int my_recursive_pow(int param_1, int param_2)
{
    return rcsvpow( param_1, param_2 );
}
