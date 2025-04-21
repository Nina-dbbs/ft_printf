#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>

int	putchar_count(int c)
{
	int	len;	

	len = 1;
	write(1, &c, 1);
	return (len);
}

int putstr_count(char *str)
{
    int len;

    len = 0;
    if (!str)
    {
        write(1, "(null)", 6);
        return (6);
    }
    while (str[len])
    {
        putchar_count(str[len]);
        len++;
    }
    return (len);
}

int	putnbr_hexa_count(int n)
{
	unsigned int	bis;
	int				len;
    char            *lower;

	len = 0;
	bis = n;
    lower = "0123456789abcdef";
	if (bis >= 16)
	{
		len = len + putnbr_hexa_count(bis / 16);
		bis = bis % 16;
	}
	write(1, &lower[bis], 1);
	len++;
	return (len);
}

int putnbr_count(int nb)
{
    int len;

    len = 1;
    if (nb == -2147483648)
    {
        len += putstr_count("2");
        nb = 147483648;
    }
    if (nb < 0)
	{
		len += putchar_count('-');
		nb = -nb;
	}
    if (nb > 10)
	{
		len = len + putnbr_count(nb / 10);
		nb = nb % 10;
	}
    if (nb < 10)
		putchar_count(nb + 48);
	return (len);
}
int check_format(char c, va_list args)
{
    int len;

    (void)args;
    len = 0;
    if (c == '%')
        len += putchar_count('%');
    if (c == 's')
        len += putstr_count((char *)va_arg(args, char *));
    if (c == 'd')
        len += putnbr_count((int)va_arg(args, int));
    if (c == 'x')
        len += putnbr_hexa_count((int)va_arg(args, int));
    return (len);
}

int ft_printf(const char *str, ...)
{
    va_list args;
    int     len;
    int     i;

    len = 0;
    i = 0;
    if (!str)
        return (-1);
    va_start(args, str);
    while (str[i])
    {
        if (str[i] == '%')
        {
            len += check_format(str[i + 1], args);
            i++;
        }
        else
            len += putchar_count(str[i]);
        i++;
    }
    va_end(args);
    return (len);
}

int main()
{
	char *str;
	int i;

    i = 214748364;
    str = "nina";
    ft_printf("<-ft : %d\n", ft_printf("Salut %s l'int %% min vaut %d et vaut %x au revoir %s", str, i, i, str));
	printf("<-OG : %d\n", printf("Salut %s l'int %% min vaut %d et vaut %x au revoir %s", str, i, i, str));
	i = 42;
    return (0);
}
