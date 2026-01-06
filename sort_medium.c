#include "push_swap.h"
#include <math.h>

void sort_medium(t_stack_node **a, t_stack_node **b)
{
    int size = stack_size(*a);
    int chunk = (int)sqrt(size);
    int i;

    while (*a)
    {
        i = 0;
        while (i < chunk && *a)
        {
            pb(a, b, true);  // push vers b chunk par chunk
            i++;
        }
        while (*b)
            pa(a, b, true);  // récupérer tous les éléments
    }
}
