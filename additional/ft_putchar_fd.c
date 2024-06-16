void ft_putchar_fd(char c, int fd)
{
    write (fd, &c, 1);
}

// 0 : STDIN_FILENO
// 1 : STDOUT_FILENO
// 2 : STDERR_FILENO