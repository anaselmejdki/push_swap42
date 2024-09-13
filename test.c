#include "push_swap.h"



void print_stack(t_node *stack) {
    while (stack) {
        printf("%d -> ", stack->value);
        stack = stack->next;
    }
    printf("NULL\n");
}

int main(int argc, char **argv) {
    
    if (argc < 2)
    {
        printf("DAKHAL ARGV");
        return (0);
    }
    t_node *stack = NULL;

    if (fill_stack_a(&stack, argv))
        printf("Stack filled successfully!\n");
    else
        printf("Error occurred while filling the stack.\n");

    // Print the stack
    print_stack(stack);

    // Free the stack
    t_node *tmp;
    while (stack) {
        tmp = stack;
        stack = stack->next;
        free(tmp);
    }

    return 0;
}
