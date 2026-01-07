#include "push_swap.h"

void dispatch_sort(t_stack_node **a, t_stack_node **b, char *strategy)
{
	double disorder = compute_disorder(*a);

	if (!strategy) // Aucun flag fourni -> adaptatif par défaut
	{
		if (stack_size(*a) <= 5)
			sort_simple(a, b);
		else if (disorder < 0.2)
			sort_simple(a, b);
		else if (disorder < 0.5)
			sort_medium(a, b);
		else
			sort_complex(a, b);
		return;
	}

	if (ft_strncmp(strategy, "--simple", 8) == 0)
		sort_simple(a, b);
	else if (ft_strncmp(strategy, "--medium", 8) == 0)
		sort_medium(a, b);
	else if (ft_strncmp(strategy, "--complex", 9) == 0)
		sort_complex(a, b);
	else if (ft_strncmp(strategy, "--adaptive", 9) == 0)
		sort_complex(a, b);
	else // Flag inconnu -> adaptatif mais **pas affiché**
	{
		if (stack_size(*a) <= 5)
			sort_simple(a, b);
		else if (disorder < 0.2)
			sort_simple(a, b);
		else if (disorder < 0.5)
			sort_medium(a, b);
		else
			sort_complex(a, b);
	}
}
