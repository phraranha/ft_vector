#include "../lib/libft/libft.h"
#include <stdbool.h>
#include <stdlib.h>

#define FT_VECTOR_INITIAL_CAPACITY 16

typedef struct s_vector
{
	void			**values;
	unsigned long	size;
	unsigned long	capacity;
}					t_vector;
