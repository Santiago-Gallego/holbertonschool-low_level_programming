int _strlen(char *s)
{
	if (!*s)
		return (0);
	else
		return (1 + _strlen(s + 1));
}

int palindrome_helper(char *s, int len, int i)
{
	if (_strlen(s) == 0)
		return (0);

	if (*(s + i) != *(s + len - 1))
		return (0);
	else if (i > (len - 1))
		return (1);
	else
		return (palindrome_helper(s, len - 1, i + 1));
}

int is_palindrome(char *s)
{
	return (palindrome_helper(s, _strlen(s), 0));
}
int main(void)
{
    int r;

    r = is_palindrome("level");
    printf("%d\n", r);
    r = is_palindrome("holbertoh");
    printf("%d\n", r);
    return (0);
}
