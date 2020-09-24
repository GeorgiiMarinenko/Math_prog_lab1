#include <iostream>
#include <string>
#include "../SRCS/tools.cpp"
#include "../INCLUDES/header.h"

using namespace std;
int	main(void)
{
	int cnt = 0;
	int isMax;
	double	eps = 0.001;
	double	tk;
	double	c = 0.25;
	double	x1base;
	double	x2base;
	double	x3base;

#pragma region Task1_var
	double	x1;
	double	x2;
	double	x3;
	double	func;

	grad_point p;
	double	grad_func;

	double	cur_func;
	double	next_func;

	string act;
#pragma endregion

	cout << "min/max: ";
	cin >> act;
	cout << "x1 = ";
	cin >> x1base;
	cout << "x2 = ";
	cin >> x2base;
	cout << "x3 = ";
	cin >> x3base;
	cout << "step = ";
	cin >> tk;

	x1 = x1base;
	x2 = x2base;
	x3 = x3base;

	cur_func = ft_function_V(x1, x2, x3);
	p = grad(x1, x2, x3);
	next_func = ft_function_V(x1 - p.x1 * tk, x2 - p.x2 * tk, x3 - p.x3 * tk);

	if (act == "min")
		isMax = -1;
	else
		isMax = 1;


/*
#pragma region TASK1
	while(abs(cur_func-next_func) > eps)
	{
		cout << "TK: " << tk << endl;
		if (cur_func < isMax * next_func)
		{
			x1 += isMax * tk * p.x1;
			x2 += isMax * tk * p.x2;
			x3 += isMax * tk * p.x3;
			p = grad(x1, x2, x3);
		}
		else
		{
			tk *= c;
		}
		cnt++;
		if (cnt == 100 || abs(next_func) > 10e10)
		{
			if(isMax == 1)
				cout << "Нет локального максимума" << endl;
			else
				cout << "Нет локального минимума" << endl;
			break;
		}
		cur_func = next_func;
		next_func = ft_function_V(x1 - p.x1 * tk, x2 - p.x2 * tk, x3 - p.x3 * tk);
	}
	cout << "__________________" << endl;
	cout << "Current function: " << cur_func << endl;
	cout << "Next function: " << next_func << endl;
	cout << "Points x1,x2,x3: " << x1 << " " << x2 << " " << x3 << endl;
	cout << "Points x1,x2,x3: " << p.x1 << " " << p.x2 << " " << p.x3 << endl;
#pragma endregion
*/
	x1 = x1base;
	x2 = x2base;
	x3 = x3base;
	cur_func = ft_function_V(x1, x2, x3);
	p = grad(x1, x2, x3);
	next_func = ft_function_V(x1 - p.x1 * tk, x2 - p.x2 * tk, x3 - p.x3 * tk);
	while(abs(cur_func-next_func) > eps)
	{
		tk = ft_find_min()
	}

	return (0);
}
