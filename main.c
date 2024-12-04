#include <stdio.h>
int main()
{
	char	character = 'c'; %c //ft_putchar
		char	str[] = "abcde"; //%s ft_putstr
	void	*long_ptr = &str; //%p memory adress, long format
	int	decimal_base_nb = 123456789; //%d
	int	integer = 156; //%i
	unsigned int	unsigned_integer = 123456789; //%u
	char *base_low = "0123456789abcdef" //%x
		char *base_up = "0123456789ABCDEF" // X
		char	percent = '%'; //%% ft_putchar
	printf("%d", ft_printf("%c", character));
}
