/*
**
** QWASAR.IO -- my_recursive_factorial
**
** @param {int} param_1
**
** @return {int}
**
*/

int rcsvfact( int n ) //def nbang(n):
{
	if ( n == 0 )
		return 1;
	return ( n * rcsvfact( n - 1 ) ); // factorial definition: n! = n * ( n - 1 )!
} // KVPB's RCSVFACT

int my_recursive_factorial(int param_1)
{
	return rcsvfact( param_1 );
}
