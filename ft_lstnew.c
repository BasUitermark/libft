#include "libft.h"

// typedef struct s_list
// {
// 	void			*content;
// 	struct s_list	*next;
// }	t_list;

t_list	*ft_lstnew(void *content)
{
	t_list	*head;

	head = (t_list *)malloc(sizeof(t_list));
	if (head == NULL)
		return (0);
	head->content = content;
	head->next = NULL;
	return (head);
}

// int	main(void)
// {
// 	t_list	*elem;
// 	char	str[] = "lorem ipsum dolor sit";

// 	elem = ft_lstnew((void *)str);
// 	printf("%s\n", elem->content);
// }
