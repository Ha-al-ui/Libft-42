#include "libft.h"
#include <stdio.h>

t_list *new_node(void *content)
{
	t_list *node;

	node = malloc(sizeof(t_list));
	node->content = content;
	node->next = NULL;
	return (node);
}

void add_front(t_list **lst, t_list *new)
{
	t_list *p;

	p = *lst;
	*lst = new;
	new->next = p;
}

int lst_size(t_list *lst)
{
	int counter = 0;
	while (lst)
	{
		counter++;
		lst = lst->next;
	}
	return (counter);
}

t_list *lst_last(t_list *lst)
{
	t_list *ptr;

	ptr = lst;
	while (ptr->next != NULL)
		ptr = ptr->next;
	return (ptr);
}

void lst_addback(t_list **lst, t_list *new)
{
	t_list *ptr;

	ptr = lst_last(*lst);
	ptr->next = new;
}

int main()
{
	t_list *node;
	t_list *ptr;

	node = new_node("onouakch");
	node->next = new_node("hamza");
	node->next->next = new_node("houssex");

	add_front(&node, new_node("abdjlil"));
	lst_addback(&node, new_node("redoune"));

	ptr = node;
	while (ptr)
	{
		printf("%s\n", ptr->content);
		ptr = ptr->next;
	}
	
	ptr = node;
	printf("%s", lst_last(ptr)->content);
}