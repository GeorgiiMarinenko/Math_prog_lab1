#include "../INCLUDES/header.h"

double	ft_function(double x1, double x2, double x3)
{
	double	rez;
	rez = 3*pow(x1, 2) + 4*pow(x2,2) + pow(x3,2) - x1*x3 - 2*x1*x2 + 9*x1;
	return (rez);
}

double	ft_diff_func_x1(double x1, double x2, double x3)
{
	double	rez;
	rez = 6*x1 - x3 - 2*x2 + 9;
	return (rez);
}

double	ft_diff_func_x2(double x1, double x2, double x3)
{
	double	rez;
	rez = 8*x2 - 2*x1;
	return (rez);
}

double	ft_diff_func_x3(double x1, double x2, double x3)
{
	double	rez;
	rez = 2*x3 - x1;
	return (rez);
}

double grad(double x1, double x2, double x3)
{
	double	rez;
	double	x = ft_diff_func_x1(x1, x2, x3);
	double	y = ft_diff_func_x2(x1, x2, x3);
	double	z = ft_diff_func_x3(x1, x2, x3);
	return (rez);
}
