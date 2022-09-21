
/**
 * *_strcat - concatenates @src to @dest
 * @src: the source string to append to @dest
 * @dest: the destiation string to be concatenated upon
 * Return: pointer to the resulting string
 */
char *_strcat(char *dest, char *src)
{
	int i = 0;
	int dl = 0;

	while (dest[index++])
		dl++;
	for (i = 0; src[i]; i++)
		dest[dl++] = src[i];
	return (dest);
}
