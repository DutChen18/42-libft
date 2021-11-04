#include "libft.h"

int
	ft_atoi(const char *str)
{
	long	v;
	int		s;

	v = 0;
	s = 1;
	while ((*str >= 9 && *str <= 13) || *str == 32)
		str += 1;
	if (*str == '-')
		s = -s;
	if (*str == '-' || *str == '+')
		str += 1;
	while (ft_isdigit(*str))
	{
		v = v * 10 + *str - '0';
		str += 1;
	}
	return (v * s);
}
