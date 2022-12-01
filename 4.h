int frequency(char *s, char c)
{
    int frequencies[26] = {0};
    while (*s++)
    {
        frequencies[*s - 'a']++;
    }
    if (c == 'a')
        return frequencies[c - 'a'] + 1;
    return frequencies[c - 'a'];
}