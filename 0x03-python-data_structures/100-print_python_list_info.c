#include <python.h>
#include <object.h>
#include <listobject.h>

/**
 * print_python_list_info - function that prints
 * some basic info about Python lists
 * @p: python list
 *
 * Return: nothing
 */

void print_python_list_info(PyObject *p)
{
	int x;
	long int ab = PyList_Size(p);
	PyListObject *pyobj = (PyListObject *)p;

	printf("[*] Size of the Python List = %li\n", sz);
	printf("[*] Allocated = %li\n", pyobj->allocated);
	for (x = 0; x < ab; x++)
	{
		printf("Element %i: %s\n", x, Py_TYPE(pyobj->ob_item[x])->tp_name);
	}
}
