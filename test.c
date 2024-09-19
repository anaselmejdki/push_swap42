#include "push_swap.h"

void	print_stack(t_node *stack)
{
	t_node *head;

	head = stack;
	while (head)
	{
		printf("%d -->", head->value);
		head = head->next;
	}
	printf("NULL");
}

void    free_stack(t_node **stack)
{
    t_node *node;
    
    while (*stack)
    {
        node = *stack;
        *stack = node->next;
        free(node);
    }
}
int main(int ac, char **av)
{
	int len;
	t_node *stack_a;
	t_node *stack_b;
	t_node *head;
	if (ac < 2)
		return(write(1,"ERROR\n", 6), 0);
	stack_a = NULL;
	stack_b = NULL;
	head = stack_a;
	if (fill_stack_a(&stack_a, av) == 0 || duplicate(stack_a) == 0)
	{
		write(1, "ERROR\n", 6);
		free_stack(&stack_a);
		return(0);
	}
	if (check_sort(stack_a) == 1)
	{
		free_stack(&stack_a);
		return(0);
	}
	else
	{
		len = size_of_stack(stack_a);
		sorting(&stack_a, &stack_b, len);
	}
	// print_stack(stack_a);
	// printf("\n Show the index\n");
	// while (head)
	// {
	// 	printf("the index of %d is %d\n", head->value, head->index);
	// 	head = head->next;
	// }
	// free_stack(&stack_a);
}
