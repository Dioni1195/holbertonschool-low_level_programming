

/**
* set_string - Set string
* @s:The double pointer
* @to:The string to set
*
* Return: On success 1.
* On error, -1 is returned, and errno is set appropriately.
*/
void set_string(char **s, char *to)
{
	*s = to;
}
