int ft_isalnum(int c)
{
    return ((('A' <= c && 'Z' >= c) || ('a' <= c && 'z' >= c)) || ('0'<= c && '9'>= c));
}