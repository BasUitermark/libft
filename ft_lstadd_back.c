#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last; //temp node 

	if (lst && new) // checks if lst and new are not NULL
	{
		if (!*lst) // if lst node is empty, initialize it with new
		{
			*lst = new;
			return ;
		}
		else
		last = ft_lstlast(*lst); // else go to the final node
		last->next = new; // add new as the next final node
	}
}
