#include "main.h"
#include <stddef.h>
#include <stdarg.h>

int _printf(const char *format, ...)
{
	buffer_t *output;
	va_list args;
	int ret;

	if (format == NULL)
		return (-1);
	output = init_buffer();
	if (output == NULL)
		return (-1);

	va_start(args, format);

	ret = _printf(format, args, output);

	return (ret);
}
