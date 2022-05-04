/*
**
** QWASAR.IO -- my_fibonacci
**
** @param {int} param_1
**
** @return {int}
**
*/

#undef rcsvpow
#undef fib

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

int rcsvfib( int n )
{
	if ( n < 0 )
		return rcsvpow( -1, -( n ) + 1 ) * rcsvfib( -( n ) );
	if ( 0 <= n && n <= 1 )
		return n;
	else
		return rcsvfib( n - 1 ) + rcsvfib( n - 2 );
} // KVPB's RCSVFIB

int my_fibonacci(int param_1)
{
    return rcsvfib( param_1 );
}
