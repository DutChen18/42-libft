#include "libft.h"

int
	ft_atoi(const char *str)
{
	int		s;
	long	v;

	while ((*str >= 9 && *str <= 13) || *str == 32)
		str += 1;
	s = 1 - (*str == '-') * 2;
	str += *str == '-' || *str == '+';
	v = 0;
	while (ft_isdigit(*str))
	{
		v = v * 10 + *str - '0';
		str += 1;
	}
	return (v * s);
}
