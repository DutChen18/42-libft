#include "libft.h"

void
	*ft_memcpy(void *dst, const void *src, size_t size)
{
	if (dst == src)
		return (dst);
	while (0 < size)
	{
		size -= 1;
		((unsigned char *) dst)[size] = ((unsigned char *) src)[size];
	}
	return (dst);
}
