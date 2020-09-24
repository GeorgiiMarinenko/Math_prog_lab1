#ifndef MATH_MOD_H
# define MATH_MOD_H
#include <math.h>

struct grad_point
{
	double	x1;
	double	x2;
	double	x3;
};

//Гоша
double ft_function(double x1, double x2, double x3);

double	ft_diff_func_x1(double x1, double x2, double x3);
double	ft_diff_func_x2(double x1, double x2, double x3);
double	ft_diff_func_x3(double x1, double x2, double x3);

//Владос
double ft_function_V(double x1, double x2, double x3);

double	ft_diff_func_x1_V(double x1, double x2, double x3);
double	ft_diff_func_x2_V(double x1, double x2, double x3);
double	ft_diff_func_x3_V(double x1, double x2, double x3);


grad_point grad(double cx1, double cx2, double cx3);
#endif

