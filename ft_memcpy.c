#include "libft.h"

void
	*ft_memcpy(void *dst, const void *src, size_t size)
{
	return (ft_memmove(dst, src, size));
}
