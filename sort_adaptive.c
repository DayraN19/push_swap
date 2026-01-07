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
        sort_500(a, b);       // désordre élevé (O(n log n))
}
// cree a b c a = simple b = mid c =complex if a < b fait simple mais si c < a fait complex
//mais disorder dans le sujet