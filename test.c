#include "push_swap.h"

void print_stack(t_node *stack) {
    while (stack) {
        printf("%d -> ", stack->value);
        stack = stack->next;
    }
    printf("NULL\n");
}

void print_error(char *str)
{
    int i = 0;

    write(1, "Error: ", 8);
    while (str[i])
    {
        write(1 ,&str[i], 1);
        i++;
    }
    write(1, "\n", 1);
}
int main(int argc, char **argv) {
    
    if (argc < 2)
        return (0);
    t_node *stack = NULL;

    if (fill_stack_a(&stack, argv) && duplicate(stack) && check_sort(stack))
        print_error("Stack filled successfully!\n");
    else
        print_error(" occurred while filling the stack.\n");
    int size = size_of_stack(stack);
    printf("%d\n", size);

    // Print the stack
    // print_stack(stack);


    t_node *tmp;
    while (stack) {
        tmp = stack;
        stack = stack->next;
        free(tmp);
    }

    return 0;
}
