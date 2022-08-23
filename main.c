#include "ft_printf.h"
#include <stdio.h>
#include <limits.h>

int	main(void)
{
	char	*null;
	char	*zero;
	int		n;
	void	*test_int;

	null = NULL;
	zero = 0;
	n = 42;
	test_int = &n;
	ft_putstr_fd("Test: %c conversion:\n", 1);
	ft_putstr_fd("ft_printf: ", 1);
	ft_printf("Return: %d.\n", (ft_printf("Hello, %c, %c, %c. ", 'A', 'B', 'C')));
	ft_putstr_fd("printf: ", 1);
	printf("Return: %d.\n", (printf("Hello, %c, %c, %c. ", 'A', 'B', 'C')));
	ft_putchar_fd('\n', 1);
	ft_putstr_fd("Test: %s conversion:\n", 1);
	ft_putstr_fd("ft_printf: ", 1);
	ft_printf("Return: %d.\n", (ft_printf("%s, %s. ", "Hello, 42", null)));
	ft_putstr_fd("printf: ", 1);
	printf("Return: %d.\n", (printf("%s, %s. ", "Hello, 42", null)));
	ft_putchar_fd('\n', 1);
	ft_putstr_fd("Test: %p conversion:\n", 1);
	ft_putstr_fd("ft_printf: ", 1);
	ft_printf("Return: %d.\n", (ft_printf("%p, %p, %p, %p. ", "Hello, 42", null, zero, test_int)));
	ft_putstr_fd("printf: ", 1);
	printf("Return: %d.\n", (printf("%p, %p, %p, %p. ", "Hello, 42", null, zero, test_int)));
	ft_putchar_fd('\n', 1);
	ft_putstr_fd("Test: %d conversion:\n", 1);
	ft_putstr_fd("ft_printf: ", 1);
	ft_printf("Return: %d.\n", (ft_printf("%d, %d, %d, %d. ", 42, INT_MIN, INT_MAX, UINT_MAX)));
	ft_putstr_fd("printf: ", 1);
	printf("Return: %d.\n", (printf("%d, %d, %d, %d. ", 42, INT_MIN, INT_MAX, UINT_MAX)));
	ft_putchar_fd('\n', 1);
	ft_putstr_fd("Test: %i conversion:\n", 1);
	ft_putstr_fd("ft_printf: ", 1);
	ft_printf("Return: %i.\n", (ft_printf("%i, %i, %i, %i. ", 42, INT_MIN, INT_MAX, UINT_MAX)));
	ft_putstr_fd("printf: ", 1);
	printf("Return: %i.\n", (printf("%i, %i, %i, %i. ", 42, INT_MIN, INT_MAX, UINT_MAX)));
	ft_putchar_fd('\n', 1);
	ft_putstr_fd("Test: %u conversion:\n", 1);
	ft_putstr_fd("ft_printf: ", 1);
	ft_printf("Return: %d.\n", (ft_printf("%u, %u, %u, %u. ", 42, INT_MIN, INT_MAX, UINT_MAX)));
	ft_putstr_fd("printf: ", 1);
	printf("Return: %d.\n", (printf("%u, %u, %u, %u. ", 42, INT_MIN, INT_MAX, UINT_MAX)));
	ft_putchar_fd('\n', 1);
	ft_putstr_fd("Test: %x conversion:\n", 1);
	ft_putstr_fd("ft_printf: ", 1);
	ft_printf("Return: %d.\n", (ft_printf("%x, %x, %x, %x. ", 42, INT_MIN, INT_MAX, UINT_MAX)));
	ft_putstr_fd("printf: ", 1);
	printf("Return: %d.\n", (printf("%x, %x, %x, %x. ", 42, INT_MIN, INT_MAX, UINT_MAX)));
	ft_putchar_fd('\n', 1);
	ft_putstr_fd("Test: %X conversion:\n", 1);
	ft_putstr_fd("ft_printf: ", 1);
	ft_printf("Return: %d.\n", (ft_printf("%X, %X, %X, %X. ", 42, INT_MIN, INT_MAX, UINT_MAX)));
	ft_putstr_fd("printf: ", 1);
	printf("Return: %d.\n", (printf("%X, %X, %X, %X. ", 42, INT_MIN, INT_MAX, UINT_MAX)));
	ft_putchar_fd('\n', 1);
	ft_putstr_fd("Test: %% conversion:\n", 1);
	ft_putstr_fd("ft_printf: ", 1);
	ft_printf("Return: %d.\n", (ft_printf("Hello, 42%%. ")));
	ft_putstr_fd("printf: ", 1);
	printf("Return: %d.\n", (printf("Hello, 42%%. ")));
	return (0);
}
