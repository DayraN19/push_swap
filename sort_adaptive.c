#include "push_swap.h"

void    sort_adaptive(t_stack_node **a, t_stack_node **b)
{
    double d;

    if (!a || !*a)
        return ;
    d = compute_disorder(*a);

    if (d < 0.2)
        sort_simple(a, b);        // pile presque triée
    else if (d < 0.5)
        sort_medium(a, b);        // tri moyen (O(n√n))
    else
        sort_complex(a, b);       // désordre élevé (O(n log n))
}
