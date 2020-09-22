#include <iostream>
#include "../INCLUDES/header.h"

using namespace std;
int	main(void)
{
	double	eps = 0.001;
	double	x1;
	double	x2;
	double	x3;
	cout << "x1 = ";
	cin >> x1;
	cout << "x2 = ";
	cin >> x2;
	cout << "x3 = ";
	cin >> x3;
	cout << ft_function(x1, x2, x3) <<  endl;
	return (0);
}
