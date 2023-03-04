#include <Python.h>

static PyObject* say_hello(PyObject* self, PyObject* args) 
{
    const char* name;

    if (!PyArg_ParseTuple(args, "s", &name))
        return NULL;

    printf("Hello %s!\n", name);
    
    Py_RETURN_NONE;
}

static PyMethodDef SpamMethods[] = {
    {"hello",  say_hello, METH_VARARGS, "Say Hello."},
    {NULL, NULL, 0, NULL}        /* Sentinel */
};

static struct PyModuleDef SpamModule = {
    PyModuleDef_HEAD_INIT,
   "spam",      /* name of module */
   NULL,        /* module documentation, may be NULL */
   -1,          /* size of per-interpreter state of the module,
                or -1 if the module keeps state in global variables. */
   SpamMethods
};

PyMODINIT_FUNC PyInit_spam(void) 
{
     return PyModule_Create(&SpamModule);
}