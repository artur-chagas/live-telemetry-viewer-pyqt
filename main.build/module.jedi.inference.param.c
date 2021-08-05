/* Generated code for Python module 'jedi.inference.param'
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

/* The "module_jedi$inference$param" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_jedi$inference$param;
PyDictObject *moduledict_jedi$inference$param;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[165];

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(void) {
    if (constants_created == false) {
        loadConstantsBlob(&mod_consts[0], UNTRANSLATE("jedi.inference.param"));
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
void checkModuleConstants_jedi$inference$param(void) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    checkConstantsBlob(&mod_consts[0], "jedi.inference.param");
}
#endif

// The module code objects.
static PyCodeObject *codeobj_018ac08cfbc51b7f91e3f0184abecae0;
static PyCodeObject *codeobj_e6ef848847b57565a1c5fe3f38749a83;
static PyCodeObject *codeobj_62b483f38e7c794b3b5c9f1d2c4e2226;
static PyCodeObject *codeobj_071a56ce653e3a204db3703c78db601d;
static PyCodeObject *codeobj_6e2141c6ecffb43341a386949becc63b;
static PyCodeObject *codeobj_39571897c5052c560d1ba8f2a1e501fa;
static PyCodeObject *codeobj_91f9af1d9bc27553afe83aac946c295b;
static PyCodeObject *codeobj_4462a348838661222e12869c31437184;
static PyCodeObject *codeobj_053506a6518d8a4836a7290e93e8d348;
static PyCodeObject *codeobj_2d38351f2145248dcec4c7d454acc694;
static PyCodeObject *codeobj_964c825384a76dc7cf8978373a2b79f2;
static PyCodeObject *codeobj_da5050e3ff9c6392b1b257c4f093fe55;
static PyCodeObject *codeobj_653fb585767df404473fbaf01e1b83b7;
static PyCodeObject *codeobj_8d7746339e07eafc7b754e5f6509f8ad;

static void createModuleCodeObjects(void) {
    module_filename_obj = mod_consts[112]; CHECK_OBJECT(module_filename_obj);
    codeobj_018ac08cfbc51b7f91e3f0184abecae0 = MAKE_CODEOBJECT(module_filename_obj, 41, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[35], mod_consts[152], NULL, 1, 0, 0);
    codeobj_e6ef848847b57565a1c5fe3f38749a83 = MAKE_CODEOBJECT(module_filename_obj, 250, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[35], mod_consts[153], NULL, 1, 0, 0);
    codeobj_62b483f38e7c794b3b5c9f1d2c4e2226 = MAKE_CODEOBJECT(module_filename_obj, 103, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[52], NULL, NULL, 0, 0, 0);
    codeobj_071a56ce653e3a204db3703c78db601d = MAKE_CODEOBJECT(module_filename_obj, 1, CO_NOFREE, mod_consts[154], NULL, NULL, 0, 0, 0);
    codeobj_6e2141c6ecffb43341a386949becc63b = MAKE_CODEOBJECT(module_filename_obj, 21, CO_NOFREE, mod_consts[68], mod_consts[155], NULL, 0, 0, 0);
    codeobj_39571897c5052c560d1ba8f2a1e501fa = MAKE_CODEOBJECT(module_filename_obj, 22, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[11], mod_consts[156], mod_consts[155], 6, 0, 0);
    codeobj_91f9af1d9bc27553afe83aac946c295b = MAKE_CODEOBJECT(module_filename_obj, 48, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[148], mod_consts[157], NULL, 1, 0, 0);
    codeobj_4462a348838661222e12869c31437184 = MAKE_CODEOBJECT(module_filename_obj, 13, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[95], mod_consts[158], NULL, 3, 0, 0);
    codeobj_053506a6518d8a4836a7290e93e8d348 = MAKE_CODEOBJECT(module_filename_obj, 248, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[85], mod_consts[159], NULL, 2, 0, 0);
    codeobj_2d38351f2145248dcec4c7d454acc694 = MAKE_CODEOBJECT(module_filename_obj, 227, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[151], mod_consts[160], NULL, 2, 0, 0);
    codeobj_964c825384a76dc7cf8978373a2b79f2 = MAKE_CODEOBJECT(module_filename_obj, 52, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[103], mod_consts[161], NULL, 2, 0, 0);
    codeobj_da5050e3ff9c6392b1b257c4f093fe55 = MAKE_CODEOBJECT(module_filename_obj, 27, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[16], mod_consts[157], NULL, 1, 0, 0);
    codeobj_653fb585767df404473fbaf01e1b83b7 = MAKE_CODEOBJECT(module_filename_obj, 30, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[146], mod_consts[162], NULL, 1, 0, 0);
    codeobj_8d7746339e07eafc7b754e5f6509f8ad = MAKE_CODEOBJECT(module_filename_obj, 72, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[40], mod_consts[163], mod_consts[164], 1, 0, 0);
}

// The module function declarations.
static PyObject *MAKE_GENERATOR_jedi$inference$param$$$function__4_matches_signature$$$genexpr__1_genexpr(struct Nuitka_CellObject **closure);


static PyObject *MAKE_GENERATOR_jedi$inference$param$$$function__8__error_argument_count$$$genexpr__1_genexpr(struct Nuitka_CellObject **closure);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$function__1__mro_entries_conversion(PyObject **python_pars);


static PyObject *MAKE_FUNCTION_jedi$inference$param$$$function__1__add_argument_issue();


static PyObject *MAKE_FUNCTION_jedi$inference$param$$$function__2___init__(PyObject *defaults, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_jedi$inference$param$$$function__3_infer();


static PyObject *MAKE_FUNCTION_jedi$inference$param$$$function__4_matches_signature();


static PyObject *MAKE_FUNCTION_jedi$inference$param$$$function__5___repr__();


static PyObject *MAKE_FUNCTION_jedi$inference$param$$$function__6_get_executed_param_names_and_issues();


static PyObject *MAKE_FUNCTION_jedi$inference$param$$$function__6_get_executed_param_names_and_issues$$$function__1_too_many_args(struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_jedi$inference$param$$$function__6_get_executed_param_names_and_issues$$$function__2_lambda();


static PyObject *MAKE_FUNCTION_jedi$inference$param$$$function__7_get_executed_param_names();


static PyObject *MAKE_FUNCTION_jedi$inference$param$$$function__8__error_argument_count();


// The module function definitions.
static PyObject *impl_jedi$inference$param$$$function__1__add_argument_issue(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_error_name = python_pars[0];
    PyObject *par_lazy_value = python_pars[1];
    PyObject *par_message = python_pars[2];
    PyObject *var_node = NULL;
    struct Nuitka_FrameObject *frame_4462a348838661222e12869c31437184;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_4462a348838661222e12869c31437184 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_4462a348838661222e12869c31437184)) {
        Py_XDECREF(cache_frame_4462a348838661222e12869c31437184);

#if _DEBUG_REFCOUNTS
        if (cache_frame_4462a348838661222e12869c31437184 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_4462a348838661222e12869c31437184 = MAKE_FUNCTION_FRAME(codeobj_4462a348838661222e12869c31437184, module_jedi$inference$param, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_4462a348838661222e12869c31437184->m_type_description == NULL);
    frame_4462a348838661222e12869c31437184 = cache_frame_4462a348838661222e12869c31437184;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_4462a348838661222e12869c31437184);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_4462a348838661222e12869c31437184) == 2); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        CHECK_OBJECT(par_lazy_value);
        tmp_isinstance_inst_1 = par_lazy_value;
        tmp_isinstance_cls_1 = GET_STRING_DICT_VALUE(moduledict_jedi$inference$param, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_isinstance_cls_1 == NULL)) {
            tmp_isinstance_cls_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_isinstance_cls_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 14;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_res = Nuitka_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 14;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_expression_name_1;
        CHECK_OBJECT(par_lazy_value);
        tmp_expression_name_1 = par_lazy_value;
        tmp_assign_source_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_1, mod_consts[1]);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 15;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert(var_node == NULL);
        var_node = tmp_assign_source_1;
    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_expression_name_2;
        PyObject *tmp_expression_name_3;
        PyObject *tmp_tmp_condition_result_2_object_1;
        int tmp_truth_name_1;
        CHECK_OBJECT(var_node);
        tmp_expression_name_3 = var_node;
        tmp_expression_name_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_3, mod_consts[2]);
        if (tmp_expression_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 16;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_left_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_2, mod_consts[3]);
        Py_DECREF(tmp_expression_name_2);
        if (tmp_compexpr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 16;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_1 = mod_consts[4];
        tmp_tmp_condition_result_2_object_1 = RICH_COMPARE_EQ_OBJECT_OBJECT_OBJECT(tmp_compexpr_left_1, tmp_compexpr_right_1);
        Py_DECREF(tmp_compexpr_left_1);
        if (tmp_tmp_condition_result_2_object_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 16;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_tmp_condition_result_2_object_1);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_tmp_condition_result_2_object_1);

            exception_lineno = 16;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_2 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_tmp_condition_result_2_object_1);
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_expression_name_4;
        if (var_node == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[5]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 17;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_4 = var_node;
        tmp_assign_source_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_4, mod_consts[2]);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 17;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_node;
            var_node = tmp_assign_source_2;
            Py_XDECREF(old);
        }

    }
    branch_no_2:;
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_expression_name_5;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_expression_name_6;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_args_element_name_4;
        tmp_expression_name_5 = GET_STRING_DICT_VALUE(moduledict_jedi$inference$param, (Nuitka_StringObject *)mod_consts[6]);

        if (unlikely(tmp_expression_name_5 == NULL)) {
            tmp_expression_name_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
        }

        if (tmp_expression_name_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 18;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_5, mod_consts[7]);
        if (tmp_called_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 18;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        if (par_lazy_value == NULL) {
            Py_DECREF(tmp_called_name_1);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[8]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 18;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_6 = par_lazy_value;
        tmp_args_element_name_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_6, mod_consts[9]);
        if (tmp_args_element_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_1);

            exception_lineno = 18;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_error_name);
        tmp_args_element_name_2 = par_error_name;
        if (var_node == NULL) {
            Py_DECREF(tmp_called_name_1);
            Py_DECREF(tmp_args_element_name_1);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[5]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 18;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_name_3 = var_node;
        CHECK_OBJECT(par_message);
        tmp_args_element_name_4 = par_message;
        frame_4462a348838661222e12869c31437184->m_frame.f_lineno = 18;
        {
            PyObject *call_args[] = {tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3, tmp_args_element_name_4};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS4(tmp_called_name_1, call_args);
        }

        Py_DECREF(tmp_called_name_1);
        Py_DECREF(tmp_args_element_name_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 18;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    branch_no_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_4462a348838661222e12869c31437184);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_4462a348838661222e12869c31437184);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_4462a348838661222e12869c31437184);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_4462a348838661222e12869c31437184, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_4462a348838661222e12869c31437184->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_4462a348838661222e12869c31437184, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_4462a348838661222e12869c31437184,
        type_description_1,
        par_error_name,
        par_lazy_value,
        par_message,
        var_node
    );


    // Release cached frame if used for exception.
    if (frame_4462a348838661222e12869c31437184 == cache_frame_4462a348838661222e12869c31437184) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_4462a348838661222e12869c31437184);
        cache_frame_4462a348838661222e12869c31437184 = NULL;
    }

    assertFrameObject(frame_4462a348838661222e12869c31437184);

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
    Py_XDECREF(par_error_name);
    par_error_name = NULL;
    Py_XDECREF(par_lazy_value);
    par_lazy_value = NULL;
    Py_XDECREF(par_message);
    par_message = NULL;
    Py_XDECREF(var_node);
    var_node = NULL;
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

    Py_XDECREF(par_error_name);
    par_error_name = NULL;
    Py_XDECREF(par_lazy_value);
    par_lazy_value = NULL;
    Py_XDECREF(par_message);
    par_message = NULL;
    Py_XDECREF(var_node);
    var_node = NULL;
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


static PyObject *impl_jedi$inference$param$$$function__2___init__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_function_value = python_pars[1];
    PyObject *par_arguments = python_pars[2];
    PyObject *par_param_node = python_pars[3];
    PyObject *par_lazy_value = python_pars[4];
    PyObject *par_is_default = python_pars[5];
    struct Nuitka_FrameObject *frame_39571897c5052c560d1ba8f2a1e501fa;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_39571897c5052c560d1ba8f2a1e501fa = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_39571897c5052c560d1ba8f2a1e501fa)) {
        Py_XDECREF(cache_frame_39571897c5052c560d1ba8f2a1e501fa);

#if _DEBUG_REFCOUNTS
        if (cache_frame_39571897c5052c560d1ba8f2a1e501fa == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_39571897c5052c560d1ba8f2a1e501fa = MAKE_FUNCTION_FRAME(codeobj_39571897c5052c560d1ba8f2a1e501fa, module_jedi$inference$param, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_39571897c5052c560d1ba8f2a1e501fa->m_type_description == NULL);
    frame_39571897c5052c560d1ba8f2a1e501fa = cache_frame_39571897c5052c560d1ba8f2a1e501fa;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_39571897c5052c560d1ba8f2a1e501fa);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_39571897c5052c560d1ba8f2a1e501fa) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_expression_name_1;
        PyObject *tmp_type_arg_name_1;
        PyObject *tmp_object_arg_name_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_name_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_kwargs_name_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[10]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 23;
            type_description_1 = "ooooooc";
            goto frame_exception_exit_1;
        }

        tmp_type_arg_name_1 = Nuitka_Cell_GET(self->m_closure[0]);
        CHECK_OBJECT(par_self);
        tmp_object_arg_name_1 = par_self;
        tmp_expression_name_1 = BUILTIN_SUPER0(tmp_type_arg_name_1, tmp_object_arg_name_1);
        if (tmp_expression_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;
            type_description_1 = "ooooooc";
            goto frame_exception_exit_1;
        }
        tmp_called_name_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_1, mod_consts[11]);
        Py_DECREF(tmp_expression_name_1);
        if (tmp_called_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;
            type_description_1 = "ooooooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_function_value);
        tmp_tuple_element_1 = par_function_value;
        tmp_args_name_1 = PyTuple_New(2);
        {
            PyObject *tmp_expression_name_2;
            PyTuple_SET_ITEM0(tmp_args_name_1, 0, tmp_tuple_element_1);
            CHECK_OBJECT(par_param_node);
            tmp_expression_name_2 = par_param_node;
            tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_2, mod_consts[12]);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 23;
                type_description_1 = "ooooooc";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_args_name_1, 1, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_called_name_1);
        Py_DECREF(tmp_args_name_1);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_dict_key_1 = mod_consts[13];
        CHECK_OBJECT(par_arguments);
        tmp_dict_value_1 = par_arguments;
        tmp_kwargs_name_1 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_kwargs_name_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        frame_39571897c5052c560d1ba8f2a1e501fa->m_frame.f_lineno = 23;
        tmp_call_result_1 = CALL_FUNCTION(tmp_called_name_1, tmp_args_name_1, tmp_kwargs_name_1);
        Py_DECREF(tmp_called_name_1);
        Py_DECREF(tmp_args_name_1);
        Py_DECREF(tmp_kwargs_name_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;
            type_description_1 = "ooooooc";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(par_lazy_value);
        tmp_assattr_name_1 = par_lazy_value;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[14], tmp_assattr_name_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 24;
            type_description_1 = "ooooooc";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_2;
        PyObject *tmp_assattr_target_2;
        CHECK_OBJECT(par_is_default);
        tmp_assattr_name_2 = par_is_default;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[15], tmp_assattr_name_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 25;
            type_description_1 = "ooooooc";
            goto frame_exception_exit_1;
        }
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_39571897c5052c560d1ba8f2a1e501fa);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_39571897c5052c560d1ba8f2a1e501fa);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_39571897c5052c560d1ba8f2a1e501fa, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_39571897c5052c560d1ba8f2a1e501fa->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_39571897c5052c560d1ba8f2a1e501fa, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_39571897c5052c560d1ba8f2a1e501fa,
        type_description_1,
        par_self,
        par_function_value,
        par_arguments,
        par_param_node,
        par_lazy_value,
        par_is_default,
        self->m_closure[0]
    );


    // Release cached frame if used for exception.
    if (frame_39571897c5052c560d1ba8f2a1e501fa == cache_frame_39571897c5052c560d1ba8f2a1e501fa) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_39571897c5052c560d1ba8f2a1e501fa);
        cache_frame_39571897c5052c560d1ba8f2a1e501fa = NULL;
    }

    assertFrameObject(frame_39571897c5052c560d1ba8f2a1e501fa);

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
    Py_XDECREF(par_function_value);
    par_function_value = NULL;
    Py_XDECREF(par_arguments);
    par_arguments = NULL;
    Py_XDECREF(par_param_node);
    par_param_node = NULL;
    CHECK_OBJECT(par_lazy_value);
    Py_DECREF(par_lazy_value);
    par_lazy_value = NULL;
    CHECK_OBJECT(par_is_default);
    Py_DECREF(par_is_default);
    par_is_default = NULL;
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
    Py_XDECREF(par_function_value);
    par_function_value = NULL;
    Py_XDECREF(par_arguments);
    par_arguments = NULL;
    Py_XDECREF(par_param_node);
    par_param_node = NULL;
    CHECK_OBJECT(par_lazy_value);
    Py_DECREF(par_lazy_value);
    par_lazy_value = NULL;
    CHECK_OBJECT(par_is_default);
    Py_DECREF(par_is_default);
    par_is_default = NULL;
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


static PyObject *impl_jedi$inference$param$$$function__3_infer(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_da5050e3ff9c6392b1b257c4f093fe55;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_da5050e3ff9c6392b1b257c4f093fe55 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_da5050e3ff9c6392b1b257c4f093fe55)) {
        Py_XDECREF(cache_frame_da5050e3ff9c6392b1b257c4f093fe55);

#if _DEBUG_REFCOUNTS
        if (cache_frame_da5050e3ff9c6392b1b257c4f093fe55 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_da5050e3ff9c6392b1b257c4f093fe55 = MAKE_FUNCTION_FRAME(codeobj_da5050e3ff9c6392b1b257c4f093fe55, module_jedi$inference$param, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_da5050e3ff9c6392b1b257c4f093fe55->m_type_description == NULL);
    frame_da5050e3ff9c6392b1b257c4f093fe55 = cache_frame_da5050e3ff9c6392b1b257c4f093fe55;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_da5050e3ff9c6392b1b257c4f093fe55);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_da5050e3ff9c6392b1b257c4f093fe55) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_name_1;
        CHECK_OBJECT(par_self);
        tmp_expression_name_1 = par_self;
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_1, mod_consts[14]);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 28;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_da5050e3ff9c6392b1b257c4f093fe55->m_frame.f_lineno = 28;
        tmp_return_value = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[16]);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 28;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_da5050e3ff9c6392b1b257c4f093fe55);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_da5050e3ff9c6392b1b257c4f093fe55);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_da5050e3ff9c6392b1b257c4f093fe55);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_da5050e3ff9c6392b1b257c4f093fe55, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_da5050e3ff9c6392b1b257c4f093fe55->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_da5050e3ff9c6392b1b257c4f093fe55, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_da5050e3ff9c6392b1b257c4f093fe55,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_da5050e3ff9c6392b1b257c4f093fe55 == cache_frame_da5050e3ff9c6392b1b257c4f093fe55) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_da5050e3ff9c6392b1b257c4f093fe55);
        cache_frame_da5050e3ff9c6392b1b257c4f093fe55 = NULL;
    }

    assertFrameObject(frame_da5050e3ff9c6392b1b257c4f093fe55);

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


static PyObject *impl_jedi$inference$param$$$function__4_matches_signature(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *var_argument_values = NULL;
    struct Nuitka_CellObject *var_annotations = Nuitka_Cell_Empty();
    PyObject *var_matches = NULL;
    PyObject *tmp_genexpr_1__$0 = NULL;
    struct Nuitka_FrameObject *frame_653fb585767df404473fbaf01e1b83b7;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    int tmp_res;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_653fb585767df404473fbaf01e1b83b7 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_653fb585767df404473fbaf01e1b83b7)) {
        Py_XDECREF(cache_frame_653fb585767df404473fbaf01e1b83b7);

#if _DEBUG_REFCOUNTS
        if (cache_frame_653fb585767df404473fbaf01e1b83b7 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_653fb585767df404473fbaf01e1b83b7 = MAKE_FUNCTION_FRAME(codeobj_653fb585767df404473fbaf01e1b83b7, module_jedi$inference$param, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_653fb585767df404473fbaf01e1b83b7->m_type_description == NULL);
    frame_653fb585767df404473fbaf01e1b83b7 = cache_frame_653fb585767df404473fbaf01e1b83b7;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_653fb585767df404473fbaf01e1b83b7);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_653fb585767df404473fbaf01e1b83b7) == 2); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_expression_name_1;
        PyObject *tmp_attribute_value_1;
        int tmp_truth_name_1;
        CHECK_OBJECT(par_self);
        tmp_expression_name_1 = par_self;
        tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_1, mod_consts[15]);
        if (tmp_attribute_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 31;
            type_description_1 = "ooco";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_attribute_value_1);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_attribute_value_1);

            exception_lineno = 31;
            type_description_1 = "ooco";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_attribute_value_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    tmp_return_value = Py_True;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    branch_no_1:;
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_called_instance_2;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[17]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 33;
            type_description_1 = "ooco";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_2 = par_self;
        frame_653fb585767df404473fbaf01e1b83b7->m_frame.f_lineno = 33;
        tmp_called_instance_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_2, mod_consts[16]);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 33;
            type_description_1 = "ooco";
            goto frame_exception_exit_1;
        }
        frame_653fb585767df404473fbaf01e1b83b7->m_frame.f_lineno = 33;
        tmp_assign_source_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[18]);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 33;
            type_description_1 = "ooco";
            goto frame_exception_exit_1;
        }
        assert(var_argument_values == NULL);
        var_argument_values = tmp_assign_source_1;
    }
    {
        bool tmp_condition_result_2;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_called_instance_3;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_expression_name_2;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[17]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 34;
            type_description_1 = "ooco";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_3 = par_self;
        frame_653fb585767df404473fbaf01e1b83b7->m_frame.f_lineno = 34;
        tmp_compexpr_left_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_3, mod_consts[19]);
        if (tmp_compexpr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 34;
            type_description_1 = "ooco";
            goto frame_exception_exit_1;
        }
        tmp_expression_name_2 = GET_STRING_DICT_VALUE(moduledict_jedi$inference$param, (Nuitka_StringObject *)mod_consts[20]);

        if (unlikely(tmp_expression_name_2 == NULL)) {
            tmp_expression_name_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
        }

        if (tmp_expression_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_compexpr_left_1);

            exception_lineno = 34;
            type_description_1 = "ooco";
            goto frame_exception_exit_1;
        }
        tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_2, mod_consts[21]);
        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_compexpr_left_1);

            exception_lineno = 34;
            type_description_1 = "ooco";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_1 = PyTuple_New(2);
        {
            PyObject *tmp_expression_name_3;
            PyTuple_SET_ITEM(tmp_compexpr_right_1, 0, tmp_tuple_element_1);
            tmp_expression_name_3 = GET_STRING_DICT_VALUE(moduledict_jedi$inference$param, (Nuitka_StringObject *)mod_consts[20]);

            if (unlikely(tmp_expression_name_3 == NULL)) {
                tmp_expression_name_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
            }

            if (tmp_expression_name_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 34;
                type_description_1 = "ooco";
                goto tuple_build_exception_1;
            }
            tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_3, mod_consts[22]);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 34;
                type_description_1 = "ooco";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_compexpr_right_1, 1, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_compexpr_left_1);
        Py_DECREF(tmp_compexpr_right_1);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_res = PySequence_Contains(tmp_compexpr_right_1, tmp_compexpr_left_1);
        Py_DECREF(tmp_compexpr_left_1);
        Py_DECREF(tmp_compexpr_right_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 34;
            type_description_1 = "ooco";
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
    tmp_return_value = Py_True;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    branch_no_2:;
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_name_1;
        PyObject *tmp_expression_name_4;
        PyObject *tmp_kwargs_name_1;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[17]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 36;
            type_description_1 = "ooco";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_4 = par_self;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_4, mod_consts[23]);
        if (tmp_called_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 36;
            type_description_1 = "ooco";
            goto frame_exception_exit_1;
        }
        tmp_kwargs_name_1 = PyDict_Copy(mod_consts[24]);
        frame_653fb585767df404473fbaf01e1b83b7->m_frame.f_lineno = 36;
        tmp_assign_source_2 = CALL_FUNCTION_WITH_KEYARGS(tmp_called_name_1, tmp_kwargs_name_1);
        Py_DECREF(tmp_called_name_1);
        Py_DECREF(tmp_kwargs_name_1);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 36;
            type_description_1 = "ooco";
            goto frame_exception_exit_1;
        }
        assert(Nuitka_Cell_GET(var_annotations) == NULL);
        PyCell_SET(var_annotations, tmp_assign_source_2);

    }
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_operand_name_1;
        CHECK_OBJECT(Nuitka_Cell_GET(var_annotations));
        tmp_operand_name_1 = Nuitka_Cell_GET(var_annotations);
        tmp_res = CHECK_IF_TRUE(tmp_operand_name_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 37;
            type_description_1 = "ooco";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_3 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    tmp_return_value = Py_True;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    branch_no_3:;
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_any_arg_1;
        {
            PyObject *tmp_assign_source_4;
            PyObject *tmp_iter_arg_1;
            CHECK_OBJECT(var_argument_values);
            tmp_iter_arg_1 = var_argument_values;
            tmp_assign_source_4 = MAKE_ITERATOR(tmp_iter_arg_1);
            if (tmp_assign_source_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 41;
                type_description_1 = "ooco";
                goto frame_exception_exit_1;
            }
            assert(tmp_genexpr_1__$0 == NULL);
            tmp_genexpr_1__$0 = tmp_assign_source_4;
        }
        // Tried code:
        {
            struct Nuitka_CellObject *tmp_closure_1[2];

            tmp_closure_1[0] = var_annotations;
            Py_INCREF(tmp_closure_1[0]);
            tmp_closure_1[1] = Nuitka_Cell_New0(tmp_genexpr_1__$0);

            tmp_any_arg_1 = MAKE_GENERATOR_jedi$inference$param$$$function__4_matches_signature$$$genexpr__1_genexpr(tmp_closure_1);

            goto try_return_handler_2;
        }
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_2:;
        CHECK_OBJECT(tmp_genexpr_1__$0);
        Py_DECREF(tmp_genexpr_1__$0);
        tmp_genexpr_1__$0 = NULL;
        goto outline_result_1;
        // End of try:
        CHECK_OBJECT(tmp_genexpr_1__$0);
        Py_DECREF(tmp_genexpr_1__$0);
        tmp_genexpr_1__$0 = NULL;
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_result_1:;
        tmp_assign_source_3 = BUILTIN_ANY(tmp_any_arg_1);
        Py_DECREF(tmp_any_arg_1);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 41;
            type_description_1 = "ooco";
            goto frame_exception_exit_1;
        }
        assert(var_matches == NULL);
        var_matches = tmp_assign_source_3;
    }
    {
        PyObject *tmp_called_name_2;
        PyObject *tmp_expression_name_5;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_name_1;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_kwargs_name_2;
        tmp_expression_name_5 = GET_STRING_DICT_VALUE(moduledict_jedi$inference$param, (Nuitka_StringObject *)mod_consts[25]);

        if (unlikely(tmp_expression_name_5 == NULL)) {
            tmp_expression_name_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[25]);
        }

        if (tmp_expression_name_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 44;
            type_description_1 = "ooco";
            goto frame_exception_exit_1;
        }
        tmp_called_name_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_5, mod_consts[26]);
        if (tmp_called_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 44;
            type_description_1 = "ooco";
            goto frame_exception_exit_1;
        }
        tmp_tuple_element_2 = mod_consts[27];
        tmp_args_name_1 = PyTuple_New(4);
        PyTuple_SET_ITEM0(tmp_args_name_1, 0, tmp_tuple_element_2);
        CHECK_OBJECT(var_matches);
        tmp_tuple_element_2 = var_matches;
        PyTuple_SET_ITEM0(tmp_args_name_1, 1, tmp_tuple_element_2);
        if (var_argument_values == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[28]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 45;
            type_description_1 = "ooco";
            goto tuple_build_exception_2;
        }

        tmp_tuple_element_2 = var_argument_values;
        PyTuple_SET_ITEM0(tmp_args_name_1, 2, tmp_tuple_element_2);
        if (Nuitka_Cell_GET(var_annotations) == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[29]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 45;
            type_description_1 = "ooco";
            goto tuple_build_exception_2;
        }

        tmp_tuple_element_2 = Nuitka_Cell_GET(var_annotations);
        PyTuple_SET_ITEM0(tmp_args_name_1, 3, tmp_tuple_element_2);
        goto tuple_build_noexception_2;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_2:;
        Py_DECREF(tmp_called_name_2);
        Py_DECREF(tmp_args_name_1);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_2:;
        tmp_kwargs_name_2 = PyDict_Copy(mod_consts[30]);
        frame_653fb585767df404473fbaf01e1b83b7->m_frame.f_lineno = 44;
        tmp_call_result_1 = CALL_FUNCTION(tmp_called_name_2, tmp_args_name_1, tmp_kwargs_name_2);
        Py_DECREF(tmp_called_name_2);
        Py_DECREF(tmp_args_name_1);
        Py_DECREF(tmp_kwargs_name_2);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 44;
            type_description_1 = "ooco";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    if (var_matches == NULL) {

        FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[31]);
        exception_tb = NULL;
        NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
        CHAIN_EXCEPTION(exception_value);

        exception_lineno = 46;
        type_description_1 = "ooco";
        goto frame_exception_exit_1;
    }

    tmp_return_value = var_matches;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_653fb585767df404473fbaf01e1b83b7);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_653fb585767df404473fbaf01e1b83b7);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_653fb585767df404473fbaf01e1b83b7);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_653fb585767df404473fbaf01e1b83b7, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_653fb585767df404473fbaf01e1b83b7->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_653fb585767df404473fbaf01e1b83b7, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_653fb585767df404473fbaf01e1b83b7,
        type_description_1,
        par_self,
        var_argument_values,
        var_annotations,
        var_matches
    );


    // Release cached frame if used for exception.
    if (frame_653fb585767df404473fbaf01e1b83b7 == cache_frame_653fb585767df404473fbaf01e1b83b7) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_653fb585767df404473fbaf01e1b83b7);
        cache_frame_653fb585767df404473fbaf01e1b83b7 = NULL;
    }

    assertFrameObject(frame_653fb585767df404473fbaf01e1b83b7);

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
    Py_XDECREF(var_argument_values);
    var_argument_values = NULL;
    CHECK_OBJECT(var_annotations);
    Py_DECREF(var_annotations);
    var_annotations = NULL;
    Py_XDECREF(var_matches);
    var_matches = NULL;
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
    Py_XDECREF(var_argument_values);
    var_argument_values = NULL;
    CHECK_OBJECT(var_annotations);
    Py_DECREF(var_annotations);
    var_annotations = NULL;
    Py_XDECREF(var_matches);
    var_matches = NULL;
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



struct jedi$inference$param$$$function__4_matches_signature$$$genexpr__1_genexpr_locals {
    PyObject *var_c1;
    PyObject *var_c2;
    PyObject *tmp_contraction_iter_0;
    PyObject *tmp_iter_value_0;
    PyObject *tmp_iter_value_1;
    char const *type_description_1;
    PyObject *exception_type;
    PyObject *exception_value;
    PyTracebackObject *exception_tb;
    int exception_lineno;
    char yield_tmps[1024];
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    int exception_keeper_lineno_2;
};

static PyObject *jedi$inference$param$$$function__4_matches_signature$$$genexpr__1_genexpr_context(struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value) {
    CHECK_OBJECT(generator);
    assert(Nuitka_Generator_Check((PyObject *)generator));
    CHECK_OBJECT_X(yield_return_value);

    // Heap access if used.
    struct jedi$inference$param$$$function__4_matches_signature$$$genexpr__1_genexpr_locals *generator_heap = (struct jedi$inference$param$$$function__4_matches_signature$$$genexpr__1_genexpr_locals *)generator->m_heap_storage;

    // Dispatch to yield based on return label index:
    switch(generator->m_yield_return_index) {
    case 1: goto yield_return_1;
    }

    // Local variable initialization
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_m_frame = NULL;
    generator_heap->var_c1 = NULL;
    generator_heap->var_c2 = NULL;
    generator_heap->tmp_contraction_iter_0 = NULL;
    generator_heap->tmp_iter_value_0 = NULL;
    generator_heap->tmp_iter_value_1 = NULL;
    generator_heap->type_description_1 = NULL;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    // Actual generator function body.
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
        cache_m_frame = MAKE_FUNCTION_FRAME(codeobj_018ac08cfbc51b7f91e3f0184abecae0, module_jedi$inference$param, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    generator->m_frame = cache_m_frame;

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    Py_INCREF(generator->m_frame);
    assert(Py_REFCNT(generator->m_frame) == 2); // Frame stack

#if PYTHON_VERSION >= 0x340
    generator->m_frame->m_frame.f_gen = (PyObject *)generator;
#endif

    assert(generator->m_frame->m_frame.f_back == NULL);
    Py_CLEAR(generator->m_frame->m_frame.f_back);

    generator->m_frame->m_frame.f_back = PyThreadState_GET()->frame;
    Py_INCREF(generator->m_frame->m_frame.f_back);

    PyThreadState_GET()->frame = &generator->m_frame->m_frame;
    Py_INCREF(generator->m_frame);

    Nuitka_Frame_MarkAsExecuting(generator->m_frame);

#if PYTHON_VERSION >= 0x300
    // Accept currently existing exception as the one to publish again when we
    // yield or yield from.
    {
        PyThreadState *thread_state = PyThreadState_GET();

        EXC_TYPE_F(generator) = EXC_TYPE(thread_state);
        if (EXC_TYPE_F(generator) == Py_None) EXC_TYPE_F(generator) = NULL;
        Py_XINCREF(EXC_TYPE_F(generator));
        EXC_VALUE_F(generator) = EXC_VALUE(thread_state);
        Py_XINCREF(EXC_VALUE_F(generator));
        EXC_TRACEBACK_F(generator) = EXC_TRACEBACK(thread_state);
        Py_XINCREF(EXC_TRACEBACK_F(generator));
    }

#endif

    // Framed code:
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_1;
        CHECK_OBJECT(Nuitka_Cell_GET(generator->m_closure[1]));
        tmp_next_source_1 = Nuitka_Cell_GET(generator->m_closure[1]);
        tmp_assign_source_1 = ITERATOR_NEXT(tmp_next_source_1);
        if (tmp_assign_source_1 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_1;
            } else {

                FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
                generator_heap->type_description_1 = "Nooc";
                generator_heap->exception_lineno = 41;
                goto try_except_handler_2;
            }
        }

        {
            PyObject *old = generator_heap->tmp_iter_value_1;
            generator_heap->tmp_iter_value_1 = tmp_assign_source_1;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_2;
        CHECK_OBJECT(generator_heap->tmp_iter_value_1);
        tmp_assign_source_2 = generator_heap->tmp_iter_value_1;
        {
            PyObject *old = generator_heap->var_c1;
            generator_heap->var_c1 = tmp_assign_source_2;
            Py_INCREF(generator_heap->var_c1);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_instance_1;
        if (Nuitka_Cell_GET(generator->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[29]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(generator_heap->exception_value);

            generator_heap->exception_lineno = 43;
            generator_heap->type_description_1 = "Nooc";
            goto try_except_handler_2;
        }

        tmp_called_instance_1 = Nuitka_Cell_GET(generator->m_closure[0]);
        generator->m_frame->m_frame.f_lineno = 43;
        tmp_iter_arg_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[32]);
        if (tmp_iter_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 43;
            generator_heap->type_description_1 = "Nooc";
            goto try_except_handler_2;
        }
        tmp_assign_source_3 = MAKE_ITERATOR(tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 41;
            generator_heap->type_description_1 = "Nooc";
            goto try_except_handler_2;
        }
        {
            PyObject *old = generator_heap->tmp_contraction_iter_0;
            generator_heap->tmp_contraction_iter_0 = tmp_assign_source_3;
            Py_XDECREF(old);
        }

    }
    loop_start_2:;
    {
        PyObject *tmp_next_source_2;
        PyObject *tmp_assign_source_4;
        CHECK_OBJECT(generator_heap->tmp_contraction_iter_0);
        tmp_next_source_2 = generator_heap->tmp_contraction_iter_0;
        tmp_assign_source_4 = ITERATOR_NEXT(tmp_next_source_2);
        if (tmp_assign_source_4 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_2;
            } else {

                FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
                generator_heap->type_description_1 = "Nooc";
                generator_heap->exception_lineno = 41;
                goto try_except_handler_2;
            }
        }

        {
            PyObject *old = generator_heap->tmp_iter_value_0;
            generator_heap->tmp_iter_value_0 = tmp_assign_source_4;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_5;
        CHECK_OBJECT(generator_heap->tmp_iter_value_0);
        tmp_assign_source_5 = generator_heap->tmp_iter_value_0;
        {
            PyObject *old = generator_heap->var_c2;
            generator_heap->var_c2 = tmp_assign_source_5;
            Py_INCREF(generator_heap->var_c2);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_expression_name_1;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_args_element_name_1;
        NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_1;
        if (generator_heap->var_c1 == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[33]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(generator_heap->exception_value);

            generator_heap->exception_lineno = 41;
            generator_heap->type_description_1 = "Nooc";
            goto try_except_handler_2;
        }

        tmp_called_instance_2 = generator_heap->var_c1;
        CHECK_OBJECT(generator_heap->var_c2);
        tmp_args_element_name_1 = generator_heap->var_c2;
        generator->m_frame->m_frame.f_lineno = 41;
        tmp_expression_name_1 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_2, mod_consts[34], tmp_args_element_name_1);
        if (tmp_expression_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 41;
            generator_heap->type_description_1 = "Nooc";
            goto try_except_handler_2;
        }
        Nuitka_PreserveHeap(generator_heap->yield_tmps, &tmp_called_instance_2, sizeof(PyObject *), &tmp_args_element_name_1, sizeof(PyObject *), NULL);
        generator->m_yield_return_index = 1;
        return tmp_expression_name_1;
        yield_return_1:
        Nuitka_RestoreHeap(generator_heap->yield_tmps, &tmp_called_instance_2, sizeof(PyObject *), &tmp_args_element_name_1, sizeof(PyObject *), NULL);
        if (yield_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 41;
            generator_heap->type_description_1 = "Nooc";
            goto try_except_handler_2;
        }
        tmp_yield_result_1 = yield_return_value;
    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


        generator_heap->exception_lineno = 41;
        generator_heap->type_description_1 = "Nooc";
        goto try_except_handler_2;
    }
    goto loop_start_2;
    loop_end_2:;
    Py_XDECREF(generator_heap->tmp_contraction_iter_0);
    generator_heap->tmp_contraction_iter_0 = NULL;
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


        generator_heap->exception_lineno = 41;
        generator_heap->type_description_1 = "Nooc";
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_1;
    // Exception handler code:
    try_except_handler_2:;
    generator_heap->exception_keeper_type_1 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_1 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_1 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_1 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    Py_XDECREF(generator_heap->tmp_iter_value_0);
    generator_heap->tmp_iter_value_0 = NULL;
    Py_XDECREF(generator_heap->tmp_contraction_iter_0);
    generator_heap->tmp_contraction_iter_0 = NULL;
    Py_XDECREF(generator_heap->tmp_iter_value_1);
    generator_heap->tmp_iter_value_1 = NULL;
    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_1;
    generator_heap->exception_value = generator_heap->exception_keeper_value_1;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_1;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_1;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;

    Nuitka_Frame_MarkAsNotExecuting(generator->m_frame);

#if PYTHON_VERSION >= 0x300
    Py_CLEAR(EXC_TYPE_F(generator));
    Py_CLEAR(EXC_VALUE_F(generator));
    Py_CLEAR(EXC_TRACEBACK_F(generator));
#endif

    // Allow re-use of the frame again.
    Py_DECREF(generator->m_frame);
    goto frame_no_exception_1;

    frame_exception_exit_1:;

    // If it's not an exit exception, consider and create a traceback for it.
    if (!EXCEPTION_MATCH_GENERATOR(generator_heap->exception_type)) {
        if (generator_heap->exception_tb == NULL) {
            generator_heap->exception_tb = MAKE_TRACEBACK(generator->m_frame, generator_heap->exception_lineno);
        } else if (generator_heap->exception_tb->tb_frame != &generator->m_frame->m_frame) {
            generator_heap->exception_tb = ADD_TRACEBACK(generator_heap->exception_tb, generator->m_frame, generator_heap->exception_lineno);
        }

        Nuitka_Frame_AttachLocals(
            generator->m_frame,
            generator_heap->type_description_1,
            NULL,
            generator_heap->var_c1,
            generator_heap->var_c2,
            generator->m_closure[0]
        );


        // Release cached frame if used for exception.
        if (generator->m_frame == cache_m_frame) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif

            Py_DECREF(cache_m_frame);
            cache_m_frame = NULL;
        }

        assertFrameObject(generator->m_frame);
    }

#if PYTHON_VERSION >= 0x300
    Py_CLEAR(EXC_TYPE_F(generator));
    Py_CLEAR(EXC_VALUE_F(generator));
    Py_CLEAR(EXC_TRACEBACK_F(generator));
#endif

    Py_DECREF(generator->m_frame);

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    goto try_end_2;
    // Exception handler code:
    try_except_handler_1:;
    generator_heap->exception_keeper_type_2 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_2 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_2 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_2 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    Py_XDECREF(generator_heap->var_c1);
    generator_heap->var_c1 = NULL;
    Py_XDECREF(generator_heap->var_c2);
    generator_heap->var_c2 = NULL;
    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_2;
    generator_heap->exception_value = generator_heap->exception_keeper_value_2;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_2;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:
    try_end_2:;
    Py_XDECREF(generator_heap->tmp_iter_value_0);
    generator_heap->tmp_iter_value_0 = NULL;
    Py_XDECREF(generator_heap->tmp_contraction_iter_0);
    generator_heap->tmp_contraction_iter_0 = NULL;
    Py_XDECREF(generator_heap->tmp_iter_value_1);
    generator_heap->tmp_iter_value_1 = NULL;
    Py_XDECREF(generator_heap->var_c1);
    generator_heap->var_c1 = NULL;
    Py_XDECREF(generator_heap->var_c2);
    generator_heap->var_c2 = NULL;


    return NULL;

    function_exception_exit:
    assert(generator_heap->exception_type);
    RESTORE_ERROR_OCCURRED(generator_heap->exception_type, generator_heap->exception_value, generator_heap->exception_tb);

    return NULL;

}

static PyObject *MAKE_GENERATOR_jedi$inference$param$$$function__4_matches_signature$$$genexpr__1_genexpr(struct Nuitka_CellObject **closure) {
    return Nuitka_Generator_New(
        jedi$inference$param$$$function__4_matches_signature$$$genexpr__1_genexpr_context,
        module_jedi$inference$param,
        mod_consts[35],
#if PYTHON_VERSION >= 0x350
        mod_consts[36],
#endif
        codeobj_018ac08cfbc51b7f91e3f0184abecae0,
        closure,
        2,
        sizeof(struct jedi$inference$param$$$function__4_matches_signature$$$genexpr__1_genexpr_locals)
    );
}


static PyObject *impl_jedi$inference$param$$$function__5___repr__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_91f9af1d9bc27553afe83aac946c295b;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_91f9af1d9bc27553afe83aac946c295b = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_91f9af1d9bc27553afe83aac946c295b)) {
        Py_XDECREF(cache_frame_91f9af1d9bc27553afe83aac946c295b);

#if _DEBUG_REFCOUNTS
        if (cache_frame_91f9af1d9bc27553afe83aac946c295b == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_91f9af1d9bc27553afe83aac946c295b = MAKE_FUNCTION_FRAME(codeobj_91f9af1d9bc27553afe83aac946c295b, module_jedi$inference$param, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_91f9af1d9bc27553afe83aac946c295b->m_type_description == NULL);
    frame_91f9af1d9bc27553afe83aac946c295b = cache_frame_91f9af1d9bc27553afe83aac946c295b;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_91f9af1d9bc27553afe83aac946c295b);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_91f9af1d9bc27553afe83aac946c295b) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_left_name_1;
        PyObject *tmp_right_name_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_expression_name_1;
        PyObject *tmp_expression_name_2;
        tmp_left_name_1 = mod_consts[37];
        CHECK_OBJECT(par_self);
        tmp_expression_name_2 = par_self;
        tmp_expression_name_1 = LOOKUP_ATTRIBUTE_CLASS_SLOT(tmp_expression_name_2);
        if (tmp_expression_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 49;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_1, mod_consts[38]);
        Py_DECREF(tmp_expression_name_1);
        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 49;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_right_name_1 = PyTuple_New(2);
        {
            PyObject *tmp_expression_name_3;
            PyTuple_SET_ITEM(tmp_right_name_1, 0, tmp_tuple_element_1);
            if (par_self == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[17]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 49;
                type_description_1 = "o";
                goto tuple_build_exception_1;
            }

            tmp_expression_name_3 = par_self;
            tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_3, mod_consts[39]);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 49;
                type_description_1 = "o";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_right_name_1, 1, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_right_name_1);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_return_value = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_left_name_1, tmp_right_name_1);
        Py_DECREF(tmp_right_name_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 49;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_91f9af1d9bc27553afe83aac946c295b);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_91f9af1d9bc27553afe83aac946c295b);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_91f9af1d9bc27553afe83aac946c295b);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_91f9af1d9bc27553afe83aac946c295b, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_91f9af1d9bc27553afe83aac946c295b->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_91f9af1d9bc27553afe83aac946c295b, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_91f9af1d9bc27553afe83aac946c295b,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_91f9af1d9bc27553afe83aac946c295b == cache_frame_91f9af1d9bc27553afe83aac946c295b) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_91f9af1d9bc27553afe83aac946c295b);
        cache_frame_91f9af1d9bc27553afe83aac946c295b = NULL;
    }

    assertFrameObject(frame_91f9af1d9bc27553afe83aac946c295b);

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


static PyObject *impl_jedi$inference$param$$$function__6_get_executed_param_names_and_issues(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_function_value = python_pars[0];
    struct Nuitka_CellObject *par_arguments = Nuitka_Cell_New1(python_pars[1]);
    PyObject *var_too_many_args = NULL;
    struct Nuitka_CellObject *var_issues = Nuitka_Cell_Empty();
    PyObject *var_result_params = NULL;
    PyObject *var_param_dict = NULL;
    struct Nuitka_CellObject *var_funcdef = Nuitka_Cell_Empty();
    PyObject *var_default_param_context = NULL;
    PyObject *var_param = NULL;
    struct Nuitka_CellObject *var_unpacked_va = Nuitka_Cell_Empty();
    PyObject *var_var_arg_iterator = NULL;
    PyObject *var_non_matching_keys = NULL;
    PyObject *var_keys_used = NULL;
    PyObject *var_keys_only = NULL;
    PyObject *var_had_multiple_value_error = NULL;
    PyObject *var_is_default = NULL;
    PyObject *var_key = NULL;
    PyObject *var_argument = NULL;
    PyObject *var_key_param = NULL;
    PyObject *var_m = NULL;
    PyObject *var_contextualized_node = NULL;
    PyObject *var_lazy_value_list = NULL;
    PyObject *var_seq = NULL;
    PyObject *var_result_arg = NULL;
    PyObject *var_dct = NULL;
    PyObject *var_k = NULL;
    PyObject *var_lazy_value = NULL;
    PyObject *var_remaining_arguments = NULL;
    PyObject *var_first_key = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_for_loop_2__for_iterator = NULL;
    PyObject *tmp_for_loop_2__iter_value = NULL;
    PyObject *tmp_for_loop_3__for_iterator = NULL;
    PyObject *tmp_for_loop_3__iter_value = NULL;
    PyObject *tmp_for_loop_4__for_iterator = NULL;
    PyObject *tmp_for_loop_4__iter_value = NULL;
    PyObject *tmp_for_loop_5__for_iterator = NULL;
    PyObject *tmp_for_loop_5__iter_value = NULL;
    PyObject *tmp_for_loop_6__for_iterator = NULL;
    PyObject *tmp_for_loop_6__iter_value = NULL;
    PyObject *tmp_for_loop_7__for_iterator = NULL;
    PyObject *tmp_for_loop_7__iter_value = NULL;
    PyObject *tmp_for_loop_8__for_iterator = NULL;
    PyObject *tmp_for_loop_8__iter_value = NULL;
    nuitka_bool tmp_try_except_1__unhandled_indicator = NUITKA_BOOL_UNASSIGNED;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    PyObject *tmp_tuple_unpack_2__element_1 = NULL;
    PyObject *tmp_tuple_unpack_2__element_2 = NULL;
    PyObject *tmp_tuple_unpack_2__source_iter = NULL;
    PyObject *tmp_tuple_unpack_3__element_1 = NULL;
    PyObject *tmp_tuple_unpack_3__element_2 = NULL;
    PyObject *tmp_tuple_unpack_3__source_iter = NULL;
    PyObject *tmp_tuple_unpack_4__element_1 = NULL;
    PyObject *tmp_tuple_unpack_4__element_2 = NULL;
    PyObject *tmp_tuple_unpack_4__source_iter = NULL;
    PyObject *tmp_tuple_unpack_5__element_1 = NULL;
    PyObject *tmp_tuple_unpack_5__element_2 = NULL;
    PyObject *tmp_tuple_unpack_5__source_iter = NULL;
    struct Nuitka_FrameObject *frame_964c825384a76dc7cf8978373a2b79f2;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_iterator_attempt;
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
    PyObject *exception_preserved_type_1;
    PyObject *exception_preserved_value_1;
    PyTracebackObject *exception_preserved_tb_1;
    int tmp_res;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_keeper_type_6;
    PyObject *exception_keeper_value_6;
    PyTracebackObject *exception_keeper_tb_6;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
    PyObject *exception_keeper_type_7;
    PyObject *exception_keeper_value_7;
    PyTracebackObject *exception_keeper_tb_7;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;
    PyObject *exception_keeper_type_8;
    PyObject *exception_keeper_value_8;
    PyTracebackObject *exception_keeper_tb_8;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_8;
    PyObject *exception_keeper_type_9;
    PyObject *exception_keeper_value_9;
    PyTracebackObject *exception_keeper_tb_9;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_9;
    PyObject *exception_preserved_type_2;
    PyObject *exception_preserved_value_2;
    PyTracebackObject *exception_preserved_tb_2;
    PyObject *exception_keeper_type_10;
    PyObject *exception_keeper_value_10;
    PyTracebackObject *exception_keeper_tb_10;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_10;
    PyObject *exception_keeper_type_11;
    PyObject *exception_keeper_value_11;
    PyTracebackObject *exception_keeper_tb_11;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_11;
    PyObject *exception_keeper_type_12;
    PyObject *exception_keeper_value_12;
    PyTracebackObject *exception_keeper_tb_12;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_12;
    PyObject *exception_keeper_type_13;
    PyObject *exception_keeper_value_13;
    PyTracebackObject *exception_keeper_tb_13;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_13;
    PyObject *exception_keeper_type_14;
    PyObject *exception_keeper_value_14;
    PyTracebackObject *exception_keeper_tb_14;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_14;
    PyObject *exception_keeper_type_15;
    PyObject *exception_keeper_value_15;
    PyTracebackObject *exception_keeper_tb_15;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_15;
    PyObject *exception_keeper_type_16;
    PyObject *exception_keeper_value_16;
    PyTracebackObject *exception_keeper_tb_16;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_16;
    PyObject *exception_keeper_type_17;
    PyObject *exception_keeper_value_17;
    PyTracebackObject *exception_keeper_tb_17;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_17;
    PyObject *exception_keeper_type_18;
    PyObject *exception_keeper_value_18;
    PyTracebackObject *exception_keeper_tb_18;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_18;
    PyObject *exception_keeper_type_19;
    PyObject *exception_keeper_value_19;
    PyTracebackObject *exception_keeper_tb_19;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_19;
    PyObject *exception_keeper_type_20;
    PyObject *exception_keeper_value_20;
    PyTracebackObject *exception_keeper_tb_20;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_20;
    PyObject *exception_keeper_type_21;
    PyObject *exception_keeper_value_21;
    PyTracebackObject *exception_keeper_tb_21;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_21;
    PyObject *exception_keeper_type_22;
    PyObject *exception_keeper_value_22;
    PyTracebackObject *exception_keeper_tb_22;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_22;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_964c825384a76dc7cf8978373a2b79f2 = NULL;
    PyObject *exception_keeper_type_23;
    PyObject *exception_keeper_value_23;
    PyTracebackObject *exception_keeper_tb_23;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_23;

    // Actual function body.
    {
        PyObject *tmp_assign_source_1;
        struct Nuitka_CellObject *tmp_closure_1[4];

        tmp_closure_1[0] = par_arguments;
        Py_INCREF(tmp_closure_1[0]);
        tmp_closure_1[1] = var_funcdef;
        Py_INCREF(tmp_closure_1[1]);
        tmp_closure_1[2] = var_issues;
        Py_INCREF(tmp_closure_1[2]);
        tmp_closure_1[3] = var_unpacked_va;
        Py_INCREF(tmp_closure_1[3]);

        tmp_assign_source_1 = MAKE_FUNCTION_jedi$inference$param$$$function__6_get_executed_param_names_and_issues$$$function__1_too_many_args(tmp_closure_1);

        assert(var_too_many_args == NULL);
        var_too_many_args = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = PyList_New(0);
        assert(Nuitka_Cell_GET(var_issues) == NULL);
        PyCell_SET(var_issues, tmp_assign_source_2);

    }
    {
        PyObject *tmp_assign_source_3;
        tmp_assign_source_3 = PyList_New(0);
        assert(var_result_params == NULL);
        var_result_params = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        tmp_assign_source_4 = PyDict_New();
        assert(var_param_dict == NULL);
        var_param_dict = tmp_assign_source_4;
    }
    // Tried code:
    if (isFrameUnusable(cache_frame_964c825384a76dc7cf8978373a2b79f2)) {
        Py_XDECREF(cache_frame_964c825384a76dc7cf8978373a2b79f2);

#if _DEBUG_REFCOUNTS
        if (cache_frame_964c825384a76dc7cf8978373a2b79f2 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_964c825384a76dc7cf8978373a2b79f2 = MAKE_FUNCTION_FRAME(codeobj_964c825384a76dc7cf8978373a2b79f2, module_jedi$inference$param, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_964c825384a76dc7cf8978373a2b79f2->m_type_description == NULL);
    frame_964c825384a76dc7cf8978373a2b79f2 = cache_frame_964c825384a76dc7cf8978373a2b79f2;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_964c825384a76dc7cf8978373a2b79f2);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_964c825384a76dc7cf8978373a2b79f2) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_expression_name_1;
        CHECK_OBJECT(par_function_value);
        tmp_expression_name_1 = par_function_value;
        tmp_assign_source_5 = LOOKUP_ATTRIBUTE(tmp_expression_name_1, mod_consts[42]);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 92;
            type_description_1 = "ococoocoocooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = Nuitka_Cell_GET(var_funcdef);
            PyCell_SET(var_funcdef, tmp_assign_source_5);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_called_instance_1;
        if (par_function_value == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[43]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 96;
            type_description_1 = "ococoocoocooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = par_function_value;
        frame_964c825384a76dc7cf8978373a2b79f2->m_frame.f_lineno = 96;
        tmp_assign_source_6 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[44]);
        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 96;
            type_description_1 = "ococoocoocooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_default_param_context == NULL);
        var_default_param_context = tmp_assign_source_6;
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_instance_2;
        if (Nuitka_Cell_GET(var_funcdef) == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[45]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 98;
            type_description_1 = "ococoocoocooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_2 = Nuitka_Cell_GET(var_funcdef);
        frame_964c825384a76dc7cf8978373a2b79f2->m_frame.f_lineno = 98;
        tmp_iter_arg_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_2, mod_consts[46]);
        if (tmp_iter_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 98;
            type_description_1 = "ococoocoocooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_7 = MAKE_ITERATOR(tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 98;
            type_description_1 = "ococoocoocooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(tmp_for_loop_1__for_iterator == NULL);
        tmp_for_loop_1__for_iterator = tmp_assign_source_7;
    }
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_8;
        CHECK_OBJECT(tmp_for_loop_1__for_iterator);
        tmp_next_source_1 = tmp_for_loop_1__for_iterator;
        tmp_assign_source_8 = ITERATOR_NEXT(tmp_next_source_1);
        if (tmp_assign_source_8 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_1;
            } else {

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                type_description_1 = "ococoocoocooooooooooooooooooo";
                exception_lineno = 98;
                goto try_except_handler_2;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_8;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_9;
        CHECK_OBJECT(tmp_for_loop_1__iter_value);
        tmp_assign_source_9 = tmp_for_loop_1__iter_value;
        {
            PyObject *old = var_param;
            var_param = tmp_assign_source_9;
            Py_INCREF(var_param);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_ass_subscript_1;
        PyObject *tmp_expression_name_2;
        PyObject *tmp_expression_name_3;
        CHECK_OBJECT(var_param);
        tmp_ass_subvalue_1 = var_param;
        if (var_param_dict == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[47]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 99;
            type_description_1 = "ococoocoocooooooooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_ass_subscribed_1 = var_param_dict;
        CHECK_OBJECT(var_param);
        tmp_expression_name_3 = var_param;
        tmp_expression_name_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_3, mod_consts[12]);
        if (tmp_expression_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 99;
            type_description_1 = "ococoocoocooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_ass_subscript_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_2, mod_consts[48]);
        Py_DECREF(tmp_expression_name_2);
        if (tmp_ass_subscript_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 99;
            type_description_1 = "ococoocoocooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
        Py_DECREF(tmp_ass_subscript_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 99;
            type_description_1 = "ococoocoocooooooooooooooooooo";
            goto try_except_handler_2;
        }
    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 98;
        type_description_1 = "ococoocoocooooooooooooooooooo";
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
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

    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;
    Py_XDECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;
    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;
    Py_XDECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_list_arg_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_expression_name_4;
        PyObject *tmp_args_element_name_1;
        if (Nuitka_Cell_GET(par_arguments) == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[13]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 100;
            type_description_1 = "ococoocoocooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_4 = Nuitka_Cell_GET(par_arguments);
        tmp_called_name_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_4, mod_consts[49]);
        if (tmp_called_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 100;
            type_description_1 = "ococoocoocooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (Nuitka_Cell_GET(var_funcdef) == NULL) {
            Py_DECREF(tmp_called_name_1);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[45]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 100;
            type_description_1 = "ococoocoocooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_name_1 = Nuitka_Cell_GET(var_funcdef);
        frame_964c825384a76dc7cf8978373a2b79f2->m_frame.f_lineno = 100;
        tmp_list_arg_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_1, tmp_args_element_name_1);
        Py_DECREF(tmp_called_name_1);
        if (tmp_list_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 100;
            type_description_1 = "ococoocoocooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_10 = MAKE_LIST(tmp_list_arg_1);
        Py_DECREF(tmp_list_arg_1);
        if (tmp_assign_source_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 100;
            type_description_1 = "ococoocoocooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = Nuitka_Cell_GET(var_unpacked_va);
            PyCell_SET(var_unpacked_va, tmp_assign_source_10);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_called_name_2;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_iter_arg_2;
        tmp_called_name_2 = GET_STRING_DICT_VALUE(moduledict_jedi$inference$param, (Nuitka_StringObject *)mod_consts[50]);

        if (unlikely(tmp_called_name_2 == NULL)) {
            tmp_called_name_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[50]);
        }

        if (tmp_called_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 101;
            type_description_1 = "ococoocoocooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(Nuitka_Cell_GET(var_unpacked_va));
        tmp_iter_arg_2 = Nuitka_Cell_GET(var_unpacked_va);
        tmp_args_element_name_2 = MAKE_ITERATOR(tmp_iter_arg_2);
        if (tmp_args_element_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 101;
            type_description_1 = "ococoocoocooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_964c825384a76dc7cf8978373a2b79f2->m_frame.f_lineno = 101;
        tmp_assign_source_11 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_2, tmp_args_element_name_2);
        Py_DECREF(tmp_args_element_name_2);
        if (tmp_assign_source_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 101;
            type_description_1 = "ococoocoocooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_var_arg_iterator == NULL);
        var_var_arg_iterator = tmp_assign_source_11;
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_called_name_3;
        PyObject *tmp_args_element_name_3;
        tmp_called_name_3 = GET_STRING_DICT_VALUE(moduledict_jedi$inference$param, (Nuitka_StringObject *)mod_consts[51]);

        if (unlikely(tmp_called_name_3 == NULL)) {
            tmp_called_name_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[51]);
        }

        if (tmp_called_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 103;
            type_description_1 = "ococoocoocooooooooooooooooooo";
            goto frame_exception_exit_1;
        }


        tmp_args_element_name_3 = MAKE_FUNCTION_jedi$inference$param$$$function__6_get_executed_param_names_and_issues$$$function__2_lambda();

        frame_964c825384a76dc7cf8978373a2b79f2->m_frame.f_lineno = 103;
        tmp_assign_source_12 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_3, tmp_args_element_name_3);
        Py_DECREF(tmp_args_element_name_3);
        if (tmp_assign_source_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 103;
            type_description_1 = "ococoocoocooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_non_matching_keys == NULL);
        var_non_matching_keys = tmp_assign_source_12;
    }
    {
        PyObject *tmp_assign_source_13;
        tmp_assign_source_13 = PyDict_New();
        assert(var_keys_used == NULL);
        var_keys_used = tmp_assign_source_13;
    }
    {
        PyObject *tmp_assign_source_14;
        tmp_assign_source_14 = Py_False;
        assert(var_keys_only == NULL);
        Py_INCREF(tmp_assign_source_14);
        var_keys_only = tmp_assign_source_14;
    }
    {
        PyObject *tmp_assign_source_15;
        tmp_assign_source_15 = Py_False;
        assert(var_had_multiple_value_error == NULL);
        Py_INCREF(tmp_assign_source_15);
        var_had_multiple_value_error = tmp_assign_source_15;
    }
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_iter_arg_3;
        PyObject *tmp_called_instance_3;
        if (Nuitka_Cell_GET(var_funcdef) == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[45]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 107;
            type_description_1 = "ococoocoocooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_3 = Nuitka_Cell_GET(var_funcdef);
        frame_964c825384a76dc7cf8978373a2b79f2->m_frame.f_lineno = 107;
        tmp_iter_arg_3 = CALL_METHOD_NO_ARGS(tmp_called_instance_3, mod_consts[46]);
        if (tmp_iter_arg_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 107;
            type_description_1 = "ococoocoocooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_16 = MAKE_ITERATOR(tmp_iter_arg_3);
        Py_DECREF(tmp_iter_arg_3);
        if (tmp_assign_source_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 107;
            type_description_1 = "ococoocoocooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(tmp_for_loop_2__for_iterator == NULL);
        tmp_for_loop_2__for_iterator = tmp_assign_source_16;
    }
    // Tried code:
    loop_start_2:;
    {
        PyObject *tmp_next_source_2;
        PyObject *tmp_assign_source_17;
        CHECK_OBJECT(tmp_for_loop_2__for_iterator);
        tmp_next_source_2 = tmp_for_loop_2__for_iterator;
        tmp_assign_source_17 = ITERATOR_NEXT(tmp_next_source_2);
        if (tmp_assign_source_17 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_2;
            } else {

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                type_description_1 = "ococoocoocooooooooooooooooooo";
                exception_lineno = 107;
                goto try_except_handler_3;
            }
        }

        {
            PyObject *old = tmp_for_loop_2__iter_value;
            tmp_for_loop_2__iter_value = tmp_assign_source_17;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_18;
        CHECK_OBJECT(tmp_for_loop_2__iter_value);
        tmp_assign_source_18 = tmp_for_loop_2__iter_value;
        {
            PyObject *old = var_param;
            var_param = tmp_assign_source_18;
            Py_INCREF(var_param);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_19;
        tmp_assign_source_19 = Py_False;
        {
            PyObject *old = var_is_default;
            var_is_default = tmp_assign_source_19;
            Py_INCREF(var_is_default);
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_iter_arg_4;
        PyObject *tmp_next_arg_1;
        PyObject *tmp_next_default_1;
        if (var_var_arg_iterator == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[54]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 113;
            type_description_1 = "ococoocoocooooooooooooooooooo";
            goto try_except_handler_4;
        }

        tmp_next_arg_1 = var_var_arg_iterator;
        tmp_next_default_1 = mod_consts[55];
        tmp_iter_arg_4 = BUILTIN_NEXT2(tmp_next_arg_1, tmp_next_default_1);
        if (tmp_iter_arg_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 113;
            type_description_1 = "ococoocoocooooooooooooooooooo";
            goto try_except_handler_4;
        }
        tmp_assign_source_20 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_4);
        Py_DECREF(tmp_iter_arg_4);
        if (tmp_assign_source_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 113;
            type_description_1 = "ococoocoocooooooooooooooooooo";
            goto try_except_handler_4;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__source_iter;
            tmp_tuple_unpack_1__source_iter = tmp_assign_source_20;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_unpack_1;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_21 = UNPACK_NEXT(tmp_unpack_1, 0, 2);
        if (tmp_assign_source_21 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ococoocoocooooooooooooooooooo";
            exception_lineno = 113;
            goto try_except_handler_5;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__element_1;
            tmp_tuple_unpack_1__element_1 = tmp_assign_source_21;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_22;
        PyObject *tmp_unpack_2;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_22 = UNPACK_NEXT(tmp_unpack_2, 1, 2);
        if (tmp_assign_source_22 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ococoocoocooooooooooooooooooo";
            exception_lineno = 113;
            goto try_except_handler_5;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__element_2;
            tmp_tuple_unpack_1__element_2 = tmp_assign_source_22;
            Py_XDECREF(old);
        }

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

                    type_description_1 = "ococoocoocooooooooooooooooooo";
                    exception_lineno = 113;
                    goto try_except_handler_5;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[56];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "ococoocoocooooooooooooooooooo";
            exception_lineno = 113;
            goto try_except_handler_5;
        }
    }
    goto try_end_2;
    // Exception handler code:
    try_except_handler_5:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_keeper_lineno_2 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_tuple_unpack_1__source_iter);
    tmp_tuple_unpack_1__source_iter = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto try_except_handler_4;
    // End of try:
    try_end_2:;
    goto try_end_3;
    // Exception handler code:
    try_except_handler_4:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto try_except_handler_3;
    // End of try:
    try_end_3:;
    Py_XDECREF(tmp_tuple_unpack_1__source_iter);
    tmp_tuple_unpack_1__source_iter = NULL;
    {
        PyObject *tmp_assign_source_23;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
        tmp_assign_source_23 = tmp_tuple_unpack_1__element_1;
        {
            PyObject *old = var_key;
            var_key = tmp_assign_source_23;
            Py_INCREF(var_key);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_24;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
        tmp_assign_source_24 = tmp_tuple_unpack_1__element_2;
        {
            PyObject *old = var_argument;
            var_argument = tmp_assign_source_24;
            Py_INCREF(var_argument);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;

    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;
    loop_start_3:;
    {
        bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        if (var_key == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[57]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 114;
            type_description_1 = "ococoocoocooooooooooooooooooo";
            goto try_except_handler_3;
        }

        tmp_compexpr_left_1 = var_key;
        tmp_compexpr_right_1 = Py_None;
        tmp_condition_result_1 = (tmp_compexpr_left_1 == tmp_compexpr_right_1) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    goto loop_end_3;
    branch_no_1:;
    {
        PyObject *tmp_assign_source_25;
        tmp_assign_source_25 = Py_True;
        {
            PyObject *old = var_keys_only;
            var_keys_only = tmp_assign_source_25;
            Py_INCREF(var_keys_only);
            Py_XDECREF(old);
        }

    }
    {
        nuitka_bool tmp_assign_source_26;
        tmp_assign_source_26 = NUITKA_BOOL_TRUE;
        tmp_try_except_1__unhandled_indicator = tmp_assign_source_26;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_27;
        PyObject *tmp_expression_name_5;
        PyObject *tmp_subscript_name_1;
        if (var_param_dict == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[47]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 117;
            type_description_1 = "ococoocoocooooooooooooooooooo";
            goto try_except_handler_6;
        }

        tmp_expression_name_5 = var_param_dict;
        if (var_key == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[57]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 117;
            type_description_1 = "ococoocoocooooooooooooooooooo";
            goto try_except_handler_6;
        }

        tmp_subscript_name_1 = var_key;
        tmp_assign_source_27 = LOOKUP_SUBSCRIPT(tmp_expression_name_5, tmp_subscript_name_1);
        if (tmp_assign_source_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 117;
            type_description_1 = "ococoocoocooooooooooooooooooo";
            goto try_except_handler_6;
        }
        {
            PyObject *old = var_key_param;
            var_key_param = tmp_assign_source_27;
            Py_XDECREF(old);
        }

    }
    goto try_end_4;
    // Exception handler code:
    try_except_handler_6:;
    exception_keeper_type_4 = exception_type;
    exception_keeper_value_4 = exception_value;
    exception_keeper_tb_4 = exception_tb;
    exception_keeper_lineno_4 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    {
        nuitka_bool tmp_assign_source_28;
        tmp_assign_source_28 = NUITKA_BOOL_FALSE;
        tmp_try_except_1__unhandled_indicator = tmp_assign_source_28;
    }
    // Preserve existing published exception id 1.
    GET_CURRENT_EXCEPTION(&exception_preserved_type_1, &exception_preserved_value_1, &exception_preserved_tb_1);

    if (exception_keeper_tb_4 == NULL) {
        exception_keeper_tb_4 = MAKE_TRACEBACK(frame_964c825384a76dc7cf8978373a2b79f2, exception_keeper_lineno_4);
    } else if (exception_keeper_lineno_4 != 0) {
        exception_keeper_tb_4 = ADD_TRACEBACK(exception_keeper_tb_4, frame_964c825384a76dc7cf8978373a2b79f2, exception_keeper_lineno_4);
    }

    NORMALIZE_EXCEPTION(&exception_keeper_type_4, &exception_keeper_value_4, &exception_keeper_tb_4);
    ATTACH_TRACEBACK_TO_EXCEPTION_VALUE(exception_keeper_value_4, exception_keeper_tb_4);
    PUBLISH_EXCEPTION(&exception_keeper_type_4, &exception_keeper_value_4, &exception_keeper_tb_4);
    // Tried code:
    {
        bool tmp_condition_result_2;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        tmp_compexpr_left_2 = EXC_TYPE(PyThreadState_GET());
        tmp_compexpr_right_2 = PyExc_KeyError;
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_compexpr_left_2, tmp_compexpr_right_2);
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
        PyObject *tmp_ass_subvalue_2;
        PyObject *tmp_ass_subscribed_2;
        PyObject *tmp_ass_subscript_2;
        if (var_argument == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[4]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 119;
            type_description_1 = "ococoocoocooooooooooooooooooo";
            goto try_except_handler_7;
        }

        tmp_ass_subvalue_2 = var_argument;
        if (var_non_matching_keys == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[58]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 119;
            type_description_1 = "ococoocoocooooooooooooooooooo";
            goto try_except_handler_7;
        }

        tmp_ass_subscribed_2 = var_non_matching_keys;
        if (var_key == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[57]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 119;
            type_description_1 = "ococoocoocooooooooooooooooooo";
            goto try_except_handler_7;
        }

        tmp_ass_subscript_2 = var_key;
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 119;
            type_description_1 = "ococoocoocooooooooooooooooooo";
            goto try_except_handler_7;
        }
    }
    goto branch_end_2;
    branch_no_2:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 116;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_964c825384a76dc7cf8978373a2b79f2->m_frame) frame_964c825384a76dc7cf8978373a2b79f2->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "ococoocoocooooooooooooooooooo";
    goto try_except_handler_7;
    branch_end_2:;
    goto try_end_5;
    // Exception handler code:
    try_except_handler_7:;
    exception_keeper_type_5 = exception_type;
    exception_keeper_value_5 = exception_value;
    exception_keeper_tb_5 = exception_tb;
    exception_keeper_lineno_5 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1);

    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto try_except_handler_3;
    // End of try:
    try_end_5:;
    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1);

    goto try_end_4;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_4:;
    {
        bool tmp_condition_result_3;
        nuitka_bool tmp_compexpr_left_3;
        nuitka_bool tmp_compexpr_right_3;
        assert(tmp_try_except_1__unhandled_indicator != NUITKA_BOOL_UNASSIGNED);
        tmp_compexpr_left_3 = tmp_try_except_1__unhandled_indicator;
        tmp_compexpr_right_3 = NUITKA_BOOL_TRUE;
        tmp_condition_result_3 = (tmp_compexpr_left_3 == tmp_compexpr_right_3) ? true : false;
        if (tmp_condition_result_3 != false) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        bool tmp_condition_result_4;
        PyObject *tmp_compexpr_left_4;
        PyObject *tmp_compexpr_right_4;
        if (var_key == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[57]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 121;
            type_description_1 = "ococoocoocooooooooooooooooooo";
            goto try_except_handler_3;
        }

        tmp_compexpr_left_4 = var_key;
        if (var_keys_used == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[59]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 121;
            type_description_1 = "ococoocoocooooooooooooooooooo";
            goto try_except_handler_3;
        }

        tmp_compexpr_right_4 = var_keys_used;
        tmp_res = PySequence_Contains(tmp_compexpr_right_4, tmp_compexpr_left_4);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 121;
            type_description_1 = "ococoocoocooooooooooooooooooo";
            goto try_except_handler_3;
        }
        tmp_condition_result_4 = (tmp_res == 1) ? true : false;
        if (tmp_condition_result_4 != false) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    {
        PyObject *tmp_assign_source_29;
        tmp_assign_source_29 = Py_True;
        {
            PyObject *old = var_had_multiple_value_error;
            var_had_multiple_value_error = tmp_assign_source_29;
            Py_INCREF(var_had_multiple_value_error);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_30;
        PyObject *tmp_left_name_1;
        PyObject *tmp_right_name_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_expression_name_6;
        tmp_left_name_1 = mod_consts[60];
        if (Nuitka_Cell_GET(var_funcdef) == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[45]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 124;
            type_description_1 = "ococoocoocooooooooooooooooooo";
            goto try_except_handler_3;
        }

        tmp_expression_name_6 = Nuitka_Cell_GET(var_funcdef);
        tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_6, mod_consts[12]);
        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 124;
            type_description_1 = "ococoocoocooooooooooooooooooo";
            goto try_except_handler_3;
        }
        tmp_right_name_1 = PyTuple_New(2);
        PyTuple_SET_ITEM(tmp_right_name_1, 0, tmp_tuple_element_1);
        if (var_key == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[57]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 124;
            type_description_1 = "ococoocoocooooooooooooooooooo";
            goto tuple_build_exception_1;
        }

        tmp_tuple_element_1 = var_key;
        PyTuple_SET_ITEM0(tmp_right_name_1, 1, tmp_tuple_element_1);
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_right_name_1);
        goto try_except_handler_3;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_assign_source_30 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_left_name_1, tmp_right_name_1);
        Py_DECREF(tmp_right_name_1);
        if (tmp_assign_source_30 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 123;
            type_description_1 = "ococoocoocooooooooooooooooooo";
            goto try_except_handler_3;
        }
        {
            PyObject *old = var_m;
            var_m = tmp_assign_source_30;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_31;
        PyObject *tmp_iter_arg_5;
        PyObject *tmp_called_instance_4;
        if (Nuitka_Cell_GET(par_arguments) == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[13]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 125;
            type_description_1 = "ococoocoocooooooooooooooooooo";
            goto try_except_handler_3;
        }

        tmp_called_instance_4 = Nuitka_Cell_GET(par_arguments);
        frame_964c825384a76dc7cf8978373a2b79f2->m_frame.f_lineno = 125;
        tmp_iter_arg_5 = CALL_METHOD_NO_ARGS(tmp_called_instance_4, mod_consts[61]);
        if (tmp_iter_arg_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 125;
            type_description_1 = "ococoocoocooooooooooooooooooo";
            goto try_except_handler_3;
        }
        tmp_assign_source_31 = MAKE_ITERATOR(tmp_iter_arg_5);
        Py_DECREF(tmp_iter_arg_5);
        if (tmp_assign_source_31 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 125;
            type_description_1 = "ococoocoocooooooooooooooooooo";
            goto try_except_handler_3;
        }
        {
            PyObject *old = tmp_for_loop_3__for_iterator;
            tmp_for_loop_3__for_iterator = tmp_assign_source_31;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    loop_start_4:;
    {
        PyObject *tmp_next_source_3;
        PyObject *tmp_assign_source_32;
        CHECK_OBJECT(tmp_for_loop_3__for_iterator);
        tmp_next_source_3 = tmp_for_loop_3__for_iterator;
        tmp_assign_source_32 = ITERATOR_NEXT(tmp_next_source_3);
        if (tmp_assign_source_32 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_4;
            } else {

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                type_description_1 = "ococoocoocooooooooooooooooooo";
                exception_lineno = 125;
                goto try_except_handler_8;
            }
        }

        {
            PyObject *old = tmp_for_loop_3__iter_value;
            tmp_for_loop_3__iter_value = tmp_assign_source_32;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_33;
        CHECK_OBJECT(tmp_for_loop_3__iter_value);
        tmp_assign_source_33 = tmp_for_loop_3__iter_value;
        {
            PyObject *old = var_contextualized_node;
            var_contextualized_node = tmp_assign_source_33;
            Py_INCREF(var_contextualized_node);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_called_name_4;
        PyObject *tmp_expression_name_7;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_called_name_5;
        PyObject *tmp_expression_name_8;
        PyObject *tmp_args_name_1;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_expression_name_9;
        PyObject *tmp_kwargs_name_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        if (Nuitka_Cell_GET(var_issues) == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[62]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 126;
            type_description_1 = "ococoocoocooooooooooooooooooo";
            goto try_except_handler_8;
        }

        tmp_expression_name_7 = Nuitka_Cell_GET(var_issues);
        tmp_called_name_4 = LOOKUP_ATTRIBUTE(tmp_expression_name_7, mod_consts[63]);
        if (tmp_called_name_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 126;
            type_description_1 = "ococoocoocooooooooooooooooooo";
            goto try_except_handler_8;
        }
        tmp_expression_name_8 = GET_STRING_DICT_VALUE(moduledict_jedi$inference$param, (Nuitka_StringObject *)mod_consts[6]);

        if (unlikely(tmp_expression_name_8 == NULL)) {
            tmp_expression_name_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
        }

        if (tmp_expression_name_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_4);

            exception_lineno = 127;
            type_description_1 = "ococoocoocooooooooooooooooooo";
            goto try_except_handler_8;
        }
        tmp_called_name_5 = LOOKUP_ATTRIBUTE(tmp_expression_name_8, mod_consts[7]);
        if (tmp_called_name_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_4);

            exception_lineno = 127;
            type_description_1 = "ococoocoocooooooooooooooooooo";
            goto try_except_handler_8;
        }
        CHECK_OBJECT(var_contextualized_node);
        tmp_expression_name_9 = var_contextualized_node;
        tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_9, mod_consts[9]);
        if (tmp_tuple_element_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_4);
            Py_DECREF(tmp_called_name_5);

            exception_lineno = 127;
            type_description_1 = "ococoocoocooooooooooooooooooo";
            goto try_except_handler_8;
        }
        tmp_args_name_1 = PyTuple_New(3);
        {
            PyObject *tmp_expression_name_10;
            PyTuple_SET_ITEM(tmp_args_name_1, 0, tmp_tuple_element_2);
            tmp_tuple_element_2 = mod_consts[64];
            PyTuple_SET_ITEM0(tmp_args_name_1, 1, tmp_tuple_element_2);
            if (var_contextualized_node == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[65]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 129;
                type_description_1 = "ococoocoocooooooooooooooooooo";
                goto tuple_build_exception_2;
            }

            tmp_expression_name_10 = var_contextualized_node;
            tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_10, mod_consts[5]);
            if (tmp_tuple_element_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 129;
                type_description_1 = "ococoocoocooooooooooooooooooo";
                goto tuple_build_exception_2;
            }
            PyTuple_SET_ITEM(tmp_args_name_1, 2, tmp_tuple_element_2);
        }
        goto tuple_build_noexception_2;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_2:;
        Py_DECREF(tmp_called_name_4);
        Py_DECREF(tmp_called_name_5);
        Py_DECREF(tmp_args_name_1);
        goto try_except_handler_8;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_2:;
        tmp_dict_key_1 = mod_consts[66];
        if (var_m == NULL) {
            Py_DECREF(tmp_called_name_4);
            Py_DECREF(tmp_called_name_5);
            Py_DECREF(tmp_args_name_1);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[67]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 129;
            type_description_1 = "ococoocoocooooooooooooooooooo";
            goto try_except_handler_8;
        }

        tmp_dict_value_1 = var_m;
        tmp_kwargs_name_1 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_kwargs_name_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        frame_964c825384a76dc7cf8978373a2b79f2->m_frame.f_lineno = 127;
        tmp_args_element_name_4 = CALL_FUNCTION(tmp_called_name_5, tmp_args_name_1, tmp_kwargs_name_1);
        Py_DECREF(tmp_called_name_5);
        Py_DECREF(tmp_args_name_1);
        Py_DECREF(tmp_kwargs_name_1);
        if (tmp_args_element_name_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_4);

            exception_lineno = 127;
            type_description_1 = "ococoocoocooooooooooooooooooo";
            goto try_except_handler_8;
        }
        frame_964c825384a76dc7cf8978373a2b79f2->m_frame.f_lineno = 126;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_4, tmp_args_element_name_4);
        Py_DECREF(tmp_called_name_4);
        Py_DECREF(tmp_args_element_name_4);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 126;
            type_description_1 = "ococoocoocooooooooooooooooooo";
            goto try_except_handler_8;
        }
        Py_DECREF(tmp_call_result_1);
    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 125;
        type_description_1 = "ococoocoocooooooooooooooooooo";
        goto try_except_handler_8;
    }
    goto loop_start_4;
    loop_end_4:;
    goto try_end_6;
    // Exception handler code:
    try_except_handler_8:;
    exception_keeper_type_6 = exception_type;
    exception_keeper_value_6 = exception_value;
    exception_keeper_tb_6 = exception_tb;
    exception_keeper_lineno_6 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_for_loop_3__iter_value);
    tmp_for_loop_3__iter_value = NULL;
    Py_XDECREF(tmp_for_loop_3__for_iterator);
    tmp_for_loop_3__for_iterator = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_6;
    exception_value = exception_keeper_value_6;
    exception_tb = exception_keeper_tb_6;
    exception_lineno = exception_keeper_lineno_6;

    goto try_except_handler_3;
    // End of try:
    try_end_6:;
    Py_XDECREF(tmp_for_loop_3__iter_value);
    tmp_for_loop_3__iter_value = NULL;
    Py_XDECREF(tmp_for_loop_3__for_iterator);
    tmp_for_loop_3__for_iterator = NULL;
    goto branch_end_4;
    branch_no_4:;
    {
        PyObject *tmp_ass_subvalue_3;
        PyObject *tmp_called_name_6;
        PyObject *tmp_args_element_name_5;
        PyObject *tmp_args_element_name_6;
        PyObject *tmp_args_element_name_7;
        PyObject *tmp_args_element_name_8;
        PyObject *tmp_ass_subscribed_3;
        PyObject *tmp_ass_subscript_3;
        tmp_called_name_6 = GET_STRING_DICT_VALUE(moduledict_jedi$inference$param, (Nuitka_StringObject *)mod_consts[68]);

        if (unlikely(tmp_called_name_6 == NULL)) {
            tmp_called_name_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[68]);
        }

        if (tmp_called_name_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 132;
            type_description_1 = "ococoocoocooooooooooooooooooo";
            goto try_except_handler_3;
        }
        if (par_function_value == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[43]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 133;
            type_description_1 = "ococoocoocooooooooooooooooooo";
            goto try_except_handler_3;
        }

        tmp_args_element_name_5 = par_function_value;
        if (Nuitka_Cell_GET(par_arguments) == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[13]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 133;
            type_description_1 = "ococoocoocooooooooooooooooooo";
            goto try_except_handler_3;
        }

        tmp_args_element_name_6 = Nuitka_Cell_GET(par_arguments);
        if (var_key_param == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[69]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 133;
            type_description_1 = "ococoocoocooooooooooooooooooo";
            goto try_except_handler_3;
        }

        tmp_args_element_name_7 = var_key_param;
        if (var_argument == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[4]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 133;
            type_description_1 = "ococoocoocooooooooooooooooooo";
            goto try_except_handler_3;
        }

        tmp_args_element_name_8 = var_argument;
        frame_964c825384a76dc7cf8978373a2b79f2->m_frame.f_lineno = 132;
        {
            PyObject *call_args[] = {tmp_args_element_name_5, tmp_args_element_name_6, tmp_args_element_name_7, tmp_args_element_name_8};
            tmp_ass_subvalue_3 = CALL_FUNCTION_WITH_ARGS4(tmp_called_name_6, call_args);
        }

        if (tmp_ass_subvalue_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 132;
            type_description_1 = "ococoocoocooooooooooooooooooo";
            goto try_except_handler_3;
        }
        if (var_keys_used == NULL) {
            Py_DECREF(tmp_ass_subvalue_3);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[59]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 132;
            type_description_1 = "ococoocoocooooooooooooooooooo";
            goto try_except_handler_3;
        }

        tmp_ass_subscribed_3 = var_keys_used;
        if (var_key == NULL) {
            Py_DECREF(tmp_ass_subvalue_3);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[57]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 132;
            type_description_1 = "ococoocoocooooooooooooooooooo";
            goto try_except_handler_3;
        }

        tmp_ass_subscript_3 = var_key;
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_3, tmp_ass_subscript_3, tmp_ass_subvalue_3);
        Py_DECREF(tmp_ass_subvalue_3);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 132;
            type_description_1 = "ococoocoocooooooooooooooooooo";
            goto try_except_handler_3;
        }
    }
    branch_end_4:;
    branch_no_3:;
    // Tried code:
    {
        PyObject *tmp_assign_source_34;
        PyObject *tmp_iter_arg_6;
        PyObject *tmp_next_arg_2;
        PyObject *tmp_next_default_2;
        if (var_var_arg_iterator == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[54]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 134;
            type_description_1 = "ococoocoocooooooooooooooooooo";
            goto try_except_handler_9;
        }

        tmp_next_arg_2 = var_var_arg_iterator;
        tmp_next_default_2 = mod_consts[55];
        tmp_iter_arg_6 = BUILTIN_NEXT2(tmp_next_arg_2, tmp_next_default_2);
        if (tmp_iter_arg_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 134;
            type_description_1 = "ococoocoocooooooooooooooooooo";
            goto try_except_handler_9;
        }
        tmp_assign_source_34 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_6);
        Py_DECREF(tmp_iter_arg_6);
        if (tmp_assign_source_34 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 134;
            type_description_1 = "ococoocoocooooooooooooooooooo";
            goto try_except_handler_9;
        }
        {
            PyObject *old = tmp_tuple_unpack_2__source_iter;
            tmp_tuple_unpack_2__source_iter = tmp_assign_source_34;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_35;
        PyObject *tmp_unpack_3;
        CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
        tmp_unpack_3 = tmp_tuple_unpack_2__source_iter;
        tmp_assign_source_35 = UNPACK_NEXT(tmp_unpack_3, 0, 2);
        if (tmp_assign_source_35 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ococoocoocooooooooooooooooooo";
            exception_lineno = 134;
            goto try_except_handler_10;
        }
        {
            PyObject *old = tmp_tuple_unpack_2__element_1;
            tmp_tuple_unpack_2__element_1 = tmp_assign_source_35;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_36;
        PyObject *tmp_unpack_4;
        CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
        tmp_unpack_4 = tmp_tuple_unpack_2__source_iter;
        tmp_assign_source_36 = UNPACK_NEXT(tmp_unpack_4, 1, 2);
        if (tmp_assign_source_36 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ococoocoocooooooooooooooooooo";
            exception_lineno = 134;
            goto try_except_handler_10;
        }
        {
            PyObject *old = tmp_tuple_unpack_2__element_2;
            tmp_tuple_unpack_2__element_2 = tmp_assign_source_36;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_iterator_name_2;
        CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
        tmp_iterator_name_2 = tmp_tuple_unpack_2__source_iter;
        // Check if iterator has left-over elements.
        CHECK_OBJECT(tmp_iterator_name_2); assert(HAS_ITERNEXT(tmp_iterator_name_2));

        tmp_iterator_attempt = (*Py_TYPE(tmp_iterator_name_2)->tp_iternext)(tmp_iterator_name_2);

        if (likely(tmp_iterator_attempt == NULL)) {
            PyObject *error = GET_ERROR_OCCURRED();

            if (error != NULL) {
                if (EXCEPTION_MATCH_BOOL_SINGLE(error, PyExc_StopIteration)) {
                    CLEAR_ERROR_OCCURRED();
                } else {
                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);

                    type_description_1 = "ococoocoocooooooooooooooooooo";
                    exception_lineno = 134;
                    goto try_except_handler_10;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[56];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "ococoocoocooooooooooooooooooo";
            exception_lineno = 134;
            goto try_except_handler_10;
        }
    }
    goto try_end_7;
    // Exception handler code:
    try_except_handler_10:;
    exception_keeper_type_7 = exception_type;
    exception_keeper_value_7 = exception_value;
    exception_keeper_tb_7 = exception_tb;
    exception_keeper_lineno_7 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_tuple_unpack_2__source_iter);
    tmp_tuple_unpack_2__source_iter = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_7;
    exception_value = exception_keeper_value_7;
    exception_tb = exception_keeper_tb_7;
    exception_lineno = exception_keeper_lineno_7;

    goto try_except_handler_9;
    // End of try:
    try_end_7:;
    goto try_end_8;
    // Exception handler code:
    try_except_handler_9:;
    exception_keeper_type_8 = exception_type;
    exception_keeper_value_8 = exception_value;
    exception_keeper_tb_8 = exception_tb;
    exception_keeper_lineno_8 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_tuple_unpack_2__element_1);
    tmp_tuple_unpack_2__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_2__element_2);
    tmp_tuple_unpack_2__element_2 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_8;
    exception_value = exception_keeper_value_8;
    exception_tb = exception_keeper_tb_8;
    exception_lineno = exception_keeper_lineno_8;

    goto try_except_handler_3;
    // End of try:
    try_end_8:;
    Py_XDECREF(tmp_tuple_unpack_2__source_iter);
    tmp_tuple_unpack_2__source_iter = NULL;
    {
        PyObject *tmp_assign_source_37;
        CHECK_OBJECT(tmp_tuple_unpack_2__element_1);
        tmp_assign_source_37 = tmp_tuple_unpack_2__element_1;
        {
            PyObject *old = var_key;
            var_key = tmp_assign_source_37;
            Py_INCREF(var_key);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_2__element_1);
    tmp_tuple_unpack_2__element_1 = NULL;

    {
        PyObject *tmp_assign_source_38;
        CHECK_OBJECT(tmp_tuple_unpack_2__element_2);
        tmp_assign_source_38 = tmp_tuple_unpack_2__element_2;
        {
            PyObject *old = var_argument;
            var_argument = tmp_assign_source_38;
            Py_INCREF(var_argument);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_2__element_2);
    tmp_tuple_unpack_2__element_2 = NULL;

    Py_XDECREF(tmp_tuple_unpack_2__element_1);
    tmp_tuple_unpack_2__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_2__element_2);
    tmp_tuple_unpack_2__element_2 = NULL;
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 114;
        type_description_1 = "ococoocoocooooooooooooooooooo";
        goto try_except_handler_3;
    }
    goto loop_start_3;
    loop_end_3:;
    // Tried code:
    {
        PyObject *tmp_called_name_7;
        PyObject *tmp_expression_name_11;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_name_9;
        PyObject *tmp_expression_name_12;
        PyObject *tmp_subscript_name_2;
        PyObject *tmp_expression_name_13;
        PyObject *tmp_expression_name_14;
        if (var_result_params == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[70]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 137;
            type_description_1 = "ococoocoocooooooooooooooooooo";
            goto try_except_handler_11;
        }

        tmp_expression_name_11 = var_result_params;
        tmp_called_name_7 = LOOKUP_ATTRIBUTE(tmp_expression_name_11, mod_consts[63]);
        if (tmp_called_name_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 137;
            type_description_1 = "ococoocoocooooooooooooooooooo";
            goto try_except_handler_11;
        }
        if (var_keys_used == NULL) {
            Py_DECREF(tmp_called_name_7);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[59]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 137;
            type_description_1 = "ococoocoocooooooooooooooooooo";
            goto try_except_handler_11;
        }

        tmp_expression_name_12 = var_keys_used;
        CHECK_OBJECT(var_param);
        tmp_expression_name_14 = var_param;
        tmp_expression_name_13 = LOOKUP_ATTRIBUTE(tmp_expression_name_14, mod_consts[12]);
        if (tmp_expression_name_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_7);

            exception_lineno = 137;
            type_description_1 = "ococoocoocooooooooooooooooooo";
            goto try_except_handler_11;
        }
        tmp_subscript_name_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_13, mod_consts[48]);
        Py_DECREF(tmp_expression_name_13);
        if (tmp_subscript_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_7);

            exception_lineno = 137;
            type_description_1 = "ococoocoocooooooooooooooooooo";
            goto try_except_handler_11;
        }
        tmp_args_element_name_9 = LOOKUP_SUBSCRIPT(tmp_expression_name_12, tmp_subscript_name_2);
        Py_DECREF(tmp_subscript_name_2);
        if (tmp_args_element_name_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_7);

            exception_lineno = 137;
            type_description_1 = "ococoocoocooooooooooooooooooo";
            goto try_except_handler_11;
        }
        frame_964c825384a76dc7cf8978373a2b79f2->m_frame.f_lineno = 137;
        tmp_call_result_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_7, tmp_args_element_name_9);
        Py_DECREF(tmp_called_name_7);
        Py_DECREF(tmp_args_element_name_9);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 137;
            type_description_1 = "ococoocoocooooooooooooooooooo";
            goto try_except_handler_11;
        }
        Py_DECREF(tmp_call_result_2);
    }
    goto loop_start_2;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Exception handler code:
    try_except_handler_11:;
    exception_keeper_type_9 = exception_type;
    exception_keeper_value_9 = exception_value;
    exception_keeper_tb_9 = exception_tb;
    exception_keeper_lineno_9 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Preserve existing published exception id 2.
    GET_CURRENT_EXCEPTION(&exception_preserved_type_2, &exception_preserved_value_2, &exception_preserved_tb_2);

    if (exception_keeper_tb_9 == NULL) {
        exception_keeper_tb_9 = MAKE_TRACEBACK(frame_964c825384a76dc7cf8978373a2b79f2, exception_keeper_lineno_9);
    } else if (exception_keeper_lineno_9 != 0) {
        exception_keeper_tb_9 = ADD_TRACEBACK(exception_keeper_tb_9, frame_964c825384a76dc7cf8978373a2b79f2, exception_keeper_lineno_9);
    }

    NORMALIZE_EXCEPTION(&exception_keeper_type_9, &exception_keeper_value_9, &exception_keeper_tb_9);
    ATTACH_TRACEBACK_TO_EXCEPTION_VALUE(exception_keeper_value_9, exception_keeper_tb_9);
    PUBLISH_EXCEPTION(&exception_keeper_type_9, &exception_keeper_value_9, &exception_keeper_tb_9);
    // Tried code:
    {
        bool tmp_condition_result_5;
        PyObject *tmp_compexpr_left_5;
        PyObject *tmp_compexpr_right_5;
        tmp_compexpr_left_5 = EXC_TYPE(PyThreadState_GET());
        tmp_compexpr_right_5 = PyExc_KeyError;
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_compexpr_left_5, tmp_compexpr_right_5);
        assert(!(tmp_res == -1));
        tmp_condition_result_5 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_5 != false) {
            goto branch_yes_5;
        } else {
            goto branch_no_5;
        }
    }
    branch_yes_5:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 136;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_964c825384a76dc7cf8978373a2b79f2->m_frame) frame_964c825384a76dc7cf8978373a2b79f2->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "ococoocoocooooooooooooooooooo";
    goto try_except_handler_12;
    branch_no_5:;
    goto try_end_9;
    // Exception handler code:
    try_except_handler_12:;
    exception_keeper_type_10 = exception_type;
    exception_keeper_value_10 = exception_value;
    exception_keeper_tb_10 = exception_tb;
    exception_keeper_lineno_10 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Restore previous exception id 2.
    SET_CURRENT_EXCEPTION(exception_preserved_type_2, exception_preserved_value_2, exception_preserved_tb_2);

    // Re-raise.
    exception_type = exception_keeper_type_10;
    exception_value = exception_keeper_value_10;
    exception_tb = exception_keeper_tb_10;
    exception_lineno = exception_keeper_lineno_10;

    goto try_except_handler_3;
    // End of try:
    try_end_9:;
    // Restore previous exception id 2.
    SET_CURRENT_EXCEPTION(exception_preserved_type_2, exception_preserved_value_2, exception_preserved_tb_2);

    goto try_end_10;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_10:;
    {
        nuitka_bool tmp_condition_result_6;
        PyObject *tmp_compexpr_left_6;
        PyObject *tmp_compexpr_right_6;
        PyObject *tmp_expression_name_15;
        PyObject *tmp_tmp_condition_result_6_object_1;
        int tmp_truth_name_1;
        if (var_param == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[71]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 142;
            type_description_1 = "ococoocoocooooooooooooooooooo";
            goto try_except_handler_3;
        }

        tmp_expression_name_15 = var_param;
        tmp_compexpr_left_6 = LOOKUP_ATTRIBUTE(tmp_expression_name_15, mod_consts[72]);
        if (tmp_compexpr_left_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 142;
            type_description_1 = "ococoocoocooooooooooooooooooo";
            goto try_except_handler_3;
        }
        tmp_compexpr_right_6 = mod_consts[73];
        tmp_tmp_condition_result_6_object_1 = RICH_COMPARE_EQ_OBJECT_OBJECT_OBJECT(tmp_compexpr_left_6, tmp_compexpr_right_6);
        Py_DECREF(tmp_compexpr_left_6);
        if (tmp_tmp_condition_result_6_object_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 142;
            type_description_1 = "ococoocoocooooooooooooooooooo";
            goto try_except_handler_3;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_tmp_condition_result_6_object_1);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_tmp_condition_result_6_object_1);

            exception_lineno = 142;
            type_description_1 = "ococoocoocooooooooooooooooooo";
            goto try_except_handler_3;
        }
        tmp_condition_result_6 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_tmp_condition_result_6_object_1);
        if (tmp_condition_result_6 == NUITKA_BOOL_TRUE) {
            goto branch_yes_6;
        } else {
            goto branch_no_6;
        }
    }
    branch_yes_6:;
    {
        PyObject *tmp_assign_source_39;
        tmp_assign_source_39 = PyList_New(0);
        {
            PyObject *old = var_lazy_value_list;
            var_lazy_value_list = tmp_assign_source_39;
            Py_XDECREF(old);
        }

    }
    {
        bool tmp_condition_result_7;
        PyObject *tmp_compexpr_left_7;
        PyObject *tmp_compexpr_right_7;
        if (var_argument == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[4]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 145;
            type_description_1 = "ococoocoocooooooooooooooooooo";
            goto try_except_handler_3;
        }

        tmp_compexpr_left_7 = var_argument;
        tmp_compexpr_right_7 = Py_None;
        tmp_condition_result_7 = (tmp_compexpr_left_7 != tmp_compexpr_right_7) ? true : false;
        if (tmp_condition_result_7 != false) {
            goto branch_yes_7;
        } else {
            goto branch_no_7;
        }
    }
    branch_yes_7:;
    {
        PyObject *tmp_called_name_8;
        PyObject *tmp_expression_name_16;
        PyObject *tmp_call_result_3;
        PyObject *tmp_args_element_name_10;
        CHECK_OBJECT(var_lazy_value_list);
        tmp_expression_name_16 = var_lazy_value_list;
        tmp_called_name_8 = LOOKUP_ATTRIBUTE(tmp_expression_name_16, mod_consts[63]);
        if (tmp_called_name_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 146;
            type_description_1 = "ococoocoocooooooooooooooooooo";
            goto try_except_handler_3;
        }
        if (var_argument == NULL) {
            Py_DECREF(tmp_called_name_8);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[4]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 146;
            type_description_1 = "ococoocoocooooooooooooooooooo";
            goto try_except_handler_3;
        }

        tmp_args_element_name_10 = var_argument;
        frame_964c825384a76dc7cf8978373a2b79f2->m_frame.f_lineno = 146;
        tmp_call_result_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_8, tmp_args_element_name_10);
        Py_DECREF(tmp_called_name_8);
        if (tmp_call_result_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 146;
            type_description_1 = "ococoocoocooooooooooooooooooo";
            goto try_except_handler_3;
        }
        Py_DECREF(tmp_call_result_3);
    }
    {
        PyObject *tmp_assign_source_40;
        PyObject *tmp_iter_arg_7;
        if (var_var_arg_iterator == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[54]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 147;
            type_description_1 = "ococoocoocooooooooooooooooooo";
            goto try_except_handler_3;
        }

        tmp_iter_arg_7 = var_var_arg_iterator;
        tmp_assign_source_40 = MAKE_ITERATOR(tmp_iter_arg_7);
        if (tmp_assign_source_40 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 147;
            type_description_1 = "ococoocoocooooooooooooooooooo";
            goto try_except_handler_3;
        }
        {
            PyObject *old = tmp_for_loop_4__for_iterator;
            tmp_for_loop_4__for_iterator = tmp_assign_source_40;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    loop_start_5:;
    {
        PyObject *tmp_next_source_4;
        PyObject *tmp_assign_source_41;
        CHECK_OBJECT(tmp_for_loop_4__for_iterator);
        tmp_next_source_4 = tmp_for_loop_4__for_iterator;
        tmp_assign_source_41 = ITERATOR_NEXT(tmp_next_source_4);
        if (tmp_assign_source_41 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_5;
            } else {

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                type_description_1 = "ococoocoocooooooooooooooooooo";
                exception_lineno = 147;
                goto try_except_handler_13;
            }
        }

        {
            PyObject *old = tmp_for_loop_4__iter_value;
            tmp_for_loop_4__iter_value = tmp_assign_source_41;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_42;
        PyObject *tmp_iter_arg_8;
        CHECK_OBJECT(tmp_for_loop_4__iter_value);
        tmp_iter_arg_8 = tmp_for_loop_4__iter_value;
        tmp_assign_source_42 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_8);
        if (tmp_assign_source_42 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 147;
            type_description_1 = "ococoocoocooooooooooooooooooo";
            goto try_except_handler_14;
        }
        {
            PyObject *old = tmp_tuple_unpack_3__source_iter;
            tmp_tuple_unpack_3__source_iter = tmp_assign_source_42;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_43;
        PyObject *tmp_unpack_5;
        CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
        tmp_unpack_5 = tmp_tuple_unpack_3__source_iter;
        tmp_assign_source_43 = UNPACK_NEXT(tmp_unpack_5, 0, 2);
        if (tmp_assign_source_43 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ococoocoocooooooooooooooooooo";
            exception_lineno = 147;
            goto try_except_handler_15;
        }
        {
            PyObject *old = tmp_tuple_unpack_3__element_1;
            tmp_tuple_unpack_3__element_1 = tmp_assign_source_43;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_44;
        PyObject *tmp_unpack_6;
        CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
        tmp_unpack_6 = tmp_tuple_unpack_3__source_iter;
        tmp_assign_source_44 = UNPACK_NEXT(tmp_unpack_6, 1, 2);
        if (tmp_assign_source_44 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ococoocoocooooooooooooooooooo";
            exception_lineno = 147;
            goto try_except_handler_15;
        }
        {
            PyObject *old = tmp_tuple_unpack_3__element_2;
            tmp_tuple_unpack_3__element_2 = tmp_assign_source_44;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_iterator_name_3;
        CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
        tmp_iterator_name_3 = tmp_tuple_unpack_3__source_iter;
        // Check if iterator has left-over elements.
        CHECK_OBJECT(tmp_iterator_name_3); assert(HAS_ITERNEXT(tmp_iterator_name_3));

        tmp_iterator_attempt = (*Py_TYPE(tmp_iterator_name_3)->tp_iternext)(tmp_iterator_name_3);

        if (likely(tmp_iterator_attempt == NULL)) {
            PyObject *error = GET_ERROR_OCCURRED();

            if (error != NULL) {
                if (EXCEPTION_MATCH_BOOL_SINGLE(error, PyExc_StopIteration)) {
                    CLEAR_ERROR_OCCURRED();
                } else {
                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);

                    type_description_1 = "ococoocoocooooooooooooooooooo";
                    exception_lineno = 147;
                    goto try_except_handler_15;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[56];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "ococoocoocooooooooooooooooooo";
            exception_lineno = 147;
            goto try_except_handler_15;
        }
    }
    goto try_end_11;
    // Exception handler code:
    try_except_handler_15:;
    exception_keeper_type_11 = exception_type;
    exception_keeper_value_11 = exception_value;
    exception_keeper_tb_11 = exception_tb;
    exception_keeper_lineno_11 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_tuple_unpack_3__source_iter);
    tmp_tuple_unpack_3__source_iter = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_11;
    exception_value = exception_keeper_value_11;
    exception_tb = exception_keeper_tb_11;
    exception_lineno = exception_keeper_lineno_11;

    goto try_except_handler_14;
    // End of try:
    try_end_11:;
    goto try_end_12;
    // Exception handler code:
    try_except_handler_14:;
    exception_keeper_type_12 = exception_type;
    exception_keeper_value_12 = exception_value;
    exception_keeper_tb_12 = exception_tb;
    exception_keeper_lineno_12 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_tuple_unpack_3__element_1);
    tmp_tuple_unpack_3__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_3__element_2);
    tmp_tuple_unpack_3__element_2 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_12;
    exception_value = exception_keeper_value_12;
    exception_tb = exception_keeper_tb_12;
    exception_lineno = exception_keeper_lineno_12;

    goto try_except_handler_13;
    // End of try:
    try_end_12:;
    Py_XDECREF(tmp_tuple_unpack_3__source_iter);
    tmp_tuple_unpack_3__source_iter = NULL;
    {
        PyObject *tmp_assign_source_45;
        CHECK_OBJECT(tmp_tuple_unpack_3__element_1);
        tmp_assign_source_45 = tmp_tuple_unpack_3__element_1;
        {
            PyObject *old = var_key;
            var_key = tmp_assign_source_45;
            Py_INCREF(var_key);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_3__element_1);
    tmp_tuple_unpack_3__element_1 = NULL;

    {
        PyObject *tmp_assign_source_46;
        CHECK_OBJECT(tmp_tuple_unpack_3__element_2);
        tmp_assign_source_46 = tmp_tuple_unpack_3__element_2;
        {
            PyObject *old = var_argument;
            var_argument = tmp_assign_source_46;
            Py_INCREF(var_argument);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_3__element_2);
    tmp_tuple_unpack_3__element_2 = NULL;

    Py_XDECREF(tmp_tuple_unpack_3__element_1);
    tmp_tuple_unpack_3__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_3__element_2);
    tmp_tuple_unpack_3__element_2 = NULL;
    {
        nuitka_bool tmp_condition_result_8;
        int tmp_truth_name_2;
        CHECK_OBJECT(var_key);
        tmp_truth_name_2 = CHECK_IF_TRUE(var_key);
        if (tmp_truth_name_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 149;
            type_description_1 = "ococoocoocooooooooooooooooooo";
            goto try_except_handler_13;
        }
        tmp_condition_result_8 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_8 == NUITKA_BOOL_TRUE) {
            goto branch_yes_8;
        } else {
            goto branch_no_8;
        }
    }
    branch_yes_8:;
    {
        PyObject *tmp_called_instance_5;
        PyObject *tmp_call_result_4;
        PyObject *tmp_args_element_name_11;
        PyObject *tmp_tuple_element_3;
        if (var_var_arg_iterator == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[54]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 150;
            type_description_1 = "ococoocoocooooooooooooooooooo";
            goto try_except_handler_13;
        }

        tmp_called_instance_5 = var_var_arg_iterator;
        CHECK_OBJECT(var_key);
        tmp_tuple_element_3 = var_key;
        tmp_args_element_name_11 = PyTuple_New(2);
        PyTuple_SET_ITEM0(tmp_args_element_name_11, 0, tmp_tuple_element_3);
        CHECK_OBJECT(var_argument);
        tmp_tuple_element_3 = var_argument;
        PyTuple_SET_ITEM0(tmp_args_element_name_11, 1, tmp_tuple_element_3);
        frame_964c825384a76dc7cf8978373a2b79f2->m_frame.f_lineno = 150;
        tmp_call_result_4 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_5, mod_consts[74], tmp_args_element_name_11);
        Py_DECREF(tmp_args_element_name_11);
        if (tmp_call_result_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 150;
            type_description_1 = "ococoocoocooooooooooooooooooo";
            goto try_except_handler_13;
        }
        Py_DECREF(tmp_call_result_4);
    }
    goto loop_end_5;
    branch_no_8:;
    {
        PyObject *tmp_called_instance_6;
        PyObject *tmp_call_result_5;
        PyObject *tmp_args_element_name_12;
        if (var_lazy_value_list == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[75]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 152;
            type_description_1 = "ococoocoocooooooooooooooooooo";
            goto try_except_handler_13;
        }

        tmp_called_instance_6 = var_lazy_value_list;
        CHECK_OBJECT(var_argument);
        tmp_args_element_name_12 = var_argument;
        frame_964c825384a76dc7cf8978373a2b79f2->m_frame.f_lineno = 152;
        tmp_call_result_5 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_6, mod_consts[63], tmp_args_element_name_12);
        if (tmp_call_result_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 152;
            type_description_1 = "ococoocoocooooooooooooooooooo";
            goto try_except_handler_13;
        }
        Py_DECREF(tmp_call_result_5);
    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 147;
        type_description_1 = "ococoocoocooooooooooooooooooo";
        goto try_except_handler_13;
    }
    goto loop_start_5;
    loop_end_5:;
    goto try_end_13;
    // Exception handler code:
    try_except_handler_13:;
    exception_keeper_type_13 = exception_type;
    exception_keeper_value_13 = exception_value;
    exception_keeper_tb_13 = exception_tb;
    exception_keeper_lineno_13 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_for_loop_4__iter_value);
    tmp_for_loop_4__iter_value = NULL;
    Py_XDECREF(tmp_for_loop_4__for_iterator);
    tmp_for_loop_4__for_iterator = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_13;
    exception_value = exception_keeper_value_13;
    exception_tb = exception_keeper_tb_13;
    exception_lineno = exception_keeper_lineno_13;

    goto try_except_handler_3;
    // End of try:
    try_end_13:;
    Py_XDECREF(tmp_for_loop_4__iter_value);
    tmp_for_loop_4__iter_value = NULL;
    Py_XDECREF(tmp_for_loop_4__for_iterator);
    tmp_for_loop_4__for_iterator = NULL;
    branch_no_7:;
    {
        PyObject *tmp_assign_source_47;
        PyObject *tmp_called_name_9;
        PyObject *tmp_expression_name_17;
        PyObject *tmp_args_element_name_13;
        PyObject *tmp_expression_name_18;
        PyObject *tmp_args_element_name_14;
        tmp_expression_name_17 = GET_STRING_DICT_VALUE(moduledict_jedi$inference$param, (Nuitka_StringObject *)mod_consts[76]);

        if (unlikely(tmp_expression_name_17 == NULL)) {
            tmp_expression_name_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[76]);
        }

        if (tmp_expression_name_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 153;
            type_description_1 = "ococoocoocooooooooooooooooooo";
            goto try_except_handler_3;
        }
        tmp_called_name_9 = LOOKUP_ATTRIBUTE(tmp_expression_name_17, mod_consts[77]);
        if (tmp_called_name_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 153;
            type_description_1 = "ococoocoocooooooooooooooooooo";
            goto try_except_handler_3;
        }
        if (par_function_value == NULL) {
            Py_DECREF(tmp_called_name_9);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[43]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 153;
            type_description_1 = "ococoocoocooooooooooooooooooo";
            goto try_except_handler_3;
        }

        tmp_expression_name_18 = par_function_value;
        tmp_args_element_name_13 = LOOKUP_ATTRIBUTE(tmp_expression_name_18, mod_consts[78]);
        if (tmp_args_element_name_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_9);

            exception_lineno = 153;
            type_description_1 = "ococoocoocooooooooooooooooooo";
            goto try_except_handler_3;
        }
        if (var_lazy_value_list == NULL) {
            Py_DECREF(tmp_called_name_9);
            Py_DECREF(tmp_args_element_name_13);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[75]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 153;
            type_description_1 = "ococoocoocooooooooooooooooooo";
            goto try_except_handler_3;
        }

        tmp_args_element_name_14 = var_lazy_value_list;
        frame_964c825384a76dc7cf8978373a2b79f2->m_frame.f_lineno = 153;
        {
            PyObject *call_args[] = {tmp_args_element_name_13, tmp_args_element_name_14};
            tmp_assign_source_47 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_9, call_args);
        }

        Py_DECREF(tmp_called_name_9);
        Py_DECREF(tmp_args_element_name_13);
        if (tmp_assign_source_47 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 153;
            type_description_1 = "ococoocoocooooooooooooooooooo";
            goto try_except_handler_3;
        }
        {
            PyObject *old = var_seq;
            var_seq = tmp_assign_source_47;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_48;
        PyObject *tmp_called_name_10;
        PyObject *tmp_args_element_name_15;
        tmp_called_name_10 = GET_STRING_DICT_VALUE(moduledict_jedi$inference$param, (Nuitka_StringObject *)mod_consts[79]);

        if (unlikely(tmp_called_name_10 == NULL)) {
            tmp_called_name_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[79]);
        }

        if (tmp_called_name_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 154;
            type_description_1 = "ococoocoocooooooooooooooooooo";
            goto try_except_handler_3;
        }
        CHECK_OBJECT(var_seq);
        tmp_args_element_name_15 = var_seq;
        frame_964c825384a76dc7cf8978373a2b79f2->m_frame.f_lineno = 154;
        tmp_assign_source_48 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_10, tmp_args_element_name_15);
        if (tmp_assign_source_48 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 154;
            type_description_1 = "ococoocoocooooooooooooooooooo";
            goto try_except_handler_3;
        }
        {
            PyObject *old = var_result_arg;
            var_result_arg = tmp_assign_source_48;
            Py_XDECREF(old);
        }

    }
    goto branch_end_6;
    branch_no_6:;
    {
        nuitka_bool tmp_condition_result_9;
        PyObject *tmp_compexpr_left_8;
        PyObject *tmp_compexpr_right_8;
        PyObject *tmp_expression_name_19;
        PyObject *tmp_tmp_condition_result_9_object_1;
        int tmp_truth_name_3;
        if (var_param == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[71]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 155;
            type_description_1 = "ococoocoocooooooooooooooooooo";
            goto try_except_handler_3;
        }

        tmp_expression_name_19 = var_param;
        tmp_compexpr_left_8 = LOOKUP_ATTRIBUTE(tmp_expression_name_19, mod_consts[72]);
        if (tmp_compexpr_left_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 155;
            type_description_1 = "ococoocoocooooooooooooooooooo";
            goto try_except_handler_3;
        }
        tmp_compexpr_right_8 = mod_consts[80];
        tmp_tmp_condition_result_9_object_1 = RICH_COMPARE_EQ_OBJECT_OBJECT_OBJECT(tmp_compexpr_left_8, tmp_compexpr_right_8);
        Py_DECREF(tmp_compexpr_left_8);
        if (tmp_tmp_condition_result_9_object_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 155;
            type_description_1 = "ococoocoocooooooooooooooooooo";
            goto try_except_handler_3;
        }
        tmp_truth_name_3 = CHECK_IF_TRUE(tmp_tmp_condition_result_9_object_1);
        if (tmp_truth_name_3 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_tmp_condition_result_9_object_1);

            exception_lineno = 155;
            type_description_1 = "ococoocoocooooooooooooooooooo";
            goto try_except_handler_3;
        }
        tmp_condition_result_9 = tmp_truth_name_3 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_tmp_condition_result_9_object_1);
        if (tmp_condition_result_9 == NUITKA_BOOL_TRUE) {
            goto branch_yes_9;
        } else {
            goto branch_no_9;
        }
    }
    branch_yes_9:;
    {
        bool tmp_condition_result_10;
        PyObject *tmp_compexpr_left_9;
        PyObject *tmp_compexpr_right_9;
        if (var_argument == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[4]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 156;
            type_description_1 = "ococoocoocooooooooooooooooooo";
            goto try_except_handler_3;
        }

        tmp_compexpr_left_9 = var_argument;
        tmp_compexpr_right_9 = Py_None;
        tmp_condition_result_10 = (tmp_compexpr_left_9 != tmp_compexpr_right_9) ? true : false;
        if (tmp_condition_result_10 != false) {
            goto branch_yes_10;
        } else {
            goto branch_no_10;
        }
    }
    branch_yes_10:;
    {
        PyObject *tmp_called_name_11;
        PyObject *tmp_call_result_6;
        PyObject *tmp_args_element_name_16;
        if (var_too_many_args == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[40]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 157;
            type_description_1 = "ococoocoocooooooooooooooooooo";
            goto try_except_handler_3;
        }

        tmp_called_name_11 = var_too_many_args;
        if (var_argument == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[4]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 157;
            type_description_1 = "ococoocoocooooooooooooooooooo";
            goto try_except_handler_3;
        }

        tmp_args_element_name_16 = var_argument;
        frame_964c825384a76dc7cf8978373a2b79f2->m_frame.f_lineno = 157;
        tmp_call_result_6 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_11, tmp_args_element_name_16);
        if (tmp_call_result_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 157;
            type_description_1 = "ococoocoocooooooooooooooooooo";
            goto try_except_handler_3;
        }
        Py_DECREF(tmp_call_result_6);
    }
    branch_no_10:;
    {
        PyObject *tmp_assign_source_49;
        PyObject *tmp_called_name_12;
        PyObject *tmp_expression_name_20;
        PyObject *tmp_args_element_name_17;
        PyObject *tmp_expression_name_21;
        PyObject *tmp_args_element_name_18;
        PyObject *tmp_dict_seq_1;
        tmp_expression_name_20 = GET_STRING_DICT_VALUE(moduledict_jedi$inference$param, (Nuitka_StringObject *)mod_consts[76]);

        if (unlikely(tmp_expression_name_20 == NULL)) {
            tmp_expression_name_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[76]);
        }

        if (tmp_expression_name_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 159;
            type_description_1 = "ococoocoocooooooooooooooooooo";
            goto try_except_handler_3;
        }
        tmp_called_name_12 = LOOKUP_ATTRIBUTE(tmp_expression_name_20, mod_consts[81]);
        if (tmp_called_name_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 159;
            type_description_1 = "ococoocoocooooooooooooooooooo";
            goto try_except_handler_3;
        }
        if (par_function_value == NULL) {
            Py_DECREF(tmp_called_name_12);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[43]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 159;
            type_description_1 = "ococoocoocooooooooooooooooooo";
            goto try_except_handler_3;
        }

        tmp_expression_name_21 = par_function_value;
        tmp_args_element_name_17 = LOOKUP_ATTRIBUTE(tmp_expression_name_21, mod_consts[78]);
        if (tmp_args_element_name_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_12);

            exception_lineno = 159;
            type_description_1 = "ococoocoocooooooooooooooooooo";
            goto try_except_handler_3;
        }
        if (var_non_matching_keys == NULL) {
            Py_DECREF(tmp_called_name_12);
            Py_DECREF(tmp_args_element_name_17);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[58]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 159;
            type_description_1 = "ococoocoocooooooooooooooooooo";
            goto try_except_handler_3;
        }

        tmp_dict_seq_1 = var_non_matching_keys;
        tmp_args_element_name_18 = TO_DICT(tmp_dict_seq_1, NULL);
        if (tmp_args_element_name_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_12);
            Py_DECREF(tmp_args_element_name_17);

            exception_lineno = 159;
            type_description_1 = "ococoocoocooooooooooooooooooo";
            goto try_except_handler_3;
        }
        frame_964c825384a76dc7cf8978373a2b79f2->m_frame.f_lineno = 159;
        {
            PyObject *call_args[] = {tmp_args_element_name_17, tmp_args_element_name_18};
            tmp_assign_source_49 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_12, call_args);
        }

        Py_DECREF(tmp_called_name_12);
        Py_DECREF(tmp_args_element_name_17);
        Py_DECREF(tmp_args_element_name_18);
        if (tmp_assign_source_49 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 159;
            type_description_1 = "ococoocoocooooooooooooooooooo";
            goto try_except_handler_3;
        }
        {
            PyObject *old = var_dct;
            var_dct = tmp_assign_source_49;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_50;
        PyObject *tmp_called_name_13;
        PyObject *tmp_args_element_name_19;
        tmp_called_name_13 = GET_STRING_DICT_VALUE(moduledict_jedi$inference$param, (Nuitka_StringObject *)mod_consts[79]);

        if (unlikely(tmp_called_name_13 == NULL)) {
            tmp_called_name_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[79]);
        }

        if (tmp_called_name_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 160;
            type_description_1 = "ococoocoocooooooooooooooooooo";
            goto try_except_handler_3;
        }
        CHECK_OBJECT(var_dct);
        tmp_args_element_name_19 = var_dct;
        frame_964c825384a76dc7cf8978373a2b79f2->m_frame.f_lineno = 160;
        tmp_assign_source_50 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_13, tmp_args_element_name_19);
        if (tmp_assign_source_50 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 160;
            type_description_1 = "ococoocoocooooooooooooooooooo";
            goto try_except_handler_3;
        }
        {
            PyObject *old = var_result_arg;
            var_result_arg = tmp_assign_source_50;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_51;
        tmp_assign_source_51 = PyDict_New();
        {
            PyObject *old = var_non_matching_keys;
            var_non_matching_keys = tmp_assign_source_51;
            Py_XDECREF(old);
        }

    }
    goto branch_end_9;
    branch_no_9:;
    {
        bool tmp_condition_result_11;
        PyObject *tmp_compexpr_left_10;
        PyObject *tmp_compexpr_right_10;
        if (var_argument == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[4]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 164;
            type_description_1 = "ococoocoocooooooooooooooooooo";
            goto try_except_handler_3;
        }

        tmp_compexpr_left_10 = var_argument;
        tmp_compexpr_right_10 = Py_None;
        tmp_condition_result_11 = (tmp_compexpr_left_10 == tmp_compexpr_right_10) ? true : false;
        if (tmp_condition_result_11 != false) {
            goto branch_yes_11;
        } else {
            goto branch_no_11;
        }
    }
    branch_yes_11:;
    {
        bool tmp_condition_result_12;
        PyObject *tmp_compexpr_left_11;
        PyObject *tmp_compexpr_right_11;
        PyObject *tmp_expression_name_22;
        if (var_param == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[71]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 166;
            type_description_1 = "ococoocoocooooooooooooooooooo";
            goto try_except_handler_3;
        }

        tmp_expression_name_22 = var_param;
        tmp_compexpr_left_11 = LOOKUP_ATTRIBUTE(tmp_expression_name_22, mod_consts[82]);
        if (tmp_compexpr_left_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 166;
            type_description_1 = "ococoocoocooooooooooooooooooo";
            goto try_except_handler_3;
        }
        tmp_compexpr_right_11 = Py_None;
        tmp_condition_result_12 = (tmp_compexpr_left_11 == tmp_compexpr_right_11) ? true : false;
        Py_DECREF(tmp_compexpr_left_11);
        if (tmp_condition_result_12 != false) {
            goto branch_yes_12;
        } else {
            goto branch_no_12;
        }
    }
    branch_yes_12:;
    {
        PyObject *tmp_assign_source_52;
        PyObject *tmp_called_name_14;
        tmp_called_name_14 = GET_STRING_DICT_VALUE(moduledict_jedi$inference$param, (Nuitka_StringObject *)mod_consts[83]);

        if (unlikely(tmp_called_name_14 == NULL)) {
            tmp_called_name_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[83]);
        }

        if (tmp_called_name_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 167;
            type_description_1 = "ococoocoocooooooooooooooooooo";
            goto try_except_handler_3;
        }
        frame_964c825384a76dc7cf8978373a2b79f2->m_frame.f_lineno = 167;
        tmp_assign_source_52 = CALL_FUNCTION_NO_ARGS(tmp_called_name_14);
        if (tmp_assign_source_52 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 167;
            type_description_1 = "ococoocoocooooooooooooooooooo";
            goto try_except_handler_3;
        }
        {
            PyObject *old = var_result_arg;
            var_result_arg = tmp_assign_source_52;
            Py_XDECREF(old);
        }

    }
    {
        nuitka_bool tmp_condition_result_13;
        PyObject *tmp_operand_name_1;
        if (var_keys_only == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[84]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 168;
            type_description_1 = "ococoocoocooooooooooooooooooo";
            goto try_except_handler_3;
        }

        tmp_operand_name_1 = var_keys_only;
        tmp_res = CHECK_IF_TRUE(tmp_operand_name_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 168;
            type_description_1 = "ococoocoocooooooooooooooooooo";
            goto try_except_handler_3;
        }
        tmp_condition_result_13 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_13 == NUITKA_BOOL_TRUE) {
            goto branch_yes_13;
        } else {
            goto branch_no_13;
        }
    }
    branch_yes_13:;
    {
        PyObject *tmp_assign_source_53;
        PyObject *tmp_iter_arg_9;
        PyObject *tmp_called_instance_7;
        if (Nuitka_Cell_GET(par_arguments) == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[13]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 169;
            type_description_1 = "ococoocoocooooooooooooooooooo";
            goto try_except_handler_3;
        }

        tmp_called_instance_7 = Nuitka_Cell_GET(par_arguments);
        frame_964c825384a76dc7cf8978373a2b79f2->m_frame.f_lineno = 169;
        tmp_iter_arg_9 = CALL_METHOD_NO_ARGS(tmp_called_instance_7, mod_consts[61]);
        if (tmp_iter_arg_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 169;
            type_description_1 = "ococoocoocooooooooooooooooooo";
            goto try_except_handler_3;
        }
        tmp_assign_source_53 = MAKE_ITERATOR(tmp_iter_arg_9);
        Py_DECREF(tmp_iter_arg_9);
        if (tmp_assign_source_53 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 169;
            type_description_1 = "ococoocoocooooooooooooooooooo";
            goto try_except_handler_3;
        }
        {
            PyObject *old = tmp_for_loop_5__for_iterator;
            tmp_for_loop_5__for_iterator = tmp_assign_source_53;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    loop_start_6:;
    {
        PyObject *tmp_next_source_5;
        PyObject *tmp_assign_source_54;
        CHECK_OBJECT(tmp_for_loop_5__for_iterator);
        tmp_next_source_5 = tmp_for_loop_5__for_iterator;
        tmp_assign_source_54 = ITERATOR_NEXT(tmp_next_source_5);
        if (tmp_assign_source_54 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_6;
            } else {

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                type_description_1 = "ococoocoocooooooooooooooooooo";
                exception_lineno = 169;
                goto try_except_handler_16;
            }
        }

        {
            PyObject *old = tmp_for_loop_5__iter_value;
            tmp_for_loop_5__iter_value = tmp_assign_source_54;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_55;
        CHECK_OBJECT(tmp_for_loop_5__iter_value);
        tmp_assign_source_55 = tmp_for_loop_5__iter_value;
        {
            PyObject *old = var_contextualized_node;
            var_contextualized_node = tmp_assign_source_55;
            Py_INCREF(var_contextualized_node);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_56;
        PyObject *tmp_called_name_15;
        PyObject *tmp_args_element_name_20;
        PyObject *tmp_args_element_name_21;
        PyObject *tmp_len_arg_1;
        tmp_called_name_15 = GET_STRING_DICT_VALUE(moduledict_jedi$inference$param, (Nuitka_StringObject *)mod_consts[85]);

        if (unlikely(tmp_called_name_15 == NULL)) {
            tmp_called_name_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[85]);
        }

        if (tmp_called_name_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 170;
            type_description_1 = "ococoocoocooooooooooooooooooo";
            goto try_except_handler_16;
        }
        if (Nuitka_Cell_GET(var_funcdef) == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[45]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 170;
            type_description_1 = "ococoocoocooooooooooooooooooo";
            goto try_except_handler_16;
        }

        tmp_args_element_name_20 = Nuitka_Cell_GET(var_funcdef);
        if (Nuitka_Cell_GET(var_unpacked_va) == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[86]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 170;
            type_description_1 = "ococoocoocooooooooooooooooooo";
            goto try_except_handler_16;
        }

        tmp_len_arg_1 = Nuitka_Cell_GET(var_unpacked_va);
        tmp_args_element_name_21 = BUILTIN_LEN(tmp_len_arg_1);
        if (tmp_args_element_name_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 170;
            type_description_1 = "ococoocoocooooooooooooooooooo";
            goto try_except_handler_16;
        }
        frame_964c825384a76dc7cf8978373a2b79f2->m_frame.f_lineno = 170;
        {
            PyObject *call_args[] = {tmp_args_element_name_20, tmp_args_element_name_21};
            tmp_assign_source_56 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_15, call_args);
        }

        Py_DECREF(tmp_args_element_name_21);
        if (tmp_assign_source_56 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 170;
            type_description_1 = "ococoocoocooooooooooooooooooo";
            goto try_except_handler_16;
        }
        {
            PyObject *old = var_m;
            var_m = tmp_assign_source_56;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_called_name_16;
        PyObject *tmp_expression_name_23;
        PyObject *tmp_call_result_7;
        PyObject *tmp_args_element_name_22;
        PyObject *tmp_called_name_17;
        PyObject *tmp_expression_name_24;
        PyObject *tmp_args_name_2;
        PyObject *tmp_tuple_element_4;
        PyObject *tmp_expression_name_25;
        PyObject *tmp_kwargs_name_2;
        PyObject *tmp_dict_key_2;
        PyObject *tmp_dict_value_2;
        if (Nuitka_Cell_GET(var_issues) == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[62]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 171;
            type_description_1 = "ococoocoocooooooooooooooooooo";
            goto try_except_handler_16;
        }

        tmp_expression_name_23 = Nuitka_Cell_GET(var_issues);
        tmp_called_name_16 = LOOKUP_ATTRIBUTE(tmp_expression_name_23, mod_consts[63]);
        if (tmp_called_name_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 171;
            type_description_1 = "ococoocoocooooooooooooooooooo";
            goto try_except_handler_16;
        }
        tmp_expression_name_24 = GET_STRING_DICT_VALUE(moduledict_jedi$inference$param, (Nuitka_StringObject *)mod_consts[6]);

        if (unlikely(tmp_expression_name_24 == NULL)) {
            tmp_expression_name_24 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
        }

        if (tmp_expression_name_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_16);

            exception_lineno = 172;
            type_description_1 = "ococoocoocooooooooooooooooooo";
            goto try_except_handler_16;
        }
        tmp_called_name_17 = LOOKUP_ATTRIBUTE(tmp_expression_name_24, mod_consts[7]);
        if (tmp_called_name_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_16);

            exception_lineno = 172;
            type_description_1 = "ococoocoocooooooooooooooooooo";
            goto try_except_handler_16;
        }
        CHECK_OBJECT(var_contextualized_node);
        tmp_expression_name_25 = var_contextualized_node;
        tmp_tuple_element_4 = LOOKUP_ATTRIBUTE(tmp_expression_name_25, mod_consts[9]);
        if (tmp_tuple_element_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_16);
            Py_DECREF(tmp_called_name_17);

            exception_lineno = 173;
            type_description_1 = "ococoocoocooooooooooooooooooo";
            goto try_except_handler_16;
        }
        tmp_args_name_2 = PyTuple_New(3);
        {
            PyObject *tmp_expression_name_26;
            PyTuple_SET_ITEM(tmp_args_name_2, 0, tmp_tuple_element_4);
            tmp_tuple_element_4 = mod_consts[87];
            PyTuple_SET_ITEM0(tmp_args_name_2, 1, tmp_tuple_element_4);
            if (var_contextualized_node == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[65]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 175;
                type_description_1 = "ococoocoocooooooooooooooooooo";
                goto tuple_build_exception_3;
            }

            tmp_expression_name_26 = var_contextualized_node;
            tmp_tuple_element_4 = LOOKUP_ATTRIBUTE(tmp_expression_name_26, mod_consts[5]);
            if (tmp_tuple_element_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 175;
                type_description_1 = "ococoocoocooooooooooooooooooo";
                goto tuple_build_exception_3;
            }
            PyTuple_SET_ITEM(tmp_args_name_2, 2, tmp_tuple_element_4);
        }
        goto tuple_build_noexception_3;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_3:;
        Py_DECREF(tmp_called_name_16);
        Py_DECREF(tmp_called_name_17);
        Py_DECREF(tmp_args_name_2);
        goto try_except_handler_16;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_3:;
        tmp_dict_key_2 = mod_consts[66];
        CHECK_OBJECT(var_m);
        tmp_dict_value_2 = var_m;
        tmp_kwargs_name_2 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_kwargs_name_2, tmp_dict_key_2, tmp_dict_value_2);
        assert(!(tmp_res != 0));
        frame_964c825384a76dc7cf8978373a2b79f2->m_frame.f_lineno = 172;
        tmp_args_element_name_22 = CALL_FUNCTION(tmp_called_name_17, tmp_args_name_2, tmp_kwargs_name_2);
        Py_DECREF(tmp_called_name_17);
        Py_DECREF(tmp_args_name_2);
        Py_DECREF(tmp_kwargs_name_2);
        if (tmp_args_element_name_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_16);

            exception_lineno = 172;
            type_description_1 = "ococoocoocooooooooooooooooooo";
            goto try_except_handler_16;
        }
        frame_964c825384a76dc7cf8978373a2b79f2->m_frame.f_lineno = 171;
        tmp_call_result_7 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_16, tmp_args_element_name_22);
        Py_DECREF(tmp_called_name_16);
        Py_DECREF(tmp_args_element_name_22);
        if (tmp_call_result_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 171;
            type_description_1 = "ococoocoocooooooooooooooooooo";
            goto try_except_handler_16;
        }
        Py_DECREF(tmp_call_result_7);
    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 169;
        type_description_1 = "ococoocoocooooooooooooooooooo";
        goto try_except_handler_16;
    }
    goto loop_start_6;
    loop_end_6:;
    goto try_end_14;
    // Exception handler code:
    try_except_handler_16:;
    exception_keeper_type_14 = exception_type;
    exception_keeper_value_14 = exception_value;
    exception_keeper_tb_14 = exception_tb;
    exception_keeper_lineno_14 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_for_loop_5__iter_value);
    tmp_for_loop_5__iter_value = NULL;
    Py_XDECREF(tmp_for_loop_5__for_iterator);
    tmp_for_loop_5__for_iterator = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_14;
    exception_value = exception_keeper_value_14;
    exception_tb = exception_keeper_tb_14;
    exception_lineno = exception_keeper_lineno_14;

    goto try_except_handler_3;
    // End of try:
    try_end_14:;
    Py_XDECREF(tmp_for_loop_5__iter_value);
    tmp_for_loop_5__iter_value = NULL;
    Py_XDECREF(tmp_for_loop_5__for_iterator);
    tmp_for_loop_5__for_iterator = NULL;
    branch_no_13:;
    goto branch_end_12;
    branch_no_12:;
    {
        PyObject *tmp_assign_source_57;
        PyObject *tmp_called_name_18;
        PyObject *tmp_args_element_name_23;
        PyObject *tmp_args_element_name_24;
        PyObject *tmp_expression_name_27;
        tmp_called_name_18 = GET_STRING_DICT_VALUE(moduledict_jedi$inference$param, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_called_name_18 == NULL)) {
            tmp_called_name_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_called_name_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 180;
            type_description_1 = "ococoocoocooooooooooooooooooo";
            goto try_except_handler_3;
        }
        if (var_default_param_context == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[88]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 180;
            type_description_1 = "ococoocoocooooooooooooooooooo";
            goto try_except_handler_3;
        }

        tmp_args_element_name_23 = var_default_param_context;
        if (var_param == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[71]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 180;
            type_description_1 = "ococoocoocooooooooooooooooooo";
            goto try_except_handler_3;
        }

        tmp_expression_name_27 = var_param;
        tmp_args_element_name_24 = LOOKUP_ATTRIBUTE(tmp_expression_name_27, mod_consts[82]);
        if (tmp_args_element_name_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 180;
            type_description_1 = "ococoocoocooooooooooooooooooo";
            goto try_except_handler_3;
        }
        frame_964c825384a76dc7cf8978373a2b79f2->m_frame.f_lineno = 180;
        {
            PyObject *call_args[] = {tmp_args_element_name_23, tmp_args_element_name_24};
            tmp_assign_source_57 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_18, call_args);
        }

        Py_DECREF(tmp_args_element_name_24);
        if (tmp_assign_source_57 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 180;
            type_description_1 = "ococoocoocooooooooooooooooooo";
            goto try_except_handler_3;
        }
        {
            PyObject *old = var_result_arg;
            var_result_arg = tmp_assign_source_57;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_58;
        tmp_assign_source_58 = Py_True;
        {
            PyObject *old = var_is_default;
            assert(old != NULL);
            var_is_default = tmp_assign_source_58;
            Py_INCREF(var_is_default);
            Py_DECREF(old);
        }

    }
    branch_end_12:;
    goto branch_end_11;
    branch_no_11:;
    {
        PyObject *tmp_assign_source_59;
        if (var_argument == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[4]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 183;
            type_description_1 = "ococoocoocooooooooooooooooooo";
            goto try_except_handler_3;
        }

        tmp_assign_source_59 = var_argument;
        {
            PyObject *old = var_result_arg;
            var_result_arg = tmp_assign_source_59;
            Py_INCREF(var_result_arg);
            Py_XDECREF(old);
        }

    }
    branch_end_11:;
    branch_end_9:;
    branch_end_6:;
    {
        PyObject *tmp_called_name_19;
        PyObject *tmp_expression_name_28;
        PyObject *tmp_call_result_8;
        PyObject *tmp_args_element_name_25;
        PyObject *tmp_called_name_20;
        PyObject *tmp_args_name_3;
        PyObject *tmp_tuple_element_5;
        PyObject *tmp_kwargs_name_3;
        PyObject *tmp_dict_key_3;
        PyObject *tmp_dict_value_3;
        if (var_result_params == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[70]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 185;
            type_description_1 = "ococoocoocooooooooooooooooooo";
            goto try_except_handler_3;
        }

        tmp_expression_name_28 = var_result_params;
        tmp_called_name_19 = LOOKUP_ATTRIBUTE(tmp_expression_name_28, mod_consts[63]);
        if (tmp_called_name_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 185;
            type_description_1 = "ococoocoocooooooooooooooooooo";
            goto try_except_handler_3;
        }
        tmp_called_name_20 = GET_STRING_DICT_VALUE(moduledict_jedi$inference$param, (Nuitka_StringObject *)mod_consts[68]);

        if (unlikely(tmp_called_name_20 == NULL)) {
            tmp_called_name_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[68]);
        }

        if (tmp_called_name_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_19);

            exception_lineno = 185;
            type_description_1 = "ococoocoocooooooooooooooooooo";
            goto try_except_handler_3;
        }
        if (par_function_value == NULL) {
            Py_DECREF(tmp_called_name_19);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[43]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 186;
            type_description_1 = "ococoocoocooooooooooooooooooo";
            goto try_except_handler_3;
        }

        tmp_tuple_element_5 = par_function_value;
        tmp_args_name_3 = PyTuple_New(4);
        PyTuple_SET_ITEM0(tmp_args_name_3, 0, tmp_tuple_element_5);
        if (Nuitka_Cell_GET(par_arguments) == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[13]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 186;
            type_description_1 = "ococoocoocooooooooooooooooooo";
            goto tuple_build_exception_4;
        }

        tmp_tuple_element_5 = Nuitka_Cell_GET(par_arguments);
        PyTuple_SET_ITEM0(tmp_args_name_3, 1, tmp_tuple_element_5);
        if (var_param == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[71]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 186;
            type_description_1 = "ococoocoocooooooooooooooooooo";
            goto tuple_build_exception_4;
        }

        tmp_tuple_element_5 = var_param;
        PyTuple_SET_ITEM0(tmp_args_name_3, 2, tmp_tuple_element_5);
        if (var_result_arg == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[89]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 186;
            type_description_1 = "ococoocoocooooooooooooooooooo";
            goto tuple_build_exception_4;
        }

        tmp_tuple_element_5 = var_result_arg;
        PyTuple_SET_ITEM0(tmp_args_name_3, 3, tmp_tuple_element_5);
        goto tuple_build_noexception_4;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_4:;
        Py_DECREF(tmp_called_name_19);
        Py_DECREF(tmp_args_name_3);
        goto try_except_handler_3;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_4:;
        tmp_dict_key_3 = mod_consts[90];
        if (var_is_default == NULL) {
            Py_DECREF(tmp_called_name_19);
            Py_DECREF(tmp_args_name_3);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[90]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 186;
            type_description_1 = "ococoocoocooooooooooooooooooo";
            goto try_except_handler_3;
        }

        tmp_dict_value_3 = var_is_default;
        tmp_kwargs_name_3 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_kwargs_name_3, tmp_dict_key_3, tmp_dict_value_3);
        assert(!(tmp_res != 0));
        frame_964c825384a76dc7cf8978373a2b79f2->m_frame.f_lineno = 185;
        tmp_args_element_name_25 = CALL_FUNCTION(tmp_called_name_20, tmp_args_name_3, tmp_kwargs_name_3);
        Py_DECREF(tmp_args_name_3);
        Py_DECREF(tmp_kwargs_name_3);
        if (tmp_args_element_name_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_19);

            exception_lineno = 185;
            type_description_1 = "ococoocoocooooooooooooooooooo";
            goto try_except_handler_3;
        }
        frame_964c825384a76dc7cf8978373a2b79f2->m_frame.f_lineno = 185;
        tmp_call_result_8 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_19, tmp_args_element_name_25);
        Py_DECREF(tmp_called_name_19);
        Py_DECREF(tmp_args_element_name_25);
        if (tmp_call_result_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 185;
            type_description_1 = "ococoocoocooooooooooooooooooo";
            goto try_except_handler_3;
        }
        Py_DECREF(tmp_call_result_8);
    }
    {
        nuitka_bool tmp_condition_result_14;
        PyObject *tmp_operand_name_2;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        if (var_result_arg == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[89]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 188;
            type_description_1 = "ococoocoocooooooooooooooooooo";
            goto try_except_handler_3;
        }

        tmp_isinstance_inst_1 = var_result_arg;
        tmp_isinstance_cls_1 = GET_STRING_DICT_VALUE(moduledict_jedi$inference$param, (Nuitka_StringObject *)mod_consts[83]);

        if (unlikely(tmp_isinstance_cls_1 == NULL)) {
            tmp_isinstance_cls_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[83]);
        }

        if (tmp_isinstance_cls_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 188;
            type_description_1 = "ococoocoocooooooooooooooooooo";
            goto try_except_handler_3;
        }
        tmp_res = Nuitka_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 188;
            type_description_1 = "ococoocoocooooooooooooooooooo";
            goto try_except_handler_3;
        }
        tmp_operand_name_2 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_name_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 188;
            type_description_1 = "ococoocoocooooooooooooooooooo";
            goto try_except_handler_3;
        }
        tmp_condition_result_14 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_14 == NUITKA_BOOL_TRUE) {
            goto branch_yes_14;
        } else {
            goto branch_no_14;
        }
    }
    branch_yes_14:;
    {
        PyObject *tmp_ass_subvalue_4;
        PyObject *tmp_expression_name_29;
        PyObject *tmp_subscript_name_3;
        PyObject *tmp_ass_subscribed_4;
        PyObject *tmp_ass_subscript_4;
        PyObject *tmp_expression_name_30;
        PyObject *tmp_expression_name_31;
        if (var_result_params == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[70]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 189;
            type_description_1 = "ococoocoocooooooooooooooooooo";
            goto try_except_handler_3;
        }

        tmp_expression_name_29 = var_result_params;
        tmp_subscript_name_3 = mod_consts[91];
        tmp_ass_subvalue_4 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_name_29, tmp_subscript_name_3, -1);
        if (tmp_ass_subvalue_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 189;
            type_description_1 = "ococoocoocooooooooooooooooooo";
            goto try_except_handler_3;
        }
        if (var_keys_used == NULL) {
            Py_DECREF(tmp_ass_subvalue_4);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[59]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 189;
            type_description_1 = "ococoocoocooooooooooooooooooo";
            goto try_except_handler_3;
        }

        tmp_ass_subscribed_4 = var_keys_used;
        if (var_param == NULL) {
            Py_DECREF(tmp_ass_subvalue_4);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[71]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 189;
            type_description_1 = "ococoocoocooooooooooooooooooo";
            goto try_except_handler_3;
        }

        tmp_expression_name_31 = var_param;
        tmp_expression_name_30 = LOOKUP_ATTRIBUTE(tmp_expression_name_31, mod_consts[12]);
        if (tmp_expression_name_30 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_4);

            exception_lineno = 189;
            type_description_1 = "ococoocoocooooooooooooooooooo";
            goto try_except_handler_3;
        }
        tmp_ass_subscript_4 = LOOKUP_ATTRIBUTE(tmp_expression_name_30, mod_consts[48]);
        Py_DECREF(tmp_expression_name_30);
        if (tmp_ass_subscript_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_4);

            exception_lineno = 189;
            type_description_1 = "ococoocoocooooooooooooooooooo";
            goto try_except_handler_3;
        }
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_4, tmp_ass_subscript_4, tmp_ass_subvalue_4);
        Py_DECREF(tmp_ass_subscript_4);
        Py_DECREF(tmp_ass_subvalue_4);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 189;
            type_description_1 = "ococoocoocooooooooooooooooooo";
            goto try_except_handler_3;
        }
    }
    branch_no_14:;
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 107;
        type_description_1 = "ococoocoocooooooooooooooooooo";
        goto try_except_handler_3;
    }
    goto loop_start_2;
    loop_end_2:;
    goto try_end_15;
    // Exception handler code:
    try_except_handler_3:;
    exception_keeper_type_15 = exception_type;
    exception_keeper_value_15 = exception_value;
    exception_keeper_tb_15 = exception_tb;
    exception_keeper_lineno_15 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_for_loop_2__iter_value);
    tmp_for_loop_2__iter_value = NULL;
    Py_XDECREF(tmp_for_loop_2__for_iterator);
    tmp_for_loop_2__for_iterator = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_15;
    exception_value = exception_keeper_value_15;
    exception_tb = exception_keeper_tb_15;
    exception_lineno = exception_keeper_lineno_15;

    goto frame_exception_exit_1;
    // End of try:
    try_end_15:;
    Py_XDECREF(tmp_for_loop_2__iter_value);
    tmp_for_loop_2__iter_value = NULL;
    Py_XDECREF(tmp_for_loop_2__for_iterator);
    tmp_for_loop_2__for_iterator = NULL;
    {
        nuitka_bool tmp_condition_result_15;
        int tmp_truth_name_4;
        if (var_keys_only == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[84]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 191;
            type_description_1 = "ococoocoocooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_truth_name_4 = CHECK_IF_TRUE(var_keys_only);
        if (tmp_truth_name_4 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 191;
            type_description_1 = "ococoocoocooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_15 = tmp_truth_name_4 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_15 == NUITKA_BOOL_TRUE) {
            goto branch_yes_15;
        } else {
            goto branch_no_15;
        }
    }
    branch_yes_15:;
    {
        PyObject *tmp_assign_source_60;
        PyObject *tmp_iter_arg_10;
        PyObject *tmp_left_name_2;
        PyObject *tmp_set_arg_1;
        PyObject *tmp_right_name_2;
        PyObject *tmp_set_arg_2;
        if (var_param_dict == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[47]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 195;
            type_description_1 = "ococoocoocooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_set_arg_1 = var_param_dict;
        tmp_left_name_2 = PySet_New(tmp_set_arg_1);
        if (tmp_left_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 195;
            type_description_1 = "ococoocoocooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (var_keys_used == NULL) {
            Py_DECREF(tmp_left_name_2);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[59]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 195;
            type_description_1 = "ococoocoocooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_set_arg_2 = var_keys_used;
        tmp_right_name_2 = PySet_New(tmp_set_arg_2);
        if (tmp_right_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_name_2);

            exception_lineno = 195;
            type_description_1 = "ococoocoocooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_iter_arg_10 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_left_name_2, tmp_right_name_2);
        Py_DECREF(tmp_left_name_2);
        Py_DECREF(tmp_right_name_2);
        assert(!(tmp_iter_arg_10 == NULL));
        tmp_assign_source_60 = MAKE_ITERATOR(tmp_iter_arg_10);
        Py_DECREF(tmp_iter_arg_10);
        if (tmp_assign_source_60 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 195;
            type_description_1 = "ococoocoocooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(tmp_for_loop_6__for_iterator == NULL);
        tmp_for_loop_6__for_iterator = tmp_assign_source_60;
    }
    // Tried code:
    loop_start_7:;
    {
        PyObject *tmp_next_source_6;
        PyObject *tmp_assign_source_61;
        CHECK_OBJECT(tmp_for_loop_6__for_iterator);
        tmp_next_source_6 = tmp_for_loop_6__for_iterator;
        tmp_assign_source_61 = ITERATOR_NEXT(tmp_next_source_6);
        if (tmp_assign_source_61 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_7;
            } else {

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                type_description_1 = "ococoocoocooooooooooooooooooo";
                exception_lineno = 195;
                goto try_except_handler_17;
            }
        }

        {
            PyObject *old = tmp_for_loop_6__iter_value;
            tmp_for_loop_6__iter_value = tmp_assign_source_61;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_62;
        CHECK_OBJECT(tmp_for_loop_6__iter_value);
        tmp_assign_source_62 = tmp_for_loop_6__iter_value;
        {
            PyObject *old = var_k;
            var_k = tmp_assign_source_62;
            Py_INCREF(var_k);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_63;
        PyObject *tmp_expression_name_32;
        PyObject *tmp_subscript_name_4;
        if (var_param_dict == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[47]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 196;
            type_description_1 = "ococoocoocooooooooooooooooooo";
            goto try_except_handler_17;
        }

        tmp_expression_name_32 = var_param_dict;
        CHECK_OBJECT(var_k);
        tmp_subscript_name_4 = var_k;
        tmp_assign_source_63 = LOOKUP_SUBSCRIPT(tmp_expression_name_32, tmp_subscript_name_4);
        if (tmp_assign_source_63 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 196;
            type_description_1 = "ococoocoocooooooooooooooooooo";
            goto try_except_handler_17;
        }
        {
            PyObject *old = var_param;
            var_param = tmp_assign_source_63;
            Py_XDECREF(old);
        }

    }
    {
        nuitka_bool tmp_condition_result_16;
        PyObject *tmp_operand_name_3;
        int tmp_or_left_truth_1;
        PyObject *tmp_or_left_value_1;
        PyObject *tmp_or_right_value_1;
        int tmp_or_left_truth_2;
        PyObject *tmp_or_left_value_2;
        PyObject *tmp_or_right_value_2;
        int tmp_or_left_truth_3;
        PyObject *tmp_or_left_value_3;
        PyObject *tmp_or_right_value_3;
        PyObject *tmp_expression_name_33;
        PyObject *tmp_expression_name_34;
        if (var_non_matching_keys == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[58]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 198;
            type_description_1 = "ococoocoocooooooooooooooooooo";
            goto try_except_handler_17;
        }

        tmp_or_left_value_1 = var_non_matching_keys;
        tmp_or_left_truth_1 = CHECK_IF_TRUE(tmp_or_left_value_1);
        if (tmp_or_left_truth_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 199;
            type_description_1 = "ococoocoocooooooooooooooooooo";
            goto try_except_handler_17;
        }
        if (tmp_or_left_truth_1 == 1) {
            goto or_left_1;
        } else {
            goto or_right_1;
        }
        or_right_1:;
        if (var_had_multiple_value_error == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[92]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 198;
            type_description_1 = "ococoocoocooooooooooooooooooo";
            goto try_except_handler_17;
        }

        tmp_or_left_value_2 = var_had_multiple_value_error;
        tmp_or_left_truth_2 = CHECK_IF_TRUE(tmp_or_left_value_2);
        if (tmp_or_left_truth_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 199;
            type_description_1 = "ococoocoocooooooooooooooooooo";
            goto try_except_handler_17;
        }
        if (tmp_or_left_truth_2 == 1) {
            goto or_left_2;
        } else {
            goto or_right_2;
        }
        or_right_2:;
        CHECK_OBJECT(var_param);
        tmp_expression_name_33 = var_param;
        tmp_or_left_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_name_33, mod_consts[72]);
        if (tmp_or_left_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 199;
            type_description_1 = "ococoocoocooooooooooooooooooo";
            goto try_except_handler_17;
        }
        tmp_or_left_truth_3 = CHECK_IF_TRUE(tmp_or_left_value_3);
        if (tmp_or_left_truth_3 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_or_left_value_3);

            exception_lineno = 199;
            type_description_1 = "ococoocoocooooooooooooooooooo";
            goto try_except_handler_17;
        }
        if (tmp_or_left_truth_3 == 1) {
            goto or_left_3;
        } else {
            goto or_right_3;
        }
        or_right_3:;
        Py_DECREF(tmp_or_left_value_3);
        if (var_param == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[71]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 199;
            type_description_1 = "ococoocoocooooooooooooooooooo";
            goto try_except_handler_17;
        }

        tmp_expression_name_34 = var_param;
        tmp_or_right_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_name_34, mod_consts[82]);
        if (tmp_or_right_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 199;
            type_description_1 = "ococoocoocooooooooooooooooooo";
            goto try_except_handler_17;
        }
        tmp_or_right_value_2 = tmp_or_right_value_3;
        goto or_end_3;
        or_left_3:;
        tmp_or_right_value_2 = tmp_or_left_value_3;
        or_end_3:;
        tmp_or_right_value_1 = tmp_or_right_value_2;
        goto or_end_2;
        or_left_2:;
        Py_INCREF(tmp_or_left_value_2);
        tmp_or_right_value_1 = tmp_or_left_value_2;
        or_end_2:;
        tmp_operand_name_3 = tmp_or_right_value_1;
        goto or_end_1;
        or_left_1:;
        Py_INCREF(tmp_or_left_value_1);
        tmp_operand_name_3 = tmp_or_left_value_1;
        or_end_1:;
        tmp_res = CHECK_IF_TRUE(tmp_operand_name_3);
        Py_DECREF(tmp_operand_name_3);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 199;
            type_description_1 = "ococoocoocooooooooooooooooooo";
            goto try_except_handler_17;
        }
        tmp_condition_result_16 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_16 == NUITKA_BOOL_TRUE) {
            goto branch_yes_16;
        } else {
            goto branch_no_16;
        }
    }
    branch_yes_16:;
    {
        PyObject *tmp_assign_source_64;
        PyObject *tmp_iter_arg_11;
        PyObject *tmp_called_instance_8;
        if (Nuitka_Cell_GET(par_arguments) == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[13]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 201;
            type_description_1 = "ococoocoocooooooooooooooooooo";
            goto try_except_handler_17;
        }

        tmp_called_instance_8 = Nuitka_Cell_GET(par_arguments);
        frame_964c825384a76dc7cf8978373a2b79f2->m_frame.f_lineno = 201;
        tmp_iter_arg_11 = CALL_METHOD_NO_ARGS(tmp_called_instance_8, mod_consts[61]);
        if (tmp_iter_arg_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 201;
            type_description_1 = "ococoocoocooooooooooooooooooo";
            goto try_except_handler_17;
        }
        tmp_assign_source_64 = MAKE_ITERATOR(tmp_iter_arg_11);
        Py_DECREF(tmp_iter_arg_11);
        if (tmp_assign_source_64 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 201;
            type_description_1 = "ococoocoocooooooooooooooooooo";
            goto try_except_handler_17;
        }
        {
            PyObject *old = tmp_for_loop_7__for_iterator;
            tmp_for_loop_7__for_iterator = tmp_assign_source_64;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    loop_start_8:;
    {
        PyObject *tmp_next_source_7;
        PyObject *tmp_assign_source_65;
        CHECK_OBJECT(tmp_for_loop_7__for_iterator);
        tmp_next_source_7 = tmp_for_loop_7__for_iterator;
        tmp_assign_source_65 = ITERATOR_NEXT(tmp_next_source_7);
        if (tmp_assign_source_65 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_8;
            } else {

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                type_description_1 = "ococoocoocooooooooooooooooooo";
                exception_lineno = 201;
                goto try_except_handler_18;
            }
        }

        {
            PyObject *old = tmp_for_loop_7__iter_value;
            tmp_for_loop_7__iter_value = tmp_assign_source_65;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_66;
        CHECK_OBJECT(tmp_for_loop_7__iter_value);
        tmp_assign_source_66 = tmp_for_loop_7__iter_value;
        {
            PyObject *old = var_contextualized_node;
            var_contextualized_node = tmp_assign_source_66;
            Py_INCREF(var_contextualized_node);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_67;
        PyObject *tmp_called_name_21;
        PyObject *tmp_args_element_name_26;
        PyObject *tmp_args_element_name_27;
        PyObject *tmp_len_arg_2;
        tmp_called_name_21 = GET_STRING_DICT_VALUE(moduledict_jedi$inference$param, (Nuitka_StringObject *)mod_consts[85]);

        if (unlikely(tmp_called_name_21 == NULL)) {
            tmp_called_name_21 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[85]);
        }

        if (tmp_called_name_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 202;
            type_description_1 = "ococoocoocooooooooooooooooooo";
            goto try_except_handler_18;
        }
        if (Nuitka_Cell_GET(var_funcdef) == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[45]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 202;
            type_description_1 = "ococoocoocooooooooooooooooooo";
            goto try_except_handler_18;
        }

        tmp_args_element_name_26 = Nuitka_Cell_GET(var_funcdef);
        if (Nuitka_Cell_GET(var_unpacked_va) == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[86]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 202;
            type_description_1 = "ococoocoocooooooooooooooooooo";
            goto try_except_handler_18;
        }

        tmp_len_arg_2 = Nuitka_Cell_GET(var_unpacked_va);
        tmp_args_element_name_27 = BUILTIN_LEN(tmp_len_arg_2);
        if (tmp_args_element_name_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 202;
            type_description_1 = "ococoocoocooooooooooooooooooo";
            goto try_except_handler_18;
        }
        frame_964c825384a76dc7cf8978373a2b79f2->m_frame.f_lineno = 202;
        {
            PyObject *call_args[] = {tmp_args_element_name_26, tmp_args_element_name_27};
            tmp_assign_source_67 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_21, call_args);
        }

        Py_DECREF(tmp_args_element_name_27);
        if (tmp_assign_source_67 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 202;
            type_description_1 = "ococoocoocooooooooooooooooooo";
            goto try_except_handler_18;
        }
        {
            PyObject *old = var_m;
            var_m = tmp_assign_source_67;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_called_name_22;
        PyObject *tmp_expression_name_35;
        PyObject *tmp_call_result_9;
        PyObject *tmp_args_element_name_28;
        PyObject *tmp_called_name_23;
        PyObject *tmp_expression_name_36;
        PyObject *tmp_args_name_4;
        PyObject *tmp_tuple_element_6;
        PyObject *tmp_expression_name_37;
        PyObject *tmp_kwargs_name_4;
        PyObject *tmp_dict_key_4;
        PyObject *tmp_dict_value_4;
        if (Nuitka_Cell_GET(var_issues) == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[62]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 203;
            type_description_1 = "ococoocoocooooooooooooooooooo";
            goto try_except_handler_18;
        }

        tmp_expression_name_35 = Nuitka_Cell_GET(var_issues);
        tmp_called_name_22 = LOOKUP_ATTRIBUTE(tmp_expression_name_35, mod_consts[63]);
        if (tmp_called_name_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 203;
            type_description_1 = "ococoocoocooooooooooooooooooo";
            goto try_except_handler_18;
        }
        tmp_expression_name_36 = GET_STRING_DICT_VALUE(moduledict_jedi$inference$param, (Nuitka_StringObject *)mod_consts[6]);

        if (unlikely(tmp_expression_name_36 == NULL)) {
            tmp_expression_name_36 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
        }

        if (tmp_expression_name_36 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_22);

            exception_lineno = 204;
            type_description_1 = "ococoocoocooooooooooooooooooo";
            goto try_except_handler_18;
        }
        tmp_called_name_23 = LOOKUP_ATTRIBUTE(tmp_expression_name_36, mod_consts[7]);
        if (tmp_called_name_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_22);

            exception_lineno = 204;
            type_description_1 = "ococoocoocooooooooooooooooooo";
            goto try_except_handler_18;
        }
        CHECK_OBJECT(var_contextualized_node);
        tmp_expression_name_37 = var_contextualized_node;
        tmp_tuple_element_6 = LOOKUP_ATTRIBUTE(tmp_expression_name_37, mod_consts[9]);
        if (tmp_tuple_element_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_22);
            Py_DECREF(tmp_called_name_23);

            exception_lineno = 204;
            type_description_1 = "ococoocoocooooooooooooooooooo";
            goto try_except_handler_18;
        }
        tmp_args_name_4 = PyTuple_New(3);
        {
            PyObject *tmp_expression_name_38;
            PyTuple_SET_ITEM(tmp_args_name_4, 0, tmp_tuple_element_6);
            tmp_tuple_element_6 = mod_consts[87];
            PyTuple_SET_ITEM0(tmp_args_name_4, 1, tmp_tuple_element_6);
            if (var_contextualized_node == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[65]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 206;
                type_description_1 = "ococoocoocooooooooooooooooooo";
                goto tuple_build_exception_5;
            }

            tmp_expression_name_38 = var_contextualized_node;
            tmp_tuple_element_6 = LOOKUP_ATTRIBUTE(tmp_expression_name_38, mod_consts[5]);
            if (tmp_tuple_element_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 206;
                type_description_1 = "ococoocoocooooooooooooooooooo";
                goto tuple_build_exception_5;
            }
            PyTuple_SET_ITEM(tmp_args_name_4, 2, tmp_tuple_element_6);
        }
        goto tuple_build_noexception_5;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_5:;
        Py_DECREF(tmp_called_name_22);
        Py_DECREF(tmp_called_name_23);
        Py_DECREF(tmp_args_name_4);
        goto try_except_handler_18;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_5:;
        tmp_dict_key_4 = mod_consts[66];
        CHECK_OBJECT(var_m);
        tmp_dict_value_4 = var_m;
        tmp_kwargs_name_4 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_kwargs_name_4, tmp_dict_key_4, tmp_dict_value_4);
        assert(!(tmp_res != 0));
        frame_964c825384a76dc7cf8978373a2b79f2->m_frame.f_lineno = 204;
        tmp_args_element_name_28 = CALL_FUNCTION(tmp_called_name_23, tmp_args_name_4, tmp_kwargs_name_4);
        Py_DECREF(tmp_called_name_23);
        Py_DECREF(tmp_args_name_4);
        Py_DECREF(tmp_kwargs_name_4);
        if (tmp_args_element_name_28 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_22);

            exception_lineno = 204;
            type_description_1 = "ococoocoocooooooooooooooooooo";
            goto try_except_handler_18;
        }
        frame_964c825384a76dc7cf8978373a2b79f2->m_frame.f_lineno = 203;
        tmp_call_result_9 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_22, tmp_args_element_name_28);
        Py_DECREF(tmp_called_name_22);
        Py_DECREF(tmp_args_element_name_28);
        if (tmp_call_result_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 203;
            type_description_1 = "ococoocoocooooooooooooooooooo";
            goto try_except_handler_18;
        }
        Py_DECREF(tmp_call_result_9);
    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 201;
        type_description_1 = "ococoocoocooooooooooooooooooo";
        goto try_except_handler_18;
    }
    goto loop_start_8;
    loop_end_8:;
    goto try_end_16;
    // Exception handler code:
    try_except_handler_18:;
    exception_keeper_type_16 = exception_type;
    exception_keeper_value_16 = exception_value;
    exception_keeper_tb_16 = exception_tb;
    exception_keeper_lineno_16 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_for_loop_7__iter_value);
    tmp_for_loop_7__iter_value = NULL;
    Py_XDECREF(tmp_for_loop_7__for_iterator);
    tmp_for_loop_7__for_iterator = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_16;
    exception_value = exception_keeper_value_16;
    exception_tb = exception_keeper_tb_16;
    exception_lineno = exception_keeper_lineno_16;

    goto try_except_handler_17;
    // End of try:
    try_end_16:;
    Py_XDECREF(tmp_for_loop_7__iter_value);
    tmp_for_loop_7__iter_value = NULL;
    Py_XDECREF(tmp_for_loop_7__for_iterator);
    tmp_for_loop_7__for_iterator = NULL;
    branch_no_16:;
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 195;
        type_description_1 = "ococoocoocooooooooooooooooooo";
        goto try_except_handler_17;
    }
    goto loop_start_7;
    loop_end_7:;
    goto try_end_17;
    // Exception handler code:
    try_except_handler_17:;
    exception_keeper_type_17 = exception_type;
    exception_keeper_value_17 = exception_value;
    exception_keeper_tb_17 = exception_tb;
    exception_keeper_lineno_17 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_for_loop_6__iter_value);
    tmp_for_loop_6__iter_value = NULL;
    Py_XDECREF(tmp_for_loop_6__for_iterator);
    tmp_for_loop_6__for_iterator = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_17;
    exception_value = exception_keeper_value_17;
    exception_tb = exception_keeper_tb_17;
    exception_lineno = exception_keeper_lineno_17;

    goto frame_exception_exit_1;
    // End of try:
    try_end_17:;
    Py_XDECREF(tmp_for_loop_6__iter_value);
    tmp_for_loop_6__iter_value = NULL;
    Py_XDECREF(tmp_for_loop_6__for_iterator);
    tmp_for_loop_6__for_iterator = NULL;
    branch_no_15:;
    {
        PyObject *tmp_assign_source_68;
        PyObject *tmp_iter_arg_12;
        PyObject *tmp_called_instance_9;
        if (var_non_matching_keys == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[58]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 209;
            type_description_1 = "ococoocoocooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_9 = var_non_matching_keys;
        frame_964c825384a76dc7cf8978373a2b79f2->m_frame.f_lineno = 209;
        tmp_iter_arg_12 = CALL_METHOD_NO_ARGS(tmp_called_instance_9, mod_consts[93]);
        if (tmp_iter_arg_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 209;
            type_description_1 = "ococoocoocooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_68 = MAKE_ITERATOR(tmp_iter_arg_12);
        Py_DECREF(tmp_iter_arg_12);
        if (tmp_assign_source_68 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 209;
            type_description_1 = "ococoocoocooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(tmp_for_loop_8__for_iterator == NULL);
        tmp_for_loop_8__for_iterator = tmp_assign_source_68;
    }
    // Tried code:
    loop_start_9:;
    {
        PyObject *tmp_next_source_8;
        PyObject *tmp_assign_source_69;
        CHECK_OBJECT(tmp_for_loop_8__for_iterator);
        tmp_next_source_8 = tmp_for_loop_8__for_iterator;
        tmp_assign_source_69 = ITERATOR_NEXT(tmp_next_source_8);
        if (tmp_assign_source_69 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_9;
            } else {

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                type_description_1 = "ococoocoocooooooooooooooooooo";
                exception_lineno = 209;
                goto try_except_handler_19;
            }
        }

        {
            PyObject *old = tmp_for_loop_8__iter_value;
            tmp_for_loop_8__iter_value = tmp_assign_source_69;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_70;
        PyObject *tmp_iter_arg_13;
        CHECK_OBJECT(tmp_for_loop_8__iter_value);
        tmp_iter_arg_13 = tmp_for_loop_8__iter_value;
        tmp_assign_source_70 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_13);
        if (tmp_assign_source_70 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 209;
            type_description_1 = "ococoocoocooooooooooooooooooo";
            goto try_except_handler_20;
        }
        {
            PyObject *old = tmp_tuple_unpack_4__source_iter;
            tmp_tuple_unpack_4__source_iter = tmp_assign_source_70;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_71;
        PyObject *tmp_unpack_7;
        CHECK_OBJECT(tmp_tuple_unpack_4__source_iter);
        tmp_unpack_7 = tmp_tuple_unpack_4__source_iter;
        tmp_assign_source_71 = UNPACK_NEXT(tmp_unpack_7, 0, 2);
        if (tmp_assign_source_71 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ococoocoocooooooooooooooooooo";
            exception_lineno = 209;
            goto try_except_handler_21;
        }
        {
            PyObject *old = tmp_tuple_unpack_4__element_1;
            tmp_tuple_unpack_4__element_1 = tmp_assign_source_71;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_72;
        PyObject *tmp_unpack_8;
        CHECK_OBJECT(tmp_tuple_unpack_4__source_iter);
        tmp_unpack_8 = tmp_tuple_unpack_4__source_iter;
        tmp_assign_source_72 = UNPACK_NEXT(tmp_unpack_8, 1, 2);
        if (tmp_assign_source_72 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ococoocoocooooooooooooooooooo";
            exception_lineno = 209;
            goto try_except_handler_21;
        }
        {
            PyObject *old = tmp_tuple_unpack_4__element_2;
            tmp_tuple_unpack_4__element_2 = tmp_assign_source_72;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_iterator_name_4;
        CHECK_OBJECT(tmp_tuple_unpack_4__source_iter);
        tmp_iterator_name_4 = tmp_tuple_unpack_4__source_iter;
        // Check if iterator has left-over elements.
        CHECK_OBJECT(tmp_iterator_name_4); assert(HAS_ITERNEXT(tmp_iterator_name_4));

        tmp_iterator_attempt = (*Py_TYPE(tmp_iterator_name_4)->tp_iternext)(tmp_iterator_name_4);

        if (likely(tmp_iterator_attempt == NULL)) {
            PyObject *error = GET_ERROR_OCCURRED();

            if (error != NULL) {
                if (EXCEPTION_MATCH_BOOL_SINGLE(error, PyExc_StopIteration)) {
                    CLEAR_ERROR_OCCURRED();
                } else {
                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);

                    type_description_1 = "ococoocoocooooooooooooooooooo";
                    exception_lineno = 209;
                    goto try_except_handler_21;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[56];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "ococoocoocooooooooooooooooooo";
            exception_lineno = 209;
            goto try_except_handler_21;
        }
    }
    goto try_end_18;
    // Exception handler code:
    try_except_handler_21:;
    exception_keeper_type_18 = exception_type;
    exception_keeper_value_18 = exception_value;
    exception_keeper_tb_18 = exception_tb;
    exception_keeper_lineno_18 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_tuple_unpack_4__source_iter);
    tmp_tuple_unpack_4__source_iter = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_18;
    exception_value = exception_keeper_value_18;
    exception_tb = exception_keeper_tb_18;
    exception_lineno = exception_keeper_lineno_18;

    goto try_except_handler_20;
    // End of try:
    try_end_18:;
    goto try_end_19;
    // Exception handler code:
    try_except_handler_20:;
    exception_keeper_type_19 = exception_type;
    exception_keeper_value_19 = exception_value;
    exception_keeper_tb_19 = exception_tb;
    exception_keeper_lineno_19 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_tuple_unpack_4__element_1);
    tmp_tuple_unpack_4__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_4__element_2);
    tmp_tuple_unpack_4__element_2 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_19;
    exception_value = exception_keeper_value_19;
    exception_tb = exception_keeper_tb_19;
    exception_lineno = exception_keeper_lineno_19;

    goto try_except_handler_19;
    // End of try:
    try_end_19:;
    Py_XDECREF(tmp_tuple_unpack_4__source_iter);
    tmp_tuple_unpack_4__source_iter = NULL;
    {
        PyObject *tmp_assign_source_73;
        CHECK_OBJECT(tmp_tuple_unpack_4__element_1);
        tmp_assign_source_73 = tmp_tuple_unpack_4__element_1;
        {
            PyObject *old = var_key;
            var_key = tmp_assign_source_73;
            Py_INCREF(var_key);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_4__element_1);
    tmp_tuple_unpack_4__element_1 = NULL;

    {
        PyObject *tmp_assign_source_74;
        CHECK_OBJECT(tmp_tuple_unpack_4__element_2);
        tmp_assign_source_74 = tmp_tuple_unpack_4__element_2;
        {
            PyObject *old = var_lazy_value;
            var_lazy_value = tmp_assign_source_74;
            Py_INCREF(var_lazy_value);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_4__element_2);
    tmp_tuple_unpack_4__element_2 = NULL;

    Py_XDECREF(tmp_tuple_unpack_4__element_1);
    tmp_tuple_unpack_4__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_4__element_2);
    tmp_tuple_unpack_4__element_2 = NULL;
    {
        PyObject *tmp_assign_source_75;
        PyObject *tmp_left_name_3;
        PyObject *tmp_right_name_3;
        PyObject *tmp_tuple_element_7;
        PyObject *tmp_expression_name_39;
        tmp_left_name_3 = mod_consts[94];
        if (Nuitka_Cell_GET(var_funcdef) == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[45]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 211;
            type_description_1 = "ococoocoocooooooooooooooooooo";
            goto try_except_handler_19;
        }

        tmp_expression_name_39 = Nuitka_Cell_GET(var_funcdef);
        tmp_tuple_element_7 = LOOKUP_ATTRIBUTE(tmp_expression_name_39, mod_consts[12]);
        if (tmp_tuple_element_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 211;
            type_description_1 = "ococoocoocooooooooooooooooooo";
            goto try_except_handler_19;
        }
        tmp_right_name_3 = PyTuple_New(2);
        PyTuple_SET_ITEM(tmp_right_name_3, 0, tmp_tuple_element_7);
        CHECK_OBJECT(var_key);
        tmp_tuple_element_7 = var_key;
        PyTuple_SET_ITEM0(tmp_right_name_3, 1, tmp_tuple_element_7);
        tmp_assign_source_75 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_left_name_3, tmp_right_name_3);
        Py_DECREF(tmp_right_name_3);
        if (tmp_assign_source_75 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 210;
            type_description_1 = "ococoocoocooooooooooooooooooo";
            goto try_except_handler_19;
        }
        {
            PyObject *old = var_m;
            var_m = tmp_assign_source_75;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_called_name_24;
        PyObject *tmp_expression_name_40;
        PyObject *tmp_call_result_10;
        PyObject *tmp_args_element_name_29;
        PyObject *tmp_called_name_25;
        PyObject *tmp_args_name_5;
        PyObject *tmp_tuple_element_8;
        PyObject *tmp_kwargs_name_5;
        PyObject *tmp_dict_key_5;
        PyObject *tmp_dict_value_5;
        if (Nuitka_Cell_GET(var_issues) == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[62]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 212;
            type_description_1 = "ococoocoocooooooooooooooooooo";
            goto try_except_handler_19;
        }

        tmp_expression_name_40 = Nuitka_Cell_GET(var_issues);
        tmp_called_name_24 = LOOKUP_ATTRIBUTE(tmp_expression_name_40, mod_consts[63]);
        if (tmp_called_name_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 212;
            type_description_1 = "ococoocoocooooooooooooooooooo";
            goto try_except_handler_19;
        }
        tmp_called_name_25 = GET_STRING_DICT_VALUE(moduledict_jedi$inference$param, (Nuitka_StringObject *)mod_consts[95]);

        if (unlikely(tmp_called_name_25 == NULL)) {
            tmp_called_name_25 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[95]);
        }

        if (tmp_called_name_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_24);

            exception_lineno = 213;
            type_description_1 = "ococoocoocooooooooooooooooooo";
            goto try_except_handler_19;
        }
        tmp_tuple_element_8 = mod_consts[96];
        tmp_args_name_5 = PyTuple_New(2);
        PyTuple_SET_ITEM0(tmp_args_name_5, 0, tmp_tuple_element_8);
        CHECK_OBJECT(var_lazy_value);
        tmp_tuple_element_8 = var_lazy_value;
        PyTuple_SET_ITEM0(tmp_args_name_5, 1, tmp_tuple_element_8);
        tmp_dict_key_5 = mod_consts[66];
        CHECK_OBJECT(var_m);
        tmp_dict_value_5 = var_m;
        tmp_kwargs_name_5 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_kwargs_name_5, tmp_dict_key_5, tmp_dict_value_5);
        assert(!(tmp_res != 0));
        frame_964c825384a76dc7cf8978373a2b79f2->m_frame.f_lineno = 213;
        tmp_args_element_name_29 = CALL_FUNCTION(tmp_called_name_25, tmp_args_name_5, tmp_kwargs_name_5);
        Py_DECREF(tmp_args_name_5);
        Py_DECREF(tmp_kwargs_name_5);
        if (tmp_args_element_name_29 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_24);

            exception_lineno = 213;
            type_description_1 = "ococoocoocooooooooooooooooooo";
            goto try_except_handler_19;
        }
        frame_964c825384a76dc7cf8978373a2b79f2->m_frame.f_lineno = 212;
        tmp_call_result_10 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_24, tmp_args_element_name_29);
        Py_DECREF(tmp_called_name_24);
        Py_DECREF(tmp_args_element_name_29);
        if (tmp_call_result_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 212;
            type_description_1 = "ococoocoocooooooooooooooooooo";
            goto try_except_handler_19;
        }
        Py_DECREF(tmp_call_result_10);
    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 209;
        type_description_1 = "ococoocoocooooooooooooooooooo";
        goto try_except_handler_19;
    }
    goto loop_start_9;
    loop_end_9:;
    goto try_end_20;
    // Exception handler code:
    try_except_handler_19:;
    exception_keeper_type_20 = exception_type;
    exception_keeper_value_20 = exception_value;
    exception_keeper_tb_20 = exception_tb;
    exception_keeper_lineno_20 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_for_loop_8__iter_value);
    tmp_for_loop_8__iter_value = NULL;
    Py_XDECREF(tmp_for_loop_8__for_iterator);
    tmp_for_loop_8__for_iterator = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_20;
    exception_value = exception_keeper_value_20;
    exception_tb = exception_keeper_tb_20;
    exception_lineno = exception_keeper_lineno_20;

    goto frame_exception_exit_1;
    // End of try:
    try_end_20:;
    Py_XDECREF(tmp_for_loop_8__iter_value);
    tmp_for_loop_8__iter_value = NULL;
    Py_XDECREF(tmp_for_loop_8__for_iterator);
    tmp_for_loop_8__for_iterator = NULL;
    {
        PyObject *tmp_assign_source_76;
        PyObject *tmp_list_arg_2;
        if (var_var_arg_iterator == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[54]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 220;
            type_description_1 = "ococoocoocooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_list_arg_2 = var_var_arg_iterator;
        tmp_assign_source_76 = MAKE_LIST(tmp_list_arg_2);
        if (tmp_assign_source_76 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 220;
            type_description_1 = "ococoocoocooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_remaining_arguments == NULL);
        var_remaining_arguments = tmp_assign_source_76;
    }
    {
        bool tmp_condition_result_17;
        CHECK_OBJECT(var_remaining_arguments);
        tmp_condition_result_17 = CHECK_IF_TRUE(var_remaining_arguments) == 1;
        if (tmp_condition_result_17 != false) {
            goto branch_yes_17;
        } else {
            goto branch_no_17;
        }
    }
    branch_yes_17:;
    // Tried code:
    {
        PyObject *tmp_assign_source_77;
        PyObject *tmp_iter_arg_14;
        PyObject *tmp_expression_name_41;
        PyObject *tmp_subscript_name_5;
        CHECK_OBJECT(var_remaining_arguments);
        tmp_expression_name_41 = var_remaining_arguments;
        tmp_subscript_name_5 = mod_consts[97];
        tmp_iter_arg_14 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_name_41, tmp_subscript_name_5, 0);
        if (tmp_iter_arg_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 222;
            type_description_1 = "ococoocoocooooooooooooooooooo";
            goto try_except_handler_22;
        }
        tmp_assign_source_77 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_14);
        Py_DECREF(tmp_iter_arg_14);
        if (tmp_assign_source_77 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 222;
            type_description_1 = "ococoocoocooooooooooooooooooo";
            goto try_except_handler_22;
        }
        assert(tmp_tuple_unpack_5__source_iter == NULL);
        tmp_tuple_unpack_5__source_iter = tmp_assign_source_77;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_78;
        PyObject *tmp_unpack_9;
        CHECK_OBJECT(tmp_tuple_unpack_5__source_iter);
        tmp_unpack_9 = tmp_tuple_unpack_5__source_iter;
        tmp_assign_source_78 = UNPACK_NEXT(tmp_unpack_9, 0, 2);
        if (tmp_assign_source_78 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ococoocoocooooooooooooooooooo";
            exception_lineno = 222;
            goto try_except_handler_23;
        }
        assert(tmp_tuple_unpack_5__element_1 == NULL);
        tmp_tuple_unpack_5__element_1 = tmp_assign_source_78;
    }
    {
        PyObject *tmp_assign_source_79;
        PyObject *tmp_unpack_10;
        CHECK_OBJECT(tmp_tuple_unpack_5__source_iter);
        tmp_unpack_10 = tmp_tuple_unpack_5__source_iter;
        tmp_assign_source_79 = UNPACK_NEXT(tmp_unpack_10, 1, 2);
        if (tmp_assign_source_79 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ococoocoocooooooooooooooooooo";
            exception_lineno = 222;
            goto try_except_handler_23;
        }
        assert(tmp_tuple_unpack_5__element_2 == NULL);
        tmp_tuple_unpack_5__element_2 = tmp_assign_source_79;
    }
    {
        PyObject *tmp_iterator_name_5;
        CHECK_OBJECT(tmp_tuple_unpack_5__source_iter);
        tmp_iterator_name_5 = tmp_tuple_unpack_5__source_iter;
        // Check if iterator has left-over elements.
        CHECK_OBJECT(tmp_iterator_name_5); assert(HAS_ITERNEXT(tmp_iterator_name_5));

        tmp_iterator_attempt = (*Py_TYPE(tmp_iterator_name_5)->tp_iternext)(tmp_iterator_name_5);

        if (likely(tmp_iterator_attempt == NULL)) {
            PyObject *error = GET_ERROR_OCCURRED();

            if (error != NULL) {
                if (EXCEPTION_MATCH_BOOL_SINGLE(error, PyExc_StopIteration)) {
                    CLEAR_ERROR_OCCURRED();
                } else {
                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);

                    type_description_1 = "ococoocoocooooooooooooooooooo";
                    exception_lineno = 222;
                    goto try_except_handler_23;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[56];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "ococoocoocooooooooooooooooooo";
            exception_lineno = 222;
            goto try_except_handler_23;
        }
    }
    goto try_end_21;
    // Exception handler code:
    try_except_handler_23:;
    exception_keeper_type_21 = exception_type;
    exception_keeper_value_21 = exception_value;
    exception_keeper_tb_21 = exception_tb;
    exception_keeper_lineno_21 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_tuple_unpack_5__source_iter);
    tmp_tuple_unpack_5__source_iter = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_21;
    exception_value = exception_keeper_value_21;
    exception_tb = exception_keeper_tb_21;
    exception_lineno = exception_keeper_lineno_21;

    goto try_except_handler_22;
    // End of try:
    try_end_21:;
    goto try_end_22;
    // Exception handler code:
    try_except_handler_22:;
    exception_keeper_type_22 = exception_type;
    exception_keeper_value_22 = exception_value;
    exception_keeper_tb_22 = exception_tb;
    exception_keeper_lineno_22 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_tuple_unpack_5__element_1);
    tmp_tuple_unpack_5__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_5__element_2);
    tmp_tuple_unpack_5__element_2 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_22;
    exception_value = exception_keeper_value_22;
    exception_tb = exception_keeper_tb_22;
    exception_lineno = exception_keeper_lineno_22;

    goto frame_exception_exit_1;
    // End of try:
    try_end_22:;
    Py_XDECREF(tmp_tuple_unpack_5__source_iter);
    tmp_tuple_unpack_5__source_iter = NULL;
    {
        PyObject *tmp_assign_source_80;
        CHECK_OBJECT(tmp_tuple_unpack_5__element_1);
        tmp_assign_source_80 = tmp_tuple_unpack_5__element_1;
        assert(var_first_key == NULL);
        Py_INCREF(tmp_assign_source_80);
        var_first_key = tmp_assign_source_80;
    }
    Py_XDECREF(tmp_tuple_unpack_5__element_1);
    tmp_tuple_unpack_5__element_1 = NULL;

    {
        PyObject *tmp_assign_source_81;
        CHECK_OBJECT(tmp_tuple_unpack_5__element_2);
        tmp_assign_source_81 = tmp_tuple_unpack_5__element_2;
        {
            PyObject *old = var_lazy_value;
            var_lazy_value = tmp_assign_source_81;
            Py_INCREF(var_lazy_value);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_5__element_2);
    tmp_tuple_unpack_5__element_2 = NULL;

    Py_XDECREF(tmp_tuple_unpack_5__element_1);
    tmp_tuple_unpack_5__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_5__element_2);
    tmp_tuple_unpack_5__element_2 = NULL;
    {
        PyObject *tmp_called_name_26;
        PyObject *tmp_call_result_11;
        PyObject *tmp_args_element_name_30;
        if (var_too_many_args == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[40]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 223;
            type_description_1 = "ococoocoocooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_26 = var_too_many_args;
        CHECK_OBJECT(var_lazy_value);
        tmp_args_element_name_30 = var_lazy_value;
        frame_964c825384a76dc7cf8978373a2b79f2->m_frame.f_lineno = 223;
        tmp_call_result_11 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_26, tmp_args_element_name_30);
        if (tmp_call_result_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 223;
            type_description_1 = "ococoocoocooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_11);
    }
    branch_no_17:;
    {
        PyObject *tmp_tuple_element_9;
        if (var_result_params == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[70]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 224;
            type_description_1 = "ococoocoocooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_tuple_element_9 = var_result_params;
        tmp_return_value = PyTuple_New(2);
        PyTuple_SET_ITEM0(tmp_return_value, 0, tmp_tuple_element_9);
        if (Nuitka_Cell_GET(var_issues) == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[62]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 224;
            type_description_1 = "ococoocoocooooooooooooooooooo";
            goto tuple_build_exception_6;
        }

        tmp_tuple_element_9 = Nuitka_Cell_GET(var_issues);
        PyTuple_SET_ITEM0(tmp_return_value, 1, tmp_tuple_element_9);
        goto tuple_build_noexception_6;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_6:;
        Py_DECREF(tmp_return_value);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_6:;
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_964c825384a76dc7cf8978373a2b79f2);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_964c825384a76dc7cf8978373a2b79f2);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_964c825384a76dc7cf8978373a2b79f2);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_964c825384a76dc7cf8978373a2b79f2, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_964c825384a76dc7cf8978373a2b79f2->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_964c825384a76dc7cf8978373a2b79f2, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_964c825384a76dc7cf8978373a2b79f2,
        type_description_1,
        par_function_value,
        par_arguments,
        var_too_many_args,
        var_issues,
        var_result_params,
        var_param_dict,
        var_funcdef,
        var_default_param_context,
        var_param,
        var_unpacked_va,
        var_var_arg_iterator,
        var_non_matching_keys,
        var_keys_used,
        var_keys_only,
        var_had_multiple_value_error,
        var_is_default,
        var_key,
        var_argument,
        var_key_param,
        var_m,
        var_contextualized_node,
        var_lazy_value_list,
        var_seq,
        var_result_arg,
        var_dct,
        var_k,
        var_lazy_value,
        var_remaining_arguments,
        var_first_key
    );


    // Release cached frame if used for exception.
    if (frame_964c825384a76dc7cf8978373a2b79f2 == cache_frame_964c825384a76dc7cf8978373a2b79f2) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_964c825384a76dc7cf8978373a2b79f2);
        cache_frame_964c825384a76dc7cf8978373a2b79f2 = NULL;
    }

    assertFrameObject(frame_964c825384a76dc7cf8978373a2b79f2);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(par_function_value);
    par_function_value = NULL;
    CHECK_OBJECT(par_arguments);
    Py_DECREF(par_arguments);
    par_arguments = NULL;
    Py_XDECREF(var_too_many_args);
    var_too_many_args = NULL;
    CHECK_OBJECT(var_issues);
    Py_DECREF(var_issues);
    var_issues = NULL;
    Py_XDECREF(var_result_params);
    var_result_params = NULL;
    Py_XDECREF(var_param_dict);
    var_param_dict = NULL;
    CHECK_OBJECT(var_funcdef);
    Py_DECREF(var_funcdef);
    var_funcdef = NULL;
    Py_XDECREF(var_default_param_context);
    var_default_param_context = NULL;
    Py_XDECREF(var_param);
    var_param = NULL;
    CHECK_OBJECT(var_unpacked_va);
    Py_DECREF(var_unpacked_va);
    var_unpacked_va = NULL;
    Py_XDECREF(var_var_arg_iterator);
    var_var_arg_iterator = NULL;
    Py_XDECREF(var_non_matching_keys);
    var_non_matching_keys = NULL;
    Py_XDECREF(var_keys_used);
    var_keys_used = NULL;
    Py_XDECREF(var_keys_only);
    var_keys_only = NULL;
    Py_XDECREF(var_had_multiple_value_error);
    var_had_multiple_value_error = NULL;
    Py_XDECREF(var_is_default);
    var_is_default = NULL;
    Py_XDECREF(var_key);
    var_key = NULL;
    Py_XDECREF(var_argument);
    var_argument = NULL;
    Py_XDECREF(var_key_param);
    var_key_param = NULL;
    Py_XDECREF(var_m);
    var_m = NULL;
    Py_XDECREF(var_contextualized_node);
    var_contextualized_node = NULL;
    Py_XDECREF(var_lazy_value_list);
    var_lazy_value_list = NULL;
    Py_XDECREF(var_seq);
    var_seq = NULL;
    Py_XDECREF(var_result_arg);
    var_result_arg = NULL;
    Py_XDECREF(var_dct);
    var_dct = NULL;
    Py_XDECREF(var_k);
    var_k = NULL;
    Py_XDECREF(var_lazy_value);
    var_lazy_value = NULL;
    CHECK_OBJECT(var_remaining_arguments);
    Py_DECREF(var_remaining_arguments);
    var_remaining_arguments = NULL;
    Py_XDECREF(var_first_key);
    var_first_key = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_23 = exception_type;
    exception_keeper_value_23 = exception_value;
    exception_keeper_tb_23 = exception_tb;
    exception_keeper_lineno_23 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(par_function_value);
    par_function_value = NULL;
    CHECK_OBJECT(par_arguments);
    Py_DECREF(par_arguments);
    par_arguments = NULL;
    Py_XDECREF(var_too_many_args);
    var_too_many_args = NULL;
    CHECK_OBJECT(var_issues);
    Py_DECREF(var_issues);
    var_issues = NULL;
    Py_XDECREF(var_result_params);
    var_result_params = NULL;
    Py_XDECREF(var_param_dict);
    var_param_dict = NULL;
    CHECK_OBJECT(var_funcdef);
    Py_DECREF(var_funcdef);
    var_funcdef = NULL;
    Py_XDECREF(var_default_param_context);
    var_default_param_context = NULL;
    Py_XDECREF(var_param);
    var_param = NULL;
    CHECK_OBJECT(var_unpacked_va);
    Py_DECREF(var_unpacked_va);
    var_unpacked_va = NULL;
    Py_XDECREF(var_var_arg_iterator);
    var_var_arg_iterator = NULL;
    Py_XDECREF(var_non_matching_keys);
    var_non_matching_keys = NULL;
    Py_XDECREF(var_keys_used);
    var_keys_used = NULL;
    Py_XDECREF(var_keys_only);
    var_keys_only = NULL;
    Py_XDECREF(var_had_multiple_value_error);
    var_had_multiple_value_error = NULL;
    Py_XDECREF(var_is_default);
    var_is_default = NULL;
    Py_XDECREF(var_key);
    var_key = NULL;
    Py_XDECREF(var_argument);
    var_argument = NULL;
    Py_XDECREF(var_key_param);
    var_key_param = NULL;
    Py_XDECREF(var_m);
    var_m = NULL;
    Py_XDECREF(var_contextualized_node);
    var_contextualized_node = NULL;
    Py_XDECREF(var_lazy_value_list);
    var_lazy_value_list = NULL;
    Py_XDECREF(var_seq);
    var_seq = NULL;
    Py_XDECREF(var_result_arg);
    var_result_arg = NULL;
    Py_XDECREF(var_dct);
    var_dct = NULL;
    Py_XDECREF(var_k);
    var_k = NULL;
    Py_XDECREF(var_lazy_value);
    var_lazy_value = NULL;
    Py_XDECREF(var_remaining_arguments);
    var_remaining_arguments = NULL;
    Py_XDECREF(var_first_key);
    var_first_key = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_23;
    exception_value = exception_keeper_value_23;
    exception_tb = exception_keeper_tb_23;
    exception_lineno = exception_keeper_lineno_23;

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


static PyObject *impl_jedi$inference$param$$$function__6_get_executed_param_names_and_issues$$$function__1_too_many_args(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_argument = python_pars[0];
    PyObject *var_m = NULL;
    struct Nuitka_FrameObject *frame_8d7746339e07eafc7b754e5f6509f8ad;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_8d7746339e07eafc7b754e5f6509f8ad = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_8d7746339e07eafc7b754e5f6509f8ad)) {
        Py_XDECREF(cache_frame_8d7746339e07eafc7b754e5f6509f8ad);

#if _DEBUG_REFCOUNTS
        if (cache_frame_8d7746339e07eafc7b754e5f6509f8ad == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_8d7746339e07eafc7b754e5f6509f8ad = MAKE_FUNCTION_FRAME(codeobj_8d7746339e07eafc7b754e5f6509f8ad, module_jedi$inference$param, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_8d7746339e07eafc7b754e5f6509f8ad->m_type_description == NULL);
    frame_8d7746339e07eafc7b754e5f6509f8ad = cache_frame_8d7746339e07eafc7b754e5f6509f8ad;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_8d7746339e07eafc7b754e5f6509f8ad);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_8d7746339e07eafc7b754e5f6509f8ad) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_len_arg_1;
        tmp_called_name_1 = GET_STRING_DICT_VALUE(moduledict_jedi$inference$param, (Nuitka_StringObject *)mod_consts[85]);

        if (unlikely(tmp_called_name_1 == NULL)) {
            tmp_called_name_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[85]);
        }

        if (tmp_called_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 73;
            type_description_1 = "oocccc";
            goto frame_exception_exit_1;
        }
        if (Nuitka_Cell_GET(self->m_closure[1]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[45]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 73;
            type_description_1 = "oocccc";
            goto frame_exception_exit_1;
        }

        tmp_args_element_name_1 = Nuitka_Cell_GET(self->m_closure[1]);
        if (Nuitka_Cell_GET(self->m_closure[3]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[86]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 73;
            type_description_1 = "oocccc";
            goto frame_exception_exit_1;
        }

        tmp_len_arg_1 = Nuitka_Cell_GET(self->m_closure[3]);
        tmp_args_element_name_2 = BUILTIN_LEN(tmp_len_arg_1);
        if (tmp_args_element_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 73;
            type_description_1 = "oocccc";
            goto frame_exception_exit_1;
        }
        frame_8d7746339e07eafc7b754e5f6509f8ad->m_frame.f_lineno = 73;
        {
            PyObject *call_args[] = {tmp_args_element_name_1, tmp_args_element_name_2};
            tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_1, call_args);
        }

        Py_DECREF(tmp_args_element_name_2);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 73;
            type_description_1 = "oocccc";
            goto frame_exception_exit_1;
        }
        assert(var_m == NULL);
        var_m = tmp_assign_source_1;
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        int tmp_truth_name_1;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[13]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 76;
            type_description_1 = "oocccc";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = Nuitka_Cell_GET(self->m_closure[0]);
        frame_8d7746339e07eafc7b754e5f6509f8ad->m_frame.f_lineno = 76;
        tmp_call_result_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[61]);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 76;
            type_description_1 = "oocccc";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_call_result_1);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_call_result_1);

            exception_lineno = 76;
            type_description_1 = "oocccc";
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
        PyObject *tmp_called_name_2;
        PyObject *tmp_expression_name_1;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_called_name_3;
        PyObject *tmp_args_name_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_kwargs_name_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        if (Nuitka_Cell_GET(self->m_closure[2]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[62]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 78;
            type_description_1 = "oocccc";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_1 = Nuitka_Cell_GET(self->m_closure[2]);
        tmp_called_name_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_1, mod_consts[63]);
        if (tmp_called_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 78;
            type_description_1 = "oocccc";
            goto frame_exception_exit_1;
        }
        tmp_called_name_3 = GET_STRING_DICT_VALUE(moduledict_jedi$inference$param, (Nuitka_StringObject *)mod_consts[95]);

        if (unlikely(tmp_called_name_3 == NULL)) {
            tmp_called_name_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[95]);
        }

        if (tmp_called_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_2);

            exception_lineno = 79;
            type_description_1 = "oocccc";
            goto frame_exception_exit_1;
        }
        tmp_tuple_element_1 = mod_consts[99];
        tmp_args_name_1 = PyTuple_New(2);
        PyTuple_SET_ITEM0(tmp_args_name_1, 0, tmp_tuple_element_1);
        CHECK_OBJECT(par_argument);
        tmp_tuple_element_1 = par_argument;
        PyTuple_SET_ITEM0(tmp_args_name_1, 1, tmp_tuple_element_1);
        tmp_dict_key_1 = mod_consts[66];
        CHECK_OBJECT(var_m);
        tmp_dict_value_1 = var_m;
        tmp_kwargs_name_1 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_kwargs_name_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        frame_8d7746339e07eafc7b754e5f6509f8ad->m_frame.f_lineno = 79;
        tmp_args_element_name_3 = CALL_FUNCTION(tmp_called_name_3, tmp_args_name_1, tmp_kwargs_name_1);
        Py_DECREF(tmp_args_name_1);
        Py_DECREF(tmp_kwargs_name_1);
        if (tmp_args_element_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_2);

            exception_lineno = 79;
            type_description_1 = "oocccc";
            goto frame_exception_exit_1;
        }
        frame_8d7746339e07eafc7b754e5f6509f8ad->m_frame.f_lineno = 78;
        tmp_call_result_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_2, tmp_args_element_name_3);
        Py_DECREF(tmp_called_name_2);
        Py_DECREF(tmp_args_element_name_3);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 78;
            type_description_1 = "oocccc";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    goto branch_end_1;
    branch_no_1:;
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_call_result_3;
        if (Nuitka_Cell_GET(self->m_closure[2]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[62]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 86;
            type_description_1 = "oocccc";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_2 = Nuitka_Cell_GET(self->m_closure[2]);
        frame_8d7746339e07eafc7b754e5f6509f8ad->m_frame.f_lineno = 86;
        tmp_call_result_3 = CALL_METHOD_WITH_ARGS1(
            tmp_called_instance_2,
            mod_consts[63],
            &PyTuple_GET_ITEM(mod_consts[100], 0)
        );

        if (tmp_call_result_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 86;
            type_description_1 = "oocccc";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_3);
    }
    {
        PyObject *tmp_called_instance_3;
        PyObject *tmp_call_result_4;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_args_element_name_5;
        tmp_called_instance_3 = GET_STRING_DICT_VALUE(moduledict_jedi$inference$param, (Nuitka_StringObject *)mod_consts[25]);

        if (unlikely(tmp_called_instance_3 == NULL)) {
            tmp_called_instance_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[25]);
        }

        if (tmp_called_instance_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 87;
            type_description_1 = "oocccc";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_4 = mod_consts[102];
        CHECK_OBJECT(var_m);
        tmp_args_element_name_5 = var_m;
        frame_8d7746339e07eafc7b754e5f6509f8ad->m_frame.f_lineno = 87;
        {
            PyObject *call_args[] = {tmp_args_element_name_4, tmp_args_element_name_5};
            tmp_call_result_4 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_3,
                mod_consts[101],
                call_args
            );
        }

        if (tmp_call_result_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 87;
            type_description_1 = "oocccc";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_4);
    }
    branch_end_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_8d7746339e07eafc7b754e5f6509f8ad);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_8d7746339e07eafc7b754e5f6509f8ad);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_8d7746339e07eafc7b754e5f6509f8ad, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_8d7746339e07eafc7b754e5f6509f8ad->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_8d7746339e07eafc7b754e5f6509f8ad, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_8d7746339e07eafc7b754e5f6509f8ad,
        type_description_1,
        par_argument,
        var_m,
        self->m_closure[1],
        self->m_closure[3],
        self->m_closure[0],
        self->m_closure[2]
    );


    // Release cached frame if used for exception.
    if (frame_8d7746339e07eafc7b754e5f6509f8ad == cache_frame_8d7746339e07eafc7b754e5f6509f8ad) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_8d7746339e07eafc7b754e5f6509f8ad);
        cache_frame_8d7746339e07eafc7b754e5f6509f8ad = NULL;
    }

    assertFrameObject(frame_8d7746339e07eafc7b754e5f6509f8ad);

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
    CHECK_OBJECT(par_argument);
    Py_DECREF(par_argument);
    par_argument = NULL;
    Py_XDECREF(var_m);
    var_m = NULL;
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

    CHECK_OBJECT(par_argument);
    Py_DECREF(par_argument);
    par_argument = NULL;
    Py_XDECREF(var_m);
    var_m = NULL;
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


static PyObject *impl_jedi$inference$param$$$function__6_get_executed_param_names_and_issues$$$function__2_lambda(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = PyList_New(0);
    goto function_return_exit;

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


static PyObject *impl_jedi$inference$param$$$function__7_get_executed_param_names(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_function_value = python_pars[0];
    PyObject *par_arguments = python_pars[1];
    struct Nuitka_FrameObject *frame_2d38351f2145248dcec4c7d454acc694;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_2d38351f2145248dcec4c7d454acc694 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_2d38351f2145248dcec4c7d454acc694)) {
        Py_XDECREF(cache_frame_2d38351f2145248dcec4c7d454acc694);

#if _DEBUG_REFCOUNTS
        if (cache_frame_2d38351f2145248dcec4c7d454acc694 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_2d38351f2145248dcec4c7d454acc694 = MAKE_FUNCTION_FRAME(codeobj_2d38351f2145248dcec4c7d454acc694, module_jedi$inference$param, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_2d38351f2145248dcec4c7d454acc694->m_type_description == NULL);
    frame_2d38351f2145248dcec4c7d454acc694 = cache_frame_2d38351f2145248dcec4c7d454acc694;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_2d38351f2145248dcec4c7d454acc694);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_2d38351f2145248dcec4c7d454acc694) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_expression_name_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_subscript_name_1;
        tmp_called_name_1 = GET_STRING_DICT_VALUE(moduledict_jedi$inference$param, (Nuitka_StringObject *)mod_consts[103]);

        if (unlikely(tmp_called_name_1 == NULL)) {
            tmp_called_name_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[103]);
        }

        if (tmp_called_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 245;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_function_value);
        tmp_args_element_name_1 = par_function_value;
        CHECK_OBJECT(par_arguments);
        tmp_args_element_name_2 = par_arguments;
        frame_2d38351f2145248dcec4c7d454acc694->m_frame.f_lineno = 245;
        {
            PyObject *call_args[] = {tmp_args_element_name_1, tmp_args_element_name_2};
            tmp_expression_name_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_1, call_args);
        }

        if (tmp_expression_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 245;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_name_1 = mod_consts[97];
        tmp_return_value = LOOKUP_SUBSCRIPT_CONST(tmp_expression_name_1, tmp_subscript_name_1, 0);
        Py_DECREF(tmp_expression_name_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 245;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_2d38351f2145248dcec4c7d454acc694);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_2d38351f2145248dcec4c7d454acc694);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_2d38351f2145248dcec4c7d454acc694);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_2d38351f2145248dcec4c7d454acc694, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_2d38351f2145248dcec4c7d454acc694->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_2d38351f2145248dcec4c7d454acc694, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_2d38351f2145248dcec4c7d454acc694,
        type_description_1,
        par_function_value,
        par_arguments
    );


    // Release cached frame if used for exception.
    if (frame_2d38351f2145248dcec4c7d454acc694 == cache_frame_2d38351f2145248dcec4c7d454acc694) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_2d38351f2145248dcec4c7d454acc694);
        cache_frame_2d38351f2145248dcec4c7d454acc694 = NULL;
    }

    assertFrameObject(frame_2d38351f2145248dcec4c7d454acc694);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(par_function_value);
    Py_DECREF(par_function_value);
    par_function_value = NULL;
    CHECK_OBJECT(par_arguments);
    Py_DECREF(par_arguments);
    par_arguments = NULL;
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

    CHECK_OBJECT(par_function_value);
    Py_DECREF(par_function_value);
    par_function_value = NULL;
    CHECK_OBJECT(par_arguments);
    Py_DECREF(par_arguments);
    par_arguments = NULL;
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


static PyObject *impl_jedi$inference$param$$$function__8__error_argument_count(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_funcdef = python_pars[0];
    PyObject *par_actual_count = python_pars[1];
    PyObject *var_params = NULL;
    PyObject *var_default_arguments = NULL;
    PyObject *var_before = NULL;
    PyObject *tmp_genexpr_1__$0 = NULL;
    struct Nuitka_FrameObject *frame_053506a6518d8a4836a7290e93e8d348;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_053506a6518d8a4836a7290e93e8d348 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_053506a6518d8a4836a7290e93e8d348)) {
        Py_XDECREF(cache_frame_053506a6518d8a4836a7290e93e8d348);

#if _DEBUG_REFCOUNTS
        if (cache_frame_053506a6518d8a4836a7290e93e8d348 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_053506a6518d8a4836a7290e93e8d348 = MAKE_FUNCTION_FRAME(codeobj_053506a6518d8a4836a7290e93e8d348, module_jedi$inference$param, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_053506a6518d8a4836a7290e93e8d348->m_type_description == NULL);
    frame_053506a6518d8a4836a7290e93e8d348 = cache_frame_053506a6518d8a4836a7290e93e8d348;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_053506a6518d8a4836a7290e93e8d348);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_053506a6518d8a4836a7290e93e8d348) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        CHECK_OBJECT(par_funcdef);
        tmp_called_instance_1 = par_funcdef;
        frame_053506a6518d8a4836a7290e93e8d348->m_frame.f_lineno = 249;
        tmp_assign_source_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[46]);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 249;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        assert(var_params == NULL);
        var_params = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_sum_sequence_1;
        {
            PyObject *tmp_assign_source_3;
            PyObject *tmp_iter_arg_1;
            CHECK_OBJECT(var_params);
            tmp_iter_arg_1 = var_params;
            tmp_assign_source_3 = MAKE_ITERATOR(tmp_iter_arg_1);
            if (tmp_assign_source_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 250;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            assert(tmp_genexpr_1__$0 == NULL);
            tmp_genexpr_1__$0 = tmp_assign_source_3;
        }
        // Tried code:
        {
            struct Nuitka_CellObject *tmp_closure_1[1];

            tmp_closure_1[0] = Nuitka_Cell_New0(tmp_genexpr_1__$0);

            tmp_sum_sequence_1 = MAKE_GENERATOR_jedi$inference$param$$$function__8__error_argument_count$$$genexpr__1_genexpr(tmp_closure_1);

            goto try_return_handler_2;
        }
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_2:;
        CHECK_OBJECT(tmp_genexpr_1__$0);
        Py_DECREF(tmp_genexpr_1__$0);
        tmp_genexpr_1__$0 = NULL;
        goto outline_result_1;
        // End of try:
        CHECK_OBJECT(tmp_genexpr_1__$0);
        Py_DECREF(tmp_genexpr_1__$0);
        tmp_genexpr_1__$0 = NULL;
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_result_1:;
        tmp_assign_source_2 = BUILTIN_SUM1(tmp_sum_sequence_1);
        Py_DECREF(tmp_sum_sequence_1);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 250;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        assert(var_default_arguments == NULL);
        var_default_arguments = tmp_assign_source_2;
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_tmp_condition_result_1_object_1;
        int tmp_truth_name_1;
        CHECK_OBJECT(var_default_arguments);
        tmp_compexpr_left_1 = var_default_arguments;
        tmp_compexpr_right_1 = mod_consts[97];
        tmp_tmp_condition_result_1_object_1 = RICH_COMPARE_EQ_OBJECT_OBJECT_OBJECT(tmp_compexpr_left_1, tmp_compexpr_right_1);
        if (tmp_tmp_condition_result_1_object_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 252;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_tmp_condition_result_1_object_1);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_tmp_condition_result_1_object_1);

            exception_lineno = 252;
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
        PyObject *tmp_assign_source_4;
        tmp_assign_source_4 = mod_consts[105];
        assert(var_before == NULL);
        Py_INCREF(tmp_assign_source_4);
        var_before = tmp_assign_source_4;
    }
    goto branch_end_1;
    branch_no_1:;
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_left_name_1;
        PyObject *tmp_right_name_1;
        PyObject *tmp_left_name_2;
        PyObject *tmp_len_arg_1;
        PyObject *tmp_right_name_2;
        tmp_left_name_1 = mod_consts[106];
        if (var_params == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[107]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 255;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }

        tmp_len_arg_1 = var_params;
        tmp_left_name_2 = BUILTIN_LEN(tmp_len_arg_1);
        if (tmp_left_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 255;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_default_arguments);
        tmp_right_name_2 = var_default_arguments;
        tmp_right_name_1 = BINARY_OPERATION_SUB_OBJECT_LONG_OBJECT(tmp_left_name_2, tmp_right_name_2);
        Py_DECREF(tmp_left_name_2);
        if (tmp_right_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 255;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_5 = BINARY_OPERATION_MOD_OBJECT_UNICODE_OBJECT(tmp_left_name_1, tmp_right_name_1);
        Py_DECREF(tmp_right_name_1);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 255;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        assert(var_before == NULL);
        var_before = tmp_assign_source_5;
    }
    branch_end_1:;
    {
        PyObject *tmp_left_name_3;
        PyObject *tmp_right_name_3;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_expression_name_1;
        tmp_left_name_3 = mod_consts[108];
        if (par_funcdef == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[45]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 257;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_1 = par_funcdef;
        tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_1, mod_consts[12]);
        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 257;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_right_name_3 = PyTuple_New(4);
        {
            PyObject *tmp_len_arg_2;
            PyTuple_SET_ITEM(tmp_right_name_3, 0, tmp_tuple_element_1);
            CHECK_OBJECT(var_before);
            tmp_tuple_element_1 = var_before;
            PyTuple_SET_ITEM0(tmp_right_name_3, 1, tmp_tuple_element_1);
            if (var_params == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[107]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 257;
                type_description_1 = "ooooo";
                goto tuple_build_exception_1;
            }

            tmp_len_arg_2 = var_params;
            tmp_tuple_element_1 = BUILTIN_LEN(tmp_len_arg_2);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 257;
                type_description_1 = "ooooo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_right_name_3, 2, tmp_tuple_element_1);
            CHECK_OBJECT(par_actual_count);
            tmp_tuple_element_1 = par_actual_count;
            PyTuple_SET_ITEM0(tmp_right_name_3, 3, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_right_name_3);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_return_value = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_left_name_3, tmp_right_name_3);
        Py_DECREF(tmp_right_name_3);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 256;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_053506a6518d8a4836a7290e93e8d348);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_053506a6518d8a4836a7290e93e8d348);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_053506a6518d8a4836a7290e93e8d348);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_053506a6518d8a4836a7290e93e8d348, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_053506a6518d8a4836a7290e93e8d348->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_053506a6518d8a4836a7290e93e8d348, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_053506a6518d8a4836a7290e93e8d348,
        type_description_1,
        par_funcdef,
        par_actual_count,
        var_params,
        var_default_arguments,
        var_before
    );


    // Release cached frame if used for exception.
    if (frame_053506a6518d8a4836a7290e93e8d348 == cache_frame_053506a6518d8a4836a7290e93e8d348) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_053506a6518d8a4836a7290e93e8d348);
        cache_frame_053506a6518d8a4836a7290e93e8d348 = NULL;
    }

    assertFrameObject(frame_053506a6518d8a4836a7290e93e8d348);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(par_funcdef);
    par_funcdef = NULL;
    CHECK_OBJECT(par_actual_count);
    Py_DECREF(par_actual_count);
    par_actual_count = NULL;
    Py_XDECREF(var_params);
    var_params = NULL;
    Py_XDECREF(var_default_arguments);
    var_default_arguments = NULL;
    CHECK_OBJECT(var_before);
    Py_DECREF(var_before);
    var_before = NULL;
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

    Py_XDECREF(par_funcdef);
    par_funcdef = NULL;
    CHECK_OBJECT(par_actual_count);
    Py_DECREF(par_actual_count);
    par_actual_count = NULL;
    Py_XDECREF(var_params);
    var_params = NULL;
    Py_XDECREF(var_default_arguments);
    var_default_arguments = NULL;
    Py_XDECREF(var_before);
    var_before = NULL;
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



struct jedi$inference$param$$$function__8__error_argument_count$$$genexpr__1_genexpr_locals {
    PyObject *var_p;
    PyObject *tmp_iter_value_0;
    char const *type_description_1;
    PyObject *exception_type;
    PyObject *exception_value;
    PyTracebackObject *exception_tb;
    int exception_lineno;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    int exception_keeper_lineno_2;
};

static PyObject *jedi$inference$param$$$function__8__error_argument_count$$$genexpr__1_genexpr_context(struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value) {
    CHECK_OBJECT(generator);
    assert(Nuitka_Generator_Check((PyObject *)generator));
    CHECK_OBJECT_X(yield_return_value);

    // Heap access if used.
    struct jedi$inference$param$$$function__8__error_argument_count$$$genexpr__1_genexpr_locals *generator_heap = (struct jedi$inference$param$$$function__8__error_argument_count$$$genexpr__1_genexpr_locals *)generator->m_heap_storage;

    // Dispatch to yield based on return label index:
    switch(generator->m_yield_return_index) {
    case 1: goto yield_return_1;
    }

    // Local variable initialization
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_m_frame = NULL;
    generator_heap->var_p = NULL;
    generator_heap->tmp_iter_value_0 = NULL;
    generator_heap->type_description_1 = NULL;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    // Actual generator function body.
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
        cache_m_frame = MAKE_FUNCTION_FRAME(codeobj_e6ef848847b57565a1c5fe3f38749a83, module_jedi$inference$param, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    generator->m_frame = cache_m_frame;

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    Py_INCREF(generator->m_frame);
    assert(Py_REFCNT(generator->m_frame) == 2); // Frame stack

#if PYTHON_VERSION >= 0x340
    generator->m_frame->m_frame.f_gen = (PyObject *)generator;
#endif

    assert(generator->m_frame->m_frame.f_back == NULL);
    Py_CLEAR(generator->m_frame->m_frame.f_back);

    generator->m_frame->m_frame.f_back = PyThreadState_GET()->frame;
    Py_INCREF(generator->m_frame->m_frame.f_back);

    PyThreadState_GET()->frame = &generator->m_frame->m_frame;
    Py_INCREF(generator->m_frame);

    Nuitka_Frame_MarkAsExecuting(generator->m_frame);

#if PYTHON_VERSION >= 0x300
    // Accept currently existing exception as the one to publish again when we
    // yield or yield from.
    {
        PyThreadState *thread_state = PyThreadState_GET();

        EXC_TYPE_F(generator) = EXC_TYPE(thread_state);
        if (EXC_TYPE_F(generator) == Py_None) EXC_TYPE_F(generator) = NULL;
        Py_XINCREF(EXC_TYPE_F(generator));
        EXC_VALUE_F(generator) = EXC_VALUE(thread_state);
        Py_XINCREF(EXC_VALUE_F(generator));
        EXC_TRACEBACK_F(generator) = EXC_TRACEBACK(thread_state);
        Py_XINCREF(EXC_TRACEBACK_F(generator));
    }

#endif

    // Framed code:
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_1;
        CHECK_OBJECT(Nuitka_Cell_GET(generator->m_closure[0]));
        tmp_next_source_1 = Nuitka_Cell_GET(generator->m_closure[0]);
        tmp_assign_source_1 = ITERATOR_NEXT(tmp_next_source_1);
        if (tmp_assign_source_1 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_1;
            } else {

                FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
                generator_heap->type_description_1 = "No";
                generator_heap->exception_lineno = 250;
                goto try_except_handler_2;
            }
        }

        {
            PyObject *old = generator_heap->tmp_iter_value_0;
            generator_heap->tmp_iter_value_0 = tmp_assign_source_1;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_2;
        CHECK_OBJECT(generator_heap->tmp_iter_value_0);
        tmp_assign_source_2 = generator_heap->tmp_iter_value_0;
        {
            PyObject *old = generator_heap->var_p;
            generator_heap->var_p = tmp_assign_source_2;
            Py_INCREF(generator_heap->var_p);
            Py_XDECREF(old);
        }

    }
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_or_left_truth_1;
        nuitka_bool tmp_or_left_value_1;
        nuitka_bool tmp_or_right_value_1;
        PyObject *tmp_expression_name_1;
        PyObject *tmp_attribute_value_1;
        int tmp_truth_name_1;
        PyObject *tmp_expression_name_2;
        PyObject *tmp_attribute_value_2;
        int tmp_truth_name_2;
        CHECK_OBJECT(generator_heap->var_p);
        tmp_expression_name_1 = generator_heap->var_p;
        tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_1, mod_consts[82]);
        if (tmp_attribute_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 250;
            generator_heap->type_description_1 = "No";
            goto try_except_handler_2;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_attribute_value_1);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            Py_DECREF(tmp_attribute_value_1);

            generator_heap->exception_lineno = 250;
            generator_heap->type_description_1 = "No";
            goto try_except_handler_2;
        }
        tmp_or_left_value_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_attribute_value_1);
        tmp_or_left_truth_1 = tmp_or_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_or_left_truth_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 250;
            generator_heap->type_description_1 = "No";
            goto try_except_handler_2;
        }
        if (tmp_or_left_truth_1 == 1) {
            goto or_left_1;
        } else {
            goto or_right_1;
        }
        or_right_1:;
        if (generator_heap->var_p == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[109]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(generator_heap->exception_value);

            generator_heap->exception_lineno = 250;
            generator_heap->type_description_1 = "No";
            goto try_except_handler_2;
        }

        tmp_expression_name_2 = generator_heap->var_p;
        tmp_attribute_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_2, mod_consts[72]);
        if (tmp_attribute_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 250;
            generator_heap->type_description_1 = "No";
            goto try_except_handler_2;
        }
        tmp_truth_name_2 = CHECK_IF_TRUE(tmp_attribute_value_2);
        if (tmp_truth_name_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            Py_DECREF(tmp_attribute_value_2);

            generator_heap->exception_lineno = 250;
            generator_heap->type_description_1 = "No";
            goto try_except_handler_2;
        }
        tmp_or_right_value_1 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_attribute_value_2);
        tmp_condition_result_1 = tmp_or_right_value_1;
        goto or_end_1;
        or_left_1:;
        tmp_condition_result_1 = tmp_or_left_value_1;
        or_end_1:;
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_expression_name_3;
        NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_1;
        tmp_expression_name_3 = mod_consts[73];
        Py_INCREF(tmp_expression_name_3);
        generator->m_yield_return_index = 1;
        return tmp_expression_name_3;
        yield_return_1:
        if (yield_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 250;
            generator_heap->type_description_1 = "No";
            goto try_except_handler_2;
        }
        tmp_yield_result_1 = yield_return_value;
    }
    branch_no_1:;
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


        generator_heap->exception_lineno = 250;
        generator_heap->type_description_1 = "No";
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_1;
    // Exception handler code:
    try_except_handler_2:;
    generator_heap->exception_keeper_type_1 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_1 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_1 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_1 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    Py_XDECREF(generator_heap->tmp_iter_value_0);
    generator_heap->tmp_iter_value_0 = NULL;
    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_1;
    generator_heap->exception_value = generator_heap->exception_keeper_value_1;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_1;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_1;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;

    Nuitka_Frame_MarkAsNotExecuting(generator->m_frame);

#if PYTHON_VERSION >= 0x300
    Py_CLEAR(EXC_TYPE_F(generator));
    Py_CLEAR(EXC_VALUE_F(generator));
    Py_CLEAR(EXC_TRACEBACK_F(generator));
#endif

    // Allow re-use of the frame again.
    Py_DECREF(generator->m_frame);
    goto frame_no_exception_1;

    frame_exception_exit_1:;

    // If it's not an exit exception, consider and create a traceback for it.
    if (!EXCEPTION_MATCH_GENERATOR(generator_heap->exception_type)) {
        if (generator_heap->exception_tb == NULL) {
            generator_heap->exception_tb = MAKE_TRACEBACK(generator->m_frame, generator_heap->exception_lineno);
        } else if (generator_heap->exception_tb->tb_frame != &generator->m_frame->m_frame) {
            generator_heap->exception_tb = ADD_TRACEBACK(generator_heap->exception_tb, generator->m_frame, generator_heap->exception_lineno);
        }

        Nuitka_Frame_AttachLocals(
            generator->m_frame,
            generator_heap->type_description_1,
            NULL,
            generator_heap->var_p
        );


        // Release cached frame if used for exception.
        if (generator->m_frame == cache_m_frame) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif

            Py_DECREF(cache_m_frame);
            cache_m_frame = NULL;
        }

        assertFrameObject(generator->m_frame);
    }

#if PYTHON_VERSION >= 0x300
    Py_CLEAR(EXC_TYPE_F(generator));
    Py_CLEAR(EXC_VALUE_F(generator));
    Py_CLEAR(EXC_TRACEBACK_F(generator));
#endif

    Py_DECREF(generator->m_frame);

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    goto try_end_2;
    // Exception handler code:
    try_except_handler_1:;
    generator_heap->exception_keeper_type_2 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_2 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_2 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_2 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    Py_XDECREF(generator_heap->var_p);
    generator_heap->var_p = NULL;
    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_2;
    generator_heap->exception_value = generator_heap->exception_keeper_value_2;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_2;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:
    try_end_2:;
    Py_XDECREF(generator_heap->tmp_iter_value_0);
    generator_heap->tmp_iter_value_0 = NULL;
    Py_XDECREF(generator_heap->var_p);
    generator_heap->var_p = NULL;


    return NULL;

    function_exception_exit:
    assert(generator_heap->exception_type);
    RESTORE_ERROR_OCCURRED(generator_heap->exception_type, generator_heap->exception_value, generator_heap->exception_tb);

    return NULL;

}

static PyObject *MAKE_GENERATOR_jedi$inference$param$$$function__8__error_argument_count$$$genexpr__1_genexpr(struct Nuitka_CellObject **closure) {
    return Nuitka_Generator_New(
        jedi$inference$param$$$function__8__error_argument_count$$$genexpr__1_genexpr_context,
        module_jedi$inference$param,
        mod_consts[35],
#if PYTHON_VERSION >= 0x350
        mod_consts[110],
#endif
        codeobj_e6ef848847b57565a1c5fe3f38749a83,
        closure,
        1,
        sizeof(struct jedi$inference$param$$$function__8__error_argument_count$$$genexpr__1_genexpr_locals)
    );
}



static PyObject *MAKE_FUNCTION_jedi$inference$param$$$function__1__add_argument_issue() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_jedi$inference$param$$$function__1__add_argument_issue,
        mod_consts[95],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_4462a348838661222e12869c31437184,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_jedi$inference$param,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_jedi$inference$param$$$function__2___init__(PyObject *defaults, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_jedi$inference$param$$$function__2___init__,
        mod_consts[11],
#if PYTHON_VERSION >= 0x300
        mod_consts[144],
#endif
        codeobj_39571897c5052c560d1ba8f2a1e501fa,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_jedi$inference$param,
        NULL,
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_jedi$inference$param$$$function__3_infer() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_jedi$inference$param$$$function__3_infer,
        mod_consts[16],
#if PYTHON_VERSION >= 0x300
        mod_consts[145],
#endif
        codeobj_da5050e3ff9c6392b1b257c4f093fe55,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_jedi$inference$param,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_jedi$inference$param$$$function__4_matches_signature() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_jedi$inference$param$$$function__4_matches_signature,
        mod_consts[146],
#if PYTHON_VERSION >= 0x300
        mod_consts[147],
#endif
        codeobj_653fb585767df404473fbaf01e1b83b7,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_jedi$inference$param,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_jedi$inference$param$$$function__5___repr__() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_jedi$inference$param$$$function__5___repr__,
        mod_consts[148],
#if PYTHON_VERSION >= 0x300
        mod_consts[149],
#endif
        codeobj_91f9af1d9bc27553afe83aac946c295b,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_jedi$inference$param,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_jedi$inference$param$$$function__6_get_executed_param_names_and_issues() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_jedi$inference$param$$$function__6_get_executed_param_names_and_issues,
        mod_consts[103],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_964c825384a76dc7cf8978373a2b79f2,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_jedi$inference$param,
        mod_consts[98],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_jedi$inference$param$$$function__6_get_executed_param_names_and_issues$$$function__1_too_many_args(struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_jedi$inference$param$$$function__6_get_executed_param_names_and_issues$$$function__1_too_many_args,
        mod_consts[40],
#if PYTHON_VERSION >= 0x300
        mod_consts[41],
#endif
        codeobj_8d7746339e07eafc7b754e5f6509f8ad,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_jedi$inference$param,
        NULL,
        closure,
        4
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_jedi$inference$param$$$function__6_get_executed_param_names_and_issues$$$function__2_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_jedi$inference$param$$$function__6_get_executed_param_names_and_issues$$$function__2_lambda,
        mod_consts[52],
#if PYTHON_VERSION >= 0x300
        mod_consts[53],
#endif
        codeobj_62b483f38e7c794b3b5c9f1d2c4e2226,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_jedi$inference$param,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_jedi$inference$param$$$function__7_get_executed_param_names() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_jedi$inference$param$$$function__7_get_executed_param_names,
        mod_consts[151],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_2d38351f2145248dcec4c7d454acc694,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_jedi$inference$param,
        mod_consts[104],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_jedi$inference$param$$$function__8__error_argument_count() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_jedi$inference$param$$$function__8__error_argument_count,
        mod_consts[85],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_053506a6518d8a4836a7290e93e8d348,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_jedi$inference$param,
        NULL,
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

function_impl_code functable_jedi$inference$param[] = {
    impl_jedi$inference$param$$$function__6_get_executed_param_names_and_issues$$$function__1_too_many_args,
    impl_jedi$inference$param$$$function__6_get_executed_param_names_and_issues$$$function__2_lambda,
    impl_jedi$inference$param$$$function__1__add_argument_issue,
    impl_jedi$inference$param$$$function__2___init__,
    impl_jedi$inference$param$$$function__3_infer,
    impl_jedi$inference$param$$$function__4_matches_signature,
    impl_jedi$inference$param$$$function__5___repr__,
    impl_jedi$inference$param$$$function__6_get_executed_param_names_and_issues,
    impl_jedi$inference$param$$$function__7_get_executed_param_names,
    impl_jedi$inference$param$$$function__8__error_argument_count,
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

    function_impl_code *current = functable_jedi$inference$param;
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

    if (offset > sizeof(functable_jedi$inference$param) || offset < 0) {
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
        functable_jedi$inference$param[offset],
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
        module_jedi$inference$param,
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
PyObject *modulecode_jedi$inference$param(PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *module_entry) {
    module_jedi$inference$param = module;

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
    PRINT_STRING("jedi.inference.param: Calling setupMetaPathBasedLoader().\n");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 0x300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    PRINT_STRING("jedi.inference.param: Calling createModuleConstants().\n");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    PRINT_STRING("jedi.inference.param: Calling createModuleCodeObjects().\n");
#endif
    createModuleCodeObjects();

    // PRINT_STRING("in initjedi$inference$param\n");

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.

    moduledict_jedi$inference$param = MODULE_DICT(module_jedi$inference$param);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    registerDillPluginTables(module_entry->name, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_jedi$inference$param,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_jedi$inference$param,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_jedi$inference$param, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_jedi$inference$param,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_jedi$inference$param, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_jedi$inference$param,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_jedi$inference$param, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_jedi$inference$param,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_jedi$inference$param);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_jedi$inference$param, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_jedi$inference$param, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

#if PYTHON_VERSION >= 0x300
    UPDATE_STRING_DICT0(moduledict_jedi$inference$param, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);
#endif

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_jedi$inference$param, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(_spec_from_module, module_jedi$inference$param);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_jedi$inference$param, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    struct Nuitka_CellObject *outline_0_var___class__ = Nuitka_Cell_Empty();
    PyObject *tmp_class_creation_1__bases = NULL;
    PyObject *tmp_class_creation_1__bases_orig = NULL;
    PyObject *tmp_class_creation_1__class_decl_dict = NULL;
    PyObject *tmp_class_creation_1__metaclass = NULL;
    PyObject *tmp_class_creation_1__prepared = NULL;
    PyObject *tmp_import_from_1__module = NULL;
    struct Nuitka_FrameObject *frame_071a56ce653e3a204db3703c78db601d;
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
    PyObject *locals_jedi$inference$param$$$class__1_ExecutedParamName_21 = NULL;
    PyObject *tmp_dictset_value;
    struct Nuitka_FrameObject *frame_6e2141c6ecffb43341a386949becc63b_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    static struct Nuitka_FrameObject *cache_frame_6e2141c6ecffb43341a386949becc63b_2 = NULL;
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
        tmp_assign_source_1 = Py_None;
        UPDATE_STRING_DICT0(moduledict_jedi$inference$param, (Nuitka_StringObject *)mod_consts[111], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = mod_consts[112];
        UPDATE_STRING_DICT0(moduledict_jedi$inference$param, (Nuitka_StringObject *)mod_consts[113], tmp_assign_source_2);
    }
    // Frame without reuse.
    frame_071a56ce653e3a204db3703c78db601d = MAKE_MODULE_FRAME(codeobj_071a56ce653e3a204db3703c78db601d, module_jedi$inference$param);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack(frame_071a56ce653e3a204db3703c78db601d);
    assert(Py_REFCNT(frame_071a56ce653e3a204db3703c78db601d) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_name_1 = mod_consts[112];
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_jedi$inference$param, (Nuitka_StringObject *)mod_consts[114]);

        if (unlikely(tmp_assattr_target_1 == NULL)) {
            tmp_assattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[114]);
        }

        assert(!(tmp_assattr_target_1 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[115], tmp_assattr_name_1);
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
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_jedi$inference$param, (Nuitka_StringObject *)mod_consts[114]);

        if (unlikely(tmp_assattr_target_2 == NULL)) {
            tmp_assattr_target_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[114]);
        }

        assert(!(tmp_assattr_target_2 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[116], tmp_assattr_name_2);
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
        UPDATE_STRING_DICT0(moduledict_jedi$inference$param, (Nuitka_StringObject *)mod_consts[117], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_name_1;
        PyObject *tmp_globals_arg_name_1;
        PyObject *tmp_locals_arg_name_1;
        PyObject *tmp_fromlist_name_1;
        PyObject *tmp_level_name_1;
        tmp_name_name_1 = mod_consts[118];
        tmp_globals_arg_name_1 = (PyObject *)moduledict_jedi$inference$param;
        tmp_locals_arg_name_1 = Py_None;
        tmp_fromlist_name_1 = mod_consts[119];
        tmp_level_name_1 = mod_consts[97];
        frame_071a56ce653e3a204db3703c78db601d->m_frame.f_lineno = 1;
        tmp_import_name_from_1 = IMPORT_MODULE5(tmp_name_name_1, tmp_globals_arg_name_1, tmp_locals_arg_name_1, tmp_fromlist_name_1, tmp_level_name_1);
        if (tmp_import_name_from_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_4 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_1,
                (PyObject *)moduledict_jedi$inference$param,
                mod_consts[51],
                mod_consts[97]
            );
        } else {
            tmp_assign_source_4 = IMPORT_NAME(tmp_import_name_from_1, mod_consts[51]);
        }

        Py_DECREF(tmp_import_name_from_1);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_jedi$inference$param, (Nuitka_StringObject *)mod_consts[51], tmp_assign_source_4);
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_import_name_from_2;
        PyObject *tmp_name_name_2;
        PyObject *tmp_globals_arg_name_2;
        PyObject *tmp_locals_arg_name_2;
        PyObject *tmp_fromlist_name_2;
        PyObject *tmp_level_name_2;
        tmp_name_name_2 = mod_consts[120];
        tmp_globals_arg_name_2 = (PyObject *)moduledict_jedi$inference$param;
        tmp_locals_arg_name_2 = Py_None;
        tmp_fromlist_name_2 = mod_consts[121];
        tmp_level_name_2 = mod_consts[97];
        frame_071a56ce653e3a204db3703c78db601d->m_frame.f_lineno = 2;
        tmp_import_name_from_2 = IMPORT_MODULE5(tmp_name_name_2, tmp_globals_arg_name_2, tmp_locals_arg_name_2, tmp_fromlist_name_2, tmp_level_name_2);
        if (tmp_import_name_from_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_2)) {
            tmp_assign_source_5 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_2,
                (PyObject *)moduledict_jedi$inference$param,
                mod_consts[20],
                mod_consts[97]
            );
        } else {
            tmp_assign_source_5 = IMPORT_NAME(tmp_import_name_from_2, mod_consts[20]);
        }

        Py_DECREF(tmp_import_name_from_2);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_jedi$inference$param, (Nuitka_StringObject *)mod_consts[20], tmp_assign_source_5);
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_import_name_from_3;
        PyObject *tmp_name_name_3;
        PyObject *tmp_globals_arg_name_3;
        PyObject *tmp_locals_arg_name_3;
        PyObject *tmp_fromlist_name_3;
        PyObject *tmp_level_name_3;
        tmp_name_name_3 = mod_consts[122];
        tmp_globals_arg_name_3 = (PyObject *)moduledict_jedi$inference$param;
        tmp_locals_arg_name_3 = Py_None;
        tmp_fromlist_name_3 = mod_consts[123];
        tmp_level_name_3 = mod_consts[97];
        frame_071a56ce653e3a204db3703c78db601d->m_frame.f_lineno = 4;
        tmp_import_name_from_3 = IMPORT_MODULE5(tmp_name_name_3, tmp_globals_arg_name_3, tmp_locals_arg_name_3, tmp_fromlist_name_3, tmp_level_name_3);
        if (tmp_import_name_from_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_3)) {
            tmp_assign_source_6 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_3,
                (PyObject *)moduledict_jedi$inference$param,
                mod_consts[25],
                mod_consts[97]
            );
        } else {
            tmp_assign_source_6 = IMPORT_NAME(tmp_import_name_from_3, mod_consts[25]);
        }

        Py_DECREF(tmp_import_name_from_3);
        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_jedi$inference$param, (Nuitka_StringObject *)mod_consts[25], tmp_assign_source_6);
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_import_name_from_4;
        PyObject *tmp_name_name_4;
        PyObject *tmp_globals_arg_name_4;
        PyObject *tmp_locals_arg_name_4;
        PyObject *tmp_fromlist_name_4;
        PyObject *tmp_level_name_4;
        tmp_name_name_4 = mod_consts[124];
        tmp_globals_arg_name_4 = (PyObject *)moduledict_jedi$inference$param;
        tmp_locals_arg_name_4 = Py_None;
        tmp_fromlist_name_4 = mod_consts[125];
        tmp_level_name_4 = mod_consts[97];
        frame_071a56ce653e3a204db3703c78db601d->m_frame.f_lineno = 5;
        tmp_import_name_from_4 = IMPORT_MODULE5(tmp_name_name_4, tmp_globals_arg_name_4, tmp_locals_arg_name_4, tmp_fromlist_name_4, tmp_level_name_4);
        if (tmp_import_name_from_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_4)) {
            tmp_assign_source_7 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_4,
                (PyObject *)moduledict_jedi$inference$param,
                mod_consts[50],
                mod_consts[97]
            );
        } else {
            tmp_assign_source_7 = IMPORT_NAME(tmp_import_name_from_4, mod_consts[50]);
        }

        Py_DECREF(tmp_import_name_from_4);
        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_jedi$inference$param, (Nuitka_StringObject *)mod_consts[50], tmp_assign_source_7);
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_import_name_from_5;
        PyObject *tmp_name_name_5;
        PyObject *tmp_globals_arg_name_5;
        PyObject *tmp_locals_arg_name_5;
        PyObject *tmp_fromlist_name_5;
        PyObject *tmp_level_name_5;
        tmp_name_name_5 = mod_consts[126];
        tmp_globals_arg_name_5 = (PyObject *)moduledict_jedi$inference$param;
        tmp_locals_arg_name_5 = Py_None;
        tmp_fromlist_name_5 = mod_consts[127];
        tmp_level_name_5 = mod_consts[97];
        frame_071a56ce653e3a204db3703c78db601d->m_frame.f_lineno = 6;
        tmp_import_name_from_5 = IMPORT_MODULE5(tmp_name_name_5, tmp_globals_arg_name_5, tmp_locals_arg_name_5, tmp_fromlist_name_5, tmp_level_name_5);
        if (tmp_import_name_from_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_5)) {
            tmp_assign_source_8 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_5,
                (PyObject *)moduledict_jedi$inference$param,
                mod_consts[6],
                mod_consts[97]
            );
        } else {
            tmp_assign_source_8 = IMPORT_NAME(tmp_import_name_from_5, mod_consts[6]);
        }

        Py_DECREF(tmp_import_name_from_5);
        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_jedi$inference$param, (Nuitka_StringObject *)mod_consts[6], tmp_assign_source_8);
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_name_name_6;
        PyObject *tmp_globals_arg_name_6;
        PyObject *tmp_locals_arg_name_6;
        PyObject *tmp_fromlist_name_6;
        PyObject *tmp_level_name_6;
        tmp_name_name_6 = mod_consts[128];
        tmp_globals_arg_name_6 = (PyObject *)moduledict_jedi$inference$param;
        tmp_locals_arg_name_6 = Py_None;
        tmp_fromlist_name_6 = mod_consts[129];
        tmp_level_name_6 = mod_consts[97];
        frame_071a56ce653e3a204db3703c78db601d->m_frame.f_lineno = 7;
        tmp_assign_source_9 = IMPORT_MODULE5(tmp_name_name_6, tmp_globals_arg_name_6, tmp_locals_arg_name_6, tmp_fromlist_name_6, tmp_level_name_6);
        if (tmp_assign_source_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 7;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_1__module == NULL);
        tmp_import_from_1__module = tmp_assign_source_9;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_import_name_from_6;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_6 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_6)) {
            tmp_assign_source_10 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_6,
                (PyObject *)moduledict_jedi$inference$param,
                mod_consts[79],
                mod_consts[97]
            );
        } else {
            tmp_assign_source_10 = IMPORT_NAME(tmp_import_name_from_6, mod_consts[79]);
        }

        if (tmp_assign_source_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 7;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_jedi$inference$param, (Nuitka_StringObject *)mod_consts[79], tmp_assign_source_10);
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_import_name_from_7;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_7 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_7)) {
            tmp_assign_source_11 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_7,
                (PyObject *)moduledict_jedi$inference$param,
                mod_consts[0],
                mod_consts[97]
            );
        } else {
            tmp_assign_source_11 = IMPORT_NAME(tmp_import_name_from_7, mod_consts[0]);
        }

        if (tmp_assign_source_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 7;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_jedi$inference$param, (Nuitka_StringObject *)mod_consts[0], tmp_assign_source_11);
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_import_name_from_8;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_8 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_8)) {
            tmp_assign_source_12 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_8,
                (PyObject *)moduledict_jedi$inference$param,
                mod_consts[83],
                mod_consts[97]
            );
        } else {
            tmp_assign_source_12 = IMPORT_NAME(tmp_import_name_from_8, mod_consts[83]);
        }

        if (tmp_assign_source_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 7;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_jedi$inference$param, (Nuitka_StringObject *)mod_consts[83], tmp_assign_source_12);
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
        PyObject *tmp_assign_source_13;
        PyObject *tmp_import_name_from_9;
        PyObject *tmp_name_name_7;
        PyObject *tmp_globals_arg_name_7;
        PyObject *tmp_locals_arg_name_7;
        PyObject *tmp_fromlist_name_7;
        PyObject *tmp_level_name_7;
        tmp_name_name_7 = mod_consts[130];
        tmp_globals_arg_name_7 = (PyObject *)moduledict_jedi$inference$param;
        tmp_locals_arg_name_7 = Py_None;
        tmp_fromlist_name_7 = mod_consts[131];
        tmp_level_name_7 = mod_consts[97];
        frame_071a56ce653e3a204db3703c78db601d->m_frame.f_lineno = 9;
        tmp_import_name_from_9 = IMPORT_MODULE5(tmp_name_name_7, tmp_globals_arg_name_7, tmp_locals_arg_name_7, tmp_fromlist_name_7, tmp_level_name_7);
        if (tmp_import_name_from_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 9;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_9)) {
            tmp_assign_source_13 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_9,
                (PyObject *)moduledict_jedi$inference$param,
                mod_consts[76],
                mod_consts[97]
            );
        } else {
            tmp_assign_source_13 = IMPORT_NAME(tmp_import_name_from_9, mod_consts[76]);
        }

        Py_DECREF(tmp_import_name_from_9);
        if (tmp_assign_source_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 9;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_jedi$inference$param, (Nuitka_StringObject *)mod_consts[76], tmp_assign_source_13);
    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_import_name_from_10;
        PyObject *tmp_name_name_8;
        PyObject *tmp_globals_arg_name_8;
        PyObject *tmp_locals_arg_name_8;
        PyObject *tmp_fromlist_name_8;
        PyObject *tmp_level_name_8;
        tmp_name_name_8 = mod_consts[132];
        tmp_globals_arg_name_8 = (PyObject *)moduledict_jedi$inference$param;
        tmp_locals_arg_name_8 = Py_None;
        tmp_fromlist_name_8 = mod_consts[133];
        tmp_level_name_8 = mod_consts[97];
        frame_071a56ce653e3a204db3703c78db601d->m_frame.f_lineno = 10;
        tmp_import_name_from_10 = IMPORT_MODULE5(tmp_name_name_8, tmp_globals_arg_name_8, tmp_locals_arg_name_8, tmp_fromlist_name_8, tmp_level_name_8);
        if (tmp_import_name_from_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 10;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_10)) {
            tmp_assign_source_14 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_10,
                (PyObject *)moduledict_jedi$inference$param,
                mod_consts[134],
                mod_consts[97]
            );
        } else {
            tmp_assign_source_14 = IMPORT_NAME(tmp_import_name_from_10, mod_consts[134]);
        }

        Py_DECREF(tmp_import_name_from_10);
        if (tmp_assign_source_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 10;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_jedi$inference$param, (Nuitka_StringObject *)mod_consts[134], tmp_assign_source_14);
    }
    {
        PyObject *tmp_assign_source_15;


        tmp_assign_source_15 = MAKE_FUNCTION_jedi$inference$param$$$function__1__add_argument_issue();

        UPDATE_STRING_DICT1(moduledict_jedi$inference$param, (Nuitka_StringObject *)mod_consts[95], tmp_assign_source_15);
    }
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_tuple_element_1;
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_jedi$inference$param, (Nuitka_StringObject *)mod_consts[134]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[134]);
        }

        assert(!(tmp_tuple_element_1 == NULL));
        tmp_assign_source_16 = PyTuple_New(1);
        PyTuple_SET_ITEM0(tmp_assign_source_16, 0, tmp_tuple_element_1);
        assert(tmp_class_creation_1__bases_orig == NULL);
        tmp_class_creation_1__bases_orig = tmp_assign_source_16;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_dircall_arg1_1;
        CHECK_OBJECT(tmp_class_creation_1__bases_orig);
        tmp_dircall_arg1_1 = tmp_class_creation_1__bases_orig;
        Py_INCREF(tmp_dircall_arg1_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1};
            tmp_assign_source_17 = impl___main__$$$function__1__mro_entries_conversion(dir_call_args);
        }
        if (tmp_assign_source_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;

            goto try_except_handler_2;
        }
        assert(tmp_class_creation_1__bases == NULL);
        tmp_class_creation_1__bases = tmp_assign_source_17;
    }
    {
        PyObject *tmp_assign_source_18;
        tmp_assign_source_18 = PyDict_New();
        assert(tmp_class_creation_1__class_decl_dict == NULL);
        tmp_class_creation_1__class_decl_dict = tmp_assign_source_18;
    }
    {
        PyObject *tmp_assign_source_19;
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
        tmp_key_name_1 = mod_consts[135];
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
        tmp_key_name_2 = mod_consts[135];
        tmp_metaclass_name_1 = DICT_GET_ITEM_WITH_ERROR(tmp_dict_arg_name_2, tmp_key_name_2);
        if (tmp_metaclass_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;

            goto try_except_handler_2;
        }
        goto condexpr_end_1;
        condexpr_false_1:;
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_class_creation_1__bases);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;

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
        tmp_subscript_name_1 = mod_consts[97];
        tmp_type_arg_1 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_name_1, tmp_subscript_name_1, 0);
        if (tmp_type_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;

            goto try_except_handler_2;
        }
        tmp_metaclass_name_1 = BUILTIN_TYPE1(tmp_type_arg_1);
        Py_DECREF(tmp_type_arg_1);
        if (tmp_metaclass_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;

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
        tmp_assign_source_19 = SELECT_METACLASS(tmp_metaclass_name_1, tmp_bases_name_1);
        Py_DECREF(tmp_metaclass_name_1);
        if (tmp_assign_source_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;

            goto try_except_handler_2;
        }
        assert(tmp_class_creation_1__metaclass == NULL);
        tmp_class_creation_1__metaclass = tmp_assign_source_19;
    }
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_key_name_3;
        PyObject *tmp_dict_arg_name_3;
        tmp_key_name_3 = mod_consts[135];
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
    tmp_dictdel_key = mod_consts[135];
    tmp_result = DICT_REMOVE_ITEM(tmp_dictdel_dict, tmp_dictdel_key);
    if (tmp_result == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 21;

        goto try_except_handler_2;
    }
    branch_no_1:;
    {
        nuitka_bool tmp_condition_result_4;
        PyObject *tmp_expression_name_2;
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_expression_name_2 = tmp_class_creation_1__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_name_2, mod_consts[136]);
        tmp_condition_result_4 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_called_name_1;
        PyObject *tmp_expression_name_3;
        PyObject *tmp_args_name_1;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_kwargs_name_1;
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_expression_name_3 = tmp_class_creation_1__metaclass;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_3, mod_consts[136]);
        if (tmp_called_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;

            goto try_except_handler_2;
        }
        tmp_tuple_element_2 = mod_consts[68];
        tmp_args_name_1 = PyTuple_New(2);
        PyTuple_SET_ITEM0(tmp_args_name_1, 0, tmp_tuple_element_2);
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_tuple_element_2 = tmp_class_creation_1__bases;
        PyTuple_SET_ITEM0(tmp_args_name_1, 1, tmp_tuple_element_2);
        CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
        tmp_kwargs_name_1 = tmp_class_creation_1__class_decl_dict;
        frame_071a56ce653e3a204db3703c78db601d->m_frame.f_lineno = 21;
        tmp_assign_source_20 = CALL_FUNCTION(tmp_called_name_1, tmp_args_name_1, tmp_kwargs_name_1);
        Py_DECREF(tmp_called_name_1);
        Py_DECREF(tmp_args_name_1);
        if (tmp_assign_source_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;

            goto try_except_handler_2;
        }
        assert(tmp_class_creation_1__prepared == NULL);
        tmp_class_creation_1__prepared = tmp_assign_source_20;
    }
    {
        nuitka_bool tmp_condition_result_5;
        PyObject *tmp_operand_name_1;
        PyObject *tmp_expression_name_4;
        CHECK_OBJECT(tmp_class_creation_1__prepared);
        tmp_expression_name_4 = tmp_class_creation_1__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_name_4, mod_consts[137]);
        tmp_operand_name_1 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_name_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;

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
        tmp_left_name_1 = mod_consts[138];
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_getattr_target_1 = tmp_class_creation_1__metaclass;
        tmp_getattr_attr_1 = mod_consts[38];
        tmp_getattr_default_1 = mod_consts[139];
        tmp_tuple_element_3 = BUILTIN_GETATTR(tmp_getattr_target_1, tmp_getattr_attr_1, tmp_getattr_default_1);
        if (tmp_tuple_element_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;

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
            tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tmp_expression_name_5, mod_consts[38]);
            Py_DECREF(tmp_expression_name_5);
            if (tmp_tuple_element_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 21;

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


            exception_lineno = 21;

            goto try_except_handler_2;
        }
        exception_type = tmp_raise_type_1;
        Py_INCREF(tmp_raise_type_1);
        exception_value = tmp_raise_value_1;
        exception_lineno = 21;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_2;
    }
    branch_no_3:;
    goto branch_end_2;
    branch_no_2:;
    {
        PyObject *tmp_assign_source_21;
        tmp_assign_source_21 = PyDict_New();
        assert(tmp_class_creation_1__prepared == NULL);
        tmp_class_creation_1__prepared = tmp_assign_source_21;
    }
    branch_end_2:;
    {
        PyObject *tmp_assign_source_22;
        {
            PyObject *tmp_set_locals_1;
            CHECK_OBJECT(tmp_class_creation_1__prepared);
            tmp_set_locals_1 = tmp_class_creation_1__prepared;
            locals_jedi$inference$param$$$class__1_ExecutedParamName_21 = tmp_set_locals_1;
            Py_INCREF(tmp_set_locals_1);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[140];
        tmp_res = PyObject_SetItem(locals_jedi$inference$param$$$class__1_ExecutedParamName_21, mod_consts[141], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;

            goto try_except_handler_4;
        }
        tmp_dictset_value = mod_consts[68];
        tmp_res = PyObject_SetItem(locals_jedi$inference$param$$$class__1_ExecutedParamName_21, mod_consts[142], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;

            goto try_except_handler_4;
        }
        if (isFrameUnusable(cache_frame_6e2141c6ecffb43341a386949becc63b_2)) {
            Py_XDECREF(cache_frame_6e2141c6ecffb43341a386949becc63b_2);

#if _DEBUG_REFCOUNTS
            if (cache_frame_6e2141c6ecffb43341a386949becc63b_2 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_6e2141c6ecffb43341a386949becc63b_2 = MAKE_FUNCTION_FRAME(codeobj_6e2141c6ecffb43341a386949becc63b, module_jedi$inference$param, sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }
        assert(cache_frame_6e2141c6ecffb43341a386949becc63b_2->m_type_description == NULL);
        frame_6e2141c6ecffb43341a386949becc63b_2 = cache_frame_6e2141c6ecffb43341a386949becc63b_2;

        // Push the new frame as the currently active one.
        pushFrameStack(frame_6e2141c6ecffb43341a386949becc63b_2);

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert(Py_REFCNT(frame_6e2141c6ecffb43341a386949becc63b_2) == 2); // Frame stack

        // Framed code:
        {
            PyObject *tmp_defaults_1;
            struct Nuitka_CellObject *tmp_closure_1[1];
            tmp_defaults_1 = mod_consts[143];
            Py_INCREF(tmp_defaults_1);

            tmp_closure_1[0] = outline_0_var___class__;
            Py_INCREF(tmp_closure_1[0]);

            tmp_dictset_value = MAKE_FUNCTION_jedi$inference$param$$$function__2___init__(tmp_defaults_1, tmp_closure_1);

            tmp_res = PyObject_SetItem(locals_jedi$inference$param$$$class__1_ExecutedParamName_21, mod_consts[11], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 22;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
        }


        tmp_dictset_value = MAKE_FUNCTION_jedi$inference$param$$$function__3_infer();

        tmp_res = PyObject_SetItem(locals_jedi$inference$param$$$class__1_ExecutedParamName_21, mod_consts[16], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 27;
            type_description_2 = "c";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION_jedi$inference$param$$$function__4_matches_signature();

        tmp_res = PyObject_SetItem(locals_jedi$inference$param$$$class__1_ExecutedParamName_21, mod_consts[146], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 30;
            type_description_2 = "c";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION_jedi$inference$param$$$function__5___repr__();

        tmp_res = PyObject_SetItem(locals_jedi$inference$param$$$class__1_ExecutedParamName_21, mod_consts[148], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 48;
            type_description_2 = "c";
            goto frame_exception_exit_2;
        }

#if 0
        RESTORE_FRAME_EXCEPTION(frame_6e2141c6ecffb43341a386949becc63b_2);
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_1;

        frame_exception_exit_2:;

#if 0
        RESTORE_FRAME_EXCEPTION(frame_6e2141c6ecffb43341a386949becc63b_2);
#endif

        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_6e2141c6ecffb43341a386949becc63b_2, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_6e2141c6ecffb43341a386949becc63b_2->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_6e2141c6ecffb43341a386949becc63b_2, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_6e2141c6ecffb43341a386949becc63b_2,
            type_description_2,
            outline_0_var___class__
        );


        // Release cached frame if used for exception.
        if (frame_6e2141c6ecffb43341a386949becc63b_2 == cache_frame_6e2141c6ecffb43341a386949becc63b_2) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif

            Py_DECREF(cache_frame_6e2141c6ecffb43341a386949becc63b_2);
            cache_frame_6e2141c6ecffb43341a386949becc63b_2 = NULL;
        }

        assertFrameObject(frame_6e2141c6ecffb43341a386949becc63b_2);

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
            nuitka_bool tmp_condition_result_6;
            PyObject *tmp_compexpr_left_1;
            PyObject *tmp_compexpr_right_1;
            CHECK_OBJECT(tmp_class_creation_1__bases);
            tmp_compexpr_left_1 = tmp_class_creation_1__bases;
            CHECK_OBJECT(tmp_class_creation_1__bases_orig);
            tmp_compexpr_right_1 = tmp_class_creation_1__bases_orig;
            tmp_condition_result_6 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_compexpr_left_1, tmp_compexpr_right_1);
            if (tmp_condition_result_6 == NUITKA_BOOL_EXCEPTION) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 21;

                goto try_except_handler_4;
            }
            if (tmp_condition_result_6 == NUITKA_BOOL_TRUE) {
                goto branch_yes_4;
            } else {
                goto branch_no_4;
            }
            assert(tmp_condition_result_6 != NUITKA_BOOL_UNASSIGNED);
        }
        branch_yes_4:;
        CHECK_OBJECT(tmp_class_creation_1__bases_orig);
        tmp_dictset_value = tmp_class_creation_1__bases_orig;
        tmp_res = PyObject_SetItem(locals_jedi$inference$param$$$class__1_ExecutedParamName_21, mod_consts[150], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;

            goto try_except_handler_4;
        }
        branch_no_4:;
        {
            PyObject *tmp_assign_source_23;
            PyObject *tmp_called_name_2;
            PyObject *tmp_args_name_2;
            PyObject *tmp_tuple_element_4;
            PyObject *tmp_kwargs_name_2;
            CHECK_OBJECT(tmp_class_creation_1__metaclass);
            tmp_called_name_2 = tmp_class_creation_1__metaclass;
            tmp_tuple_element_4 = mod_consts[68];
            tmp_args_name_2 = PyTuple_New(3);
            PyTuple_SET_ITEM0(tmp_args_name_2, 0, tmp_tuple_element_4);
            CHECK_OBJECT(tmp_class_creation_1__bases);
            tmp_tuple_element_4 = tmp_class_creation_1__bases;
            PyTuple_SET_ITEM0(tmp_args_name_2, 1, tmp_tuple_element_4);
            tmp_tuple_element_4 = locals_jedi$inference$param$$$class__1_ExecutedParamName_21;
            PyTuple_SET_ITEM0(tmp_args_name_2, 2, tmp_tuple_element_4);
            CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
            tmp_kwargs_name_2 = tmp_class_creation_1__class_decl_dict;
            frame_071a56ce653e3a204db3703c78db601d->m_frame.f_lineno = 21;
            tmp_assign_source_23 = CALL_FUNCTION(tmp_called_name_2, tmp_args_name_2, tmp_kwargs_name_2);
            Py_DECREF(tmp_args_name_2);
            if (tmp_assign_source_23 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 21;

                goto try_except_handler_4;
            }
            {
                PyObject *old = Nuitka_Cell_GET(outline_0_var___class__);
                PyCell_SET(outline_0_var___class__, tmp_assign_source_23);
                Py_XDECREF(old);
            }

        }
        CHECK_OBJECT(Nuitka_Cell_GET(outline_0_var___class__));
        tmp_assign_source_22 = Nuitka_Cell_GET(outline_0_var___class__);
        Py_INCREF(tmp_assign_source_22);
        goto try_return_handler_4;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_4:;
        Py_DECREF(locals_jedi$inference$param$$$class__1_ExecutedParamName_21);
        locals_jedi$inference$param$$$class__1_ExecutedParamName_21 = NULL;
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

        Py_DECREF(locals_jedi$inference$param$$$class__1_ExecutedParamName_21);
        locals_jedi$inference$param$$$class__1_ExecutedParamName_21 = NULL;
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

        CHECK_OBJECT(outline_0_var___class__);
        Py_DECREF(outline_0_var___class__);
        outline_0_var___class__ = NULL;
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
        exception_lineno = 21;
        goto try_except_handler_2;
        outline_result_1:;
        UPDATE_STRING_DICT1(moduledict_jedi$inference$param, (Nuitka_StringObject *)mod_consts[68], tmp_assign_source_22);
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

    CHECK_OBJECT(tmp_class_creation_1__bases_orig);
    Py_DECREF(tmp_class_creation_1__bases_orig);
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
    RESTORE_FRAME_EXCEPTION(frame_071a56ce653e3a204db3703c78db601d);
#endif
    popFrameStack();

    assertFrameObject(frame_071a56ce653e3a204db3703c78db601d);

    goto frame_no_exception_2;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_071a56ce653e3a204db3703c78db601d);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_071a56ce653e3a204db3703c78db601d, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_071a56ce653e3a204db3703c78db601d->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_071a56ce653e3a204db3703c78db601d, exception_lineno);
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
    {
        PyObject *tmp_assign_source_24;


        tmp_assign_source_24 = MAKE_FUNCTION_jedi$inference$param$$$function__6_get_executed_param_names_and_issues();

        UPDATE_STRING_DICT1(moduledict_jedi$inference$param, (Nuitka_StringObject *)mod_consts[103], tmp_assign_source_24);
    }
    {
        PyObject *tmp_assign_source_25;


        tmp_assign_source_25 = MAKE_FUNCTION_jedi$inference$param$$$function__7_get_executed_param_names();

        UPDATE_STRING_DICT1(moduledict_jedi$inference$param, (Nuitka_StringObject *)mod_consts[151], tmp_assign_source_25);
    }
    {
        PyObject *tmp_assign_source_26;


        tmp_assign_source_26 = MAKE_FUNCTION_jedi$inference$param$$$function__8__error_argument_count();

        UPDATE_STRING_DICT1(moduledict_jedi$inference$param, (Nuitka_StringObject *)mod_consts[85], tmp_assign_source_26);
    }

    return module_jedi$inference$param;
    module_exception_exit:
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);
    return NULL;
}

