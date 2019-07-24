
/**
  * print_name - Function to print a name
  *@name: The array to print
  *@f: The function used to print
  *
  * Return: Nothing
  */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
