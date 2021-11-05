#include "libft.h"

void
	*ft_memmove(void *dst, const void *src, size_t size)
{
	size_t	i;

	if (src <= dst)
		return (ft_memcpy(dst, src, size));
	i = 0;
	while (i < size)
	{
		((unsigned char *) dst)[i] = ((unsigned char *) src)[i];
		i += 1;
	}
	return (dst);
}
