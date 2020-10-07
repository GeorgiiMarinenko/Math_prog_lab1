#include <iostream>
#include <string>
#include "../INCLUDES/header.h"

using namespace std;
int	main(void)
{
	int cnt = 0;
	int isMax;
	double	eps = 0.001;
	double	tk_base;
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
	cin >> tk_base;

	x1 = x1base;
	x2 = x2base;
	x3 = x3base;
	tk = tk_base;

	cur_func = ft_function(x1, x2, x3);
	p = grad(x1, x2, x3);
	cout << "Points x1,x2,x3: " << p.x1 << " " << p.x2 << " " << p.x3 << endl << endl;
	if (act == "min")
		isMax = -1;
	else
		isMax = 1;
	next_func = ft_function(x1 + p.x1 * tk * isMax, x2 + p.x2 * tk * isMax, x3 + p.x3 * tk * isMax);
#pragma region TASK1
	while(abs(cur_func-next_func) > eps)
	{
		cout << "Current function: " << cur_func << endl;
		cout << "Next function: " << next_func << endl;
		cout << "?? " << next_func * (double)isMax << endl;
		if (((cur_func > next_func) && (isMax == -1)) || ((cur_func < next_func) && (isMax == 1)))
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
		if (cnt == 100 || abs(next_func) > 10e10)
		{
			if(isMax == 1)
				cout << "Нет локального максимума" << endl;
			else
				cout << "Нет локального минимума" << endl;
			break;
		}
		cnt++;
		cur_func = next_func;
		next_func = ft_function(x1 + p.x1 * tk * isMax, x2 + p.x2 * tk * isMax, x3 + p.x3 * tk * isMax);
	}
	cout << "__________________" << endl;
	cout << "CNT = " << cnt << endl;
	cout << "Current function: " << cur_func << endl;
	cout << "Next function: " << next_func << endl;
	cout << "Points x1,x2,x3: " << x1 << " " << x2 << " " << x3 << endl;
	cout << "Points x1,x2,x3: " << p.x1 << " " << p.x2 << " " << p.x3 << endl;
#pragma endregion

	cout << "TASK 2" << endl;
	x1 = x1base;
	x2 = x2base;
	x3 = x3base;
	tk = tk_base;
	int	iter = 0;

	cur_func = ft_function(x1, x2, x3);
	p = grad(x1, x2, x3);
	while((pow(p.x1,2) + pow(p.x2,2) + pow(p.x3,2)) > eps)
	{
		next_func = ft_function(x1 + p.x1 * tk * isMax, x2 + p.x2 * tk * isMax, x3 + p.x3 * tk * isMax);
		while (next_func > cur_func)
		{
			tk /= 2;
			next_func = ft_function(x1 + p.x1 * tk * isMax, x2 + p.x2 * tk * isMax, x3 + p.x3 * tk * isMax);
		}
		cur_func = next_func;
		x1 += isMax * tk * p.x1;
		x2 += isMax * tk * p.x2;
		x3 += isMax * tk * p.x3;
		p = grad(x1, x2, x3);
		tk = tk_base;
	}
	cout << "\n\n__________________" << endl;
	cout << "Current function: " << cur_func << endl;
	cout << "Next function: " << next_func << endl;
	cout << "Points x1,x2,x3: " << x1 << " " << x2 << " " << x3 << endl;
	cout << "Points x1,x2,x3: " << p.x1 << " " << p.x2 << " " << p.x3 << endl;
	return (0);
}
