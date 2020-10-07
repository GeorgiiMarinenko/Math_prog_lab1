#include "../INCLUDES/header.h"

#pragma region G_FUnctions
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
#pragma endregion

#pragma region V_FUnctions
double	ft_function_V(double x1, double x2, double x3)
{
	double	rez;
	rez = -3 *pow(x1, 2) - 2 * pow(x2, 2) + x1*x2 + 5*x1 - pow(x3, 2) - x2*x3 + 6*x3;
	return (rez);
}

double	ft_diff_func_x1_V(double x1, double x2, double x3)
{
	double	rez;
	rez = -6*x1 + x2 + 5;
	return (rez);
}

double	ft_diff_func_x2_V(double x1, double x2, double x3)
{
	double	rez;
	rez = -4*x2 + x1 - x3;
	return (rez);
}

double	ft_diff_func_x3_V(double x1, double x2, double x3)
{
	double	rez;
	rez = -2*x3 - x2 + 6;
	return (rez);
}
#pragma endregion

grad_point grad(double cx1, double cx2, double cx3)
{
	//double(*func)(double,double,double)
	double	rez;
	grad_point point;

	double	x = ft_diff_func_x1(cx1, cx2, cx3);
	point.x1 = x;
	double	y = ft_diff_func_x2(cx1, cx2, cx3);
	point.x2 = y;
	double	z = ft_diff_func_x3(cx1, cx2, cx3);
	point.x3 = z;
	return (point);
}

// double ft_find_min(grad_point point)
// {
// 	double min;
// 	if ((point.x1 < point.x2) && (point.x1 < point.x3))
// 		min = point.x1;
// 	else if ((point.x2 < point.x1) && (point.x2 < point.x3))
// 		min = point.x2;
// 	else
// 		min = point.x3;
// 	return (min);
// }
