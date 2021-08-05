/* Generated code for Python module 'ntsecuritycon'
 * created by Nuitka version 0.6.16
 *
 * This code is in part copyright 2021 Kay Hayen.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include "nuitka/prelude.h"

#include "nuitka/unfreezing.h"

#include "__helpers.h"

/* The "module_ntsecuritycon" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_ntsecuritycon;
PyDictObject *moduledict_ntsecuritycon;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[720];

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(void) {
    if (constants_created == false) {
        loadConstantsBlob(&mod_consts[0], UNTRANSLATE("ntsecuritycon"));
        constants_created = true;
    }
}

/* For multiprocessing, we want to be able to initialize the __main__ constants. */
#if (_NUITKA_PLUGIN_MULTIPROCESSING_ENABLED || _NUITKA_PLUGIN_TRACEBACK_ENCRYPTION_ENABLED) && 0
void createMainModuleConstants(void) {
    createModuleConstants();
}
#endif

/* Function to verify module private constants for non-corruption. */
#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_ntsecuritycon(void) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    checkConstantsBlob(&mod_consts[0], "ntsecuritycon");
}
#endif

// The module code objects.
static PyCodeObject *codeobj_c772b8f078879dbae2575e590f006d20;

static void createModuleCodeObjects(void) {
    module_filename_obj = mod_consts[1]; CHECK_OBJECT(module_filename_obj);
    codeobj_c772b8f078879dbae2575e590f006d20 = MAKE_CODEOBJECT(module_filename_obj, 1, CO_NOFREE, mod_consts[719], NULL, NULL, 0, 0, 0);
}

// The module function declarations.


// The module function definitions.


extern void _initCompiledCellType();
extern void _initCompiledGeneratorType();
extern void _initCompiledFunctionType();
extern void _initCompiledMethodType();
extern void _initCompiledFrameType();

extern PyTypeObject Nuitka_Loader_Type;

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
// Provide a way to create find a function via its C code and create it back
// in another process, useful for multiprocessing extensions like dill
extern void registerDillPluginTables(char const *module_name, PyMethodDef *reduce_compiled_function, PyMethodDef *create_compiled_function);

function_impl_code functable_ntsecuritycon[] = {

    NULL
};

static char const *_reduce_compiled_function_argnames[] = {
    "func",
    NULL
};

static PyObject *_reduce_compiled_function(PyObject *self, PyObject *args, PyObject *kwds) {
    PyObject *func;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "O:reduce_compiled_function", (char **)_reduce_compiled_function_argnames, &func, NULL)) {
        return NULL;
    }

    if (Nuitka_Function_Check(func) == false) {
        SET_CURRENT_EXCEPTION_TYPE0_STR(PyExc_TypeError, "not a compiled function");
        return NULL;
    }

    struct Nuitka_FunctionObject *function = (struct Nuitka_FunctionObject *)func;

    function_impl_code *current = functable_ntsecuritycon;
    int offset = 0;

    while (*current != NULL) {
        if (*current == function->m_c_code) {
            break;
        }

        current += 1;
        offset += 1;
    }

    if (*current == NULL) {
        SET_CURRENT_EXCEPTION_TYPE0_STR(PyExc_TypeError, "Cannot find compiled function in module.");
        return NULL;
    }

    PyObject *code_object_desc = PyTuple_New(6);
    PyTuple_SET_ITEM0(code_object_desc, 0, function->m_code_object->co_filename);
    PyTuple_SET_ITEM0(code_object_desc, 1, function->m_code_object->co_name);
    PyTuple_SET_ITEM(code_object_desc, 2, PyLong_FromLong(function->m_code_object->co_firstlineno));
    PyTuple_SET_ITEM0(code_object_desc, 3, function->m_code_object->co_varnames);
    PyTuple_SET_ITEM(code_object_desc, 4, PyLong_FromLong(function->m_code_object->co_argcount));
    PyTuple_SET_ITEM(code_object_desc, 5, PyLong_FromLong(function->m_code_object->co_flags));

    CHECK_OBJECT_DEEP(code_object_desc);

    PyObject *result = PyTuple_New(4);
    PyTuple_SET_ITEM(result, 0, PyLong_FromLong(offset));
    PyTuple_SET_ITEM(result, 1, code_object_desc);
    PyTuple_SET_ITEM0(result, 2, function->m_defaults);
    PyTuple_SET_ITEM0(result, 3, function->m_doc != NULL ? function->m_doc : Py_None);

    CHECK_OBJECT_DEEP(result);

    return result;
}

static PyMethodDef _method_def_reduce_compiled_function = {"reduce_compiled_function", (PyCFunction)_reduce_compiled_function,
                                                           METH_VARARGS | METH_KEYWORDS, NULL};

static char const *_create_compiled_function_argnames[] = {
    "func",
    "code_object_desc",
    "defaults",
    "doc",
    NULL
};


static PyObject *_create_compiled_function(PyObject *self, PyObject *args, PyObject *kwds) {
    CHECK_OBJECT_DEEP(args);

    PyObject *func;
    PyObject *code_object_desc;
    PyObject *defaults;
    PyObject *doc;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "OOOO:create_compiled_function", (char **)_create_compiled_function_argnames, &func, &code_object_desc, &defaults, &doc, NULL)) {
        return NULL;
    }

    int offset = PyLong_AsLong(func);

    if (offset == -1 && ERROR_OCCURRED()) {
        return NULL;
    }

    if (offset > sizeof(functable_ntsecuritycon) || offset < 0) {
        SET_CURRENT_EXCEPTION_TYPE0_STR(PyExc_TypeError, "Wrong offset for compiled function.");
        return NULL;
    }

    PyObject *filename = PyTuple_GET_ITEM(code_object_desc, 0);
    PyObject *function_name = PyTuple_GET_ITEM(code_object_desc, 1);
    PyObject *line = PyTuple_GET_ITEM(code_object_desc, 2);
    int line_int = PyLong_AsLong(line);
    assert(!ERROR_OCCURRED());

    PyObject *argnames = PyTuple_GET_ITEM(code_object_desc, 3);
    PyObject *arg_count = PyTuple_GET_ITEM(code_object_desc, 4);
    int arg_count_int = PyLong_AsLong(arg_count);
    assert(!ERROR_OCCURRED());
    PyObject *flags = PyTuple_GET_ITEM(code_object_desc, 5);
    int flags_int = PyLong_AsLong(flags);
    assert(!ERROR_OCCURRED());

    PyCodeObject *code_object = MAKE_CODEOBJECT(
        filename,
        line_int,
        flags_int,
        function_name,
        argnames,
        NULL, // freevars
        arg_count_int,
        0, // TODO: Missing kw_only_count
        0 // TODO: Missing pos_only_count
    );

    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        functable_ntsecuritycon[offset],
        code_object->co_name,
#if PYTHON_VERSION >= 0x300
        NULL, // TODO: Not transferring qualname yet
#endif
        code_object,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL, // kwdefaults are done on the outside currently
        NULL, // TODO: Not transferring annotations
#endif
        module_ntsecuritycon,
        doc,
        NULL,
        0
    );

    return (PyObject *)result;
}

static PyMethodDef _method_def_create_compiled_function = {
    "create_compiled_function",
    (PyCFunction)_create_compiled_function,
    METH_VARARGS | METH_KEYWORDS, NULL
};


#endif

// Internal entry point for module code.
PyObject *modulecode_ntsecuritycon(PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *module_entry) {
    module_ntsecuritycon = module;

#ifdef _NUITKA_MODULE
    // In case of a stand alone extension module, need to call initialization
    // the init here because that's the first and only time we are going to get
    // called here.

    // Initialize the constant values used.
    _initBuiltinModule();
    createGlobalConstants();

    /* Initialize the compiled types of Nuitka. */
    _initCompiledCellType();
    _initCompiledGeneratorType();
    _initCompiledFunctionType();
    _initCompiledMethodType();
    _initCompiledFrameType();

#if PYTHON_VERSION < 0x300
    _initSlotCompare();
#endif
#if PYTHON_VERSION >= 0x270
    _initSlotIternext();
#endif

    patchBuiltinModule();
    patchTypeComparison();

    // Enable meta path based loader if not already done.
#ifdef _NUITKA_TRACE
    PRINT_STRING("ntsecuritycon: Calling setupMetaPathBasedLoader().\n");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 0x300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    PRINT_STRING("ntsecuritycon: Calling createModuleConstants().\n");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    PRINT_STRING("ntsecuritycon: Calling createModuleCodeObjects().\n");
#endif
    createModuleCodeObjects();

    // PRINT_STRING("in initntsecuritycon\n");

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.

    moduledict_ntsecuritycon = MODULE_DICT(module_ntsecuritycon);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    registerDillPluginTables(module_entry->name, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_ntsecuritycon,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_ntsecuritycon,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_ntsecuritycon, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_ntsecuritycon,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_ntsecuritycon, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_ntsecuritycon,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_ntsecuritycon, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_ntsecuritycon,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_ntsecuritycon);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_ntsecuritycon, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

#if PYTHON_VERSION >= 0x300
    UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);
#endif

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(_spec_from_module, module_ntsecuritycon);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_ntsecuritycon, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    struct Nuitka_FrameObject *frame_c772b8f078879dbae2575e590f006d20;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = Py_None;
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[0], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = mod_consts[1];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[2], tmp_assign_source_2);
    }
    // Frame without reuse.
    frame_c772b8f078879dbae2575e590f006d20 = MAKE_MODULE_FRAME(codeobj_c772b8f078879dbae2575e590f006d20, module_ntsecuritycon);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack(frame_c772b8f078879dbae2575e590f006d20);
    assert(Py_REFCNT(frame_c772b8f078879dbae2575e590f006d20) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_name_1 = mod_consts[1];
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_assattr_target_1 == NULL)) {
            tmp_assattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        assert(!(tmp_assattr_target_1 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[4], tmp_assattr_name_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_2;
        PyObject *tmp_assattr_target_2;
        tmp_assattr_name_2 = Py_True;
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_assattr_target_2 == NULL)) {
            tmp_assattr_target_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        assert(!(tmp_assattr_target_2 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[5], tmp_assattr_name_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
    }

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION(frame_c772b8f078879dbae2575e590f006d20);
#endif
    popFrameStack();

    assertFrameObject(frame_c772b8f078879dbae2575e590f006d20);

    goto frame_no_exception_1;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_c772b8f078879dbae2575e590f006d20);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_c772b8f078879dbae2575e590f006d20, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_c772b8f078879dbae2575e590f006d20->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_c772b8f078879dbae2575e590f006d20, exception_lineno);
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;

    frame_no_exception_1:;
    {
        PyObject *tmp_assign_source_3;
        tmp_assign_source_3 = Py_None;
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[6], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        tmp_assign_source_4 = mod_consts[7];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[8], tmp_assign_source_4);
    }
    {
        PyObject *tmp_assign_source_5;
        tmp_assign_source_5 = mod_consts[9];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[10], tmp_assign_source_5);
    }
    {
        PyObject *tmp_assign_source_6;
        tmp_assign_source_6 = mod_consts[11];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[12], tmp_assign_source_6);
    }
    {
        PyObject *tmp_assign_source_7;
        tmp_assign_source_7 = mod_consts[13];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[14], tmp_assign_source_7);
    }
    {
        PyObject *tmp_assign_source_8;
        tmp_assign_source_8 = mod_consts[15];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[16], tmp_assign_source_8);
    }
    {
        PyObject *tmp_assign_source_9;
        tmp_assign_source_9 = mod_consts[17];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[18], tmp_assign_source_9);
    }
    {
        PyObject *tmp_assign_source_10;
        tmp_assign_source_10 = GET_STRING_DICT_VALUE(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[10]);

        if (unlikely(tmp_assign_source_10 == NULL)) {
            tmp_assign_source_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
        }

        assert(!(tmp_assign_source_10 == NULL));
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[19], tmp_assign_source_10);
    }
    {
        PyObject *tmp_assign_source_11;
        tmp_assign_source_11 = GET_STRING_DICT_VALUE(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[10]);

        if (unlikely(tmp_assign_source_11 == NULL)) {
            tmp_assign_source_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
        }

        assert(!(tmp_assign_source_11 == NULL));
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[20], tmp_assign_source_11);
    }
    {
        PyObject *tmp_assign_source_12;
        tmp_assign_source_12 = GET_STRING_DICT_VALUE(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[10]);

        if (unlikely(tmp_assign_source_12 == NULL)) {
            tmp_assign_source_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
        }

        assert(!(tmp_assign_source_12 == NULL));
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[21], tmp_assign_source_12);
    }
    {
        PyObject *tmp_assign_source_13;
        tmp_assign_source_13 = mod_consts[22];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[23], tmp_assign_source_13);
    }
    {
        PyObject *tmp_assign_source_14;
        tmp_assign_source_14 = mod_consts[24];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[25], tmp_assign_source_14);
    }
    {
        PyObject *tmp_assign_source_15;
        tmp_assign_source_15 = mod_consts[26];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[27], tmp_assign_source_15);
    }
    {
        PyObject *tmp_assign_source_16;
        tmp_assign_source_16 = mod_consts[28];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[29], tmp_assign_source_16);
    }
    {
        PyObject *tmp_assign_source_17;
        tmp_assign_source_17 = mod_consts[30];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[31], tmp_assign_source_17);
    }
    {
        PyObject *tmp_assign_source_18;
        tmp_assign_source_18 = mod_consts[32];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[33], tmp_assign_source_18);
    }
    {
        PyObject *tmp_assign_source_19;
        tmp_assign_source_19 = mod_consts[34];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[35], tmp_assign_source_19);
    }
    {
        PyObject *tmp_assign_source_20;
        tmp_assign_source_20 = mod_consts[36];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[37], tmp_assign_source_20);
    }
    {
        PyObject *tmp_assign_source_21;
        tmp_assign_source_21 = mod_consts[38];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[39], tmp_assign_source_21);
    }
    {
        PyObject *tmp_assign_source_22;
        tmp_assign_source_22 = mod_consts[38];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[40], tmp_assign_source_22);
    }
    {
        PyObject *tmp_assign_source_23;
        tmp_assign_source_23 = mod_consts[41];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[42], tmp_assign_source_23);
    }
    {
        PyObject *tmp_assign_source_24;
        tmp_assign_source_24 = mod_consts[41];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[43], tmp_assign_source_24);
    }
    {
        PyObject *tmp_assign_source_25;
        tmp_assign_source_25 = mod_consts[44];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[45], tmp_assign_source_25);
    }
    {
        PyObject *tmp_assign_source_26;
        tmp_assign_source_26 = mod_consts[44];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[46], tmp_assign_source_26);
    }
    {
        PyObject *tmp_assign_source_27;
        tmp_assign_source_27 = mod_consts[44];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[47], tmp_assign_source_27);
    }
    {
        PyObject *tmp_assign_source_28;
        tmp_assign_source_28 = mod_consts[48];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[49], tmp_assign_source_28);
    }
    {
        PyObject *tmp_assign_source_29;
        tmp_assign_source_29 = mod_consts[50];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[51], tmp_assign_source_29);
    }
    {
        PyObject *tmp_assign_source_30;
        tmp_assign_source_30 = mod_consts[52];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[53], tmp_assign_source_30);
    }
    {
        PyObject *tmp_assign_source_31;
        tmp_assign_source_31 = mod_consts[52];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[54], tmp_assign_source_31);
    }
    {
        PyObject *tmp_assign_source_32;
        tmp_assign_source_32 = mod_consts[55];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[56], tmp_assign_source_32);
    }
    {
        PyObject *tmp_assign_source_33;
        tmp_assign_source_33 = mod_consts[57];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[58], tmp_assign_source_33);
    }
    {
        PyObject *tmp_assign_source_34;
        tmp_assign_source_34 = mod_consts[59];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[60], tmp_assign_source_34);
    }
    {
        PyObject *tmp_assign_source_35;
        PyObject *tmp_left_name_1;
        PyObject *tmp_left_name_2;
        PyObject *tmp_right_name_1;
        PyObject *tmp_right_name_2;
        tmp_left_name_2 = GET_STRING_DICT_VALUE(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[18]);

        if (unlikely(tmp_left_name_2 == NULL)) {
            tmp_left_name_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[18]);
        }

        assert(!(tmp_left_name_2 == NULL));
        tmp_right_name_1 = GET_STRING_DICT_VALUE(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[16]);

        if (unlikely(tmp_right_name_1 == NULL)) {
            tmp_right_name_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[16]);
        }

        assert(!(tmp_right_name_1 == NULL));
        tmp_left_name_1 = BINARY_OPERATION_BITOR_OBJECT_LONG_LONG(tmp_left_name_2, tmp_right_name_1);
        assert(!(tmp_left_name_1 == NULL));
        tmp_right_name_2 = mod_consts[61];
        tmp_assign_source_35 = BINARY_OPERATION_BITOR_OBJECT_LONG_LONG(tmp_left_name_1, tmp_right_name_2);
        Py_DECREF(tmp_left_name_1);
        assert(!(tmp_assign_source_35 == NULL));
        UPDATE_STRING_DICT1(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[62], tmp_assign_source_35);
    }
    {
        PyObject *tmp_assign_source_36;
        PyObject *tmp_left_name_3;
        PyObject *tmp_left_name_4;
        PyObject *tmp_left_name_5;
        PyObject *tmp_left_name_6;
        PyObject *tmp_right_name_3;
        PyObject *tmp_right_name_4;
        PyObject *tmp_right_name_5;
        PyObject *tmp_right_name_6;
        tmp_left_name_6 = GET_STRING_DICT_VALUE(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_left_name_6 == NULL)) {
            tmp_left_name_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
        }

        assert(!(tmp_left_name_6 == NULL));
        tmp_right_name_3 = GET_STRING_DICT_VALUE(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[39]);

        if (unlikely(tmp_right_name_3 == NULL)) {
            tmp_right_name_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[39]);
        }

        assert(!(tmp_right_name_3 == NULL));
        tmp_left_name_5 = BINARY_OPERATION_BITOR_OBJECT_LONG_LONG(tmp_left_name_6, tmp_right_name_3);
        assert(!(tmp_left_name_5 == NULL));
        tmp_right_name_4 = GET_STRING_DICT_VALUE(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[58]);

        if (unlikely(tmp_right_name_4 == NULL)) {
            tmp_right_name_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[58]);
        }

        assert(!(tmp_right_name_4 == NULL));
        tmp_left_name_4 = BINARY_OPERATION_BITOR_OBJECT_LONG_LONG(tmp_left_name_5, tmp_right_name_4);
        Py_DECREF(tmp_left_name_5);
        assert(!(tmp_left_name_4 == NULL));
        tmp_right_name_5 = GET_STRING_DICT_VALUE(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[49]);

        if (unlikely(tmp_right_name_5 == NULL)) {
            tmp_right_name_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[49]);
        }

        assert(!(tmp_right_name_5 == NULL));
        tmp_left_name_3 = BINARY_OPERATION_BITOR_OBJECT_LONG_LONG(tmp_left_name_4, tmp_right_name_5);
        Py_DECREF(tmp_left_name_4);
        assert(!(tmp_left_name_3 == NULL));
        tmp_right_name_6 = GET_STRING_DICT_VALUE(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[16]);

        if (unlikely(tmp_right_name_6 == NULL)) {
            tmp_right_name_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[16]);
        }

        assert(!(tmp_right_name_6 == NULL));
        tmp_assign_source_36 = BINARY_OPERATION_BITOR_OBJECT_LONG_LONG(tmp_left_name_3, tmp_right_name_6);
        Py_DECREF(tmp_left_name_3);
        assert(!(tmp_assign_source_36 == NULL));
        UPDATE_STRING_DICT1(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[63], tmp_assign_source_36);
    }
    {
        PyObject *tmp_assign_source_37;
        PyObject *tmp_left_name_7;
        PyObject *tmp_left_name_8;
        PyObject *tmp_left_name_9;
        PyObject *tmp_left_name_10;
        PyObject *tmp_left_name_11;
        PyObject *tmp_right_name_7;
        PyObject *tmp_right_name_8;
        PyObject *tmp_right_name_9;
        PyObject *tmp_right_name_10;
        PyObject *tmp_right_name_11;
        tmp_left_name_11 = GET_STRING_DICT_VALUE(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[20]);

        if (unlikely(tmp_left_name_11 == NULL)) {
            tmp_left_name_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
        }

        assert(!(tmp_left_name_11 == NULL));
        tmp_right_name_7 = GET_STRING_DICT_VALUE(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[42]);

        if (unlikely(tmp_right_name_7 == NULL)) {
            tmp_right_name_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[42]);
        }

        assert(!(tmp_right_name_7 == NULL));
        tmp_left_name_10 = BINARY_OPERATION_BITOR_OBJECT_LONG_LONG(tmp_left_name_11, tmp_right_name_7);
        assert(!(tmp_left_name_10 == NULL));
        tmp_right_name_8 = GET_STRING_DICT_VALUE(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[60]);

        if (unlikely(tmp_right_name_8 == NULL)) {
            tmp_right_name_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[60]);
        }

        assert(!(tmp_right_name_8 == NULL));
        tmp_left_name_9 = BINARY_OPERATION_BITOR_OBJECT_LONG_LONG(tmp_left_name_10, tmp_right_name_8);
        Py_DECREF(tmp_left_name_10);
        assert(!(tmp_left_name_9 == NULL));
        tmp_right_name_9 = GET_STRING_DICT_VALUE(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[51]);

        if (unlikely(tmp_right_name_9 == NULL)) {
            tmp_right_name_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[51]);
        }

        assert(!(tmp_right_name_9 == NULL));
        tmp_left_name_8 = BINARY_OPERATION_BITOR_OBJECT_LONG_LONG(tmp_left_name_9, tmp_right_name_9);
        Py_DECREF(tmp_left_name_9);
        assert(!(tmp_left_name_8 == NULL));
        tmp_right_name_10 = GET_STRING_DICT_VALUE(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[45]);

        if (unlikely(tmp_right_name_10 == NULL)) {
            tmp_right_name_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[45]);
        }

        assert(!(tmp_right_name_10 == NULL));
        tmp_left_name_7 = BINARY_OPERATION_BITOR_OBJECT_LONG_LONG(tmp_left_name_8, tmp_right_name_10);
        Py_DECREF(tmp_left_name_8);
        assert(!(tmp_left_name_7 == NULL));
        tmp_right_name_11 = GET_STRING_DICT_VALUE(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[16]);

        if (unlikely(tmp_right_name_11 == NULL)) {
            tmp_right_name_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[16]);
        }

        assert(!(tmp_right_name_11 == NULL));
        tmp_assign_source_37 = BINARY_OPERATION_BITOR_OBJECT_LONG_LONG(tmp_left_name_7, tmp_right_name_11);
        Py_DECREF(tmp_left_name_7);
        assert(!(tmp_assign_source_37 == NULL));
        UPDATE_STRING_DICT1(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[64], tmp_assign_source_37);
    }
    {
        PyObject *tmp_assign_source_38;
        PyObject *tmp_left_name_12;
        PyObject *tmp_left_name_13;
        PyObject *tmp_left_name_14;
        PyObject *tmp_right_name_12;
        PyObject *tmp_right_name_13;
        PyObject *tmp_right_name_14;
        tmp_left_name_14 = GET_STRING_DICT_VALUE(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_left_name_14 == NULL)) {
            tmp_left_name_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        assert(!(tmp_left_name_14 == NULL));
        tmp_right_name_12 = GET_STRING_DICT_VALUE(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[58]);

        if (unlikely(tmp_right_name_12 == NULL)) {
            tmp_right_name_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[58]);
        }

        assert(!(tmp_right_name_12 == NULL));
        tmp_left_name_13 = BINARY_OPERATION_BITOR_OBJECT_LONG_LONG(tmp_left_name_14, tmp_right_name_12);
        assert(!(tmp_left_name_13 == NULL));
        tmp_right_name_13 = GET_STRING_DICT_VALUE(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[53]);

        if (unlikely(tmp_right_name_13 == NULL)) {
            tmp_right_name_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[53]);
        }

        assert(!(tmp_right_name_13 == NULL));
        tmp_left_name_12 = BINARY_OPERATION_BITOR_OBJECT_LONG_LONG(tmp_left_name_13, tmp_right_name_13);
        Py_DECREF(tmp_left_name_13);
        assert(!(tmp_left_name_12 == NULL));
        tmp_right_name_14 = GET_STRING_DICT_VALUE(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[16]);

        if (unlikely(tmp_right_name_14 == NULL)) {
            tmp_right_name_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[16]);
        }

        assert(!(tmp_right_name_14 == NULL));
        tmp_assign_source_38 = BINARY_OPERATION_BITOR_OBJECT_LONG_LONG(tmp_left_name_12, tmp_right_name_14);
        Py_DECREF(tmp_left_name_12);
        assert(!(tmp_assign_source_38 == NULL));
        UPDATE_STRING_DICT1(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[65], tmp_assign_source_38);
    }
    {
        PyObject *tmp_assign_source_39;
        tmp_assign_source_39 = mod_consts[66];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[67], tmp_assign_source_39);
    }
    {
        PyObject *tmp_assign_source_40;
        tmp_assign_source_40 = mod_consts[68];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[69], tmp_assign_source_40);
    }
    {
        PyObject *tmp_assign_source_41;
        tmp_assign_source_41 = mod_consts[70];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[71], tmp_assign_source_41);
    }
    {
        PyObject *tmp_assign_source_42;
        tmp_assign_source_42 = mod_consts[72];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[73], tmp_assign_source_42);
    }
    {
        PyObject *tmp_assign_source_43;
        tmp_assign_source_43 = mod_consts[74];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[75], tmp_assign_source_43);
    }
    {
        PyObject *tmp_assign_source_44;
        tmp_assign_source_44 = mod_consts[76];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[77], tmp_assign_source_44);
    }
    {
        PyObject *tmp_assign_source_45;
        tmp_assign_source_45 = mod_consts[78];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[79], tmp_assign_source_45);
    }
    {
        PyObject *tmp_assign_source_46;
        tmp_assign_source_46 = mod_consts[78];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[80], tmp_assign_source_46);
    }
    {
        PyObject *tmp_assign_source_47;
        tmp_assign_source_47 = mod_consts[78];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[81], tmp_assign_source_47);
    }
    {
        PyObject *tmp_assign_source_48;
        tmp_assign_source_48 = mod_consts[78];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[82], tmp_assign_source_48);
    }
    {
        PyObject *tmp_assign_source_49;
        tmp_assign_source_49 = mod_consts[38];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[83], tmp_assign_source_49);
    }
    {
        PyObject *tmp_assign_source_50;
        tmp_assign_source_50 = mod_consts[41];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[84], tmp_assign_source_50);
    }
    {
        PyObject *tmp_assign_source_51;
        tmp_assign_source_51 = mod_consts[85];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[86], tmp_assign_source_51);
    }
    {
        PyObject *tmp_assign_source_52;
        tmp_assign_source_52 = mod_consts[44];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[87], tmp_assign_source_52);
    }
    {
        PyObject *tmp_assign_source_53;
        tmp_assign_source_53 = mod_consts[88];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[89], tmp_assign_source_53);
    }
    {
        PyObject *tmp_assign_source_54;
        tmp_assign_source_54 = mod_consts[38];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[90], tmp_assign_source_54);
    }
    {
        PyObject *tmp_assign_source_55;
        tmp_assign_source_55 = mod_consts[41];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[91], tmp_assign_source_55);
    }
    {
        PyObject *tmp_assign_source_56;
        tmp_assign_source_56 = mod_consts[85];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[92], tmp_assign_source_56);
    }
    {
        PyObject *tmp_assign_source_57;
        tmp_assign_source_57 = mod_consts[44];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[93], tmp_assign_source_57);
    }
    {
        PyObject *tmp_assign_source_58;
        tmp_assign_source_58 = mod_consts[94];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[95], tmp_assign_source_58);
    }
    {
        PyObject *tmp_assign_source_59;
        tmp_assign_source_59 = mod_consts[96];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[97], tmp_assign_source_59);
    }
    {
        PyObject *tmp_assign_source_60;
        tmp_assign_source_60 = mod_consts[48];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[98], tmp_assign_source_60);
    }
    {
        PyObject *tmp_assign_source_61;
        tmp_assign_source_61 = mod_consts[99];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[100], tmp_assign_source_61);
    }
    {
        PyObject *tmp_assign_source_62;
        tmp_assign_source_62 = mod_consts[101];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[102], tmp_assign_source_62);
    }
    {
        PyObject *tmp_assign_source_63;
        tmp_assign_source_63 = mod_consts[85];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[103], tmp_assign_source_63);
    }
    {
        PyObject *tmp_assign_source_64;
        tmp_assign_source_64 = mod_consts[104];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[105], tmp_assign_source_64);
    }
    {
        PyObject *tmp_assign_source_65;
        tmp_assign_source_65 = mod_consts[106];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[107], tmp_assign_source_65);
    }
    {
        PyObject *tmp_assign_source_66;
        tmp_assign_source_66 = mod_consts[52];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[108], tmp_assign_source_66);
    }
    {
        PyObject *tmp_assign_source_67;
        tmp_assign_source_67 = mod_consts[109];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[110], tmp_assign_source_67);
    }
    {
        PyObject *tmp_assign_source_68;
        tmp_assign_source_68 = mod_consts[111];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[112], tmp_assign_source_68);
    }
    {
        PyObject *tmp_assign_source_69;
        tmp_assign_source_69 = mod_consts[113];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[114], tmp_assign_source_69);
    }
    {
        PyObject *tmp_assign_source_70;
        tmp_assign_source_70 = mod_consts[115];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[116], tmp_assign_source_70);
    }
    {
        PyObject *tmp_assign_source_71;
        tmp_assign_source_71 = mod_consts[117];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[118], tmp_assign_source_71);
    }
    {
        PyObject *tmp_assign_source_72;
        tmp_assign_source_72 = mod_consts[119];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[120], tmp_assign_source_72);
    }
    {
        PyObject *tmp_assign_source_73;
        tmp_assign_source_73 = mod_consts[121];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[122], tmp_assign_source_73);
    }
    {
        PyObject *tmp_assign_source_74;
        tmp_assign_source_74 = mod_consts[123];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[124], tmp_assign_source_74);
    }
    {
        PyObject *tmp_assign_source_75;
        tmp_assign_source_75 = mod_consts[125];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[126], tmp_assign_source_75);
    }
    {
        PyObject *tmp_assign_source_76;
        tmp_assign_source_76 = mod_consts[127];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[128], tmp_assign_source_76);
    }
    {
        PyObject *tmp_assign_source_77;
        tmp_assign_source_77 = mod_consts[129];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[130], tmp_assign_source_77);
    }
    {
        PyObject *tmp_assign_source_78;
        tmp_assign_source_78 = mod_consts[131];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[132], tmp_assign_source_78);
    }
    {
        PyObject *tmp_assign_source_79;
        tmp_assign_source_79 = mod_consts[133];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[134], tmp_assign_source_79);
    }
    {
        PyObject *tmp_assign_source_80;
        tmp_assign_source_80 = mod_consts[135];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[136], tmp_assign_source_80);
    }
    {
        PyObject *tmp_assign_source_81;
        tmp_assign_source_81 = mod_consts[137];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[138], tmp_assign_source_81);
    }
    {
        PyObject *tmp_assign_source_82;
        tmp_assign_source_82 = mod_consts[139];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[140], tmp_assign_source_82);
    }
    {
        PyObject *tmp_assign_source_83;
        tmp_assign_source_83 = mod_consts[141];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[142], tmp_assign_source_83);
    }
    {
        PyObject *tmp_assign_source_84;
        tmp_assign_source_84 = mod_consts[143];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[144], tmp_assign_source_84);
    }
    {
        PyObject *tmp_assign_source_85;
        tmp_assign_source_85 = mod_consts[145];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[146], tmp_assign_source_85);
    }
    {
        PyObject *tmp_assign_source_86;
        tmp_assign_source_86 = mod_consts[147];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[148], tmp_assign_source_86);
    }
    {
        PyObject *tmp_assign_source_87;
        tmp_assign_source_87 = mod_consts[149];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[150], tmp_assign_source_87);
    }
    {
        PyObject *tmp_assign_source_88;
        tmp_assign_source_88 = mod_consts[151];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[152], tmp_assign_source_88);
    }
    {
        PyObject *tmp_assign_source_89;
        tmp_assign_source_89 = mod_consts[153];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[154], tmp_assign_source_89);
    }
    {
        PyObject *tmp_assign_source_90;
        tmp_assign_source_90 = mod_consts[155];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[156], tmp_assign_source_90);
    }
    {
        PyObject *tmp_assign_source_91;
        tmp_assign_source_91 = mod_consts[157];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[158], tmp_assign_source_91);
    }
    {
        PyObject *tmp_assign_source_92;
        tmp_assign_source_92 = mod_consts[159];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[160], tmp_assign_source_92);
    }
    {
        PyObject *tmp_assign_source_93;
        tmp_assign_source_93 = mod_consts[161];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[162], tmp_assign_source_93);
    }
    {
        PyObject *tmp_assign_source_94;
        tmp_assign_source_94 = mod_consts[163];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[164], tmp_assign_source_94);
    }
    {
        PyObject *tmp_assign_source_95;
        tmp_assign_source_95 = mod_consts[165];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[166], tmp_assign_source_95);
    }
    {
        PyObject *tmp_assign_source_96;
        tmp_assign_source_96 = mod_consts[167];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[168], tmp_assign_source_96);
    }
    {
        PyObject *tmp_assign_source_97;
        tmp_assign_source_97 = mod_consts[169];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[170], tmp_assign_source_97);
    }
    {
        PyObject *tmp_assign_source_98;
        tmp_assign_source_98 = mod_consts[171];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[172], tmp_assign_source_98);
    }
    {
        PyObject *tmp_assign_source_99;
        tmp_assign_source_99 = mod_consts[173];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[174], tmp_assign_source_99);
    }
    {
        PyObject *tmp_assign_source_100;
        tmp_assign_source_100 = mod_consts[175];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[176], tmp_assign_source_100);
    }
    {
        PyObject *tmp_assign_source_101;
        tmp_assign_source_101 = mod_consts[177];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[178], tmp_assign_source_101);
    }
    {
        PyObject *tmp_assign_source_102;
        tmp_assign_source_102 = mod_consts[179];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[180], tmp_assign_source_102);
    }
    {
        PyObject *tmp_assign_source_103;
        tmp_assign_source_103 = mod_consts[181];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[182], tmp_assign_source_103);
    }
    {
        PyObject *tmp_assign_source_104;
        tmp_assign_source_104 = mod_consts[183];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[184], tmp_assign_source_104);
    }
    {
        PyObject *tmp_assign_source_105;
        tmp_assign_source_105 = mod_consts[185];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[186], tmp_assign_source_105);
    }
    {
        PyObject *tmp_assign_source_106;
        tmp_assign_source_106 = mod_consts[78];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[187], tmp_assign_source_106);
    }
    {
        PyObject *tmp_assign_source_107;
        tmp_assign_source_107 = mod_consts[188];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[189], tmp_assign_source_107);
    }
    {
        PyObject *tmp_assign_source_108;
        tmp_assign_source_108 = mod_consts[190];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[191], tmp_assign_source_108);
    }
    {
        PyObject *tmp_assign_source_109;
        tmp_assign_source_109 = mod_consts[192];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[193], tmp_assign_source_109);
    }
    {
        PyObject *tmp_assign_source_110;
        tmp_assign_source_110 = mod_consts[194];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[195], tmp_assign_source_110);
    }
    {
        PyObject *tmp_assign_source_111;
        tmp_assign_source_111 = mod_consts[196];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[197], tmp_assign_source_111);
    }
    {
        PyObject *tmp_assign_source_112;
        tmp_assign_source_112 = GET_STRING_DICT_VALUE(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[195]);

        if (unlikely(tmp_assign_source_112 == NULL)) {
            tmp_assign_source_112 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[195]);
        }

        assert(!(tmp_assign_source_112 == NULL));
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[198], tmp_assign_source_112);
    }
    {
        PyObject *tmp_assign_source_113;
        tmp_assign_source_113 = mod_consts[199];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[200], tmp_assign_source_113);
    }
    {
        PyObject *tmp_assign_source_114;
        tmp_assign_source_114 = mod_consts[201];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[202], tmp_assign_source_114);
    }
    {
        PyObject *tmp_assign_source_115;
        tmp_assign_source_115 = mod_consts[203];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[204], tmp_assign_source_115);
    }
    {
        PyObject *tmp_assign_source_116;
        tmp_assign_source_116 = mod_consts[205];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[206], tmp_assign_source_116);
    }
    {
        PyObject *tmp_assign_source_117;
        tmp_assign_source_117 = mod_consts[207];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[208], tmp_assign_source_117);
    }
    {
        PyObject *tmp_assign_source_118;
        tmp_assign_source_118 = mod_consts[38];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[209], tmp_assign_source_118);
    }
    {
        PyObject *tmp_assign_source_119;
        tmp_assign_source_119 = mod_consts[41];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[210], tmp_assign_source_119);
    }
    {
        PyObject *tmp_assign_source_120;
        tmp_assign_source_120 = mod_consts[44];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[211], tmp_assign_source_120);
    }
    {
        PyObject *tmp_assign_source_121;
        tmp_assign_source_121 = mod_consts[48];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[212], tmp_assign_source_121);
    }
    {
        PyObject *tmp_assign_source_122;
        tmp_assign_source_122 = mod_consts[50];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[213], tmp_assign_source_122);
    }
    {
        PyObject *tmp_assign_source_123;
        tmp_assign_source_123 = mod_consts[52];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[214], tmp_assign_source_123);
    }
    {
        PyObject *tmp_assign_source_124;
        tmp_assign_source_124 = mod_consts[55];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[215], tmp_assign_source_124);
    }
    {
        PyObject *tmp_assign_source_125;
        tmp_assign_source_125 = mod_consts[34];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[216], tmp_assign_source_125);
    }
    {
        PyObject *tmp_assign_source_126;
        tmp_assign_source_126 = mod_consts[217];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[218], tmp_assign_source_126);
    }
    {
        PyObject *tmp_assign_source_127;
        tmp_assign_source_127 = mod_consts[78];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[219], tmp_assign_source_127);
    }
    {
        PyObject *tmp_assign_source_128;
        tmp_assign_source_128 = mod_consts[78];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[220], tmp_assign_source_128);
    }
    {
        PyObject *tmp_assign_source_129;
        tmp_assign_source_129 = mod_consts[38];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[221], tmp_assign_source_129);
    }
    {
        PyObject *tmp_assign_source_130;
        tmp_assign_source_130 = mod_consts[41];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[222], tmp_assign_source_130);
    }
    {
        PyObject *tmp_assign_source_131;
        tmp_assign_source_131 = mod_consts[85];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[223], tmp_assign_source_131);
    }
    {
        PyObject *tmp_assign_source_132;
        tmp_assign_source_132 = mod_consts[85];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[224], tmp_assign_source_132);
    }
    {
        PyObject *tmp_assign_source_133;
        tmp_assign_source_133 = mod_consts[44];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[225], tmp_assign_source_133);
    }
    {
        PyObject *tmp_assign_source_134;
        tmp_assign_source_134 = mod_consts[44];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[226], tmp_assign_source_134);
    }
    {
        PyObject *tmp_assign_source_135;
        tmp_assign_source_135 = mod_consts[101];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[227], tmp_assign_source_135);
    }
    {
        PyObject *tmp_assign_source_136;
        tmp_assign_source_136 = mod_consts[101];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[228], tmp_assign_source_136);
    }
    {
        PyObject *tmp_assign_source_137;
        tmp_assign_source_137 = mod_consts[94];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[229], tmp_assign_source_137);
    }
    {
        PyObject *tmp_assign_source_138;
        tmp_assign_source_138 = mod_consts[96];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[230], tmp_assign_source_138);
    }
    {
        PyObject *tmp_assign_source_139;
        tmp_assign_source_139 = mod_consts[48];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[231], tmp_assign_source_139);
    }
    {
        PyObject *tmp_assign_source_140;
        tmp_assign_source_140 = mod_consts[48];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[232], tmp_assign_source_140);
    }
    {
        PyObject *tmp_assign_source_141;
        tmp_assign_source_141 = mod_consts[48];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[233], tmp_assign_source_141);
    }
    {
        PyObject *tmp_assign_source_142;
        tmp_assign_source_142 = mod_consts[48];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[234], tmp_assign_source_142);
    }
    {
        PyObject *tmp_assign_source_143;
        tmp_assign_source_143 = mod_consts[99];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[235], tmp_assign_source_143);
    }
    {
        PyObject *tmp_assign_source_144;
        tmp_assign_source_144 = mod_consts[236];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[237], tmp_assign_source_144);
    }
    {
        PyObject *tmp_assign_source_145;
        tmp_assign_source_145 = mod_consts[238];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[239], tmp_assign_source_145);
    }
    {
        PyObject *tmp_assign_source_146;
        tmp_assign_source_146 = mod_consts[240];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[241], tmp_assign_source_146);
    }
    {
        PyObject *tmp_assign_source_147;
        tmp_assign_source_147 = mod_consts[242];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[243], tmp_assign_source_147);
    }
    {
        PyObject *tmp_assign_source_148;
        tmp_assign_source_148 = mod_consts[244];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[245], tmp_assign_source_148);
    }
    {
        PyObject *tmp_assign_source_149;
        tmp_assign_source_149 = mod_consts[246];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[247], tmp_assign_source_149);
    }
    {
        PyObject *tmp_assign_source_150;
        tmp_assign_source_150 = mod_consts[50];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[248], tmp_assign_source_150);
    }
    {
        PyObject *tmp_assign_source_151;
        tmp_assign_source_151 = mod_consts[249];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[250], tmp_assign_source_151);
    }
    {
        PyObject *tmp_assign_source_152;
        tmp_assign_source_152 = mod_consts[249];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[251], tmp_assign_source_152);
    }
    {
        PyObject *tmp_assign_source_153;
        tmp_assign_source_153 = mod_consts[38];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[252], tmp_assign_source_153);
    }
    {
        PyObject *tmp_assign_source_154;
        tmp_assign_source_154 = mod_consts[41];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[253], tmp_assign_source_154);
    }
    {
        PyObject *tmp_assign_source_155;
        tmp_assign_source_155 = mod_consts[44];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[254], tmp_assign_source_155);
    }
    {
        PyObject *tmp_assign_source_156;
        tmp_assign_source_156 = mod_consts[48];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[255], tmp_assign_source_156);
    }
    {
        PyObject *tmp_assign_source_157;
        tmp_assign_source_157 = mod_consts[246];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[256], tmp_assign_source_157);
    }
    {
        PyObject *tmp_assign_source_158;
        tmp_assign_source_158 = mod_consts[55];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[257], tmp_assign_source_158);
    }
    {
        PyObject *tmp_assign_source_159;
        tmp_assign_source_159 = mod_consts[57];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[258], tmp_assign_source_159);
    }
    {
        PyObject *tmp_assign_source_160;
        tmp_assign_source_160 = mod_consts[38];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[259], tmp_assign_source_160);
    }
    {
        PyObject *tmp_assign_source_161;
        tmp_assign_source_161 = mod_consts[41];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[260], tmp_assign_source_161);
    }
    {
        PyObject *tmp_assign_source_162;
        tmp_assign_source_162 = mod_consts[44];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[261], tmp_assign_source_162);
    }
    {
        PyObject *tmp_assign_source_163;
        tmp_assign_source_163 = mod_consts[48];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[262], tmp_assign_source_163);
    }
    {
        PyObject *tmp_assign_source_164;
        tmp_assign_source_164 = mod_consts[50];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[263], tmp_assign_source_164);
    }
    {
        PyObject *tmp_assign_source_165;
        tmp_assign_source_165 = mod_consts[52];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[264], tmp_assign_source_165);
    }
    {
        PyObject *tmp_assign_source_166;
        tmp_assign_source_166 = mod_consts[265];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[266], tmp_assign_source_166);
    }
    {
        PyObject *tmp_assign_source_167;
        tmp_assign_source_167 = mod_consts[38];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[267], tmp_assign_source_167);
    }
    {
        PyObject *tmp_assign_source_168;
        tmp_assign_source_168 = mod_consts[41];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[268], tmp_assign_source_168);
    }
    {
        PyObject *tmp_assign_source_169;
        tmp_assign_source_169 = mod_consts[30];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[269], tmp_assign_source_169);
    }
    {
        PyObject *tmp_assign_source_170;
        tmp_assign_source_170 = mod_consts[38];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[270], tmp_assign_source_170);
    }
    {
        PyObject *tmp_assign_source_171;
        tmp_assign_source_171 = mod_consts[271];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[272], tmp_assign_source_171);
    }
    {
        PyObject *tmp_assign_source_172;
        tmp_assign_source_172 = mod_consts[273];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[274], tmp_assign_source_172);
    }
    {
        PyObject *tmp_assign_source_173;
        tmp_assign_source_173 = mod_consts[275];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[276], tmp_assign_source_173);
    }
    {
        PyObject *tmp_assign_source_174;
        tmp_assign_source_174 = mod_consts[277];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[278], tmp_assign_source_174);
    }
    {
        PyObject *tmp_assign_source_175;
        tmp_assign_source_175 = mod_consts[279];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[280], tmp_assign_source_175);
    }
    {
        PyObject *tmp_assign_source_176;
        tmp_assign_source_176 = mod_consts[281];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[282], tmp_assign_source_176);
    }
    {
        PyObject *tmp_assign_source_177;
        tmp_assign_source_177 = mod_consts[283];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[284], tmp_assign_source_177);
    }
    {
        PyObject *tmp_assign_source_178;
        tmp_assign_source_178 = mod_consts[285];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[286], tmp_assign_source_178);
    }
    {
        PyObject *tmp_assign_source_179;
        tmp_assign_source_179 = mod_consts[287];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[288], tmp_assign_source_179);
    }
    {
        PyObject *tmp_assign_source_180;
        tmp_assign_source_180 = mod_consts[289];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[290], tmp_assign_source_180);
    }
    {
        PyObject *tmp_assign_source_181;
        tmp_assign_source_181 = mod_consts[291];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[292], tmp_assign_source_181);
    }
    {
        PyObject *tmp_assign_source_182;
        tmp_assign_source_182 = mod_consts[293];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[294], tmp_assign_source_182);
    }
    {
        PyObject *tmp_assign_source_183;
        tmp_assign_source_183 = mod_consts[295];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[296], tmp_assign_source_183);
    }
    {
        PyObject *tmp_assign_source_184;
        tmp_assign_source_184 = mod_consts[297];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[298], tmp_assign_source_184);
    }
    {
        PyObject *tmp_assign_source_185;
        tmp_assign_source_185 = mod_consts[299];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[300], tmp_assign_source_185);
    }
    {
        PyObject *tmp_assign_source_186;
        tmp_assign_source_186 = mod_consts[301];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[302], tmp_assign_source_186);
    }
    {
        PyObject *tmp_assign_source_187;
        tmp_assign_source_187 = mod_consts[303];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[304], tmp_assign_source_187);
    }
    {
        PyObject *tmp_assign_source_188;
        tmp_assign_source_188 = mod_consts[305];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[306], tmp_assign_source_188);
    }
    {
        PyObject *tmp_assign_source_189;
        tmp_assign_source_189 = mod_consts[307];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[308], tmp_assign_source_189);
    }
    {
        PyObject *tmp_assign_source_190;
        tmp_assign_source_190 = mod_consts[309];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[310], tmp_assign_source_190);
    }
    {
        PyObject *tmp_assign_source_191;
        tmp_assign_source_191 = mod_consts[311];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[312], tmp_assign_source_191);
    }
    {
        PyObject *tmp_assign_source_192;
        tmp_assign_source_192 = mod_consts[313];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[314], tmp_assign_source_192);
    }
    {
        PyObject *tmp_assign_source_193;
        tmp_assign_source_193 = mod_consts[315];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[316], tmp_assign_source_193);
    }
    {
        PyObject *tmp_assign_source_194;
        tmp_assign_source_194 = mod_consts[317];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[318], tmp_assign_source_194);
    }
    {
        PyObject *tmp_assign_source_195;
        tmp_assign_source_195 = mod_consts[78];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[319], tmp_assign_source_195);
    }
    {
        PyObject *tmp_assign_source_196;
        tmp_assign_source_196 = mod_consts[38];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[320], tmp_assign_source_196);
    }
    {
        PyObject *tmp_assign_source_197;
        tmp_assign_source_197 = mod_consts[41];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[321], tmp_assign_source_197);
    }
    {
        PyObject *tmp_assign_source_198;
        tmp_assign_source_198 = mod_consts[85];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[322], tmp_assign_source_198);
    }
    {
        PyObject *tmp_assign_source_199;
        tmp_assign_source_199 = GET_STRING_DICT_VALUE(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[322]);

        if (unlikely(tmp_assign_source_199 == NULL)) {
            tmp_assign_source_199 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[322]);
        }

        assert(!(tmp_assign_source_199 == NULL));
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[323], tmp_assign_source_199);
    }
    {
        PyObject *tmp_assign_source_200;
        tmp_assign_source_200 = GET_STRING_DICT_VALUE(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[321]);

        if (unlikely(tmp_assign_source_200 == NULL)) {
            tmp_assign_source_200 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[321]);
        }

        assert(!(tmp_assign_source_200 == NULL));
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[324], tmp_assign_source_200);
    }
    {
        PyObject *tmp_assign_source_201;
        tmp_assign_source_201 = mod_consts[38];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[325], tmp_assign_source_201);
    }
    {
        PyObject *tmp_assign_source_202;
        tmp_assign_source_202 = mod_consts[41];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[326], tmp_assign_source_202);
    }
    {
        PyObject *tmp_assign_source_203;
        tmp_assign_source_203 = mod_consts[44];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[327], tmp_assign_source_203);
    }
    {
        PyObject *tmp_assign_source_204;
        tmp_assign_source_204 = mod_consts[48];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[328], tmp_assign_source_204);
    }
    {
        PyObject *tmp_assign_source_205;
        tmp_assign_source_205 = mod_consts[50];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[329], tmp_assign_source_205);
    }
    {
        PyObject *tmp_assign_source_206;
        tmp_assign_source_206 = mod_consts[52];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[330], tmp_assign_source_206);
    }
    {
        PyObject *tmp_assign_source_207;
        tmp_assign_source_207 = mod_consts[55];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[331], tmp_assign_source_207);
    }
    {
        PyObject *tmp_assign_source_208;
        tmp_assign_source_208 = mod_consts[57];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[332], tmp_assign_source_208);
    }
    {
        PyObject *tmp_assign_source_209;
        PyObject *tmp_left_name_15;
        PyObject *tmp_left_name_16;
        PyObject *tmp_left_name_17;
        PyObject *tmp_left_name_18;
        PyObject *tmp_left_name_19;
        PyObject *tmp_left_name_20;
        PyObject *tmp_left_name_21;
        PyObject *tmp_left_name_22;
        PyObject *tmp_right_name_15;
        PyObject *tmp_right_name_16;
        PyObject *tmp_right_name_17;
        PyObject *tmp_right_name_18;
        PyObject *tmp_right_name_19;
        PyObject *tmp_right_name_20;
        PyObject *tmp_right_name_21;
        PyObject *tmp_right_name_22;
        tmp_left_name_22 = GET_STRING_DICT_VALUE(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[18]);

        if (unlikely(tmp_left_name_22 == NULL)) {
            tmp_left_name_22 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[18]);
        }

        assert(!(tmp_left_name_22 == NULL));
        tmp_right_name_15 = GET_STRING_DICT_VALUE(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[325]);

        if (unlikely(tmp_right_name_15 == NULL)) {
            tmp_right_name_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[325]);
        }

        assert(!(tmp_right_name_15 == NULL));
        tmp_left_name_21 = BINARY_OPERATION_BITOR_OBJECT_LONG_LONG(tmp_left_name_22, tmp_right_name_15);
        assert(!(tmp_left_name_21 == NULL));
        tmp_right_name_16 = GET_STRING_DICT_VALUE(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[326]);

        if (unlikely(tmp_right_name_16 == NULL)) {
            tmp_right_name_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[326]);
        }

        assert(!(tmp_right_name_16 == NULL));
        tmp_left_name_20 = BINARY_OPERATION_BITOR_OBJECT_LONG_LONG(tmp_left_name_21, tmp_right_name_16);
        Py_DECREF(tmp_left_name_21);
        assert(!(tmp_left_name_20 == NULL));
        tmp_right_name_17 = GET_STRING_DICT_VALUE(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[327]);

        if (unlikely(tmp_right_name_17 == NULL)) {
            tmp_right_name_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[327]);
        }

        assert(!(tmp_right_name_17 == NULL));
        tmp_left_name_19 = BINARY_OPERATION_BITOR_OBJECT_LONG_LONG(tmp_left_name_20, tmp_right_name_17);
        Py_DECREF(tmp_left_name_20);
        assert(!(tmp_left_name_19 == NULL));
        tmp_right_name_18 = GET_STRING_DICT_VALUE(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[328]);

        if (unlikely(tmp_right_name_18 == NULL)) {
            tmp_right_name_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[328]);
        }

        assert(!(tmp_right_name_18 == NULL));
        tmp_left_name_18 = BINARY_OPERATION_BITOR_OBJECT_LONG_LONG(tmp_left_name_19, tmp_right_name_18);
        Py_DECREF(tmp_left_name_19);
        assert(!(tmp_left_name_18 == NULL));
        tmp_right_name_19 = GET_STRING_DICT_VALUE(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[329]);

        if (unlikely(tmp_right_name_19 == NULL)) {
            tmp_right_name_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[329]);
        }

        assert(!(tmp_right_name_19 == NULL));
        tmp_left_name_17 = BINARY_OPERATION_BITOR_OBJECT_LONG_LONG(tmp_left_name_18, tmp_right_name_19);
        Py_DECREF(tmp_left_name_18);
        assert(!(tmp_left_name_17 == NULL));
        tmp_right_name_20 = GET_STRING_DICT_VALUE(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[330]);

        if (unlikely(tmp_right_name_20 == NULL)) {
            tmp_right_name_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[330]);
        }

        assert(!(tmp_right_name_20 == NULL));
        tmp_left_name_16 = BINARY_OPERATION_BITOR_OBJECT_LONG_LONG(tmp_left_name_17, tmp_right_name_20);
        Py_DECREF(tmp_left_name_17);
        assert(!(tmp_left_name_16 == NULL));
        tmp_right_name_21 = GET_STRING_DICT_VALUE(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[331]);

        if (unlikely(tmp_right_name_21 == NULL)) {
            tmp_right_name_21 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[331]);
        }

        assert(!(tmp_right_name_21 == NULL));
        tmp_left_name_15 = BINARY_OPERATION_BITOR_OBJECT_LONG_LONG(tmp_left_name_16, tmp_right_name_21);
        Py_DECREF(tmp_left_name_16);
        assert(!(tmp_left_name_15 == NULL));
        tmp_right_name_22 = GET_STRING_DICT_VALUE(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[332]);

        if (unlikely(tmp_right_name_22 == NULL)) {
            tmp_right_name_22 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[332]);
        }

        assert(!(tmp_right_name_22 == NULL));
        tmp_assign_source_209 = BINARY_OPERATION_BITOR_OBJECT_LONG_LONG(tmp_left_name_15, tmp_right_name_22);
        Py_DECREF(tmp_left_name_15);
        assert(!(tmp_assign_source_209 == NULL));
        UPDATE_STRING_DICT1(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[333], tmp_assign_source_209);
    }
    {
        PyObject *tmp_assign_source_210;
        PyObject *tmp_left_name_23;
        PyObject *tmp_right_name_23;
        tmp_left_name_23 = GET_STRING_DICT_VALUE(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_left_name_23 == NULL)) {
            tmp_left_name_23 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
        }

        assert(!(tmp_left_name_23 == NULL));
        tmp_right_name_23 = GET_STRING_DICT_VALUE(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[328]);

        if (unlikely(tmp_right_name_23 == NULL)) {
            tmp_right_name_23 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[328]);
        }

        assert(!(tmp_right_name_23 == NULL));
        tmp_assign_source_210 = BINARY_OPERATION_BITOR_OBJECT_LONG_LONG(tmp_left_name_23, tmp_right_name_23);
        assert(!(tmp_assign_source_210 == NULL));
        UPDATE_STRING_DICT1(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[334], tmp_assign_source_210);
    }
    {
        PyObject *tmp_assign_source_211;
        PyObject *tmp_left_name_24;
        PyObject *tmp_left_name_25;
        PyObject *tmp_left_name_26;
        PyObject *tmp_right_name_24;
        PyObject *tmp_right_name_25;
        PyObject *tmp_right_name_26;
        tmp_left_name_26 = GET_STRING_DICT_VALUE(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[20]);

        if (unlikely(tmp_left_name_26 == NULL)) {
            tmp_left_name_26 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
        }

        assert(!(tmp_left_name_26 == NULL));
        tmp_right_name_24 = GET_STRING_DICT_VALUE(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[330]);

        if (unlikely(tmp_right_name_24 == NULL)) {
            tmp_right_name_24 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[330]);
        }

        assert(!(tmp_right_name_24 == NULL));
        tmp_left_name_25 = BINARY_OPERATION_BITOR_OBJECT_LONG_LONG(tmp_left_name_26, tmp_right_name_24);
        assert(!(tmp_left_name_25 == NULL));
        tmp_right_name_25 = GET_STRING_DICT_VALUE(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[331]);

        if (unlikely(tmp_right_name_25 == NULL)) {
            tmp_right_name_25 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[331]);
        }

        assert(!(tmp_right_name_25 == NULL));
        tmp_left_name_24 = BINARY_OPERATION_BITOR_OBJECT_LONG_LONG(tmp_left_name_25, tmp_right_name_25);
        Py_DECREF(tmp_left_name_25);
        assert(!(tmp_left_name_24 == NULL));
        tmp_right_name_26 = GET_STRING_DICT_VALUE(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[332]);

        if (unlikely(tmp_right_name_26 == NULL)) {
            tmp_right_name_26 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[332]);
        }

        assert(!(tmp_right_name_26 == NULL));
        tmp_assign_source_211 = BINARY_OPERATION_BITOR_OBJECT_LONG_LONG(tmp_left_name_24, tmp_right_name_26);
        Py_DECREF(tmp_left_name_24);
        assert(!(tmp_assign_source_211 == NULL));
        UPDATE_STRING_DICT1(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[335], tmp_assign_source_211);
    }
    {
        PyObject *tmp_assign_source_212;
        tmp_assign_source_212 = GET_STRING_DICT_VALUE(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_assign_source_212 == NULL)) {
            tmp_assign_source_212 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        assert(!(tmp_assign_source_212 == NULL));
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[336], tmp_assign_source_212);
    }
    {
        PyObject *tmp_assign_source_213;
        tmp_assign_source_213 = mod_consts[38];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[337], tmp_assign_source_213);
    }
    {
        PyObject *tmp_assign_source_214;
        tmp_assign_source_214 = mod_consts[41];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[338], tmp_assign_source_214);
    }
    {
        PyObject *tmp_assign_source_215;
        tmp_assign_source_215 = mod_consts[85];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[339], tmp_assign_source_215);
    }
    {
        PyObject *tmp_assign_source_216;
        tmp_assign_source_216 = mod_consts[44];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[340], tmp_assign_source_216);
    }
    {
        PyObject *tmp_assign_source_217;
        tmp_assign_source_217 = mod_consts[101];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[341], tmp_assign_source_217);
    }
    {
        PyObject *tmp_assign_source_218;
        tmp_assign_source_218 = mod_consts[94];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[342], tmp_assign_source_218);
    }
    {
        PyObject *tmp_assign_source_219;
        tmp_assign_source_219 = mod_consts[96];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[343], tmp_assign_source_219);
    }
    {
        PyObject *tmp_assign_source_220;
        tmp_assign_source_220 = mod_consts[48];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[344], tmp_assign_source_220);
    }
    {
        PyObject *tmp_assign_source_221;
        tmp_assign_source_221 = mod_consts[99];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[345], tmp_assign_source_221);
    }
    {
        PyObject *tmp_assign_source_222;
        tmp_assign_source_222 = mod_consts[236];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[346], tmp_assign_source_222);
    }
    {
        PyObject *tmp_assign_source_223;
        tmp_assign_source_223 = mod_consts[38];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[347], tmp_assign_source_223);
    }
    {
        PyObject *tmp_assign_source_224;
        tmp_assign_source_224 = mod_consts[41];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[348], tmp_assign_source_224);
    }
    {
        PyObject *tmp_assign_source_225;
        tmp_assign_source_225 = mod_consts[38];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[349], tmp_assign_source_225);
    }
    {
        PyObject *tmp_assign_source_226;
        tmp_assign_source_226 = mod_consts[41];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[350], tmp_assign_source_226);
    }
    {
        PyObject *tmp_assign_source_227;
        tmp_assign_source_227 = mod_consts[85];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[351], tmp_assign_source_227);
    }
    {
        PyObject *tmp_assign_source_228;
        tmp_assign_source_228 = mod_consts[44];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[352], tmp_assign_source_228);
    }
    {
        PyObject *tmp_assign_source_229;
        tmp_assign_source_229 = mod_consts[101];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[353], tmp_assign_source_229);
    }
    {
        PyObject *tmp_assign_source_230;
        tmp_assign_source_230 = mod_consts[94];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[354], tmp_assign_source_230);
    }
    {
        PyObject *tmp_assign_source_231;
        tmp_assign_source_231 = mod_consts[96];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[355], tmp_assign_source_231);
    }
    {
        PyObject *tmp_assign_source_232;
        tmp_assign_source_232 = mod_consts[48];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[356], tmp_assign_source_232);
    }
    {
        PyObject *tmp_assign_source_233;
        tmp_assign_source_233 = mod_consts[99];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[357], tmp_assign_source_233);
    }
    {
        PyObject *tmp_assign_source_234;
        tmp_assign_source_234 = mod_consts[236];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[358], tmp_assign_source_234);
    }
    {
        PyObject *tmp_assign_source_235;
        tmp_assign_source_235 = mod_consts[238];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[359], tmp_assign_source_235);
    }
    {
        PyObject *tmp_assign_source_236;
        tmp_assign_source_236 = mod_consts[240];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[360], tmp_assign_source_236);
    }
    {
        PyObject *tmp_assign_source_237;
        tmp_assign_source_237 = mod_consts[242];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[361], tmp_assign_source_237);
    }
    {
        PyObject *tmp_assign_source_238;
        tmp_assign_source_238 = mod_consts[244];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[362], tmp_assign_source_238);
    }
    {
        PyObject *tmp_assign_source_239;
        tmp_assign_source_239 = mod_consts[246];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[363], tmp_assign_source_239);
    }
    {
        PyObject *tmp_assign_source_240;
        tmp_assign_source_240 = mod_consts[50];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[364], tmp_assign_source_240);
    }
    {
        PyObject *tmp_assign_source_241;
        tmp_assign_source_241 = mod_consts[249];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[365], tmp_assign_source_241);
    }
    {
        PyObject *tmp_assign_source_242;
        tmp_assign_source_242 = mod_consts[104];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[366], tmp_assign_source_242);
    }
    {
        PyObject *tmp_assign_source_243;
        tmp_assign_source_243 = mod_consts[367];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[368], tmp_assign_source_243);
    }
    {
        PyObject *tmp_assign_source_244;
        tmp_assign_source_244 = mod_consts[369];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[370], tmp_assign_source_244);
    }
    {
        PyObject *tmp_assign_source_245;
        tmp_assign_source_245 = mod_consts[106];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[371], tmp_assign_source_245);
    }
    {
        PyObject *tmp_assign_source_246;
        tmp_assign_source_246 = mod_consts[372];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[373], tmp_assign_source_246);
    }
    {
        PyObject *tmp_assign_source_247;
        tmp_assign_source_247 = mod_consts[374];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[375], tmp_assign_source_247);
    }
    {
        PyObject *tmp_assign_source_248;
        tmp_assign_source_248 = mod_consts[376];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[377], tmp_assign_source_248);
    }
    {
        PyObject *tmp_assign_source_249;
        tmp_assign_source_249 = mod_consts[378];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[379], tmp_assign_source_249);
    }
    {
        PyObject *tmp_assign_source_250;
        tmp_assign_source_250 = mod_consts[380];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[381], tmp_assign_source_250);
    }
    {
        PyObject *tmp_assign_source_251;
        tmp_assign_source_251 = mod_consts[382];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[383], tmp_assign_source_251);
    }
    {
        PyObject *tmp_assign_source_252;
        tmp_assign_source_252 = mod_consts[384];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[385], tmp_assign_source_252);
    }
    {
        PyObject *tmp_assign_source_253;
        tmp_assign_source_253 = mod_consts[78];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[386], tmp_assign_source_253);
    }
    {
        PyObject *tmp_assign_source_254;
        tmp_assign_source_254 = mod_consts[38];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[387], tmp_assign_source_254);
    }
    {
        PyObject *tmp_assign_source_255;
        tmp_assign_source_255 = mod_consts[41];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[388], tmp_assign_source_255);
    }
    {
        PyObject *tmp_assign_source_256;
        tmp_assign_source_256 = mod_consts[389];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[390], tmp_assign_source_256);
    }
    {
        PyObject *tmp_assign_source_257;
        tmp_assign_source_257 = mod_consts[78];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[391], tmp_assign_source_257);
    }
    {
        PyObject *tmp_assign_source_258;
        tmp_assign_source_258 = mod_consts[38];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[392], tmp_assign_source_258);
    }
    {
        PyObject *tmp_assign_source_259;
        tmp_assign_source_259 = mod_consts[41];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[393], tmp_assign_source_259);
    }
    {
        PyObject *tmp_assign_source_260;
        tmp_assign_source_260 = mod_consts[44];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[394], tmp_assign_source_260);
    }
    {
        PyObject *tmp_assign_source_261;
        tmp_assign_source_261 = mod_consts[48];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[395], tmp_assign_source_261);
    }
    {
        PyObject *tmp_assign_source_262;
        tmp_assign_source_262 = mod_consts[50];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[396], tmp_assign_source_262);
    }
    {
        PyObject *tmp_assign_source_263;
        tmp_assign_source_263 = mod_consts[52];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[397], tmp_assign_source_263);
    }
    {
        PyObject *tmp_assign_source_264;
        tmp_assign_source_264 = mod_consts[55];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[398], tmp_assign_source_264);
    }
    {
        PyObject *tmp_assign_source_265;
        tmp_assign_source_265 = mod_consts[57];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[399], tmp_assign_source_265);
    }
    {
        PyObject *tmp_assign_source_266;
        tmp_assign_source_266 = mod_consts[59];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[400], tmp_assign_source_266);
    }
    {
        PyObject *tmp_assign_source_267;
        tmp_assign_source_267 = mod_consts[38];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[401], tmp_assign_source_267);
    }
    {
        PyObject *tmp_assign_source_268;
        tmp_assign_source_268 = mod_consts[38];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[402], tmp_assign_source_268);
    }
    {
        PyObject *tmp_assign_source_269;
        tmp_assign_source_269 = mod_consts[41];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[403], tmp_assign_source_269);
    }
    {
        PyObject *tmp_assign_source_270;
        tmp_assign_source_270 = mod_consts[44];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[404], tmp_assign_source_270);
    }
    {
        PyObject *tmp_assign_source_271;
        tmp_assign_source_271 = mod_consts[48];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[405], tmp_assign_source_271);
    }
    {
        PyObject *tmp_assign_source_272;
        tmp_assign_source_272 = mod_consts[50];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[406], tmp_assign_source_272);
    }
    {
        PyObject *tmp_assign_source_273;
        tmp_assign_source_273 = mod_consts[52];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[407], tmp_assign_source_273);
    }
    {
        PyObject *tmp_assign_source_274;
        tmp_assign_source_274 = mod_consts[55];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[408], tmp_assign_source_274);
    }
    {
        PyObject *tmp_assign_source_275;
        tmp_assign_source_275 = mod_consts[57];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[409], tmp_assign_source_275);
    }
    {
        PyObject *tmp_assign_source_276;
        tmp_assign_source_276 = mod_consts[59];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[410], tmp_assign_source_276);
    }
    {
        PyObject *tmp_assign_source_277;
        tmp_assign_source_277 = mod_consts[117];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[411], tmp_assign_source_277);
    }
    {
        PyObject *tmp_assign_source_278;
        tmp_assign_source_278 = mod_consts[412];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[413], tmp_assign_source_278);
    }
    {
        PyObject *tmp_assign_source_279;
        tmp_assign_source_279 = mod_consts[414];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[415], tmp_assign_source_279);
    }
    {
        PyObject *tmp_assign_source_280;
        tmp_assign_source_280 = mod_consts[188];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[416], tmp_assign_source_280);
    }
    {
        PyObject *tmp_assign_source_281;
        tmp_assign_source_281 = mod_consts[190];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[417], tmp_assign_source_281);
    }
    {
        PyObject *tmp_assign_source_282;
        tmp_assign_source_282 = mod_consts[194];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[418], tmp_assign_source_282);
    }
    {
        PyObject *tmp_assign_source_283;
        tmp_assign_source_283 = mod_consts[265];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[419], tmp_assign_source_283);
    }
    {
        PyObject *tmp_assign_source_284;
        tmp_assign_source_284 = mod_consts[7];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[420], tmp_assign_source_284);
    }
    {
        PyObject *tmp_assign_source_285;
        tmp_assign_source_285 = mod_consts[9];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[421], tmp_assign_source_285);
    }
    {
        PyObject *tmp_assign_source_286;
        tmp_assign_source_286 = mod_consts[11];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[422], tmp_assign_source_286);
    }
    {
        PyObject *tmp_assign_source_287;
        tmp_assign_source_287 = mod_consts[13];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[423], tmp_assign_source_287);
    }
    {
        PyObject *tmp_assign_source_288;
        tmp_assign_source_288 = mod_consts[15];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[424], tmp_assign_source_288);
    }
    {
        PyObject *tmp_assign_source_289;
        tmp_assign_source_289 = mod_consts[425];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[426], tmp_assign_source_289);
    }
    {
        PyObject *tmp_assign_source_290;
        tmp_assign_source_290 = mod_consts[427];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[428], tmp_assign_source_290);
    }
    {
        PyObject *tmp_assign_source_291;
        tmp_assign_source_291 = mod_consts[429];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[430], tmp_assign_source_291);
    }
    {
        PyObject *tmp_assign_source_292;
        tmp_assign_source_292 = mod_consts[38];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[431], tmp_assign_source_292);
    }
    {
        PyObject *tmp_assign_source_293;
        tmp_assign_source_293 = mod_consts[41];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[432], tmp_assign_source_293);
    }
    {
        PyObject *tmp_assign_source_294;
        tmp_assign_source_294 = mod_consts[44];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[433], tmp_assign_source_294);
    }
    {
        PyObject *tmp_assign_source_295;
        tmp_assign_source_295 = mod_consts[48];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[434], tmp_assign_source_295);
    }
    {
        PyObject *tmp_assign_source_296;
        tmp_assign_source_296 = mod_consts[50];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[435], tmp_assign_source_296);
    }
    {
        PyObject *tmp_assign_source_297;
        tmp_assign_source_297 = mod_consts[52];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[436], tmp_assign_source_297);
    }
    {
        PyObject *tmp_assign_source_298;
        tmp_assign_source_298 = mod_consts[55];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[437], tmp_assign_source_298);
    }
    {
        PyObject *tmp_assign_source_299;
        tmp_assign_source_299 = mod_consts[57];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[438], tmp_assign_source_299);
    }
    {
        PyObject *tmp_assign_source_300;
        tmp_assign_source_300 = mod_consts[59];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[439], tmp_assign_source_300);
    }
    {
        PyObject *tmp_assign_source_301;
        tmp_assign_source_301 = mod_consts[117];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[440], tmp_assign_source_301);
    }
    {
        PyObject *tmp_assign_source_302;
        tmp_assign_source_302 = mod_consts[412];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[441], tmp_assign_source_302);
    }
    {
        PyObject *tmp_assign_source_303;
        tmp_assign_source_303 = mod_consts[414];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[442], tmp_assign_source_303);
    }
    {
        PyObject *tmp_assign_source_304;
        tmp_assign_source_304 = mod_consts[38];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[443], tmp_assign_source_304);
    }
    {
        PyObject *tmp_assign_source_305;
        tmp_assign_source_305 = mod_consts[41];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[444], tmp_assign_source_305);
    }
    {
        PyObject *tmp_assign_source_306;
        tmp_assign_source_306 = mod_consts[44];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[445], tmp_assign_source_306);
    }
    {
        PyObject *tmp_assign_source_307;
        tmp_assign_source_307 = mod_consts[48];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[446], tmp_assign_source_307);
    }
    {
        PyObject *tmp_assign_source_308;
        tmp_assign_source_308 = mod_consts[50];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[447], tmp_assign_source_308);
    }
    {
        PyObject *tmp_assign_source_309;
        tmp_assign_source_309 = mod_consts[52];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[448], tmp_assign_source_309);
    }
    {
        PyObject *tmp_assign_source_310;
        tmp_assign_source_310 = mod_consts[55];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[449], tmp_assign_source_310);
    }
    {
        PyObject *tmp_assign_source_311;
        tmp_assign_source_311 = mod_consts[38];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[450], tmp_assign_source_311);
    }
    {
        PyObject *tmp_assign_source_312;
        tmp_assign_source_312 = mod_consts[41];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[451], tmp_assign_source_312);
    }
    {
        PyObject *tmp_assign_source_313;
        tmp_assign_source_313 = mod_consts[38];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[452], tmp_assign_source_313);
    }
    {
        PyObject *tmp_assign_source_314;
        tmp_assign_source_314 = mod_consts[41];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[453], tmp_assign_source_314);
    }
    {
        PyObject *tmp_assign_source_315;
        tmp_assign_source_315 = mod_consts[44];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[454], tmp_assign_source_315);
    }
    {
        PyObject *tmp_assign_source_316;
        tmp_assign_source_316 = mod_consts[48];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[455], tmp_assign_source_316);
    }
    {
        PyObject *tmp_assign_source_317;
        tmp_assign_source_317 = mod_consts[50];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[456], tmp_assign_source_317);
    }
    {
        PyObject *tmp_assign_source_318;
        tmp_assign_source_318 = mod_consts[38];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[457], tmp_assign_source_318);
    }
    {
        PyObject *tmp_assign_source_319;
        tmp_assign_source_319 = mod_consts[41];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[458], tmp_assign_source_319);
    }
    {
        PyObject *tmp_assign_source_320;
        tmp_assign_source_320 = mod_consts[44];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[459], tmp_assign_source_320);
    }
    {
        PyObject *tmp_assign_source_321;
        tmp_assign_source_321 = mod_consts[48];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[460], tmp_assign_source_321);
    }
    {
        PyObject *tmp_assign_source_322;
        tmp_assign_source_322 = mod_consts[38];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[461], tmp_assign_source_322);
    }
    {
        PyObject *tmp_assign_source_323;
        tmp_assign_source_323 = mod_consts[44];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[462], tmp_assign_source_323);
    }
    {
        PyObject *tmp_assign_source_324;
        tmp_assign_source_324 = mod_consts[50];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[463], tmp_assign_source_324);
    }
    {
        PyObject *tmp_assign_source_325;
        tmp_assign_source_325 = mod_consts[52];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[464], tmp_assign_source_325);
    }
    {
        PyObject *tmp_assign_source_326;
        tmp_assign_source_326 = mod_consts[38];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[465], tmp_assign_source_326);
    }
    {
        PyObject *tmp_assign_source_327;
        tmp_assign_source_327 = mod_consts[41];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[466], tmp_assign_source_327);
    }
    {
        PyObject *tmp_assign_source_328;
        tmp_assign_source_328 = mod_consts[44];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[467], tmp_assign_source_328);
    }
    {
        PyObject *tmp_assign_source_329;
        tmp_assign_source_329 = mod_consts[48];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[468], tmp_assign_source_329);
    }
    {
        PyObject *tmp_assign_source_330;
        tmp_assign_source_330 = mod_consts[38];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[469], tmp_assign_source_330);
    }
    {
        PyObject *tmp_assign_source_331;
        tmp_assign_source_331 = mod_consts[41];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[470], tmp_assign_source_331);
    }
    {
        PyObject *tmp_assign_source_332;
        tmp_assign_source_332 = mod_consts[44];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[471], tmp_assign_source_332);
    }
    {
        PyObject *tmp_assign_source_333;
        tmp_assign_source_333 = mod_consts[48];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[472], tmp_assign_source_333);
    }
    {
        PyObject *tmp_assign_source_334;
        tmp_assign_source_334 = mod_consts[50];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[473], tmp_assign_source_334);
    }
    {
        PyObject *tmp_assign_source_335;
        tmp_assign_source_335 = mod_consts[52];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[474], tmp_assign_source_335);
    }
    {
        PyObject *tmp_assign_source_336;
        tmp_assign_source_336 = mod_consts[78];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[475], tmp_assign_source_336);
    }
    {
        PyObject *tmp_assign_source_337;
        tmp_assign_source_337 = mod_consts[38];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[476], tmp_assign_source_337);
    }
    {
        PyObject *tmp_assign_source_338;
        tmp_assign_source_338 = mod_consts[41];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[477], tmp_assign_source_338);
    }
    {
        PyObject *tmp_assign_source_339;
        tmp_assign_source_339 = mod_consts[44];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[478], tmp_assign_source_339);
    }
    {
        PyObject *tmp_assign_source_340;
        tmp_assign_source_340 = mod_consts[48];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[479], tmp_assign_source_340);
    }
    {
        PyObject *tmp_assign_source_341;
        tmp_assign_source_341 = mod_consts[50];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[480], tmp_assign_source_341);
    }
    {
        PyObject *tmp_assign_source_342;
        tmp_assign_source_342 = mod_consts[52];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[481], tmp_assign_source_342);
    }
    {
        PyObject *tmp_assign_source_343;
        tmp_assign_source_343 = mod_consts[55];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[482], tmp_assign_source_343);
    }
    {
        PyObject *tmp_assign_source_344;
        tmp_assign_source_344 = mod_consts[57];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[483], tmp_assign_source_344);
    }
    {
        PyObject *tmp_assign_source_345;
        tmp_assign_source_345 = mod_consts[59];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[484], tmp_assign_source_345);
    }
    {
        PyObject *tmp_assign_source_346;
        tmp_assign_source_346 = mod_consts[117];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[485], tmp_assign_source_346);
    }
    {
        PyObject *tmp_assign_source_347;
        tmp_assign_source_347 = mod_consts[486];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[487], tmp_assign_source_347);
    }
    {
        PyObject *tmp_assign_source_348;
        tmp_assign_source_348 = mod_consts[48];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[488], tmp_assign_source_348);
    }
    {
        PyObject *tmp_assign_source_349;
        tmp_assign_source_349 = mod_consts[30];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[489], tmp_assign_source_349);
    }
    {
        PyObject *tmp_assign_source_350;
        tmp_assign_source_350 = mod_consts[38];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[490], tmp_assign_source_350);
    }
    {
        PyObject *tmp_assign_source_351;
        tmp_assign_source_351 = mod_consts[41];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[491], tmp_assign_source_351);
    }
    {
        PyObject *tmp_assign_source_352;
        tmp_assign_source_352 = mod_consts[44];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[492], tmp_assign_source_352);
    }
    {
        PyObject *tmp_assign_source_353;
        tmp_assign_source_353 = mod_consts[48];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[493], tmp_assign_source_353);
    }
    {
        PyObject *tmp_assign_source_354;
        tmp_assign_source_354 = mod_consts[50];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[494], tmp_assign_source_354);
    }
    {
        PyObject *tmp_assign_source_355;
        tmp_assign_source_355 = mod_consts[52];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[495], tmp_assign_source_355);
    }
    {
        PyObject *tmp_assign_source_356;
        tmp_assign_source_356 = mod_consts[55];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[496], tmp_assign_source_356);
    }
    {
        PyObject *tmp_assign_source_357;
        tmp_assign_source_357 = mod_consts[57];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[497], tmp_assign_source_357);
    }
    {
        PyObject *tmp_assign_source_358;
        tmp_assign_source_358 = mod_consts[59];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[498], tmp_assign_source_358);
    }
    {
        PyObject *tmp_assign_source_359;
        tmp_assign_source_359 = mod_consts[117];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[499], tmp_assign_source_359);
    }
    {
        PyObject *tmp_assign_source_360;
        tmp_assign_source_360 = mod_consts[412];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[500], tmp_assign_source_360);
    }
    {
        PyObject *tmp_assign_source_361;
        tmp_assign_source_361 = mod_consts[41];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[501], tmp_assign_source_361);
    }
    {
        PyObject *tmp_assign_source_362;
        tmp_assign_source_362 = mod_consts[38];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[502], tmp_assign_source_362);
    }
    {
        PyObject *tmp_assign_source_363;
        tmp_assign_source_363 = mod_consts[41];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[503], tmp_assign_source_363);
    }
    {
        PyObject *tmp_assign_source_364;
        tmp_assign_source_364 = mod_consts[38];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[504], tmp_assign_source_364);
    }
    {
        PyObject *tmp_assign_source_365;
        tmp_assign_source_365 = mod_consts[41];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[505], tmp_assign_source_365);
    }
    {
        PyObject *tmp_assign_source_366;
        tmp_assign_source_366 = mod_consts[44];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[506], tmp_assign_source_366);
    }
    {
        PyObject *tmp_assign_source_367;
        tmp_assign_source_367 = mod_consts[38];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[507], tmp_assign_source_367);
    }
    {
        PyObject *tmp_assign_source_368;
        tmp_assign_source_368 = mod_consts[41];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[508], tmp_assign_source_368);
    }
    {
        PyObject *tmp_assign_source_369;
        tmp_assign_source_369 = mod_consts[44];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[509], tmp_assign_source_369);
    }
    {
        PyObject *tmp_assign_source_370;
        tmp_assign_source_370 = mod_consts[510];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[511], tmp_assign_source_370);
    }
    {
        PyObject *tmp_assign_source_371;
        tmp_assign_source_371 = mod_consts[512];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[513], tmp_assign_source_371);
    }
    {
        PyObject *tmp_assign_source_372;
        tmp_assign_source_372 = mod_consts[514];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[515], tmp_assign_source_372);
    }
    {
        PyObject *tmp_assign_source_373;
        tmp_assign_source_373 = mod_consts[516];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[517], tmp_assign_source_373);
    }
    {
        PyObject *tmp_assign_source_374;
        tmp_assign_source_374 = mod_consts[518];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[519], tmp_assign_source_374);
    }
    {
        PyObject *tmp_assign_source_375;
        tmp_assign_source_375 = mod_consts[520];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[521], tmp_assign_source_375);
    }
    {
        PyObject *tmp_assign_source_376;
        tmp_assign_source_376 = mod_consts[522];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[523], tmp_assign_source_376);
    }
    {
        PyObject *tmp_assign_source_377;
        tmp_assign_source_377 = mod_consts[524];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[525], tmp_assign_source_377);
    }
    {
        PyObject *tmp_assign_source_378;
        tmp_assign_source_378 = mod_consts[526];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[527], tmp_assign_source_378);
    }
    {
        PyObject *tmp_assign_source_379;
        tmp_assign_source_379 = mod_consts[528];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[529], tmp_assign_source_379);
    }
    {
        PyObject *tmp_assign_source_380;
        tmp_assign_source_380 = mod_consts[530];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[531], tmp_assign_source_380);
    }
    {
        PyObject *tmp_assign_source_381;
        tmp_assign_source_381 = mod_consts[532];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[533], tmp_assign_source_381);
    }
    {
        PyObject *tmp_assign_source_382;
        tmp_assign_source_382 = mod_consts[534];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[535], tmp_assign_source_382);
    }
    {
        PyObject *tmp_assign_source_383;
        tmp_assign_source_383 = mod_consts[536];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[537], tmp_assign_source_383);
    }
    {
        PyObject *tmp_assign_source_384;
        tmp_assign_source_384 = mod_consts[538];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[539], tmp_assign_source_384);
    }
    {
        PyObject *tmp_assign_source_385;
        tmp_assign_source_385 = mod_consts[540];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[541], tmp_assign_source_385);
    }
    {
        PyObject *tmp_assign_source_386;
        tmp_assign_source_386 = mod_consts[542];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[543], tmp_assign_source_386);
    }
    {
        PyObject *tmp_assign_source_387;
        tmp_assign_source_387 = mod_consts[544];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[545], tmp_assign_source_387);
    }
    {
        PyObject *tmp_assign_source_388;
        tmp_assign_source_388 = mod_consts[546];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[547], tmp_assign_source_388);
    }
    {
        PyObject *tmp_assign_source_389;
        tmp_assign_source_389 = mod_consts[548];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[549], tmp_assign_source_389);
    }
    {
        PyObject *tmp_assign_source_390;
        tmp_assign_source_390 = mod_consts[550];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[551], tmp_assign_source_390);
    }
    {
        PyObject *tmp_assign_source_391;
        tmp_assign_source_391 = mod_consts[552];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[553], tmp_assign_source_391);
    }
    {
        PyObject *tmp_assign_source_392;
        tmp_assign_source_392 = mod_consts[78];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[554], tmp_assign_source_392);
    }
    {
        PyObject *tmp_assign_source_393;
        tmp_assign_source_393 = mod_consts[38];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[555], tmp_assign_source_393);
    }
    {
        PyObject *tmp_assign_source_394;
        tmp_assign_source_394 = mod_consts[41];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[556], tmp_assign_source_394);
    }
    {
        PyObject *tmp_assign_source_395;
        tmp_assign_source_395 = mod_consts[44];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[557], tmp_assign_source_395);
    }
    {
        PyObject *tmp_assign_source_396;
        tmp_assign_source_396 = mod_consts[48];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[558], tmp_assign_source_396);
    }
    {
        PyObject *tmp_assign_source_397;
        tmp_assign_source_397 = mod_consts[50];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[559], tmp_assign_source_397);
    }
    {
        PyObject *tmp_assign_source_398;
        tmp_assign_source_398 = mod_consts[52];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[560], tmp_assign_source_398);
    }
    {
        PyObject *tmp_assign_source_399;
        tmp_assign_source_399 = mod_consts[55];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[561], tmp_assign_source_399);
    }
    {
        PyObject *tmp_assign_source_400;
        tmp_assign_source_400 = mod_consts[78];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[562], tmp_assign_source_400);
    }
    {
        PyObject *tmp_assign_source_401;
        tmp_assign_source_401 = mod_consts[38];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[563], tmp_assign_source_401);
    }
    {
        PyObject *tmp_assign_source_402;
        tmp_assign_source_402 = mod_consts[41];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[564], tmp_assign_source_402);
    }
    {
        PyObject *tmp_assign_source_403;
        tmp_assign_source_403 = mod_consts[78];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[565], tmp_assign_source_403);
    }
    {
        PyObject *tmp_assign_source_404;
        tmp_assign_source_404 = mod_consts[38];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[566], tmp_assign_source_404);
    }
    {
        PyObject *tmp_assign_source_405;
        tmp_assign_source_405 = mod_consts[41];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[567], tmp_assign_source_405);
    }
    {
        PyObject *tmp_assign_source_406;
        tmp_assign_source_406 = mod_consts[85];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[568], tmp_assign_source_406);
    }
    {
        PyObject *tmp_assign_source_407;
        tmp_assign_source_407 = mod_consts[44];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[569], tmp_assign_source_407);
    }
    {
        PyObject *tmp_assign_source_408;
        tmp_assign_source_408 = mod_consts[78];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[570], tmp_assign_source_408);
    }
    {
        PyObject *tmp_assign_source_409;
        tmp_assign_source_409 = mod_consts[38];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[571], tmp_assign_source_409);
    }
    {
        PyObject *tmp_assign_source_410;
        tmp_assign_source_410 = mod_consts[41];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[572], tmp_assign_source_410);
    }
    {
        PyObject *tmp_assign_source_411;
        tmp_assign_source_411 = mod_consts[85];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[573], tmp_assign_source_411);
    }
    {
        PyObject *tmp_assign_source_412;
        tmp_assign_source_412 = mod_consts[44];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[574], tmp_assign_source_412);
    }
    {
        PyObject *tmp_assign_source_413;
        tmp_assign_source_413 = mod_consts[38];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[575], tmp_assign_source_413);
    }
    {
        PyObject *tmp_assign_source_414;
        tmp_assign_source_414 = mod_consts[41];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[576], tmp_assign_source_414);
    }
    {
        PyObject *tmp_assign_source_415;
        tmp_assign_source_415 = mod_consts[38];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[577], tmp_assign_source_415);
    }
    {
        PyObject *tmp_assign_source_416;
        tmp_assign_source_416 = mod_consts[38];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[578], tmp_assign_source_416);
    }
    {
        PyObject *tmp_assign_source_417;
        tmp_assign_source_417 = mod_consts[50];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[579], tmp_assign_source_417);
    }
    {
        PyObject *tmp_assign_source_418;
        tmp_assign_source_418 = mod_consts[52];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[580], tmp_assign_source_418);
    }
    {
        PyObject *tmp_assign_source_419;
        tmp_assign_source_419 = mod_consts[55];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[581], tmp_assign_source_419);
    }
    {
        PyObject *tmp_assign_source_420;
        tmp_assign_source_420 = mod_consts[57];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[582], tmp_assign_source_420);
    }
    {
        PyObject *tmp_assign_source_421;
        tmp_assign_source_421 = mod_consts[117];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[583], tmp_assign_source_421);
    }
    {
        PyObject *tmp_assign_source_422;
        tmp_assign_source_422 = mod_consts[414];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[584], tmp_assign_source_422);
    }
    {
        PyObject *tmp_assign_source_423;
        tmp_assign_source_423 = mod_consts[7];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[585], tmp_assign_source_423);
    }
    {
        PyObject *tmp_assign_source_424;
        tmp_assign_source_424 = mod_consts[9];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[586], tmp_assign_source_424);
    }
    {
        PyObject *tmp_assign_source_425;
        tmp_assign_source_425 = mod_consts[425];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[587], tmp_assign_source_425);
    }
    {
        PyObject *tmp_assign_source_426;
        tmp_assign_source_426 = mod_consts[26];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[588], tmp_assign_source_426);
    }
    {
        PyObject *tmp_assign_source_427;
        tmp_assign_source_427 = mod_consts[589];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[590], tmp_assign_source_427);
    }
    {
        PyObject *tmp_assign_source_428;
        tmp_assign_source_428 = mod_consts[591];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[592], tmp_assign_source_428);
    }
    {
        PyObject *tmp_assign_source_429;
        tmp_assign_source_429 = mod_consts[36];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[593], tmp_assign_source_429);
    }
    {
        PyObject *tmp_assign_source_430;
        tmp_assign_source_430 = mod_consts[34];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[594], tmp_assign_source_430);
    }
    {
        PyObject *tmp_assign_source_431;
        tmp_assign_source_431 = mod_consts[32];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[595], tmp_assign_source_431);
    }
    {
        PyObject *tmp_assign_source_432;
        PyObject *tmp_left_name_27;
        PyObject *tmp_left_name_28;
        PyObject *tmp_left_name_29;
        PyObject *tmp_left_name_30;
        PyObject *tmp_left_name_31;
        PyObject *tmp_left_name_32;
        PyObject *tmp_right_name_27;
        PyObject *tmp_right_name_28;
        PyObject *tmp_right_name_29;
        PyObject *tmp_right_name_30;
        PyObject *tmp_right_name_31;
        PyObject *tmp_right_name_32;
        tmp_left_name_32 = GET_STRING_DICT_VALUE(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[580]);

        if (unlikely(tmp_left_name_32 == NULL)) {
            tmp_left_name_32 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[580]);
        }

        assert(!(tmp_left_name_32 == NULL));
        tmp_right_name_27 = GET_STRING_DICT_VALUE(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[581]);

        if (unlikely(tmp_right_name_27 == NULL)) {
            tmp_right_name_27 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[581]);
        }

        assert(!(tmp_right_name_27 == NULL));
        tmp_left_name_31 = BINARY_OPERATION_BITOR_OBJECT_LONG_LONG(tmp_left_name_32, tmp_right_name_27);
        assert(!(tmp_left_name_31 == NULL));
        tmp_right_name_28 = GET_STRING_DICT_VALUE(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[583]);

        if (unlikely(tmp_right_name_28 == NULL)) {
            tmp_right_name_28 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[583]);
        }

        assert(!(tmp_right_name_28 == NULL));
        tmp_left_name_30 = BINARY_OPERATION_BITOR_OBJECT_LONG_LONG(tmp_left_name_31, tmp_right_name_28);
        Py_DECREF(tmp_left_name_31);
        assert(!(tmp_left_name_30 == NULL));
        tmp_right_name_29 = GET_STRING_DICT_VALUE(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[590]);

        if (unlikely(tmp_right_name_29 == NULL)) {
            tmp_right_name_29 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[590]);
        }

        assert(!(tmp_right_name_29 == NULL));
        tmp_left_name_29 = BINARY_OPERATION_BITOR_OBJECT_LONG_LONG(tmp_left_name_30, tmp_right_name_29);
        Py_DECREF(tmp_left_name_30);
        assert(!(tmp_left_name_29 == NULL));
        tmp_right_name_30 = GET_STRING_DICT_VALUE(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[592]);

        if (unlikely(tmp_right_name_30 == NULL)) {
            tmp_right_name_30 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[592]);
        }

        assert(!(tmp_right_name_30 == NULL));
        tmp_left_name_28 = BINARY_OPERATION_BITOR_OBJECT_LONG_LONG(tmp_left_name_29, tmp_right_name_30);
        Py_DECREF(tmp_left_name_29);
        assert(!(tmp_left_name_28 == NULL));
        tmp_right_name_31 = GET_STRING_DICT_VALUE(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[593]);

        if (unlikely(tmp_right_name_31 == NULL)) {
            tmp_right_name_31 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[593]);
        }

        assert(!(tmp_right_name_31 == NULL));
        tmp_left_name_27 = BINARY_OPERATION_BITOR_OBJECT_LONG_LONG(tmp_left_name_28, tmp_right_name_31);
        Py_DECREF(tmp_left_name_28);
        assert(!(tmp_left_name_27 == NULL));
        tmp_right_name_32 = GET_STRING_DICT_VALUE(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[594]);

        if (unlikely(tmp_right_name_32 == NULL)) {
            tmp_right_name_32 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[594]);
        }

        assert(!(tmp_right_name_32 == NULL));
        tmp_assign_source_432 = BINARY_OPERATION_BITOR_OBJECT_LONG_LONG(tmp_left_name_27, tmp_right_name_32);
        Py_DECREF(tmp_left_name_27);
        assert(!(tmp_assign_source_432 == NULL));
        UPDATE_STRING_DICT1(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[596], tmp_assign_source_432);
    }
    {
        PyObject *tmp_assign_source_433;
        tmp_assign_source_433 = mod_consts[78];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[597], tmp_assign_source_433);
    }
    {
        PyObject *tmp_assign_source_434;
        tmp_assign_source_434 = mod_consts[38];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[598], tmp_assign_source_434);
    }
    {
        PyObject *tmp_assign_source_435;
        tmp_assign_source_435 = mod_consts[41];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[599], tmp_assign_source_435);
    }
    {
        PyObject *tmp_assign_source_436;
        tmp_assign_source_436 = mod_consts[85];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[600], tmp_assign_source_436);
    }
    {
        PyObject *tmp_assign_source_437;
        tmp_assign_source_437 = mod_consts[94];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[601], tmp_assign_source_437);
    }
    {
        PyObject *tmp_assign_source_438;
        tmp_assign_source_438 = mod_consts[96];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[602], tmp_assign_source_438);
    }
    {
        PyObject *tmp_assign_source_439;
        tmp_assign_source_439 = mod_consts[48];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[603], tmp_assign_source_439);
    }
    {
        PyObject *tmp_assign_source_440;
        tmp_assign_source_440 = mod_consts[99];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[604], tmp_assign_source_440);
    }
    {
        PyObject *tmp_assign_source_441;
        tmp_assign_source_441 = mod_consts[236];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[605], tmp_assign_source_441);
    }
    {
        PyObject *tmp_assign_source_442;
        tmp_assign_source_442 = mod_consts[238];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[606], tmp_assign_source_442);
    }
    {
        PyObject *tmp_assign_source_443;
        tmp_assign_source_443 = mod_consts[240];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[607], tmp_assign_source_443);
    }
    {
        PyObject *tmp_assign_source_444;
        tmp_assign_source_444 = GET_STRING_DICT_VALUE(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[603]);

        if (unlikely(tmp_assign_source_444 == NULL)) {
            tmp_assign_source_444 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[603]);
        }

        assert(!(tmp_assign_source_444 == NULL));
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[608], tmp_assign_source_444);
    }
    {
        PyObject *tmp_assign_source_445;
        tmp_assign_source_445 = GET_STRING_DICT_VALUE(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[603]);

        if (unlikely(tmp_assign_source_445 == NULL)) {
            tmp_assign_source_445 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[603]);
        }

        assert(!(tmp_assign_source_445 == NULL));
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[609], tmp_assign_source_445);
    }
    {
        PyObject *tmp_assign_source_446;
        tmp_assign_source_446 = mod_consts[78];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[610], tmp_assign_source_446);
    }
    {
        PyObject *tmp_assign_source_447;
        tmp_assign_source_447 = mod_consts[38];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[611], tmp_assign_source_447);
    }
    {
        PyObject *tmp_assign_source_448;
        tmp_assign_source_448 = mod_consts[41];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[612], tmp_assign_source_448);
    }
    {
        PyObject *tmp_assign_source_449;
        tmp_assign_source_449 = mod_consts[44];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[613], tmp_assign_source_449);
    }
    {
        PyObject *tmp_assign_source_450;
        tmp_assign_source_450 = mod_consts[48];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[614], tmp_assign_source_450);
    }
    {
        PyObject *tmp_assign_source_451;
        tmp_assign_source_451 = mod_consts[78];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[615], tmp_assign_source_451);
    }
    {
        PyObject *tmp_assign_source_452;
        tmp_assign_source_452 = mod_consts[38];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[616], tmp_assign_source_452);
    }
    {
        PyObject *tmp_assign_source_453;
        tmp_assign_source_453 = mod_consts[41];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[617], tmp_assign_source_453);
    }
    {
        PyObject *tmp_assign_source_454;
        tmp_assign_source_454 = mod_consts[85];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[618], tmp_assign_source_454);
    }
    {
        PyObject *tmp_assign_source_455;
        tmp_assign_source_455 = mod_consts[44];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[619], tmp_assign_source_455);
    }
    {
        PyObject *tmp_assign_source_456;
        tmp_assign_source_456 = mod_consts[101];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[620], tmp_assign_source_456);
    }
    {
        PyObject *tmp_assign_source_457;
        tmp_assign_source_457 = mod_consts[94];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[621], tmp_assign_source_457);
    }
    {
        PyObject *tmp_assign_source_458;
        tmp_assign_source_458 = mod_consts[96];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[622], tmp_assign_source_458);
    }
    {
        PyObject *tmp_assign_source_459;
        tmp_assign_source_459 = mod_consts[78];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[623], tmp_assign_source_459);
    }
    {
        PyObject *tmp_assign_source_460;
        tmp_assign_source_460 = mod_consts[38];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[624], tmp_assign_source_460);
    }
    {
        PyObject *tmp_assign_source_461;
        tmp_assign_source_461 = mod_consts[41];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[625], tmp_assign_source_461);
    }
    {
        PyObject *tmp_assign_source_462;
        tmp_assign_source_462 = mod_consts[85];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[626], tmp_assign_source_462);
    }
    {
        PyObject *tmp_assign_source_463;
        tmp_assign_source_463 = mod_consts[44];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[627], tmp_assign_source_463);
    }
    {
        PyObject *tmp_assign_source_464;
        tmp_assign_source_464 = mod_consts[101];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[628], tmp_assign_source_464);
    }
    {
        PyObject *tmp_assign_source_465;
        tmp_assign_source_465 = mod_consts[78];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[629], tmp_assign_source_465);
    }
    {
        PyObject *tmp_assign_source_466;
        tmp_assign_source_466 = mod_consts[38];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[630], tmp_assign_source_466);
    }
    {
        PyObject *tmp_assign_source_467;
        tmp_assign_source_467 = mod_consts[41];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[631], tmp_assign_source_467);
    }
    {
        PyObject *tmp_assign_source_468;
        tmp_assign_source_468 = mod_consts[38];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[632], tmp_assign_source_468);
    }
    {
        PyObject *tmp_assign_source_469;
        tmp_assign_source_469 = mod_consts[50];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[633], tmp_assign_source_469);
    }
    {
        PyObject *tmp_assign_source_470;
        tmp_assign_source_470 = mod_consts[52];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[634], tmp_assign_source_470);
    }
    {
        PyObject *tmp_assign_source_471;
        tmp_assign_source_471 = mod_consts[55];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[635], tmp_assign_source_471);
    }
    {
        PyObject *tmp_assign_source_472;
        tmp_assign_source_472 = mod_consts[57];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[636], tmp_assign_source_472);
    }
    {
        PyObject *tmp_assign_source_473;
        tmp_assign_source_473 = mod_consts[59];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[637], tmp_assign_source_473);
    }
    {
        PyObject *tmp_assign_source_474;
        tmp_assign_source_474 = mod_consts[117];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[638], tmp_assign_source_474);
    }
    {
        PyObject *tmp_assign_source_475;
        tmp_assign_source_475 = mod_consts[412];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[639], tmp_assign_source_475);
    }
    {
        PyObject *tmp_assign_source_476;
        tmp_assign_source_476 = mod_consts[414];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[640], tmp_assign_source_476);
    }
    {
        PyObject *tmp_assign_source_477;
        tmp_assign_source_477 = mod_consts[188];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[641], tmp_assign_source_477);
    }
    {
        PyObject *tmp_assign_source_478;
        tmp_assign_source_478 = mod_consts[190];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[642], tmp_assign_source_478);
    }
    {
        PyObject *tmp_assign_source_479;
        tmp_assign_source_479 = mod_consts[194];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[643], tmp_assign_source_479);
    }
    {
        PyObject *tmp_assign_source_480;
        tmp_assign_source_480 = mod_consts[265];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[644], tmp_assign_source_480);
    }
    {
        PyObject *tmp_assign_source_481;
        tmp_assign_source_481 = mod_consts[7];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[645], tmp_assign_source_481);
    }
    {
        PyObject *tmp_assign_source_482;
        tmp_assign_source_482 = mod_consts[9];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[646], tmp_assign_source_482);
    }
    {
        PyObject *tmp_assign_source_483;
        tmp_assign_source_483 = mod_consts[32];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[647], tmp_assign_source_483);
    }
    {
        PyObject *tmp_assign_source_484;
        tmp_assign_source_484 = mod_consts[30];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[648], tmp_assign_source_484);
    }
    {
        PyObject *tmp_assign_source_485;
        PyObject *tmp_left_name_33;
        PyObject *tmp_left_name_34;
        PyObject *tmp_left_name_35;
        PyObject *tmp_left_name_36;
        PyObject *tmp_left_name_37;
        PyObject *tmp_left_name_38;
        PyObject *tmp_left_name_39;
        PyObject *tmp_left_name_40;
        PyObject *tmp_left_name_41;
        PyObject *tmp_left_name_42;
        PyObject *tmp_left_name_43;
        PyObject *tmp_left_name_44;
        PyObject *tmp_left_name_45;
        PyObject *tmp_left_name_46;
        PyObject *tmp_left_name_47;
        PyObject *tmp_left_name_48;
        PyObject *tmp_right_name_33;
        PyObject *tmp_right_name_34;
        PyObject *tmp_right_name_35;
        PyObject *tmp_right_name_36;
        PyObject *tmp_right_name_37;
        PyObject *tmp_right_name_38;
        PyObject *tmp_right_name_39;
        PyObject *tmp_right_name_40;
        PyObject *tmp_right_name_41;
        PyObject *tmp_right_name_42;
        PyObject *tmp_right_name_43;
        PyObject *tmp_right_name_44;
        PyObject *tmp_right_name_45;
        PyObject *tmp_right_name_46;
        PyObject *tmp_right_name_47;
        PyObject *tmp_right_name_48;
        tmp_left_name_48 = GET_STRING_DICT_VALUE(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[632]);

        if (unlikely(tmp_left_name_48 == NULL)) {
            tmp_left_name_48 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[632]);
        }

        assert(!(tmp_left_name_48 == NULL));
        tmp_right_name_33 = GET_STRING_DICT_VALUE(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[633]);

        if (unlikely(tmp_right_name_33 == NULL)) {
            tmp_right_name_33 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[633]);
        }

        assert(!(tmp_right_name_33 == NULL));
        tmp_left_name_47 = BINARY_OPERATION_BITOR_OBJECT_LONG_LONG(tmp_left_name_48, tmp_right_name_33);
        assert(!(tmp_left_name_47 == NULL));
        tmp_right_name_34 = GET_STRING_DICT_VALUE(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[634]);

        if (unlikely(tmp_right_name_34 == NULL)) {
            tmp_right_name_34 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[634]);
        }

        assert(!(tmp_right_name_34 == NULL));
        tmp_left_name_46 = BINARY_OPERATION_BITOR_OBJECT_LONG_LONG(tmp_left_name_47, tmp_right_name_34);
        Py_DECREF(tmp_left_name_47);
        assert(!(tmp_left_name_46 == NULL));
        tmp_right_name_35 = GET_STRING_DICT_VALUE(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[635]);

        if (unlikely(tmp_right_name_35 == NULL)) {
            tmp_right_name_35 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[635]);
        }

        assert(!(tmp_right_name_35 == NULL));
        tmp_left_name_45 = BINARY_OPERATION_BITOR_OBJECT_LONG_LONG(tmp_left_name_46, tmp_right_name_35);
        Py_DECREF(tmp_left_name_46);
        assert(!(tmp_left_name_45 == NULL));
        tmp_right_name_36 = GET_STRING_DICT_VALUE(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[636]);

        if (unlikely(tmp_right_name_36 == NULL)) {
            tmp_right_name_36 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[636]);
        }

        assert(!(tmp_right_name_36 == NULL));
        tmp_left_name_44 = BINARY_OPERATION_BITOR_OBJECT_LONG_LONG(tmp_left_name_45, tmp_right_name_36);
        Py_DECREF(tmp_left_name_45);
        assert(!(tmp_left_name_44 == NULL));
        tmp_right_name_37 = GET_STRING_DICT_VALUE(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[637]);

        if (unlikely(tmp_right_name_37 == NULL)) {
            tmp_right_name_37 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[637]);
        }

        assert(!(tmp_right_name_37 == NULL));
        tmp_left_name_43 = BINARY_OPERATION_BITOR_OBJECT_LONG_LONG(tmp_left_name_44, tmp_right_name_37);
        Py_DECREF(tmp_left_name_44);
        assert(!(tmp_left_name_43 == NULL));
        tmp_right_name_38 = GET_STRING_DICT_VALUE(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[638]);

        if (unlikely(tmp_right_name_38 == NULL)) {
            tmp_right_name_38 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[638]);
        }

        assert(!(tmp_right_name_38 == NULL));
        tmp_left_name_42 = BINARY_OPERATION_BITOR_OBJECT_LONG_LONG(tmp_left_name_43, tmp_right_name_38);
        Py_DECREF(tmp_left_name_43);
        assert(!(tmp_left_name_42 == NULL));
        tmp_right_name_39 = GET_STRING_DICT_VALUE(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[639]);

        if (unlikely(tmp_right_name_39 == NULL)) {
            tmp_right_name_39 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[639]);
        }

        assert(!(tmp_right_name_39 == NULL));
        tmp_left_name_41 = BINARY_OPERATION_BITOR_OBJECT_LONG_LONG(tmp_left_name_42, tmp_right_name_39);
        Py_DECREF(tmp_left_name_42);
        assert(!(tmp_left_name_41 == NULL));
        tmp_right_name_40 = GET_STRING_DICT_VALUE(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[640]);

        if (unlikely(tmp_right_name_40 == NULL)) {
            tmp_right_name_40 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[640]);
        }

        assert(!(tmp_right_name_40 == NULL));
        tmp_left_name_40 = BINARY_OPERATION_BITOR_OBJECT_LONG_LONG(tmp_left_name_41, tmp_right_name_40);
        Py_DECREF(tmp_left_name_41);
        assert(!(tmp_left_name_40 == NULL));
        tmp_right_name_41 = GET_STRING_DICT_VALUE(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[641]);

        if (unlikely(tmp_right_name_41 == NULL)) {
            tmp_right_name_41 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[641]);
        }

        assert(!(tmp_right_name_41 == NULL));
        tmp_left_name_39 = BINARY_OPERATION_BITOR_OBJECT_LONG_LONG(tmp_left_name_40, tmp_right_name_41);
        Py_DECREF(tmp_left_name_40);
        assert(!(tmp_left_name_39 == NULL));
        tmp_right_name_42 = GET_STRING_DICT_VALUE(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[642]);

        if (unlikely(tmp_right_name_42 == NULL)) {
            tmp_right_name_42 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[642]);
        }

        assert(!(tmp_right_name_42 == NULL));
        tmp_left_name_38 = BINARY_OPERATION_BITOR_OBJECT_LONG_LONG(tmp_left_name_39, tmp_right_name_42);
        Py_DECREF(tmp_left_name_39);
        assert(!(tmp_left_name_38 == NULL));
        tmp_right_name_43 = GET_STRING_DICT_VALUE(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[643]);

        if (unlikely(tmp_right_name_43 == NULL)) {
            tmp_right_name_43 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[643]);
        }

        assert(!(tmp_right_name_43 == NULL));
        tmp_left_name_37 = BINARY_OPERATION_BITOR_OBJECT_LONG_LONG(tmp_left_name_38, tmp_right_name_43);
        Py_DECREF(tmp_left_name_38);
        assert(!(tmp_left_name_37 == NULL));
        tmp_right_name_44 = GET_STRING_DICT_VALUE(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[644]);

        if (unlikely(tmp_right_name_44 == NULL)) {
            tmp_right_name_44 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[644]);
        }

        assert(!(tmp_right_name_44 == NULL));
        tmp_left_name_36 = BINARY_OPERATION_BITOR_OBJECT_LONG_LONG(tmp_left_name_37, tmp_right_name_44);
        Py_DECREF(tmp_left_name_37);
        assert(!(tmp_left_name_36 == NULL));
        tmp_right_name_45 = GET_STRING_DICT_VALUE(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[645]);

        if (unlikely(tmp_right_name_45 == NULL)) {
            tmp_right_name_45 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[645]);
        }

        assert(!(tmp_right_name_45 == NULL));
        tmp_left_name_35 = BINARY_OPERATION_BITOR_OBJECT_LONG_LONG(tmp_left_name_36, tmp_right_name_45);
        Py_DECREF(tmp_left_name_36);
        assert(!(tmp_left_name_35 == NULL));
        tmp_right_name_46 = GET_STRING_DICT_VALUE(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[646]);

        if (unlikely(tmp_right_name_46 == NULL)) {
            tmp_right_name_46 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[646]);
        }

        assert(!(tmp_right_name_46 == NULL));
        tmp_left_name_34 = BINARY_OPERATION_BITOR_OBJECT_LONG_LONG(tmp_left_name_35, tmp_right_name_46);
        Py_DECREF(tmp_left_name_35);
        assert(!(tmp_left_name_34 == NULL));
        tmp_right_name_47 = GET_STRING_DICT_VALUE(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[648]);

        if (unlikely(tmp_right_name_47 == NULL)) {
            tmp_right_name_47 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[648]);
        }

        assert(!(tmp_right_name_47 == NULL));
        tmp_left_name_33 = BINARY_OPERATION_BITOR_OBJECT_LONG_LONG(tmp_left_name_34, tmp_right_name_47);
        Py_DECREF(tmp_left_name_34);
        assert(!(tmp_left_name_33 == NULL));
        tmp_right_name_48 = GET_STRING_DICT_VALUE(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[647]);

        if (unlikely(tmp_right_name_48 == NULL)) {
            tmp_right_name_48 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[647]);
        }

        assert(!(tmp_right_name_48 == NULL));
        tmp_assign_source_485 = BINARY_OPERATION_BITOR_OBJECT_LONG_LONG(tmp_left_name_33, tmp_right_name_48);
        Py_DECREF(tmp_left_name_33);
        assert(!(tmp_assign_source_485 == NULL));
        UPDATE_STRING_DICT1(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[649], tmp_assign_source_485);
    }
    {
        PyObject *tmp_assign_source_486;
        tmp_assign_source_486 = mod_consts[38];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[650], tmp_assign_source_486);
    }
    {
        PyObject *tmp_assign_source_487;
        tmp_assign_source_487 = mod_consts[41];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[651], tmp_assign_source_487);
    }
    {
        PyObject *tmp_assign_source_488;
        tmp_assign_source_488 = mod_consts[38];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[652], tmp_assign_source_488);
    }
    {
        PyObject *tmp_assign_source_489;
        tmp_assign_source_489 = mod_consts[44];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[653], tmp_assign_source_489);
    }
    {
        PyObject *tmp_assign_source_490;
        tmp_assign_source_490 = mod_consts[48];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[654], tmp_assign_source_490);
    }
    {
        PyObject *tmp_assign_source_491;
        tmp_assign_source_491 = mod_consts[50];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[655], tmp_assign_source_491);
    }
    {
        PyObject *tmp_assign_source_492;
        tmp_assign_source_492 = mod_consts[52];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[656], tmp_assign_source_492);
    }
    {
        PyObject *tmp_assign_source_493;
        tmp_assign_source_493 = mod_consts[55];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[657], tmp_assign_source_493);
    }
    {
        PyObject *tmp_assign_source_494;
        tmp_assign_source_494 = mod_consts[57];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[658], tmp_assign_source_494);
    }
    {
        PyObject *tmp_assign_source_495;
        tmp_assign_source_495 = mod_consts[59];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[659], tmp_assign_source_495);
    }
    {
        PyObject *tmp_assign_source_496;
        tmp_assign_source_496 = mod_consts[117];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[660], tmp_assign_source_496);
    }
    {
        PyObject *tmp_assign_source_497;
        tmp_assign_source_497 = mod_consts[412];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[661], tmp_assign_source_497);
    }
    {
        PyObject *tmp_assign_source_498;
        tmp_assign_source_498 = mod_consts[24];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[662], tmp_assign_source_498);
    }
    {
        PyObject *tmp_assign_source_499;
        tmp_assign_source_499 = mod_consts[34];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[663], tmp_assign_source_499);
    }
    {
        PyObject *tmp_assign_source_500;
        tmp_assign_source_500 = mod_consts[32];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[664], tmp_assign_source_500);
    }
    {
        PyObject *tmp_assign_source_501;
        tmp_assign_source_501 = mod_consts[30];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[665], tmp_assign_source_501);
    }
    {
        PyObject *tmp_assign_source_502;
        tmp_assign_source_502 = mod_consts[38];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[666], tmp_assign_source_502);
    }
    {
        PyObject *tmp_assign_source_503;
        tmp_assign_source_503 = mod_consts[41];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[667], tmp_assign_source_503);
    }
    {
        PyObject *tmp_assign_source_504;
        tmp_assign_source_504 = mod_consts[44];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[668], tmp_assign_source_504);
    }
    {
        PyObject *tmp_assign_source_505;
        tmp_assign_source_505 = mod_consts[48];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[669], tmp_assign_source_505);
    }
    {
        PyObject *tmp_assign_source_506;
        tmp_assign_source_506 = mod_consts[50];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[670], tmp_assign_source_506);
    }
    {
        PyObject *tmp_assign_source_507;
        tmp_assign_source_507 = mod_consts[52];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[671], tmp_assign_source_507);
    }
    {
        PyObject *tmp_assign_source_508;
        PyObject *tmp_left_name_49;
        PyObject *tmp_left_name_50;
        PyObject *tmp_left_name_51;
        PyObject *tmp_left_name_52;
        PyObject *tmp_left_name_53;
        PyObject *tmp_right_name_49;
        PyObject *tmp_right_name_50;
        PyObject *tmp_right_name_51;
        PyObject *tmp_right_name_52;
        PyObject *tmp_right_name_53;
        tmp_left_name_53 = GET_STRING_DICT_VALUE(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[666]);

        if (unlikely(tmp_left_name_53 == NULL)) {
            tmp_left_name_53 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[666]);
        }

        assert(!(tmp_left_name_53 == NULL));
        tmp_right_name_49 = GET_STRING_DICT_VALUE(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[667]);

        if (unlikely(tmp_right_name_49 == NULL)) {
            tmp_right_name_49 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[667]);
        }

        assert(!(tmp_right_name_49 == NULL));
        tmp_left_name_52 = BINARY_OPERATION_BITOR_OBJECT_LONG_LONG(tmp_left_name_53, tmp_right_name_49);
        assert(!(tmp_left_name_52 == NULL));
        tmp_right_name_50 = GET_STRING_DICT_VALUE(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[668]);

        if (unlikely(tmp_right_name_50 == NULL)) {
            tmp_right_name_50 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[668]);
        }

        assert(!(tmp_right_name_50 == NULL));
        tmp_left_name_51 = BINARY_OPERATION_BITOR_OBJECT_LONG_LONG(tmp_left_name_52, tmp_right_name_50);
        Py_DECREF(tmp_left_name_52);
        assert(!(tmp_left_name_51 == NULL));
        tmp_right_name_51 = GET_STRING_DICT_VALUE(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[669]);

        if (unlikely(tmp_right_name_51 == NULL)) {
            tmp_right_name_51 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[669]);
        }

        assert(!(tmp_right_name_51 == NULL));
        tmp_left_name_50 = BINARY_OPERATION_BITOR_OBJECT_LONG_LONG(tmp_left_name_51, tmp_right_name_51);
        Py_DECREF(tmp_left_name_51);
        assert(!(tmp_left_name_50 == NULL));
        tmp_right_name_52 = GET_STRING_DICT_VALUE(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[670]);

        if (unlikely(tmp_right_name_52 == NULL)) {
            tmp_right_name_52 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[670]);
        }

        assert(!(tmp_right_name_52 == NULL));
        tmp_left_name_49 = BINARY_OPERATION_BITOR_OBJECT_LONG_LONG(tmp_left_name_50, tmp_right_name_52);
        Py_DECREF(tmp_left_name_50);
        assert(!(tmp_left_name_49 == NULL));
        tmp_right_name_53 = GET_STRING_DICT_VALUE(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[671]);

        if (unlikely(tmp_right_name_53 == NULL)) {
            tmp_right_name_53 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[671]);
        }

        assert(!(tmp_right_name_53 == NULL));
        tmp_assign_source_508 = BINARY_OPERATION_BITOR_OBJECT_LONG_LONG(tmp_left_name_49, tmp_right_name_53);
        Py_DECREF(tmp_left_name_49);
        assert(!(tmp_assign_source_508 == NULL));
        UPDATE_STRING_DICT1(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[672], tmp_assign_source_508);
    }
    {
        PyObject *tmp_assign_source_509;
        tmp_assign_source_509 = mod_consts[38];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[673], tmp_assign_source_509);
    }
    {
        PyObject *tmp_assign_source_510;
        tmp_assign_source_510 = mod_consts[38];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[674], tmp_assign_source_510);
    }
    {
        PyObject *tmp_assign_source_511;
        tmp_assign_source_511 = mod_consts[38];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[675], tmp_assign_source_511);
    }
    {
        PyObject *tmp_assign_source_512;
        tmp_assign_source_512 = mod_consts[41];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[676], tmp_assign_source_512);
    }
    {
        PyObject *tmp_assign_source_513;
        PyObject *tmp_left_name_54;
        PyObject *tmp_right_name_54;
        tmp_left_name_54 = GET_STRING_DICT_VALUE(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[675]);

        if (unlikely(tmp_left_name_54 == NULL)) {
            tmp_left_name_54 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[675]);
        }

        assert(!(tmp_left_name_54 == NULL));
        tmp_right_name_54 = GET_STRING_DICT_VALUE(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[676]);

        if (unlikely(tmp_right_name_54 == NULL)) {
            tmp_right_name_54 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[676]);
        }

        assert(!(tmp_right_name_54 == NULL));
        tmp_assign_source_513 = BINARY_OPERATION_BITOR_OBJECT_LONG_LONG(tmp_left_name_54, tmp_right_name_54);
        assert(!(tmp_assign_source_513 == NULL));
        UPDATE_STRING_DICT1(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[677], tmp_assign_source_513);
    }
    {
        PyObject *tmp_assign_source_514;
        PyObject *tmp_left_name_55;
        PyObject *tmp_left_name_56;
        PyObject *tmp_left_name_57;
        PyObject *tmp_left_name_58;
        PyObject *tmp_left_name_59;
        PyObject *tmp_right_name_55;
        PyObject *tmp_right_name_56;
        PyObject *tmp_right_name_57;
        PyObject *tmp_right_name_58;
        PyObject *tmp_right_name_59;
        tmp_left_name_59 = GET_STRING_DICT_VALUE(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[632]);

        if (unlikely(tmp_left_name_59 == NULL)) {
            tmp_left_name_59 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[632]);
        }

        assert(!(tmp_left_name_59 == NULL));
        tmp_right_name_55 = GET_STRING_DICT_VALUE(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[644]);

        if (unlikely(tmp_right_name_55 == NULL)) {
            tmp_right_name_55 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[644]);
        }

        assert(!(tmp_right_name_55 == NULL));
        tmp_left_name_58 = BINARY_OPERATION_BITOR_OBJECT_LONG_LONG(tmp_left_name_59, tmp_right_name_55);
        assert(!(tmp_left_name_58 == NULL));
        tmp_right_name_56 = GET_STRING_DICT_VALUE(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[639]);

        if (unlikely(tmp_right_name_56 == NULL)) {
            tmp_right_name_56 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[639]);
        }

        assert(!(tmp_right_name_56 == NULL));
        tmp_left_name_57 = BINARY_OPERATION_BITOR_OBJECT_LONG_LONG(tmp_left_name_58, tmp_right_name_56);
        Py_DECREF(tmp_left_name_58);
        assert(!(tmp_left_name_57 == NULL));
        tmp_right_name_57 = GET_STRING_DICT_VALUE(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[636]);

        if (unlikely(tmp_right_name_57 == NULL)) {
            tmp_right_name_57 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[636]);
        }

        assert(!(tmp_right_name_57 == NULL));
        tmp_left_name_56 = BINARY_OPERATION_BITOR_OBJECT_LONG_LONG(tmp_left_name_57, tmp_right_name_57);
        Py_DECREF(tmp_left_name_57);
        assert(!(tmp_left_name_56 == NULL));
        tmp_right_name_58 = GET_STRING_DICT_VALUE(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[635]);

        if (unlikely(tmp_right_name_58 == NULL)) {
            tmp_right_name_58 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[635]);
        }

        assert(!(tmp_right_name_58 == NULL));
        tmp_left_name_55 = BINARY_OPERATION_BITOR_OBJECT_LONG_LONG(tmp_left_name_56, tmp_right_name_58);
        Py_DECREF(tmp_left_name_56);
        assert(!(tmp_left_name_55 == NULL));
        tmp_right_name_59 = GET_STRING_DICT_VALUE(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[641]);

        if (unlikely(tmp_right_name_59 == NULL)) {
            tmp_right_name_59 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[641]);
        }

        assert(!(tmp_right_name_59 == NULL));
        tmp_assign_source_514 = BINARY_OPERATION_BITOR_OBJECT_LONG_LONG(tmp_left_name_55, tmp_right_name_59);
        Py_DECREF(tmp_left_name_55);
        assert(!(tmp_assign_source_514 == NULL));
        UPDATE_STRING_DICT1(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[678], tmp_assign_source_514);
    }
    {
        PyObject *tmp_assign_source_515;
        tmp_assign_source_515 = mod_consts[78];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[679], tmp_assign_source_515);
    }
    {
        PyObject *tmp_assign_source_516;
        tmp_assign_source_516 = mod_consts[38];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[680], tmp_assign_source_516);
    }
    {
        PyObject *tmp_assign_source_517;
        tmp_assign_source_517 = mod_consts[41];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[681], tmp_assign_source_517);
    }
    {
        PyObject *tmp_assign_source_518;
        tmp_assign_source_518 = mod_consts[44];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[682], tmp_assign_source_518);
    }
    {
        PyObject *tmp_assign_source_519;
        tmp_assign_source_519 = mod_consts[48];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[683], tmp_assign_source_519);
    }
    {
        PyObject *tmp_assign_source_520;
        tmp_assign_source_520 = mod_consts[50];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[684], tmp_assign_source_520);
    }
    {
        PyObject *tmp_assign_source_521;
        tmp_assign_source_521 = mod_consts[52];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[685], tmp_assign_source_521);
    }
    {
        PyObject *tmp_assign_source_522;
        tmp_assign_source_522 = mod_consts[55];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[686], tmp_assign_source_522);
    }
    {
        PyObject *tmp_assign_source_523;
        tmp_assign_source_523 = mod_consts[57];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[687], tmp_assign_source_523);
    }
    {
        PyObject *tmp_assign_source_524;
        tmp_assign_source_524 = mod_consts[59];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[688], tmp_assign_source_524);
    }
    {
        PyObject *tmp_assign_source_525;
        tmp_assign_source_525 = mod_consts[117];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[689], tmp_assign_source_525);
    }
    {
        PyObject *tmp_assign_source_526;
        tmp_assign_source_526 = mod_consts[412];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[690], tmp_assign_source_526);
    }
    {
        PyObject *tmp_assign_source_527;
        tmp_assign_source_527 = mod_consts[414];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[691], tmp_assign_source_527);
    }
    {
        PyObject *tmp_assign_source_528;
        tmp_assign_source_528 = mod_consts[188];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[692], tmp_assign_source_528);
    }
    {
        PyObject *tmp_assign_source_529;
        tmp_assign_source_529 = mod_consts[194];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[693], tmp_assign_source_529);
    }
    {
        PyObject *tmp_assign_source_530;
        tmp_assign_source_530 = mod_consts[265];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[694], tmp_assign_source_530);
    }
    {
        PyObject *tmp_assign_source_531;
        tmp_assign_source_531 = mod_consts[7];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[695], tmp_assign_source_531);
    }
    {
        PyObject *tmp_assign_source_532;
        tmp_assign_source_532 = mod_consts[9];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[696], tmp_assign_source_532);
    }
    {
        PyObject *tmp_assign_source_533;
        tmp_assign_source_533 = mod_consts[11];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[697], tmp_assign_source_533);
    }
    {
        PyObject *tmp_assign_source_534;
        tmp_assign_source_534 = mod_consts[13];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[698], tmp_assign_source_534);
    }
    {
        PyObject *tmp_assign_source_535;
        tmp_assign_source_535 = mod_consts[15];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[699], tmp_assign_source_535);
    }
    {
        PyObject *tmp_assign_source_536;
        tmp_assign_source_536 = mod_consts[425];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[700], tmp_assign_source_536);
    }
    {
        PyObject *tmp_assign_source_537;
        tmp_assign_source_537 = mod_consts[36];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[701], tmp_assign_source_537);
    }
    {
        PyObject *tmp_assign_source_538;
        PyObject *tmp_left_name_60;
        PyObject *tmp_left_name_61;
        PyObject *tmp_right_name_60;
        PyObject *tmp_right_name_61;
        tmp_left_name_61 = GET_STRING_DICT_VALUE(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[679]);

        if (unlikely(tmp_left_name_61 == NULL)) {
            tmp_left_name_61 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[679]);
        }

        assert(!(tmp_left_name_61 == NULL));
        tmp_right_name_60 = GET_STRING_DICT_VALUE(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[680]);

        if (unlikely(tmp_right_name_60 == NULL)) {
            tmp_right_name_60 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[680]);
        }

        assert(!(tmp_right_name_60 == NULL));
        tmp_left_name_60 = BINARY_OPERATION_BITOR_OBJECT_LONG_LONG(tmp_left_name_61, tmp_right_name_60);
        assert(!(tmp_left_name_60 == NULL));
        tmp_right_name_61 = GET_STRING_DICT_VALUE(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[681]);

        if (unlikely(tmp_right_name_61 == NULL)) {
            tmp_right_name_61 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[681]);
        }

        assert(!(tmp_right_name_61 == NULL));
        tmp_assign_source_538 = BINARY_OPERATION_BITOR_OBJECT_LONG_LONG(tmp_left_name_60, tmp_right_name_61);
        Py_DECREF(tmp_left_name_60);
        assert(!(tmp_assign_source_538 == NULL));
        UPDATE_STRING_DICT1(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[702], tmp_assign_source_538);
    }
    {
        PyObject *tmp_assign_source_539;
        tmp_assign_source_539 = mod_consts[28];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[703], tmp_assign_source_539);
    }
    {
        PyObject *tmp_assign_source_540;
        tmp_assign_source_540 = mod_consts[427];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[704], tmp_assign_source_540);
    }
    {
        PyObject *tmp_assign_source_541;
        tmp_assign_source_541 = mod_consts[589];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[705], tmp_assign_source_541);
    }
    {
        PyObject *tmp_assign_source_542;
        tmp_assign_source_542 = mod_consts[26];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[706], tmp_assign_source_542);
    }
    {
        PyObject *tmp_assign_source_543;
        tmp_assign_source_543 = mod_consts[7];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[707], tmp_assign_source_543);
    }
    {
        PyObject *tmp_assign_source_544;
        tmp_assign_source_544 = mod_consts[9];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[708], tmp_assign_source_544);
    }
    {
        PyObject *tmp_assign_source_545;
        tmp_assign_source_545 = mod_consts[11];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[709], tmp_assign_source_545);
    }
    {
        PyObject *tmp_assign_source_546;
        tmp_assign_source_546 = mod_consts[13];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[710], tmp_assign_source_546);
    }
    {
        PyObject *tmp_assign_source_547;
        tmp_assign_source_547 = mod_consts[78];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[711], tmp_assign_source_547);
    }
    {
        PyObject *tmp_assign_source_548;
        tmp_assign_source_548 = mod_consts[38];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[712], tmp_assign_source_548);
    }
    {
        PyObject *tmp_assign_source_549;
        tmp_assign_source_549 = mod_consts[41];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[713], tmp_assign_source_549);
    }
    {
        PyObject *tmp_assign_source_550;
        tmp_assign_source_550 = mod_consts[85];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[714], tmp_assign_source_550);
    }
    {
        PyObject *tmp_assign_source_551;
        tmp_assign_source_551 = mod_consts[44];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[715], tmp_assign_source_551);
    }
    {
        PyObject *tmp_assign_source_552;
        tmp_assign_source_552 = mod_consts[716];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[716], tmp_assign_source_552);
    }
    {
        PyObject *tmp_assign_source_553;
        tmp_assign_source_553 = mod_consts[717];
        UPDATE_STRING_DICT0(moduledict_ntsecuritycon, (Nuitka_StringObject *)mod_consts[718], tmp_assign_source_553);
    }

    return module_ntsecuritycon;
    module_exception_exit:
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);
    return NULL;
}

