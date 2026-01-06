#include "push_swap.h"

void sort_complex(t_stack_node **a, t_stack_node **b)
{
    int max_bits;
    int i;
    int j;
    int size;

    size = stack_size(*a);
    max_bits = 0;
    while ((size - 1) >> max_bits)
        max_bits++;
    i = 0;
    while (i < max_bits)
    {
        j = 0;
        while (j < size)
        {
            if (((*a)->index >> i) & 1)
                ra(a, true);
            else
                pb(a, b, true);
            j++;
        }
        while (*b)
            pa(a, b, true);
        i++;
    }
}
