#include "push_swap.h"

double  compute_disorder(t_stack_node *stack)
{
    t_stack_node    *i;
    t_stack_node    *j;
    double          mistakes;
    double          total_pairs;

    mistakes = 0;
    total_pairs = 0;
    i = stack;
    while (i)
    {
        j = i->next;
        while (j)
        {
            total_pairs++;
            if (i->value > j->value)
                mistakes++;
            j = j->next;
        }
        i = i->next;
    }
    if (total_pairs == 0)
        return (0.0);
    return (mistakes / total_pairs);
}
