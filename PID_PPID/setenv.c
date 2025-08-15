int _setenv(const char *name, const char *value, int overwrite)
{

}
int main(void)
{
	char *name = "file";
	char *value = "Hello!";
	char *view_var
	
	value = _getenv(name);

    	if (value != NULL)
	{
		printf("PATH%s\n", value);
	}
	else
	{
		printf("PATH not found\n");
	}
}
