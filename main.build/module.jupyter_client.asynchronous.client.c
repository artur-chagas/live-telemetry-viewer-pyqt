/* Generated code for Python module 'jupyter_client.asynchronous.client'
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

/* The "module_jupyter_client$asynchronous$client" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_jupyter_client$asynchronous$client;
PyDictObject *moduledict_jupyter_client$asynchronous$client;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[246];

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(void) {
    if (constants_created == false) {
        loadConstantsBlob(&mod_consts[0], UNTRANSLATE("jupyter_client.asynchronous.client"));
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
void checkModuleConstants_jupyter_client$asynchronous$client(void) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    checkConstantsBlob(&mod_consts[0], "jupyter_client.asynchronous.client");
}
#endif

// The module code objects.
static PyCodeObject *codeobj_85b411fbb0608cd624453f94f8f2155f;
static PyCodeObject *codeobj_6d127b35f23b3df14c54f6d202df9267;
static PyCodeObject *codeobj_2930e248b63c577e75fc57eb4b6a6531;
static PyCodeObject *codeobj_8074c8bfaa2b6aa8b7417787c56294a4;
static PyCodeObject *codeobj_080819aaa606d0f419de463623e7e4ed;
static PyCodeObject *codeobj_75ff3742b5f247f0ceac58315a4b181a;
static PyCodeObject *codeobj_c8e0dad4868b99efa6fa22e042fae6f4;
static PyCodeObject *codeobj_58e47f64a944b1052134cadf5b6da5c8;
static PyCodeObject *codeobj_ba73b7779d13006987ac70246725b466;
static PyCodeObject *codeobj_f6c1fbcb99fcd04f0199a6e66f74a97b;
static PyCodeObject *codeobj_523f791db65b1794a82d02f1dece36a0;
static PyCodeObject *codeobj_79b2badca8d1c3bd1408f545175d0010;
static PyCodeObject *codeobj_d4a4ad3ad9cbdbbaa427a9b9d81f1588;
static PyCodeObject *codeobj_6091e52fe828b42924ba834f8791321f;
static PyCodeObject *codeobj_b67cfb2e9a1b180620ca2873bb9fbf88;
static PyCodeObject *codeobj_f96273d8f97446e0894f88ce7648e867;
static PyCodeObject *codeobj_d752db6a576e57a83f722af71e20ccf8;

static void createModuleCodeObjects(void) {
    module_filename_obj = mod_consts[170]; CHECK_OBJECT(module_filename_obj);
    codeobj_85b411fbb0608cd624453f94f8f2155f = MAKE_CODEOBJECT(module_filename_obj, 1, CO_NOFREE, mod_consts[231], NULL, NULL, 0, 0, 0);
    codeobj_6d127b35f23b3df14c54f6d202df9267 = MAKE_CODEOBJECT(module_filename_obj, 59, CO_NOFREE, mod_consts[200], mod_consts[232], NULL, 0, 0, 0);
    codeobj_2930e248b63c577e75fc57eb4b6a6531 = MAKE_CODEOBJECT(module_filename_obj, 68, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[209], mod_consts[233], NULL, 1, 0, 0);
    codeobj_8074c8bfaa2b6aa8b7417787c56294a4 = MAKE_CODEOBJECT(module_filename_obj, 221, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[122], mod_consts[234], NULL, 2, 0, 0);
    codeobj_080819aaa606d0f419de463623e7e4ed = MAKE_CODEOBJECT(module_filename_obj, 233, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[148], mod_consts[235], NULL, 5, 0, 0);
    codeobj_75ff3742b5f247f0ceac58315a4b181a = MAKE_CODEOBJECT(module_filename_obj, 167, CO_COROUTINE | CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[20], mod_consts[236], NULL, 4, 0, 0);
    codeobj_c8e0dad4868b99efa6fa22e042fae6f4 = MAKE_CODEOBJECT(module_filename_obj, 199, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[140], mod_consts[237], NULL, 2, 0, 0);
    codeobj_58e47f64a944b1052134cadf5b6da5c8 = MAKE_CODEOBJECT(module_filename_obj, 262, CO_COROUTINE | CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[167], mod_consts[238], NULL, 10, 0, 0);
    codeobj_ba73b7779d13006987ac70246725b466 = MAKE_CODEOBJECT(module_filename_obj, 87, CO_COROUTINE | CO_OPTIMIZED | CO_NEWLOCALS | CO_VARARGS | CO_VARKEYWORDS | CO_NOFREE, mod_consts[43], mod_consts[239], NULL, 1, 0, 0);
    codeobj_f6c1fbcb99fcd04f0199a6e66f74a97b = MAKE_CODEOBJECT(module_filename_obj, 79, CO_COROUTINE | CO_OPTIMIZED | CO_NEWLOCALS | CO_VARARGS | CO_VARKEYWORDS | CO_NOFREE, mod_consts[35], mod_consts[239], NULL, 1, 0, 0);
    codeobj_523f791db65b1794a82d02f1dece36a0 = MAKE_CODEOBJECT(module_filename_obj, 75, CO_COROUTINE | CO_OPTIMIZED | CO_NEWLOCALS | CO_VARARGS | CO_VARKEYWORDS | CO_NOFREE, mod_consts[31], mod_consts[239], NULL, 1, 0, 0);
    codeobj_79b2badca8d1c3bd1408f545175d0010 = MAKE_CODEOBJECT(module_filename_obj, 83, CO_COROUTINE | CO_OPTIMIZED | CO_NEWLOCALS | CO_VARARGS | CO_VARKEYWORDS | CO_NOFREE, mod_consts[39], mod_consts[239], NULL, 1, 0, 0);
    codeobj_d4a4ad3ad9cbdbbaa427a9b9d81f1588 = MAKE_CODEOBJECT(module_filename_obj, 92, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[212], mod_consts[240], NULL, 1, 0, 0);
    codeobj_6091e52fe828b42924ba834f8791321f = MAKE_CODEOBJECT(module_filename_obj, 244, CO_COROUTINE | CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[66], mod_consts[241], NULL, 1, 0, 0);
    codeobj_b67cfb2e9a1b180620ca2873bb9fbf88 = MAKE_CODEOBJECT(module_filename_obj, 21, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[197], mod_consts[242], NULL, 2, 0, 0);
    codeobj_f96273d8f97446e0894f88ce7648e867 = MAKE_CODEOBJECT(module_filename_obj, 103, CO_COROUTINE | CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[81], mod_consts[243], NULL, 2, 0, 0);
    codeobj_d752db6a576e57a83f722af71e20ccf8 = MAKE_CODEOBJECT(module_filename_obj, 22, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARARGS | CO_VARKEYWORDS, mod_consts[0], mod_consts[244], mod_consts[245], 1, 0, 0);
}

// The module function declarations.
static PyObject *MAKE_COROUTINE_jupyter_client$asynchronous$client$$$function__3_get_shell_msg$$$coroutine__1_get_shell_msg(struct Nuitka_CellObject **closure);


static PyObject *MAKE_COROUTINE_jupyter_client$asynchronous$client$$$function__4_get_iopub_msg$$$coroutine__1_get_iopub_msg(struct Nuitka_CellObject **closure);


static PyObject *MAKE_COROUTINE_jupyter_client$asynchronous$client$$$function__5_get_stdin_msg$$$coroutine__1_get_stdin_msg(struct Nuitka_CellObject **closure);


static PyObject *MAKE_COROUTINE_jupyter_client$asynchronous$client$$$function__6_get_control_msg$$$coroutine__1_get_control_msg(struct Nuitka_CellObject **closure);


static PyObject *MAKE_COROUTINE_jupyter_client$asynchronous$client$$$function__8_wait_for_ready$$$coroutine__1_wait_for_ready(struct Nuitka_CellObject **closure);


static PyObject *MAKE_COROUTINE_jupyter_client$asynchronous$client$$$function__9__recv_reply$$$coroutine__1__recv_reply(struct Nuitka_CellObject **closure);


static PyObject *MAKE_COROUTINE_jupyter_client$asynchronous$client$$$function__13_is_alive$$$coroutine__1_is_alive(struct Nuitka_CellObject **closure);


static PyObject *MAKE_COROUTINE_jupyter_client$asynchronous$client$$$function__14_execute_interactive$$$coroutine__1_execute_interactive(struct Nuitka_CellObject **closure);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$function__1__mro_entries_conversion(PyObject **python_pars);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$function__2_complex_call_helper_pos_star_list_star_dict(PyObject **python_pars);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$function__5_complex_call_helper_star_list_star_dict(PyObject **python_pars);


static PyObject *MAKE_FUNCTION_jupyter_client$asynchronous$client$$$function__10__stdin_hook_default();


static PyObject *MAKE_FUNCTION_jupyter_client$asynchronous$client$$$function__11__output_hook_default();


static PyObject *MAKE_FUNCTION_jupyter_client$asynchronous$client$$$function__12__output_hook_kernel();


static PyObject *MAKE_FUNCTION_jupyter_client$asynchronous$client$$$function__13_is_alive();


static PyObject *MAKE_FUNCTION_jupyter_client$asynchronous$client$$$function__14_execute_interactive(PyObject *defaults);


static PyObject *MAKE_FUNCTION_jupyter_client$asynchronous$client$$$function__1_reqrep(PyObject *defaults);


static PyObject *MAKE_FUNCTION_jupyter_client$asynchronous$client$$$function__1_reqrep$$$function__1_wrapped(struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_jupyter_client$asynchronous$client$$$function__2__context_default();


static PyObject *MAKE_FUNCTION_jupyter_client$asynchronous$client$$$function__3_get_shell_msg();


static PyObject *MAKE_FUNCTION_jupyter_client$asynchronous$client$$$function__4_get_iopub_msg();


static PyObject *MAKE_FUNCTION_jupyter_client$asynchronous$client$$$function__5_get_stdin_msg();


static PyObject *MAKE_FUNCTION_jupyter_client$asynchronous$client$$$function__6_get_control_msg();


static PyObject *MAKE_FUNCTION_jupyter_client$asynchronous$client$$$function__7_hb_channel();


static PyObject *MAKE_FUNCTION_jupyter_client$asynchronous$client$$$function__8_wait_for_ready(PyObject *defaults);


static PyObject *MAKE_FUNCTION_jupyter_client$asynchronous$client$$$function__9__recv_reply(PyObject *defaults);


// The module function definitions.
static PyObject *impl_jupyter_client$asynchronous$client$$$function__1_reqrep(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_CellObject *par_meth = Nuitka_Cell_New1(python_pars[0]);
    struct Nuitka_CellObject *par_channel = Nuitka_Cell_New1(python_pars[1]);
    PyObject *var_wrapped = NULL;
    PyObject *var_basedoc = NULL;
    PyObject *var__ = NULL;
    PyObject *var_parts = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    struct Nuitka_FrameObject *frame_b67cfb2e9a1b180620ca2873bb9fbf88;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    PyObject *tmp_iterator_attempt;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_b67cfb2e9a1b180620ca2873bb9fbf88 = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    {
        PyObject *tmp_assign_source_1;
        struct Nuitka_CellObject *tmp_closure_1[2];

        tmp_closure_1[0] = par_channel;
        Py_INCREF(tmp_closure_1[0]);
        tmp_closure_1[1] = par_meth;
        Py_INCREF(tmp_closure_1[1]);

        tmp_assign_source_1 = MAKE_FUNCTION_jupyter_client$asynchronous$client$$$function__1_reqrep$$$function__1_wrapped(tmp_closure_1);

        assert(var_wrapped == NULL);
        var_wrapped = tmp_assign_source_1;
    }
    // Tried code:
    if (isFrameUnusable(cache_frame_b67cfb2e9a1b180620ca2873bb9fbf88)) {
        Py_XDECREF(cache_frame_b67cfb2e9a1b180620ca2873bb9fbf88);

#if _DEBUG_REFCOUNTS
        if (cache_frame_b67cfb2e9a1b180620ca2873bb9fbf88 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_b67cfb2e9a1b180620ca2873bb9fbf88 = MAKE_FUNCTION_FRAME(codeobj_b67cfb2e9a1b180620ca2873bb9fbf88, module_jupyter_client$asynchronous$client, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_b67cfb2e9a1b180620ca2873bb9fbf88->m_type_description == NULL);
    frame_b67cfb2e9a1b180620ca2873bb9fbf88 = cache_frame_b67cfb2e9a1b180620ca2873bb9fbf88;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_b67cfb2e9a1b180620ca2873bb9fbf88);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_b67cfb2e9a1b180620ca2873bb9fbf88) == 2); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_operand_name_1;
        PyObject *tmp_expression_name_1;
        CHECK_OBJECT(Nuitka_Cell_GET(par_meth));
        tmp_expression_name_1 = Nuitka_Cell_GET(par_meth);
        tmp_operand_name_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_1, mod_consts[2]);
        if (tmp_operand_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 31;
            type_description_1 = "ccoooo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_name_1);
        Py_DECREF(tmp_operand_name_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 31;
            type_description_1 = "ccoooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    CHECK_OBJECT(var_wrapped);
    tmp_return_value = var_wrapped;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    branch_no_1:;
    // Tried code:
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_name_2;
        if (Nuitka_Cell_GET(par_meth) == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[3]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 36;
            type_description_1 = "ccoooo";
            goto try_except_handler_2;
        }

        tmp_expression_name_2 = Nuitka_Cell_GET(par_meth);
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_2, mod_consts[2]);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 36;
            type_description_1 = "ccoooo";
            goto try_except_handler_2;
        }
        frame_b67cfb2e9a1b180620ca2873bb9fbf88->m_frame.f_lineno = 36;
        tmp_iter_arg_1 = CALL_METHOD_WITH_ARGS2(
            tmp_called_instance_1,
            mod_consts[4],
            &PyTuple_GET_ITEM(mod_consts[5], 0)
        );

        Py_DECREF(tmp_called_instance_1);
        if (tmp_iter_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 36;
            type_description_1 = "ccoooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_2 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 36;
            type_description_1 = "ccoooo";
            goto try_except_handler_2;
        }
        assert(tmp_tuple_unpack_1__source_iter == NULL);
        tmp_tuple_unpack_1__source_iter = tmp_assign_source_2;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_unpack_1;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_3 = UNPACK_NEXT(tmp_unpack_1, 0, 2);
        if (tmp_assign_source_3 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ccoooo";
            exception_lineno = 36;
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_1 == NULL);
        tmp_tuple_unpack_1__element_1 = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_unpack_2;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_4 = UNPACK_NEXT(tmp_unpack_2, 1, 2);
        if (tmp_assign_source_4 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ccoooo";
            exception_lineno = 36;
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_2 == NULL);
        tmp_tuple_unpack_1__element_2 = tmp_assign_source_4;
    }
    {
        PyObject *tmp_iterator_name_1;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_iterator_name_1 = tmp_tuple_unpack_1__source_iter;
        // Check if iterator has left-over elements.
        CHECK_OBJECT(tmp_iterator_name_1); assert(HAS_ITERNEXT(tmp_iterator_name_1));

        tmp_iterator_attempt = (*Py_TYPE(tmp_iterator_name_1)->tp_iternext)(tmp_iterator_name_1);

        if (likely(tmp_iterator_attempt == NULL)) {
            PyObject *error = GET_ERROR_OCCURRED();

            if (error != NULL) {
                if (EXCEPTION_MATCH_BOOL_SINGLE(error, PyExc_StopIteration)) {
                    CLEAR_ERROR_OCCURRED();
                } else {
                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);

                    type_description_1 = "ccoooo";
                    exception_lineno = 36;
                    goto try_except_handler_3;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[6];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "ccoooo";
            exception_lineno = 36;
            goto try_except_handler_3;
        }
    }
    goto try_end_1;
    // Exception handler code:
    try_except_handler_3:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_tuple_unpack_1__source_iter);
    tmp_tuple_unpack_1__source_iter = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto try_except_handler_2;
    // End of try:
    try_end_1:;
    goto try_end_2;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_keeper_lineno_2 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    Py_XDECREF(tmp_tuple_unpack_1__source_iter);
    tmp_tuple_unpack_1__source_iter = NULL;
    {
        PyObject *tmp_assign_source_5;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
        tmp_assign_source_5 = tmp_tuple_unpack_1__element_1;
        assert(var_basedoc == NULL);
        Py_INCREF(tmp_assign_source_5);
        var_basedoc = tmp_assign_source_5;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_6;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
        tmp_assign_source_6 = tmp_tuple_unpack_1__element_2;
        assert(var__ == NULL);
        Py_INCREF(tmp_assign_source_6);
        var__ = tmp_assign_source_6;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;

    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_list_element_1;
        PyObject *tmp_called_instance_2;
        CHECK_OBJECT(var_basedoc);
        tmp_called_instance_2 = var_basedoc;
        frame_b67cfb2e9a1b180620ca2873bb9fbf88->m_frame.f_lineno = 37;
        tmp_list_element_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_2, mod_consts[7]);
        if (tmp_list_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 37;
            type_description_1 = "ccoooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_7 = PyList_New(1);
        PyList_SET_ITEM(tmp_assign_source_7, 0, tmp_list_element_1);
        assert(var_parts == NULL);
        var_parts = tmp_assign_source_7;
    }
    {
        bool tmp_condition_result_2;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        tmp_compexpr_left_1 = mod_consts[8];
        if (var_basedoc == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[9]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 38;
            type_description_1 = "ccoooo";
            goto frame_exception_exit_1;
        }

        tmp_compexpr_right_1 = var_basedoc;
        tmp_res = PySequence_Contains(tmp_compexpr_right_1, tmp_compexpr_left_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 38;
            type_description_1 = "ccoooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_2 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_2 != false) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_called_instance_3;
        PyObject *tmp_call_result_1;
        CHECK_OBJECT(var_parts);
        tmp_called_instance_3 = var_parts;
        frame_b67cfb2e9a1b180620ca2873bb9fbf88->m_frame.f_lineno = 39;
        tmp_call_result_1 = CALL_METHOD_WITH_ARGS1(
            tmp_called_instance_3,
            mod_consts[10],
            &PyTuple_GET_ITEM(mod_consts[11], 0)
        );

        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 39;
            type_description_1 = "ccoooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    branch_no_2:;
    {
        PyObject *tmp_called_instance_4;
        PyObject *tmp_call_result_2;
        if (var_parts == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[12]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 43;
            type_description_1 = "ccoooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_4 = var_parts;
        frame_b67cfb2e9a1b180620ca2873bb9fbf88->m_frame.f_lineno = 43;
        tmp_call_result_2 = CALL_METHOD_WITH_ARGS1(
            tmp_called_instance_4,
            mod_consts[10],
            &PyTuple_GET_ITEM(mod_consts[13], 0)
        );

        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 43;
            type_description_1 = "ccoooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_expression_name_3;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_assattr_target_1;
        tmp_expression_name_3 = mod_consts[14];
        tmp_called_name_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_3, mod_consts[15]);
        assert(!(tmp_called_name_1 == NULL));
        if (var_parts == NULL) {
            Py_DECREF(tmp_called_name_1);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[12]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 56;
            type_description_1 = "ccoooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_name_1 = var_parts;
        frame_b67cfb2e9a1b180620ca2873bb9fbf88->m_frame.f_lineno = 56;
        tmp_assattr_name_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_1, tmp_args_element_name_1);
        Py_DECREF(tmp_called_name_1);
        if (tmp_assattr_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 56;
            type_description_1 = "ccoooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_wrapped);
        tmp_assattr_target_1 = var_wrapped;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[2], tmp_assattr_name_1);
        Py_DECREF(tmp_assattr_name_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 56;
            type_description_1 = "ccoooo";
            goto frame_exception_exit_1;
        }
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_b67cfb2e9a1b180620ca2873bb9fbf88);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_b67cfb2e9a1b180620ca2873bb9fbf88);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_b67cfb2e9a1b180620ca2873bb9fbf88);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_b67cfb2e9a1b180620ca2873bb9fbf88, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_b67cfb2e9a1b180620ca2873bb9fbf88->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_b67cfb2e9a1b180620ca2873bb9fbf88, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_b67cfb2e9a1b180620ca2873bb9fbf88,
        type_description_1,
        par_meth,
        par_channel,
        var_wrapped,
        var_basedoc,
        var__,
        var_parts
    );


    // Release cached frame if used for exception.
    if (frame_b67cfb2e9a1b180620ca2873bb9fbf88 == cache_frame_b67cfb2e9a1b180620ca2873bb9fbf88) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_b67cfb2e9a1b180620ca2873bb9fbf88);
        cache_frame_b67cfb2e9a1b180620ca2873bb9fbf88 = NULL;
    }

    assertFrameObject(frame_b67cfb2e9a1b180620ca2873bb9fbf88);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    CHECK_OBJECT(var_wrapped);
    tmp_return_value = var_wrapped;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(par_meth);
    Py_DECREF(par_meth);
    par_meth = NULL;
    CHECK_OBJECT(par_channel);
    Py_DECREF(par_channel);
    par_channel = NULL;
    CHECK_OBJECT(var_wrapped);
    Py_DECREF(var_wrapped);
    var_wrapped = NULL;
    Py_XDECREF(var_basedoc);
    var_basedoc = NULL;
    Py_XDECREF(var__);
    var__ = NULL;
    Py_XDECREF(var_parts);
    var_parts = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(par_meth);
    Py_DECREF(par_meth);
    par_meth = NULL;
    CHECK_OBJECT(par_channel);
    Py_DECREF(par_channel);
    par_channel = NULL;
    CHECK_OBJECT(var_wrapped);
    Py_DECREF(var_wrapped);
    var_wrapped = NULL;
    Py_XDECREF(var_basedoc);
    var_basedoc = NULL;
    Py_XDECREF(var__);
    var__ = NULL;
    Py_XDECREF(var_parts);
    var_parts = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_jupyter_client$asynchronous$client$$$function__1_reqrep$$$function__1_wrapped(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_args = python_pars[1];
    PyObject *par_kwargs = python_pars[2];
    PyObject *var_reply = NULL;
    PyObject *var_timeout = NULL;
    PyObject *var_msg_id = NULL;
    struct Nuitka_FrameObject *frame_d752db6a576e57a83f722af71e20ccf8;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_d752db6a576e57a83f722af71e20ccf8 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_d752db6a576e57a83f722af71e20ccf8)) {
        Py_XDECREF(cache_frame_d752db6a576e57a83f722af71e20ccf8);

#if _DEBUG_REFCOUNTS
        if (cache_frame_d752db6a576e57a83f722af71e20ccf8 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_d752db6a576e57a83f722af71e20ccf8 = MAKE_FUNCTION_FRAME(codeobj_d752db6a576e57a83f722af71e20ccf8, module_jupyter_client$asynchronous$client, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_d752db6a576e57a83f722af71e20ccf8->m_type_description == NULL);
    frame_d752db6a576e57a83f722af71e20ccf8 = cache_frame_d752db6a576e57a83f722af71e20ccf8;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_d752db6a576e57a83f722af71e20ccf8);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_d752db6a576e57a83f722af71e20ccf8) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        CHECK_OBJECT(par_kwargs);
        tmp_called_instance_1 = par_kwargs;
        frame_d752db6a576e57a83f722af71e20ccf8->m_frame.f_lineno = 23;
        tmp_assign_source_1 = CALL_METHOD_WITH_ARGS2(
            tmp_called_instance_1,
            mod_consts[16],
            &PyTuple_GET_ITEM(mod_consts[17], 0)
        );

        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;
            type_description_1 = "oooooocc";
            goto frame_exception_exit_1;
        }
        assert(var_reply == NULL);
        var_reply = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_instance_2;
        if (par_kwargs == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[18]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 24;
            type_description_1 = "oooooocc";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_2 = par_kwargs;
        frame_d752db6a576e57a83f722af71e20ccf8->m_frame.f_lineno = 24;
        tmp_assign_source_2 = CALL_METHOD_WITH_ARGS2(
            tmp_called_instance_2,
            mod_consts[16],
            &PyTuple_GET_ITEM(mod_consts[19], 0)
        );

        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 24;
            type_description_1 = "oooooocc";
            goto frame_exception_exit_1;
        }
        assert(var_timeout == NULL);
        var_timeout = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_dircall_arg3_1;
        PyObject *tmp_dircall_arg4_1;
        if (Nuitka_Cell_GET(self->m_closure[1]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[3]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 25;
            type_description_1 = "oooooocc";
            goto frame_exception_exit_1;
        }

        tmp_dircall_arg1_1 = Nuitka_Cell_GET(self->m_closure[1]);
        CHECK_OBJECT(par_self);
        tmp_tuple_element_1 = par_self;
        tmp_dircall_arg2_1 = PyTuple_New(1);
        PyTuple_SET_ITEM0(tmp_dircall_arg2_1, 0, tmp_tuple_element_1);
        CHECK_OBJECT(par_args);
        tmp_dircall_arg3_1 = par_args;
        if (par_kwargs == NULL) {
            Py_DECREF(tmp_dircall_arg2_1);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[18]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 25;
            type_description_1 = "oooooocc";
            goto frame_exception_exit_1;
        }

        tmp_dircall_arg4_1 = par_kwargs;
        Py_INCREF(tmp_dircall_arg1_1);
        Py_INCREF(tmp_dircall_arg3_1);
        Py_INCREF(tmp_dircall_arg4_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1, tmp_dircall_arg4_1};
            tmp_assign_source_3 = impl___main__$$$function__2_complex_call_helper_pos_star_list_star_dict(dir_call_args);
        }
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 25;
            type_description_1 = "oooooocc";
            goto frame_exception_exit_1;
        }
        assert(var_msg_id == NULL);
        var_msg_id = tmp_assign_source_3;
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_operand_name_1;
        CHECK_OBJECT(var_reply);
        tmp_operand_name_1 = var_reply;
        tmp_res = CHECK_IF_TRUE(tmp_operand_name_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 26;
            type_description_1 = "oooooocc";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    CHECK_OBJECT(var_msg_id);
    tmp_return_value = var_msg_id;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    branch_no_1:;
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_expression_name_1;
        PyObject *tmp_args_name_1;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_kwargs_name_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_name_1 = par_self;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_1, mod_consts[20]);
        if (tmp_called_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 29;
            type_description_1 = "oooooocc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_msg_id);
        tmp_tuple_element_2 = var_msg_id;
        tmp_args_name_1 = PyTuple_New(1);
        PyTuple_SET_ITEM0(tmp_args_name_1, 0, tmp_tuple_element_2);
        tmp_dict_key_1 = mod_consts[21];
        CHECK_OBJECT(var_timeout);
        tmp_dict_value_1 = var_timeout;
        tmp_kwargs_name_1 = _PyDict_NewPresized( 2 );
        tmp_res = PyDict_SetItem(tmp_kwargs_name_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[22];
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[22]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 29;
            type_description_1 = "oooooocc";
            goto dict_build_exception_1;
        }

        tmp_dict_value_1 = Nuitka_Cell_GET(self->m_closure[0]);
        tmp_res = PyDict_SetItem(tmp_kwargs_name_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        goto dict_build_noexception_1;
        // Exception handling pass through code for dict_build:
        dict_build_exception_1:;
        Py_DECREF(tmp_called_name_1);
        Py_DECREF(tmp_args_name_1);
        Py_DECREF(tmp_kwargs_name_1);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_1:;
        frame_d752db6a576e57a83f722af71e20ccf8->m_frame.f_lineno = 29;
        tmp_return_value = CALL_FUNCTION(tmp_called_name_1, tmp_args_name_1, tmp_kwargs_name_1);
        Py_DECREF(tmp_called_name_1);
        Py_DECREF(tmp_args_name_1);
        Py_DECREF(tmp_kwargs_name_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 29;
            type_description_1 = "oooooocc";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_d752db6a576e57a83f722af71e20ccf8);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_d752db6a576e57a83f722af71e20ccf8);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_d752db6a576e57a83f722af71e20ccf8);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_d752db6a576e57a83f722af71e20ccf8, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_d752db6a576e57a83f722af71e20ccf8->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_d752db6a576e57a83f722af71e20ccf8, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_d752db6a576e57a83f722af71e20ccf8,
        type_description_1,
        par_self,
        par_args,
        par_kwargs,
        var_reply,
        var_timeout,
        var_msg_id,
        self->m_closure[1],
        self->m_closure[0]
    );


    // Release cached frame if used for exception.
    if (frame_d752db6a576e57a83f722af71e20ccf8 == cache_frame_d752db6a576e57a83f722af71e20ccf8) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_d752db6a576e57a83f722af71e20ccf8);
        cache_frame_d752db6a576e57a83f722af71e20ccf8 = NULL;
    }

    assertFrameObject(frame_d752db6a576e57a83f722af71e20ccf8);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(par_self);
    par_self = NULL;
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);
    par_args = NULL;
    Py_XDECREF(par_kwargs);
    par_kwargs = NULL;
    CHECK_OBJECT(var_reply);
    Py_DECREF(var_reply);
    var_reply = NULL;
    Py_XDECREF(var_timeout);
    var_timeout = NULL;
    Py_XDECREF(var_msg_id);
    var_msg_id = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(par_self);
    par_self = NULL;
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);
    par_args = NULL;
    Py_XDECREF(par_kwargs);
    par_kwargs = NULL;
    Py_XDECREF(var_reply);
    var_reply = NULL;
    Py_XDECREF(var_timeout);
    var_timeout = NULL;
    Py_XDECREF(var_msg_id);
    var_msg_id = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_jupyter_client$asynchronous$client$$$function__2__context_default(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_2930e248b63c577e75fc57eb4b6a6531;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_2930e248b63c577e75fc57eb4b6a6531 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_2930e248b63c577e75fc57eb4b6a6531)) {
        Py_XDECREF(cache_frame_2930e248b63c577e75fc57eb4b6a6531);

#if _DEBUG_REFCOUNTS
        if (cache_frame_2930e248b63c577e75fc57eb4b6a6531 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_2930e248b63c577e75fc57eb4b6a6531 = MAKE_FUNCTION_FRAME(codeobj_2930e248b63c577e75fc57eb4b6a6531, module_jupyter_client$asynchronous$client, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_2930e248b63c577e75fc57eb4b6a6531->m_type_description == NULL);
    frame_2930e248b63c577e75fc57eb4b6a6531 = cache_frame_2930e248b63c577e75fc57eb4b6a6531;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_2930e248b63c577e75fc57eb4b6a6531);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_2930e248b63c577e75fc57eb4b6a6531) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_name_1;
        tmp_expression_name_1 = GET_STRING_DICT_VALUE(moduledict_jupyter_client$asynchronous$client, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_name_1 == NULL)) {
            tmp_expression_name_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 69;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_1, mod_consts[24]);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 69;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_2930e248b63c577e75fc57eb4b6a6531->m_frame.f_lineno = 69;
        tmp_return_value = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[25]);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 69;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_2930e248b63c577e75fc57eb4b6a6531);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_2930e248b63c577e75fc57eb4b6a6531);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_2930e248b63c577e75fc57eb4b6a6531);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_2930e248b63c577e75fc57eb4b6a6531, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_2930e248b63c577e75fc57eb4b6a6531->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_2930e248b63c577e75fc57eb4b6a6531, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_2930e248b63c577e75fc57eb4b6a6531,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_2930e248b63c577e75fc57eb4b6a6531 == cache_frame_2930e248b63c577e75fc57eb4b6a6531) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_2930e248b63c577e75fc57eb4b6a6531);
        cache_frame_2930e248b63c577e75fc57eb4b6a6531 = NULL;
    }

    assertFrameObject(frame_2930e248b63c577e75fc57eb4b6a6531);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    par_self = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    par_self = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_jupyter_client$asynchronous$client$$$function__3_get_shell_msg(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_CellObject *par_self = Nuitka_Cell_New1(python_pars[0]);
    struct Nuitka_CellObject *par_args = Nuitka_Cell_New1(python_pars[1]);
    struct Nuitka_CellObject *par_kwargs = Nuitka_Cell_New1(python_pars[2]);
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    // Tried code:
    {
        struct Nuitka_CellObject *tmp_closure_1[3];

        tmp_closure_1[0] = par_args;
        Py_INCREF(tmp_closure_1[0]);
        tmp_closure_1[1] = par_kwargs;
        Py_INCREF(tmp_closure_1[1]);
        tmp_closure_1[2] = par_self;
        Py_INCREF(tmp_closure_1[2]);

        tmp_return_value = MAKE_COROUTINE_jupyter_client$asynchronous$client$$$function__3_get_shell_msg$$$coroutine__1_get_shell_msg(tmp_closure_1);

        goto try_return_handler_1;
    }
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    par_self = NULL;
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);
    par_args = NULL;
    CHECK_OBJECT(par_kwargs);
    Py_DECREF(par_kwargs);
    par_kwargs = NULL;
    goto function_return_exit;
    // End of try:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    par_self = NULL;
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);
    par_args = NULL;
    CHECK_OBJECT(par_kwargs);
    Py_DECREF(par_kwargs);
    par_kwargs = NULL;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}



struct jupyter_client$asynchronous$client$$$function__3_get_shell_msg$$$coroutine__1_get_shell_msg_locals {
    char const *type_description_1;
    PyObject *tmp_return_value;
    PyObject *exception_type;
    PyObject *exception_value;
    PyTracebackObject *exception_tb;
    int exception_lineno;
    char yield_tmps[1024];
};

static PyObject *jupyter_client$asynchronous$client$$$function__3_get_shell_msg$$$coroutine__1_get_shell_msg_context(struct Nuitka_CoroutineObject *coroutine, PyObject *yield_return_value) {
    CHECK_OBJECT(coroutine);
    assert(Nuitka_Coroutine_Check((PyObject *)coroutine));

    // Heap access if used.
    struct jupyter_client$asynchronous$client$$$function__3_get_shell_msg$$$coroutine__1_get_shell_msg_locals *coroutine_heap = (struct jupyter_client$asynchronous$client$$$function__3_get_shell_msg$$$coroutine__1_get_shell_msg_locals *)coroutine->m_heap_storage;

    // Dispatch to yield based on return label index:
    switch(coroutine->m_yield_return_index) {
    case 1: goto yield_return_1;
    }

    // Local variable initialization
    static struct Nuitka_FrameObject *cache_m_frame = NULL;
    coroutine_heap->type_description_1 = NULL;
    coroutine_heap->tmp_return_value = NULL;
    coroutine_heap->exception_type = NULL;
    coroutine_heap->exception_value = NULL;
    coroutine_heap->exception_tb = NULL;
    coroutine_heap->exception_lineno = 0;

    // Actual coroutine body.
    if (isFrameUnusable(cache_m_frame)) {
        Py_XDECREF(cache_m_frame);

#if _DEBUG_REFCOUNTS
        if (cache_m_frame == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_m_frame = MAKE_FUNCTION_FRAME(codeobj_523f791db65b1794a82d02f1dece36a0, module_jupyter_client$asynchronous$client, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    coroutine->m_frame = cache_m_frame;

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    Py_INCREF(coroutine->m_frame);
    assert(Py_REFCNT(coroutine->m_frame) == 2); // Frame stack

#if PYTHON_VERSION >= 0x340
    coroutine->m_frame->m_frame.f_gen = (PyObject *)coroutine;
#endif

    assert(coroutine->m_frame->m_frame.f_back == NULL);
    Py_CLEAR(coroutine->m_frame->m_frame.f_back);

    coroutine->m_frame->m_frame.f_back = PyThreadState_GET()->frame;
    Py_INCREF(coroutine->m_frame->m_frame.f_back);

    PyThreadState_GET()->frame = &coroutine->m_frame->m_frame;
    Py_INCREF(coroutine->m_frame);

    Nuitka_Frame_MarkAsExecuting(coroutine->m_frame);

#if PYTHON_VERSION >= 0x300
    // Accept currently existing exception as the one to publish again when we
    // yield or yield from.
    {
        PyThreadState *thread_state = PyThreadState_GET();

        EXC_TYPE_F(coroutine) = EXC_TYPE(thread_state);
        if (EXC_TYPE_F(coroutine) == Py_None) EXC_TYPE_F(coroutine) = NULL;
        Py_XINCREF(EXC_TYPE_F(coroutine));
        EXC_VALUE_F(coroutine) = EXC_VALUE(thread_state);
        Py_XINCREF(EXC_VALUE_F(coroutine));
        EXC_TRACEBACK_F(coroutine) = EXC_TRACEBACK(thread_state);
        Py_XINCREF(EXC_TRACEBACK_F(coroutine));
    }

#endif

    // Framed code:
    {
        PyObject *tmp_expression_name_1;
        PyObject *tmp_expression_name_2;
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_expression_name_3;
        PyObject *tmp_expression_name_4;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_dircall_arg3_1;
        coroutine->m_frame->m_frame.f_lineno = 77;
        if (Nuitka_Cell_GET(coroutine->m_closure[2]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[27]);
            coroutine_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            CHAIN_EXCEPTION(coroutine_heap->exception_value);

            coroutine_heap->exception_lineno = 77;
            coroutine_heap->type_description_1 = "ccc";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_4 = Nuitka_Cell_GET(coroutine->m_closure[2]);
        tmp_expression_name_3 = LOOKUP_ATTRIBUTE(tmp_expression_name_4, mod_consts[28]);
        if (tmp_expression_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 77;
            coroutine_heap->type_description_1 = "ccc";
            goto frame_exception_exit_1;
        }
        tmp_dircall_arg1_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_3, mod_consts[29]);
        Py_DECREF(tmp_expression_name_3);
        if (tmp_dircall_arg1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 77;
            coroutine_heap->type_description_1 = "ccc";
            goto frame_exception_exit_1;
        }
        if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {
            Py_DECREF(tmp_dircall_arg1_1);
            FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[30]);
            coroutine_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            CHAIN_EXCEPTION(coroutine_heap->exception_value);

            coroutine_heap->exception_lineno = 77;
            coroutine_heap->type_description_1 = "ccc";
            goto frame_exception_exit_1;
        }

        tmp_dircall_arg2_1 = Nuitka_Cell_GET(coroutine->m_closure[0]);
        if (Nuitka_Cell_GET(coroutine->m_closure[1]) == NULL) {
            Py_DECREF(tmp_dircall_arg1_1);
            FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[18]);
            coroutine_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            CHAIN_EXCEPTION(coroutine_heap->exception_value);

            coroutine_heap->exception_lineno = 77;
            coroutine_heap->type_description_1 = "ccc";
            goto frame_exception_exit_1;
        }

        tmp_dircall_arg3_1 = Nuitka_Cell_GET(coroutine->m_closure[1]);
        Py_INCREF(tmp_dircall_arg2_1);
        Py_INCREF(tmp_dircall_arg3_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
            tmp_expression_name_2 = impl___main__$$$function__5_complex_call_helper_star_list_star_dict(dir_call_args);
        }
        if (tmp_expression_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 77;
            coroutine_heap->type_description_1 = "ccc";
            goto frame_exception_exit_1;
        }
        tmp_expression_name_1 = ASYNC_AWAIT(tmp_expression_name_2, await_normal);
        Py_DECREF(tmp_expression_name_2);
        if (tmp_expression_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 77;
            coroutine_heap->type_description_1 = "ccc";
            goto frame_exception_exit_1;
        }
        Nuitka_PreserveHeap(coroutine_heap->yield_tmps, &tmp_expression_name_2, sizeof(PyObject *), &tmp_dircall_arg1_1, sizeof(PyObject *), &tmp_expression_name_3, sizeof(PyObject *), &tmp_expression_name_4, sizeof(PyObject *), &tmp_dircall_arg2_1, sizeof(PyObject *), &tmp_dircall_arg3_1, sizeof(PyObject *), NULL);
        coroutine->m_yield_return_index = 1;
        coroutine->m_yieldfrom = tmp_expression_name_1;
        coroutine->m_awaiting = true;
        return NULL;

        yield_return_1:
        Nuitka_RestoreHeap(coroutine_heap->yield_tmps, &tmp_expression_name_2, sizeof(PyObject *), &tmp_dircall_arg1_1, sizeof(PyObject *), &tmp_expression_name_3, sizeof(PyObject *), &tmp_expression_name_4, sizeof(PyObject *), &tmp_dircall_arg2_1, sizeof(PyObject *), &tmp_dircall_arg3_1, sizeof(PyObject *), NULL);
        coroutine->m_awaiting = false;

        if (yield_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 77;
            coroutine_heap->type_description_1 = "ccc";
            goto frame_exception_exit_1;
        }
        coroutine_heap->tmp_return_value = yield_return_value;
        if (coroutine_heap->tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 77;
            coroutine_heap->type_description_1 = "ccc";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

    Nuitka_Frame_MarkAsNotExecuting(coroutine->m_frame);

#if PYTHON_VERSION >= 0x300
    Py_CLEAR(EXC_TYPE_F(coroutine));
    Py_CLEAR(EXC_VALUE_F(coroutine));
    Py_CLEAR(EXC_TRACEBACK_F(coroutine));
#endif

    // Allow re-use of the frame again.
    Py_DECREF(coroutine->m_frame);
    goto frame_no_exception_1;

    frame_return_exit_1:;

#if PYTHON_VERSION >= 0x300
    Py_CLEAR(EXC_TYPE_F(coroutine));
    Py_CLEAR(EXC_VALUE_F(coroutine));
    Py_CLEAR(EXC_TRACEBACK_F(coroutine));
#endif

    Py_DECREF(coroutine->m_frame);
    goto function_return_exit;

    frame_exception_exit_1:;

    // If it's not an exit exception, consider and create a traceback for it.
    if (!EXCEPTION_MATCH_GENERATOR(coroutine_heap->exception_type)) {
        if (coroutine_heap->exception_tb == NULL) {
            coroutine_heap->exception_tb = MAKE_TRACEBACK(coroutine->m_frame, coroutine_heap->exception_lineno);
        } else if (coroutine_heap->exception_tb->tb_frame != &coroutine->m_frame->m_frame) {
            coroutine_heap->exception_tb = ADD_TRACEBACK(coroutine_heap->exception_tb, coroutine->m_frame, coroutine_heap->exception_lineno);
        }

        Nuitka_Frame_AttachLocals(
            coroutine->m_frame,
            coroutine_heap->type_description_1,
            coroutine->m_closure[2],
            coroutine->m_closure[0],
            coroutine->m_closure[1]
        );


        // Release cached frame if used for exception.
        if (coroutine->m_frame == cache_m_frame) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif

            Py_DECREF(cache_m_frame);
            cache_m_frame = NULL;
        }

        assertFrameObject(coroutine->m_frame);
    }

#if PYTHON_VERSION >= 0x300
    Py_CLEAR(EXC_TYPE_F(coroutine));
    Py_CLEAR(EXC_VALUE_F(coroutine));
    Py_CLEAR(EXC_TRACEBACK_F(coroutine));
#endif

    Py_DECREF(coroutine->m_frame);

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must be present");

    function_exception_exit:

    assert(coroutine_heap->exception_type);
    RESTORE_ERROR_OCCURRED(coroutine_heap->exception_type, coroutine_heap->exception_value, coroutine_heap->exception_tb);
    return NULL;
    function_return_exit:;

    coroutine->m_returned = coroutine_heap->tmp_return_value;

    return NULL;

}

static PyObject *MAKE_COROUTINE_jupyter_client$asynchronous$client$$$function__3_get_shell_msg$$$coroutine__1_get_shell_msg(struct Nuitka_CellObject **closure) {
    return Nuitka_Coroutine_New(
        jupyter_client$asynchronous$client$$$function__3_get_shell_msg$$$coroutine__1_get_shell_msg_context,
        module_jupyter_client$asynchronous$client,
        mod_consts[31],
        mod_consts[32],
        codeobj_523f791db65b1794a82d02f1dece36a0,
        closure,
        3,
        sizeof(struct jupyter_client$asynchronous$client$$$function__3_get_shell_msg$$$coroutine__1_get_shell_msg_locals)
    );
}


static PyObject *impl_jupyter_client$asynchronous$client$$$function__4_get_iopub_msg(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_CellObject *par_self = Nuitka_Cell_New1(python_pars[0]);
    struct Nuitka_CellObject *par_args = Nuitka_Cell_New1(python_pars[1]);
    struct Nuitka_CellObject *par_kwargs = Nuitka_Cell_New1(python_pars[2]);
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    // Tried code:
    {
        struct Nuitka_CellObject *tmp_closure_1[3];

        tmp_closure_1[0] = par_args;
        Py_INCREF(tmp_closure_1[0]);
        tmp_closure_1[1] = par_kwargs;
        Py_INCREF(tmp_closure_1[1]);
        tmp_closure_1[2] = par_self;
        Py_INCREF(tmp_closure_1[2]);

        tmp_return_value = MAKE_COROUTINE_jupyter_client$asynchronous$client$$$function__4_get_iopub_msg$$$coroutine__1_get_iopub_msg(tmp_closure_1);

        goto try_return_handler_1;
    }
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    par_self = NULL;
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);
    par_args = NULL;
    CHECK_OBJECT(par_kwargs);
    Py_DECREF(par_kwargs);
    par_kwargs = NULL;
    goto function_return_exit;
    // End of try:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    par_self = NULL;
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);
    par_args = NULL;
    CHECK_OBJECT(par_kwargs);
    Py_DECREF(par_kwargs);
    par_kwargs = NULL;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}



struct jupyter_client$asynchronous$client$$$function__4_get_iopub_msg$$$coroutine__1_get_iopub_msg_locals {
    char const *type_description_1;
    PyObject *tmp_return_value;
    PyObject *exception_type;
    PyObject *exception_value;
    PyTracebackObject *exception_tb;
    int exception_lineno;
    char yield_tmps[1024];
};

static PyObject *jupyter_client$asynchronous$client$$$function__4_get_iopub_msg$$$coroutine__1_get_iopub_msg_context(struct Nuitka_CoroutineObject *coroutine, PyObject *yield_return_value) {
    CHECK_OBJECT(coroutine);
    assert(Nuitka_Coroutine_Check((PyObject *)coroutine));

    // Heap access if used.
    struct jupyter_client$asynchronous$client$$$function__4_get_iopub_msg$$$coroutine__1_get_iopub_msg_locals *coroutine_heap = (struct jupyter_client$asynchronous$client$$$function__4_get_iopub_msg$$$coroutine__1_get_iopub_msg_locals *)coroutine->m_heap_storage;

    // Dispatch to yield based on return label index:
    switch(coroutine->m_yield_return_index) {
    case 1: goto yield_return_1;
    }

    // Local variable initialization
    static struct Nuitka_FrameObject *cache_m_frame = NULL;
    coroutine_heap->type_description_1 = NULL;
    coroutine_heap->tmp_return_value = NULL;
    coroutine_heap->exception_type = NULL;
    coroutine_heap->exception_value = NULL;
    coroutine_heap->exception_tb = NULL;
    coroutine_heap->exception_lineno = 0;

    // Actual coroutine body.
    if (isFrameUnusable(cache_m_frame)) {
        Py_XDECREF(cache_m_frame);

#if _DEBUG_REFCOUNTS
        if (cache_m_frame == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_m_frame = MAKE_FUNCTION_FRAME(codeobj_f6c1fbcb99fcd04f0199a6e66f74a97b, module_jupyter_client$asynchronous$client, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    coroutine->m_frame = cache_m_frame;

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    Py_INCREF(coroutine->m_frame);
    assert(Py_REFCNT(coroutine->m_frame) == 2); // Frame stack

#if PYTHON_VERSION >= 0x340
    coroutine->m_frame->m_frame.f_gen = (PyObject *)coroutine;
#endif

    assert(coroutine->m_frame->m_frame.f_back == NULL);
    Py_CLEAR(coroutine->m_frame->m_frame.f_back);

    coroutine->m_frame->m_frame.f_back = PyThreadState_GET()->frame;
    Py_INCREF(coroutine->m_frame->m_frame.f_back);

    PyThreadState_GET()->frame = &coroutine->m_frame->m_frame;
    Py_INCREF(coroutine->m_frame);

    Nuitka_Frame_MarkAsExecuting(coroutine->m_frame);

#if PYTHON_VERSION >= 0x300
    // Accept currently existing exception as the one to publish again when we
    // yield or yield from.
    {
        PyThreadState *thread_state = PyThreadState_GET();

        EXC_TYPE_F(coroutine) = EXC_TYPE(thread_state);
        if (EXC_TYPE_F(coroutine) == Py_None) EXC_TYPE_F(coroutine) = NULL;
        Py_XINCREF(EXC_TYPE_F(coroutine));
        EXC_VALUE_F(coroutine) = EXC_VALUE(thread_state);
        Py_XINCREF(EXC_VALUE_F(coroutine));
        EXC_TRACEBACK_F(coroutine) = EXC_TRACEBACK(thread_state);
        Py_XINCREF(EXC_TRACEBACK_F(coroutine));
    }

#endif

    // Framed code:
    {
        PyObject *tmp_expression_name_1;
        PyObject *tmp_expression_name_2;
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_expression_name_3;
        PyObject *tmp_expression_name_4;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_dircall_arg3_1;
        coroutine->m_frame->m_frame.f_lineno = 81;
        if (Nuitka_Cell_GET(coroutine->m_closure[2]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[27]);
            coroutine_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            CHAIN_EXCEPTION(coroutine_heap->exception_value);

            coroutine_heap->exception_lineno = 81;
            coroutine_heap->type_description_1 = "ccc";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_4 = Nuitka_Cell_GET(coroutine->m_closure[2]);
        tmp_expression_name_3 = LOOKUP_ATTRIBUTE(tmp_expression_name_4, mod_consts[34]);
        if (tmp_expression_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 81;
            coroutine_heap->type_description_1 = "ccc";
            goto frame_exception_exit_1;
        }
        tmp_dircall_arg1_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_3, mod_consts[29]);
        Py_DECREF(tmp_expression_name_3);
        if (tmp_dircall_arg1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 81;
            coroutine_heap->type_description_1 = "ccc";
            goto frame_exception_exit_1;
        }
        if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {
            Py_DECREF(tmp_dircall_arg1_1);
            FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[30]);
            coroutine_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            CHAIN_EXCEPTION(coroutine_heap->exception_value);

            coroutine_heap->exception_lineno = 81;
            coroutine_heap->type_description_1 = "ccc";
            goto frame_exception_exit_1;
        }

        tmp_dircall_arg2_1 = Nuitka_Cell_GET(coroutine->m_closure[0]);
        if (Nuitka_Cell_GET(coroutine->m_closure[1]) == NULL) {
            Py_DECREF(tmp_dircall_arg1_1);
            FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[18]);
            coroutine_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            CHAIN_EXCEPTION(coroutine_heap->exception_value);

            coroutine_heap->exception_lineno = 81;
            coroutine_heap->type_description_1 = "ccc";
            goto frame_exception_exit_1;
        }

        tmp_dircall_arg3_1 = Nuitka_Cell_GET(coroutine->m_closure[1]);
        Py_INCREF(tmp_dircall_arg2_1);
        Py_INCREF(tmp_dircall_arg3_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
            tmp_expression_name_2 = impl___main__$$$function__5_complex_call_helper_star_list_star_dict(dir_call_args);
        }
        if (tmp_expression_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 81;
            coroutine_heap->type_description_1 = "ccc";
            goto frame_exception_exit_1;
        }
        tmp_expression_name_1 = ASYNC_AWAIT(tmp_expression_name_2, await_normal);
        Py_DECREF(tmp_expression_name_2);
        if (tmp_expression_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 81;
            coroutine_heap->type_description_1 = "ccc";
            goto frame_exception_exit_1;
        }
        Nuitka_PreserveHeap(coroutine_heap->yield_tmps, &tmp_expression_name_2, sizeof(PyObject *), &tmp_dircall_arg1_1, sizeof(PyObject *), &tmp_expression_name_3, sizeof(PyObject *), &tmp_expression_name_4, sizeof(PyObject *), &tmp_dircall_arg2_1, sizeof(PyObject *), &tmp_dircall_arg3_1, sizeof(PyObject *), NULL);
        coroutine->m_yield_return_index = 1;
        coroutine->m_yieldfrom = tmp_expression_name_1;
        coroutine->m_awaiting = true;
        return NULL;

        yield_return_1:
        Nuitka_RestoreHeap(coroutine_heap->yield_tmps, &tmp_expression_name_2, sizeof(PyObject *), &tmp_dircall_arg1_1, sizeof(PyObject *), &tmp_expression_name_3, sizeof(PyObject *), &tmp_expression_name_4, sizeof(PyObject *), &tmp_dircall_arg2_1, sizeof(PyObject *), &tmp_dircall_arg3_1, sizeof(PyObject *), NULL);
        coroutine->m_awaiting = false;

        if (yield_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 81;
            coroutine_heap->type_description_1 = "ccc";
            goto frame_exception_exit_1;
        }
        coroutine_heap->tmp_return_value = yield_return_value;
        if (coroutine_heap->tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 81;
            coroutine_heap->type_description_1 = "ccc";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

    Nuitka_Frame_MarkAsNotExecuting(coroutine->m_frame);

#if PYTHON_VERSION >= 0x300
    Py_CLEAR(EXC_TYPE_F(coroutine));
    Py_CLEAR(EXC_VALUE_F(coroutine));
    Py_CLEAR(EXC_TRACEBACK_F(coroutine));
#endif

    // Allow re-use of the frame again.
    Py_DECREF(coroutine->m_frame);
    goto frame_no_exception_1;

    frame_return_exit_1:;

#if PYTHON_VERSION >= 0x300
    Py_CLEAR(EXC_TYPE_F(coroutine));
    Py_CLEAR(EXC_VALUE_F(coroutine));
    Py_CLEAR(EXC_TRACEBACK_F(coroutine));
#endif

    Py_DECREF(coroutine->m_frame);
    goto function_return_exit;

    frame_exception_exit_1:;

    // If it's not an exit exception, consider and create a traceback for it.
    if (!EXCEPTION_MATCH_GENERATOR(coroutine_heap->exception_type)) {
        if (coroutine_heap->exception_tb == NULL) {
            coroutine_heap->exception_tb = MAKE_TRACEBACK(coroutine->m_frame, coroutine_heap->exception_lineno);
        } else if (coroutine_heap->exception_tb->tb_frame != &coroutine->m_frame->m_frame) {
            coroutine_heap->exception_tb = ADD_TRACEBACK(coroutine_heap->exception_tb, coroutine->m_frame, coroutine_heap->exception_lineno);
        }

        Nuitka_Frame_AttachLocals(
            coroutine->m_frame,
            coroutine_heap->type_description_1,
            coroutine->m_closure[2],
            coroutine->m_closure[0],
            coroutine->m_closure[1]
        );


        // Release cached frame if used for exception.
        if (coroutine->m_frame == cache_m_frame) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif

            Py_DECREF(cache_m_frame);
            cache_m_frame = NULL;
        }

        assertFrameObject(coroutine->m_frame);
    }

#if PYTHON_VERSION >= 0x300
    Py_CLEAR(EXC_TYPE_F(coroutine));
    Py_CLEAR(EXC_VALUE_F(coroutine));
    Py_CLEAR(EXC_TRACEBACK_F(coroutine));
#endif

    Py_DECREF(coroutine->m_frame);

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must be present");

    function_exception_exit:

    assert(coroutine_heap->exception_type);
    RESTORE_ERROR_OCCURRED(coroutine_heap->exception_type, coroutine_heap->exception_value, coroutine_heap->exception_tb);
    return NULL;
    function_return_exit:;

    coroutine->m_returned = coroutine_heap->tmp_return_value;

    return NULL;

}

static PyObject *MAKE_COROUTINE_jupyter_client$asynchronous$client$$$function__4_get_iopub_msg$$$coroutine__1_get_iopub_msg(struct Nuitka_CellObject **closure) {
    return Nuitka_Coroutine_New(
        jupyter_client$asynchronous$client$$$function__4_get_iopub_msg$$$coroutine__1_get_iopub_msg_context,
        module_jupyter_client$asynchronous$client,
        mod_consts[35],
        mod_consts[36],
        codeobj_f6c1fbcb99fcd04f0199a6e66f74a97b,
        closure,
        3,
        sizeof(struct jupyter_client$asynchronous$client$$$function__4_get_iopub_msg$$$coroutine__1_get_iopub_msg_locals)
    );
}


static PyObject *impl_jupyter_client$asynchronous$client$$$function__5_get_stdin_msg(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_CellObject *par_self = Nuitka_Cell_New1(python_pars[0]);
    struct Nuitka_CellObject *par_args = Nuitka_Cell_New1(python_pars[1]);
    struct Nuitka_CellObject *par_kwargs = Nuitka_Cell_New1(python_pars[2]);
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    // Tried code:
    {
        struct Nuitka_CellObject *tmp_closure_1[3];

        tmp_closure_1[0] = par_args;
        Py_INCREF(tmp_closure_1[0]);
        tmp_closure_1[1] = par_kwargs;
        Py_INCREF(tmp_closure_1[1]);
        tmp_closure_1[2] = par_self;
        Py_INCREF(tmp_closure_1[2]);

        tmp_return_value = MAKE_COROUTINE_jupyter_client$asynchronous$client$$$function__5_get_stdin_msg$$$coroutine__1_get_stdin_msg(tmp_closure_1);

        goto try_return_handler_1;
    }
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    par_self = NULL;
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);
    par_args = NULL;
    CHECK_OBJECT(par_kwargs);
    Py_DECREF(par_kwargs);
    par_kwargs = NULL;
    goto function_return_exit;
    // End of try:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    par_self = NULL;
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);
    par_args = NULL;
    CHECK_OBJECT(par_kwargs);
    Py_DECREF(par_kwargs);
    par_kwargs = NULL;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}



struct jupyter_client$asynchronous$client$$$function__5_get_stdin_msg$$$coroutine__1_get_stdin_msg_locals {
    char const *type_description_1;
    PyObject *tmp_return_value;
    PyObject *exception_type;
    PyObject *exception_value;
    PyTracebackObject *exception_tb;
    int exception_lineno;
    char yield_tmps[1024];
};

static PyObject *jupyter_client$asynchronous$client$$$function__5_get_stdin_msg$$$coroutine__1_get_stdin_msg_context(struct Nuitka_CoroutineObject *coroutine, PyObject *yield_return_value) {
    CHECK_OBJECT(coroutine);
    assert(Nuitka_Coroutine_Check((PyObject *)coroutine));

    // Heap access if used.
    struct jupyter_client$asynchronous$client$$$function__5_get_stdin_msg$$$coroutine__1_get_stdin_msg_locals *coroutine_heap = (struct jupyter_client$asynchronous$client$$$function__5_get_stdin_msg$$$coroutine__1_get_stdin_msg_locals *)coroutine->m_heap_storage;

    // Dispatch to yield based on return label index:
    switch(coroutine->m_yield_return_index) {
    case 1: goto yield_return_1;
    }

    // Local variable initialization
    static struct Nuitka_FrameObject *cache_m_frame = NULL;
    coroutine_heap->type_description_1 = NULL;
    coroutine_heap->tmp_return_value = NULL;
    coroutine_heap->exception_type = NULL;
    coroutine_heap->exception_value = NULL;
    coroutine_heap->exception_tb = NULL;
    coroutine_heap->exception_lineno = 0;

    // Actual coroutine body.
    if (isFrameUnusable(cache_m_frame)) {
        Py_XDECREF(cache_m_frame);

#if _DEBUG_REFCOUNTS
        if (cache_m_frame == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_m_frame = MAKE_FUNCTION_FRAME(codeobj_79b2badca8d1c3bd1408f545175d0010, module_jupyter_client$asynchronous$client, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    coroutine->m_frame = cache_m_frame;

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    Py_INCREF(coroutine->m_frame);
    assert(Py_REFCNT(coroutine->m_frame) == 2); // Frame stack

#if PYTHON_VERSION >= 0x340
    coroutine->m_frame->m_frame.f_gen = (PyObject *)coroutine;
#endif

    assert(coroutine->m_frame->m_frame.f_back == NULL);
    Py_CLEAR(coroutine->m_frame->m_frame.f_back);

    coroutine->m_frame->m_frame.f_back = PyThreadState_GET()->frame;
    Py_INCREF(coroutine->m_frame->m_frame.f_back);

    PyThreadState_GET()->frame = &coroutine->m_frame->m_frame;
    Py_INCREF(coroutine->m_frame);

    Nuitka_Frame_MarkAsExecuting(coroutine->m_frame);

#if PYTHON_VERSION >= 0x300
    // Accept currently existing exception as the one to publish again when we
    // yield or yield from.
    {
        PyThreadState *thread_state = PyThreadState_GET();

        EXC_TYPE_F(coroutine) = EXC_TYPE(thread_state);
        if (EXC_TYPE_F(coroutine) == Py_None) EXC_TYPE_F(coroutine) = NULL;
        Py_XINCREF(EXC_TYPE_F(coroutine));
        EXC_VALUE_F(coroutine) = EXC_VALUE(thread_state);
        Py_XINCREF(EXC_VALUE_F(coroutine));
        EXC_TRACEBACK_F(coroutine) = EXC_TRACEBACK(thread_state);
        Py_XINCREF(EXC_TRACEBACK_F(coroutine));
    }

#endif

    // Framed code:
    {
        PyObject *tmp_expression_name_1;
        PyObject *tmp_expression_name_2;
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_expression_name_3;
        PyObject *tmp_expression_name_4;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_dircall_arg3_1;
        coroutine->m_frame->m_frame.f_lineno = 85;
        if (Nuitka_Cell_GET(coroutine->m_closure[2]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[27]);
            coroutine_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            CHAIN_EXCEPTION(coroutine_heap->exception_value);

            coroutine_heap->exception_lineno = 85;
            coroutine_heap->type_description_1 = "ccc";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_4 = Nuitka_Cell_GET(coroutine->m_closure[2]);
        tmp_expression_name_3 = LOOKUP_ATTRIBUTE(tmp_expression_name_4, mod_consts[38]);
        if (tmp_expression_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 85;
            coroutine_heap->type_description_1 = "ccc";
            goto frame_exception_exit_1;
        }
        tmp_dircall_arg1_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_3, mod_consts[29]);
        Py_DECREF(tmp_expression_name_3);
        if (tmp_dircall_arg1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 85;
            coroutine_heap->type_description_1 = "ccc";
            goto frame_exception_exit_1;
        }
        if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {
            Py_DECREF(tmp_dircall_arg1_1);
            FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[30]);
            coroutine_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            CHAIN_EXCEPTION(coroutine_heap->exception_value);

            coroutine_heap->exception_lineno = 85;
            coroutine_heap->type_description_1 = "ccc";
            goto frame_exception_exit_1;
        }

        tmp_dircall_arg2_1 = Nuitka_Cell_GET(coroutine->m_closure[0]);
        if (Nuitka_Cell_GET(coroutine->m_closure[1]) == NULL) {
            Py_DECREF(tmp_dircall_arg1_1);
            FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[18]);
            coroutine_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            CHAIN_EXCEPTION(coroutine_heap->exception_value);

            coroutine_heap->exception_lineno = 85;
            coroutine_heap->type_description_1 = "ccc";
            goto frame_exception_exit_1;
        }

        tmp_dircall_arg3_1 = Nuitka_Cell_GET(coroutine->m_closure[1]);
        Py_INCREF(tmp_dircall_arg2_1);
        Py_INCREF(tmp_dircall_arg3_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
            tmp_expression_name_2 = impl___main__$$$function__5_complex_call_helper_star_list_star_dict(dir_call_args);
        }
        if (tmp_expression_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 85;
            coroutine_heap->type_description_1 = "ccc";
            goto frame_exception_exit_1;
        }
        tmp_expression_name_1 = ASYNC_AWAIT(tmp_expression_name_2, await_normal);
        Py_DECREF(tmp_expression_name_2);
        if (tmp_expression_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 85;
            coroutine_heap->type_description_1 = "ccc";
            goto frame_exception_exit_1;
        }
        Nuitka_PreserveHeap(coroutine_heap->yield_tmps, &tmp_expression_name_2, sizeof(PyObject *), &tmp_dircall_arg1_1, sizeof(PyObject *), &tmp_expression_name_3, sizeof(PyObject *), &tmp_expression_name_4, sizeof(PyObject *), &tmp_dircall_arg2_1, sizeof(PyObject *), &tmp_dircall_arg3_1, sizeof(PyObject *), NULL);
        coroutine->m_yield_return_index = 1;
        coroutine->m_yieldfrom = tmp_expression_name_1;
        coroutine->m_awaiting = true;
        return NULL;

        yield_return_1:
        Nuitka_RestoreHeap(coroutine_heap->yield_tmps, &tmp_expression_name_2, sizeof(PyObject *), &tmp_dircall_arg1_1, sizeof(PyObject *), &tmp_expression_name_3, sizeof(PyObject *), &tmp_expression_name_4, sizeof(PyObject *), &tmp_dircall_arg2_1, sizeof(PyObject *), &tmp_dircall_arg3_1, sizeof(PyObject *), NULL);
        coroutine->m_awaiting = false;

        if (yield_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 85;
            coroutine_heap->type_description_1 = "ccc";
            goto frame_exception_exit_1;
        }
        coroutine_heap->tmp_return_value = yield_return_value;
        if (coroutine_heap->tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 85;
            coroutine_heap->type_description_1 = "ccc";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

    Nuitka_Frame_MarkAsNotExecuting(coroutine->m_frame);

#if PYTHON_VERSION >= 0x300
    Py_CLEAR(EXC_TYPE_F(coroutine));
    Py_CLEAR(EXC_VALUE_F(coroutine));
    Py_CLEAR(EXC_TRACEBACK_F(coroutine));
#endif

    // Allow re-use of the frame again.
    Py_DECREF(coroutine->m_frame);
    goto frame_no_exception_1;

    frame_return_exit_1:;

#if PYTHON_VERSION >= 0x300
    Py_CLEAR(EXC_TYPE_F(coroutine));
    Py_CLEAR(EXC_VALUE_F(coroutine));
    Py_CLEAR(EXC_TRACEBACK_F(coroutine));
#endif

    Py_DECREF(coroutine->m_frame);
    goto function_return_exit;

    frame_exception_exit_1:;

    // If it's not an exit exception, consider and create a traceback for it.
    if (!EXCEPTION_MATCH_GENERATOR(coroutine_heap->exception_type)) {
        if (coroutine_heap->exception_tb == NULL) {
            coroutine_heap->exception_tb = MAKE_TRACEBACK(coroutine->m_frame, coroutine_heap->exception_lineno);
        } else if (coroutine_heap->exception_tb->tb_frame != &coroutine->m_frame->m_frame) {
            coroutine_heap->exception_tb = ADD_TRACEBACK(coroutine_heap->exception_tb, coroutine->m_frame, coroutine_heap->exception_lineno);
        }

        Nuitka_Frame_AttachLocals(
            coroutine->m_frame,
            coroutine_heap->type_description_1,
            coroutine->m_closure[2],
            coroutine->m_closure[0],
            coroutine->m_closure[1]
        );


        // Release cached frame if used for exception.
        if (coroutine->m_frame == cache_m_frame) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif

            Py_DECREF(cache_m_frame);
            cache_m_frame = NULL;
        }

        assertFrameObject(coroutine->m_frame);
    }

#if PYTHON_VERSION >= 0x300
    Py_CLEAR(EXC_TYPE_F(coroutine));
    Py_CLEAR(EXC_VALUE_F(coroutine));
    Py_CLEAR(EXC_TRACEBACK_F(coroutine));
#endif

    Py_DECREF(coroutine->m_frame);

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must be present");

    function_exception_exit:

    assert(coroutine_heap->exception_type);
    RESTORE_ERROR_OCCURRED(coroutine_heap->exception_type, coroutine_heap->exception_value, coroutine_heap->exception_tb);
    return NULL;
    function_return_exit:;

    coroutine->m_returned = coroutine_heap->tmp_return_value;

    return NULL;

}

static PyObject *MAKE_COROUTINE_jupyter_client$asynchronous$client$$$function__5_get_stdin_msg$$$coroutine__1_get_stdin_msg(struct Nuitka_CellObject **closure) {
    return Nuitka_Coroutine_New(
        jupyter_client$asynchronous$client$$$function__5_get_stdin_msg$$$coroutine__1_get_stdin_msg_context,
        module_jupyter_client$asynchronous$client,
        mod_consts[39],
        mod_consts[40],
        codeobj_79b2badca8d1c3bd1408f545175d0010,
        closure,
        3,
        sizeof(struct jupyter_client$asynchronous$client$$$function__5_get_stdin_msg$$$coroutine__1_get_stdin_msg_locals)
    );
}


static PyObject *impl_jupyter_client$asynchronous$client$$$function__6_get_control_msg(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_CellObject *par_self = Nuitka_Cell_New1(python_pars[0]);
    struct Nuitka_CellObject *par_args = Nuitka_Cell_New1(python_pars[1]);
    struct Nuitka_CellObject *par_kwargs = Nuitka_Cell_New1(python_pars[2]);
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    // Tried code:
    {
        struct Nuitka_CellObject *tmp_closure_1[3];

        tmp_closure_1[0] = par_args;
        Py_INCREF(tmp_closure_1[0]);
        tmp_closure_1[1] = par_kwargs;
        Py_INCREF(tmp_closure_1[1]);
        tmp_closure_1[2] = par_self;
        Py_INCREF(tmp_closure_1[2]);

        tmp_return_value = MAKE_COROUTINE_jupyter_client$asynchronous$client$$$function__6_get_control_msg$$$coroutine__1_get_control_msg(tmp_closure_1);

        goto try_return_handler_1;
    }
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    par_self = NULL;
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);
    par_args = NULL;
    CHECK_OBJECT(par_kwargs);
    Py_DECREF(par_kwargs);
    par_kwargs = NULL;
    goto function_return_exit;
    // End of try:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    par_self = NULL;
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);
    par_args = NULL;
    CHECK_OBJECT(par_kwargs);
    Py_DECREF(par_kwargs);
    par_kwargs = NULL;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}



struct jupyter_client$asynchronous$client$$$function__6_get_control_msg$$$coroutine__1_get_control_msg_locals {
    char const *type_description_1;
    PyObject *tmp_return_value;
    PyObject *exception_type;
    PyObject *exception_value;
    PyTracebackObject *exception_tb;
    int exception_lineno;
    char yield_tmps[1024];
};

static PyObject *jupyter_client$asynchronous$client$$$function__6_get_control_msg$$$coroutine__1_get_control_msg_context(struct Nuitka_CoroutineObject *coroutine, PyObject *yield_return_value) {
    CHECK_OBJECT(coroutine);
    assert(Nuitka_Coroutine_Check((PyObject *)coroutine));

    // Heap access if used.
    struct jupyter_client$asynchronous$client$$$function__6_get_control_msg$$$coroutine__1_get_control_msg_locals *coroutine_heap = (struct jupyter_client$asynchronous$client$$$function__6_get_control_msg$$$coroutine__1_get_control_msg_locals *)coroutine->m_heap_storage;

    // Dispatch to yield based on return label index:
    switch(coroutine->m_yield_return_index) {
    case 1: goto yield_return_1;
    }

    // Local variable initialization
    static struct Nuitka_FrameObject *cache_m_frame = NULL;
    coroutine_heap->type_description_1 = NULL;
    coroutine_heap->tmp_return_value = NULL;
    coroutine_heap->exception_type = NULL;
    coroutine_heap->exception_value = NULL;
    coroutine_heap->exception_tb = NULL;
    coroutine_heap->exception_lineno = 0;

    // Actual coroutine body.
    if (isFrameUnusable(cache_m_frame)) {
        Py_XDECREF(cache_m_frame);

#if _DEBUG_REFCOUNTS
        if (cache_m_frame == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_m_frame = MAKE_FUNCTION_FRAME(codeobj_ba73b7779d13006987ac70246725b466, module_jupyter_client$asynchronous$client, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    coroutine->m_frame = cache_m_frame;

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    Py_INCREF(coroutine->m_frame);
    assert(Py_REFCNT(coroutine->m_frame) == 2); // Frame stack

#if PYTHON_VERSION >= 0x340
    coroutine->m_frame->m_frame.f_gen = (PyObject *)coroutine;
#endif

    assert(coroutine->m_frame->m_frame.f_back == NULL);
    Py_CLEAR(coroutine->m_frame->m_frame.f_back);

    coroutine->m_frame->m_frame.f_back = PyThreadState_GET()->frame;
    Py_INCREF(coroutine->m_frame->m_frame.f_back);

    PyThreadState_GET()->frame = &coroutine->m_frame->m_frame;
    Py_INCREF(coroutine->m_frame);

    Nuitka_Frame_MarkAsExecuting(coroutine->m_frame);

#if PYTHON_VERSION >= 0x300
    // Accept currently existing exception as the one to publish again when we
    // yield or yield from.
    {
        PyThreadState *thread_state = PyThreadState_GET();

        EXC_TYPE_F(coroutine) = EXC_TYPE(thread_state);
        if (EXC_TYPE_F(coroutine) == Py_None) EXC_TYPE_F(coroutine) = NULL;
        Py_XINCREF(EXC_TYPE_F(coroutine));
        EXC_VALUE_F(coroutine) = EXC_VALUE(thread_state);
        Py_XINCREF(EXC_VALUE_F(coroutine));
        EXC_TRACEBACK_F(coroutine) = EXC_TRACEBACK(thread_state);
        Py_XINCREF(EXC_TRACEBACK_F(coroutine));
    }

#endif

    // Framed code:
    {
        PyObject *tmp_expression_name_1;
        PyObject *tmp_expression_name_2;
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_expression_name_3;
        PyObject *tmp_expression_name_4;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_dircall_arg3_1;
        coroutine->m_frame->m_frame.f_lineno = 89;
        if (Nuitka_Cell_GET(coroutine->m_closure[2]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[27]);
            coroutine_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            CHAIN_EXCEPTION(coroutine_heap->exception_value);

            coroutine_heap->exception_lineno = 89;
            coroutine_heap->type_description_1 = "ccc";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_4 = Nuitka_Cell_GET(coroutine->m_closure[2]);
        tmp_expression_name_3 = LOOKUP_ATTRIBUTE(tmp_expression_name_4, mod_consts[42]);
        if (tmp_expression_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 89;
            coroutine_heap->type_description_1 = "ccc";
            goto frame_exception_exit_1;
        }
        tmp_dircall_arg1_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_3, mod_consts[29]);
        Py_DECREF(tmp_expression_name_3);
        if (tmp_dircall_arg1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 89;
            coroutine_heap->type_description_1 = "ccc";
            goto frame_exception_exit_1;
        }
        if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {
            Py_DECREF(tmp_dircall_arg1_1);
            FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[30]);
            coroutine_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            CHAIN_EXCEPTION(coroutine_heap->exception_value);

            coroutine_heap->exception_lineno = 89;
            coroutine_heap->type_description_1 = "ccc";
            goto frame_exception_exit_1;
        }

        tmp_dircall_arg2_1 = Nuitka_Cell_GET(coroutine->m_closure[0]);
        if (Nuitka_Cell_GET(coroutine->m_closure[1]) == NULL) {
            Py_DECREF(tmp_dircall_arg1_1);
            FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[18]);
            coroutine_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            CHAIN_EXCEPTION(coroutine_heap->exception_value);

            coroutine_heap->exception_lineno = 89;
            coroutine_heap->type_description_1 = "ccc";
            goto frame_exception_exit_1;
        }

        tmp_dircall_arg3_1 = Nuitka_Cell_GET(coroutine->m_closure[1]);
        Py_INCREF(tmp_dircall_arg2_1);
        Py_INCREF(tmp_dircall_arg3_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
            tmp_expression_name_2 = impl___main__$$$function__5_complex_call_helper_star_list_star_dict(dir_call_args);
        }
        if (tmp_expression_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 89;
            coroutine_heap->type_description_1 = "ccc";
            goto frame_exception_exit_1;
        }
        tmp_expression_name_1 = ASYNC_AWAIT(tmp_expression_name_2, await_normal);
        Py_DECREF(tmp_expression_name_2);
        if (tmp_expression_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 89;
            coroutine_heap->type_description_1 = "ccc";
            goto frame_exception_exit_1;
        }
        Nuitka_PreserveHeap(coroutine_heap->yield_tmps, &tmp_expression_name_2, sizeof(PyObject *), &tmp_dircall_arg1_1, sizeof(PyObject *), &tmp_expression_name_3, sizeof(PyObject *), &tmp_expression_name_4, sizeof(PyObject *), &tmp_dircall_arg2_1, sizeof(PyObject *), &tmp_dircall_arg3_1, sizeof(PyObject *), NULL);
        coroutine->m_yield_return_index = 1;
        coroutine->m_yieldfrom = tmp_expression_name_1;
        coroutine->m_awaiting = true;
        return NULL;

        yield_return_1:
        Nuitka_RestoreHeap(coroutine_heap->yield_tmps, &tmp_expression_name_2, sizeof(PyObject *), &tmp_dircall_arg1_1, sizeof(PyObject *), &tmp_expression_name_3, sizeof(PyObject *), &tmp_expression_name_4, sizeof(PyObject *), &tmp_dircall_arg2_1, sizeof(PyObject *), &tmp_dircall_arg3_1, sizeof(PyObject *), NULL);
        coroutine->m_awaiting = false;

        if (yield_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 89;
            coroutine_heap->type_description_1 = "ccc";
            goto frame_exception_exit_1;
        }
        coroutine_heap->tmp_return_value = yield_return_value;
        if (coroutine_heap->tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 89;
            coroutine_heap->type_description_1 = "ccc";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

    Nuitka_Frame_MarkAsNotExecuting(coroutine->m_frame);

#if PYTHON_VERSION >= 0x300
    Py_CLEAR(EXC_TYPE_F(coroutine));
    Py_CLEAR(EXC_VALUE_F(coroutine));
    Py_CLEAR(EXC_TRACEBACK_F(coroutine));
#endif

    // Allow re-use of the frame again.
    Py_DECREF(coroutine->m_frame);
    goto frame_no_exception_1;

    frame_return_exit_1:;

#if PYTHON_VERSION >= 0x300
    Py_CLEAR(EXC_TYPE_F(coroutine));
    Py_CLEAR(EXC_VALUE_F(coroutine));
    Py_CLEAR(EXC_TRACEBACK_F(coroutine));
#endif

    Py_DECREF(coroutine->m_frame);
    goto function_return_exit;

    frame_exception_exit_1:;

    // If it's not an exit exception, consider and create a traceback for it.
    if (!EXCEPTION_MATCH_GENERATOR(coroutine_heap->exception_type)) {
        if (coroutine_heap->exception_tb == NULL) {
            coroutine_heap->exception_tb = MAKE_TRACEBACK(coroutine->m_frame, coroutine_heap->exception_lineno);
        } else if (coroutine_heap->exception_tb->tb_frame != &coroutine->m_frame->m_frame) {
            coroutine_heap->exception_tb = ADD_TRACEBACK(coroutine_heap->exception_tb, coroutine->m_frame, coroutine_heap->exception_lineno);
        }

        Nuitka_Frame_AttachLocals(
            coroutine->m_frame,
            coroutine_heap->type_description_1,
            coroutine->m_closure[2],
            coroutine->m_closure[0],
            coroutine->m_closure[1]
        );


        // Release cached frame if used for exception.
        if (coroutine->m_frame == cache_m_frame) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif

            Py_DECREF(cache_m_frame);
            cache_m_frame = NULL;
        }

        assertFrameObject(coroutine->m_frame);
    }

#if PYTHON_VERSION >= 0x300
    Py_CLEAR(EXC_TYPE_F(coroutine));
    Py_CLEAR(EXC_VALUE_F(coroutine));
    Py_CLEAR(EXC_TRACEBACK_F(coroutine));
#endif

    Py_DECREF(coroutine->m_frame);

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must be present");

    function_exception_exit:

    assert(coroutine_heap->exception_type);
    RESTORE_ERROR_OCCURRED(coroutine_heap->exception_type, coroutine_heap->exception_value, coroutine_heap->exception_tb);
    return NULL;
    function_return_exit:;

    coroutine->m_returned = coroutine_heap->tmp_return_value;

    return NULL;

}

static PyObject *MAKE_COROUTINE_jupyter_client$asynchronous$client$$$function__6_get_control_msg$$$coroutine__1_get_control_msg(struct Nuitka_CellObject **closure) {
    return Nuitka_Coroutine_New(
        jupyter_client$asynchronous$client$$$function__6_get_control_msg$$$coroutine__1_get_control_msg_context,
        module_jupyter_client$asynchronous$client,
        mod_consts[43],
        mod_consts[44],
        codeobj_ba73b7779d13006987ac70246725b466,
        closure,
        3,
        sizeof(struct jupyter_client$asynchronous$client$$$function__6_get_control_msg$$$coroutine__1_get_control_msg_locals)
    );
}


static PyObject *impl_jupyter_client$asynchronous$client$$$function__7_hb_channel(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *var_url = NULL;
    PyObject *var_loop = NULL;
    struct Nuitka_FrameObject *frame_d4a4ad3ad9cbdbbaa427a9b9d81f1588;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    bool tmp_result;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_d4a4ad3ad9cbdbbaa427a9b9d81f1588 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_d4a4ad3ad9cbdbbaa427a9b9d81f1588)) {
        Py_XDECREF(cache_frame_d4a4ad3ad9cbdbbaa427a9b9d81f1588);

#if _DEBUG_REFCOUNTS
        if (cache_frame_d4a4ad3ad9cbdbbaa427a9b9d81f1588 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_d4a4ad3ad9cbdbbaa427a9b9d81f1588 = MAKE_FUNCTION_FRAME(codeobj_d4a4ad3ad9cbdbbaa427a9b9d81f1588, module_jupyter_client$asynchronous$client, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_d4a4ad3ad9cbdbbaa427a9b9d81f1588->m_type_description == NULL);
    frame_d4a4ad3ad9cbdbbaa427a9b9d81f1588 = cache_frame_d4a4ad3ad9cbdbbaa427a9b9d81f1588;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_d4a4ad3ad9cbdbbaa427a9b9d81f1588);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_d4a4ad3ad9cbdbbaa427a9b9d81f1588) == 2); // Frame stack

    // Framed code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_expression_name_1;
        CHECK_OBJECT(par_self);
        tmp_expression_name_1 = par_self;
        tmp_compexpr_left_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_1, mod_consts[45]);
        if (tmp_compexpr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 94;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_1 = Py_None;
        tmp_condition_result_1 = (tmp_compexpr_left_1 == tmp_compexpr_right_1) ? true : false;
        Py_DECREF(tmp_compexpr_left_1);
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[27]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 95;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = par_self;
        frame_d4a4ad3ad9cbdbbaa427a9b9d81f1588->m_frame.f_lineno = 95;
        tmp_assign_source_1 = CALL_METHOD_WITH_ARGS1(
            tmp_called_instance_1,
            mod_consts[46],
            &PyTuple_GET_ITEM(mod_consts[47], 0)
        );

        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 95;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        assert(var_url == NULL);
        var_url = tmp_assign_source_1;
    }
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_expression_name_2;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[27]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 96;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_2 = par_self;
        tmp_called_instance_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_2, mod_consts[48]);
        if (tmp_called_instance_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 96;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_1 = mod_consts[50];
        CHECK_OBJECT(var_url);
        tmp_args_element_name_2 = var_url;
        frame_d4a4ad3ad9cbdbbaa427a9b9d81f1588->m_frame.f_lineno = 96;
        {
            PyObject *call_args[] = {tmp_args_element_name_1, tmp_args_element_name_2};
            tmp_call_result_1 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_2,
                mod_consts[49],
                call_args
            );
        }

        Py_DECREF(tmp_called_instance_2);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 96;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_instance_3;
        tmp_called_instance_3 = GET_STRING_DICT_VALUE(moduledict_jupyter_client$asynchronous$client, (Nuitka_StringObject *)mod_consts[24]);

        if (unlikely(tmp_called_instance_3 == NULL)) {
            tmp_called_instance_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[24]);
        }

        if (tmp_called_instance_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 97;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_d4a4ad3ad9cbdbbaa427a9b9d81f1588->m_frame.f_lineno = 97;
        tmp_assign_source_2 = CALL_METHOD_NO_ARGS(tmp_called_instance_3, mod_consts[51]);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 97;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        assert(var_loop == NULL);
        var_loop = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_expression_name_3;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_expression_name_4;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_expression_name_5;
        PyObject *tmp_args_element_name_5;
        PyObject *tmp_args_element_name_6;
        PyObject *tmp_assattr_target_1;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[27]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 98;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_3 = par_self;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_3, mod_consts[52]);
        if (tmp_called_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 98;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        if (par_self == NULL) {
            Py_DECREF(tmp_called_name_1);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[27]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 99;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_4 = par_self;
        tmp_args_element_name_3 = LOOKUP_ATTRIBUTE(tmp_expression_name_4, mod_consts[53]);
        if (tmp_args_element_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_1);

            exception_lineno = 99;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        if (par_self == NULL) {
            Py_DECREF(tmp_called_name_1);
            Py_DECREF(tmp_args_element_name_3);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[27]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 99;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_5 = par_self;
        tmp_args_element_name_4 = LOOKUP_ATTRIBUTE(tmp_expression_name_5, mod_consts[54]);
        if (tmp_args_element_name_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_1);
            Py_DECREF(tmp_args_element_name_3);

            exception_lineno = 99;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        if (var_url == NULL) {
            Py_DECREF(tmp_called_name_1);
            Py_DECREF(tmp_args_element_name_3);
            Py_DECREF(tmp_args_element_name_4);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[55]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 99;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_name_5 = var_url;
        CHECK_OBJECT(var_loop);
        tmp_args_element_name_6 = var_loop;
        frame_d4a4ad3ad9cbdbbaa427a9b9d81f1588->m_frame.f_lineno = 98;
        {
            PyObject *call_args[] = {tmp_args_element_name_3, tmp_args_element_name_4, tmp_args_element_name_5, tmp_args_element_name_6};
            tmp_assattr_name_1 = CALL_FUNCTION_WITH_ARGS4(tmp_called_name_1, call_args);
        }

        Py_DECREF(tmp_called_name_1);
        Py_DECREF(tmp_args_element_name_3);
        Py_DECREF(tmp_args_element_name_4);
        if (tmp_assattr_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 98;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        if (par_self == NULL) {
            Py_DECREF(tmp_assattr_name_1);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[27]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 98;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[45], tmp_assattr_name_1);
        Py_DECREF(tmp_assattr_name_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 98;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
    }
    branch_no_1:;
    {
        PyObject *tmp_expression_name_6;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[27]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 101;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_6 = par_self;
        tmp_return_value = LOOKUP_ATTRIBUTE(tmp_expression_name_6, mod_consts[45]);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 101;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_d4a4ad3ad9cbdbbaa427a9b9d81f1588);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_d4a4ad3ad9cbdbbaa427a9b9d81f1588);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_d4a4ad3ad9cbdbbaa427a9b9d81f1588);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_d4a4ad3ad9cbdbbaa427a9b9d81f1588, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_d4a4ad3ad9cbdbbaa427a9b9d81f1588->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_d4a4ad3ad9cbdbbaa427a9b9d81f1588, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_d4a4ad3ad9cbdbbaa427a9b9d81f1588,
        type_description_1,
        par_self,
        var_url,
        var_loop
    );


    // Release cached frame if used for exception.
    if (frame_d4a4ad3ad9cbdbbaa427a9b9d81f1588 == cache_frame_d4a4ad3ad9cbdbbaa427a9b9d81f1588) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_d4a4ad3ad9cbdbbaa427a9b9d81f1588);
        cache_frame_d4a4ad3ad9cbdbbaa427a9b9d81f1588 = NULL;
    }

    assertFrameObject(frame_d4a4ad3ad9cbdbbaa427a9b9d81f1588);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(par_self);
    par_self = NULL;
    Py_XDECREF(var_url);
    var_url = NULL;
    Py_XDECREF(var_loop);
    var_loop = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(par_self);
    par_self = NULL;
    Py_XDECREF(var_url);
    var_url = NULL;
    Py_XDECREF(var_loop);
    var_loop = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_jupyter_client$asynchronous$client$$$function__8_wait_for_ready(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_CellObject *par_self = Nuitka_Cell_New1(python_pars[0]);
    struct Nuitka_CellObject *par_timeout = Nuitka_Cell_New1(python_pars[1]);
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    // Tried code:
    {
        struct Nuitka_CellObject *tmp_closure_1[2];

        tmp_closure_1[0] = par_self;
        Py_INCREF(tmp_closure_1[0]);
        tmp_closure_1[1] = par_timeout;
        Py_INCREF(tmp_closure_1[1]);

        tmp_return_value = MAKE_COROUTINE_jupyter_client$asynchronous$client$$$function__8_wait_for_ready$$$coroutine__1_wait_for_ready(tmp_closure_1);

        goto try_return_handler_1;
    }
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    par_self = NULL;
    CHECK_OBJECT(par_timeout);
    Py_DECREF(par_timeout);
    par_timeout = NULL;
    goto function_return_exit;
    // End of try:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    par_self = NULL;
    CHECK_OBJECT(par_timeout);
    Py_DECREF(par_timeout);
    par_timeout = NULL;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}



struct jupyter_client$asynchronous$client$$$function__8_wait_for_ready$$$coroutine__1_wait_for_ready_locals {
    PyObject *var_abs_timeout;
    PyObject *var_KernelManager;
    PyObject *var_msg;
    nuitka_bool tmp_try_except_1__unhandled_indicator;
    nuitka_bool tmp_try_except_2__unhandled_indicator;
    char const *type_description_1;
    PyObject *exception_type;
    PyObject *exception_value;
    PyTracebackObject *exception_tb;
    int exception_lineno;
    int tmp_res;
    char yield_tmps[1024];
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    int exception_keeper_lineno_1;
    PyObject *exception_preserved_type_1;
    PyObject *exception_preserved_value_1;
    PyTracebackObject *exception_preserved_tb_1;
    bool tmp_result;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    int exception_keeper_lineno_2;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    int exception_keeper_lineno_3;
    PyObject *exception_preserved_type_2;
    PyObject *exception_preserved_value_2;
    PyTracebackObject *exception_preserved_tb_2;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    int exception_keeper_lineno_4;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    int exception_keeper_lineno_5;
    PyObject *exception_preserved_type_3;
    PyObject *exception_preserved_value_3;
    PyTracebackObject *exception_preserved_tb_3;
    PyObject *exception_keeper_type_6;
    PyObject *exception_keeper_value_6;
    PyTracebackObject *exception_keeper_tb_6;
    int exception_keeper_lineno_6;
    PyObject *tmp_return_value;
    PyObject *exception_keeper_type_7;
    PyObject *exception_keeper_value_7;
    PyTracebackObject *exception_keeper_tb_7;
    int exception_keeper_lineno_7;
};

static PyObject *jupyter_client$asynchronous$client$$$function__8_wait_for_ready$$$coroutine__1_wait_for_ready_context(struct Nuitka_CoroutineObject *coroutine, PyObject *yield_return_value) {
    CHECK_OBJECT(coroutine);
    assert(Nuitka_Coroutine_Check((PyObject *)coroutine));

    // Heap access if used.
    struct jupyter_client$asynchronous$client$$$function__8_wait_for_ready$$$coroutine__1_wait_for_ready_locals *coroutine_heap = (struct jupyter_client$asynchronous$client$$$function__8_wait_for_ready$$$coroutine__1_wait_for_ready_locals *)coroutine->m_heap_storage;

    // Dispatch to yield based on return label index:
    switch(coroutine->m_yield_return_index) {
    case 5: goto yield_return_5;
    case 4: goto yield_return_4;
    case 3: goto yield_return_3;
    case 2: goto yield_return_2;
    case 1: goto yield_return_1;
    }

    // Local variable initialization
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_m_frame = NULL;
    coroutine_heap->var_abs_timeout = NULL;
    coroutine_heap->var_KernelManager = NULL;
    coroutine_heap->var_msg = NULL;
    coroutine_heap->tmp_try_except_1__unhandled_indicator = NUITKA_BOOL_UNASSIGNED;
    coroutine_heap->tmp_try_except_2__unhandled_indicator = NUITKA_BOOL_UNASSIGNED;
    coroutine_heap->type_description_1 = NULL;
    coroutine_heap->exception_type = NULL;
    coroutine_heap->exception_value = NULL;
    coroutine_heap->exception_tb = NULL;
    coroutine_heap->exception_lineno = 0;
    coroutine_heap->tmp_return_value = NULL;

    // Actual coroutine body.
    // Tried code:
    if (isFrameUnusable(cache_m_frame)) {
        Py_XDECREF(cache_m_frame);

#if _DEBUG_REFCOUNTS
        if (cache_m_frame == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_m_frame = MAKE_FUNCTION_FRAME(codeobj_f96273d8f97446e0894f88ce7648e867, module_jupyter_client$asynchronous$client, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    coroutine->m_frame = cache_m_frame;

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    Py_INCREF(coroutine->m_frame);
    assert(Py_REFCNT(coroutine->m_frame) == 2); // Frame stack

#if PYTHON_VERSION >= 0x340
    coroutine->m_frame->m_frame.f_gen = (PyObject *)coroutine;
#endif

    assert(coroutine->m_frame->m_frame.f_back == NULL);
    Py_CLEAR(coroutine->m_frame->m_frame.f_back);

    coroutine->m_frame->m_frame.f_back = PyThreadState_GET()->frame;
    Py_INCREF(coroutine->m_frame->m_frame.f_back);

    PyThreadState_GET()->frame = &coroutine->m_frame->m_frame;
    Py_INCREF(coroutine->m_frame);

    Nuitka_Frame_MarkAsExecuting(coroutine->m_frame);

#if PYTHON_VERSION >= 0x300
    // Accept currently existing exception as the one to publish again when we
    // yield or yield from.
    {
        PyThreadState *thread_state = PyThreadState_GET();

        EXC_TYPE_F(coroutine) = EXC_TYPE(thread_state);
        if (EXC_TYPE_F(coroutine) == Py_None) EXC_TYPE_F(coroutine) = NULL;
        Py_XINCREF(EXC_TYPE_F(coroutine));
        EXC_VALUE_F(coroutine) = EXC_VALUE(thread_state);
        Py_XINCREF(EXC_VALUE_F(coroutine));
        EXC_TRACEBACK_F(coroutine) = EXC_TRACEBACK(thread_state);
        Py_XINCREF(EXC_TRACEBACK_F(coroutine));
    }

#endif

    // Framed code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        if (Nuitka_Cell_GET(coroutine->m_closure[1]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[21]);
            coroutine_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            CHAIN_EXCEPTION(coroutine_heap->exception_value);

            coroutine_heap->exception_lineno = 112;
            coroutine_heap->type_description_1 = "ccooo";
            goto frame_exception_exit_1;
        }

        tmp_compexpr_left_1 = Nuitka_Cell_GET(coroutine->m_closure[1]);
        tmp_compexpr_right_1 = Py_None;
        tmp_condition_result_1 = (tmp_compexpr_left_1 == tmp_compexpr_right_1) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = mod_consts[58];
        assert(coroutine_heap->var_abs_timeout == NULL);
        Py_INCREF(tmp_assign_source_1);
        coroutine_heap->var_abs_timeout = tmp_assign_source_1;
    }
    goto branch_end_1;
    branch_no_1:;
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_left_name_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_right_name_1;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_jupyter_client$asynchronous$client, (Nuitka_StringObject *)mod_consts[59]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[59]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 115;
            coroutine_heap->type_description_1 = "ccooo";
            goto frame_exception_exit_1;
        }
        coroutine->m_frame->m_frame.f_lineno = 115;
        tmp_left_name_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[59]);
        if (tmp_left_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 115;
            coroutine_heap->type_description_1 = "ccooo";
            goto frame_exception_exit_1;
        }
        if (Nuitka_Cell_GET(coroutine->m_closure[1]) == NULL) {
            Py_DECREF(tmp_left_name_1);
            FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[21]);
            coroutine_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            CHAIN_EXCEPTION(coroutine_heap->exception_value);

            coroutine_heap->exception_lineno = 115;
            coroutine_heap->type_description_1 = "ccooo";
            goto frame_exception_exit_1;
        }

        tmp_right_name_1 = Nuitka_Cell_GET(coroutine->m_closure[1]);
        tmp_assign_source_2 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_left_name_1, tmp_right_name_1);
        Py_DECREF(tmp_left_name_1);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 115;
            coroutine_heap->type_description_1 = "ccooo";
            goto frame_exception_exit_1;
        }
        assert(coroutine_heap->var_abs_timeout == NULL);
        coroutine_heap->var_abs_timeout = tmp_assign_source_2;
    }
    branch_end_1:;
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_name_1;
        PyObject *tmp_globals_arg_name_1;
        PyObject *tmp_locals_arg_name_1;
        PyObject *tmp_fromlist_name_1;
        PyObject *tmp_level_name_1;
        tmp_name_name_1 = mod_consts[60];
        tmp_globals_arg_name_1 = (PyObject *)moduledict_jupyter_client$asynchronous$client;
        tmp_locals_arg_name_1 = Py_None;
        tmp_fromlist_name_1 = mod_consts[61];
        tmp_level_name_1 = mod_consts[62];
        coroutine->m_frame->m_frame.f_lineno = 117;
        tmp_import_name_from_1 = IMPORT_MODULE5(tmp_name_name_1, tmp_globals_arg_name_1, tmp_locals_arg_name_1, tmp_fromlist_name_1, tmp_level_name_1);
        if (tmp_import_name_from_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 117;
            coroutine_heap->type_description_1 = "ccooo";
            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_3 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_1,
                (PyObject *)moduledict_jupyter_client$asynchronous$client,
                mod_consts[63],
                mod_consts[64]
            );
        } else {
            tmp_assign_source_3 = IMPORT_NAME(tmp_import_name_from_1, mod_consts[63]);
        }

        Py_DECREF(tmp_import_name_from_1);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 117;
            coroutine_heap->type_description_1 = "ccooo";
            goto frame_exception_exit_1;
        }
        assert(coroutine_heap->var_KernelManager == NULL);
        coroutine_heap->var_KernelManager = tmp_assign_source_3;
    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_operand_name_1;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        PyObject *tmp_expression_name_1;
        if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[27]);
            coroutine_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            CHAIN_EXCEPTION(coroutine_heap->exception_value);

            coroutine_heap->exception_lineno = 118;
            coroutine_heap->type_description_1 = "ccooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_1 = Nuitka_Cell_GET(coroutine->m_closure[0]);
        tmp_isinstance_inst_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_1, mod_consts[65]);
        if (tmp_isinstance_inst_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 118;
            coroutine_heap->type_description_1 = "ccooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(coroutine_heap->var_KernelManager);
        tmp_isinstance_cls_1 = coroutine_heap->var_KernelManager;
        coroutine_heap->tmp_res = Nuitka_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
        Py_DECREF(tmp_isinstance_inst_1);
        if (coroutine_heap->tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 118;
            coroutine_heap->type_description_1 = "ccooo";
            goto frame_exception_exit_1;
        }
        tmp_operand_name_1 = (coroutine_heap->tmp_res != 0) ? Py_True : Py_False;
        coroutine_heap->tmp_res = CHECK_IF_TRUE(tmp_operand_name_1);
        if (coroutine_heap->tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 118;
            coroutine_heap->type_description_1 = "ccooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_2 = (coroutine_heap->tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    loop_start_1:;
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_operand_name_2;
        PyObject *tmp_operand_name_3;
        PyObject *tmp_called_instance_2;
        if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[27]);
            coroutine_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            CHAIN_EXCEPTION(coroutine_heap->exception_value);

            coroutine_heap->exception_lineno = 122;
            coroutine_heap->type_description_1 = "ccooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_2 = Nuitka_Cell_GET(coroutine->m_closure[0]);
        coroutine->m_frame->m_frame.f_lineno = 122;
        tmp_operand_name_3 = CALL_METHOD_NO_ARGS(tmp_called_instance_2, mod_consts[66]);
        if (tmp_operand_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 122;
            coroutine_heap->type_description_1 = "ccooo";
            goto frame_exception_exit_1;
        }
        coroutine_heap->tmp_res = CHECK_IF_TRUE(tmp_operand_name_3);
        Py_DECREF(tmp_operand_name_3);
        if (coroutine_heap->tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 122;
            coroutine_heap->type_description_1 = "ccooo";
            goto frame_exception_exit_1;
        }
        tmp_operand_name_2 = (coroutine_heap->tmp_res == 0) ? Py_True : Py_False;
        coroutine_heap->tmp_res = CHECK_IF_TRUE(tmp_operand_name_2);
        if (coroutine_heap->tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 122;
            coroutine_heap->type_description_1 = "ccooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_3 = (coroutine_heap->tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    goto loop_end_1;
    branch_no_3:;
    {
        nuitka_bool tmp_condition_result_4;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        PyObject *tmp_called_instance_3;
        tmp_called_instance_3 = GET_STRING_DICT_VALUE(moduledict_jupyter_client$asynchronous$client, (Nuitka_StringObject *)mod_consts[59]);

        if (unlikely(tmp_called_instance_3 == NULL)) {
            tmp_called_instance_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[59]);
        }

        if (tmp_called_instance_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 123;
            coroutine_heap->type_description_1 = "ccooo";
            goto frame_exception_exit_1;
        }
        coroutine->m_frame->m_frame.f_lineno = 123;
        tmp_compexpr_left_2 = CALL_METHOD_NO_ARGS(tmp_called_instance_3, mod_consts[59]);
        if (tmp_compexpr_left_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 123;
            coroutine_heap->type_description_1 = "ccooo";
            goto frame_exception_exit_1;
        }
        if (coroutine_heap->var_abs_timeout == NULL) {
            Py_DECREF(tmp_compexpr_left_2);
            FORMAT_UNBOUND_LOCAL_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[67]);
            coroutine_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            CHAIN_EXCEPTION(coroutine_heap->exception_value);

            coroutine_heap->exception_lineno = 123;
            coroutine_heap->type_description_1 = "ccooo";
            goto frame_exception_exit_1;
        }

        tmp_compexpr_right_2 = coroutine_heap->var_abs_timeout;
        tmp_condition_result_4 = RICH_COMPARE_GT_NBOOL_OBJECT_OBJECT(tmp_compexpr_left_2, tmp_compexpr_right_2);
        Py_DECREF(tmp_compexpr_left_2);
        if (tmp_condition_result_4 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 123;
            coroutine_heap->type_description_1 = "ccooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
        assert(tmp_condition_result_4 != NUITKA_BOOL_UNASSIGNED);
    }
    branch_yes_4:;
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_make_exception_arg_1;
        PyObject *tmp_left_name_2;
        PyObject *tmp_right_name_2;
        tmp_left_name_2 = mod_consts[68];
        if (Nuitka_Cell_GET(coroutine->m_closure[1]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[21]);
            coroutine_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            CHAIN_EXCEPTION(coroutine_heap->exception_value);

            coroutine_heap->exception_lineno = 124;
            coroutine_heap->type_description_1 = "ccooo";
            goto frame_exception_exit_1;
        }

        tmp_right_name_2 = Nuitka_Cell_GET(coroutine->m_closure[1]);
        tmp_make_exception_arg_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_OBJECT(tmp_left_name_2, tmp_right_name_2);
        if (tmp_make_exception_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 124;
            coroutine_heap->type_description_1 = "ccooo";
            goto frame_exception_exit_1;
        }
        coroutine->m_frame->m_frame.f_lineno = 124;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_RuntimeError, tmp_make_exception_arg_1);
        Py_DECREF(tmp_make_exception_arg_1);
        assert(!(tmp_raise_type_1 == NULL));
        coroutine_heap->exception_type = tmp_raise_type_1;
        coroutine_heap->exception_lineno = 124;
        RAISE_EXCEPTION_WITH_TYPE(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
        coroutine_heap->type_description_1 = "ccooo";
        goto frame_exception_exit_1;
    }
    branch_no_4:;
    {
        PyObject *tmp_expression_name_2;
        PyObject *tmp_expression_name_3;
        PyObject *tmp_called_instance_4;
        PyObject *tmp_await_result_1;
        coroutine->m_frame->m_frame.f_lineno = 125;
        tmp_called_instance_4 = GET_STRING_DICT_VALUE(moduledict_jupyter_client$asynchronous$client, (Nuitka_StringObject *)mod_consts[24]);

        if (unlikely(tmp_called_instance_4 == NULL)) {
            tmp_called_instance_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[24]);
        }

        if (tmp_called_instance_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 125;
            coroutine_heap->type_description_1 = "ccooo";
            goto frame_exception_exit_1;
        }
        coroutine->m_frame->m_frame.f_lineno = 125;
        tmp_expression_name_3 = CALL_METHOD_WITH_ARGS1(
            tmp_called_instance_4,
            mod_consts[69],
            &PyTuple_GET_ITEM(mod_consts[70], 0)
        );

        if (tmp_expression_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 125;
            coroutine_heap->type_description_1 = "ccooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_name_2 = ASYNC_AWAIT(tmp_expression_name_3, await_normal);
        Py_DECREF(tmp_expression_name_3);
        if (tmp_expression_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 125;
            coroutine_heap->type_description_1 = "ccooo";
            goto frame_exception_exit_1;
        }
        Nuitka_PreserveHeap(coroutine_heap->yield_tmps, &tmp_expression_name_3, sizeof(PyObject *), &tmp_called_instance_4, sizeof(PyObject *), NULL);
        coroutine->m_yield_return_index = 1;
        coroutine->m_yieldfrom = tmp_expression_name_2;
        coroutine->m_awaiting = true;
        return NULL;

        yield_return_1:
        Nuitka_RestoreHeap(coroutine_heap->yield_tmps, &tmp_expression_name_3, sizeof(PyObject *), &tmp_called_instance_4, sizeof(PyObject *), NULL);
        coroutine->m_awaiting = false;

        if (yield_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 125;
            coroutine_heap->type_description_1 = "ccooo";
            goto frame_exception_exit_1;
        }
        tmp_await_result_1 = yield_return_value;
        if (tmp_await_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 125;
            coroutine_heap->type_description_1 = "ccooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_await_result_1);
    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


        coroutine_heap->exception_lineno = 122;
        coroutine_heap->type_description_1 = "ccooo";
        goto frame_exception_exit_1;
    }
    goto loop_start_1;
    loop_end_1:;
    branch_no_2:;
    loop_start_2:;
    {
        PyObject *tmp_called_instance_5;
        PyObject *tmp_call_result_1;
        if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[27]);
            coroutine_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            CHAIN_EXCEPTION(coroutine_heap->exception_value);

            coroutine_heap->exception_lineno = 129;
            coroutine_heap->type_description_1 = "ccooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_5 = Nuitka_Cell_GET(coroutine->m_closure[0]);
        coroutine->m_frame->m_frame.f_lineno = 129;
        tmp_call_result_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_5, mod_consts[71]);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 129;
            coroutine_heap->type_description_1 = "ccooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        nuitka_bool tmp_assign_source_4;
        tmp_assign_source_4 = NUITKA_BOOL_TRUE;
        coroutine_heap->tmp_try_except_2__unhandled_indicator = tmp_assign_source_4;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_expression_name_4;
        PyObject *tmp_expression_name_5;
        PyObject *tmp_called_name_1;
        PyObject *tmp_expression_name_6;
        PyObject *tmp_expression_name_7;
        PyObject *tmp_kwargs_name_1;
        coroutine->m_frame->m_frame.f_lineno = 131;
        if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[27]);
            coroutine_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            CHAIN_EXCEPTION(coroutine_heap->exception_value);

            coroutine_heap->exception_lineno = 131;
            coroutine_heap->type_description_1 = "ccooo";
            goto try_except_handler_2;
        }

        tmp_expression_name_7 = Nuitka_Cell_GET(coroutine->m_closure[0]);
        tmp_expression_name_6 = LOOKUP_ATTRIBUTE(tmp_expression_name_7, mod_consts[28]);
        if (tmp_expression_name_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 131;
            coroutine_heap->type_description_1 = "ccooo";
            goto try_except_handler_2;
        }
        tmp_called_name_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_6, mod_consts[29]);
        Py_DECREF(tmp_expression_name_6);
        if (tmp_called_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 131;
            coroutine_heap->type_description_1 = "ccooo";
            goto try_except_handler_2;
        }
        tmp_kwargs_name_1 = PyDict_Copy(mod_consts[72]);
        coroutine->m_frame->m_frame.f_lineno = 131;
        tmp_expression_name_5 = CALL_FUNCTION_WITH_KEYARGS(tmp_called_name_1, tmp_kwargs_name_1);
        Py_DECREF(tmp_called_name_1);
        Py_DECREF(tmp_kwargs_name_1);
        if (tmp_expression_name_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 131;
            coroutine_heap->type_description_1 = "ccooo";
            goto try_except_handler_2;
        }
        tmp_expression_name_4 = ASYNC_AWAIT(tmp_expression_name_5, await_normal);
        Py_DECREF(tmp_expression_name_5);
        if (tmp_expression_name_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 131;
            coroutine_heap->type_description_1 = "ccooo";
            goto try_except_handler_2;
        }
        Nuitka_PreserveHeap(coroutine_heap->yield_tmps, &tmp_expression_name_5, sizeof(PyObject *), &tmp_called_name_1, sizeof(PyObject *), &tmp_expression_name_6, sizeof(PyObject *), &tmp_expression_name_7, sizeof(PyObject *), &tmp_kwargs_name_1, sizeof(PyObject *), NULL);
        coroutine->m_yield_return_index = 2;
        coroutine->m_yieldfrom = tmp_expression_name_4;
        coroutine->m_awaiting = true;
        return NULL;

        yield_return_2:
        Nuitka_RestoreHeap(coroutine_heap->yield_tmps, &tmp_expression_name_5, sizeof(PyObject *), &tmp_called_name_1, sizeof(PyObject *), &tmp_expression_name_6, sizeof(PyObject *), &tmp_expression_name_7, sizeof(PyObject *), &tmp_kwargs_name_1, sizeof(PyObject *), NULL);
        coroutine->m_awaiting = false;

        if (yield_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 131;
            coroutine_heap->type_description_1 = "ccooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_5 = yield_return_value;
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 131;
            coroutine_heap->type_description_1 = "ccooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = coroutine_heap->var_msg;
            coroutine_heap->var_msg = tmp_assign_source_5;
            Py_XDECREF(old);
        }

    }
    goto try_end_1;
    // Exception handler code:
    try_except_handler_2:;
    coroutine_heap->exception_keeper_type_1 = coroutine_heap->exception_type;
    coroutine_heap->exception_keeper_value_1 = coroutine_heap->exception_value;
    coroutine_heap->exception_keeper_tb_1 = coroutine_heap->exception_tb;
    coroutine_heap->exception_keeper_lineno_1 = coroutine_heap->exception_lineno;
    coroutine_heap->exception_type = NULL;
    coroutine_heap->exception_value = NULL;
    coroutine_heap->exception_tb = NULL;
    coroutine_heap->exception_lineno = 0;

    {
        nuitka_bool tmp_assign_source_6;
        tmp_assign_source_6 = NUITKA_BOOL_FALSE;
        coroutine_heap->tmp_try_except_2__unhandled_indicator = tmp_assign_source_6;
    }
    // Preserve existing published exception id 1.
    GET_CURRENT_EXCEPTION(&coroutine_heap->exception_preserved_type_1, &coroutine_heap->exception_preserved_value_1, &coroutine_heap->exception_preserved_tb_1);

    if (coroutine_heap->exception_keeper_tb_1 == NULL) {
        coroutine_heap->exception_keeper_tb_1 = MAKE_TRACEBACK(coroutine->m_frame, coroutine_heap->exception_keeper_lineno_1);
    } else if (coroutine_heap->exception_keeper_lineno_1 != 0) {
        coroutine_heap->exception_keeper_tb_1 = ADD_TRACEBACK(coroutine_heap->exception_keeper_tb_1, coroutine->m_frame, coroutine_heap->exception_keeper_lineno_1);
    }

    NORMALIZE_EXCEPTION(&coroutine_heap->exception_keeper_type_1, &coroutine_heap->exception_keeper_value_1, &coroutine_heap->exception_keeper_tb_1);
    ATTACH_TRACEBACK_TO_EXCEPTION_VALUE(coroutine_heap->exception_keeper_value_1, coroutine_heap->exception_keeper_tb_1);
    PUBLISH_EXCEPTION(&coroutine_heap->exception_keeper_type_1, &coroutine_heap->exception_keeper_value_1, &coroutine_heap->exception_keeper_tb_1);
    // Tried code:
    {
        bool tmp_condition_result_5;
        PyObject *tmp_compexpr_left_3;
        PyObject *tmp_compexpr_right_3;
        tmp_compexpr_left_3 = EXC_TYPE(PyThreadState_GET());
        tmp_compexpr_right_3 = GET_STRING_DICT_VALUE(moduledict_jupyter_client$asynchronous$client, (Nuitka_StringObject *)mod_consts[73]);

        if (unlikely(tmp_compexpr_right_3 == NULL)) {
            tmp_compexpr_right_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[73]);
        }

        if (tmp_compexpr_right_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 132;
            coroutine_heap->type_description_1 = "ccooo";
            goto try_except_handler_3;
        }
        coroutine_heap->tmp_res = EXCEPTION_MATCH_BOOL(tmp_compexpr_left_3, tmp_compexpr_right_3);
        if (coroutine_heap->tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 132;
            coroutine_heap->type_description_1 = "ccooo";
            goto try_except_handler_3;
        }
        tmp_condition_result_5 = (coroutine_heap->tmp_res == 0) ? true : false;
        if (tmp_condition_result_5 != false) {
            goto branch_yes_5;
        } else {
            goto branch_no_5;
        }
    }
    branch_yes_5:;
    coroutine_heap->tmp_result = RERAISE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
    if (unlikely(coroutine_heap->tmp_result == false)) {
        coroutine_heap->exception_lineno = 130;
    }

    if (coroutine_heap->exception_tb && coroutine_heap->exception_tb->tb_frame == &coroutine->m_frame->m_frame) coroutine->m_frame->m_frame.f_lineno = coroutine_heap->exception_tb->tb_lineno;
    coroutine_heap->type_description_1 = "ccooo";
    goto try_except_handler_3;
    branch_no_5:;
    goto try_end_2;
    // Exception handler code:
    try_except_handler_3:;
    coroutine_heap->exception_keeper_type_2 = coroutine_heap->exception_type;
    coroutine_heap->exception_keeper_value_2 = coroutine_heap->exception_value;
    coroutine_heap->exception_keeper_tb_2 = coroutine_heap->exception_tb;
    coroutine_heap->exception_keeper_lineno_2 = coroutine_heap->exception_lineno;
    coroutine_heap->exception_type = NULL;
    coroutine_heap->exception_value = NULL;
    coroutine_heap->exception_tb = NULL;
    coroutine_heap->exception_lineno = 0;

    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(coroutine_heap->exception_preserved_type_1, coroutine_heap->exception_preserved_value_1, coroutine_heap->exception_preserved_tb_1);

    // Re-raise.
    coroutine_heap->exception_type = coroutine_heap->exception_keeper_type_2;
    coroutine_heap->exception_value = coroutine_heap->exception_keeper_value_2;
    coroutine_heap->exception_tb = coroutine_heap->exception_keeper_tb_2;
    coroutine_heap->exception_lineno = coroutine_heap->exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(coroutine_heap->exception_preserved_type_1, coroutine_heap->exception_preserved_value_1, coroutine_heap->exception_preserved_tb_1);

    goto try_end_1;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_1:;
    {
        bool tmp_condition_result_6;
        nuitka_bool tmp_compexpr_left_4;
        nuitka_bool tmp_compexpr_right_4;
        assert(coroutine_heap->tmp_try_except_2__unhandled_indicator != NUITKA_BOOL_UNASSIGNED);
        tmp_compexpr_left_4 = coroutine_heap->tmp_try_except_2__unhandled_indicator;
        tmp_compexpr_right_4 = NUITKA_BOOL_TRUE;
        tmp_condition_result_6 = (tmp_compexpr_left_4 == tmp_compexpr_right_4) ? true : false;
        if (tmp_condition_result_6 != false) {
            goto branch_yes_6;
        } else {
            goto branch_no_6;
        }
    }
    branch_yes_6:;
    {
        nuitka_bool tmp_condition_result_7;
        PyObject *tmp_compexpr_left_5;
        PyObject *tmp_compexpr_right_5;
        PyObject *tmp_expression_name_8;
        PyObject *tmp_subscript_name_1;
        PyObject *tmp_tmp_condition_result_7_object_1;
        int tmp_truth_name_1;
        if (coroutine_heap->var_msg == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[74]);
            coroutine_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            CHAIN_EXCEPTION(coroutine_heap->exception_value);

            coroutine_heap->exception_lineno = 135;
            coroutine_heap->type_description_1 = "ccooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_8 = coroutine_heap->var_msg;
        tmp_subscript_name_1 = mod_consts[75];
        tmp_compexpr_left_5 = LOOKUP_SUBSCRIPT(tmp_expression_name_8, tmp_subscript_name_1);
        if (tmp_compexpr_left_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 135;
            coroutine_heap->type_description_1 = "ccooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_5 = mod_consts[76];
        tmp_tmp_condition_result_7_object_1 = RICH_COMPARE_EQ_OBJECT_OBJECT_OBJECT(tmp_compexpr_left_5, tmp_compexpr_right_5);
        Py_DECREF(tmp_compexpr_left_5);
        if (tmp_tmp_condition_result_7_object_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 135;
            coroutine_heap->type_description_1 = "ccooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_tmp_condition_result_7_object_1);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            Py_DECREF(tmp_tmp_condition_result_7_object_1);

            coroutine_heap->exception_lineno = 135;
            coroutine_heap->type_description_1 = "ccooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_7 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_tmp_condition_result_7_object_1);
        if (tmp_condition_result_7 == NUITKA_BOOL_TRUE) {
            goto branch_yes_7;
        } else {
            goto branch_no_7;
        }
    }
    branch_yes_7:;
    {
        nuitka_bool tmp_assign_source_7;
        tmp_assign_source_7 = NUITKA_BOOL_TRUE;
        coroutine_heap->tmp_try_except_1__unhandled_indicator = tmp_assign_source_7;
    }
    // Tried code:
    {
        PyObject *tmp_expression_name_9;
        PyObject *tmp_expression_name_10;
        PyObject *tmp_called_name_2;
        PyObject *tmp_expression_name_11;
        PyObject *tmp_expression_name_12;
        PyObject *tmp_kwargs_name_2;
        PyObject *tmp_await_result_2;
        coroutine->m_frame->m_frame.f_lineno = 138;
        if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[27]);
            coroutine_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            CHAIN_EXCEPTION(coroutine_heap->exception_value);

            coroutine_heap->exception_lineno = 138;
            coroutine_heap->type_description_1 = "ccooo";
            goto try_except_handler_4;
        }

        tmp_expression_name_12 = Nuitka_Cell_GET(coroutine->m_closure[0]);
        tmp_expression_name_11 = LOOKUP_ATTRIBUTE(tmp_expression_name_12, mod_consts[34]);
        if (tmp_expression_name_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 138;
            coroutine_heap->type_description_1 = "ccooo";
            goto try_except_handler_4;
        }
        tmp_called_name_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_11, mod_consts[29]);
        Py_DECREF(tmp_expression_name_11);
        if (tmp_called_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 138;
            coroutine_heap->type_description_1 = "ccooo";
            goto try_except_handler_4;
        }
        tmp_kwargs_name_2 = PyDict_Copy(mod_consts[77]);
        coroutine->m_frame->m_frame.f_lineno = 138;
        tmp_expression_name_10 = CALL_FUNCTION_WITH_KEYARGS(tmp_called_name_2, tmp_kwargs_name_2);
        Py_DECREF(tmp_called_name_2);
        Py_DECREF(tmp_kwargs_name_2);
        if (tmp_expression_name_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 138;
            coroutine_heap->type_description_1 = "ccooo";
            goto try_except_handler_4;
        }
        tmp_expression_name_9 = ASYNC_AWAIT(tmp_expression_name_10, await_normal);
        Py_DECREF(tmp_expression_name_10);
        if (tmp_expression_name_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 138;
            coroutine_heap->type_description_1 = "ccooo";
            goto try_except_handler_4;
        }
        Nuitka_PreserveHeap(coroutine_heap->yield_tmps, &tmp_expression_name_10, sizeof(PyObject *), &tmp_called_name_2, sizeof(PyObject *), &tmp_expression_name_11, sizeof(PyObject *), &tmp_expression_name_12, sizeof(PyObject *), &tmp_kwargs_name_2, sizeof(PyObject *), NULL);
        coroutine->m_yield_return_index = 3;
        coroutine->m_yieldfrom = tmp_expression_name_9;
        coroutine->m_awaiting = true;
        return NULL;

        yield_return_3:
        Nuitka_RestoreHeap(coroutine_heap->yield_tmps, &tmp_expression_name_10, sizeof(PyObject *), &tmp_called_name_2, sizeof(PyObject *), &tmp_expression_name_11, sizeof(PyObject *), &tmp_expression_name_12, sizeof(PyObject *), &tmp_kwargs_name_2, sizeof(PyObject *), NULL);
        coroutine->m_awaiting = false;

        if (yield_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 138;
            coroutine_heap->type_description_1 = "ccooo";
            goto try_except_handler_4;
        }
        tmp_await_result_2 = yield_return_value;
        if (tmp_await_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 138;
            coroutine_heap->type_description_1 = "ccooo";
            goto try_except_handler_4;
        }
        Py_DECREF(tmp_await_result_2);
    }
    goto try_end_3;
    // Exception handler code:
    try_except_handler_4:;
    coroutine_heap->exception_keeper_type_3 = coroutine_heap->exception_type;
    coroutine_heap->exception_keeper_value_3 = coroutine_heap->exception_value;
    coroutine_heap->exception_keeper_tb_3 = coroutine_heap->exception_tb;
    coroutine_heap->exception_keeper_lineno_3 = coroutine_heap->exception_lineno;
    coroutine_heap->exception_type = NULL;
    coroutine_heap->exception_value = NULL;
    coroutine_heap->exception_tb = NULL;
    coroutine_heap->exception_lineno = 0;

    {
        nuitka_bool tmp_assign_source_8;
        tmp_assign_source_8 = NUITKA_BOOL_FALSE;
        coroutine_heap->tmp_try_except_1__unhandled_indicator = tmp_assign_source_8;
    }
    // Preserve existing published exception id 2.
    GET_CURRENT_EXCEPTION(&coroutine_heap->exception_preserved_type_2, &coroutine_heap->exception_preserved_value_2, &coroutine_heap->exception_preserved_tb_2);

    if (coroutine_heap->exception_keeper_tb_3 == NULL) {
        coroutine_heap->exception_keeper_tb_3 = MAKE_TRACEBACK(coroutine->m_frame, coroutine_heap->exception_keeper_lineno_3);
    } else if (coroutine_heap->exception_keeper_lineno_3 != 0) {
        coroutine_heap->exception_keeper_tb_3 = ADD_TRACEBACK(coroutine_heap->exception_keeper_tb_3, coroutine->m_frame, coroutine_heap->exception_keeper_lineno_3);
    }

    NORMALIZE_EXCEPTION(&coroutine_heap->exception_keeper_type_3, &coroutine_heap->exception_keeper_value_3, &coroutine_heap->exception_keeper_tb_3);
    ATTACH_TRACEBACK_TO_EXCEPTION_VALUE(coroutine_heap->exception_keeper_value_3, coroutine_heap->exception_keeper_tb_3);
    PUBLISH_EXCEPTION(&coroutine_heap->exception_keeper_type_3, &coroutine_heap->exception_keeper_value_3, &coroutine_heap->exception_keeper_tb_3);
    // Tried code:
    {
        bool tmp_condition_result_8;
        PyObject *tmp_compexpr_left_6;
        PyObject *tmp_compexpr_right_6;
        tmp_compexpr_left_6 = EXC_TYPE(PyThreadState_GET());
        tmp_compexpr_right_6 = GET_STRING_DICT_VALUE(moduledict_jupyter_client$asynchronous$client, (Nuitka_StringObject *)mod_consts[73]);

        if (unlikely(tmp_compexpr_right_6 == NULL)) {
            tmp_compexpr_right_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[73]);
        }

        if (tmp_compexpr_right_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 139;
            coroutine_heap->type_description_1 = "ccooo";
            goto try_except_handler_5;
        }
        coroutine_heap->tmp_res = EXCEPTION_MATCH_BOOL(tmp_compexpr_left_6, tmp_compexpr_right_6);
        if (coroutine_heap->tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 139;
            coroutine_heap->type_description_1 = "ccooo";
            goto try_except_handler_5;
        }
        tmp_condition_result_8 = (coroutine_heap->tmp_res == 0) ? true : false;
        if (tmp_condition_result_8 != false) {
            goto branch_yes_8;
        } else {
            goto branch_no_8;
        }
    }
    branch_yes_8:;
    coroutine_heap->tmp_result = RERAISE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
    if (unlikely(coroutine_heap->tmp_result == false)) {
        coroutine_heap->exception_lineno = 137;
    }

    if (coroutine_heap->exception_tb && coroutine_heap->exception_tb->tb_frame == &coroutine->m_frame->m_frame) coroutine->m_frame->m_frame.f_lineno = coroutine_heap->exception_tb->tb_lineno;
    coroutine_heap->type_description_1 = "ccooo";
    goto try_except_handler_5;
    branch_no_8:;
    goto try_end_4;
    // Exception handler code:
    try_except_handler_5:;
    coroutine_heap->exception_keeper_type_4 = coroutine_heap->exception_type;
    coroutine_heap->exception_keeper_value_4 = coroutine_heap->exception_value;
    coroutine_heap->exception_keeper_tb_4 = coroutine_heap->exception_tb;
    coroutine_heap->exception_keeper_lineno_4 = coroutine_heap->exception_lineno;
    coroutine_heap->exception_type = NULL;
    coroutine_heap->exception_value = NULL;
    coroutine_heap->exception_tb = NULL;
    coroutine_heap->exception_lineno = 0;

    // Restore previous exception id 2.
    SET_CURRENT_EXCEPTION(coroutine_heap->exception_preserved_type_2, coroutine_heap->exception_preserved_value_2, coroutine_heap->exception_preserved_tb_2);

    // Re-raise.
    coroutine_heap->exception_type = coroutine_heap->exception_keeper_type_4;
    coroutine_heap->exception_value = coroutine_heap->exception_keeper_value_4;
    coroutine_heap->exception_tb = coroutine_heap->exception_keeper_tb_4;
    coroutine_heap->exception_lineno = coroutine_heap->exception_keeper_lineno_4;

    goto frame_exception_exit_1;
    // End of try:
    try_end_4:;
    // Restore previous exception id 2.
    SET_CURRENT_EXCEPTION(coroutine_heap->exception_preserved_type_2, coroutine_heap->exception_preserved_value_2, coroutine_heap->exception_preserved_tb_2);

    goto try_end_3;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_3:;
    {
        bool tmp_condition_result_9;
        nuitka_bool tmp_compexpr_left_7;
        nuitka_bool tmp_compexpr_right_7;
        assert(coroutine_heap->tmp_try_except_1__unhandled_indicator != NUITKA_BOOL_UNASSIGNED);
        tmp_compexpr_left_7 = coroutine_heap->tmp_try_except_1__unhandled_indicator;
        tmp_compexpr_right_7 = NUITKA_BOOL_TRUE;
        tmp_condition_result_9 = (tmp_compexpr_left_7 == tmp_compexpr_right_7) ? true : false;
        if (tmp_condition_result_9 != false) {
            goto branch_yes_9;
        } else {
            goto branch_no_9;
        }
    }
    branch_yes_9:;
    {
        PyObject *tmp_called_name_3;
        PyObject *tmp_expression_name_13;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_name_1;
        if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[27]);
            coroutine_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            CHAIN_EXCEPTION(coroutine_heap->exception_value);

            coroutine_heap->exception_lineno = 142;
            coroutine_heap->type_description_1 = "ccooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_13 = Nuitka_Cell_GET(coroutine->m_closure[0]);
        tmp_called_name_3 = LOOKUP_ATTRIBUTE(tmp_expression_name_13, mod_consts[78]);
        if (tmp_called_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 142;
            coroutine_heap->type_description_1 = "ccooo";
            goto frame_exception_exit_1;
        }
        if (coroutine_heap->var_msg == NULL) {
            Py_DECREF(tmp_called_name_3);
            FORMAT_UNBOUND_LOCAL_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[74]);
            coroutine_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            CHAIN_EXCEPTION(coroutine_heap->exception_value);

            coroutine_heap->exception_lineno = 142;
            coroutine_heap->type_description_1 = "ccooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_name_1 = coroutine_heap->var_msg;
        coroutine->m_frame->m_frame.f_lineno = 142;
        tmp_call_result_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_3, tmp_args_element_name_1);
        Py_DECREF(tmp_called_name_3);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 142;
            coroutine_heap->type_description_1 = "ccooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    goto loop_end_2;
    branch_no_9:;
    branch_no_7:;
    branch_no_6:;
    {
        nuitka_bool tmp_condition_result_10;
        PyObject *tmp_operand_name_4;
        PyObject *tmp_expression_name_14;
        PyObject *tmp_expression_name_15;
        PyObject *tmp_called_instance_6;
        coroutine->m_frame->m_frame.f_lineno = 145;
        if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[27]);
            coroutine_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            CHAIN_EXCEPTION(coroutine_heap->exception_value);

            coroutine_heap->exception_lineno = 145;
            coroutine_heap->type_description_1 = "ccooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_6 = Nuitka_Cell_GET(coroutine->m_closure[0]);
        coroutine->m_frame->m_frame.f_lineno = 145;
        tmp_expression_name_15 = CALL_METHOD_NO_ARGS(tmp_called_instance_6, mod_consts[66]);
        if (tmp_expression_name_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 145;
            coroutine_heap->type_description_1 = "ccooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_name_14 = ASYNC_AWAIT(tmp_expression_name_15, await_normal);
        Py_DECREF(tmp_expression_name_15);
        if (tmp_expression_name_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 145;
            coroutine_heap->type_description_1 = "ccooo";
            goto frame_exception_exit_1;
        }
        Nuitka_PreserveHeap(coroutine_heap->yield_tmps, &tmp_condition_result_10, sizeof(nuitka_bool), &tmp_expression_name_15, sizeof(PyObject *), &tmp_called_instance_6, sizeof(PyObject *), NULL);
        coroutine->m_yield_return_index = 4;
        coroutine->m_yieldfrom = tmp_expression_name_14;
        coroutine->m_awaiting = true;
        return NULL;

        yield_return_4:
        Nuitka_RestoreHeap(coroutine_heap->yield_tmps, &tmp_condition_result_10, sizeof(nuitka_bool), &tmp_expression_name_15, sizeof(PyObject *), &tmp_called_instance_6, sizeof(PyObject *), NULL);
        coroutine->m_awaiting = false;

        if (yield_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 145;
            coroutine_heap->type_description_1 = "ccooo";
            goto frame_exception_exit_1;
        }
        tmp_operand_name_4 = yield_return_value;
        if (tmp_operand_name_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 145;
            coroutine_heap->type_description_1 = "ccooo";
            goto frame_exception_exit_1;
        }
        coroutine_heap->tmp_res = CHECK_IF_TRUE(tmp_operand_name_4);
        Py_DECREF(tmp_operand_name_4);
        if (coroutine_heap->tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 145;
            coroutine_heap->type_description_1 = "ccooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_10 = (coroutine_heap->tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_10 == NUITKA_BOOL_TRUE) {
            goto branch_yes_10;
        } else {
            goto branch_no_10;
        }
    }
    branch_yes_10:;
    {
        PyObject *tmp_raise_type_2;
        PyObject *tmp_make_exception_arg_2;
        tmp_make_exception_arg_2 = mod_consts[79];
        coroutine->m_frame->m_frame.f_lineno = 146;
        tmp_raise_type_2 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_RuntimeError, tmp_make_exception_arg_2);
        assert(!(tmp_raise_type_2 == NULL));
        coroutine_heap->exception_type = tmp_raise_type_2;
        coroutine_heap->exception_lineno = 146;
        RAISE_EXCEPTION_WITH_TYPE(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
        coroutine_heap->type_description_1 = "ccooo";
        goto frame_exception_exit_1;
    }
    branch_no_10:;
    {
        nuitka_bool tmp_condition_result_11;
        PyObject *tmp_compexpr_left_8;
        PyObject *tmp_compexpr_right_8;
        PyObject *tmp_called_instance_7;
        tmp_called_instance_7 = GET_STRING_DICT_VALUE(moduledict_jupyter_client$asynchronous$client, (Nuitka_StringObject *)mod_consts[59]);

        if (unlikely(tmp_called_instance_7 == NULL)) {
            tmp_called_instance_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[59]);
        }

        if (tmp_called_instance_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 149;
            coroutine_heap->type_description_1 = "ccooo";
            goto frame_exception_exit_1;
        }
        coroutine->m_frame->m_frame.f_lineno = 149;
        tmp_compexpr_left_8 = CALL_METHOD_NO_ARGS(tmp_called_instance_7, mod_consts[59]);
        if (tmp_compexpr_left_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 149;
            coroutine_heap->type_description_1 = "ccooo";
            goto frame_exception_exit_1;
        }
        if (coroutine_heap->var_abs_timeout == NULL) {
            Py_DECREF(tmp_compexpr_left_8);
            FORMAT_UNBOUND_LOCAL_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[67]);
            coroutine_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            CHAIN_EXCEPTION(coroutine_heap->exception_value);

            coroutine_heap->exception_lineno = 149;
            coroutine_heap->type_description_1 = "ccooo";
            goto frame_exception_exit_1;
        }

        tmp_compexpr_right_8 = coroutine_heap->var_abs_timeout;
        tmp_condition_result_11 = RICH_COMPARE_GT_NBOOL_OBJECT_OBJECT(tmp_compexpr_left_8, tmp_compexpr_right_8);
        Py_DECREF(tmp_compexpr_left_8);
        if (tmp_condition_result_11 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 149;
            coroutine_heap->type_description_1 = "ccooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_11 == NUITKA_BOOL_TRUE) {
            goto branch_yes_11;
        } else {
            goto branch_no_11;
        }
        assert(tmp_condition_result_11 != NUITKA_BOOL_UNASSIGNED);
    }
    branch_yes_11:;
    {
        PyObject *tmp_raise_type_3;
        PyObject *tmp_make_exception_arg_3;
        PyObject *tmp_left_name_3;
        PyObject *tmp_right_name_3;
        tmp_left_name_3 = mod_consts[80];
        if (Nuitka_Cell_GET(coroutine->m_closure[1]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[21]);
            coroutine_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            CHAIN_EXCEPTION(coroutine_heap->exception_value);

            coroutine_heap->exception_lineno = 150;
            coroutine_heap->type_description_1 = "ccooo";
            goto frame_exception_exit_1;
        }

        tmp_right_name_3 = Nuitka_Cell_GET(coroutine->m_closure[1]);
        tmp_make_exception_arg_3 = BINARY_OPERATION_MOD_OBJECT_UNICODE_OBJECT(tmp_left_name_3, tmp_right_name_3);
        if (tmp_make_exception_arg_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 150;
            coroutine_heap->type_description_1 = "ccooo";
            goto frame_exception_exit_1;
        }
        coroutine->m_frame->m_frame.f_lineno = 150;
        tmp_raise_type_3 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_RuntimeError, tmp_make_exception_arg_3);
        Py_DECREF(tmp_make_exception_arg_3);
        assert(!(tmp_raise_type_3 == NULL));
        coroutine_heap->exception_type = tmp_raise_type_3;
        coroutine_heap->exception_lineno = 150;
        RAISE_EXCEPTION_WITH_TYPE(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
        coroutine_heap->type_description_1 = "ccooo";
        goto frame_exception_exit_1;
    }
    branch_no_11:;
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


        coroutine_heap->exception_lineno = 128;
        coroutine_heap->type_description_1 = "ccooo";
        goto frame_exception_exit_1;
    }
    goto loop_start_2;
    loop_end_2:;
    loop_start_3:;
    // Tried code:
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_expression_name_16;
        PyObject *tmp_expression_name_17;
        PyObject *tmp_called_name_4;
        PyObject *tmp_expression_name_18;
        PyObject *tmp_expression_name_19;
        PyObject *tmp_kwargs_name_3;
        coroutine->m_frame->m_frame.f_lineno = 155;
        if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[27]);
            coroutine_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            CHAIN_EXCEPTION(coroutine_heap->exception_value);

            coroutine_heap->exception_lineno = 155;
            coroutine_heap->type_description_1 = "ccooo";
            goto try_except_handler_6;
        }

        tmp_expression_name_19 = Nuitka_Cell_GET(coroutine->m_closure[0]);
        tmp_expression_name_18 = LOOKUP_ATTRIBUTE(tmp_expression_name_19, mod_consts[34]);
        if (tmp_expression_name_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 155;
            coroutine_heap->type_description_1 = "ccooo";
            goto try_except_handler_6;
        }
        tmp_called_name_4 = LOOKUP_ATTRIBUTE(tmp_expression_name_18, mod_consts[29]);
        Py_DECREF(tmp_expression_name_18);
        if (tmp_called_name_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 155;
            coroutine_heap->type_description_1 = "ccooo";
            goto try_except_handler_6;
        }
        tmp_kwargs_name_3 = PyDict_Copy(mod_consts[77]);
        coroutine->m_frame->m_frame.f_lineno = 155;
        tmp_expression_name_17 = CALL_FUNCTION_WITH_KEYARGS(tmp_called_name_4, tmp_kwargs_name_3);
        Py_DECREF(tmp_called_name_4);
        Py_DECREF(tmp_kwargs_name_3);
        if (tmp_expression_name_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 155;
            coroutine_heap->type_description_1 = "ccooo";
            goto try_except_handler_6;
        }
        tmp_expression_name_16 = ASYNC_AWAIT(tmp_expression_name_17, await_normal);
        Py_DECREF(tmp_expression_name_17);
        if (tmp_expression_name_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 155;
            coroutine_heap->type_description_1 = "ccooo";
            goto try_except_handler_6;
        }
        Nuitka_PreserveHeap(coroutine_heap->yield_tmps, &tmp_expression_name_17, sizeof(PyObject *), &tmp_called_name_4, sizeof(PyObject *), &tmp_expression_name_18, sizeof(PyObject *), &tmp_expression_name_19, sizeof(PyObject *), &tmp_kwargs_name_3, sizeof(PyObject *), NULL);
        coroutine->m_yield_return_index = 5;
        coroutine->m_yieldfrom = tmp_expression_name_16;
        coroutine->m_awaiting = true;
        return NULL;

        yield_return_5:
        Nuitka_RestoreHeap(coroutine_heap->yield_tmps, &tmp_expression_name_17, sizeof(PyObject *), &tmp_called_name_4, sizeof(PyObject *), &tmp_expression_name_18, sizeof(PyObject *), &tmp_expression_name_19, sizeof(PyObject *), &tmp_kwargs_name_3, sizeof(PyObject *), NULL);
        coroutine->m_awaiting = false;

        if (yield_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 155;
            coroutine_heap->type_description_1 = "ccooo";
            goto try_except_handler_6;
        }
        tmp_assign_source_9 = yield_return_value;
        if (tmp_assign_source_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 155;
            coroutine_heap->type_description_1 = "ccooo";
            goto try_except_handler_6;
        }
        {
            PyObject *old = coroutine_heap->var_msg;
            coroutine_heap->var_msg = tmp_assign_source_9;
            Py_XDECREF(old);
        }

    }
    goto try_end_5;
    // Exception handler code:
    try_except_handler_6:;
    coroutine_heap->exception_keeper_type_5 = coroutine_heap->exception_type;
    coroutine_heap->exception_keeper_value_5 = coroutine_heap->exception_value;
    coroutine_heap->exception_keeper_tb_5 = coroutine_heap->exception_tb;
    coroutine_heap->exception_keeper_lineno_5 = coroutine_heap->exception_lineno;
    coroutine_heap->exception_type = NULL;
    coroutine_heap->exception_value = NULL;
    coroutine_heap->exception_tb = NULL;
    coroutine_heap->exception_lineno = 0;

    // Preserve existing published exception id 3.
    GET_CURRENT_EXCEPTION(&coroutine_heap->exception_preserved_type_3, &coroutine_heap->exception_preserved_value_3, &coroutine_heap->exception_preserved_tb_3);

    if (coroutine_heap->exception_keeper_tb_5 == NULL) {
        coroutine_heap->exception_keeper_tb_5 = MAKE_TRACEBACK(coroutine->m_frame, coroutine_heap->exception_keeper_lineno_5);
    } else if (coroutine_heap->exception_keeper_lineno_5 != 0) {
        coroutine_heap->exception_keeper_tb_5 = ADD_TRACEBACK(coroutine_heap->exception_keeper_tb_5, coroutine->m_frame, coroutine_heap->exception_keeper_lineno_5);
    }

    NORMALIZE_EXCEPTION(&coroutine_heap->exception_keeper_type_5, &coroutine_heap->exception_keeper_value_5, &coroutine_heap->exception_keeper_tb_5);
    ATTACH_TRACEBACK_TO_EXCEPTION_VALUE(coroutine_heap->exception_keeper_value_5, coroutine_heap->exception_keeper_tb_5);
    PUBLISH_EXCEPTION(&coroutine_heap->exception_keeper_type_5, &coroutine_heap->exception_keeper_value_5, &coroutine_heap->exception_keeper_tb_5);
    // Tried code:
    {
        bool tmp_condition_result_12;
        PyObject *tmp_compexpr_left_9;
        PyObject *tmp_compexpr_right_9;
        tmp_compexpr_left_9 = EXC_TYPE(PyThreadState_GET());
        tmp_compexpr_right_9 = GET_STRING_DICT_VALUE(moduledict_jupyter_client$asynchronous$client, (Nuitka_StringObject *)mod_consts[73]);

        if (unlikely(tmp_compexpr_right_9 == NULL)) {
            tmp_compexpr_right_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[73]);
        }

        if (tmp_compexpr_right_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 156;
            coroutine_heap->type_description_1 = "ccooo";
            goto try_except_handler_7;
        }
        coroutine_heap->tmp_res = EXCEPTION_MATCH_BOOL(tmp_compexpr_left_9, tmp_compexpr_right_9);
        if (coroutine_heap->tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 156;
            coroutine_heap->type_description_1 = "ccooo";
            goto try_except_handler_7;
        }
        tmp_condition_result_12 = (coroutine_heap->tmp_res != 0) ? true : false;
        if (tmp_condition_result_12 != false) {
            goto branch_yes_12;
        } else {
            goto branch_no_12;
        }
    }
    branch_yes_12:;
    goto try_break_handler_7;
    goto branch_end_12;
    branch_no_12:;
    coroutine_heap->tmp_result = RERAISE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
    if (unlikely(coroutine_heap->tmp_result == false)) {
        coroutine_heap->exception_lineno = 154;
    }

    if (coroutine_heap->exception_tb && coroutine_heap->exception_tb->tb_frame == &coroutine->m_frame->m_frame) coroutine->m_frame->m_frame.f_lineno = coroutine_heap->exception_tb->tb_lineno;
    coroutine_heap->type_description_1 = "ccooo";
    goto try_except_handler_7;
    branch_end_12:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Exception handler code:
    try_except_handler_7:;
    coroutine_heap->exception_keeper_type_6 = coroutine_heap->exception_type;
    coroutine_heap->exception_keeper_value_6 = coroutine_heap->exception_value;
    coroutine_heap->exception_keeper_tb_6 = coroutine_heap->exception_tb;
    coroutine_heap->exception_keeper_lineno_6 = coroutine_heap->exception_lineno;
    coroutine_heap->exception_type = NULL;
    coroutine_heap->exception_value = NULL;
    coroutine_heap->exception_tb = NULL;
    coroutine_heap->exception_lineno = 0;

    // Restore previous exception id 3.
    SET_CURRENT_EXCEPTION(coroutine_heap->exception_preserved_type_3, coroutine_heap->exception_preserved_value_3, coroutine_heap->exception_preserved_tb_3);

    // Re-raise.
    coroutine_heap->exception_type = coroutine_heap->exception_keeper_type_6;
    coroutine_heap->exception_value = coroutine_heap->exception_keeper_value_6;
    coroutine_heap->exception_tb = coroutine_heap->exception_keeper_tb_6;
    coroutine_heap->exception_lineno = coroutine_heap->exception_keeper_lineno_6;

    goto frame_exception_exit_1;
    // try break handler code:
    try_break_handler_7:;
    // Restore previous exception id 3.
    SET_CURRENT_EXCEPTION(coroutine_heap->exception_preserved_type_3, coroutine_heap->exception_preserved_value_3, coroutine_heap->exception_preserved_tb_3);

    goto loop_end_3;
    // End of try:
    // End of try:
    try_end_5:;
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


        coroutine_heap->exception_lineno = 153;
        coroutine_heap->type_description_1 = "ccooo";
        goto frame_exception_exit_1;
    }
    goto loop_start_3;
    loop_end_3:;

    Nuitka_Frame_MarkAsNotExecuting(coroutine->m_frame);

#if PYTHON_VERSION >= 0x300
    Py_CLEAR(EXC_TYPE_F(coroutine));
    Py_CLEAR(EXC_VALUE_F(coroutine));
    Py_CLEAR(EXC_TRACEBACK_F(coroutine));
#endif

    // Allow re-use of the frame again.
    Py_DECREF(coroutine->m_frame);
    goto frame_no_exception_1;

    frame_exception_exit_1:;

    // If it's not an exit exception, consider and create a traceback for it.
    if (!EXCEPTION_MATCH_GENERATOR(coroutine_heap->exception_type)) {
        if (coroutine_heap->exception_tb == NULL) {
            coroutine_heap->exception_tb = MAKE_TRACEBACK(coroutine->m_frame, coroutine_heap->exception_lineno);
        } else if (coroutine_heap->exception_tb->tb_frame != &coroutine->m_frame->m_frame) {
            coroutine_heap->exception_tb = ADD_TRACEBACK(coroutine_heap->exception_tb, coroutine->m_frame, coroutine_heap->exception_lineno);
        }

        Nuitka_Frame_AttachLocals(
            coroutine->m_frame,
            coroutine_heap->type_description_1,
            coroutine->m_closure[0],
            coroutine->m_closure[1],
            coroutine_heap->var_abs_timeout,
            coroutine_heap->var_KernelManager,
            coroutine_heap->var_msg
        );


        // Release cached frame if used for exception.
        if (coroutine->m_frame == cache_m_frame) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif

            Py_DECREF(cache_m_frame);
            cache_m_frame = NULL;
        }

        assertFrameObject(coroutine->m_frame);
    }

#if PYTHON_VERSION >= 0x300
    Py_CLEAR(EXC_TYPE_F(coroutine));
    Py_CLEAR(EXC_VALUE_F(coroutine));
    Py_CLEAR(EXC_TRACEBACK_F(coroutine));
#endif

    Py_DECREF(coroutine->m_frame);

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    coroutine_heap->tmp_return_value = Py_None;
    Py_INCREF(coroutine_heap->tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(coroutine_heap->var_abs_timeout);
    coroutine_heap->var_abs_timeout = NULL;
    CHECK_OBJECT(coroutine_heap->var_KernelManager);
    Py_DECREF(coroutine_heap->var_KernelManager);
    coroutine_heap->var_KernelManager = NULL;
    Py_XDECREF(coroutine_heap->var_msg);
    coroutine_heap->var_msg = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    coroutine_heap->exception_keeper_type_7 = coroutine_heap->exception_type;
    coroutine_heap->exception_keeper_value_7 = coroutine_heap->exception_value;
    coroutine_heap->exception_keeper_tb_7 = coroutine_heap->exception_tb;
    coroutine_heap->exception_keeper_lineno_7 = coroutine_heap->exception_lineno;
    coroutine_heap->exception_type = NULL;
    coroutine_heap->exception_value = NULL;
    coroutine_heap->exception_tb = NULL;
    coroutine_heap->exception_lineno = 0;

    Py_XDECREF(coroutine_heap->var_abs_timeout);
    coroutine_heap->var_abs_timeout = NULL;
    Py_XDECREF(coroutine_heap->var_KernelManager);
    coroutine_heap->var_KernelManager = NULL;
    Py_XDECREF(coroutine_heap->var_msg);
    coroutine_heap->var_msg = NULL;
    // Re-raise.
    coroutine_heap->exception_type = coroutine_heap->exception_keeper_type_7;
    coroutine_heap->exception_value = coroutine_heap->exception_keeper_value_7;
    coroutine_heap->exception_tb = coroutine_heap->exception_keeper_tb_7;
    coroutine_heap->exception_lineno = coroutine_heap->exception_keeper_lineno_7;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must be present");

    function_exception_exit:

    assert(coroutine_heap->exception_type);
    RESTORE_ERROR_OCCURRED(coroutine_heap->exception_type, coroutine_heap->exception_value, coroutine_heap->exception_tb);
    return NULL;
    function_return_exit:;

    coroutine->m_returned = coroutine_heap->tmp_return_value;

    return NULL;

}

static PyObject *MAKE_COROUTINE_jupyter_client$asynchronous$client$$$function__8_wait_for_ready$$$coroutine__1_wait_for_ready(struct Nuitka_CellObject **closure) {
    return Nuitka_Coroutine_New(
        jupyter_client$asynchronous$client$$$function__8_wait_for_ready$$$coroutine__1_wait_for_ready_context,
        module_jupyter_client$asynchronous$client,
        mod_consts[81],
        mod_consts[82],
        codeobj_f96273d8f97446e0894f88ce7648e867,
        closure,
        2,
        sizeof(struct jupyter_client$asynchronous$client$$$function__8_wait_for_ready$$$coroutine__1_wait_for_ready_locals)
    );
}


static PyObject *impl_jupyter_client$asynchronous$client$$$function__9__recv_reply(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_CellObject *par_self = Nuitka_Cell_New1(python_pars[0]);
    struct Nuitka_CellObject *par_msg_id = Nuitka_Cell_New1(python_pars[1]);
    struct Nuitka_CellObject *par_timeout = Nuitka_Cell_New1(python_pars[2]);
    struct Nuitka_CellObject *par_channel = Nuitka_Cell_New1(python_pars[3]);
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    // Tried code:
    {
        struct Nuitka_CellObject *tmp_closure_1[4];

        tmp_closure_1[0] = par_channel;
        Py_INCREF(tmp_closure_1[0]);
        tmp_closure_1[1] = par_msg_id;
        Py_INCREF(tmp_closure_1[1]);
        tmp_closure_1[2] = par_self;
        Py_INCREF(tmp_closure_1[2]);
        tmp_closure_1[3] = par_timeout;
        Py_INCREF(tmp_closure_1[3]);

        tmp_return_value = MAKE_COROUTINE_jupyter_client$asynchronous$client$$$function__9__recv_reply$$$coroutine__1__recv_reply(tmp_closure_1);

        goto try_return_handler_1;
    }
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    par_self = NULL;
    CHECK_OBJECT(par_msg_id);
    Py_DECREF(par_msg_id);
    par_msg_id = NULL;
    CHECK_OBJECT(par_timeout);
    Py_DECREF(par_timeout);
    par_timeout = NULL;
    CHECK_OBJECT(par_channel);
    Py_DECREF(par_channel);
    par_channel = NULL;
    goto function_return_exit;
    // End of try:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    par_self = NULL;
    CHECK_OBJECT(par_msg_id);
    Py_DECREF(par_msg_id);
    par_msg_id = NULL;
    CHECK_OBJECT(par_timeout);
    Py_DECREF(par_timeout);
    par_timeout = NULL;
    CHECK_OBJECT(par_channel);
    Py_DECREF(par_channel);
    par_channel = NULL;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}



struct jupyter_client$asynchronous$client$$$function__9__recv_reply$$$coroutine__1__recv_reply_locals {
    PyObject *var_deadline;
    PyObject *var_reply;
    PyObject *var_e;
    char const *type_description_1;
    PyObject *exception_type;
    PyObject *exception_value;
    PyTracebackObject *exception_tb;
    int exception_lineno;
    int tmp_res;
    char yield_tmps[1024];
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    int exception_keeper_lineno_1;
    PyObject *exception_preserved_type_1;
    PyObject *exception_preserved_value_1;
    PyTracebackObject *exception_preserved_tb_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    int exception_keeper_lineno_2;
    bool tmp_result;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    int exception_keeper_lineno_3;
    PyObject *tmp_return_value;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    int exception_keeper_lineno_4;
};

static PyObject *jupyter_client$asynchronous$client$$$function__9__recv_reply$$$coroutine__1__recv_reply_context(struct Nuitka_CoroutineObject *coroutine, PyObject *yield_return_value) {
    CHECK_OBJECT(coroutine);
    assert(Nuitka_Coroutine_Check((PyObject *)coroutine));

    // Heap access if used.
    struct jupyter_client$asynchronous$client$$$function__9__recv_reply$$$coroutine__1__recv_reply_locals *coroutine_heap = (struct jupyter_client$asynchronous$client$$$function__9__recv_reply$$$coroutine__1__recv_reply_locals *)coroutine->m_heap_storage;

    // Dispatch to yield based on return label index:
    switch(coroutine->m_yield_return_index) {
    case 2: goto yield_return_2;
    case 1: goto yield_return_1;
    }

    // Local variable initialization
    static struct Nuitka_FrameObject *cache_m_frame = NULL;
    coroutine_heap->var_deadline = NULL;
    coroutine_heap->var_reply = NULL;
    coroutine_heap->var_e = NULL;
    coroutine_heap->type_description_1 = NULL;
    coroutine_heap->exception_type = NULL;
    coroutine_heap->exception_value = NULL;
    coroutine_heap->exception_tb = NULL;
    coroutine_heap->exception_lineno = 0;
    coroutine_heap->tmp_return_value = NULL;

    // Actual coroutine body.
    // Tried code:
    if (isFrameUnusable(cache_m_frame)) {
        Py_XDECREF(cache_m_frame);

#if _DEBUG_REFCOUNTS
        if (cache_m_frame == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_m_frame = MAKE_FUNCTION_FRAME(codeobj_75ff3742b5f247f0ceac58315a4b181a, module_jupyter_client$asynchronous$client, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    coroutine->m_frame = cache_m_frame;

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    Py_INCREF(coroutine->m_frame);
    assert(Py_REFCNT(coroutine->m_frame) == 2); // Frame stack

#if PYTHON_VERSION >= 0x340
    coroutine->m_frame->m_frame.f_gen = (PyObject *)coroutine;
#endif

    assert(coroutine->m_frame->m_frame.f_back == NULL);
    Py_CLEAR(coroutine->m_frame->m_frame.f_back);

    coroutine->m_frame->m_frame.f_back = PyThreadState_GET()->frame;
    Py_INCREF(coroutine->m_frame->m_frame.f_back);

    PyThreadState_GET()->frame = &coroutine->m_frame->m_frame;
    Py_INCREF(coroutine->m_frame);

    Nuitka_Frame_MarkAsExecuting(coroutine->m_frame);

#if PYTHON_VERSION >= 0x300
    // Accept currently existing exception as the one to publish again when we
    // yield or yield from.
    {
        PyThreadState *thread_state = PyThreadState_GET();

        EXC_TYPE_F(coroutine) = EXC_TYPE(thread_state);
        if (EXC_TYPE_F(coroutine) == Py_None) EXC_TYPE_F(coroutine) = NULL;
        Py_XINCREF(EXC_TYPE_F(coroutine));
        EXC_VALUE_F(coroutine) = EXC_VALUE(thread_state);
        Py_XINCREF(EXC_VALUE_F(coroutine));
        EXC_TRACEBACK_F(coroutine) = EXC_TRACEBACK(thread_state);
        Py_XINCREF(EXC_TRACEBACK_F(coroutine));
    }

#endif

    // Framed code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        if (Nuitka_Cell_GET(coroutine->m_closure[3]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[21]);
            coroutine_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            CHAIN_EXCEPTION(coroutine_heap->exception_value);

            coroutine_heap->exception_lineno = 169;
            coroutine_heap->type_description_1 = "ccccooo";
            goto frame_exception_exit_1;
        }

        tmp_compexpr_left_1 = Nuitka_Cell_GET(coroutine->m_closure[3]);
        tmp_compexpr_right_1 = Py_None;
        tmp_condition_result_1 = (tmp_compexpr_left_1 != tmp_compexpr_right_1) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_left_name_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_right_name_1;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_jupyter_client$asynchronous$client, (Nuitka_StringObject *)mod_consts[59]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[59]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 170;
            coroutine_heap->type_description_1 = "ccccooo";
            goto frame_exception_exit_1;
        }
        coroutine->m_frame->m_frame.f_lineno = 170;
        tmp_left_name_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[84]);
        if (tmp_left_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 170;
            coroutine_heap->type_description_1 = "ccccooo";
            goto frame_exception_exit_1;
        }
        if (Nuitka_Cell_GET(coroutine->m_closure[3]) == NULL) {
            Py_DECREF(tmp_left_name_1);
            FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[21]);
            coroutine_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            CHAIN_EXCEPTION(coroutine_heap->exception_value);

            coroutine_heap->exception_lineno = 170;
            coroutine_heap->type_description_1 = "ccccooo";
            goto frame_exception_exit_1;
        }

        tmp_right_name_1 = Nuitka_Cell_GET(coroutine->m_closure[3]);
        tmp_assign_source_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_left_name_1, tmp_right_name_1);
        Py_DECREF(tmp_left_name_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 170;
            coroutine_heap->type_description_1 = "ccccooo";
            goto frame_exception_exit_1;
        }
        assert(coroutine_heap->var_deadline == NULL);
        coroutine_heap->var_deadline = tmp_assign_source_1;
    }
    branch_no_1:;
    loop_start_1:;
    {
        bool tmp_condition_result_2;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        if (Nuitka_Cell_GET(coroutine->m_closure[3]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[21]);
            coroutine_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            CHAIN_EXCEPTION(coroutine_heap->exception_value);

            coroutine_heap->exception_lineno = 172;
            coroutine_heap->type_description_1 = "ccccooo";
            goto frame_exception_exit_1;
        }

        tmp_compexpr_left_2 = Nuitka_Cell_GET(coroutine->m_closure[3]);
        tmp_compexpr_right_2 = Py_None;
        tmp_condition_result_2 = (tmp_compexpr_left_2 != tmp_compexpr_right_2) ? true : false;
        if (tmp_condition_result_2 != false) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_name_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_left_name_2;
        PyObject *tmp_right_name_2;
        PyObject *tmp_called_instance_2;
        tmp_called_name_1 = LOOKUP_BUILTIN(mod_consts[85]);
        assert(tmp_called_name_1 != NULL);
        tmp_args_element_name_1 = mod_consts[64];
        if (coroutine_heap->var_deadline == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[86]);
            coroutine_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            CHAIN_EXCEPTION(coroutine_heap->exception_value);

            coroutine_heap->exception_lineno = 173;
            coroutine_heap->type_description_1 = "ccccooo";
            goto frame_exception_exit_1;
        }

        tmp_left_name_2 = coroutine_heap->var_deadline;
        tmp_called_instance_2 = GET_STRING_DICT_VALUE(moduledict_jupyter_client$asynchronous$client, (Nuitka_StringObject *)mod_consts[59]);

        if (unlikely(tmp_called_instance_2 == NULL)) {
            tmp_called_instance_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[59]);
        }

        if (tmp_called_instance_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 173;
            coroutine_heap->type_description_1 = "ccccooo";
            goto frame_exception_exit_1;
        }
        coroutine->m_frame->m_frame.f_lineno = 173;
        tmp_right_name_2 = CALL_METHOD_NO_ARGS(tmp_called_instance_2, mod_consts[84]);
        if (tmp_right_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 173;
            coroutine_heap->type_description_1 = "ccccooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_2 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_left_name_2, tmp_right_name_2);
        Py_DECREF(tmp_right_name_2);
        if (tmp_args_element_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 173;
            coroutine_heap->type_description_1 = "ccccooo";
            goto frame_exception_exit_1;
        }
        coroutine->m_frame->m_frame.f_lineno = 173;
        {
            PyObject *call_args[] = {tmp_args_element_name_1, tmp_args_element_name_2};
            tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_1, call_args);
        }

        Py_DECREF(tmp_args_element_name_2);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 173;
            coroutine_heap->type_description_1 = "ccccooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = Nuitka_Cell_GET(coroutine->m_closure[3]);
            PyCell_SET(coroutine->m_closure[3], tmp_assign_source_2);
            Py_XDECREF(old);
        }

    }
    branch_no_2:;
    // Tried code:
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_compexpr_left_3;
        PyObject *tmp_compexpr_right_3;
        PyObject *tmp_tmp_condition_result_3_object_1;
        int tmp_truth_name_1;
        if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[22]);
            coroutine_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            CHAIN_EXCEPTION(coroutine_heap->exception_value);

            coroutine_heap->exception_lineno = 175;
            coroutine_heap->type_description_1 = "ccccooo";
            goto try_except_handler_2;
        }

        tmp_compexpr_left_3 = Nuitka_Cell_GET(coroutine->m_closure[0]);
        tmp_compexpr_right_3 = mod_consts[87];
        tmp_tmp_condition_result_3_object_1 = RICH_COMPARE_EQ_OBJECT_OBJECT_OBJECT(tmp_compexpr_left_3, tmp_compexpr_right_3);
        if (tmp_tmp_condition_result_3_object_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 175;
            coroutine_heap->type_description_1 = "ccccooo";
            goto try_except_handler_2;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_tmp_condition_result_3_object_1);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            Py_DECREF(tmp_tmp_condition_result_3_object_1);

            coroutine_heap->exception_lineno = 175;
            coroutine_heap->type_description_1 = "ccccooo";
            goto try_except_handler_2;
        }
        tmp_condition_result_3 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_tmp_condition_result_3_object_1);
        if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_expression_name_1;
        PyObject *tmp_expression_name_2;
        PyObject *tmp_called_name_2;
        PyObject *tmp_expression_name_3;
        PyObject *tmp_kwargs_name_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        coroutine->m_frame->m_frame.f_lineno = 176;
        if (Nuitka_Cell_GET(coroutine->m_closure[2]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[27]);
            coroutine_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            CHAIN_EXCEPTION(coroutine_heap->exception_value);

            coroutine_heap->exception_lineno = 176;
            coroutine_heap->type_description_1 = "ccccooo";
            goto try_except_handler_2;
        }

        tmp_expression_name_3 = Nuitka_Cell_GET(coroutine->m_closure[2]);
        tmp_called_name_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_3, mod_consts[43]);
        if (tmp_called_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 176;
            coroutine_heap->type_description_1 = "ccccooo";
            goto try_except_handler_2;
        }
        tmp_dict_key_1 = mod_consts[21];
        if (Nuitka_Cell_GET(coroutine->m_closure[3]) == NULL) {
            Py_DECREF(tmp_called_name_2);
            FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[21]);
            coroutine_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            CHAIN_EXCEPTION(coroutine_heap->exception_value);

            coroutine_heap->exception_lineno = 176;
            coroutine_heap->type_description_1 = "ccccooo";
            goto try_except_handler_2;
        }

        tmp_dict_value_1 = Nuitka_Cell_GET(coroutine->m_closure[3]);
        tmp_kwargs_name_1 = _PyDict_NewPresized( 1 );
        coroutine_heap->tmp_res = PyDict_SetItem(tmp_kwargs_name_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(coroutine_heap->tmp_res != 0));
        coroutine->m_frame->m_frame.f_lineno = 176;
        tmp_expression_name_2 = CALL_FUNCTION_WITH_KEYARGS(tmp_called_name_2, tmp_kwargs_name_1);
        Py_DECREF(tmp_called_name_2);
        Py_DECREF(tmp_kwargs_name_1);
        if (tmp_expression_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 176;
            coroutine_heap->type_description_1 = "ccccooo";
            goto try_except_handler_2;
        }
        tmp_expression_name_1 = ASYNC_AWAIT(tmp_expression_name_2, await_normal);
        Py_DECREF(tmp_expression_name_2);
        if (tmp_expression_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 176;
            coroutine_heap->type_description_1 = "ccccooo";
            goto try_except_handler_2;
        }
        Nuitka_PreserveHeap(coroutine_heap->yield_tmps, &tmp_expression_name_2, sizeof(PyObject *), &tmp_called_name_2, sizeof(PyObject *), &tmp_expression_name_3, sizeof(PyObject *), &tmp_kwargs_name_1, sizeof(PyObject *), &tmp_dict_key_1, sizeof(PyObject *), &tmp_dict_value_1, sizeof(PyObject *), NULL);
        coroutine->m_yield_return_index = 1;
        coroutine->m_yieldfrom = tmp_expression_name_1;
        coroutine->m_awaiting = true;
        return NULL;

        yield_return_1:
        Nuitka_RestoreHeap(coroutine_heap->yield_tmps, &tmp_expression_name_2, sizeof(PyObject *), &tmp_called_name_2, sizeof(PyObject *), &tmp_expression_name_3, sizeof(PyObject *), &tmp_kwargs_name_1, sizeof(PyObject *), &tmp_dict_key_1, sizeof(PyObject *), &tmp_dict_value_1, sizeof(PyObject *), NULL);
        coroutine->m_awaiting = false;

        if (yield_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 176;
            coroutine_heap->type_description_1 = "ccccooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_3 = yield_return_value;
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 176;
            coroutine_heap->type_description_1 = "ccccooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = coroutine_heap->var_reply;
            coroutine_heap->var_reply = tmp_assign_source_3;
            Py_XDECREF(old);
        }

    }
    goto branch_end_3;
    branch_no_3:;
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_expression_name_4;
        PyObject *tmp_expression_name_5;
        PyObject *tmp_called_name_3;
        PyObject *tmp_expression_name_6;
        PyObject *tmp_kwargs_name_2;
        PyObject *tmp_dict_key_2;
        PyObject *tmp_dict_value_2;
        coroutine->m_frame->m_frame.f_lineno = 178;
        if (Nuitka_Cell_GET(coroutine->m_closure[2]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[27]);
            coroutine_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            CHAIN_EXCEPTION(coroutine_heap->exception_value);

            coroutine_heap->exception_lineno = 178;
            coroutine_heap->type_description_1 = "ccccooo";
            goto try_except_handler_2;
        }

        tmp_expression_name_6 = Nuitka_Cell_GET(coroutine->m_closure[2]);
        tmp_called_name_3 = LOOKUP_ATTRIBUTE(tmp_expression_name_6, mod_consts[31]);
        if (tmp_called_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 178;
            coroutine_heap->type_description_1 = "ccccooo";
            goto try_except_handler_2;
        }
        tmp_dict_key_2 = mod_consts[21];
        if (Nuitka_Cell_GET(coroutine->m_closure[3]) == NULL) {
            Py_DECREF(tmp_called_name_3);
            FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[21]);
            coroutine_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            CHAIN_EXCEPTION(coroutine_heap->exception_value);

            coroutine_heap->exception_lineno = 178;
            coroutine_heap->type_description_1 = "ccccooo";
            goto try_except_handler_2;
        }

        tmp_dict_value_2 = Nuitka_Cell_GET(coroutine->m_closure[3]);
        tmp_kwargs_name_2 = _PyDict_NewPresized( 1 );
        coroutine_heap->tmp_res = PyDict_SetItem(tmp_kwargs_name_2, tmp_dict_key_2, tmp_dict_value_2);
        assert(!(coroutine_heap->tmp_res != 0));
        coroutine->m_frame->m_frame.f_lineno = 178;
        tmp_expression_name_5 = CALL_FUNCTION_WITH_KEYARGS(tmp_called_name_3, tmp_kwargs_name_2);
        Py_DECREF(tmp_called_name_3);
        Py_DECREF(tmp_kwargs_name_2);
        if (tmp_expression_name_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 178;
            coroutine_heap->type_description_1 = "ccccooo";
            goto try_except_handler_2;
        }
        tmp_expression_name_4 = ASYNC_AWAIT(tmp_expression_name_5, await_normal);
        Py_DECREF(tmp_expression_name_5);
        if (tmp_expression_name_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 178;
            coroutine_heap->type_description_1 = "ccccooo";
            goto try_except_handler_2;
        }
        Nuitka_PreserveHeap(coroutine_heap->yield_tmps, &tmp_expression_name_5, sizeof(PyObject *), &tmp_called_name_3, sizeof(PyObject *), &tmp_expression_name_6, sizeof(PyObject *), &tmp_kwargs_name_2, sizeof(PyObject *), &tmp_dict_key_2, sizeof(PyObject *), &tmp_dict_value_2, sizeof(PyObject *), NULL);
        coroutine->m_yield_return_index = 2;
        coroutine->m_yieldfrom = tmp_expression_name_4;
        coroutine->m_awaiting = true;
        return NULL;

        yield_return_2:
        Nuitka_RestoreHeap(coroutine_heap->yield_tmps, &tmp_expression_name_5, sizeof(PyObject *), &tmp_called_name_3, sizeof(PyObject *), &tmp_expression_name_6, sizeof(PyObject *), &tmp_kwargs_name_2, sizeof(PyObject *), &tmp_dict_key_2, sizeof(PyObject *), &tmp_dict_value_2, sizeof(PyObject *), NULL);
        coroutine->m_awaiting = false;

        if (yield_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 178;
            coroutine_heap->type_description_1 = "ccccooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_4 = yield_return_value;
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 178;
            coroutine_heap->type_description_1 = "ccccooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = coroutine_heap->var_reply;
            coroutine_heap->var_reply = tmp_assign_source_4;
            Py_XDECREF(old);
        }

    }
    branch_end_3:;
    goto try_end_1;
    // Exception handler code:
    try_except_handler_2:;
    coroutine_heap->exception_keeper_type_1 = coroutine_heap->exception_type;
    coroutine_heap->exception_keeper_value_1 = coroutine_heap->exception_value;
    coroutine_heap->exception_keeper_tb_1 = coroutine_heap->exception_tb;
    coroutine_heap->exception_keeper_lineno_1 = coroutine_heap->exception_lineno;
    coroutine_heap->exception_type = NULL;
    coroutine_heap->exception_value = NULL;
    coroutine_heap->exception_tb = NULL;
    coroutine_heap->exception_lineno = 0;

    // Preserve existing published exception id 1.
    GET_CURRENT_EXCEPTION(&coroutine_heap->exception_preserved_type_1, &coroutine_heap->exception_preserved_value_1, &coroutine_heap->exception_preserved_tb_1);

    if (coroutine_heap->exception_keeper_tb_1 == NULL) {
        coroutine_heap->exception_keeper_tb_1 = MAKE_TRACEBACK(coroutine->m_frame, coroutine_heap->exception_keeper_lineno_1);
    } else if (coroutine_heap->exception_keeper_lineno_1 != 0) {
        coroutine_heap->exception_keeper_tb_1 = ADD_TRACEBACK(coroutine_heap->exception_keeper_tb_1, coroutine->m_frame, coroutine_heap->exception_keeper_lineno_1);
    }

    NORMALIZE_EXCEPTION(&coroutine_heap->exception_keeper_type_1, &coroutine_heap->exception_keeper_value_1, &coroutine_heap->exception_keeper_tb_1);
    ATTACH_TRACEBACK_TO_EXCEPTION_VALUE(coroutine_heap->exception_keeper_value_1, coroutine_heap->exception_keeper_tb_1);
    PUBLISH_EXCEPTION(&coroutine_heap->exception_keeper_type_1, &coroutine_heap->exception_keeper_value_1, &coroutine_heap->exception_keeper_tb_1);
    // Tried code:
    {
        bool tmp_condition_result_4;
        PyObject *tmp_compexpr_left_4;
        PyObject *tmp_compexpr_right_4;
        tmp_compexpr_left_4 = EXC_TYPE(PyThreadState_GET());
        tmp_compexpr_right_4 = GET_STRING_DICT_VALUE(moduledict_jupyter_client$asynchronous$client, (Nuitka_StringObject *)mod_consts[73]);

        if (unlikely(tmp_compexpr_right_4 == NULL)) {
            tmp_compexpr_right_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[73]);
        }

        if (tmp_compexpr_right_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 179;
            coroutine_heap->type_description_1 = "ccccooo";
            goto try_except_handler_3;
        }
        coroutine_heap->tmp_res = EXCEPTION_MATCH_BOOL(tmp_compexpr_left_4, tmp_compexpr_right_4);
        if (coroutine_heap->tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 179;
            coroutine_heap->type_description_1 = "ccccooo";
            goto try_except_handler_3;
        }
        tmp_condition_result_4 = (coroutine_heap->tmp_res != 0) ? true : false;
        if (tmp_condition_result_4 != false) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    {
        PyObject *tmp_assign_source_5;
        tmp_assign_source_5 = EXC_VALUE(PyThreadState_GET());
        {
            PyObject *old = coroutine_heap->var_e;
            coroutine_heap->var_e = tmp_assign_source_5;
            Py_INCREF(coroutine_heap->var_e);
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_make_exception_arg_1;
        PyObject *tmp_raise_cause_1;
        tmp_make_exception_arg_1 = mod_consts[88];
        coroutine->m_frame->m_frame.f_lineno = 180;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_TimeoutError, tmp_make_exception_arg_1);
        assert(!(tmp_raise_type_1 == NULL));
        CHECK_OBJECT(coroutine_heap->var_e);
        tmp_raise_cause_1 = coroutine_heap->var_e;
        coroutine_heap->exception_type = tmp_raise_type_1;
        coroutine_heap->exception_value = NULL;
        Py_INCREF(tmp_raise_cause_1);
        coroutine_heap->exception_lineno = 180;
        RAISE_EXCEPTION_WITH_CAUSE(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb, tmp_raise_cause_1);
        coroutine_heap->type_description_1 = "ccccooo";
        goto try_except_handler_4;
    }
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Exception handler code:
    try_except_handler_4:;
    coroutine_heap->exception_keeper_type_2 = coroutine_heap->exception_type;
    coroutine_heap->exception_keeper_value_2 = coroutine_heap->exception_value;
    coroutine_heap->exception_keeper_tb_2 = coroutine_heap->exception_tb;
    coroutine_heap->exception_keeper_lineno_2 = coroutine_heap->exception_lineno;
    coroutine_heap->exception_type = NULL;
    coroutine_heap->exception_value = NULL;
    coroutine_heap->exception_tb = NULL;
    coroutine_heap->exception_lineno = 0;

    Py_XDECREF(coroutine_heap->var_e);
    coroutine_heap->var_e = NULL;

    // Re-raise.
    coroutine_heap->exception_type = coroutine_heap->exception_keeper_type_2;
    coroutine_heap->exception_value = coroutine_heap->exception_keeper_value_2;
    coroutine_heap->exception_tb = coroutine_heap->exception_keeper_tb_2;
    coroutine_heap->exception_lineno = coroutine_heap->exception_keeper_lineno_2;

    goto try_except_handler_3;
    // End of try:
    goto branch_end_4;
    branch_no_4:;
    coroutine_heap->tmp_result = RERAISE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
    if (unlikely(coroutine_heap->tmp_result == false)) {
        coroutine_heap->exception_lineno = 174;
    }

    if (coroutine_heap->exception_tb && coroutine_heap->exception_tb->tb_frame == &coroutine->m_frame->m_frame) coroutine->m_frame->m_frame.f_lineno = coroutine_heap->exception_tb->tb_lineno;
    coroutine_heap->type_description_1 = "ccccooo";
    goto try_except_handler_3;
    branch_end_4:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Exception handler code:
    try_except_handler_3:;
    coroutine_heap->exception_keeper_type_3 = coroutine_heap->exception_type;
    coroutine_heap->exception_keeper_value_3 = coroutine_heap->exception_value;
    coroutine_heap->exception_keeper_tb_3 = coroutine_heap->exception_tb;
    coroutine_heap->exception_keeper_lineno_3 = coroutine_heap->exception_lineno;
    coroutine_heap->exception_type = NULL;
    coroutine_heap->exception_value = NULL;
    coroutine_heap->exception_tb = NULL;
    coroutine_heap->exception_lineno = 0;

    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(coroutine_heap->exception_preserved_type_1, coroutine_heap->exception_preserved_value_1, coroutine_heap->exception_preserved_tb_1);

    // Re-raise.
    coroutine_heap->exception_type = coroutine_heap->exception_keeper_type_3;
    coroutine_heap->exception_value = coroutine_heap->exception_keeper_value_3;
    coroutine_heap->exception_tb = coroutine_heap->exception_keeper_tb_3;
    coroutine_heap->exception_lineno = coroutine_heap->exception_keeper_lineno_3;

    goto frame_exception_exit_1;
    // End of try:
    // End of try:
    try_end_1:;
    {
        nuitka_bool tmp_condition_result_5;
        PyObject *tmp_compexpr_left_5;
        PyObject *tmp_compexpr_right_5;
        PyObject *tmp_called_instance_3;
        PyObject *tmp_expression_name_7;
        PyObject *tmp_subscript_name_1;
        CHECK_OBJECT(coroutine_heap->var_reply);
        tmp_expression_name_7 = coroutine_heap->var_reply;
        tmp_subscript_name_1 = mod_consts[89];
        tmp_called_instance_3 = LOOKUP_SUBSCRIPT(tmp_expression_name_7, tmp_subscript_name_1);
        if (tmp_called_instance_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 181;
            coroutine_heap->type_description_1 = "ccccooo";
            goto frame_exception_exit_1;
        }
        coroutine->m_frame->m_frame.f_lineno = 181;
        tmp_compexpr_left_5 = CALL_METHOD_WITH_ARGS1(
            tmp_called_instance_3,
            mod_consts[90],
            &PyTuple_GET_ITEM(mod_consts[91], 0)
        );

        Py_DECREF(tmp_called_instance_3);
        if (tmp_compexpr_left_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 181;
            coroutine_heap->type_description_1 = "ccccooo";
            goto frame_exception_exit_1;
        }
        if (Nuitka_Cell_GET(coroutine->m_closure[1]) == NULL) {
            Py_DECREF(tmp_compexpr_left_5);
            FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[92]);
            coroutine_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            CHAIN_EXCEPTION(coroutine_heap->exception_value);

            coroutine_heap->exception_lineno = 181;
            coroutine_heap->type_description_1 = "ccccooo";
            goto frame_exception_exit_1;
        }

        tmp_compexpr_right_5 = Nuitka_Cell_GET(coroutine->m_closure[1]);
        tmp_condition_result_5 = RICH_COMPARE_NE_NBOOL_OBJECT_OBJECT(tmp_compexpr_left_5, tmp_compexpr_right_5);
        Py_DECREF(tmp_compexpr_left_5);
        if (tmp_condition_result_5 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 181;
            coroutine_heap->type_description_1 = "ccccooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
            goto branch_yes_5;
        } else {
            goto branch_no_5;
        }
        assert(tmp_condition_result_5 != NUITKA_BOOL_UNASSIGNED);
    }
    branch_yes_5:;
    goto loop_start_1;
    branch_no_5:;
    CHECK_OBJECT(coroutine_heap->var_reply);
    coroutine_heap->tmp_return_value = coroutine_heap->var_reply;
    Py_INCREF(coroutine_heap->tmp_return_value);
    goto frame_return_exit_1;
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


        coroutine_heap->exception_lineno = 171;
        coroutine_heap->type_description_1 = "ccccooo";
        goto frame_exception_exit_1;
    }
    goto loop_start_1;

    Nuitka_Frame_MarkAsNotExecuting(coroutine->m_frame);

#if PYTHON_VERSION >= 0x300
    Py_CLEAR(EXC_TYPE_F(coroutine));
    Py_CLEAR(EXC_VALUE_F(coroutine));
    Py_CLEAR(EXC_TRACEBACK_F(coroutine));
#endif

    // Allow re-use of the frame again.
    Py_DECREF(coroutine->m_frame);
    goto frame_no_exception_1;

    frame_return_exit_1:;

#if PYTHON_VERSION >= 0x300
    Py_CLEAR(EXC_TYPE_F(coroutine));
    Py_CLEAR(EXC_VALUE_F(coroutine));
    Py_CLEAR(EXC_TRACEBACK_F(coroutine));
#endif

    Py_DECREF(coroutine->m_frame);
    goto try_return_handler_1;

    frame_exception_exit_1:;

    // If it's not an exit exception, consider and create a traceback for it.
    if (!EXCEPTION_MATCH_GENERATOR(coroutine_heap->exception_type)) {
        if (coroutine_heap->exception_tb == NULL) {
            coroutine_heap->exception_tb = MAKE_TRACEBACK(coroutine->m_frame, coroutine_heap->exception_lineno);
        } else if (coroutine_heap->exception_tb->tb_frame != &coroutine->m_frame->m_frame) {
            coroutine_heap->exception_tb = ADD_TRACEBACK(coroutine_heap->exception_tb, coroutine->m_frame, coroutine_heap->exception_lineno);
        }

        Nuitka_Frame_AttachLocals(
            coroutine->m_frame,
            coroutine_heap->type_description_1,
            coroutine->m_closure[2],
            coroutine->m_closure[1],
            coroutine->m_closure[3],
            coroutine->m_closure[0],
            coroutine_heap->var_deadline,
            coroutine_heap->var_reply,
            coroutine_heap->var_e
        );


        // Release cached frame if used for exception.
        if (coroutine->m_frame == cache_m_frame) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif

            Py_DECREF(cache_m_frame);
            cache_m_frame = NULL;
        }

        assertFrameObject(coroutine->m_frame);
    }

#if PYTHON_VERSION >= 0x300
    Py_CLEAR(EXC_TYPE_F(coroutine));
    Py_CLEAR(EXC_VALUE_F(coroutine));
    Py_CLEAR(EXC_TRACEBACK_F(coroutine));
#endif

    Py_DECREF(coroutine->m_frame);

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(coroutine_heap->var_deadline);
    coroutine_heap->var_deadline = NULL;
    CHECK_OBJECT(coroutine_heap->var_reply);
    Py_DECREF(coroutine_heap->var_reply);
    coroutine_heap->var_reply = NULL;
    Py_XDECREF(coroutine_heap->var_e);
    coroutine_heap->var_e = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    coroutine_heap->exception_keeper_type_4 = coroutine_heap->exception_type;
    coroutine_heap->exception_keeper_value_4 = coroutine_heap->exception_value;
    coroutine_heap->exception_keeper_tb_4 = coroutine_heap->exception_tb;
    coroutine_heap->exception_keeper_lineno_4 = coroutine_heap->exception_lineno;
    coroutine_heap->exception_type = NULL;
    coroutine_heap->exception_value = NULL;
    coroutine_heap->exception_tb = NULL;
    coroutine_heap->exception_lineno = 0;

    Py_XDECREF(coroutine_heap->var_deadline);
    coroutine_heap->var_deadline = NULL;
    Py_XDECREF(coroutine_heap->var_reply);
    coroutine_heap->var_reply = NULL;
    Py_XDECREF(coroutine_heap->var_e);
    coroutine_heap->var_e = NULL;
    // Re-raise.
    coroutine_heap->exception_type = coroutine_heap->exception_keeper_type_4;
    coroutine_heap->exception_value = coroutine_heap->exception_keeper_value_4;
    coroutine_heap->exception_tb = coroutine_heap->exception_keeper_tb_4;
    coroutine_heap->exception_lineno = coroutine_heap->exception_keeper_lineno_4;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must be present");

    function_exception_exit:

    assert(coroutine_heap->exception_type);
    RESTORE_ERROR_OCCURRED(coroutine_heap->exception_type, coroutine_heap->exception_value, coroutine_heap->exception_tb);
    return NULL;
    function_return_exit:;

    coroutine->m_returned = coroutine_heap->tmp_return_value;

    return NULL;

}

static PyObject *MAKE_COROUTINE_jupyter_client$asynchronous$client$$$function__9__recv_reply$$$coroutine__1__recv_reply(struct Nuitka_CellObject **closure) {
    return Nuitka_Coroutine_New(
        jupyter_client$asynchronous$client$$$function__9__recv_reply$$$coroutine__1__recv_reply_context,
        module_jupyter_client$asynchronous$client,
        mod_consts[20],
        mod_consts[93],
        codeobj_75ff3742b5f247f0ceac58315a4b181a,
        closure,
        4,
        sizeof(struct jupyter_client$asynchronous$client$$$function__9__recv_reply$$$coroutine__1__recv_reply_locals)
    );
}


static PyObject *impl_jupyter_client$asynchronous$client$$$function__10__stdin_hook_default(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_msg = python_pars[1];
    PyObject *var_content = NULL;
    PyObject *var_prompt = NULL;
    PyObject *var_raw_data = NULL;
    struct Nuitka_FrameObject *frame_c8e0dad4868b99efa6fa22e042fae6f4;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *exception_preserved_type_1;
    PyObject *exception_preserved_value_1;
    PyTracebackObject *exception_preserved_tb_1;
    int tmp_res;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *tmp_return_value = NULL;
    bool tmp_result;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    static struct Nuitka_FrameObject *cache_frame_c8e0dad4868b99efa6fa22e042fae6f4 = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_c8e0dad4868b99efa6fa22e042fae6f4)) {
        Py_XDECREF(cache_frame_c8e0dad4868b99efa6fa22e042fae6f4);

#if _DEBUG_REFCOUNTS
        if (cache_frame_c8e0dad4868b99efa6fa22e042fae6f4 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_c8e0dad4868b99efa6fa22e042fae6f4 = MAKE_FUNCTION_FRAME(codeobj_c8e0dad4868b99efa6fa22e042fae6f4, module_jupyter_client$asynchronous$client, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_c8e0dad4868b99efa6fa22e042fae6f4->m_type_description == NULL);
    frame_c8e0dad4868b99efa6fa22e042fae6f4 = cache_frame_c8e0dad4868b99efa6fa22e042fae6f4;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_c8e0dad4868b99efa6fa22e042fae6f4);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_c8e0dad4868b99efa6fa22e042fae6f4) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_expression_name_1;
        PyObject *tmp_subscript_name_1;
        CHECK_OBJECT(par_msg);
        tmp_expression_name_1 = par_msg;
        tmp_subscript_name_1 = mod_consts[94];
        tmp_assign_source_1 = LOOKUP_SUBSCRIPT(tmp_expression_name_1, tmp_subscript_name_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 201;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        assert(var_content == NULL);
        var_content = tmp_assign_source_1;
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        int tmp_truth_name_1;
        CHECK_OBJECT(var_content);
        tmp_called_instance_1 = var_content;
        frame_c8e0dad4868b99efa6fa22e042fae6f4->m_frame.f_lineno = 202;
        tmp_call_result_1 = CALL_METHOD_WITH_ARGS2(
            tmp_called_instance_1,
            mod_consts[90],
            &PyTuple_GET_ITEM(mod_consts[95], 0)
        );

        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 202;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_call_result_1);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_call_result_1);

            exception_lineno = 202;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_call_result_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = GET_STRING_DICT_VALUE(moduledict_jupyter_client$asynchronous$client, (Nuitka_StringObject *)mod_consts[96]);

        if (unlikely(tmp_assign_source_2 == NULL)) {
            tmp_assign_source_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[96]);
        }

        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 203;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        assert(var_prompt == NULL);
        Py_INCREF(tmp_assign_source_2);
        var_prompt = tmp_assign_source_2;
    }
    goto branch_end_1;
    branch_no_1:;
    {
        PyObject *tmp_assign_source_3;
        tmp_assign_source_3 = LOOKUP_BUILTIN(mod_consts[97]);
        assert(tmp_assign_source_3 != NULL);
        assert(var_prompt == NULL);
        Py_INCREF(tmp_assign_source_3);
        var_prompt = tmp_assign_source_3;
    }
    branch_end_1:;
    // Tried code:
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_called_name_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_expression_name_2;
        PyObject *tmp_subscript_name_2;
        CHECK_OBJECT(var_prompt);
        tmp_called_name_1 = var_prompt;
        if (var_content == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[94]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 208;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }

        tmp_expression_name_2 = var_content;
        tmp_subscript_name_2 = mod_consts[98];
        tmp_args_element_name_1 = LOOKUP_SUBSCRIPT(tmp_expression_name_2, tmp_subscript_name_2);
        if (tmp_args_element_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 208;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        frame_c8e0dad4868b99efa6fa22e042fae6f4->m_frame.f_lineno = 208;
        tmp_assign_source_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_1, tmp_args_element_name_1);
        Py_DECREF(tmp_args_element_name_1);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 208;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        assert(var_raw_data == NULL);
        var_raw_data = tmp_assign_source_4;
    }
    goto try_end_1;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Preserve existing published exception id 1.
    GET_CURRENT_EXCEPTION(&exception_preserved_type_1, &exception_preserved_value_1, &exception_preserved_tb_1);

    if (exception_keeper_tb_1 == NULL) {
        exception_keeper_tb_1 = MAKE_TRACEBACK(frame_c8e0dad4868b99efa6fa22e042fae6f4, exception_keeper_lineno_1);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_keeper_tb_1 = ADD_TRACEBACK(exception_keeper_tb_1, frame_c8e0dad4868b99efa6fa22e042fae6f4, exception_keeper_lineno_1);
    }

    NORMALIZE_EXCEPTION(&exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1);
    ATTACH_TRACEBACK_TO_EXCEPTION_VALUE(exception_keeper_value_1, exception_keeper_tb_1);
    PUBLISH_EXCEPTION(&exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1);
    // Tried code:
    {
        bool tmp_condition_result_2;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        tmp_compexpr_left_1 = EXC_TYPE(PyThreadState_GET());
        tmp_compexpr_right_1 = PyExc_EOFError;
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_compexpr_left_1, tmp_compexpr_right_1);
        assert(!(tmp_res == -1));
        tmp_condition_result_2 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_2 != false) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_assign_source_5;
        tmp_assign_source_5 = mod_consts[99];
        assert(var_raw_data == NULL);
        Py_INCREF(tmp_assign_source_5);
        var_raw_data = tmp_assign_source_5;
    }
    goto branch_end_2;
    branch_no_2:;
    {
        bool tmp_condition_result_3;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        tmp_compexpr_left_2 = EXC_TYPE(PyThreadState_GET());
        tmp_compexpr_right_2 = PyExc_KeyboardInterrupt;
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_compexpr_left_2, tmp_compexpr_right_2);
        assert(!(tmp_res == -1));
        tmp_condition_result_3 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_3 != false) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_expression_name_3;
        PyObject *tmp_call_result_2;
        tmp_expression_name_3 = GET_STRING_DICT_VALUE(moduledict_jupyter_client$asynchronous$client, (Nuitka_StringObject *)mod_consts[100]);

        if (unlikely(tmp_expression_name_3 == NULL)) {
            tmp_expression_name_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[100]);
        }

        if (tmp_expression_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 213;
            type_description_1 = "ooooo";
            goto try_except_handler_3;
        }
        tmp_called_instance_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_3, mod_consts[101]);
        if (tmp_called_instance_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 213;
            type_description_1 = "ooooo";
            goto try_except_handler_3;
        }
        frame_c8e0dad4868b99efa6fa22e042fae6f4->m_frame.f_lineno = 213;
        tmp_call_result_2 = CALL_METHOD_WITH_ARGS1(
            tmp_called_instance_2,
            mod_consts[102],
            &PyTuple_GET_ITEM(mod_consts[103], 0)
        );

        Py_DECREF(tmp_called_instance_2);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 213;
            type_description_1 = "ooooo";
            goto try_except_handler_3;
        }
        Py_DECREF(tmp_call_result_2);
    }
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_3;
    goto branch_end_3;
    branch_no_3:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 207;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_c8e0dad4868b99efa6fa22e042fae6f4->m_frame) frame_c8e0dad4868b99efa6fa22e042fae6f4->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "ooooo";
    goto try_except_handler_3;
    branch_end_3:;
    branch_end_2:;
    goto try_end_2;
    // Return handler code:
    try_return_handler_3:;
    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1);

    goto frame_return_exit_1;
    // Exception handler code:
    try_except_handler_3:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_keeper_lineno_2 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1);

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1);

    goto try_end_1;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_1:;
    {
        nuitka_bool tmp_condition_result_4;
        PyObject *tmp_operand_name_1;
        int tmp_or_left_truth_1;
        PyObject *tmp_or_left_value_1;
        PyObject *tmp_or_right_value_1;
        PyObject *tmp_called_instance_3;
        PyObject *tmp_expression_name_4;
        PyObject *tmp_called_instance_4;
        PyObject *tmp_expression_name_5;
        CHECK_OBJECT(par_self);
        tmp_expression_name_4 = par_self;
        tmp_called_instance_3 = LOOKUP_ATTRIBUTE(tmp_expression_name_4, mod_consts[38]);
        if (tmp_called_instance_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 218;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        frame_c8e0dad4868b99efa6fa22e042fae6f4->m_frame.f_lineno = 218;
        tmp_or_left_value_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_3, mod_consts[104]);
        Py_DECREF(tmp_called_instance_3);
        if (tmp_or_left_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 218;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_or_left_truth_1 = CHECK_IF_TRUE(tmp_or_left_value_1);
        if (tmp_or_left_truth_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_or_left_value_1);

            exception_lineno = 218;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_or_left_truth_1 == 1) {
            goto or_left_1;
        } else {
            goto or_right_1;
        }
        or_right_1:;
        Py_DECREF(tmp_or_left_value_1);
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[27]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 218;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_5 = par_self;
        tmp_called_instance_4 = LOOKUP_ATTRIBUTE(tmp_expression_name_5, mod_consts[28]);
        if (tmp_called_instance_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 218;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        frame_c8e0dad4868b99efa6fa22e042fae6f4->m_frame.f_lineno = 218;
        tmp_or_right_value_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_4, mod_consts[104]);
        Py_DECREF(tmp_called_instance_4);
        if (tmp_or_right_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 218;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_operand_name_1 = tmp_or_right_value_1;
        goto or_end_1;
        or_left_1:;
        tmp_operand_name_1 = tmp_or_left_value_1;
        or_end_1:;
        tmp_res = CHECK_IF_TRUE(tmp_operand_name_1);
        Py_DECREF(tmp_operand_name_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 218;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_4 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    {
        PyObject *tmp_called_name_2;
        PyObject *tmp_expression_name_6;
        PyObject *tmp_call_result_3;
        PyObject *tmp_args_element_name_2;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[27]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 219;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_6 = par_self;
        tmp_called_name_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_6, mod_consts[97]);
        if (tmp_called_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 219;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        if (var_raw_data == NULL) {
            Py_DECREF(tmp_called_name_2);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[105]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 219;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_name_2 = var_raw_data;
        frame_c8e0dad4868b99efa6fa22e042fae6f4->m_frame.f_lineno = 219;
        tmp_call_result_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_2, tmp_args_element_name_2);
        Py_DECREF(tmp_called_name_2);
        if (tmp_call_result_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 219;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_3);
    }
    branch_no_4:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_c8e0dad4868b99efa6fa22e042fae6f4);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_c8e0dad4868b99efa6fa22e042fae6f4);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_c8e0dad4868b99efa6fa22e042fae6f4);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_c8e0dad4868b99efa6fa22e042fae6f4, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_c8e0dad4868b99efa6fa22e042fae6f4->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_c8e0dad4868b99efa6fa22e042fae6f4, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_c8e0dad4868b99efa6fa22e042fae6f4,
        type_description_1,
        par_self,
        par_msg,
        var_content,
        var_prompt,
        var_raw_data
    );


    // Release cached frame if used for exception.
    if (frame_c8e0dad4868b99efa6fa22e042fae6f4 == cache_frame_c8e0dad4868b99efa6fa22e042fae6f4) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_c8e0dad4868b99efa6fa22e042fae6f4);
        cache_frame_c8e0dad4868b99efa6fa22e042fae6f4 = NULL;
    }

    assertFrameObject(frame_c8e0dad4868b99efa6fa22e042fae6f4);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(par_self);
    par_self = NULL;
    CHECK_OBJECT(par_msg);
    Py_DECREF(par_msg);
    par_msg = NULL;
    Py_XDECREF(var_content);
    var_content = NULL;
    CHECK_OBJECT(var_prompt);
    Py_DECREF(var_prompt);
    var_prompt = NULL;
    Py_XDECREF(var_raw_data);
    var_raw_data = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(par_self);
    par_self = NULL;
    CHECK_OBJECT(par_msg);
    Py_DECREF(par_msg);
    par_msg = NULL;
    Py_XDECREF(var_content);
    var_content = NULL;
    Py_XDECREF(var_prompt);
    var_prompt = NULL;
    Py_XDECREF(var_raw_data);
    var_raw_data = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_jupyter_client$asynchronous$client$$$function__11__output_hook_default(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_msg = python_pars[1];
    PyObject *var_msg_type = NULL;
    PyObject *var_content = NULL;
    PyObject *var_stream = NULL;
    struct Nuitka_FrameObject *frame_8074c8bfaa2b6aa8b7417787c56294a4;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_8074c8bfaa2b6aa8b7417787c56294a4 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_8074c8bfaa2b6aa8b7417787c56294a4)) {
        Py_XDECREF(cache_frame_8074c8bfaa2b6aa8b7417787c56294a4);

#if _DEBUG_REFCOUNTS
        if (cache_frame_8074c8bfaa2b6aa8b7417787c56294a4 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_8074c8bfaa2b6aa8b7417787c56294a4 = MAKE_FUNCTION_FRAME(codeobj_8074c8bfaa2b6aa8b7417787c56294a4, module_jupyter_client$asynchronous$client, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_8074c8bfaa2b6aa8b7417787c56294a4->m_type_description == NULL);
    frame_8074c8bfaa2b6aa8b7417787c56294a4 = cache_frame_8074c8bfaa2b6aa8b7417787c56294a4;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_8074c8bfaa2b6aa8b7417787c56294a4);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_8074c8bfaa2b6aa8b7417787c56294a4) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_expression_name_1;
        PyObject *tmp_expression_name_2;
        PyObject *tmp_subscript_name_1;
        PyObject *tmp_subscript_name_2;
        CHECK_OBJECT(par_msg);
        tmp_expression_name_2 = par_msg;
        tmp_subscript_name_1 = mod_consts[107];
        tmp_expression_name_1 = LOOKUP_SUBSCRIPT(tmp_expression_name_2, tmp_subscript_name_1);
        if (tmp_expression_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 223;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_name_2 = mod_consts[75];
        tmp_assign_source_1 = LOOKUP_SUBSCRIPT(tmp_expression_name_1, tmp_subscript_name_2);
        Py_DECREF(tmp_expression_name_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 223;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        assert(var_msg_type == NULL);
        var_msg_type = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_expression_name_3;
        PyObject *tmp_subscript_name_3;
        CHECK_OBJECT(par_msg);
        tmp_expression_name_3 = par_msg;
        tmp_subscript_name_3 = mod_consts[94];
        tmp_assign_source_2 = LOOKUP_SUBSCRIPT(tmp_expression_name_3, tmp_subscript_name_3);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 224;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        assert(var_content == NULL);
        var_content = tmp_assign_source_2;
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_tmp_condition_result_1_object_1;
        int tmp_truth_name_1;
        CHECK_OBJECT(var_msg_type);
        tmp_compexpr_left_1 = var_msg_type;
        tmp_compexpr_right_1 = mod_consts[108];
        tmp_tmp_condition_result_1_object_1 = RICH_COMPARE_EQ_OBJECT_OBJECT_OBJECT(tmp_compexpr_left_1, tmp_compexpr_right_1);
        if (tmp_tmp_condition_result_1_object_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 225;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_tmp_condition_result_1_object_1);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_tmp_condition_result_1_object_1);

            exception_lineno = 225;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_tmp_condition_result_1_object_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_getattr_target_1;
        PyObject *tmp_getattr_attr_1;
        PyObject *tmp_expression_name_4;
        PyObject *tmp_subscript_name_4;
        tmp_getattr_target_1 = GET_STRING_DICT_VALUE(moduledict_jupyter_client$asynchronous$client, (Nuitka_StringObject *)mod_consts[100]);

        if (unlikely(tmp_getattr_target_1 == NULL)) {
            tmp_getattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[100]);
        }

        if (tmp_getattr_target_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 226;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_content);
        tmp_expression_name_4 = var_content;
        tmp_subscript_name_4 = mod_consts[109];
        tmp_getattr_attr_1 = LOOKUP_SUBSCRIPT(tmp_expression_name_4, tmp_subscript_name_4);
        if (tmp_getattr_attr_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 226;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_3 = BUILTIN_GETATTR(tmp_getattr_target_1, tmp_getattr_attr_1, NULL);
        Py_DECREF(tmp_getattr_attr_1);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 226;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        assert(var_stream == NULL);
        var_stream = tmp_assign_source_3;
    }
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_expression_name_5;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_expression_name_6;
        PyObject *tmp_subscript_name_5;
        CHECK_OBJECT(var_stream);
        tmp_expression_name_5 = var_stream;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_5, mod_consts[102]);
        if (tmp_called_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 227;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_content);
        tmp_expression_name_6 = var_content;
        tmp_subscript_name_5 = mod_consts[110];
        tmp_args_element_name_1 = LOOKUP_SUBSCRIPT(tmp_expression_name_6, tmp_subscript_name_5);
        if (tmp_args_element_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_1);

            exception_lineno = 227;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        frame_8074c8bfaa2b6aa8b7417787c56294a4->m_frame.f_lineno = 227;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_1, tmp_args_element_name_1);
        Py_DECREF(tmp_called_name_1);
        Py_DECREF(tmp_args_element_name_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 227;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    goto branch_end_1;
    branch_no_1:;
    {
        bool tmp_condition_result_2;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        CHECK_OBJECT(var_msg_type);
        tmp_compexpr_left_2 = var_msg_type;
        tmp_compexpr_right_2 = mod_consts[111];
        tmp_res = PySequence_Contains(tmp_compexpr_right_2, tmp_compexpr_left_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 228;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_2 = (tmp_res == 1) ? true : false;
        if (tmp_condition_result_2 != false) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_called_name_2;
        PyObject *tmp_expression_name_7;
        PyObject *tmp_expression_name_8;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_name_9;
        PyObject *tmp_subscript_name_6;
        tmp_expression_name_8 = GET_STRING_DICT_VALUE(moduledict_jupyter_client$asynchronous$client, (Nuitka_StringObject *)mod_consts[100]);

        if (unlikely(tmp_expression_name_8 == NULL)) {
            tmp_expression_name_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[100]);
        }

        if (tmp_expression_name_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 229;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_name_7 = LOOKUP_ATTRIBUTE(tmp_expression_name_8, mod_consts[101]);
        if (tmp_expression_name_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 229;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_7, mod_consts[102]);
        Py_DECREF(tmp_expression_name_7);
        if (tmp_called_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 229;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_content);
        tmp_expression_name_9 = var_content;
        tmp_subscript_name_6 = mod_consts[112];
        tmp_called_instance_1 = LOOKUP_SUBSCRIPT(tmp_expression_name_9, tmp_subscript_name_6);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_2);

            exception_lineno = 229;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        frame_8074c8bfaa2b6aa8b7417787c56294a4->m_frame.f_lineno = 229;
        tmp_args_element_name_2 = CALL_METHOD_WITH_ARGS2(
            tmp_called_instance_1,
            mod_consts[90],
            &PyTuple_GET_ITEM(mod_consts[113], 0)
        );

        Py_DECREF(tmp_called_instance_1);
        if (tmp_args_element_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_2);

            exception_lineno = 229;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        frame_8074c8bfaa2b6aa8b7417787c56294a4->m_frame.f_lineno = 229;
        tmp_call_result_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_2, tmp_args_element_name_2);
        Py_DECREF(tmp_called_name_2);
        Py_DECREF(tmp_args_element_name_2);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 229;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    goto branch_end_2;
    branch_no_2:;
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_compexpr_left_3;
        PyObject *tmp_compexpr_right_3;
        PyObject *tmp_tmp_condition_result_3_object_1;
        int tmp_truth_name_2;
        CHECK_OBJECT(var_msg_type);
        tmp_compexpr_left_3 = var_msg_type;
        tmp_compexpr_right_3 = mod_consts[114];
        tmp_tmp_condition_result_3_object_1 = RICH_COMPARE_EQ_OBJECT_OBJECT_OBJECT(tmp_compexpr_left_3, tmp_compexpr_right_3);
        if (tmp_tmp_condition_result_3_object_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 230;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_2 = CHECK_IF_TRUE(tmp_tmp_condition_result_3_object_1);
        if (tmp_truth_name_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_tmp_condition_result_3_object_1);

            exception_lineno = 230;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_3 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_tmp_condition_result_3_object_1);
        if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        PyObject *tmp_called_name_3;
        PyObject *tmp_call_result_3;
        PyObject *tmp_args_name_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_called_name_4;
        PyObject *tmp_expression_name_10;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_expression_name_11;
        PyObject *tmp_subscript_name_7;
        PyObject *tmp_kwargs_name_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_expression_name_12;
        tmp_called_name_3 = LOOKUP_BUILTIN(mod_consts[115]);
        assert(tmp_called_name_3 != NULL);
        tmp_expression_name_10 = mod_consts[14];
        tmp_called_name_4 = LOOKUP_ATTRIBUTE(tmp_expression_name_10, mod_consts[15]);
        assert(!(tmp_called_name_4 == NULL));
        CHECK_OBJECT(var_content);
        tmp_expression_name_11 = var_content;
        tmp_subscript_name_7 = mod_consts[116];
        tmp_args_element_name_3 = LOOKUP_SUBSCRIPT(tmp_expression_name_11, tmp_subscript_name_7);
        if (tmp_args_element_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_4);

            exception_lineno = 231;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        frame_8074c8bfaa2b6aa8b7417787c56294a4->m_frame.f_lineno = 231;
        tmp_tuple_element_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_4, tmp_args_element_name_3);
        Py_DECREF(tmp_called_name_4);
        Py_DECREF(tmp_args_element_name_3);
        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 231;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_name_1 = PyTuple_New(1);
        PyTuple_SET_ITEM(tmp_args_name_1, 0, tmp_tuple_element_1);
        tmp_dict_key_1 = mod_consts[117];
        tmp_expression_name_12 = GET_STRING_DICT_VALUE(moduledict_jupyter_client$asynchronous$client, (Nuitka_StringObject *)mod_consts[100]);

        if (unlikely(tmp_expression_name_12 == NULL)) {
            tmp_expression_name_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[100]);
        }

        if (tmp_expression_name_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_name_1);

            exception_lineno = 231;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_12, mod_consts[118]);
        if (tmp_dict_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_name_1);

            exception_lineno = 231;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_kwargs_name_1 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_kwargs_name_1, tmp_dict_key_1, tmp_dict_value_1);
        Py_DECREF(tmp_dict_value_1);
        assert(!(tmp_res != 0));
        frame_8074c8bfaa2b6aa8b7417787c56294a4->m_frame.f_lineno = 231;
        tmp_call_result_3 = CALL_FUNCTION(tmp_called_name_3, tmp_args_name_1, tmp_kwargs_name_1);
        Py_DECREF(tmp_args_name_1);
        Py_DECREF(tmp_kwargs_name_1);
        if (tmp_call_result_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 231;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_3);
    }
    branch_no_3:;
    branch_end_2:;
    branch_end_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_8074c8bfaa2b6aa8b7417787c56294a4);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_8074c8bfaa2b6aa8b7417787c56294a4);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_8074c8bfaa2b6aa8b7417787c56294a4, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_8074c8bfaa2b6aa8b7417787c56294a4->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_8074c8bfaa2b6aa8b7417787c56294a4, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_8074c8bfaa2b6aa8b7417787c56294a4,
        type_description_1,
        par_self,
        par_msg,
        var_msg_type,
        var_content,
        var_stream
    );


    // Release cached frame if used for exception.
    if (frame_8074c8bfaa2b6aa8b7417787c56294a4 == cache_frame_8074c8bfaa2b6aa8b7417787c56294a4) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_8074c8bfaa2b6aa8b7417787c56294a4);
        cache_frame_8074c8bfaa2b6aa8b7417787c56294a4 = NULL;
    }

    assertFrameObject(frame_8074c8bfaa2b6aa8b7417787c56294a4);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    par_self = NULL;
    CHECK_OBJECT(par_msg);
    Py_DECREF(par_msg);
    par_msg = NULL;
    CHECK_OBJECT(var_msg_type);
    Py_DECREF(var_msg_type);
    var_msg_type = NULL;
    CHECK_OBJECT(var_content);
    Py_DECREF(var_content);
    var_content = NULL;
    Py_XDECREF(var_stream);
    var_stream = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    par_self = NULL;
    CHECK_OBJECT(par_msg);
    Py_DECREF(par_msg);
    par_msg = NULL;
    Py_XDECREF(var_msg_type);
    var_msg_type = NULL;
    Py_XDECREF(var_content);
    var_content = NULL;
    Py_XDECREF(var_stream);
    var_stream = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_jupyter_client$asynchronous$client$$$function__12__output_hook_kernel(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_session = python_pars[1];
    PyObject *par_socket = python_pars[2];
    PyObject *par_parent_header = python_pars[3];
    PyObject *par_msg = python_pars[4];
    PyObject *var_msg_type = NULL;
    struct Nuitka_FrameObject *frame_080819aaa606d0f419de463623e7e4ed;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_080819aaa606d0f419de463623e7e4ed = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_080819aaa606d0f419de463623e7e4ed)) {
        Py_XDECREF(cache_frame_080819aaa606d0f419de463623e7e4ed);

#if _DEBUG_REFCOUNTS
        if (cache_frame_080819aaa606d0f419de463623e7e4ed == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_080819aaa606d0f419de463623e7e4ed = MAKE_FUNCTION_FRAME(codeobj_080819aaa606d0f419de463623e7e4ed, module_jupyter_client$asynchronous$client, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_080819aaa606d0f419de463623e7e4ed->m_type_description == NULL);
    frame_080819aaa606d0f419de463623e7e4ed = cache_frame_080819aaa606d0f419de463623e7e4ed;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_080819aaa606d0f419de463623e7e4ed);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_080819aaa606d0f419de463623e7e4ed) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_expression_name_1;
        PyObject *tmp_expression_name_2;
        PyObject *tmp_subscript_name_1;
        PyObject *tmp_subscript_name_2;
        CHECK_OBJECT(par_msg);
        tmp_expression_name_2 = par_msg;
        tmp_subscript_name_1 = mod_consts[107];
        tmp_expression_name_1 = LOOKUP_SUBSCRIPT(tmp_expression_name_2, tmp_subscript_name_1);
        if (tmp_expression_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 238;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_name_2 = mod_consts[75];
        tmp_assign_source_1 = LOOKUP_SUBSCRIPT(tmp_expression_name_1, tmp_subscript_name_2);
        Py_DECREF(tmp_expression_name_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 238;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        assert(var_msg_type == NULL);
        var_msg_type = tmp_assign_source_1;
    }
    {
        bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT(var_msg_type);
        tmp_compexpr_left_1 = var_msg_type;
        tmp_compexpr_right_1 = mod_consts[120];
        tmp_res = PySequence_Contains(tmp_compexpr_right_1, tmp_compexpr_left_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 239;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = (tmp_res == 1) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_expression_name_3;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_name_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_kwargs_name_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        CHECK_OBJECT(par_session);
        tmp_expression_name_3 = par_session;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_3, mod_consts[121]);
        if (tmp_called_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 240;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_socket);
        tmp_tuple_element_1 = par_socket;
        tmp_args_name_1 = PyTuple_New(3);
        {
            PyObject *tmp_expression_name_4;
            PyObject *tmp_subscript_name_3;
            PyTuple_SET_ITEM0(tmp_args_name_1, 0, tmp_tuple_element_1);
            CHECK_OBJECT(var_msg_type);
            tmp_tuple_element_1 = var_msg_type;
            PyTuple_SET_ITEM0(tmp_args_name_1, 1, tmp_tuple_element_1);
            CHECK_OBJECT(par_msg);
            tmp_expression_name_4 = par_msg;
            tmp_subscript_name_3 = mod_consts[94];
            tmp_tuple_element_1 = LOOKUP_SUBSCRIPT(tmp_expression_name_4, tmp_subscript_name_3);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 240;
                type_description_1 = "oooooo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_args_name_1, 2, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_called_name_1);
        Py_DECREF(tmp_args_name_1);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_dict_key_1 = mod_consts[65];
        CHECK_OBJECT(par_parent_header);
        tmp_dict_value_1 = par_parent_header;
        tmp_kwargs_name_1 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_kwargs_name_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        frame_080819aaa606d0f419de463623e7e4ed->m_frame.f_lineno = 240;
        tmp_call_result_1 = CALL_FUNCTION(tmp_called_name_1, tmp_args_name_1, tmp_kwargs_name_1);
        Py_DECREF(tmp_called_name_1);
        Py_DECREF(tmp_args_name_1);
        Py_DECREF(tmp_kwargs_name_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 240;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    goto branch_end_1;
    branch_no_1:;
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_name_1;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        CHECK_OBJECT(par_msg);
        tmp_args_element_name_1 = par_msg;
        frame_080819aaa606d0f419de463623e7e4ed->m_frame.f_lineno = 242;
        tmp_call_result_2 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[122], tmp_args_element_name_1);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 242;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    branch_end_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_080819aaa606d0f419de463623e7e4ed);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_080819aaa606d0f419de463623e7e4ed);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_080819aaa606d0f419de463623e7e4ed, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_080819aaa606d0f419de463623e7e4ed->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_080819aaa606d0f419de463623e7e4ed, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_080819aaa606d0f419de463623e7e4ed,
        type_description_1,
        par_self,
        par_session,
        par_socket,
        par_parent_header,
        par_msg,
        var_msg_type
    );


    // Release cached frame if used for exception.
    if (frame_080819aaa606d0f419de463623e7e4ed == cache_frame_080819aaa606d0f419de463623e7e4ed) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_080819aaa606d0f419de463623e7e4ed);
        cache_frame_080819aaa606d0f419de463623e7e4ed = NULL;
    }

    assertFrameObject(frame_080819aaa606d0f419de463623e7e4ed);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(par_self);
    par_self = NULL;
    Py_XDECREF(par_session);
    par_session = NULL;
    Py_XDECREF(par_socket);
    par_socket = NULL;
    Py_XDECREF(par_parent_header);
    par_parent_header = NULL;
    Py_XDECREF(par_msg);
    par_msg = NULL;
    Py_XDECREF(var_msg_type);
    var_msg_type = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(par_self);
    par_self = NULL;
    Py_XDECREF(par_session);
    par_session = NULL;
    Py_XDECREF(par_socket);
    par_socket = NULL;
    Py_XDECREF(par_parent_header);
    par_parent_header = NULL;
    Py_XDECREF(par_msg);
    par_msg = NULL;
    Py_XDECREF(var_msg_type);
    var_msg_type = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_jupyter_client$asynchronous$client$$$function__13_is_alive(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_CellObject *par_self = Nuitka_Cell_New1(python_pars[0]);
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    // Tried code:
    {
        struct Nuitka_CellObject *tmp_closure_1[1];

        tmp_closure_1[0] = par_self;
        Py_INCREF(tmp_closure_1[0]);

        tmp_return_value = MAKE_COROUTINE_jupyter_client$asynchronous$client$$$function__13_is_alive$$$coroutine__1_is_alive(tmp_closure_1);

        goto try_return_handler_1;
    }
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    par_self = NULL;
    goto function_return_exit;
    // End of try:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    par_self = NULL;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}



struct jupyter_client$asynchronous$client$$$function__13_is_alive$$$coroutine__1_is_alive_locals {
    PyObject *var_KernelManager;
    PyObject *var_AsyncKernelManager;
    PyObject *tmp_import_from_1__module;
    char const *type_description_1;
    PyObject *exception_type;
    PyObject *exception_value;
    PyTracebackObject *exception_tb;
    int exception_lineno;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    int exception_keeper_lineno_1;
    int tmp_res;
    PyObject *tmp_return_value;
    char yield_tmps[1024];
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    int exception_keeper_lineno_2;
};

static PyObject *jupyter_client$asynchronous$client$$$function__13_is_alive$$$coroutine__1_is_alive_context(struct Nuitka_CoroutineObject *coroutine, PyObject *yield_return_value) {
    CHECK_OBJECT(coroutine);
    assert(Nuitka_Coroutine_Check((PyObject *)coroutine));

    // Heap access if used.
    struct jupyter_client$asynchronous$client$$$function__13_is_alive$$$coroutine__1_is_alive_locals *coroutine_heap = (struct jupyter_client$asynchronous$client$$$function__13_is_alive$$$coroutine__1_is_alive_locals *)coroutine->m_heap_storage;

    // Dispatch to yield based on return label index:
    switch(coroutine->m_yield_return_index) {
    case 1: goto yield_return_1;
    }

    // Local variable initialization
    static struct Nuitka_FrameObject *cache_m_frame = NULL;
    coroutine_heap->var_KernelManager = NULL;
    coroutine_heap->var_AsyncKernelManager = NULL;
    coroutine_heap->tmp_import_from_1__module = NULL;
    coroutine_heap->type_description_1 = NULL;
    coroutine_heap->exception_type = NULL;
    coroutine_heap->exception_value = NULL;
    coroutine_heap->exception_tb = NULL;
    coroutine_heap->exception_lineno = 0;
    coroutine_heap->tmp_return_value = NULL;

    // Actual coroutine body.
    // Tried code:
    if (isFrameUnusable(cache_m_frame)) {
        Py_XDECREF(cache_m_frame);

#if _DEBUG_REFCOUNTS
        if (cache_m_frame == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_m_frame = MAKE_FUNCTION_FRAME(codeobj_6091e52fe828b42924ba834f8791321f, module_jupyter_client$asynchronous$client, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    coroutine->m_frame = cache_m_frame;

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    Py_INCREF(coroutine->m_frame);
    assert(Py_REFCNT(coroutine->m_frame) == 2); // Frame stack

#if PYTHON_VERSION >= 0x340
    coroutine->m_frame->m_frame.f_gen = (PyObject *)coroutine;
#endif

    assert(coroutine->m_frame->m_frame.f_back == NULL);
    Py_CLEAR(coroutine->m_frame->m_frame.f_back);

    coroutine->m_frame->m_frame.f_back = PyThreadState_GET()->frame;
    Py_INCREF(coroutine->m_frame->m_frame.f_back);

    PyThreadState_GET()->frame = &coroutine->m_frame->m_frame;
    Py_INCREF(coroutine->m_frame);

    Nuitka_Frame_MarkAsExecuting(coroutine->m_frame);

#if PYTHON_VERSION >= 0x300
    // Accept currently existing exception as the one to publish again when we
    // yield or yield from.
    {
        PyThreadState *thread_state = PyThreadState_GET();

        EXC_TYPE_F(coroutine) = EXC_TYPE(thread_state);
        if (EXC_TYPE_F(coroutine) == Py_None) EXC_TYPE_F(coroutine) = NULL;
        Py_XINCREF(EXC_TYPE_F(coroutine));
        EXC_VALUE_F(coroutine) = EXC_VALUE(thread_state);
        Py_XINCREF(EXC_VALUE_F(coroutine));
        EXC_TRACEBACK_F(coroutine) = EXC_TRACEBACK(thread_state);
        Py_XINCREF(EXC_TRACEBACK_F(coroutine));
    }

#endif

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_name_name_1;
        PyObject *tmp_globals_arg_name_1;
        PyObject *tmp_locals_arg_name_1;
        PyObject *tmp_fromlist_name_1;
        PyObject *tmp_level_name_1;
        tmp_name_name_1 = mod_consts[60];
        tmp_globals_arg_name_1 = (PyObject *)moduledict_jupyter_client$asynchronous$client;
        tmp_locals_arg_name_1 = Py_None;
        tmp_fromlist_name_1 = mod_consts[125];
        tmp_level_name_1 = mod_consts[62];
        coroutine->m_frame->m_frame.f_lineno = 246;
        tmp_assign_source_1 = IMPORT_MODULE5(tmp_name_name_1, tmp_globals_arg_name_1, tmp_locals_arg_name_1, tmp_fromlist_name_1, tmp_level_name_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 246;
            coroutine_heap->type_description_1 = "coo";
            goto frame_exception_exit_1;
        }
        assert(coroutine_heap->tmp_import_from_1__module == NULL);
        coroutine_heap->tmp_import_from_1__module = tmp_assign_source_1;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_import_name_from_1;
        CHECK_OBJECT(coroutine_heap->tmp_import_from_1__module);
        tmp_import_name_from_1 = coroutine_heap->tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_2 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_1,
                (PyObject *)moduledict_jupyter_client$asynchronous$client,
                mod_consts[63],
                mod_consts[64]
            );
        } else {
            tmp_assign_source_2 = IMPORT_NAME(tmp_import_name_from_1, mod_consts[63]);
        }

        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 246;
            coroutine_heap->type_description_1 = "coo";
            goto try_except_handler_2;
        }
        assert(coroutine_heap->var_KernelManager == NULL);
        coroutine_heap->var_KernelManager = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_import_name_from_2;
        CHECK_OBJECT(coroutine_heap->tmp_import_from_1__module);
        tmp_import_name_from_2 = coroutine_heap->tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_2)) {
            tmp_assign_source_3 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_2,
                (PyObject *)moduledict_jupyter_client$asynchronous$client,
                mod_consts[126],
                mod_consts[64]
            );
        } else {
            tmp_assign_source_3 = IMPORT_NAME(tmp_import_name_from_2, mod_consts[126]);
        }

        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 246;
            coroutine_heap->type_description_1 = "coo";
            goto try_except_handler_2;
        }
        assert(coroutine_heap->var_AsyncKernelManager == NULL);
        coroutine_heap->var_AsyncKernelManager = tmp_assign_source_3;
    }
    goto try_end_1;
    // Exception handler code:
    try_except_handler_2:;
    coroutine_heap->exception_keeper_type_1 = coroutine_heap->exception_type;
    coroutine_heap->exception_keeper_value_1 = coroutine_heap->exception_value;
    coroutine_heap->exception_keeper_tb_1 = coroutine_heap->exception_tb;
    coroutine_heap->exception_keeper_lineno_1 = coroutine_heap->exception_lineno;
    coroutine_heap->exception_type = NULL;
    coroutine_heap->exception_value = NULL;
    coroutine_heap->exception_tb = NULL;
    coroutine_heap->exception_lineno = 0;

    CHECK_OBJECT(coroutine_heap->tmp_import_from_1__module);
    Py_DECREF(coroutine_heap->tmp_import_from_1__module);
    coroutine_heap->tmp_import_from_1__module = NULL;
    // Re-raise.
    coroutine_heap->exception_type = coroutine_heap->exception_keeper_type_1;
    coroutine_heap->exception_value = coroutine_heap->exception_keeper_value_1;
    coroutine_heap->exception_tb = coroutine_heap->exception_keeper_tb_1;
    coroutine_heap->exception_lineno = coroutine_heap->exception_keeper_lineno_1;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;
    CHECK_OBJECT(coroutine_heap->tmp_import_from_1__module);
    Py_DECREF(coroutine_heap->tmp_import_from_1__module);
    coroutine_heap->tmp_import_from_1__module = NULL;
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        PyObject *tmp_expression_name_1;
        if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[27]);
            coroutine_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            CHAIN_EXCEPTION(coroutine_heap->exception_value);

            coroutine_heap->exception_lineno = 247;
            coroutine_heap->type_description_1 = "coo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_1 = Nuitka_Cell_GET(coroutine->m_closure[0]);
        tmp_isinstance_inst_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_1, mod_consts[65]);
        if (tmp_isinstance_inst_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 247;
            coroutine_heap->type_description_1 = "coo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(coroutine_heap->var_KernelManager);
        tmp_isinstance_cls_1 = coroutine_heap->var_KernelManager;
        coroutine_heap->tmp_res = Nuitka_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
        Py_DECREF(tmp_isinstance_inst_1);
        if (coroutine_heap->tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 247;
            coroutine_heap->type_description_1 = "coo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = (coroutine_heap->tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_isinstance_inst_2;
        PyObject *tmp_isinstance_cls_2;
        PyObject *tmp_expression_name_2;
        if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[27]);
            coroutine_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            CHAIN_EXCEPTION(coroutine_heap->exception_value);

            coroutine_heap->exception_lineno = 250;
            coroutine_heap->type_description_1 = "coo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_2 = Nuitka_Cell_GET(coroutine->m_closure[0]);
        tmp_isinstance_inst_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_2, mod_consts[65]);
        if (tmp_isinstance_inst_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 250;
            coroutine_heap->type_description_1 = "coo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(coroutine_heap->var_AsyncKernelManager);
        tmp_isinstance_cls_2 = coroutine_heap->var_AsyncKernelManager;
        coroutine_heap->tmp_res = Nuitka_IsInstance(tmp_isinstance_inst_2, tmp_isinstance_cls_2);
        Py_DECREF(tmp_isinstance_inst_2);
        if (coroutine_heap->tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 250;
            coroutine_heap->type_description_1 = "coo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_2 = (coroutine_heap->tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_expression_name_3;
        PyObject *tmp_expression_name_4;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_name_5;
        coroutine->m_frame->m_frame.f_lineno = 251;
        if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[27]);
            coroutine_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            CHAIN_EXCEPTION(coroutine_heap->exception_value);

            coroutine_heap->exception_lineno = 251;
            coroutine_heap->type_description_1 = "coo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_5 = Nuitka_Cell_GET(coroutine->m_closure[0]);
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_5, mod_consts[65]);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 251;
            coroutine_heap->type_description_1 = "coo";
            goto frame_exception_exit_1;
        }
        coroutine->m_frame->m_frame.f_lineno = 251;
        tmp_expression_name_4 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[66]);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_expression_name_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 251;
            coroutine_heap->type_description_1 = "coo";
            goto frame_exception_exit_1;
        }
        tmp_expression_name_3 = ASYNC_AWAIT(tmp_expression_name_4, await_normal);
        Py_DECREF(tmp_expression_name_4);
        if (tmp_expression_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 251;
            coroutine_heap->type_description_1 = "coo";
            goto frame_exception_exit_1;
        }
        Nuitka_PreserveHeap(coroutine_heap->yield_tmps, &tmp_expression_name_4, sizeof(PyObject *), &tmp_called_instance_1, sizeof(PyObject *), &tmp_expression_name_5, sizeof(PyObject *), NULL);
        coroutine->m_yield_return_index = 1;
        coroutine->m_yieldfrom = tmp_expression_name_3;
        coroutine->m_awaiting = true;
        return NULL;

        yield_return_1:
        Nuitka_RestoreHeap(coroutine_heap->yield_tmps, &tmp_expression_name_4, sizeof(PyObject *), &tmp_called_instance_1, sizeof(PyObject *), &tmp_expression_name_5, sizeof(PyObject *), NULL);
        coroutine->m_awaiting = false;

        if (yield_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 251;
            coroutine_heap->type_description_1 = "coo";
            goto frame_exception_exit_1;
        }
        coroutine_heap->tmp_return_value = yield_return_value;
        if (coroutine_heap->tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 251;
            coroutine_heap->type_description_1 = "coo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    branch_no_2:;
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_expression_name_6;
        if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[27]);
            coroutine_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            CHAIN_EXCEPTION(coroutine_heap->exception_value);

            coroutine_heap->exception_lineno = 252;
            coroutine_heap->type_description_1 = "coo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_6 = Nuitka_Cell_GET(coroutine->m_closure[0]);
        tmp_called_instance_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_6, mod_consts[65]);
        if (tmp_called_instance_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 252;
            coroutine_heap->type_description_1 = "coo";
            goto frame_exception_exit_1;
        }
        coroutine->m_frame->m_frame.f_lineno = 252;
        coroutine_heap->tmp_return_value = CALL_METHOD_NO_ARGS(tmp_called_instance_2, mod_consts[66]);
        Py_DECREF(tmp_called_instance_2);
        if (coroutine_heap->tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 252;
            coroutine_heap->type_description_1 = "coo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    branch_no_1:;
    {
        bool tmp_condition_result_3;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_expression_name_7;
        if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[27]);
            coroutine_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            CHAIN_EXCEPTION(coroutine_heap->exception_value);

            coroutine_heap->exception_lineno = 253;
            coroutine_heap->type_description_1 = "coo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_7 = Nuitka_Cell_GET(coroutine->m_closure[0]);
        tmp_compexpr_left_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_7, mod_consts[45]);
        if (tmp_compexpr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 253;
            coroutine_heap->type_description_1 = "coo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_1 = Py_None;
        tmp_condition_result_3 = (tmp_compexpr_left_1 != tmp_compexpr_right_1) ? true : false;
        Py_DECREF(tmp_compexpr_left_1);
        if (tmp_condition_result_3 != false) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        PyObject *tmp_called_instance_3;
        PyObject *tmp_expression_name_8;
        if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[27]);
            coroutine_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            CHAIN_EXCEPTION(coroutine_heap->exception_value);

            coroutine_heap->exception_lineno = 256;
            coroutine_heap->type_description_1 = "coo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_8 = Nuitka_Cell_GET(coroutine->m_closure[0]);
        tmp_called_instance_3 = LOOKUP_ATTRIBUTE(tmp_expression_name_8, mod_consts[45]);
        if (tmp_called_instance_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 256;
            coroutine_heap->type_description_1 = "coo";
            goto frame_exception_exit_1;
        }
        coroutine->m_frame->m_frame.f_lineno = 256;
        coroutine_heap->tmp_return_value = CALL_METHOD_NO_ARGS(tmp_called_instance_3, mod_consts[127]);
        Py_DECREF(tmp_called_instance_3);
        if (coroutine_heap->tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 256;
            coroutine_heap->type_description_1 = "coo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    goto branch_end_3;
    branch_no_3:;
    coroutine_heap->tmp_return_value = Py_True;
    Py_INCREF(coroutine_heap->tmp_return_value);
    goto frame_return_exit_1;
    branch_end_3:;

    Nuitka_Frame_MarkAsNotExecuting(coroutine->m_frame);

#if PYTHON_VERSION >= 0x300
    Py_CLEAR(EXC_TYPE_F(coroutine));
    Py_CLEAR(EXC_VALUE_F(coroutine));
    Py_CLEAR(EXC_TRACEBACK_F(coroutine));
#endif

    // Allow re-use of the frame again.
    Py_DECREF(coroutine->m_frame);
    goto frame_no_exception_1;

    frame_return_exit_1:;

#if PYTHON_VERSION >= 0x300
    Py_CLEAR(EXC_TYPE_F(coroutine));
    Py_CLEAR(EXC_VALUE_F(coroutine));
    Py_CLEAR(EXC_TRACEBACK_F(coroutine));
#endif

    Py_DECREF(coroutine->m_frame);
    goto try_return_handler_1;

    frame_exception_exit_1:;

    // If it's not an exit exception, consider and create a traceback for it.
    if (!EXCEPTION_MATCH_GENERATOR(coroutine_heap->exception_type)) {
        if (coroutine_heap->exception_tb == NULL) {
            coroutine_heap->exception_tb = MAKE_TRACEBACK(coroutine->m_frame, coroutine_heap->exception_lineno);
        } else if (coroutine_heap->exception_tb->tb_frame != &coroutine->m_frame->m_frame) {
            coroutine_heap->exception_tb = ADD_TRACEBACK(coroutine_heap->exception_tb, coroutine->m_frame, coroutine_heap->exception_lineno);
        }

        Nuitka_Frame_AttachLocals(
            coroutine->m_frame,
            coroutine_heap->type_description_1,
            coroutine->m_closure[0],
            coroutine_heap->var_KernelManager,
            coroutine_heap->var_AsyncKernelManager
        );


        // Release cached frame if used for exception.
        if (coroutine->m_frame == cache_m_frame) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif

            Py_DECREF(cache_m_frame);
            cache_m_frame = NULL;
        }

        assertFrameObject(coroutine->m_frame);
    }

#if PYTHON_VERSION >= 0x300
    Py_CLEAR(EXC_TYPE_F(coroutine));
    Py_CLEAR(EXC_VALUE_F(coroutine));
    Py_CLEAR(EXC_TRACEBACK_F(coroutine));
#endif

    Py_DECREF(coroutine->m_frame);

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(coroutine_heap->var_KernelManager);
    Py_DECREF(coroutine_heap->var_KernelManager);
    coroutine_heap->var_KernelManager = NULL;
    CHECK_OBJECT(coroutine_heap->var_AsyncKernelManager);
    Py_DECREF(coroutine_heap->var_AsyncKernelManager);
    coroutine_heap->var_AsyncKernelManager = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    coroutine_heap->exception_keeper_type_2 = coroutine_heap->exception_type;
    coroutine_heap->exception_keeper_value_2 = coroutine_heap->exception_value;
    coroutine_heap->exception_keeper_tb_2 = coroutine_heap->exception_tb;
    coroutine_heap->exception_keeper_lineno_2 = coroutine_heap->exception_lineno;
    coroutine_heap->exception_type = NULL;
    coroutine_heap->exception_value = NULL;
    coroutine_heap->exception_tb = NULL;
    coroutine_heap->exception_lineno = 0;

    Py_XDECREF(coroutine_heap->var_KernelManager);
    coroutine_heap->var_KernelManager = NULL;
    Py_XDECREF(coroutine_heap->var_AsyncKernelManager);
    coroutine_heap->var_AsyncKernelManager = NULL;
    // Re-raise.
    coroutine_heap->exception_type = coroutine_heap->exception_keeper_type_2;
    coroutine_heap->exception_value = coroutine_heap->exception_keeper_value_2;
    coroutine_heap->exception_tb = coroutine_heap->exception_keeper_tb_2;
    coroutine_heap->exception_lineno = coroutine_heap->exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must be present");

    function_exception_exit:

    assert(coroutine_heap->exception_type);
    RESTORE_ERROR_OCCURRED(coroutine_heap->exception_type, coroutine_heap->exception_value, coroutine_heap->exception_tb);
    return NULL;
    function_return_exit:;

    coroutine->m_returned = coroutine_heap->tmp_return_value;

    return NULL;

}

static PyObject *MAKE_COROUTINE_jupyter_client$asynchronous$client$$$function__13_is_alive$$$coroutine__1_is_alive(struct Nuitka_CellObject **closure) {
    return Nuitka_Coroutine_New(
        jupyter_client$asynchronous$client$$$function__13_is_alive$$$coroutine__1_is_alive_context,
        module_jupyter_client$asynchronous$client,
        mod_consts[66],
        mod_consts[128],
        codeobj_6091e52fe828b42924ba834f8791321f,
        closure,
        1,
        sizeof(struct jupyter_client$asynchronous$client$$$function__13_is_alive$$$coroutine__1_is_alive_locals)
    );
}


static PyObject *impl_jupyter_client$asynchronous$client$$$function__14_execute_interactive(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_CellObject *par_self = Nuitka_Cell_New1(python_pars[0]);
    struct Nuitka_CellObject *par_code = Nuitka_Cell_New1(python_pars[1]);
    struct Nuitka_CellObject *par_silent = Nuitka_Cell_New1(python_pars[2]);
    struct Nuitka_CellObject *par_store_history = Nuitka_Cell_New1(python_pars[3]);
    struct Nuitka_CellObject *par_user_expressions = Nuitka_Cell_New1(python_pars[4]);
    struct Nuitka_CellObject *par_allow_stdin = Nuitka_Cell_New1(python_pars[5]);
    struct Nuitka_CellObject *par_stop_on_error = Nuitka_Cell_New1(python_pars[6]);
    struct Nuitka_CellObject *par_timeout = Nuitka_Cell_New1(python_pars[7]);
    struct Nuitka_CellObject *par_output_hook = Nuitka_Cell_New1(python_pars[8]);
    struct Nuitka_CellObject *par_stdin_hook = Nuitka_Cell_New1(python_pars[9]);
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    // Tried code:
    {
        struct Nuitka_CellObject *tmp_closure_1[10];

        tmp_closure_1[0] = par_allow_stdin;
        Py_INCREF(tmp_closure_1[0]);
        tmp_closure_1[1] = par_code;
        Py_INCREF(tmp_closure_1[1]);
        tmp_closure_1[2] = par_output_hook;
        Py_INCREF(tmp_closure_1[2]);
        tmp_closure_1[3] = par_self;
        Py_INCREF(tmp_closure_1[3]);
        tmp_closure_1[4] = par_silent;
        Py_INCREF(tmp_closure_1[4]);
        tmp_closure_1[5] = par_stdin_hook;
        Py_INCREF(tmp_closure_1[5]);
        tmp_closure_1[6] = par_stop_on_error;
        Py_INCREF(tmp_closure_1[6]);
        tmp_closure_1[7] = par_store_history;
        Py_INCREF(tmp_closure_1[7]);
        tmp_closure_1[8] = par_timeout;
        Py_INCREF(tmp_closure_1[8]);
        tmp_closure_1[9] = par_user_expressions;
        Py_INCREF(tmp_closure_1[9]);

        tmp_return_value = MAKE_COROUTINE_jupyter_client$asynchronous$client$$$function__14_execute_interactive$$$coroutine__1_execute_interactive(tmp_closure_1);

        goto try_return_handler_1;
    }
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    par_self = NULL;
    CHECK_OBJECT(par_code);
    Py_DECREF(par_code);
    par_code = NULL;
    CHECK_OBJECT(par_silent);
    Py_DECREF(par_silent);
    par_silent = NULL;
    CHECK_OBJECT(par_store_history);
    Py_DECREF(par_store_history);
    par_store_history = NULL;
    CHECK_OBJECT(par_user_expressions);
    Py_DECREF(par_user_expressions);
    par_user_expressions = NULL;
    CHECK_OBJECT(par_allow_stdin);
    Py_DECREF(par_allow_stdin);
    par_allow_stdin = NULL;
    CHECK_OBJECT(par_stop_on_error);
    Py_DECREF(par_stop_on_error);
    par_stop_on_error = NULL;
    CHECK_OBJECT(par_timeout);
    Py_DECREF(par_timeout);
    par_timeout = NULL;
    CHECK_OBJECT(par_output_hook);
    Py_DECREF(par_output_hook);
    par_output_hook = NULL;
    CHECK_OBJECT(par_stdin_hook);
    Py_DECREF(par_stdin_hook);
    par_stdin_hook = NULL;
    goto function_return_exit;
    // End of try:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    par_self = NULL;
    CHECK_OBJECT(par_code);
    Py_DECREF(par_code);
    par_code = NULL;
    CHECK_OBJECT(par_silent);
    Py_DECREF(par_silent);
    par_silent = NULL;
    CHECK_OBJECT(par_store_history);
    Py_DECREF(par_store_history);
    par_store_history = NULL;
    CHECK_OBJECT(par_user_expressions);
    Py_DECREF(par_user_expressions);
    par_user_expressions = NULL;
    CHECK_OBJECT(par_allow_stdin);
    Py_DECREF(par_allow_stdin);
    par_allow_stdin = NULL;
    CHECK_OBJECT(par_stop_on_error);
    Py_DECREF(par_stop_on_error);
    par_stop_on_error = NULL;
    CHECK_OBJECT(par_timeout);
    Py_DECREF(par_timeout);
    par_timeout = NULL;
    CHECK_OBJECT(par_output_hook);
    Py_DECREF(par_output_hook);
    par_output_hook = NULL;
    CHECK_OBJECT(par_stdin_hook);
    Py_DECREF(par_stdin_hook);
    par_stdin_hook = NULL;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}



struct jupyter_client$asynchronous$client$$$function__14_execute_interactive$$$coroutine__1_execute_interactive_locals {
    PyObject *var_msg_id;
    PyObject *var_get_ipython;
    PyObject *var_ip;
    PyObject *var_in_kernel;
    PyObject *var_deadline;
    PyObject *var_timeout_ms;
    PyObject *var_poller;
    PyObject *var_iopub_socket;
    PyObject *var_stdin_socket;
    PyObject *var_events;
    PyObject *var_req;
    PyObject *var_msg;
    char const *type_description_1;
    PyObject *exception_type;
    PyObject *exception_value;
    PyTracebackObject *exception_tb;
    int exception_lineno;
    int tmp_res;
    char yield_tmps[1024];
    PyObject *tmp_return_value;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    int exception_keeper_lineno_1;
};

static PyObject *jupyter_client$asynchronous$client$$$function__14_execute_interactive$$$coroutine__1_execute_interactive_context(struct Nuitka_CoroutineObject *coroutine, PyObject *yield_return_value) {
    CHECK_OBJECT(coroutine);
    assert(Nuitka_Coroutine_Check((PyObject *)coroutine));

    // Heap access if used.
    struct jupyter_client$asynchronous$client$$$function__14_execute_interactive$$$coroutine__1_execute_interactive_locals *coroutine_heap = (struct jupyter_client$asynchronous$client$$$function__14_execute_interactive$$$coroutine__1_execute_interactive_locals *)coroutine->m_heap_storage;

    // Dispatch to yield based on return label index:
    switch(coroutine->m_yield_return_index) {
    case 4: goto yield_return_4;
    case 3: goto yield_return_3;
    case 2: goto yield_return_2;
    case 1: goto yield_return_1;
    }

    // Local variable initialization
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_m_frame = NULL;
    coroutine_heap->var_msg_id = NULL;
    coroutine_heap->var_get_ipython = NULL;
    coroutine_heap->var_ip = NULL;
    coroutine_heap->var_in_kernel = NULL;
    coroutine_heap->var_deadline = NULL;
    coroutine_heap->var_timeout_ms = NULL;
    coroutine_heap->var_poller = NULL;
    coroutine_heap->var_iopub_socket = NULL;
    coroutine_heap->var_stdin_socket = NULL;
    coroutine_heap->var_events = NULL;
    coroutine_heap->var_req = NULL;
    coroutine_heap->var_msg = NULL;
    coroutine_heap->type_description_1 = NULL;
    coroutine_heap->exception_type = NULL;
    coroutine_heap->exception_value = NULL;
    coroutine_heap->exception_tb = NULL;
    coroutine_heap->exception_lineno = 0;
    coroutine_heap->tmp_return_value = NULL;

    // Actual coroutine body.
    // Tried code:
    if (isFrameUnusable(cache_m_frame)) {
        Py_XDECREF(cache_m_frame);

#if _DEBUG_REFCOUNTS
        if (cache_m_frame == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_m_frame = MAKE_FUNCTION_FRAME(codeobj_58e47f64a944b1052134cadf5b6da5c8, module_jupyter_client$asynchronous$client, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    coroutine->m_frame = cache_m_frame;

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    Py_INCREF(coroutine->m_frame);
    assert(Py_REFCNT(coroutine->m_frame) == 2); // Frame stack

#if PYTHON_VERSION >= 0x340
    coroutine->m_frame->m_frame.f_gen = (PyObject *)coroutine;
#endif

    assert(coroutine->m_frame->m_frame.f_back == NULL);
    Py_CLEAR(coroutine->m_frame->m_frame.f_back);

    coroutine->m_frame->m_frame.f_back = PyThreadState_GET()->frame;
    Py_INCREF(coroutine->m_frame->m_frame.f_back);

    PyThreadState_GET()->frame = &coroutine->m_frame->m_frame;
    Py_INCREF(coroutine->m_frame);

    Nuitka_Frame_MarkAsExecuting(coroutine->m_frame);

#if PYTHON_VERSION >= 0x300
    // Accept currently existing exception as the one to publish again when we
    // yield or yield from.
    {
        PyThreadState *thread_state = PyThreadState_GET();

        EXC_TYPE_F(coroutine) = EXC_TYPE(thread_state);
        if (EXC_TYPE_F(coroutine) == Py_None) EXC_TYPE_F(coroutine) = NULL;
        Py_XINCREF(EXC_TYPE_F(coroutine));
        EXC_VALUE_F(coroutine) = EXC_VALUE(thread_state);
        Py_XINCREF(EXC_VALUE_F(coroutine));
        EXC_TRACEBACK_F(coroutine) = EXC_TRACEBACK(thread_state);
        Py_XINCREF(EXC_TRACEBACK_F(coroutine));
    }

#endif

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_operand_name_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_name_1;
        if (Nuitka_Cell_GET(coroutine->m_closure[3]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[27]);
            coroutine_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            CHAIN_EXCEPTION(coroutine_heap->exception_value);

            coroutine_heap->exception_lineno = 318;
            coroutine_heap->type_description_1 = "ccccccccccoooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_1 = Nuitka_Cell_GET(coroutine->m_closure[3]);
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_1, mod_consts[34]);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 318;
            coroutine_heap->type_description_1 = "ccccccccccoooooooooooo";
            goto frame_exception_exit_1;
        }
        coroutine->m_frame->m_frame.f_lineno = 318;
        tmp_operand_name_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[66]);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_operand_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 318;
            coroutine_heap->type_description_1 = "ccccccccccoooooooooooo";
            goto frame_exception_exit_1;
        }
        coroutine_heap->tmp_res = CHECK_IF_TRUE(tmp_operand_name_1);
        Py_DECREF(tmp_operand_name_1);
        if (coroutine_heap->tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 318;
            coroutine_heap->type_description_1 = "ccccccccccoooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = (coroutine_heap->tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_make_exception_arg_1;
        tmp_make_exception_arg_1 = mod_consts[130];
        coroutine->m_frame->m_frame.f_lineno = 319;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_RuntimeError, tmp_make_exception_arg_1);
        assert(!(tmp_raise_type_1 == NULL));
        coroutine_heap->exception_type = tmp_raise_type_1;
        coroutine_heap->exception_lineno = 319;
        RAISE_EXCEPTION_WITH_TYPE(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
        coroutine_heap->type_description_1 = "ccccccccccoooooooooooo";
        goto frame_exception_exit_1;
    }
    branch_no_1:;
    {
        bool tmp_condition_result_2;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[131]);
            coroutine_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            CHAIN_EXCEPTION(coroutine_heap->exception_value);

            coroutine_heap->exception_lineno = 320;
            coroutine_heap->type_description_1 = "ccccccccccoooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_compexpr_left_1 = Nuitka_Cell_GET(coroutine->m_closure[0]);
        tmp_compexpr_right_1 = Py_None;
        tmp_condition_result_2 = (tmp_compexpr_left_1 == tmp_compexpr_right_1) ? true : false;
        if (tmp_condition_result_2 != false) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_expression_name_2;
        if (Nuitka_Cell_GET(coroutine->m_closure[3]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[27]);
            coroutine_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            CHAIN_EXCEPTION(coroutine_heap->exception_value);

            coroutine_heap->exception_lineno = 321;
            coroutine_heap->type_description_1 = "ccccccccccoooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_2 = Nuitka_Cell_GET(coroutine->m_closure[3]);
        tmp_assign_source_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_2, mod_consts[131]);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 321;
            coroutine_heap->type_description_1 = "ccccccccccoooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = Nuitka_Cell_GET(coroutine->m_closure[0]);
            PyCell_SET(coroutine->m_closure[0], tmp_assign_source_1);
            Py_XDECREF(old);
        }

    }
    branch_no_2:;
    {
        nuitka_bool tmp_condition_result_3;
        int tmp_and_left_truth_1;
        nuitka_bool tmp_and_left_value_1;
        nuitka_bool tmp_and_right_value_1;
        int tmp_truth_name_1;
        PyObject *tmp_operand_name_2;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_expression_name_3;
        if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[131]);
            coroutine_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            CHAIN_EXCEPTION(coroutine_heap->exception_value);

            coroutine_heap->exception_lineno = 322;
            coroutine_heap->type_description_1 = "ccccccccccoooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_truth_name_1 = CHECK_IF_TRUE(Nuitka_Cell_GET(coroutine->m_closure[0]));
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 322;
            coroutine_heap->type_description_1 = "ccccccccccoooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_value_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 322;
            coroutine_heap->type_description_1 = "ccccccccccoooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_and_left_truth_1 == 1) {
            goto and_right_1;
        } else {
            goto and_left_1;
        }
        and_right_1:;
        if (Nuitka_Cell_GET(coroutine->m_closure[3]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[27]);
            coroutine_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            CHAIN_EXCEPTION(coroutine_heap->exception_value);

            coroutine_heap->exception_lineno = 322;
            coroutine_heap->type_description_1 = "ccccccccccoooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_3 = Nuitka_Cell_GET(coroutine->m_closure[3]);
        tmp_called_instance_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_3, mod_consts[38]);
        if (tmp_called_instance_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 322;
            coroutine_heap->type_description_1 = "ccccccccccoooooooooooo";
            goto frame_exception_exit_1;
        }
        coroutine->m_frame->m_frame.f_lineno = 322;
        tmp_operand_name_2 = CALL_METHOD_NO_ARGS(tmp_called_instance_2, mod_consts[66]);
        Py_DECREF(tmp_called_instance_2);
        if (tmp_operand_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 322;
            coroutine_heap->type_description_1 = "ccccccccccoooooooooooo";
            goto frame_exception_exit_1;
        }
        coroutine_heap->tmp_res = CHECK_IF_TRUE(tmp_operand_name_2);
        Py_DECREF(tmp_operand_name_2);
        if (coroutine_heap->tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 322;
            coroutine_heap->type_description_1 = "ccccccccccoooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_1 = (coroutine_heap->tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_condition_result_3 = tmp_and_right_value_1;
        goto and_end_1;
        and_left_1:;
        tmp_condition_result_3 = tmp_and_left_value_1;
        and_end_1:;
        if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        PyObject *tmp_raise_type_2;
        PyObject *tmp_make_exception_arg_2;
        tmp_make_exception_arg_2 = mod_consts[132];
        coroutine->m_frame->m_frame.f_lineno = 323;
        tmp_raise_type_2 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_RuntimeError, tmp_make_exception_arg_2);
        assert(!(tmp_raise_type_2 == NULL));
        coroutine_heap->exception_type = tmp_raise_type_2;
        coroutine_heap->exception_lineno = 323;
        RAISE_EXCEPTION_WITH_TYPE(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
        coroutine_heap->type_description_1 = "ccccccccccoooooooooooo";
        goto frame_exception_exit_1;
    }
    branch_no_3:;
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_expression_name_4;
        PyObject *tmp_expression_name_5;
        PyObject *tmp_called_name_1;
        PyObject *tmp_expression_name_6;
        PyObject *tmp_args_name_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_kwargs_name_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        coroutine->m_frame->m_frame.f_lineno = 324;
        if (Nuitka_Cell_GET(coroutine->m_closure[3]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[27]);
            coroutine_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            CHAIN_EXCEPTION(coroutine_heap->exception_value);

            coroutine_heap->exception_lineno = 324;
            coroutine_heap->type_description_1 = "ccccccccccoooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_6 = Nuitka_Cell_GET(coroutine->m_closure[3]);
        tmp_called_name_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_6, mod_consts[133]);
        if (tmp_called_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 324;
            coroutine_heap->type_description_1 = "ccccccccccoooooooooooo";
            goto frame_exception_exit_1;
        }
        if (Nuitka_Cell_GET(coroutine->m_closure[1]) == NULL) {
            Py_DECREF(tmp_called_name_1);
            FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[134]);
            coroutine_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            CHAIN_EXCEPTION(coroutine_heap->exception_value);

            coroutine_heap->exception_lineno = 324;
            coroutine_heap->type_description_1 = "ccccccccccoooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_tuple_element_1 = Nuitka_Cell_GET(coroutine->m_closure[1]);
        tmp_args_name_1 = PyTuple_New(1);
        PyTuple_SET_ITEM0(tmp_args_name_1, 0, tmp_tuple_element_1);
        tmp_dict_key_1 = mod_consts[135];
        if (Nuitka_Cell_GET(coroutine->m_closure[4]) == NULL) {
            Py_DECREF(tmp_called_name_1);
            Py_DECREF(tmp_args_name_1);
            FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[135]);
            coroutine_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            CHAIN_EXCEPTION(coroutine_heap->exception_value);

            coroutine_heap->exception_lineno = 325;
            coroutine_heap->type_description_1 = "ccccccccccoooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_dict_value_1 = Nuitka_Cell_GET(coroutine->m_closure[4]);
        tmp_kwargs_name_1 = _PyDict_NewPresized( 5 );
        coroutine_heap->tmp_res = PyDict_SetItem(tmp_kwargs_name_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(coroutine_heap->tmp_res != 0));
        tmp_dict_key_1 = mod_consts[136];
        if (Nuitka_Cell_GET(coroutine->m_closure[7]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[136]);
            coroutine_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            CHAIN_EXCEPTION(coroutine_heap->exception_value);

            coroutine_heap->exception_lineno = 326;
            coroutine_heap->type_description_1 = "ccccccccccoooooooooooo";
            goto dict_build_exception_1;
        }

        tmp_dict_value_1 = Nuitka_Cell_GET(coroutine->m_closure[7]);
        coroutine_heap->tmp_res = PyDict_SetItem(tmp_kwargs_name_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(coroutine_heap->tmp_res != 0));
        tmp_dict_key_1 = mod_consts[137];
        if (Nuitka_Cell_GET(coroutine->m_closure[9]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[137]);
            coroutine_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            CHAIN_EXCEPTION(coroutine_heap->exception_value);

            coroutine_heap->exception_lineno = 327;
            coroutine_heap->type_description_1 = "ccccccccccoooooooooooo";
            goto dict_build_exception_1;
        }

        tmp_dict_value_1 = Nuitka_Cell_GET(coroutine->m_closure[9]);
        coroutine_heap->tmp_res = PyDict_SetItem(tmp_kwargs_name_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(coroutine_heap->tmp_res != 0));
        tmp_dict_key_1 = mod_consts[131];
        if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[131]);
            coroutine_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            CHAIN_EXCEPTION(coroutine_heap->exception_value);

            coroutine_heap->exception_lineno = 328;
            coroutine_heap->type_description_1 = "ccccccccccoooooooooooo";
            goto dict_build_exception_1;
        }

        tmp_dict_value_1 = Nuitka_Cell_GET(coroutine->m_closure[0]);
        coroutine_heap->tmp_res = PyDict_SetItem(tmp_kwargs_name_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(coroutine_heap->tmp_res != 0));
        tmp_dict_key_1 = mod_consts[138];
        if (Nuitka_Cell_GET(coroutine->m_closure[6]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[138]);
            coroutine_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            CHAIN_EXCEPTION(coroutine_heap->exception_value);

            coroutine_heap->exception_lineno = 329;
            coroutine_heap->type_description_1 = "ccccccccccoooooooooooo";
            goto dict_build_exception_1;
        }

        tmp_dict_value_1 = Nuitka_Cell_GET(coroutine->m_closure[6]);
        coroutine_heap->tmp_res = PyDict_SetItem(tmp_kwargs_name_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(coroutine_heap->tmp_res != 0));
        goto dict_build_noexception_1;
        // Exception handling pass through code for dict_build:
        dict_build_exception_1:;
        Py_DECREF(tmp_called_name_1);
        Py_DECREF(tmp_args_name_1);
        Py_DECREF(tmp_kwargs_name_1);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_1:;
        coroutine->m_frame->m_frame.f_lineno = 324;
        tmp_expression_name_5 = CALL_FUNCTION(tmp_called_name_1, tmp_args_name_1, tmp_kwargs_name_1);
        Py_DECREF(tmp_called_name_1);
        Py_DECREF(tmp_args_name_1);
        Py_DECREF(tmp_kwargs_name_1);
        if (tmp_expression_name_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 324;
            coroutine_heap->type_description_1 = "ccccccccccoooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_name_4 = ASYNC_AWAIT(tmp_expression_name_5, await_normal);
        Py_DECREF(tmp_expression_name_5);
        if (tmp_expression_name_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 324;
            coroutine_heap->type_description_1 = "ccccccccccoooooooooooo";
            goto frame_exception_exit_1;
        }
        Nuitka_PreserveHeap(coroutine_heap->yield_tmps, &tmp_expression_name_5, sizeof(PyObject *), &tmp_called_name_1, sizeof(PyObject *), &tmp_expression_name_6, sizeof(PyObject *), &tmp_args_name_1, sizeof(PyObject *), &tmp_tuple_element_1, sizeof(PyObject *), &tmp_kwargs_name_1, sizeof(PyObject *), &tmp_dict_key_1, sizeof(PyObject *), &tmp_dict_value_1, sizeof(PyObject *), NULL);
        coroutine->m_yield_return_index = 1;
        coroutine->m_yieldfrom = tmp_expression_name_4;
        coroutine->m_awaiting = true;
        return NULL;

        yield_return_1:
        Nuitka_RestoreHeap(coroutine_heap->yield_tmps, &tmp_expression_name_5, sizeof(PyObject *), &tmp_called_name_1, sizeof(PyObject *), &tmp_expression_name_6, sizeof(PyObject *), &tmp_args_name_1, sizeof(PyObject *), &tmp_tuple_element_1, sizeof(PyObject *), &tmp_kwargs_name_1, sizeof(PyObject *), &tmp_dict_key_1, sizeof(PyObject *), &tmp_dict_value_1, sizeof(PyObject *), NULL);
        coroutine->m_awaiting = false;

        if (yield_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 324;
            coroutine_heap->type_description_1 = "ccccccccccoooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_2 = yield_return_value;
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 324;
            coroutine_heap->type_description_1 = "ccccccccccoooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(coroutine_heap->var_msg_id == NULL);
        coroutine_heap->var_msg_id = tmp_assign_source_2;
    }
    {
        bool tmp_condition_result_4;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        if (Nuitka_Cell_GET(coroutine->m_closure[5]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[139]);
            coroutine_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            CHAIN_EXCEPTION(coroutine_heap->exception_value);

            coroutine_heap->exception_lineno = 331;
            coroutine_heap->type_description_1 = "ccccccccccoooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_compexpr_left_2 = Nuitka_Cell_GET(coroutine->m_closure[5]);
        tmp_compexpr_right_2 = Py_None;
        tmp_condition_result_4 = (tmp_compexpr_left_2 == tmp_compexpr_right_2) ? true : false;
        if (tmp_condition_result_4 != false) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_expression_name_7;
        if (Nuitka_Cell_GET(coroutine->m_closure[3]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[27]);
            coroutine_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            CHAIN_EXCEPTION(coroutine_heap->exception_value);

            coroutine_heap->exception_lineno = 332;
            coroutine_heap->type_description_1 = "ccccccccccoooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_7 = Nuitka_Cell_GET(coroutine->m_closure[3]);
        tmp_assign_source_3 = LOOKUP_ATTRIBUTE(tmp_expression_name_7, mod_consts[140]);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 332;
            coroutine_heap->type_description_1 = "ccccccccccoooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = Nuitka_Cell_GET(coroutine->m_closure[5]);
            PyCell_SET(coroutine->m_closure[5], tmp_assign_source_3);
            Py_XDECREF(old);
        }

    }
    branch_no_4:;
    {
        bool tmp_condition_result_5;
        PyObject *tmp_compexpr_left_3;
        PyObject *tmp_compexpr_right_3;
        if (Nuitka_Cell_GET(coroutine->m_closure[2]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[141]);
            coroutine_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            CHAIN_EXCEPTION(coroutine_heap->exception_value);

            coroutine_heap->exception_lineno = 333;
            coroutine_heap->type_description_1 = "ccccccccccoooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_compexpr_left_3 = Nuitka_Cell_GET(coroutine->m_closure[2]);
        tmp_compexpr_right_3 = Py_None;
        tmp_condition_result_5 = (tmp_compexpr_left_3 == tmp_compexpr_right_3) ? true : false;
        if (tmp_condition_result_5 != false) {
            goto branch_yes_5;
        } else {
            goto branch_no_5;
        }
    }
    branch_yes_5:;
    {
        bool tmp_condition_result_6;
        PyObject *tmp_compexpr_left_4;
        PyObject *tmp_compexpr_right_4;
        PyObject *tmp_expression_name_8;
        tmp_compexpr_left_4 = mod_consts[142];
        tmp_expression_name_8 = GET_STRING_DICT_VALUE(moduledict_jupyter_client$asynchronous$client, (Nuitka_StringObject *)mod_consts[100]);

        if (unlikely(tmp_expression_name_8 == NULL)) {
            tmp_expression_name_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[100]);
        }

        if (tmp_expression_name_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 335;
            coroutine_heap->type_description_1 = "ccccccccccoooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_4 = LOOKUP_ATTRIBUTE(tmp_expression_name_8, mod_consts[143]);
        if (tmp_compexpr_right_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 335;
            coroutine_heap->type_description_1 = "ccccccccccoooooooooooo";
            goto frame_exception_exit_1;
        }
        coroutine_heap->tmp_res = PySequence_Contains(tmp_compexpr_right_4, tmp_compexpr_left_4);
        Py_DECREF(tmp_compexpr_right_4);
        if (coroutine_heap->tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 335;
            coroutine_heap->type_description_1 = "ccccccccccoooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_6 = (coroutine_heap->tmp_res == 1) ? true : false;
        if (tmp_condition_result_6 != false) {
            goto branch_yes_6;
        } else {
            goto branch_no_6;
        }
    }
    branch_yes_6:;
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_name_1;
        PyObject *tmp_globals_arg_name_1;
        PyObject *tmp_locals_arg_name_1;
        PyObject *tmp_fromlist_name_1;
        PyObject *tmp_level_name_1;
        tmp_name_name_1 = mod_consts[142];
        tmp_globals_arg_name_1 = (PyObject *)moduledict_jupyter_client$asynchronous$client;
        tmp_locals_arg_name_1 = Py_None;
        tmp_fromlist_name_1 = mod_consts[144];
        tmp_level_name_1 = mod_consts[64];
        coroutine->m_frame->m_frame.f_lineno = 336;
        tmp_import_name_from_1 = IMPORT_MODULE5(tmp_name_name_1, tmp_globals_arg_name_1, tmp_locals_arg_name_1, tmp_fromlist_name_1, tmp_level_name_1);
        if (tmp_import_name_from_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 336;
            coroutine_heap->type_description_1 = "ccccccccccoooooooooooo";
            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_4 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_1,
                (PyObject *)moduledict_jupyter_client$asynchronous$client,
                mod_consts[145],
                mod_consts[64]
            );
        } else {
            tmp_assign_source_4 = IMPORT_NAME(tmp_import_name_from_1, mod_consts[145]);
        }

        Py_DECREF(tmp_import_name_from_1);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 336;
            coroutine_heap->type_description_1 = "ccccccccccoooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(coroutine_heap->var_get_ipython == NULL);
        coroutine_heap->var_get_ipython = tmp_assign_source_4;
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_called_name_2;
        CHECK_OBJECT(coroutine_heap->var_get_ipython);
        tmp_called_name_2 = coroutine_heap->var_get_ipython;
        coroutine->m_frame->m_frame.f_lineno = 337;
        tmp_assign_source_5 = CALL_FUNCTION_NO_ARGS(tmp_called_name_2);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 337;
            coroutine_heap->type_description_1 = "ccccccccccoooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(coroutine_heap->var_ip == NULL);
        coroutine_heap->var_ip = tmp_assign_source_5;
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_getattr_target_1;
        PyObject *tmp_getattr_attr_1;
        PyObject *tmp_getattr_default_1;
        CHECK_OBJECT(coroutine_heap->var_ip);
        tmp_getattr_target_1 = coroutine_heap->var_ip;
        tmp_getattr_attr_1 = mod_consts[146];
        tmp_getattr_default_1 = Py_False;
        tmp_assign_source_6 = BUILTIN_GETATTR(tmp_getattr_target_1, tmp_getattr_attr_1, tmp_getattr_default_1);
        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 338;
            coroutine_heap->type_description_1 = "ccccccccccoooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(coroutine_heap->var_in_kernel == NULL);
        coroutine_heap->var_in_kernel = tmp_assign_source_6;
    }
    {
        nuitka_bool tmp_condition_result_7;
        int tmp_truth_name_2;
        CHECK_OBJECT(coroutine_heap->var_in_kernel);
        tmp_truth_name_2 = CHECK_IF_TRUE(coroutine_heap->var_in_kernel);
        if (tmp_truth_name_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 339;
            coroutine_heap->type_description_1 = "ccccccccccoooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_7 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_7 == NUITKA_BOOL_TRUE) {
            goto branch_yes_7;
        } else {
            goto branch_no_7;
        }
    }
    branch_yes_7:;
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_called_name_3;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_expression_name_9;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_expression_name_10;
        PyObject *tmp_expression_name_11;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_expression_name_12;
        PyObject *tmp_expression_name_13;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_expression_name_14;
        PyObject *tmp_expression_name_15;
        tmp_called_name_3 = GET_STRING_DICT_VALUE(moduledict_jupyter_client$asynchronous$client, (Nuitka_StringObject *)mod_consts[147]);

        if (unlikely(tmp_called_name_3 == NULL)) {
            tmp_called_name_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[147]);
        }

        if (tmp_called_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 340;
            coroutine_heap->type_description_1 = "ccccccccccoooooooooooo";
            goto frame_exception_exit_1;
        }
        if (Nuitka_Cell_GET(coroutine->m_closure[3]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[27]);
            coroutine_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            CHAIN_EXCEPTION(coroutine_heap->exception_value);

            coroutine_heap->exception_lineno = 341;
            coroutine_heap->type_description_1 = "ccccccccccoooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_9 = Nuitka_Cell_GET(coroutine->m_closure[3]);
        tmp_args_element_name_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_9, mod_consts[148]);
        if (tmp_args_element_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 341;
            coroutine_heap->type_description_1 = "ccccccccccoooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(coroutine_heap->var_ip);
        tmp_expression_name_11 = coroutine_heap->var_ip;
        tmp_expression_name_10 = LOOKUP_ATTRIBUTE(tmp_expression_name_11, mod_consts[149]);
        if (tmp_expression_name_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            Py_DECREF(tmp_args_element_name_1);

            coroutine_heap->exception_lineno = 342;
            coroutine_heap->type_description_1 = "ccccccccccoooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_10, mod_consts[54]);
        Py_DECREF(tmp_expression_name_10);
        if (tmp_args_element_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            Py_DECREF(tmp_args_element_name_1);

            coroutine_heap->exception_lineno = 342;
            coroutine_heap->type_description_1 = "ccccccccccoooooooooooo";
            goto frame_exception_exit_1;
        }
        if (coroutine_heap->var_ip == NULL) {
            Py_DECREF(tmp_args_element_name_1);
            Py_DECREF(tmp_args_element_name_2);
            FORMAT_UNBOUND_LOCAL_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[150]);
            coroutine_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            CHAIN_EXCEPTION(coroutine_heap->exception_value);

            coroutine_heap->exception_lineno = 343;
            coroutine_heap->type_description_1 = "ccccccccccoooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_13 = coroutine_heap->var_ip;
        tmp_expression_name_12 = LOOKUP_ATTRIBUTE(tmp_expression_name_13, mod_consts[149]);
        if (tmp_expression_name_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            Py_DECREF(tmp_args_element_name_1);
            Py_DECREF(tmp_args_element_name_2);

            coroutine_heap->exception_lineno = 343;
            coroutine_heap->type_description_1 = "ccccccccccoooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_3 = LOOKUP_ATTRIBUTE(tmp_expression_name_12, mod_consts[151]);
        Py_DECREF(tmp_expression_name_12);
        if (tmp_args_element_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            Py_DECREF(tmp_args_element_name_1);
            Py_DECREF(tmp_args_element_name_2);

            coroutine_heap->exception_lineno = 343;
            coroutine_heap->type_description_1 = "ccccccccccoooooooooooo";
            goto frame_exception_exit_1;
        }
        if (coroutine_heap->var_ip == NULL) {
            Py_DECREF(tmp_args_element_name_1);
            Py_DECREF(tmp_args_element_name_2);
            Py_DECREF(tmp_args_element_name_3);
            FORMAT_UNBOUND_LOCAL_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[150]);
            coroutine_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            CHAIN_EXCEPTION(coroutine_heap->exception_value);

            coroutine_heap->exception_lineno = 344;
            coroutine_heap->type_description_1 = "ccccccccccoooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_15 = coroutine_heap->var_ip;
        tmp_expression_name_14 = LOOKUP_ATTRIBUTE(tmp_expression_name_15, mod_consts[149]);
        if (tmp_expression_name_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            Py_DECREF(tmp_args_element_name_1);
            Py_DECREF(tmp_args_element_name_2);
            Py_DECREF(tmp_args_element_name_3);

            coroutine_heap->exception_lineno = 344;
            coroutine_heap->type_description_1 = "ccccccccccoooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_4 = LOOKUP_ATTRIBUTE(tmp_expression_name_14, mod_consts[89]);
        Py_DECREF(tmp_expression_name_14);
        if (tmp_args_element_name_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            Py_DECREF(tmp_args_element_name_1);
            Py_DECREF(tmp_args_element_name_2);
            Py_DECREF(tmp_args_element_name_3);

            coroutine_heap->exception_lineno = 344;
            coroutine_heap->type_description_1 = "ccccccccccoooooooooooo";
            goto frame_exception_exit_1;
        }
        coroutine->m_frame->m_frame.f_lineno = 340;
        {
            PyObject *call_args[] = {tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3, tmp_args_element_name_4};
            tmp_assign_source_7 = CALL_FUNCTION_WITH_ARGS4(tmp_called_name_3, call_args);
        }

        Py_DECREF(tmp_args_element_name_1);
        Py_DECREF(tmp_args_element_name_2);
        Py_DECREF(tmp_args_element_name_3);
        Py_DECREF(tmp_args_element_name_4);
        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 340;
            coroutine_heap->type_description_1 = "ccccccccccoooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = Nuitka_Cell_GET(coroutine->m_closure[2]);
            PyCell_SET(coroutine->m_closure[2], tmp_assign_source_7);
            Py_XDECREF(old);
        }

    }
    branch_no_7:;
    branch_no_6:;
    branch_no_5:;
    {
        bool tmp_condition_result_8;
        PyObject *tmp_compexpr_left_5;
        PyObject *tmp_compexpr_right_5;
        if (Nuitka_Cell_GET(coroutine->m_closure[2]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[141]);
            coroutine_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            CHAIN_EXCEPTION(coroutine_heap->exception_value);

            coroutine_heap->exception_lineno = 346;
            coroutine_heap->type_description_1 = "ccccccccccoooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_compexpr_left_5 = Nuitka_Cell_GET(coroutine->m_closure[2]);
        tmp_compexpr_right_5 = Py_None;
        tmp_condition_result_8 = (tmp_compexpr_left_5 == tmp_compexpr_right_5) ? true : false;
        if (tmp_condition_result_8 != false) {
            goto branch_yes_8;
        } else {
            goto branch_no_8;
        }
    }
    branch_yes_8:;
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_expression_name_16;
        if (Nuitka_Cell_GET(coroutine->m_closure[3]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[27]);
            coroutine_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            CHAIN_EXCEPTION(coroutine_heap->exception_value);

            coroutine_heap->exception_lineno = 348;
            coroutine_heap->type_description_1 = "ccccccccccoooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_16 = Nuitka_Cell_GET(coroutine->m_closure[3]);
        tmp_assign_source_8 = LOOKUP_ATTRIBUTE(tmp_expression_name_16, mod_consts[122]);
        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 348;
            coroutine_heap->type_description_1 = "ccccccccccoooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = Nuitka_Cell_GET(coroutine->m_closure[2]);
            PyCell_SET(coroutine->m_closure[2], tmp_assign_source_8);
            Py_XDECREF(old);
        }

    }
    branch_no_8:;
    {
        bool tmp_condition_result_9;
        PyObject *tmp_compexpr_left_6;
        PyObject *tmp_compexpr_right_6;
        if (Nuitka_Cell_GET(coroutine->m_closure[8]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[21]);
            coroutine_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            CHAIN_EXCEPTION(coroutine_heap->exception_value);

            coroutine_heap->exception_lineno = 351;
            coroutine_heap->type_description_1 = "ccccccccccoooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_compexpr_left_6 = Nuitka_Cell_GET(coroutine->m_closure[8]);
        tmp_compexpr_right_6 = Py_None;
        tmp_condition_result_9 = (tmp_compexpr_left_6 != tmp_compexpr_right_6) ? true : false;
        if (tmp_condition_result_9 != false) {
            goto branch_yes_9;
        } else {
            goto branch_no_9;
        }
    }
    branch_yes_9:;
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_left_name_1;
        PyObject *tmp_called_instance_3;
        PyObject *tmp_right_name_1;
        tmp_called_instance_3 = GET_STRING_DICT_VALUE(moduledict_jupyter_client$asynchronous$client, (Nuitka_StringObject *)mod_consts[59]);

        if (unlikely(tmp_called_instance_3 == NULL)) {
            tmp_called_instance_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[59]);
        }

        if (tmp_called_instance_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 352;
            coroutine_heap->type_description_1 = "ccccccccccoooooooooooo";
            goto frame_exception_exit_1;
        }
        coroutine->m_frame->m_frame.f_lineno = 352;
        tmp_left_name_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_3, mod_consts[84]);
        if (tmp_left_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 352;
            coroutine_heap->type_description_1 = "ccccccccccoooooooooooo";
            goto frame_exception_exit_1;
        }
        if (Nuitka_Cell_GET(coroutine->m_closure[8]) == NULL) {
            Py_DECREF(tmp_left_name_1);
            FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[21]);
            coroutine_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            CHAIN_EXCEPTION(coroutine_heap->exception_value);

            coroutine_heap->exception_lineno = 352;
            coroutine_heap->type_description_1 = "ccccccccccoooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_right_name_1 = Nuitka_Cell_GET(coroutine->m_closure[8]);
        tmp_assign_source_9 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_left_name_1, tmp_right_name_1);
        Py_DECREF(tmp_left_name_1);
        if (tmp_assign_source_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 352;
            coroutine_heap->type_description_1 = "ccccccccccoooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(coroutine_heap->var_deadline == NULL);
        coroutine_heap->var_deadline = tmp_assign_source_9;
    }
    goto branch_end_9;
    branch_no_9:;
    {
        PyObject *tmp_assign_source_10;
        tmp_assign_source_10 = Py_None;
        assert(coroutine_heap->var_timeout_ms == NULL);
        Py_INCREF(tmp_assign_source_10);
        coroutine_heap->var_timeout_ms = tmp_assign_source_10;
    }
    branch_end_9:;
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_called_instance_4;
        tmp_called_instance_4 = GET_STRING_DICT_VALUE(moduledict_jupyter_client$asynchronous$client, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_called_instance_4 == NULL)) {
            tmp_called_instance_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_called_instance_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 356;
            coroutine_heap->type_description_1 = "ccccccccccoooooooooooo";
            goto frame_exception_exit_1;
        }
        coroutine->m_frame->m_frame.f_lineno = 356;
        tmp_assign_source_11 = CALL_METHOD_NO_ARGS(tmp_called_instance_4, mod_consts[152]);
        if (tmp_assign_source_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 356;
            coroutine_heap->type_description_1 = "ccccccccccoooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(coroutine_heap->var_poller == NULL);
        coroutine_heap->var_poller = tmp_assign_source_11;
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_expression_name_17;
        PyObject *tmp_expression_name_18;
        if (Nuitka_Cell_GET(coroutine->m_closure[3]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[27]);
            coroutine_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            CHAIN_EXCEPTION(coroutine_heap->exception_value);

            coroutine_heap->exception_lineno = 357;
            coroutine_heap->type_description_1 = "ccccccccccoooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_18 = Nuitka_Cell_GET(coroutine->m_closure[3]);
        tmp_expression_name_17 = LOOKUP_ATTRIBUTE(tmp_expression_name_18, mod_consts[34]);
        if (tmp_expression_name_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 357;
            coroutine_heap->type_description_1 = "ccccccccccoooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_12 = LOOKUP_ATTRIBUTE(tmp_expression_name_17, mod_consts[153]);
        Py_DECREF(tmp_expression_name_17);
        if (tmp_assign_source_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 357;
            coroutine_heap->type_description_1 = "ccccccccccoooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(coroutine_heap->var_iopub_socket == NULL);
        coroutine_heap->var_iopub_socket = tmp_assign_source_12;
    }
    {
        PyObject *tmp_called_name_4;
        PyObject *tmp_expression_name_19;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_5;
        PyObject *tmp_args_element_name_6;
        PyObject *tmp_expression_name_20;
        CHECK_OBJECT(coroutine_heap->var_poller);
        tmp_expression_name_19 = coroutine_heap->var_poller;
        tmp_called_name_4 = LOOKUP_ATTRIBUTE(tmp_expression_name_19, mod_consts[154]);
        if (tmp_called_name_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 358;
            coroutine_heap->type_description_1 = "ccccccccccoooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(coroutine_heap->var_iopub_socket);
        tmp_args_element_name_5 = coroutine_heap->var_iopub_socket;
        tmp_expression_name_20 = GET_STRING_DICT_VALUE(moduledict_jupyter_client$asynchronous$client, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_name_20 == NULL)) {
            tmp_expression_name_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_name_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            Py_DECREF(tmp_called_name_4);

            coroutine_heap->exception_lineno = 358;
            coroutine_heap->type_description_1 = "ccccccccccoooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_6 = LOOKUP_ATTRIBUTE(tmp_expression_name_20, mod_consts[155]);
        if (tmp_args_element_name_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            Py_DECREF(tmp_called_name_4);

            coroutine_heap->exception_lineno = 358;
            coroutine_heap->type_description_1 = "ccccccccccoooooooooooo";
            goto frame_exception_exit_1;
        }
        coroutine->m_frame->m_frame.f_lineno = 358;
        {
            PyObject *call_args[] = {tmp_args_element_name_5, tmp_args_element_name_6};
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_4, call_args);
        }

        Py_DECREF(tmp_called_name_4);
        Py_DECREF(tmp_args_element_name_6);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 358;
            coroutine_heap->type_description_1 = "ccccccccccoooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        nuitka_bool tmp_condition_result_10;
        int tmp_truth_name_3;
        if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[131]);
            coroutine_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            CHAIN_EXCEPTION(coroutine_heap->exception_value);

            coroutine_heap->exception_lineno = 359;
            coroutine_heap->type_description_1 = "ccccccccccoooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_truth_name_3 = CHECK_IF_TRUE(Nuitka_Cell_GET(coroutine->m_closure[0]));
        if (tmp_truth_name_3 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 359;
            coroutine_heap->type_description_1 = "ccccccccccoooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_10 = tmp_truth_name_3 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_10 == NUITKA_BOOL_TRUE) {
            goto branch_yes_10;
        } else {
            goto branch_no_10;
        }
    }
    branch_yes_10:;
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_expression_name_21;
        PyObject *tmp_expression_name_22;
        if (Nuitka_Cell_GET(coroutine->m_closure[3]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[27]);
            coroutine_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            CHAIN_EXCEPTION(coroutine_heap->exception_value);

            coroutine_heap->exception_lineno = 360;
            coroutine_heap->type_description_1 = "ccccccccccoooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_22 = Nuitka_Cell_GET(coroutine->m_closure[3]);
        tmp_expression_name_21 = LOOKUP_ATTRIBUTE(tmp_expression_name_22, mod_consts[38]);
        if (tmp_expression_name_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 360;
            coroutine_heap->type_description_1 = "ccccccccccoooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_13 = LOOKUP_ATTRIBUTE(tmp_expression_name_21, mod_consts[153]);
        Py_DECREF(tmp_expression_name_21);
        if (tmp_assign_source_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 360;
            coroutine_heap->type_description_1 = "ccccccccccoooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(coroutine_heap->var_stdin_socket == NULL);
        coroutine_heap->var_stdin_socket = tmp_assign_source_13;
    }
    {
        PyObject *tmp_called_name_5;
        PyObject *tmp_expression_name_23;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_name_7;
        PyObject *tmp_args_element_name_8;
        PyObject *tmp_expression_name_24;
        if (coroutine_heap->var_poller == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[156]);
            coroutine_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            CHAIN_EXCEPTION(coroutine_heap->exception_value);

            coroutine_heap->exception_lineno = 361;
            coroutine_heap->type_description_1 = "ccccccccccoooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_23 = coroutine_heap->var_poller;
        tmp_called_name_5 = LOOKUP_ATTRIBUTE(tmp_expression_name_23, mod_consts[154]);
        if (tmp_called_name_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 361;
            coroutine_heap->type_description_1 = "ccccccccccoooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(coroutine_heap->var_stdin_socket);
        tmp_args_element_name_7 = coroutine_heap->var_stdin_socket;
        tmp_expression_name_24 = GET_STRING_DICT_VALUE(moduledict_jupyter_client$asynchronous$client, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_name_24 == NULL)) {
            tmp_expression_name_24 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_name_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            Py_DECREF(tmp_called_name_5);

            coroutine_heap->exception_lineno = 361;
            coroutine_heap->type_description_1 = "ccccccccccoooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_8 = LOOKUP_ATTRIBUTE(tmp_expression_name_24, mod_consts[155]);
        if (tmp_args_element_name_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            Py_DECREF(tmp_called_name_5);

            coroutine_heap->exception_lineno = 361;
            coroutine_heap->type_description_1 = "ccccccccccoooooooooooo";
            goto frame_exception_exit_1;
        }
        coroutine->m_frame->m_frame.f_lineno = 361;
        {
            PyObject *call_args[] = {tmp_args_element_name_7, tmp_args_element_name_8};
            tmp_call_result_2 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_5, call_args);
        }

        Py_DECREF(tmp_called_name_5);
        Py_DECREF(tmp_args_element_name_8);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 361;
            coroutine_heap->type_description_1 = "ccccccccccoooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    goto branch_end_10;
    branch_no_10:;
    {
        PyObject *tmp_assign_source_14;
        tmp_assign_source_14 = Py_None;
        assert(coroutine_heap->var_stdin_socket == NULL);
        Py_INCREF(tmp_assign_source_14);
        coroutine_heap->var_stdin_socket = tmp_assign_source_14;
    }
    branch_end_10:;
    loop_start_1:;
    {
        bool tmp_condition_result_11;
        PyObject *tmp_compexpr_left_7;
        PyObject *tmp_compexpr_right_7;
        if (Nuitka_Cell_GET(coroutine->m_closure[8]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[21]);
            coroutine_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            CHAIN_EXCEPTION(coroutine_heap->exception_value);

            coroutine_heap->exception_lineno = 367;
            coroutine_heap->type_description_1 = "ccccccccccoooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_compexpr_left_7 = Nuitka_Cell_GET(coroutine->m_closure[8]);
        tmp_compexpr_right_7 = Py_None;
        tmp_condition_result_11 = (tmp_compexpr_left_7 != tmp_compexpr_right_7) ? true : false;
        if (tmp_condition_result_11 != false) {
            goto branch_yes_11;
        } else {
            goto branch_no_11;
        }
    }
    branch_yes_11:;
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_called_name_6;
        PyObject *tmp_args_element_name_9;
        PyObject *tmp_args_element_name_10;
        PyObject *tmp_left_name_2;
        PyObject *tmp_right_name_2;
        PyObject *tmp_called_instance_5;
        tmp_called_name_6 = LOOKUP_BUILTIN(mod_consts[85]);
        assert(tmp_called_name_6 != NULL);
        tmp_args_element_name_9 = mod_consts[64];
        if (coroutine_heap->var_deadline == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[86]);
            coroutine_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            CHAIN_EXCEPTION(coroutine_heap->exception_value);

            coroutine_heap->exception_lineno = 368;
            coroutine_heap->type_description_1 = "ccccccccccoooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_left_name_2 = coroutine_heap->var_deadline;
        tmp_called_instance_5 = GET_STRING_DICT_VALUE(moduledict_jupyter_client$asynchronous$client, (Nuitka_StringObject *)mod_consts[59]);

        if (unlikely(tmp_called_instance_5 == NULL)) {
            tmp_called_instance_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[59]);
        }

        if (tmp_called_instance_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 368;
            coroutine_heap->type_description_1 = "ccccccccccoooooooooooo";
            goto frame_exception_exit_1;
        }
        coroutine->m_frame->m_frame.f_lineno = 368;
        tmp_right_name_2 = CALL_METHOD_NO_ARGS(tmp_called_instance_5, mod_consts[84]);
        if (tmp_right_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 368;
            coroutine_heap->type_description_1 = "ccccccccccoooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_10 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_left_name_2, tmp_right_name_2);
        Py_DECREF(tmp_right_name_2);
        if (tmp_args_element_name_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 368;
            coroutine_heap->type_description_1 = "ccccccccccoooooooooooo";
            goto frame_exception_exit_1;
        }
        coroutine->m_frame->m_frame.f_lineno = 368;
        {
            PyObject *call_args[] = {tmp_args_element_name_9, tmp_args_element_name_10};
            tmp_assign_source_15 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_6, call_args);
        }

        Py_DECREF(tmp_args_element_name_10);
        if (tmp_assign_source_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 368;
            coroutine_heap->type_description_1 = "ccccccccccoooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = Nuitka_Cell_GET(coroutine->m_closure[8]);
            PyCell_SET(coroutine->m_closure[8], tmp_assign_source_15);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_left_name_3;
        PyObject *tmp_right_name_3;
        tmp_left_name_3 = mod_consts[157];
        CHECK_OBJECT(Nuitka_Cell_GET(coroutine->m_closure[8]));
        tmp_right_name_3 = Nuitka_Cell_GET(coroutine->m_closure[8]);
        tmp_assign_source_16 = BINARY_OPERATION_MULT_OBJECT_FLOAT_OBJECT(tmp_left_name_3, tmp_right_name_3);
        if (tmp_assign_source_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 369;
            coroutine_heap->type_description_1 = "ccccccccccoooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = coroutine_heap->var_timeout_ms;
            coroutine_heap->var_timeout_ms = tmp_assign_source_16;
            Py_XDECREF(old);
        }

    }
    branch_no_11:;
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_dict_seq_1;
        PyObject *tmp_called_name_7;
        PyObject *tmp_expression_name_25;
        PyObject *tmp_args_element_name_11;
        if (coroutine_heap->var_poller == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[156]);
            coroutine_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            CHAIN_EXCEPTION(coroutine_heap->exception_value);

            coroutine_heap->exception_lineno = 370;
            coroutine_heap->type_description_1 = "ccccccccccoooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_25 = coroutine_heap->var_poller;
        tmp_called_name_7 = LOOKUP_ATTRIBUTE(tmp_expression_name_25, mod_consts[158]);
        if (tmp_called_name_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 370;
            coroutine_heap->type_description_1 = "ccccccccccoooooooooooo";
            goto frame_exception_exit_1;
        }
        if (coroutine_heap->var_timeout_ms == NULL) {
            Py_DECREF(tmp_called_name_7);
            FORMAT_UNBOUND_LOCAL_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[159]);
            coroutine_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            CHAIN_EXCEPTION(coroutine_heap->exception_value);

            coroutine_heap->exception_lineno = 370;
            coroutine_heap->type_description_1 = "ccccccccccoooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_name_11 = coroutine_heap->var_timeout_ms;
        coroutine->m_frame->m_frame.f_lineno = 370;
        tmp_dict_seq_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_7, tmp_args_element_name_11);
        Py_DECREF(tmp_called_name_7);
        if (tmp_dict_seq_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 370;
            coroutine_heap->type_description_1 = "ccccccccccoooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_17 = TO_DICT(tmp_dict_seq_1, NULL);
        Py_DECREF(tmp_dict_seq_1);
        if (tmp_assign_source_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 370;
            coroutine_heap->type_description_1 = "ccccccccccoooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = coroutine_heap->var_events;
            coroutine_heap->var_events = tmp_assign_source_17;
            Py_XDECREF(old);
        }

    }
    {
        bool tmp_condition_result_12;
        PyObject *tmp_operand_name_3;
        CHECK_OBJECT(coroutine_heap->var_events);
        tmp_operand_name_3 = coroutine_heap->var_events;
        coroutine_heap->tmp_res = CHECK_IF_TRUE(tmp_operand_name_3);
        assert(!(coroutine_heap->tmp_res == -1));
        tmp_condition_result_12 = (coroutine_heap->tmp_res == 0) ? true : false;
        if (tmp_condition_result_12 != false) {
            goto branch_yes_12;
        } else {
            goto branch_no_12;
        }
    }
    branch_yes_12:;
    {
        PyObject *tmp_raise_type_3;
        PyObject *tmp_make_exception_arg_3;
        tmp_make_exception_arg_3 = mod_consts[160];
        coroutine->m_frame->m_frame.f_lineno = 372;
        tmp_raise_type_3 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_TimeoutError, tmp_make_exception_arg_3);
        assert(!(tmp_raise_type_3 == NULL));
        coroutine_heap->exception_type = tmp_raise_type_3;
        coroutine_heap->exception_lineno = 372;
        RAISE_EXCEPTION_WITH_TYPE(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
        coroutine_heap->type_description_1 = "ccccccccccoooooooooooo";
        goto frame_exception_exit_1;
    }
    branch_no_12:;
    {
        nuitka_bool tmp_condition_result_13;
        PyObject *tmp_key_name_1;
        PyObject *tmp_dict_arg_name_1;
        if (coroutine_heap->var_stdin_socket == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[161]);
            coroutine_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            CHAIN_EXCEPTION(coroutine_heap->exception_value);

            coroutine_heap->exception_lineno = 373;
            coroutine_heap->type_description_1 = "ccccccccccoooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_key_name_1 = coroutine_heap->var_stdin_socket;
        CHECK_OBJECT(coroutine_heap->var_events);
        tmp_dict_arg_name_1 = coroutine_heap->var_events;
        coroutine_heap->tmp_res = DICT_HAS_ITEM(tmp_dict_arg_name_1, tmp_key_name_1);
        if (coroutine_heap->tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 373;
            coroutine_heap->type_description_1 = "ccccccccccoooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_13 = (coroutine_heap->tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_13 == NUITKA_BOOL_TRUE) {
            goto branch_yes_13;
        } else {
            goto branch_no_13;
        }
    }
    branch_yes_13:;
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_expression_name_26;
        PyObject *tmp_expression_name_27;
        PyObject *tmp_called_name_8;
        PyObject *tmp_expression_name_28;
        PyObject *tmp_expression_name_29;
        PyObject *tmp_kwargs_name_2;
        coroutine->m_frame->m_frame.f_lineno = 374;
        if (Nuitka_Cell_GET(coroutine->m_closure[3]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[27]);
            coroutine_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            CHAIN_EXCEPTION(coroutine_heap->exception_value);

            coroutine_heap->exception_lineno = 374;
            coroutine_heap->type_description_1 = "ccccccccccoooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_29 = Nuitka_Cell_GET(coroutine->m_closure[3]);
        tmp_expression_name_28 = LOOKUP_ATTRIBUTE(tmp_expression_name_29, mod_consts[38]);
        if (tmp_expression_name_28 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 374;
            coroutine_heap->type_description_1 = "ccccccccccoooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_8 = LOOKUP_ATTRIBUTE(tmp_expression_name_28, mod_consts[29]);
        Py_DECREF(tmp_expression_name_28);
        if (tmp_called_name_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 374;
            coroutine_heap->type_description_1 = "ccccccccccoooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_kwargs_name_2 = PyDict_Copy(mod_consts[162]);
        coroutine->m_frame->m_frame.f_lineno = 374;
        tmp_expression_name_27 = CALL_FUNCTION_WITH_KEYARGS(tmp_called_name_8, tmp_kwargs_name_2);
        Py_DECREF(tmp_called_name_8);
        Py_DECREF(tmp_kwargs_name_2);
        if (tmp_expression_name_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 374;
            coroutine_heap->type_description_1 = "ccccccccccoooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_name_26 = ASYNC_AWAIT(tmp_expression_name_27, await_normal);
        Py_DECREF(tmp_expression_name_27);
        if (tmp_expression_name_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 374;
            coroutine_heap->type_description_1 = "ccccccccccoooooooooooo";
            goto frame_exception_exit_1;
        }
        Nuitka_PreserveHeap(coroutine_heap->yield_tmps, &tmp_expression_name_27, sizeof(PyObject *), &tmp_called_name_8, sizeof(PyObject *), &tmp_expression_name_28, sizeof(PyObject *), &tmp_expression_name_29, sizeof(PyObject *), &tmp_kwargs_name_2, sizeof(PyObject *), NULL);
        coroutine->m_yield_return_index = 2;
        coroutine->m_yieldfrom = tmp_expression_name_26;
        coroutine->m_awaiting = true;
        return NULL;

        yield_return_2:
        Nuitka_RestoreHeap(coroutine_heap->yield_tmps, &tmp_expression_name_27, sizeof(PyObject *), &tmp_called_name_8, sizeof(PyObject *), &tmp_expression_name_28, sizeof(PyObject *), &tmp_expression_name_29, sizeof(PyObject *), &tmp_kwargs_name_2, sizeof(PyObject *), NULL);
        coroutine->m_awaiting = false;

        if (yield_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 374;
            coroutine_heap->type_description_1 = "ccccccccccoooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_18 = yield_return_value;
        if (tmp_assign_source_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 374;
            coroutine_heap->type_description_1 = "ccccccccccoooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = coroutine_heap->var_req;
            coroutine_heap->var_req = tmp_assign_source_18;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_called_name_9;
        PyObject *tmp_call_result_3;
        PyObject *tmp_args_element_name_12;
        if (Nuitka_Cell_GET(coroutine->m_closure[5]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[139]);
            coroutine_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            CHAIN_EXCEPTION(coroutine_heap->exception_value);

            coroutine_heap->exception_lineno = 375;
            coroutine_heap->type_description_1 = "ccccccccccoooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_9 = Nuitka_Cell_GET(coroutine->m_closure[5]);
        CHECK_OBJECT(coroutine_heap->var_req);
        tmp_args_element_name_12 = coroutine_heap->var_req;
        coroutine->m_frame->m_frame.f_lineno = 375;
        tmp_call_result_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_9, tmp_args_element_name_12);
        if (tmp_call_result_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 375;
            coroutine_heap->type_description_1 = "ccccccccccoooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_3);
    }
    goto loop_start_1;
    branch_no_13:;
    {
        nuitka_bool tmp_condition_result_14;
        PyObject *tmp_key_name_2;
        PyObject *tmp_dict_arg_name_2;
        if (coroutine_heap->var_iopub_socket == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[163]);
            coroutine_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            CHAIN_EXCEPTION(coroutine_heap->exception_value);

            coroutine_heap->exception_lineno = 377;
            coroutine_heap->type_description_1 = "ccccccccccoooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_key_name_2 = coroutine_heap->var_iopub_socket;
        CHECK_OBJECT(coroutine_heap->var_events);
        tmp_dict_arg_name_2 = coroutine_heap->var_events;
        coroutine_heap->tmp_res = DICT_HAS_ITEM(tmp_dict_arg_name_2, tmp_key_name_2);
        if (coroutine_heap->tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 377;
            coroutine_heap->type_description_1 = "ccccccccccoooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_14 = (coroutine_heap->tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_14 == NUITKA_BOOL_TRUE) {
            goto branch_yes_14;
        } else {
            goto branch_no_14;
        }
    }
    branch_yes_14:;
    goto loop_start_1;
    branch_no_14:;
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_expression_name_30;
        PyObject *tmp_expression_name_31;
        PyObject *tmp_called_name_10;
        PyObject *tmp_expression_name_32;
        PyObject *tmp_expression_name_33;
        PyObject *tmp_kwargs_name_3;
        coroutine->m_frame->m_frame.f_lineno = 380;
        if (Nuitka_Cell_GET(coroutine->m_closure[3]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[27]);
            coroutine_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            CHAIN_EXCEPTION(coroutine_heap->exception_value);

            coroutine_heap->exception_lineno = 380;
            coroutine_heap->type_description_1 = "ccccccccccoooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_33 = Nuitka_Cell_GET(coroutine->m_closure[3]);
        tmp_expression_name_32 = LOOKUP_ATTRIBUTE(tmp_expression_name_33, mod_consts[34]);
        if (tmp_expression_name_32 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 380;
            coroutine_heap->type_description_1 = "ccccccccccoooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_10 = LOOKUP_ATTRIBUTE(tmp_expression_name_32, mod_consts[29]);
        Py_DECREF(tmp_expression_name_32);
        if (tmp_called_name_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 380;
            coroutine_heap->type_description_1 = "ccccccccccoooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_kwargs_name_3 = PyDict_Copy(mod_consts[162]);
        coroutine->m_frame->m_frame.f_lineno = 380;
        tmp_expression_name_31 = CALL_FUNCTION_WITH_KEYARGS(tmp_called_name_10, tmp_kwargs_name_3);
        Py_DECREF(tmp_called_name_10);
        Py_DECREF(tmp_kwargs_name_3);
        if (tmp_expression_name_31 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 380;
            coroutine_heap->type_description_1 = "ccccccccccoooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_name_30 = ASYNC_AWAIT(tmp_expression_name_31, await_normal);
        Py_DECREF(tmp_expression_name_31);
        if (tmp_expression_name_30 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 380;
            coroutine_heap->type_description_1 = "ccccccccccoooooooooooo";
            goto frame_exception_exit_1;
        }
        Nuitka_PreserveHeap(coroutine_heap->yield_tmps, &tmp_expression_name_31, sizeof(PyObject *), &tmp_called_name_10, sizeof(PyObject *), &tmp_expression_name_32, sizeof(PyObject *), &tmp_expression_name_33, sizeof(PyObject *), &tmp_kwargs_name_3, sizeof(PyObject *), NULL);
        coroutine->m_yield_return_index = 3;
        coroutine->m_yieldfrom = tmp_expression_name_30;
        coroutine->m_awaiting = true;
        return NULL;

        yield_return_3:
        Nuitka_RestoreHeap(coroutine_heap->yield_tmps, &tmp_expression_name_31, sizeof(PyObject *), &tmp_called_name_10, sizeof(PyObject *), &tmp_expression_name_32, sizeof(PyObject *), &tmp_expression_name_33, sizeof(PyObject *), &tmp_kwargs_name_3, sizeof(PyObject *), NULL);
        coroutine->m_awaiting = false;

        if (yield_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 380;
            coroutine_heap->type_description_1 = "ccccccccccoooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_19 = yield_return_value;
        if (tmp_assign_source_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 380;
            coroutine_heap->type_description_1 = "ccccccccccoooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = coroutine_heap->var_msg;
            coroutine_heap->var_msg = tmp_assign_source_19;
            Py_XDECREF(old);
        }

    }
    {
        nuitka_bool tmp_condition_result_15;
        PyObject *tmp_compexpr_left_8;
        PyObject *tmp_compexpr_right_8;
        PyObject *tmp_called_instance_6;
        PyObject *tmp_expression_name_34;
        PyObject *tmp_subscript_name_1;
        CHECK_OBJECT(coroutine_heap->var_msg);
        tmp_expression_name_34 = coroutine_heap->var_msg;
        tmp_subscript_name_1 = mod_consts[89];
        tmp_called_instance_6 = LOOKUP_SUBSCRIPT(tmp_expression_name_34, tmp_subscript_name_1);
        if (tmp_called_instance_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 382;
            coroutine_heap->type_description_1 = "ccccccccccoooooooooooo";
            goto frame_exception_exit_1;
        }
        coroutine->m_frame->m_frame.f_lineno = 382;
        tmp_compexpr_left_8 = CALL_METHOD_WITH_ARGS1(
            tmp_called_instance_6,
            mod_consts[90],
            &PyTuple_GET_ITEM(mod_consts[91], 0)
        );

        Py_DECREF(tmp_called_instance_6);
        if (tmp_compexpr_left_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 382;
            coroutine_heap->type_description_1 = "ccccccccccoooooooooooo";
            goto frame_exception_exit_1;
        }
        if (coroutine_heap->var_msg_id == NULL) {
            Py_DECREF(tmp_compexpr_left_8);
            FORMAT_UNBOUND_LOCAL_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[92]);
            coroutine_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            CHAIN_EXCEPTION(coroutine_heap->exception_value);

            coroutine_heap->exception_lineno = 382;
            coroutine_heap->type_description_1 = "ccccccccccoooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_compexpr_right_8 = coroutine_heap->var_msg_id;
        tmp_condition_result_15 = RICH_COMPARE_NE_NBOOL_OBJECT_OBJECT(tmp_compexpr_left_8, tmp_compexpr_right_8);
        Py_DECREF(tmp_compexpr_left_8);
        if (tmp_condition_result_15 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 382;
            coroutine_heap->type_description_1 = "ccccccccccoooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_15 == NUITKA_BOOL_TRUE) {
            goto branch_yes_15;
        } else {
            goto branch_no_15;
        }
        assert(tmp_condition_result_15 != NUITKA_BOOL_UNASSIGNED);
    }
    branch_yes_15:;
    goto loop_start_1;
    branch_no_15:;
    {
        PyObject *tmp_called_name_11;
        PyObject *tmp_call_result_4;
        PyObject *tmp_args_element_name_13;
        if (Nuitka_Cell_GET(coroutine->m_closure[2]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[141]);
            coroutine_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            CHAIN_EXCEPTION(coroutine_heap->exception_value);

            coroutine_heap->exception_lineno = 385;
            coroutine_heap->type_description_1 = "ccccccccccoooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_11 = Nuitka_Cell_GET(coroutine->m_closure[2]);
        CHECK_OBJECT(coroutine_heap->var_msg);
        tmp_args_element_name_13 = coroutine_heap->var_msg;
        coroutine->m_frame->m_frame.f_lineno = 385;
        tmp_call_result_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_11, tmp_args_element_name_13);
        if (tmp_call_result_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 385;
            coroutine_heap->type_description_1 = "ccccccccccoooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_4);
    }
    {
        nuitka_bool tmp_condition_result_16;
        int tmp_and_left_truth_2;
        nuitka_bool tmp_and_left_value_2;
        nuitka_bool tmp_and_right_value_2;
        PyObject *tmp_compexpr_left_9;
        PyObject *tmp_compexpr_right_9;
        PyObject *tmp_expression_name_35;
        PyObject *tmp_expression_name_36;
        PyObject *tmp_subscript_name_2;
        PyObject *tmp_subscript_name_3;
        PyObject *tmp_tmp_and_left_value_2_object_1;
        int tmp_truth_name_4;
        PyObject *tmp_compexpr_left_10;
        PyObject *tmp_compexpr_right_10;
        PyObject *tmp_expression_name_37;
        PyObject *tmp_expression_name_38;
        PyObject *tmp_subscript_name_4;
        PyObject *tmp_subscript_name_5;
        PyObject *tmp_tmp_and_right_value_2_object_1;
        int tmp_truth_name_5;
        CHECK_OBJECT(coroutine_heap->var_msg);
        tmp_expression_name_36 = coroutine_heap->var_msg;
        tmp_subscript_name_2 = mod_consts[107];
        tmp_expression_name_35 = LOOKUP_SUBSCRIPT(tmp_expression_name_36, tmp_subscript_name_2);
        if (tmp_expression_name_35 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 388;
            coroutine_heap->type_description_1 = "ccccccccccoooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_name_3 = mod_consts[75];
        tmp_compexpr_left_9 = LOOKUP_SUBSCRIPT(tmp_expression_name_35, tmp_subscript_name_3);
        Py_DECREF(tmp_expression_name_35);
        if (tmp_compexpr_left_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 388;
            coroutine_heap->type_description_1 = "ccccccccccoooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_9 = mod_consts[164];
        tmp_tmp_and_left_value_2_object_1 = RICH_COMPARE_EQ_OBJECT_OBJECT_OBJECT(tmp_compexpr_left_9, tmp_compexpr_right_9);
        Py_DECREF(tmp_compexpr_left_9);
        if (tmp_tmp_and_left_value_2_object_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 388;
            coroutine_heap->type_description_1 = "ccccccccccoooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_4 = CHECK_IF_TRUE(tmp_tmp_and_left_value_2_object_1);
        if (tmp_truth_name_4 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            Py_DECREF(tmp_tmp_and_left_value_2_object_1);

            coroutine_heap->exception_lineno = 388;
            coroutine_heap->type_description_1 = "ccccccccccoooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_value_2 = tmp_truth_name_4 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_tmp_and_left_value_2_object_1);
        tmp_and_left_truth_2 = tmp_and_left_value_2 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 389;
            coroutine_heap->type_description_1 = "ccccccccccoooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_and_left_truth_2 == 1) {
            goto and_right_2;
        } else {
            goto and_left_2;
        }
        and_right_2:;
        CHECK_OBJECT(coroutine_heap->var_msg);
        tmp_expression_name_38 = coroutine_heap->var_msg;
        tmp_subscript_name_4 = mod_consts[94];
        tmp_expression_name_37 = LOOKUP_SUBSCRIPT(tmp_expression_name_38, tmp_subscript_name_4);
        if (tmp_expression_name_37 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 389;
            coroutine_heap->type_description_1 = "ccccccccccoooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_name_5 = mod_consts[165];
        tmp_compexpr_left_10 = LOOKUP_SUBSCRIPT(tmp_expression_name_37, tmp_subscript_name_5);
        Py_DECREF(tmp_expression_name_37);
        if (tmp_compexpr_left_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 389;
            coroutine_heap->type_description_1 = "ccccccccccoooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_10 = mod_consts[166];
        tmp_tmp_and_right_value_2_object_1 = RICH_COMPARE_EQ_OBJECT_OBJECT_OBJECT(tmp_compexpr_left_10, tmp_compexpr_right_10);
        Py_DECREF(tmp_compexpr_left_10);
        if (tmp_tmp_and_right_value_2_object_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 389;
            coroutine_heap->type_description_1 = "ccccccccccoooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_5 = CHECK_IF_TRUE(tmp_tmp_and_right_value_2_object_1);
        if (tmp_truth_name_5 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            Py_DECREF(tmp_tmp_and_right_value_2_object_1);

            coroutine_heap->exception_lineno = 389;
            coroutine_heap->type_description_1 = "ccccccccccoooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_2 = tmp_truth_name_5 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_tmp_and_right_value_2_object_1);
        tmp_condition_result_16 = tmp_and_right_value_2;
        goto and_end_2;
        and_left_2:;
        tmp_condition_result_16 = tmp_and_left_value_2;
        and_end_2:;
        if (tmp_condition_result_16 == NUITKA_BOOL_TRUE) {
            goto branch_yes_16;
        } else {
            goto branch_no_16;
        }
    }
    branch_yes_16:;
    goto loop_end_1;
    branch_no_16:;
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


        coroutine_heap->exception_lineno = 366;
        coroutine_heap->type_description_1 = "ccccccccccoooooooooooo";
        goto frame_exception_exit_1;
    }
    goto loop_start_1;
    loop_end_1:;
    {
        bool tmp_condition_result_17;
        PyObject *tmp_compexpr_left_11;
        PyObject *tmp_compexpr_right_11;
        if (Nuitka_Cell_GET(coroutine->m_closure[8]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[21]);
            coroutine_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            CHAIN_EXCEPTION(coroutine_heap->exception_value);

            coroutine_heap->exception_lineno = 393;
            coroutine_heap->type_description_1 = "ccccccccccoooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_compexpr_left_11 = Nuitka_Cell_GET(coroutine->m_closure[8]);
        tmp_compexpr_right_11 = Py_None;
        tmp_condition_result_17 = (tmp_compexpr_left_11 != tmp_compexpr_right_11) ? true : false;
        if (tmp_condition_result_17 != false) {
            goto branch_yes_17;
        } else {
            goto branch_no_17;
        }
    }
    branch_yes_17:;
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_called_name_12;
        PyObject *tmp_args_element_name_14;
        PyObject *tmp_args_element_name_15;
        PyObject *tmp_left_name_4;
        PyObject *tmp_right_name_4;
        PyObject *tmp_called_instance_7;
        tmp_called_name_12 = LOOKUP_BUILTIN(mod_consts[85]);
        assert(tmp_called_name_12 != NULL);
        tmp_args_element_name_14 = mod_consts[64];
        if (coroutine_heap->var_deadline == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[86]);
            coroutine_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            CHAIN_EXCEPTION(coroutine_heap->exception_value);

            coroutine_heap->exception_lineno = 394;
            coroutine_heap->type_description_1 = "ccccccccccoooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_left_name_4 = coroutine_heap->var_deadline;
        tmp_called_instance_7 = GET_STRING_DICT_VALUE(moduledict_jupyter_client$asynchronous$client, (Nuitka_StringObject *)mod_consts[59]);

        if (unlikely(tmp_called_instance_7 == NULL)) {
            tmp_called_instance_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[59]);
        }

        if (tmp_called_instance_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 394;
            coroutine_heap->type_description_1 = "ccccccccccoooooooooooo";
            goto frame_exception_exit_1;
        }
        coroutine->m_frame->m_frame.f_lineno = 394;
        tmp_right_name_4 = CALL_METHOD_NO_ARGS(tmp_called_instance_7, mod_consts[84]);
        if (tmp_right_name_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 394;
            coroutine_heap->type_description_1 = "ccccccccccoooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_15 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_left_name_4, tmp_right_name_4);
        Py_DECREF(tmp_right_name_4);
        if (tmp_args_element_name_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 394;
            coroutine_heap->type_description_1 = "ccccccccccoooooooooooo";
            goto frame_exception_exit_1;
        }
        coroutine->m_frame->m_frame.f_lineno = 394;
        {
            PyObject *call_args[] = {tmp_args_element_name_14, tmp_args_element_name_15};
            tmp_assign_source_20 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_12, call_args);
        }

        Py_DECREF(tmp_args_element_name_15);
        if (tmp_assign_source_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 394;
            coroutine_heap->type_description_1 = "ccccccccccoooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = Nuitka_Cell_GET(coroutine->m_closure[8]);
            PyCell_SET(coroutine->m_closure[8], tmp_assign_source_20);
            Py_XDECREF(old);
        }

    }
    branch_no_17:;
    {
        PyObject *tmp_expression_name_39;
        PyObject *tmp_expression_name_40;
        PyObject *tmp_called_name_13;
        PyObject *tmp_expression_name_41;
        PyObject *tmp_args_name_2;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_kwargs_name_4;
        PyObject *tmp_dict_key_2;
        PyObject *tmp_dict_value_2;
        coroutine->m_frame->m_frame.f_lineno = 395;
        if (Nuitka_Cell_GET(coroutine->m_closure[3]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[27]);
            coroutine_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            CHAIN_EXCEPTION(coroutine_heap->exception_value);

            coroutine_heap->exception_lineno = 395;
            coroutine_heap->type_description_1 = "ccccccccccoooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_41 = Nuitka_Cell_GET(coroutine->m_closure[3]);
        tmp_called_name_13 = LOOKUP_ATTRIBUTE(tmp_expression_name_41, mod_consts[20]);
        if (tmp_called_name_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 395;
            coroutine_heap->type_description_1 = "ccccccccccoooooooooooo";
            goto frame_exception_exit_1;
        }
        if (coroutine_heap->var_msg_id == NULL) {
            Py_DECREF(tmp_called_name_13);
            FORMAT_UNBOUND_LOCAL_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[92]);
            coroutine_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            CHAIN_EXCEPTION(coroutine_heap->exception_value);

            coroutine_heap->exception_lineno = 395;
            coroutine_heap->type_description_1 = "ccccccccccoooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_tuple_element_2 = coroutine_heap->var_msg_id;
        tmp_args_name_2 = PyTuple_New(1);
        PyTuple_SET_ITEM0(tmp_args_name_2, 0, tmp_tuple_element_2);
        tmp_dict_key_2 = mod_consts[21];
        if (Nuitka_Cell_GET(coroutine->m_closure[8]) == NULL) {
            Py_DECREF(tmp_called_name_13);
            Py_DECREF(tmp_args_name_2);
            FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[21]);
            coroutine_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            CHAIN_EXCEPTION(coroutine_heap->exception_value);

            coroutine_heap->exception_lineno = 395;
            coroutine_heap->type_description_1 = "ccccccccccoooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_dict_value_2 = Nuitka_Cell_GET(coroutine->m_closure[8]);
        tmp_kwargs_name_4 = _PyDict_NewPresized( 1 );
        coroutine_heap->tmp_res = PyDict_SetItem(tmp_kwargs_name_4, tmp_dict_key_2, tmp_dict_value_2);
        assert(!(coroutine_heap->tmp_res != 0));
        coroutine->m_frame->m_frame.f_lineno = 395;
        tmp_expression_name_40 = CALL_FUNCTION(tmp_called_name_13, tmp_args_name_2, tmp_kwargs_name_4);
        Py_DECREF(tmp_called_name_13);
        Py_DECREF(tmp_args_name_2);
        Py_DECREF(tmp_kwargs_name_4);
        if (tmp_expression_name_40 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 395;
            coroutine_heap->type_description_1 = "ccccccccccoooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_name_39 = ASYNC_AWAIT(tmp_expression_name_40, await_normal);
        Py_DECREF(tmp_expression_name_40);
        if (tmp_expression_name_39 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 395;
            coroutine_heap->type_description_1 = "ccccccccccoooooooooooo";
            goto frame_exception_exit_1;
        }
        Nuitka_PreserveHeap(coroutine_heap->yield_tmps, &tmp_expression_name_40, sizeof(PyObject *), &tmp_called_name_13, sizeof(PyObject *), &tmp_expression_name_41, sizeof(PyObject *), &tmp_args_name_2, sizeof(PyObject *), &tmp_tuple_element_2, sizeof(PyObject *), &tmp_kwargs_name_4, sizeof(PyObject *), &tmp_dict_key_2, sizeof(PyObject *), &tmp_dict_value_2, sizeof(PyObject *), NULL);
        coroutine->m_yield_return_index = 4;
        coroutine->m_yieldfrom = tmp_expression_name_39;
        coroutine->m_awaiting = true;
        return NULL;

        yield_return_4:
        Nuitka_RestoreHeap(coroutine_heap->yield_tmps, &tmp_expression_name_40, sizeof(PyObject *), &tmp_called_name_13, sizeof(PyObject *), &tmp_expression_name_41, sizeof(PyObject *), &tmp_args_name_2, sizeof(PyObject *), &tmp_tuple_element_2, sizeof(PyObject *), &tmp_kwargs_name_4, sizeof(PyObject *), &tmp_dict_key_2, sizeof(PyObject *), &tmp_dict_value_2, sizeof(PyObject *), NULL);
        coroutine->m_awaiting = false;

        if (yield_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 395;
            coroutine_heap->type_description_1 = "ccccccccccoooooooooooo";
            goto frame_exception_exit_1;
        }
        coroutine_heap->tmp_return_value = yield_return_value;
        if (coroutine_heap->tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 395;
            coroutine_heap->type_description_1 = "ccccccccccoooooooooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

    Nuitka_Frame_MarkAsNotExecuting(coroutine->m_frame);

#if PYTHON_VERSION >= 0x300
    Py_CLEAR(EXC_TYPE_F(coroutine));
    Py_CLEAR(EXC_VALUE_F(coroutine));
    Py_CLEAR(EXC_TRACEBACK_F(coroutine));
#endif

    // Allow re-use of the frame again.
    Py_DECREF(coroutine->m_frame);
    goto frame_no_exception_1;

    frame_return_exit_1:;

#if PYTHON_VERSION >= 0x300
    Py_CLEAR(EXC_TYPE_F(coroutine));
    Py_CLEAR(EXC_VALUE_F(coroutine));
    Py_CLEAR(EXC_TRACEBACK_F(coroutine));
#endif

    Py_DECREF(coroutine->m_frame);
    goto try_return_handler_1;

    frame_exception_exit_1:;

    // If it's not an exit exception, consider and create a traceback for it.
    if (!EXCEPTION_MATCH_GENERATOR(coroutine_heap->exception_type)) {
        if (coroutine_heap->exception_tb == NULL) {
            coroutine_heap->exception_tb = MAKE_TRACEBACK(coroutine->m_frame, coroutine_heap->exception_lineno);
        } else if (coroutine_heap->exception_tb->tb_frame != &coroutine->m_frame->m_frame) {
            coroutine_heap->exception_tb = ADD_TRACEBACK(coroutine_heap->exception_tb, coroutine->m_frame, coroutine_heap->exception_lineno);
        }

        Nuitka_Frame_AttachLocals(
            coroutine->m_frame,
            coroutine_heap->type_description_1,
            coroutine->m_closure[3],
            coroutine->m_closure[1],
            coroutine->m_closure[4],
            coroutine->m_closure[7],
            coroutine->m_closure[9],
            coroutine->m_closure[0],
            coroutine->m_closure[6],
            coroutine->m_closure[8],
            coroutine->m_closure[2],
            coroutine->m_closure[5],
            coroutine_heap->var_msg_id,
            coroutine_heap->var_get_ipython,
            coroutine_heap->var_ip,
            coroutine_heap->var_in_kernel,
            coroutine_heap->var_deadline,
            coroutine_heap->var_timeout_ms,
            coroutine_heap->var_poller,
            coroutine_heap->var_iopub_socket,
            coroutine_heap->var_stdin_socket,
            coroutine_heap->var_events,
            coroutine_heap->var_req,
            coroutine_heap->var_msg
        );


        // Release cached frame if used for exception.
        if (coroutine->m_frame == cache_m_frame) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif

            Py_DECREF(cache_m_frame);
            cache_m_frame = NULL;
        }

        assertFrameObject(coroutine->m_frame);
    }

#if PYTHON_VERSION >= 0x300
    Py_CLEAR(EXC_TYPE_F(coroutine));
    Py_CLEAR(EXC_VALUE_F(coroutine));
    Py_CLEAR(EXC_TRACEBACK_F(coroutine));
#endif

    Py_DECREF(coroutine->m_frame);

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(coroutine_heap->var_msg_id);
    coroutine_heap->var_msg_id = NULL;
    Py_XDECREF(coroutine_heap->var_get_ipython);
    coroutine_heap->var_get_ipython = NULL;
    Py_XDECREF(coroutine_heap->var_ip);
    coroutine_heap->var_ip = NULL;
    Py_XDECREF(coroutine_heap->var_in_kernel);
    coroutine_heap->var_in_kernel = NULL;
    Py_XDECREF(coroutine_heap->var_deadline);
    coroutine_heap->var_deadline = NULL;
    Py_XDECREF(coroutine_heap->var_timeout_ms);
    coroutine_heap->var_timeout_ms = NULL;
    Py_XDECREF(coroutine_heap->var_poller);
    coroutine_heap->var_poller = NULL;
    Py_XDECREF(coroutine_heap->var_iopub_socket);
    coroutine_heap->var_iopub_socket = NULL;
    Py_XDECREF(coroutine_heap->var_stdin_socket);
    coroutine_heap->var_stdin_socket = NULL;
    CHECK_OBJECT(coroutine_heap->var_events);
    Py_DECREF(coroutine_heap->var_events);
    coroutine_heap->var_events = NULL;
    Py_XDECREF(coroutine_heap->var_req);
    coroutine_heap->var_req = NULL;
    CHECK_OBJECT(coroutine_heap->var_msg);
    Py_DECREF(coroutine_heap->var_msg);
    coroutine_heap->var_msg = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    coroutine_heap->exception_keeper_type_1 = coroutine_heap->exception_type;
    coroutine_heap->exception_keeper_value_1 = coroutine_heap->exception_value;
    coroutine_heap->exception_keeper_tb_1 = coroutine_heap->exception_tb;
    coroutine_heap->exception_keeper_lineno_1 = coroutine_heap->exception_lineno;
    coroutine_heap->exception_type = NULL;
    coroutine_heap->exception_value = NULL;
    coroutine_heap->exception_tb = NULL;
    coroutine_heap->exception_lineno = 0;

    Py_XDECREF(coroutine_heap->var_msg_id);
    coroutine_heap->var_msg_id = NULL;
    Py_XDECREF(coroutine_heap->var_get_ipython);
    coroutine_heap->var_get_ipython = NULL;
    Py_XDECREF(coroutine_heap->var_ip);
    coroutine_heap->var_ip = NULL;
    Py_XDECREF(coroutine_heap->var_in_kernel);
    coroutine_heap->var_in_kernel = NULL;
    Py_XDECREF(coroutine_heap->var_deadline);
    coroutine_heap->var_deadline = NULL;
    Py_XDECREF(coroutine_heap->var_timeout_ms);
    coroutine_heap->var_timeout_ms = NULL;
    Py_XDECREF(coroutine_heap->var_poller);
    coroutine_heap->var_poller = NULL;
    Py_XDECREF(coroutine_heap->var_iopub_socket);
    coroutine_heap->var_iopub_socket = NULL;
    Py_XDECREF(coroutine_heap->var_stdin_socket);
    coroutine_heap->var_stdin_socket = NULL;
    Py_XDECREF(coroutine_heap->var_events);
    coroutine_heap->var_events = NULL;
    Py_XDECREF(coroutine_heap->var_req);
    coroutine_heap->var_req = NULL;
    Py_XDECREF(coroutine_heap->var_msg);
    coroutine_heap->var_msg = NULL;
    // Re-raise.
    coroutine_heap->exception_type = coroutine_heap->exception_keeper_type_1;
    coroutine_heap->exception_value = coroutine_heap->exception_keeper_value_1;
    coroutine_heap->exception_tb = coroutine_heap->exception_keeper_tb_1;
    coroutine_heap->exception_lineno = coroutine_heap->exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must be present");

    function_exception_exit:

    assert(coroutine_heap->exception_type);
    RESTORE_ERROR_OCCURRED(coroutine_heap->exception_type, coroutine_heap->exception_value, coroutine_heap->exception_tb);
    return NULL;
    function_return_exit:;

    coroutine->m_returned = coroutine_heap->tmp_return_value;

    return NULL;

}

static PyObject *MAKE_COROUTINE_jupyter_client$asynchronous$client$$$function__14_execute_interactive$$$coroutine__1_execute_interactive(struct Nuitka_CellObject **closure) {
    return Nuitka_Coroutine_New(
        jupyter_client$asynchronous$client$$$function__14_execute_interactive$$$coroutine__1_execute_interactive_context,
        module_jupyter_client$asynchronous$client,
        mod_consts[167],
        mod_consts[168],
        codeobj_58e47f64a944b1052134cadf5b6da5c8,
        closure,
        10,
        sizeof(struct jupyter_client$asynchronous$client$$$function__14_execute_interactive$$$coroutine__1_execute_interactive_locals)
    );
}



static PyObject *MAKE_FUNCTION_jupyter_client$asynchronous$client$$$function__10__stdin_hook_default() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_jupyter_client$asynchronous$client$$$function__10__stdin_hook_default,
        mod_consts[140],
#if PYTHON_VERSION >= 0x300
        mod_consts[226],
#endif
        codeobj_c8e0dad4868b99efa6fa22e042fae6f4,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_jupyter_client$asynchronous$client,
        mod_consts[106],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_jupyter_client$asynchronous$client$$$function__11__output_hook_default() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_jupyter_client$asynchronous$client$$$function__11__output_hook_default,
        mod_consts[122],
#if PYTHON_VERSION >= 0x300
        mod_consts[227],
#endif
        codeobj_8074c8bfaa2b6aa8b7417787c56294a4,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_jupyter_client$asynchronous$client,
        mod_consts[119],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_jupyter_client$asynchronous$client$$$function__12__output_hook_kernel() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_jupyter_client$asynchronous$client$$$function__12__output_hook_kernel,
        mod_consts[148],
#if PYTHON_VERSION >= 0x300
        mod_consts[228],
#endif
        codeobj_080819aaa606d0f419de463623e7e4ed,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_jupyter_client$asynchronous$client,
        mod_consts[123],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_jupyter_client$asynchronous$client$$$function__13_is_alive() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_jupyter_client$asynchronous$client$$$function__13_is_alive,
        mod_consts[66],
#if PYTHON_VERSION >= 0x300
        mod_consts[128],
#endif
        codeobj_6091e52fe828b42924ba834f8791321f,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_jupyter_client$asynchronous$client,
        mod_consts[124],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_jupyter_client$asynchronous$client$$$function__14_execute_interactive(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_jupyter_client$asynchronous$client$$$function__14_execute_interactive,
        mod_consts[167],
#if PYTHON_VERSION >= 0x300
        mod_consts[168],
#endif
        codeobj_58e47f64a944b1052134cadf5b6da5c8,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_jupyter_client$asynchronous$client,
        mod_consts[129],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_jupyter_client$asynchronous$client$$$function__1_reqrep(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_jupyter_client$asynchronous$client$$$function__1_reqrep,
        mod_consts[197],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_b67cfb2e9a1b180620ca2873bb9fbf88,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_jupyter_client$asynchronous$client,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_jupyter_client$asynchronous$client$$$function__1_reqrep$$$function__1_wrapped(struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_jupyter_client$asynchronous$client$$$function__1_reqrep$$$function__1_wrapped,
        mod_consts[0],
#if PYTHON_VERSION >= 0x300
        mod_consts[1],
#endif
        codeobj_d752db6a576e57a83f722af71e20ccf8,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_jupyter_client$asynchronous$client,
        NULL,
        closure,
        2
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_jupyter_client$asynchronous$client$$$function__2__context_default() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_jupyter_client$asynchronous$client$$$function__2__context_default,
        mod_consts[209],
#if PYTHON_VERSION >= 0x300
        mod_consts[210],
#endif
        codeobj_2930e248b63c577e75fc57eb4b6a6531,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_jupyter_client$asynchronous$client,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_jupyter_client$asynchronous$client$$$function__3_get_shell_msg() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_jupyter_client$asynchronous$client$$$function__3_get_shell_msg,
        mod_consts[31],
#if PYTHON_VERSION >= 0x300
        mod_consts[32],
#endif
        codeobj_523f791db65b1794a82d02f1dece36a0,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_jupyter_client$asynchronous$client,
        mod_consts[26],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_jupyter_client$asynchronous$client$$$function__4_get_iopub_msg() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_jupyter_client$asynchronous$client$$$function__4_get_iopub_msg,
        mod_consts[35],
#if PYTHON_VERSION >= 0x300
        mod_consts[36],
#endif
        codeobj_f6c1fbcb99fcd04f0199a6e66f74a97b,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_jupyter_client$asynchronous$client,
        mod_consts[33],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_jupyter_client$asynchronous$client$$$function__5_get_stdin_msg() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_jupyter_client$asynchronous$client$$$function__5_get_stdin_msg,
        mod_consts[39],
#if PYTHON_VERSION >= 0x300
        mod_consts[40],
#endif
        codeobj_79b2badca8d1c3bd1408f545175d0010,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_jupyter_client$asynchronous$client,
        mod_consts[37],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_jupyter_client$asynchronous$client$$$function__6_get_control_msg() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_jupyter_client$asynchronous$client$$$function__6_get_control_msg,
        mod_consts[43],
#if PYTHON_VERSION >= 0x300
        mod_consts[44],
#endif
        codeobj_ba73b7779d13006987ac70246725b466,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_jupyter_client$asynchronous$client,
        mod_consts[41],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_jupyter_client$asynchronous$client$$$function__7_hb_channel() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_jupyter_client$asynchronous$client$$$function__7_hb_channel,
        mod_consts[212],
#if PYTHON_VERSION >= 0x300
        mod_consts[213],
#endif
        codeobj_d4a4ad3ad9cbdbbaa427a9b9d81f1588,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_jupyter_client$asynchronous$client,
        mod_consts[56],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_jupyter_client$asynchronous$client$$$function__8_wait_for_ready(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_jupyter_client$asynchronous$client$$$function__8_wait_for_ready,
        mod_consts[81],
#if PYTHON_VERSION >= 0x300
        mod_consts[82],
#endif
        codeobj_f96273d8f97446e0894f88ce7648e867,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_jupyter_client$asynchronous$client,
        mod_consts[57],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_jupyter_client$asynchronous$client$$$function__9__recv_reply(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_jupyter_client$asynchronous$client$$$function__9__recv_reply,
        mod_consts[20],
#if PYTHON_VERSION >= 0x300
        mod_consts[93],
#endif
        codeobj_75ff3742b5f247f0ceac58315a4b181a,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_jupyter_client$asynchronous$client,
        mod_consts[83],
        NULL,
        0
    );


    return (PyObject *)result;
}


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

function_impl_code functable_jupyter_client$asynchronous$client[] = {
    impl_jupyter_client$asynchronous$client$$$function__1_reqrep$$$function__1_wrapped,
    impl_jupyter_client$asynchronous$client$$$function__1_reqrep,
    impl_jupyter_client$asynchronous$client$$$function__2__context_default,
    impl_jupyter_client$asynchronous$client$$$function__3_get_shell_msg,
    impl_jupyter_client$asynchronous$client$$$function__4_get_iopub_msg,
    impl_jupyter_client$asynchronous$client$$$function__5_get_stdin_msg,
    impl_jupyter_client$asynchronous$client$$$function__6_get_control_msg,
    impl_jupyter_client$asynchronous$client$$$function__7_hb_channel,
    impl_jupyter_client$asynchronous$client$$$function__8_wait_for_ready,
    impl_jupyter_client$asynchronous$client$$$function__9__recv_reply,
    impl_jupyter_client$asynchronous$client$$$function__10__stdin_hook_default,
    impl_jupyter_client$asynchronous$client$$$function__11__output_hook_default,
    impl_jupyter_client$asynchronous$client$$$function__12__output_hook_kernel,
    impl_jupyter_client$asynchronous$client$$$function__13_is_alive,
    impl_jupyter_client$asynchronous$client$$$function__14_execute_interactive,
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

    function_impl_code *current = functable_jupyter_client$asynchronous$client;
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

    if (offset > sizeof(functable_jupyter_client$asynchronous$client) || offset < 0) {
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
        functable_jupyter_client$asynchronous$client[offset],
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
        module_jupyter_client$asynchronous$client,
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
PyObject *modulecode_jupyter_client$asynchronous$client(PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *module_entry) {
    module_jupyter_client$asynchronous$client = module;

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
    PRINT_STRING("jupyter_client.asynchronous.client: Calling setupMetaPathBasedLoader().\n");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 0x300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    PRINT_STRING("jupyter_client.asynchronous.client: Calling createModuleConstants().\n");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    PRINT_STRING("jupyter_client.asynchronous.client: Calling createModuleCodeObjects().\n");
#endif
    createModuleCodeObjects();

    // PRINT_STRING("in initjupyter_client$asynchronous$client\n");

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.

    moduledict_jupyter_client$asynchronous$client = MODULE_DICT(module_jupyter_client$asynchronous$client);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    registerDillPluginTables(module_entry->name, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_jupyter_client$asynchronous$client,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_jupyter_client$asynchronous$client,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_jupyter_client$asynchronous$client, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_jupyter_client$asynchronous$client,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_jupyter_client$asynchronous$client, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_jupyter_client$asynchronous$client,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_jupyter_client$asynchronous$client, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_jupyter_client$asynchronous$client,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_jupyter_client$asynchronous$client);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_jupyter_client$asynchronous$client, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_jupyter_client$asynchronous$client, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

#if PYTHON_VERSION >= 0x300
    UPDATE_STRING_DICT0(moduledict_jupyter_client$asynchronous$client, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);
#endif

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_jupyter_client$asynchronous$client, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(_spec_from_module, module_jupyter_client$asynchronous$client);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_jupyter_client$asynchronous$client, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    PyObject *outline_0_var___class__ = NULL;
    PyObject *tmp_class_creation_1__bases = NULL;
    PyObject *tmp_class_creation_1__bases_orig = NULL;
    PyObject *tmp_class_creation_1__class_decl_dict = NULL;
    PyObject *tmp_class_creation_1__metaclass = NULL;
    PyObject *tmp_class_creation_1__prepared = NULL;
    PyObject *tmp_import_from_1__module = NULL;
    struct Nuitka_FrameObject *frame_85b411fbb0608cd624453f94f8f2155f;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    int tmp_res;
    PyObject *tmp_dictdel_dict;
    PyObject *tmp_dictdel_key;
    PyObject *locals_jupyter_client$asynchronous$client$$$class__1_AsyncKernelClient_59 = NULL;
    PyObject *tmp_dictset_value;
    struct Nuitka_FrameObject *frame_6d127b35f23b3df14c54f6d202df9267_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    static struct Nuitka_FrameObject *cache_frame_6d127b35f23b3df14c54f6d202df9267_2 = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = mod_consts[169];
        UPDATE_STRING_DICT0(moduledict_jupyter_client$asynchronous$client, (Nuitka_StringObject *)mod_consts[2], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = mod_consts[170];
        UPDATE_STRING_DICT0(moduledict_jupyter_client$asynchronous$client, (Nuitka_StringObject *)mod_consts[171], tmp_assign_source_2);
    }
    // Frame without reuse.
    frame_85b411fbb0608cd624453f94f8f2155f = MAKE_MODULE_FRAME(codeobj_85b411fbb0608cd624453f94f8f2155f, module_jupyter_client$asynchronous$client);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack(frame_85b411fbb0608cd624453f94f8f2155f);
    assert(Py_REFCNT(frame_85b411fbb0608cd624453f94f8f2155f) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_name_1 = mod_consts[170];
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_jupyter_client$asynchronous$client, (Nuitka_StringObject *)mod_consts[172]);

        if (unlikely(tmp_assattr_target_1 == NULL)) {
            tmp_assattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[172]);
        }

        assert(!(tmp_assattr_target_1 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[173], tmp_assattr_name_1);
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
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_jupyter_client$asynchronous$client, (Nuitka_StringObject *)mod_consts[172]);

        if (unlikely(tmp_assattr_target_2 == NULL)) {
            tmp_assattr_target_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[172]);
        }

        assert(!(tmp_assattr_target_2 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[174], tmp_assattr_name_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_3;
        tmp_assign_source_3 = Py_None;
        UPDATE_STRING_DICT0(moduledict_jupyter_client$asynchronous$client, (Nuitka_StringObject *)mod_consts[175], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_name_1;
        PyObject *tmp_globals_arg_name_1;
        PyObject *tmp_locals_arg_name_1;
        PyObject *tmp_fromlist_name_1;
        PyObject *tmp_level_name_1;
        tmp_name_name_1 = mod_consts[176];
        tmp_globals_arg_name_1 = (PyObject *)moduledict_jupyter_client$asynchronous$client;
        tmp_locals_arg_name_1 = Py_None;
        tmp_fromlist_name_1 = mod_consts[177];
        tmp_level_name_1 = mod_consts[64];
        frame_85b411fbb0608cd624453f94f8f2155f->m_frame.f_lineno = 5;
        tmp_import_name_from_1 = IMPORT_MODULE5(tmp_name_name_1, tmp_globals_arg_name_1, tmp_locals_arg_name_1, tmp_fromlist_name_1, tmp_level_name_1);
        if (tmp_import_name_from_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_4 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_1,
                (PyObject *)moduledict_jupyter_client$asynchronous$client,
                mod_consts[147],
                mod_consts[64]
            );
        } else {
            tmp_assign_source_4 = IMPORT_NAME(tmp_import_name_from_1, mod_consts[147]);
        }

        Py_DECREF(tmp_import_name_from_1);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_jupyter_client$asynchronous$client, (Nuitka_StringObject *)mod_consts[147], tmp_assign_source_4);
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_import_name_from_2;
        PyObject *tmp_name_name_2;
        PyObject *tmp_globals_arg_name_2;
        PyObject *tmp_locals_arg_name_2;
        PyObject *tmp_fromlist_name_2;
        PyObject *tmp_level_name_2;
        tmp_name_name_2 = mod_consts[96];
        tmp_globals_arg_name_2 = (PyObject *)moduledict_jupyter_client$asynchronous$client;
        tmp_locals_arg_name_2 = Py_None;
        tmp_fromlist_name_2 = mod_consts[178];
        tmp_level_name_2 = mod_consts[64];
        frame_85b411fbb0608cd624453f94f8f2155f->m_frame.f_lineno = 6;
        tmp_import_name_from_2 = IMPORT_MODULE5(tmp_name_name_2, tmp_globals_arg_name_2, tmp_locals_arg_name_2, tmp_fromlist_name_2, tmp_level_name_2);
        if (tmp_import_name_from_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_2)) {
            tmp_assign_source_5 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_2,
                (PyObject *)moduledict_jupyter_client$asynchronous$client,
                mod_consts[96],
                mod_consts[64]
            );
        } else {
            tmp_assign_source_5 = IMPORT_NAME(tmp_import_name_from_2, mod_consts[96]);
        }

        Py_DECREF(tmp_import_name_from_2);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_jupyter_client$asynchronous$client, (Nuitka_StringObject *)mod_consts[96], tmp_assign_source_5);
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_import_name_from_3;
        PyObject *tmp_name_name_3;
        PyObject *tmp_globals_arg_name_3;
        PyObject *tmp_locals_arg_name_3;
        PyObject *tmp_fromlist_name_3;
        PyObject *tmp_level_name_3;
        tmp_name_name_3 = mod_consts[179];
        tmp_globals_arg_name_3 = (PyObject *)moduledict_jupyter_client$asynchronous$client;
        tmp_locals_arg_name_3 = Py_None;
        tmp_fromlist_name_3 = mod_consts[180];
        tmp_level_name_3 = mod_consts[64];
        frame_85b411fbb0608cd624453f94f8f2155f->m_frame.f_lineno = 7;
        tmp_import_name_from_3 = IMPORT_MODULE5(tmp_name_name_3, tmp_globals_arg_name_3, tmp_locals_arg_name_3, tmp_fromlist_name_3, tmp_level_name_3);
        if (tmp_import_name_from_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 7;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_3)) {
            tmp_assign_source_6 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_3,
                (PyObject *)moduledict_jupyter_client$asynchronous$client,
                mod_consts[73],
                mod_consts[64]
            );
        } else {
            tmp_assign_source_6 = IMPORT_NAME(tmp_import_name_from_3, mod_consts[73]);
        }

        Py_DECREF(tmp_import_name_from_3);
        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 7;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_jupyter_client$asynchronous$client, (Nuitka_StringObject *)mod_consts[73], tmp_assign_source_6);
    }
    {
        PyObject *tmp_assign_source_7;
        frame_85b411fbb0608cd624453f94f8f2155f->m_frame.f_lineno = 8;
        tmp_assign_source_7 = IMPORT_HARD_SYS();
        assert(!(tmp_assign_source_7 == NULL));
        UPDATE_STRING_DICT0(moduledict_jupyter_client$asynchronous$client, (Nuitka_StringObject *)mod_consts[100], tmp_assign_source_7);
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_name_name_4;
        PyObject *tmp_globals_arg_name_4;
        PyObject *tmp_locals_arg_name_4;
        PyObject *tmp_fromlist_name_4;
        PyObject *tmp_level_name_4;
        tmp_name_name_4 = mod_consts[59];
        tmp_globals_arg_name_4 = (PyObject *)moduledict_jupyter_client$asynchronous$client;
        tmp_locals_arg_name_4 = Py_None;
        tmp_fromlist_name_4 = Py_None;
        tmp_level_name_4 = mod_consts[64];
        frame_85b411fbb0608cd624453f94f8f2155f->m_frame.f_lineno = 9;
        tmp_assign_source_8 = IMPORT_MODULE5(tmp_name_name_4, tmp_globals_arg_name_4, tmp_locals_arg_name_4, tmp_fromlist_name_4, tmp_level_name_4);
        assert(!(tmp_assign_source_8 == NULL));
        UPDATE_STRING_DICT1(moduledict_jupyter_client$asynchronous$client, (Nuitka_StringObject *)mod_consts[59], tmp_assign_source_8);
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_name_name_5;
        PyObject *tmp_globals_arg_name_5;
        PyObject *tmp_locals_arg_name_5;
        PyObject *tmp_fromlist_name_5;
        PyObject *tmp_level_name_5;
        tmp_name_name_5 = mod_consts[23];
        tmp_globals_arg_name_5 = (PyObject *)moduledict_jupyter_client$asynchronous$client;
        tmp_locals_arg_name_5 = Py_None;
        tmp_fromlist_name_5 = Py_None;
        tmp_level_name_5 = mod_consts[64];
        frame_85b411fbb0608cd624453f94f8f2155f->m_frame.f_lineno = 11;
        tmp_assign_source_9 = IMPORT_MODULE5(tmp_name_name_5, tmp_globals_arg_name_5, tmp_locals_arg_name_5, tmp_fromlist_name_5, tmp_level_name_5);
        if (tmp_assign_source_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 11;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_jupyter_client$asynchronous$client, (Nuitka_StringObject *)mod_consts[23], tmp_assign_source_9);
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_name_name_6;
        PyObject *tmp_globals_arg_name_6;
        PyObject *tmp_locals_arg_name_6;
        PyObject *tmp_fromlist_name_6;
        PyObject *tmp_level_name_6;
        tmp_name_name_6 = mod_consts[181];
        tmp_globals_arg_name_6 = (PyObject *)moduledict_jupyter_client$asynchronous$client;
        tmp_locals_arg_name_6 = Py_None;
        tmp_fromlist_name_6 = Py_None;
        tmp_level_name_6 = mod_consts[64];
        frame_85b411fbb0608cd624453f94f8f2155f->m_frame.f_lineno = 12;
        tmp_assign_source_10 = IMPORT_MODULE5(tmp_name_name_6, tmp_globals_arg_name_6, tmp_locals_arg_name_6, tmp_fromlist_name_6, tmp_level_name_6);
        if (tmp_assign_source_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 12;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_jupyter_client$asynchronous$client, (Nuitka_StringObject *)mod_consts[23], tmp_assign_source_10);
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_name_name_7;
        PyObject *tmp_globals_arg_name_7;
        PyObject *tmp_locals_arg_name_7;
        PyObject *tmp_fromlist_name_7;
        PyObject *tmp_level_name_7;
        tmp_name_name_7 = mod_consts[24];
        tmp_globals_arg_name_7 = (PyObject *)moduledict_jupyter_client$asynchronous$client;
        tmp_locals_arg_name_7 = Py_None;
        tmp_fromlist_name_7 = Py_None;
        tmp_level_name_7 = mod_consts[64];
        frame_85b411fbb0608cd624453f94f8f2155f->m_frame.f_lineno = 13;
        tmp_assign_source_11 = IMPORT_MODULE5(tmp_name_name_7, tmp_globals_arg_name_7, tmp_locals_arg_name_7, tmp_fromlist_name_7, tmp_level_name_7);
        if (tmp_assign_source_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 13;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_jupyter_client$asynchronous$client, (Nuitka_StringObject *)mod_consts[24], tmp_assign_source_11);
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_name_name_8;
        PyObject *tmp_globals_arg_name_8;
        PyObject *tmp_locals_arg_name_8;
        PyObject *tmp_fromlist_name_8;
        PyObject *tmp_level_name_8;
        tmp_name_name_8 = mod_consts[182];
        tmp_globals_arg_name_8 = (PyObject *)moduledict_jupyter_client$asynchronous$client;
        tmp_locals_arg_name_8 = Py_None;
        tmp_fromlist_name_8 = mod_consts[183];
        tmp_level_name_8 = mod_consts[64];
        frame_85b411fbb0608cd624453f94f8f2155f->m_frame.f_lineno = 15;
        tmp_assign_source_12 = IMPORT_MODULE5(tmp_name_name_8, tmp_globals_arg_name_8, tmp_locals_arg_name_8, tmp_fromlist_name_8, tmp_level_name_8);
        if (tmp_assign_source_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 15;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_1__module == NULL);
        tmp_import_from_1__module = tmp_assign_source_12;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_import_name_from_4;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_4 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_4)) {
            tmp_assign_source_13 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_4,
                (PyObject *)moduledict_jupyter_client$asynchronous$client,
                mod_consts[184],
                mod_consts[64]
            );
        } else {
            tmp_assign_source_13 = IMPORT_NAME(tmp_import_name_from_4, mod_consts[184]);
        }

        if (tmp_assign_source_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 15;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_jupyter_client$asynchronous$client, (Nuitka_StringObject *)mod_consts[184], tmp_assign_source_13);
    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_import_name_from_5;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_5 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_5)) {
            tmp_assign_source_14 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_5,
                (PyObject *)moduledict_jupyter_client$asynchronous$client,
                mod_consts[185],
                mod_consts[64]
            );
        } else {
            tmp_assign_source_14 = IMPORT_NAME(tmp_import_name_from_5, mod_consts[185]);
        }

        if (tmp_assign_source_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 15;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_jupyter_client$asynchronous$client, (Nuitka_StringObject *)mod_consts[185], tmp_assign_source_14);
    }
    goto try_end_1;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_import_from_1__module);
    Py_DECREF(tmp_import_from_1__module);
    tmp_import_from_1__module = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;
    CHECK_OBJECT(tmp_import_from_1__module);
    Py_DECREF(tmp_import_from_1__module);
    tmp_import_from_1__module = NULL;
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_import_name_from_6;
        PyObject *tmp_name_name_9;
        PyObject *tmp_globals_arg_name_9;
        PyObject *tmp_locals_arg_name_9;
        PyObject *tmp_fromlist_name_9;
        PyObject *tmp_level_name_9;
        tmp_name_name_9 = mod_consts[186];
        tmp_globals_arg_name_9 = (PyObject *)moduledict_jupyter_client$asynchronous$client;
        tmp_locals_arg_name_9 = Py_None;
        tmp_fromlist_name_9 = mod_consts[187];
        tmp_level_name_9 = mod_consts[64];
        frame_85b411fbb0608cd624453f94f8f2155f->m_frame.f_lineno = 16;
        tmp_import_name_from_6 = IMPORT_MODULE5(tmp_name_name_9, tmp_globals_arg_name_9, tmp_locals_arg_name_9, tmp_fromlist_name_9, tmp_level_name_9);
        if (tmp_import_name_from_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 16;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_6)) {
            tmp_assign_source_15 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_6,
                (PyObject *)moduledict_jupyter_client$asynchronous$client,
                mod_consts[188],
                mod_consts[64]
            );
        } else {
            tmp_assign_source_15 = IMPORT_NAME(tmp_import_name_from_6, mod_consts[188]);
        }

        Py_DECREF(tmp_import_name_from_6);
        if (tmp_assign_source_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 16;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_jupyter_client$asynchronous$client, (Nuitka_StringObject *)mod_consts[188], tmp_assign_source_15);
    }
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_import_name_from_7;
        PyObject *tmp_name_name_10;
        PyObject *tmp_globals_arg_name_10;
        PyObject *tmp_locals_arg_name_10;
        PyObject *tmp_fromlist_name_10;
        PyObject *tmp_level_name_10;
        tmp_name_name_10 = mod_consts[189];
        tmp_globals_arg_name_10 = (PyObject *)moduledict_jupyter_client$asynchronous$client;
        tmp_locals_arg_name_10 = Py_None;
        tmp_fromlist_name_10 = mod_consts[190];
        tmp_level_name_10 = mod_consts[64];
        frame_85b411fbb0608cd624453f94f8f2155f->m_frame.f_lineno = 17;
        tmp_import_name_from_7 = IMPORT_MODULE5(tmp_name_name_10, tmp_globals_arg_name_10, tmp_locals_arg_name_10, tmp_fromlist_name_10, tmp_level_name_10);
        if (tmp_import_name_from_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 17;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_7)) {
            tmp_assign_source_16 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_7,
                (PyObject *)moduledict_jupyter_client$asynchronous$client,
                mod_consts[191],
                mod_consts[64]
            );
        } else {
            tmp_assign_source_16 = IMPORT_NAME(tmp_import_name_from_7, mod_consts[191]);
        }

        Py_DECREF(tmp_import_name_from_7);
        if (tmp_assign_source_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 17;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_jupyter_client$asynchronous$client, (Nuitka_StringObject *)mod_consts[191], tmp_assign_source_16);
    }
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_import_name_from_8;
        PyObject *tmp_name_name_11;
        PyObject *tmp_globals_arg_name_11;
        PyObject *tmp_locals_arg_name_11;
        PyObject *tmp_fromlist_name_11;
        PyObject *tmp_level_name_11;
        tmp_name_name_11 = mod_consts[192];
        tmp_globals_arg_name_11 = (PyObject *)moduledict_jupyter_client$asynchronous$client;
        tmp_locals_arg_name_11 = Py_None;
        tmp_fromlist_name_11 = mod_consts[193];
        tmp_level_name_11 = mod_consts[194];
        frame_85b411fbb0608cd624453f94f8f2155f->m_frame.f_lineno = 18;
        tmp_import_name_from_8 = IMPORT_MODULE5(tmp_name_name_11, tmp_globals_arg_name_11, tmp_locals_arg_name_11, tmp_fromlist_name_11, tmp_level_name_11);
        if (tmp_import_name_from_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 18;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_8)) {
            tmp_assign_source_17 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_8,
                (PyObject *)moduledict_jupyter_client$asynchronous$client,
                mod_consts[195],
                mod_consts[64]
            );
        } else {
            tmp_assign_source_17 = IMPORT_NAME(tmp_import_name_from_8, mod_consts[195]);
        }

        Py_DECREF(tmp_import_name_from_8);
        if (tmp_assign_source_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 18;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_jupyter_client$asynchronous$client, (Nuitka_StringObject *)mod_consts[195], tmp_assign_source_17);
    }
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_defaults_1;
        tmp_defaults_1 = mod_consts[196];
        Py_INCREF(tmp_defaults_1);


        tmp_assign_source_18 = MAKE_FUNCTION_jupyter_client$asynchronous$client$$$function__1_reqrep(tmp_defaults_1);

        UPDATE_STRING_DICT1(moduledict_jupyter_client$asynchronous$client, (Nuitka_StringObject *)mod_consts[197], tmp_assign_source_18);
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_tuple_element_1;
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_jupyter_client$asynchronous$client, (Nuitka_StringObject *)mod_consts[191]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[191]);
        }

        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 59;

            goto try_except_handler_2;
        }
        tmp_assign_source_19 = PyTuple_New(1);
        PyTuple_SET_ITEM0(tmp_assign_source_19, 0, tmp_tuple_element_1);
        assert(tmp_class_creation_1__bases_orig == NULL);
        tmp_class_creation_1__bases_orig = tmp_assign_source_19;
    }
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_dircall_arg1_1;
        CHECK_OBJECT(tmp_class_creation_1__bases_orig);
        tmp_dircall_arg1_1 = tmp_class_creation_1__bases_orig;
        Py_INCREF(tmp_dircall_arg1_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1};
            tmp_assign_source_20 = impl___main__$$$function__1__mro_entries_conversion(dir_call_args);
        }
        if (tmp_assign_source_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 59;

            goto try_except_handler_2;
        }
        assert(tmp_class_creation_1__bases == NULL);
        tmp_class_creation_1__bases = tmp_assign_source_20;
    }
    {
        PyObject *tmp_assign_source_21;
        tmp_assign_source_21 = PyDict_New();
        assert(tmp_class_creation_1__class_decl_dict == NULL);
        tmp_class_creation_1__class_decl_dict = tmp_assign_source_21;
    }
    {
        PyObject *tmp_assign_source_22;
        PyObject *tmp_metaclass_name_1;
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_key_name_1;
        PyObject *tmp_dict_arg_name_1;
        PyObject *tmp_dict_arg_name_2;
        PyObject *tmp_key_name_2;
        nuitka_bool tmp_condition_result_2;
        int tmp_truth_name_1;
        PyObject *tmp_type_arg_1;
        PyObject *tmp_expression_name_1;
        PyObject *tmp_subscript_name_1;
        PyObject *tmp_bases_name_1;
        tmp_key_name_1 = mod_consts[198];
        CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
        tmp_dict_arg_name_1 = tmp_class_creation_1__class_decl_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_arg_name_1, tmp_key_name_1);
        assert(!(tmp_res == -1));
        tmp_condition_result_1 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_1;
        } else {
            goto condexpr_false_1;
        }
        condexpr_true_1:;
        CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
        tmp_dict_arg_name_2 = tmp_class_creation_1__class_decl_dict;
        tmp_key_name_2 = mod_consts[198];
        tmp_metaclass_name_1 = DICT_GET_ITEM_WITH_ERROR(tmp_dict_arg_name_2, tmp_key_name_2);
        if (tmp_metaclass_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 59;

            goto try_except_handler_2;
        }
        goto condexpr_end_1;
        condexpr_false_1:;
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_class_creation_1__bases);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 59;

            goto try_except_handler_2;
        }
        tmp_condition_result_2 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_2;
        } else {
            goto condexpr_false_2;
        }
        condexpr_true_2:;
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_expression_name_1 = tmp_class_creation_1__bases;
        tmp_subscript_name_1 = mod_consts[64];
        tmp_type_arg_1 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_name_1, tmp_subscript_name_1, 0);
        if (tmp_type_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 59;

            goto try_except_handler_2;
        }
        tmp_metaclass_name_1 = BUILTIN_TYPE1(tmp_type_arg_1);
        Py_DECREF(tmp_type_arg_1);
        if (tmp_metaclass_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 59;

            goto try_except_handler_2;
        }
        goto condexpr_end_2;
        condexpr_false_2:;
        tmp_metaclass_name_1 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_name_1);
        condexpr_end_2:;
        condexpr_end_1:;
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_bases_name_1 = tmp_class_creation_1__bases;
        tmp_assign_source_22 = SELECT_METACLASS(tmp_metaclass_name_1, tmp_bases_name_1);
        Py_DECREF(tmp_metaclass_name_1);
        if (tmp_assign_source_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 59;

            goto try_except_handler_2;
        }
        assert(tmp_class_creation_1__metaclass == NULL);
        tmp_class_creation_1__metaclass = tmp_assign_source_22;
    }
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_key_name_3;
        PyObject *tmp_dict_arg_name_3;
        tmp_key_name_3 = mod_consts[198];
        CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
        tmp_dict_arg_name_3 = tmp_class_creation_1__class_decl_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_arg_name_3, tmp_key_name_3);
        assert(!(tmp_res == -1));
        tmp_condition_result_3 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
    tmp_dictdel_dict = tmp_class_creation_1__class_decl_dict;
    tmp_dictdel_key = mod_consts[198];
    tmp_result = DICT_REMOVE_ITEM(tmp_dictdel_dict, tmp_dictdel_key);
    if (tmp_result == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 59;

        goto try_except_handler_2;
    }
    branch_no_1:;
    {
        nuitka_bool tmp_condition_result_4;
        PyObject *tmp_expression_name_2;
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_expression_name_2 = tmp_class_creation_1__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_name_2, mod_consts[199]);
        tmp_condition_result_4 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_assign_source_23;
        PyObject *tmp_called_name_1;
        PyObject *tmp_expression_name_3;
        PyObject *tmp_args_name_1;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_kwargs_name_1;
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_expression_name_3 = tmp_class_creation_1__metaclass;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_3, mod_consts[199]);
        if (tmp_called_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 59;

            goto try_except_handler_2;
        }
        tmp_tuple_element_2 = mod_consts[200];
        tmp_args_name_1 = PyTuple_New(2);
        PyTuple_SET_ITEM0(tmp_args_name_1, 0, tmp_tuple_element_2);
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_tuple_element_2 = tmp_class_creation_1__bases;
        PyTuple_SET_ITEM0(tmp_args_name_1, 1, tmp_tuple_element_2);
        CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
        tmp_kwargs_name_1 = tmp_class_creation_1__class_decl_dict;
        frame_85b411fbb0608cd624453f94f8f2155f->m_frame.f_lineno = 59;
        tmp_assign_source_23 = CALL_FUNCTION(tmp_called_name_1, tmp_args_name_1, tmp_kwargs_name_1);
        Py_DECREF(tmp_called_name_1);
        Py_DECREF(tmp_args_name_1);
        if (tmp_assign_source_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 59;

            goto try_except_handler_2;
        }
        assert(tmp_class_creation_1__prepared == NULL);
        tmp_class_creation_1__prepared = tmp_assign_source_23;
    }
    {
        nuitka_bool tmp_condition_result_5;
        PyObject *tmp_operand_name_1;
        PyObject *tmp_expression_name_4;
        CHECK_OBJECT(tmp_class_creation_1__prepared);
        tmp_expression_name_4 = tmp_class_creation_1__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_name_4, mod_consts[201]);
        tmp_operand_name_1 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_name_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 59;

            goto try_except_handler_2;
        }
        tmp_condition_result_5 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_raise_value_1;
        PyObject *tmp_left_name_1;
        PyObject *tmp_right_name_1;
        PyObject *tmp_tuple_element_3;
        PyObject *tmp_getattr_target_1;
        PyObject *tmp_getattr_attr_1;
        PyObject *tmp_getattr_default_1;
        tmp_raise_type_1 = PyExc_TypeError;
        tmp_left_name_1 = mod_consts[202];
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_getattr_target_1 = tmp_class_creation_1__metaclass;
        tmp_getattr_attr_1 = mod_consts[203];
        tmp_getattr_default_1 = mod_consts[204];
        tmp_tuple_element_3 = BUILTIN_GETATTR(tmp_getattr_target_1, tmp_getattr_attr_1, tmp_getattr_default_1);
        if (tmp_tuple_element_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 59;

            goto try_except_handler_2;
        }
        tmp_right_name_1 = PyTuple_New(2);
        {
            PyObject *tmp_expression_name_5;
            PyObject *tmp_type_arg_2;
            PyTuple_SET_ITEM(tmp_right_name_1, 0, tmp_tuple_element_3);
            CHECK_OBJECT(tmp_class_creation_1__prepared);
            tmp_type_arg_2 = tmp_class_creation_1__prepared;
            tmp_expression_name_5 = BUILTIN_TYPE1(tmp_type_arg_2);
            assert(!(tmp_expression_name_5 == NULL));
            tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tmp_expression_name_5, mod_consts[203]);
            Py_DECREF(tmp_expression_name_5);
            if (tmp_tuple_element_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 59;

                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_right_name_1, 1, tmp_tuple_element_3);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_right_name_1);
        goto try_except_handler_2;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_raise_value_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_left_name_1, tmp_right_name_1);
        Py_DECREF(tmp_right_name_1);
        if (tmp_raise_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 59;

            goto try_except_handler_2;
        }
        exception_type = tmp_raise_type_1;
        Py_INCREF(tmp_raise_type_1);
        exception_value = tmp_raise_value_1;
        exception_lineno = 59;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_2;
    }
    branch_no_3:;
    goto branch_end_2;
    branch_no_2:;
    {
        PyObject *tmp_assign_source_24;
        tmp_assign_source_24 = PyDict_New();
        assert(tmp_class_creation_1__prepared == NULL);
        tmp_class_creation_1__prepared = tmp_assign_source_24;
    }
    branch_end_2:;
    {
        PyObject *tmp_assign_source_25;
        {
            PyObject *tmp_set_locals_1;
            CHECK_OBJECT(tmp_class_creation_1__prepared);
            tmp_set_locals_1 = tmp_class_creation_1__prepared;
            locals_jupyter_client$asynchronous$client$$$class__1_AsyncKernelClient_59 = tmp_set_locals_1;
            Py_INCREF(tmp_set_locals_1);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[205];
        tmp_res = PyObject_SetItem(locals_jupyter_client$asynchronous$client$$$class__1_AsyncKernelClient_59, mod_consts[206], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 59;

            goto try_except_handler_4;
        }
        tmp_dictset_value = mod_consts[207];
        tmp_res = PyObject_SetItem(locals_jupyter_client$asynchronous$client$$$class__1_AsyncKernelClient_59, mod_consts[2], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 59;

            goto try_except_handler_4;
        }
        tmp_dictset_value = mod_consts[200];
        tmp_res = PyObject_SetItem(locals_jupyter_client$asynchronous$client$$$class__1_AsyncKernelClient_59, mod_consts[208], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 59;

            goto try_except_handler_4;
        }
        if (isFrameUnusable(cache_frame_6d127b35f23b3df14c54f6d202df9267_2)) {
            Py_XDECREF(cache_frame_6d127b35f23b3df14c54f6d202df9267_2);

#if _DEBUG_REFCOUNTS
            if (cache_frame_6d127b35f23b3df14c54f6d202df9267_2 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_6d127b35f23b3df14c54f6d202df9267_2 = MAKE_FUNCTION_FRAME(codeobj_6d127b35f23b3df14c54f6d202df9267, module_jupyter_client$asynchronous$client, sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }
        assert(cache_frame_6d127b35f23b3df14c54f6d202df9267_2->m_type_description == NULL);
        frame_6d127b35f23b3df14c54f6d202df9267_2 = cache_frame_6d127b35f23b3df14c54f6d202df9267_2;

        // Push the new frame as the currently active one.
        pushFrameStack(frame_6d127b35f23b3df14c54f6d202df9267_2);

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert(Py_REFCNT(frame_6d127b35f23b3df14c54f6d202df9267_2) == 2); // Frame stack

        // Framed code:
        {
            PyObject *tmp_called_name_2;
            PyObject *tmp_args_element_name_1;
            PyObject *tmp_expression_name_6;
            PyObject *tmp_expression_name_7;
            tmp_called_name_2 = PyObject_GetItem(locals_jupyter_client$asynchronous$client$$$class__1_AsyncKernelClient_59, mod_consts[185]);

            if (tmp_called_name_2 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_name_2 = GET_STRING_DICT_VALUE(moduledict_jupyter_client$asynchronous$client, (Nuitka_StringObject *)mod_consts[185]);

                    if (unlikely(tmp_called_name_2 == NULL)) {
                        tmp_called_name_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[185]);
                    }

                    if (tmp_called_name_2 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 67;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_called_name_2);
                }
            }

            tmp_expression_name_7 = PyObject_GetItem(locals_jupyter_client$asynchronous$client$$$class__1_AsyncKernelClient_59, mod_consts[23]);

            if (tmp_expression_name_7 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_name_7 = GET_STRING_DICT_VALUE(moduledict_jupyter_client$asynchronous$client, (Nuitka_StringObject *)mod_consts[23]);

                    if (unlikely(tmp_expression_name_7 == NULL)) {
                        tmp_expression_name_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
                    }

                    if (tmp_expression_name_7 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_name_2);

                        exception_lineno = 67;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_expression_name_7);
                }
            }

            tmp_expression_name_6 = LOOKUP_ATTRIBUTE(tmp_expression_name_7, mod_consts[24]);
            Py_DECREF(tmp_expression_name_7);
            if (tmp_expression_name_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_name_2);

                exception_lineno = 67;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_args_element_name_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_6, mod_consts[25]);
            Py_DECREF(tmp_expression_name_6);
            if (tmp_args_element_name_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_name_2);

                exception_lineno = 67;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            frame_6d127b35f23b3df14c54f6d202df9267_2->m_frame.f_lineno = 67;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_2, tmp_args_element_name_1);
            Py_DECREF(tmp_called_name_2);
            Py_DECREF(tmp_args_element_name_1);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 67;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_jupyter_client$asynchronous$client$$$class__1_AsyncKernelClient_59, mod_consts[53], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 67;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }


        tmp_dictset_value = MAKE_FUNCTION_jupyter_client$asynchronous$client$$$function__2__context_default();

        tmp_res = PyObject_SetItem(locals_jupyter_client$asynchronous$client$$$class__1_AsyncKernelClient_59, mod_consts[209], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 68;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION_jupyter_client$asynchronous$client$$$function__3_get_shell_msg();

        tmp_res = PyObject_SetItem(locals_jupyter_client$asynchronous$client$$$class__1_AsyncKernelClient_59, mod_consts[31], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 75;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION_jupyter_client$asynchronous$client$$$function__4_get_iopub_msg();

        tmp_res = PyObject_SetItem(locals_jupyter_client$asynchronous$client$$$class__1_AsyncKernelClient_59, mod_consts[35], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 79;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION_jupyter_client$asynchronous$client$$$function__5_get_stdin_msg();

        tmp_res = PyObject_SetItem(locals_jupyter_client$asynchronous$client$$$class__1_AsyncKernelClient_59, mod_consts[39], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 83;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION_jupyter_client$asynchronous$client$$$function__6_get_control_msg();

        tmp_res = PyObject_SetItem(locals_jupyter_client$asynchronous$client$$$class__1_AsyncKernelClient_59, mod_consts[43], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 87;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        {
            nuitka_bool tmp_condition_result_6;
            PyObject *tmp_called_name_3;
            PyObject *tmp_args_element_name_2;
            PyObject *tmp_called_name_4;
            PyObject *tmp_args_element_name_3;
            tmp_res = MAPPING_HAS_ITEM(locals_jupyter_client$asynchronous$client$$$class__1_AsyncKernelClient_59, mod_consts[211]);

            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 91;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_condition_result_6 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_6 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_3;
            } else {
                goto condexpr_false_3;
            }
            condexpr_true_3:;
            tmp_called_name_3 = PyObject_GetItem(locals_jupyter_client$asynchronous$client$$$class__1_AsyncKernelClient_59, mod_consts[211]);

            if (unlikely(tmp_called_name_3 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[211]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 91;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_called_name_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 91;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }


            tmp_args_element_name_2 = MAKE_FUNCTION_jupyter_client$asynchronous$client$$$function__7_hb_channel();

            frame_6d127b35f23b3df14c54f6d202df9267_2->m_frame.f_lineno = 91;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_3, tmp_args_element_name_2);
            Py_DECREF(tmp_called_name_3);
            Py_DECREF(tmp_args_element_name_2);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 91;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            goto condexpr_end_3;
            condexpr_false_3:;
            tmp_called_name_4 = (PyObject *)&PyProperty_Type;


            tmp_args_element_name_3 = MAKE_FUNCTION_jupyter_client$asynchronous$client$$$function__7_hb_channel();

            frame_6d127b35f23b3df14c54f6d202df9267_2->m_frame.f_lineno = 91;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_4, tmp_args_element_name_3);
            Py_DECREF(tmp_args_element_name_3);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 91;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            condexpr_end_3:;
            tmp_res = PyObject_SetItem(locals_jupyter_client$asynchronous$client$$$class__1_AsyncKernelClient_59, mod_consts[212], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 92;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_defaults_2;
            tmp_defaults_2 = mod_consts[214];
            Py_INCREF(tmp_defaults_2);


            tmp_dictset_value = MAKE_FUNCTION_jupyter_client$asynchronous$client$$$function__8_wait_for_ready(tmp_defaults_2);

            tmp_res = PyObject_SetItem(locals_jupyter_client$asynchronous$client$$$class__1_AsyncKernelClient_59, mod_consts[81], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 103;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_name_5;
            PyObject *tmp_args_element_name_4;
            tmp_called_name_5 = PyObject_GetItem(locals_jupyter_client$asynchronous$client$$$class__1_AsyncKernelClient_59, mod_consts[184]);

            if (tmp_called_name_5 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_name_5 = GET_STRING_DICT_VALUE(moduledict_jupyter_client$asynchronous$client, (Nuitka_StringObject *)mod_consts[184]);

                    if (unlikely(tmp_called_name_5 == NULL)) {
                        tmp_called_name_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[184]);
                    }

                    if (tmp_called_name_5 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 160;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_called_name_5);
                }
            }

            tmp_args_element_name_4 = PyObject_GetItem(locals_jupyter_client$asynchronous$client$$$class__1_AsyncKernelClient_59, mod_consts[195]);

            if (tmp_args_element_name_4 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_args_element_name_4 = GET_STRING_DICT_VALUE(moduledict_jupyter_client$asynchronous$client, (Nuitka_StringObject *)mod_consts[195]);

                    if (unlikely(tmp_args_element_name_4 == NULL)) {
                        tmp_args_element_name_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[195]);
                    }

                    if (tmp_args_element_name_4 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_name_5);

                        exception_lineno = 160;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_args_element_name_4);
                }
            }

            frame_6d127b35f23b3df14c54f6d202df9267_2->m_frame.f_lineno = 160;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_5, tmp_args_element_name_4);
            Py_DECREF(tmp_called_name_5);
            Py_DECREF(tmp_args_element_name_4);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 160;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_jupyter_client$asynchronous$client$$$class__1_AsyncKernelClient_59, mod_consts[215], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 160;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_name_6;
            PyObject *tmp_args_element_name_5;
            tmp_called_name_6 = PyObject_GetItem(locals_jupyter_client$asynchronous$client$$$class__1_AsyncKernelClient_59, mod_consts[184]);

            if (tmp_called_name_6 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_name_6 = GET_STRING_DICT_VALUE(moduledict_jupyter_client$asynchronous$client, (Nuitka_StringObject *)mod_consts[184]);

                    if (unlikely(tmp_called_name_6 == NULL)) {
                        tmp_called_name_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[184]);
                    }

                    if (tmp_called_name_6 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 161;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_called_name_6);
                }
            }

            tmp_args_element_name_5 = PyObject_GetItem(locals_jupyter_client$asynchronous$client$$$class__1_AsyncKernelClient_59, mod_consts[195]);

            if (tmp_args_element_name_5 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_args_element_name_5 = GET_STRING_DICT_VALUE(moduledict_jupyter_client$asynchronous$client, (Nuitka_StringObject *)mod_consts[195]);

                    if (unlikely(tmp_args_element_name_5 == NULL)) {
                        tmp_args_element_name_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[195]);
                    }

                    if (tmp_args_element_name_5 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_name_6);

                        exception_lineno = 161;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_args_element_name_5);
                }
            }

            frame_6d127b35f23b3df14c54f6d202df9267_2->m_frame.f_lineno = 161;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_6, tmp_args_element_name_5);
            Py_DECREF(tmp_called_name_6);
            Py_DECREF(tmp_args_element_name_5);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 161;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_jupyter_client$asynchronous$client$$$class__1_AsyncKernelClient_59, mod_consts[216], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 161;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_name_7;
            PyObject *tmp_args_element_name_6;
            tmp_called_name_7 = PyObject_GetItem(locals_jupyter_client$asynchronous$client$$$class__1_AsyncKernelClient_59, mod_consts[184]);

            if (tmp_called_name_7 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_name_7 = GET_STRING_DICT_VALUE(moduledict_jupyter_client$asynchronous$client, (Nuitka_StringObject *)mod_consts[184]);

                    if (unlikely(tmp_called_name_7 == NULL)) {
                        tmp_called_name_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[184]);
                    }

                    if (tmp_called_name_7 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 162;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_called_name_7);
                }
            }

            tmp_args_element_name_6 = PyObject_GetItem(locals_jupyter_client$asynchronous$client$$$class__1_AsyncKernelClient_59, mod_consts[195]);

            if (tmp_args_element_name_6 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_args_element_name_6 = GET_STRING_DICT_VALUE(moduledict_jupyter_client$asynchronous$client, (Nuitka_StringObject *)mod_consts[195]);

                    if (unlikely(tmp_args_element_name_6 == NULL)) {
                        tmp_args_element_name_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[195]);
                    }

                    if (tmp_args_element_name_6 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_name_7);

                        exception_lineno = 162;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_args_element_name_6);
                }
            }

            frame_6d127b35f23b3df14c54f6d202df9267_2->m_frame.f_lineno = 162;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_7, tmp_args_element_name_6);
            Py_DECREF(tmp_called_name_7);
            Py_DECREF(tmp_args_element_name_6);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 162;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_jupyter_client$asynchronous$client$$$class__1_AsyncKernelClient_59, mod_consts[217], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 162;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_name_8;
            PyObject *tmp_args_element_name_7;
            tmp_called_name_8 = PyObject_GetItem(locals_jupyter_client$asynchronous$client$$$class__1_AsyncKernelClient_59, mod_consts[184]);

            if (tmp_called_name_8 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_name_8 = GET_STRING_DICT_VALUE(moduledict_jupyter_client$asynchronous$client, (Nuitka_StringObject *)mod_consts[184]);

                    if (unlikely(tmp_called_name_8 == NULL)) {
                        tmp_called_name_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[184]);
                    }

                    if (tmp_called_name_8 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 163;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_called_name_8);
                }
            }

            tmp_args_element_name_7 = PyObject_GetItem(locals_jupyter_client$asynchronous$client$$$class__1_AsyncKernelClient_59, mod_consts[188]);

            if (tmp_args_element_name_7 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_args_element_name_7 = GET_STRING_DICT_VALUE(moduledict_jupyter_client$asynchronous$client, (Nuitka_StringObject *)mod_consts[188]);

                    if (unlikely(tmp_args_element_name_7 == NULL)) {
                        tmp_args_element_name_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[188]);
                    }

                    if (tmp_args_element_name_7 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_name_8);

                        exception_lineno = 163;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_args_element_name_7);
                }
            }

            frame_6d127b35f23b3df14c54f6d202df9267_2->m_frame.f_lineno = 163;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_8, tmp_args_element_name_7);
            Py_DECREF(tmp_called_name_8);
            Py_DECREF(tmp_args_element_name_7);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 163;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_jupyter_client$asynchronous$client$$$class__1_AsyncKernelClient_59, mod_consts[52], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 163;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_name_9;
            PyObject *tmp_args_element_name_8;
            tmp_called_name_9 = PyObject_GetItem(locals_jupyter_client$asynchronous$client$$$class__1_AsyncKernelClient_59, mod_consts[184]);

            if (tmp_called_name_9 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_name_9 = GET_STRING_DICT_VALUE(moduledict_jupyter_client$asynchronous$client, (Nuitka_StringObject *)mod_consts[184]);

                    if (unlikely(tmp_called_name_9 == NULL)) {
                        tmp_called_name_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[184]);
                    }

                    if (tmp_called_name_9 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 164;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_called_name_9);
                }
            }

            tmp_args_element_name_8 = PyObject_GetItem(locals_jupyter_client$asynchronous$client$$$class__1_AsyncKernelClient_59, mod_consts[195]);

            if (tmp_args_element_name_8 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_args_element_name_8 = GET_STRING_DICT_VALUE(moduledict_jupyter_client$asynchronous$client, (Nuitka_StringObject *)mod_consts[195]);

                    if (unlikely(tmp_args_element_name_8 == NULL)) {
                        tmp_args_element_name_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[195]);
                    }

                    if (tmp_args_element_name_8 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_name_9);

                        exception_lineno = 164;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_args_element_name_8);
                }
            }

            frame_6d127b35f23b3df14c54f6d202df9267_2->m_frame.f_lineno = 164;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_9, tmp_args_element_name_8);
            Py_DECREF(tmp_called_name_9);
            Py_DECREF(tmp_args_element_name_8);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 164;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_jupyter_client$asynchronous$client$$$class__1_AsyncKernelClient_59, mod_consts[218], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 164;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_defaults_3;
            tmp_defaults_3 = mod_consts[219];
            Py_INCREF(tmp_defaults_3);


            tmp_dictset_value = MAKE_FUNCTION_jupyter_client$asynchronous$client$$$function__9__recv_reply(tmp_defaults_3);

            tmp_res = PyObject_SetItem(locals_jupyter_client$asynchronous$client$$$class__1_AsyncKernelClient_59, mod_consts[20], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 167;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_name_10;
            PyObject *tmp_args_element_name_9;
            PyObject *tmp_expression_name_8;
            tmp_called_name_10 = PyObject_GetItem(locals_jupyter_client$asynchronous$client$$$class__1_AsyncKernelClient_59, mod_consts[197]);

            if (tmp_called_name_10 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_name_10 = GET_STRING_DICT_VALUE(moduledict_jupyter_client$asynchronous$client, (Nuitka_StringObject *)mod_consts[197]);

                    if (unlikely(tmp_called_name_10 == NULL)) {
                        tmp_called_name_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[197]);
                    }

                    if (tmp_called_name_10 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 188;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_called_name_10);
                }
            }

            tmp_expression_name_8 = PyObject_GetItem(locals_jupyter_client$asynchronous$client$$$class__1_AsyncKernelClient_59, mod_consts[191]);

            if (tmp_expression_name_8 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_name_8 = GET_STRING_DICT_VALUE(moduledict_jupyter_client$asynchronous$client, (Nuitka_StringObject *)mod_consts[191]);

                    if (unlikely(tmp_expression_name_8 == NULL)) {
                        tmp_expression_name_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[191]);
                    }

                    if (tmp_expression_name_8 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_name_10);

                        exception_lineno = 188;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_expression_name_8);
                }
            }

            tmp_args_element_name_9 = LOOKUP_ATTRIBUTE(tmp_expression_name_8, mod_consts[133]);
            Py_DECREF(tmp_expression_name_8);
            if (tmp_args_element_name_9 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_name_10);

                exception_lineno = 188;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            frame_6d127b35f23b3df14c54f6d202df9267_2->m_frame.f_lineno = 188;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_10, tmp_args_element_name_9);
            Py_DECREF(tmp_called_name_10);
            Py_DECREF(tmp_args_element_name_9);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 188;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_jupyter_client$asynchronous$client$$$class__1_AsyncKernelClient_59, mod_consts[133], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 188;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_name_11;
            PyObject *tmp_args_element_name_10;
            PyObject *tmp_expression_name_9;
            tmp_called_name_11 = PyObject_GetItem(locals_jupyter_client$asynchronous$client$$$class__1_AsyncKernelClient_59, mod_consts[197]);

            if (tmp_called_name_11 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_name_11 = GET_STRING_DICT_VALUE(moduledict_jupyter_client$asynchronous$client, (Nuitka_StringObject *)mod_consts[197]);

                    if (unlikely(tmp_called_name_11 == NULL)) {
                        tmp_called_name_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[197]);
                    }

                    if (tmp_called_name_11 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 189;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_called_name_11);
                }
            }

            tmp_expression_name_9 = PyObject_GetItem(locals_jupyter_client$asynchronous$client$$$class__1_AsyncKernelClient_59, mod_consts[191]);

            if (tmp_expression_name_9 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_name_9 = GET_STRING_DICT_VALUE(moduledict_jupyter_client$asynchronous$client, (Nuitka_StringObject *)mod_consts[191]);

                    if (unlikely(tmp_expression_name_9 == NULL)) {
                        tmp_expression_name_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[191]);
                    }

                    if (tmp_expression_name_9 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_name_11);

                        exception_lineno = 189;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_expression_name_9);
                }
            }

            tmp_args_element_name_10 = LOOKUP_ATTRIBUTE(tmp_expression_name_9, mod_consts[220]);
            Py_DECREF(tmp_expression_name_9);
            if (tmp_args_element_name_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_name_11);

                exception_lineno = 189;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            frame_6d127b35f23b3df14c54f6d202df9267_2->m_frame.f_lineno = 189;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_11, tmp_args_element_name_10);
            Py_DECREF(tmp_called_name_11);
            Py_DECREF(tmp_args_element_name_10);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 189;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_jupyter_client$asynchronous$client$$$class__1_AsyncKernelClient_59, mod_consts[220], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 189;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_name_12;
            PyObject *tmp_args_element_name_11;
            PyObject *tmp_expression_name_10;
            tmp_called_name_12 = PyObject_GetItem(locals_jupyter_client$asynchronous$client$$$class__1_AsyncKernelClient_59, mod_consts[197]);

            if (tmp_called_name_12 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_name_12 = GET_STRING_DICT_VALUE(moduledict_jupyter_client$asynchronous$client, (Nuitka_StringObject *)mod_consts[197]);

                    if (unlikely(tmp_called_name_12 == NULL)) {
                        tmp_called_name_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[197]);
                    }

                    if (tmp_called_name_12 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 190;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_called_name_12);
                }
            }

            tmp_expression_name_10 = PyObject_GetItem(locals_jupyter_client$asynchronous$client$$$class__1_AsyncKernelClient_59, mod_consts[191]);

            if (tmp_expression_name_10 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_name_10 = GET_STRING_DICT_VALUE(moduledict_jupyter_client$asynchronous$client, (Nuitka_StringObject *)mod_consts[191]);

                    if (unlikely(tmp_expression_name_10 == NULL)) {
                        tmp_expression_name_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[191]);
                    }

                    if (tmp_expression_name_10 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_name_12);

                        exception_lineno = 190;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_expression_name_10);
                }
            }

            tmp_args_element_name_11 = LOOKUP_ATTRIBUTE(tmp_expression_name_10, mod_consts[221]);
            Py_DECREF(tmp_expression_name_10);
            if (tmp_args_element_name_11 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_name_12);

                exception_lineno = 190;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            frame_6d127b35f23b3df14c54f6d202df9267_2->m_frame.f_lineno = 190;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_12, tmp_args_element_name_11);
            Py_DECREF(tmp_called_name_12);
            Py_DECREF(tmp_args_element_name_11);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 190;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_jupyter_client$asynchronous$client$$$class__1_AsyncKernelClient_59, mod_consts[221], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 190;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_name_13;
            PyObject *tmp_args_element_name_12;
            PyObject *tmp_expression_name_11;
            tmp_called_name_13 = PyObject_GetItem(locals_jupyter_client$asynchronous$client$$$class__1_AsyncKernelClient_59, mod_consts[197]);

            if (tmp_called_name_13 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_name_13 = GET_STRING_DICT_VALUE(moduledict_jupyter_client$asynchronous$client, (Nuitka_StringObject *)mod_consts[197]);

                    if (unlikely(tmp_called_name_13 == NULL)) {
                        tmp_called_name_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[197]);
                    }

                    if (tmp_called_name_13 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 191;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_called_name_13);
                }
            }

            tmp_expression_name_11 = PyObject_GetItem(locals_jupyter_client$asynchronous$client$$$class__1_AsyncKernelClient_59, mod_consts[191]);

            if (tmp_expression_name_11 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_name_11 = GET_STRING_DICT_VALUE(moduledict_jupyter_client$asynchronous$client, (Nuitka_StringObject *)mod_consts[191]);

                    if (unlikely(tmp_expression_name_11 == NULL)) {
                        tmp_expression_name_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[191]);
                    }

                    if (tmp_expression_name_11 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_name_13);

                        exception_lineno = 191;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_expression_name_11);
                }
            }

            tmp_args_element_name_12 = LOOKUP_ATTRIBUTE(tmp_expression_name_11, mod_consts[222]);
            Py_DECREF(tmp_expression_name_11);
            if (tmp_args_element_name_12 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_name_13);

                exception_lineno = 191;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            frame_6d127b35f23b3df14c54f6d202df9267_2->m_frame.f_lineno = 191;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_13, tmp_args_element_name_12);
            Py_DECREF(tmp_called_name_13);
            Py_DECREF(tmp_args_element_name_12);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 191;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_jupyter_client$asynchronous$client$$$class__1_AsyncKernelClient_59, mod_consts[222], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 191;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_name_14;
            PyObject *tmp_args_element_name_13;
            PyObject *tmp_expression_name_12;
            tmp_called_name_14 = PyObject_GetItem(locals_jupyter_client$asynchronous$client$$$class__1_AsyncKernelClient_59, mod_consts[197]);

            if (tmp_called_name_14 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_name_14 = GET_STRING_DICT_VALUE(moduledict_jupyter_client$asynchronous$client, (Nuitka_StringObject *)mod_consts[197]);

                    if (unlikely(tmp_called_name_14 == NULL)) {
                        tmp_called_name_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[197]);
                    }

                    if (tmp_called_name_14 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 192;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_called_name_14);
                }
            }

            tmp_expression_name_12 = PyObject_GetItem(locals_jupyter_client$asynchronous$client$$$class__1_AsyncKernelClient_59, mod_consts[191]);

            if (tmp_expression_name_12 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_name_12 = GET_STRING_DICT_VALUE(moduledict_jupyter_client$asynchronous$client, (Nuitka_StringObject *)mod_consts[191]);

                    if (unlikely(tmp_expression_name_12 == NULL)) {
                        tmp_expression_name_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[191]);
                    }

                    if (tmp_expression_name_12 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_name_14);

                        exception_lineno = 192;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_expression_name_12);
                }
            }

            tmp_args_element_name_13 = LOOKUP_ATTRIBUTE(tmp_expression_name_12, mod_consts[71]);
            Py_DECREF(tmp_expression_name_12);
            if (tmp_args_element_name_13 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_name_14);

                exception_lineno = 192;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            frame_6d127b35f23b3df14c54f6d202df9267_2->m_frame.f_lineno = 192;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_14, tmp_args_element_name_13);
            Py_DECREF(tmp_called_name_14);
            Py_DECREF(tmp_args_element_name_13);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 192;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_jupyter_client$asynchronous$client$$$class__1_AsyncKernelClient_59, mod_consts[71], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 192;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_name_15;
            PyObject *tmp_args_element_name_14;
            PyObject *tmp_expression_name_13;
            tmp_called_name_15 = PyObject_GetItem(locals_jupyter_client$asynchronous$client$$$class__1_AsyncKernelClient_59, mod_consts[197]);

            if (tmp_called_name_15 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_name_15 = GET_STRING_DICT_VALUE(moduledict_jupyter_client$asynchronous$client, (Nuitka_StringObject *)mod_consts[197]);

                    if (unlikely(tmp_called_name_15 == NULL)) {
                        tmp_called_name_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[197]);
                    }

                    if (tmp_called_name_15 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 193;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_called_name_15);
                }
            }

            tmp_expression_name_13 = PyObject_GetItem(locals_jupyter_client$asynchronous$client$$$class__1_AsyncKernelClient_59, mod_consts[191]);

            if (tmp_expression_name_13 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_name_13 = GET_STRING_DICT_VALUE(moduledict_jupyter_client$asynchronous$client, (Nuitka_StringObject *)mod_consts[191]);

                    if (unlikely(tmp_expression_name_13 == NULL)) {
                        tmp_expression_name_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[191]);
                    }

                    if (tmp_expression_name_13 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_name_15);

                        exception_lineno = 193;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_expression_name_13);
                }
            }

            tmp_args_element_name_14 = LOOKUP_ATTRIBUTE(tmp_expression_name_13, mod_consts[223]);
            Py_DECREF(tmp_expression_name_13);
            if (tmp_args_element_name_14 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_name_15);

                exception_lineno = 193;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            frame_6d127b35f23b3df14c54f6d202df9267_2->m_frame.f_lineno = 193;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_15, tmp_args_element_name_14);
            Py_DECREF(tmp_called_name_15);
            Py_DECREF(tmp_args_element_name_14);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 193;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_jupyter_client$asynchronous$client$$$class__1_AsyncKernelClient_59, mod_consts[223], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 193;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_name_16;
            PyObject *tmp_args_name_2;
            PyObject *tmp_tuple_element_4;
            PyObject *tmp_expression_name_14;
            PyObject *tmp_kwargs_name_2;
            tmp_called_name_16 = PyObject_GetItem(locals_jupyter_client$asynchronous$client$$$class__1_AsyncKernelClient_59, mod_consts[197]);

            if (tmp_called_name_16 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_name_16 = GET_STRING_DICT_VALUE(moduledict_jupyter_client$asynchronous$client, (Nuitka_StringObject *)mod_consts[197]);

                    if (unlikely(tmp_called_name_16 == NULL)) {
                        tmp_called_name_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[197]);
                    }

                    if (tmp_called_name_16 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 196;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_called_name_16);
                }
            }

            tmp_expression_name_14 = PyObject_GetItem(locals_jupyter_client$asynchronous$client$$$class__1_AsyncKernelClient_59, mod_consts[191]);

            if (tmp_expression_name_14 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_name_14 = GET_STRING_DICT_VALUE(moduledict_jupyter_client$asynchronous$client, (Nuitka_StringObject *)mod_consts[191]);

                    if (unlikely(tmp_expression_name_14 == NULL)) {
                        tmp_expression_name_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[191]);
                    }

                    if (tmp_expression_name_14 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_name_16);

                        exception_lineno = 196;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_expression_name_14);
                }
            }

            tmp_tuple_element_4 = LOOKUP_ATTRIBUTE(tmp_expression_name_14, mod_consts[224]);
            Py_DECREF(tmp_expression_name_14);
            if (tmp_tuple_element_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_name_16);

                exception_lineno = 196;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_args_name_2 = PyTuple_New(1);
            PyTuple_SET_ITEM(tmp_args_name_2, 0, tmp_tuple_element_4);
            tmp_kwargs_name_2 = PyDict_Copy(mod_consts[225]);
            frame_6d127b35f23b3df14c54f6d202df9267_2->m_frame.f_lineno = 196;
            tmp_dictset_value = CALL_FUNCTION(tmp_called_name_16, tmp_args_name_2, tmp_kwargs_name_2);
            Py_DECREF(tmp_called_name_16);
            Py_DECREF(tmp_args_name_2);
            Py_DECREF(tmp_kwargs_name_2);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 196;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_jupyter_client$asynchronous$client$$$class__1_AsyncKernelClient_59, mod_consts[224], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 196;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }


        tmp_dictset_value = MAKE_FUNCTION_jupyter_client$asynchronous$client$$$function__10__stdin_hook_default();

        tmp_res = PyObject_SetItem(locals_jupyter_client$asynchronous$client$$$class__1_AsyncKernelClient_59, mod_consts[140], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 199;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION_jupyter_client$asynchronous$client$$$function__11__output_hook_default();

        tmp_res = PyObject_SetItem(locals_jupyter_client$asynchronous$client$$$class__1_AsyncKernelClient_59, mod_consts[122], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 221;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION_jupyter_client$asynchronous$client$$$function__12__output_hook_kernel();

        tmp_res = PyObject_SetItem(locals_jupyter_client$asynchronous$client$$$class__1_AsyncKernelClient_59, mod_consts[148], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 233;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION_jupyter_client$asynchronous$client$$$function__13_is_alive();

        tmp_res = PyObject_SetItem(locals_jupyter_client$asynchronous$client$$$class__1_AsyncKernelClient_59, mod_consts[66], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 244;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        {
            PyObject *tmp_defaults_4;
            tmp_defaults_4 = mod_consts[229];
            Py_INCREF(tmp_defaults_4);


            tmp_dictset_value = MAKE_FUNCTION_jupyter_client$asynchronous$client$$$function__14_execute_interactive(tmp_defaults_4);

            tmp_res = PyObject_SetItem(locals_jupyter_client$asynchronous$client$$$class__1_AsyncKernelClient_59, mod_consts[167], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 262;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }

#if 0
        RESTORE_FRAME_EXCEPTION(frame_6d127b35f23b3df14c54f6d202df9267_2);
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_1;

        frame_exception_exit_2:;

#if 0
        RESTORE_FRAME_EXCEPTION(frame_6d127b35f23b3df14c54f6d202df9267_2);
#endif

        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_6d127b35f23b3df14c54f6d202df9267_2, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_6d127b35f23b3df14c54f6d202df9267_2->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_6d127b35f23b3df14c54f6d202df9267_2, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_6d127b35f23b3df14c54f6d202df9267_2,
            type_description_2,
            outline_0_var___class__
        );


        // Release cached frame if used for exception.
        if (frame_6d127b35f23b3df14c54f6d202df9267_2 == cache_frame_6d127b35f23b3df14c54f6d202df9267_2) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif

            Py_DECREF(cache_frame_6d127b35f23b3df14c54f6d202df9267_2);
            cache_frame_6d127b35f23b3df14c54f6d202df9267_2 = NULL;
        }

        assertFrameObject(frame_6d127b35f23b3df14c54f6d202df9267_2);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_1;

        frame_no_exception_1:;
        goto skip_nested_handling_1;
        nested_frame_exit_1:;

        goto try_except_handler_4;
        skip_nested_handling_1:;
        {
            nuitka_bool tmp_condition_result_7;
            PyObject *tmp_compexpr_left_1;
            PyObject *tmp_compexpr_right_1;
            CHECK_OBJECT(tmp_class_creation_1__bases);
            tmp_compexpr_left_1 = tmp_class_creation_1__bases;
            CHECK_OBJECT(tmp_class_creation_1__bases_orig);
            tmp_compexpr_right_1 = tmp_class_creation_1__bases_orig;
            tmp_condition_result_7 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_compexpr_left_1, tmp_compexpr_right_1);
            if (tmp_condition_result_7 == NUITKA_BOOL_EXCEPTION) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 59;

                goto try_except_handler_4;
            }
            if (tmp_condition_result_7 == NUITKA_BOOL_TRUE) {
                goto branch_yes_4;
            } else {
                goto branch_no_4;
            }
            assert(tmp_condition_result_7 != NUITKA_BOOL_UNASSIGNED);
        }
        branch_yes_4:;
        CHECK_OBJECT(tmp_class_creation_1__bases_orig);
        tmp_dictset_value = tmp_class_creation_1__bases_orig;
        tmp_res = PyObject_SetItem(locals_jupyter_client$asynchronous$client$$$class__1_AsyncKernelClient_59, mod_consts[230], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 59;

            goto try_except_handler_4;
        }
        branch_no_4:;
        {
            PyObject *tmp_assign_source_26;
            PyObject *tmp_called_name_17;
            PyObject *tmp_args_name_3;
            PyObject *tmp_tuple_element_5;
            PyObject *tmp_kwargs_name_3;
            CHECK_OBJECT(tmp_class_creation_1__metaclass);
            tmp_called_name_17 = tmp_class_creation_1__metaclass;
            tmp_tuple_element_5 = mod_consts[200];
            tmp_args_name_3 = PyTuple_New(3);
            PyTuple_SET_ITEM0(tmp_args_name_3, 0, tmp_tuple_element_5);
            CHECK_OBJECT(tmp_class_creation_1__bases);
            tmp_tuple_element_5 = tmp_class_creation_1__bases;
            PyTuple_SET_ITEM0(tmp_args_name_3, 1, tmp_tuple_element_5);
            tmp_tuple_element_5 = locals_jupyter_client$asynchronous$client$$$class__1_AsyncKernelClient_59;
            PyTuple_SET_ITEM0(tmp_args_name_3, 2, tmp_tuple_element_5);
            CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
            tmp_kwargs_name_3 = tmp_class_creation_1__class_decl_dict;
            frame_85b411fbb0608cd624453f94f8f2155f->m_frame.f_lineno = 59;
            tmp_assign_source_26 = CALL_FUNCTION(tmp_called_name_17, tmp_args_name_3, tmp_kwargs_name_3);
            Py_DECREF(tmp_args_name_3);
            if (tmp_assign_source_26 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 59;

                goto try_except_handler_4;
            }
            assert(outline_0_var___class__ == NULL);
            outline_0_var___class__ = tmp_assign_source_26;
        }
        CHECK_OBJECT(outline_0_var___class__);
        tmp_assign_source_25 = outline_0_var___class__;
        Py_INCREF(tmp_assign_source_25);
        goto try_return_handler_4;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_4:;
        Py_DECREF(locals_jupyter_client$asynchronous$client$$$class__1_AsyncKernelClient_59);
        locals_jupyter_client$asynchronous$client$$$class__1_AsyncKernelClient_59 = NULL;
        goto try_return_handler_3;
        // Exception handler code:
        try_except_handler_4:;
        exception_keeper_type_2 = exception_type;
        exception_keeper_value_2 = exception_value;
        exception_keeper_tb_2 = exception_tb;
        exception_keeper_lineno_2 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_jupyter_client$asynchronous$client$$$class__1_AsyncKernelClient_59);
        locals_jupyter_client$asynchronous$client$$$class__1_AsyncKernelClient_59 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_2;
        exception_value = exception_keeper_value_2;
        exception_tb = exception_keeper_tb_2;
        exception_lineno = exception_keeper_lineno_2;

        goto try_except_handler_3;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_3:;
        CHECK_OBJECT(outline_0_var___class__);
        Py_DECREF(outline_0_var___class__);
        outline_0_var___class__ = NULL;
        goto outline_result_1;
        // Exception handler code:
        try_except_handler_3:;
        exception_keeper_type_3 = exception_type;
        exception_keeper_value_3 = exception_value;
        exception_keeper_tb_3 = exception_tb;
        exception_keeper_lineno_3 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_3;
        exception_value = exception_keeper_value_3;
        exception_tb = exception_keeper_tb_3;
        exception_lineno = exception_keeper_lineno_3;

        goto outline_exception_1;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_1:;
        exception_lineno = 59;
        goto try_except_handler_2;
        outline_result_1:;
        UPDATE_STRING_DICT1(moduledict_jupyter_client$asynchronous$client, (Nuitka_StringObject *)mod_consts[200], tmp_assign_source_25);
    }
    goto try_end_2;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_4 = exception_type;
    exception_keeper_value_4 = exception_value;
    exception_keeper_tb_4 = exception_tb;
    exception_keeper_lineno_4 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_1__bases_orig);
    tmp_class_creation_1__bases_orig = NULL;
    Py_XDECREF(tmp_class_creation_1__bases);
    tmp_class_creation_1__bases = NULL;
    Py_XDECREF(tmp_class_creation_1__class_decl_dict);
    tmp_class_creation_1__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_1__metaclass);
    tmp_class_creation_1__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_1__prepared);
    tmp_class_creation_1__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION(frame_85b411fbb0608cd624453f94f8f2155f);
#endif
    popFrameStack();

    assertFrameObject(frame_85b411fbb0608cd624453f94f8f2155f);

    goto frame_no_exception_2;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_85b411fbb0608cd624453f94f8f2155f);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_85b411fbb0608cd624453f94f8f2155f, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_85b411fbb0608cd624453f94f8f2155f->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_85b411fbb0608cd624453f94f8f2155f, exception_lineno);
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;

    frame_no_exception_2:;
    CHECK_OBJECT(tmp_class_creation_1__bases_orig);
    Py_DECREF(tmp_class_creation_1__bases_orig);
    tmp_class_creation_1__bases_orig = NULL;
    Py_XDECREF(tmp_class_creation_1__bases);
    tmp_class_creation_1__bases = NULL;
    Py_XDECREF(tmp_class_creation_1__class_decl_dict);
    tmp_class_creation_1__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_1__metaclass);
    tmp_class_creation_1__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_1__prepared);
    Py_DECREF(tmp_class_creation_1__prepared);
    tmp_class_creation_1__prepared = NULL;

    return module_jupyter_client$asynchronous$client;
    module_exception_exit:
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);
    return NULL;
}

