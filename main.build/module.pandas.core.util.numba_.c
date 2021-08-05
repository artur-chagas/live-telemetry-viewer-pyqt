/* Generated code for Python module 'pandas.core.util.numba_'
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

/* The "module_pandas$core$util$numba_" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_pandas$core$util$numba_;
PyDictObject *moduledict_pandas$core$util$numba_;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[81];

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(void) {
    if (constants_created == false) {
        loadConstantsBlob(&mod_consts[0], UNTRANSLATE("pandas.core.util.numba_"));
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
void checkModuleConstants_pandas$core$util$numba_(void) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    checkConstantsBlob(&mod_consts[0], "pandas.core.util.numba_");
}
#endif

// The module code objects.
static PyCodeObject *codeobj_e0156a0573f1a068ab6bebf36092e1b1;
static PyCodeObject *codeobj_d2305ed1ed4aaa01f3d9b4765422b704;
static PyCodeObject *codeobj_0eb8c9418587b10c9946150b2899e459;
static PyCodeObject *codeobj_d84dddf09c2d7ef76f3d1e119e0257ab;
static PyCodeObject *codeobj_b05c9065d4724d66d9e3396b1bde40ee;
static PyCodeObject *codeobj_ed6aa5ee4465df93114124874ed4255e;
static PyCodeObject *codeobj_de92b3b4eae2b0328d2ea38da67ac851;

static void createModuleCodeObjects(void) {
    module_filename_obj = mod_consts[38]; CHECK_OBJECT(module_filename_obj);
    codeobj_e0156a0573f1a068ab6bebf36092e1b1 = MAKE_CODEOBJECT(module_filename_obj, 1, CO_NOFREE, mod_consts[72], NULL, NULL, 0, 0, 0);
    codeobj_d2305ed1ed4aaa01f3d9b4765422b704 = MAKE_CODEOBJECT(module_filename_obj, 27, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[70], mod_consts[73], NULL, 2, 0, 0);
    codeobj_0eb8c9418587b10c9946150b2899e459 = MAKE_CODEOBJECT(module_filename_obj, 106, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARARGS, mod_consts[33], mod_consts[74], mod_consts[75], 1, 0, 0);
    codeobj_d84dddf09c2d7ef76f3d1e119e0257ab = MAKE_CODEOBJECT(module_filename_obj, 63, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[71], mod_consts[76], NULL, 4, 0, 0);
    codeobj_b05c9065d4724d66d9e3396b1bde40ee = MAKE_CODEOBJECT(module_filename_obj, 15, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[62], mod_consts[77], NULL, 1, 0, 0);
    codeobj_ed6aa5ee4465df93114124874ed4255e = MAKE_CODEOBJECT(module_filename_obj, 98, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARARGS, mod_consts[25], mod_consts[78], mod_consts[79], 1, 0, 0);
    codeobj_de92b3b4eae2b0328d2ea38da67ac851 = MAKE_CODEOBJECT(module_filename_obj, 20, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[65], mod_consts[80], NULL, 1, 0, 0);
}

// The module function declarations.
NUITKA_CROSS_MODULE PyObject *impl___main__$$$function__10_complex_call_helper_pos_star_list(PyObject **python_pars);


static PyObject *MAKE_FUNCTION_pandas$core$util$numba_$$$function__1_maybe_use_numba(PyObject *annotations);


static PyObject *MAKE_FUNCTION_pandas$core$util$numba_$$$function__2_set_use_numba(PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_pandas$core$util$numba_$$$function__3_get_jit_arguments(PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_pandas$core$util$numba_$$$function__4_jit_user_function(PyObject *annotations);


static PyObject *MAKE_FUNCTION_pandas$core$util$numba_$$$function__4_jit_user_function$$$function__1_numba_func(struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_pandas$core$util$numba_$$$function__4_jit_user_function$$$function__1_numba_func$$$function__1_impl(struct Nuitka_CellObject **closure);


// The module function definitions.
static PyObject *impl_pandas$core$util$numba_$$$function__1_maybe_use_numba(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_engine = python_pars[0];
    struct Nuitka_FrameObject *frame_b05c9065d4724d66d9e3396b1bde40ee;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_b05c9065d4724d66d9e3396b1bde40ee = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_b05c9065d4724d66d9e3396b1bde40ee)) {
        Py_XDECREF(cache_frame_b05c9065d4724d66d9e3396b1bde40ee);

#if _DEBUG_REFCOUNTS
        if (cache_frame_b05c9065d4724d66d9e3396b1bde40ee == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_b05c9065d4724d66d9e3396b1bde40ee = MAKE_FUNCTION_FRAME(codeobj_b05c9065d4724d66d9e3396b1bde40ee, module_pandas$core$util$numba_, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_b05c9065d4724d66d9e3396b1bde40ee->m_type_description == NULL);
    frame_b05c9065d4724d66d9e3396b1bde40ee = cache_frame_b05c9065d4724d66d9e3396b1bde40ee;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_b05c9065d4724d66d9e3396b1bde40ee);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_b05c9065d4724d66d9e3396b1bde40ee) == 2); // Frame stack

    // Framed code:
    {
        int tmp_or_left_truth_1;
        PyObject *tmp_or_left_value_1;
        PyObject *tmp_or_right_value_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        int tmp_and_left_truth_1;
        PyObject *tmp_and_left_value_1;
        PyObject *tmp_and_right_value_1;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        CHECK_OBJECT(par_engine);
        tmp_compexpr_left_1 = par_engine;
        tmp_compexpr_right_1 = mod_consts[0];
        tmp_or_left_value_1 = RICH_COMPARE_EQ_OBJECT_OBJECT_OBJECT(tmp_compexpr_left_1, tmp_compexpr_right_1);
        if (tmp_or_left_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 17;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_or_left_truth_1 = CHECK_IF_TRUE(tmp_or_left_value_1);
        if (tmp_or_left_truth_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_or_left_value_1);

            exception_lineno = 17;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        if (tmp_or_left_truth_1 == 1) {
            goto or_left_1;
        } else {
            goto or_right_1;
        }
        or_right_1:;
        Py_DECREF(tmp_or_left_value_1);
        CHECK_OBJECT(par_engine);
        tmp_compexpr_left_2 = par_engine;
        tmp_compexpr_right_2 = Py_None;
        tmp_and_left_value_1 = (tmp_compexpr_left_2 == tmp_compexpr_right_2) ? Py_True : Py_False;
        tmp_and_left_truth_1 = CHECK_IF_TRUE(tmp_and_left_value_1);
        if (tmp_and_left_truth_1 == 1) {
            goto and_right_1;
        } else {
            goto and_left_1;
        }
        and_right_1:;
        tmp_and_right_value_1 = GET_STRING_DICT_VALUE(moduledict_pandas$core$util$numba_, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_and_right_value_1 == NULL)) {
            tmp_and_right_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
        }

        if (tmp_and_right_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 17;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_or_right_value_1 = tmp_and_right_value_1;
        goto and_end_1;
        and_left_1:;
        tmp_or_right_value_1 = tmp_and_left_value_1;
        and_end_1:;
        Py_INCREF(tmp_or_right_value_1);
        tmp_return_value = tmp_or_right_value_1;
        goto or_end_1;
        or_left_1:;
        tmp_return_value = tmp_or_left_value_1;
        or_end_1:;
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_b05c9065d4724d66d9e3396b1bde40ee);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_b05c9065d4724d66d9e3396b1bde40ee);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_b05c9065d4724d66d9e3396b1bde40ee);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_b05c9065d4724d66d9e3396b1bde40ee, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_b05c9065d4724d66d9e3396b1bde40ee->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_b05c9065d4724d66d9e3396b1bde40ee, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_b05c9065d4724d66d9e3396b1bde40ee,
        type_description_1,
        par_engine
    );


    // Release cached frame if used for exception.
    if (frame_b05c9065d4724d66d9e3396b1bde40ee == cache_frame_b05c9065d4724d66d9e3396b1bde40ee) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_b05c9065d4724d66d9e3396b1bde40ee);
        cache_frame_b05c9065d4724d66d9e3396b1bde40ee = NULL;
    }

    assertFrameObject(frame_b05c9065d4724d66d9e3396b1bde40ee);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(par_engine);
    Py_DECREF(par_engine);
    par_engine = NULL;
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

    CHECK_OBJECT(par_engine);
    Py_DECREF(par_engine);
    par_engine = NULL;
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


static PyObject *impl_pandas$core$util$numba_$$$function__2_set_use_numba(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_enable = python_pars[0];
    struct Nuitka_FrameObject *frame_de92b3b4eae2b0328d2ea38da67ac851;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_de92b3b4eae2b0328d2ea38da67ac851 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_de92b3b4eae2b0328d2ea38da67ac851)) {
        Py_XDECREF(cache_frame_de92b3b4eae2b0328d2ea38da67ac851);

#if _DEBUG_REFCOUNTS
        if (cache_frame_de92b3b4eae2b0328d2ea38da67ac851 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_de92b3b4eae2b0328d2ea38da67ac851 = MAKE_FUNCTION_FRAME(codeobj_de92b3b4eae2b0328d2ea38da67ac851, module_pandas$core$util$numba_, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_de92b3b4eae2b0328d2ea38da67ac851->m_type_description == NULL);
    frame_de92b3b4eae2b0328d2ea38da67ac851 = cache_frame_de92b3b4eae2b0328d2ea38da67ac851;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_de92b3b4eae2b0328d2ea38da67ac851);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_de92b3b4eae2b0328d2ea38da67ac851) == 2); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_truth_name_1;
        CHECK_OBJECT(par_enable);
        tmp_truth_name_1 = CHECK_IF_TRUE(par_enable);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 22;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_call_result_1;
        tmp_called_name_1 = GET_STRING_DICT_VALUE(moduledict_pandas$core$util$numba_, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_called_name_1 == NULL)) {
            tmp_called_name_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        if (tmp_called_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_de92b3b4eae2b0328d2ea38da67ac851->m_frame.f_lineno = 23;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_1, mod_consts[0]);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    branch_no_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_de92b3b4eae2b0328d2ea38da67ac851);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_de92b3b4eae2b0328d2ea38da67ac851);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_de92b3b4eae2b0328d2ea38da67ac851, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_de92b3b4eae2b0328d2ea38da67ac851->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_de92b3b4eae2b0328d2ea38da67ac851, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_de92b3b4eae2b0328d2ea38da67ac851,
        type_description_1,
        par_enable
    );


    // Release cached frame if used for exception.
    if (frame_de92b3b4eae2b0328d2ea38da67ac851 == cache_frame_de92b3b4eae2b0328d2ea38da67ac851) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_de92b3b4eae2b0328d2ea38da67ac851);
        cache_frame_de92b3b4eae2b0328d2ea38da67ac851 = NULL;
    }

    assertFrameObject(frame_de92b3b4eae2b0328d2ea38da67ac851);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    {
        PyObject *tmp_assign_source_1;
        CHECK_OBJECT(par_enable);
        tmp_assign_source_1 = par_enable;
        UPDATE_STRING_DICT0(moduledict_pandas$core$util$numba_, (Nuitka_StringObject *)mod_consts[1], tmp_assign_source_1);
    }
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(par_enable);
    Py_DECREF(par_enable);
    par_enable = NULL;
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

    CHECK_OBJECT(par_enable);
    Py_DECREF(par_enable);
    par_enable = NULL;
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


static PyObject *impl_pandas$core$util$numba_$$$function__3_get_jit_arguments(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_engine_kwargs = python_pars[0];
    PyObject *par_kwargs = python_pars[1];
    PyObject *var_nopython = NULL;
    PyObject *var_nogil = NULL;
    PyObject *var_parallel = NULL;
    struct Nuitka_FrameObject *frame_d2305ed1ed4aaa01f3d9b4765422b704;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_d2305ed1ed4aaa01f3d9b4765422b704 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    {
        bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT(par_engine_kwargs);
        tmp_compexpr_left_1 = par_engine_kwargs;
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
        tmp_assign_source_1 = PyDict_New();
        {
            PyObject *old = par_engine_kwargs;
            assert(old != NULL);
            par_engine_kwargs = tmp_assign_source_1;
            Py_DECREF(old);
        }

    }
    branch_no_1:;
    // Tried code:
    if (isFrameUnusable(cache_frame_d2305ed1ed4aaa01f3d9b4765422b704)) {
        Py_XDECREF(cache_frame_d2305ed1ed4aaa01f3d9b4765422b704);

#if _DEBUG_REFCOUNTS
        if (cache_frame_d2305ed1ed4aaa01f3d9b4765422b704 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_d2305ed1ed4aaa01f3d9b4765422b704 = MAKE_FUNCTION_FRAME(codeobj_d2305ed1ed4aaa01f3d9b4765422b704, module_pandas$core$util$numba_, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_d2305ed1ed4aaa01f3d9b4765422b704->m_type_description == NULL);
    frame_d2305ed1ed4aaa01f3d9b4765422b704 = cache_frame_d2305ed1ed4aaa01f3d9b4765422b704;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_d2305ed1ed4aaa01f3d9b4765422b704);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_d2305ed1ed4aaa01f3d9b4765422b704) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_instance_1;
        CHECK_OBJECT(par_engine_kwargs);
        tmp_called_instance_1 = par_engine_kwargs;
        frame_d2305ed1ed4aaa01f3d9b4765422b704->m_frame.f_lineno = 52;
        tmp_assign_source_2 = CALL_METHOD_WITH_ARGS2(
            tmp_called_instance_1,
            mod_consts[4],
            &PyTuple_GET_ITEM(mod_consts[5], 0)
        );

        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 52;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        assert(var_nopython == NULL);
        var_nopython = tmp_assign_source_2;
    }
    {
        nuitka_bool tmp_condition_result_2;
        int tmp_and_left_truth_1;
        nuitka_bool tmp_and_left_value_1;
        nuitka_bool tmp_and_right_value_1;
        int tmp_truth_name_1;
        int tmp_truth_name_2;
        CHECK_OBJECT(par_kwargs);
        tmp_truth_name_1 = CHECK_IF_TRUE(par_kwargs);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 53;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_value_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 53;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_and_left_truth_1 == 1) {
            goto and_right_1;
        } else {
            goto and_left_1;
        }
        and_right_1:;
        CHECK_OBJECT(var_nopython);
        tmp_truth_name_2 = CHECK_IF_TRUE(var_nopython);
        if (tmp_truth_name_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 53;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_1 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        tmp_condition_result_2 = tmp_and_right_value_1;
        goto and_end_1;
        and_left_1:;
        tmp_condition_result_2 = tmp_and_left_value_1;
        and_end_1:;
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_called_name_1;
        tmp_called_name_1 = GET_STRING_DICT_VALUE(moduledict_pandas$core$util$numba_, (Nuitka_StringObject *)mod_consts[6]);

        if (unlikely(tmp_called_name_1 == NULL)) {
            tmp_called_name_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
        }

        if (tmp_called_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 54;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        frame_d2305ed1ed4aaa01f3d9b4765422b704->m_frame.f_lineno = 54;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_1, mod_consts[7]);
        if (tmp_raise_type_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 54;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        exception_type = tmp_raise_type_1;
        exception_lineno = 54;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    branch_no_2:;
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_instance_2;
        if (par_engine_kwargs == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[8]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 58;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_2 = par_engine_kwargs;
        frame_d2305ed1ed4aaa01f3d9b4765422b704->m_frame.f_lineno = 58;
        tmp_assign_source_3 = CALL_METHOD_WITH_ARGS2(
            tmp_called_instance_2,
            mod_consts[4],
            &PyTuple_GET_ITEM(mod_consts[9], 0)
        );

        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 58;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        assert(var_nogil == NULL);
        var_nogil = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_called_instance_3;
        if (par_engine_kwargs == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[8]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 59;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_3 = par_engine_kwargs;
        frame_d2305ed1ed4aaa01f3d9b4765422b704->m_frame.f_lineno = 59;
        tmp_assign_source_4 = CALL_METHOD_WITH_ARGS2(
            tmp_called_instance_3,
            mod_consts[4],
            &PyTuple_GET_ITEM(mod_consts[10], 0)
        );

        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 59;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        assert(var_parallel == NULL);
        var_parallel = tmp_assign_source_4;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_d2305ed1ed4aaa01f3d9b4765422b704);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_d2305ed1ed4aaa01f3d9b4765422b704);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_d2305ed1ed4aaa01f3d9b4765422b704, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_d2305ed1ed4aaa01f3d9b4765422b704->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_d2305ed1ed4aaa01f3d9b4765422b704, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_d2305ed1ed4aaa01f3d9b4765422b704,
        type_description_1,
        par_engine_kwargs,
        par_kwargs,
        var_nopython,
        var_nogil,
        var_parallel
    );


    // Release cached frame if used for exception.
    if (frame_d2305ed1ed4aaa01f3d9b4765422b704 == cache_frame_d2305ed1ed4aaa01f3d9b4765422b704) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_d2305ed1ed4aaa01f3d9b4765422b704);
        cache_frame_d2305ed1ed4aaa01f3d9b4765422b704 = NULL;
    }

    assertFrameObject(frame_d2305ed1ed4aaa01f3d9b4765422b704);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    {
        PyObject *tmp_tuple_element_1;
        CHECK_OBJECT(var_nopython);
        tmp_tuple_element_1 = var_nopython;
        tmp_return_value = PyTuple_New(3);
        PyTuple_SET_ITEM0(tmp_return_value, 0, tmp_tuple_element_1);
        CHECK_OBJECT(var_nogil);
        tmp_tuple_element_1 = var_nogil;
        PyTuple_SET_ITEM0(tmp_return_value, 1, tmp_tuple_element_1);
        CHECK_OBJECT(var_parallel);
        tmp_tuple_element_1 = var_parallel;
        PyTuple_SET_ITEM0(tmp_return_value, 2, tmp_tuple_element_1);
        goto try_return_handler_1;
    }
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(par_engine_kwargs);
    par_engine_kwargs = NULL;
    CHECK_OBJECT(par_kwargs);
    Py_DECREF(par_kwargs);
    par_kwargs = NULL;
    CHECK_OBJECT(var_nopython);
    Py_DECREF(var_nopython);
    var_nopython = NULL;
    CHECK_OBJECT(var_nogil);
    Py_DECREF(var_nogil);
    var_nogil = NULL;
    CHECK_OBJECT(var_parallel);
    Py_DECREF(var_parallel);
    var_parallel = NULL;
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

    Py_XDECREF(par_engine_kwargs);
    par_engine_kwargs = NULL;
    CHECK_OBJECT(par_kwargs);
    Py_DECREF(par_kwargs);
    par_kwargs = NULL;
    Py_XDECREF(var_nopython);
    var_nopython = NULL;
    Py_XDECREF(var_nogil);
    var_nogil = NULL;
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


static PyObject *impl_pandas$core$util$numba_$$$function__4_jit_user_function(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_CellObject *par_func = Nuitka_Cell_New1(python_pars[0]);
    struct Nuitka_CellObject *par_nopython = Nuitka_Cell_New1(python_pars[1]);
    struct Nuitka_CellObject *par_nogil = Nuitka_Cell_New1(python_pars[2]);
    PyObject *par_parallel = python_pars[3];
    struct Nuitka_CellObject *var_numba = Nuitka_Cell_Empty();
    PyObject *var_is_jitted = NULL;
    PyObject *var_numba_func = NULL;
    struct Nuitka_FrameObject *frame_d84dddf09c2d7ef76f3d1e119e0257ab;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_d84dddf09c2d7ef76f3d1e119e0257ab = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_d84dddf09c2d7ef76f3d1e119e0257ab)) {
        Py_XDECREF(cache_frame_d84dddf09c2d7ef76f3d1e119e0257ab);

#if _DEBUG_REFCOUNTS
        if (cache_frame_d84dddf09c2d7ef76f3d1e119e0257ab == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_d84dddf09c2d7ef76f3d1e119e0257ab = MAKE_FUNCTION_FRAME(codeobj_d84dddf09c2d7ef76f3d1e119e0257ab, module_pandas$core$util$numba_, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_d84dddf09c2d7ef76f3d1e119e0257ab->m_type_description == NULL);
    frame_d84dddf09c2d7ef76f3d1e119e0257ab = cache_frame_d84dddf09c2d7ef76f3d1e119e0257ab;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_d84dddf09c2d7ef76f3d1e119e0257ab);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_d84dddf09c2d7ef76f3d1e119e0257ab) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_name_1;
        tmp_called_name_1 = GET_STRING_DICT_VALUE(moduledict_pandas$core$util$numba_, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_called_name_1 == NULL)) {
            tmp_called_name_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        if (tmp_called_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 85;
            type_description_1 = "cccocoo";
            goto frame_exception_exit_1;
        }
        frame_d84dddf09c2d7ef76f3d1e119e0257ab->m_frame.f_lineno = 85;
        tmp_assign_source_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_1, mod_consts[0]);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 85;
            type_description_1 = "cccocoo";
            goto frame_exception_exit_1;
        }
        assert(Nuitka_Cell_GET(var_numba) == NULL);
        PyCell_SET(var_numba, tmp_assign_source_1);

    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_called_name_2;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_expression_name_1;
        PyObject *tmp_called_name_3;
        tmp_called_name_2 = GET_STRING_DICT_VALUE(moduledict_pandas$core$util$numba_, (Nuitka_StringObject *)mod_consts[12]);

        if (unlikely(tmp_called_name_2 == NULL)) {
            tmp_called_name_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[12]);
        }

        if (tmp_called_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 87;
            type_description_1 = "cccocoo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(Nuitka_Cell_GET(var_numba));
        tmp_expression_name_1 = Nuitka_Cell_GET(var_numba);
        tmp_args_element_name_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_1, mod_consts[13]);
        if (tmp_args_element_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 87;
            type_description_1 = "cccocoo";
            goto frame_exception_exit_1;
        }
        frame_d84dddf09c2d7ef76f3d1e119e0257ab->m_frame.f_lineno = 87;
        tmp_compexpr_left_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_2, tmp_args_element_name_1);
        Py_DECREF(tmp_args_element_name_1);
        if (tmp_compexpr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 87;
            type_description_1 = "cccocoo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_3 = GET_STRING_DICT_VALUE(moduledict_pandas$core$util$numba_, (Nuitka_StringObject *)mod_consts[12]);

        if (unlikely(tmp_called_name_3 == NULL)) {
            tmp_called_name_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[12]);
        }

        if (tmp_called_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_compexpr_left_1);

            exception_lineno = 87;
            type_description_1 = "cccocoo";
            goto frame_exception_exit_1;
        }
        frame_d84dddf09c2d7ef76f3d1e119e0257ab->m_frame.f_lineno = 87;
        tmp_compexpr_right_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_3, mod_consts[14]);
        if (tmp_compexpr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_compexpr_left_1);

            exception_lineno = 87;
            type_description_1 = "cccocoo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = RICH_COMPARE_GE_NBOOL_OBJECT_OBJECT(tmp_compexpr_left_1, tmp_compexpr_right_1);
        Py_DECREF(tmp_compexpr_left_1);
        Py_DECREF(tmp_compexpr_right_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 87;
            type_description_1 = "cccocoo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
        assert(tmp_condition_result_1 != NUITKA_BOOL_UNASSIGNED);
    }
    branch_yes_1:;
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_name_4;
        PyObject *tmp_expression_name_2;
        PyObject *tmp_expression_name_3;
        PyObject *tmp_args_element_name_2;
        if (Nuitka_Cell_GET(var_numba) == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[0]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 88;
            type_description_1 = "cccocoo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_3 = Nuitka_Cell_GET(var_numba);
        tmp_expression_name_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_3, mod_consts[15]);
        if (tmp_expression_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 88;
            type_description_1 = "cccocoo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_4 = LOOKUP_ATTRIBUTE(tmp_expression_name_2, mod_consts[16]);
        Py_DECREF(tmp_expression_name_2);
        if (tmp_called_name_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 88;
            type_description_1 = "cccocoo";
            goto frame_exception_exit_1;
        }
        if (Nuitka_Cell_GET(par_func) == NULL) {
            Py_DECREF(tmp_called_name_4);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[17]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 88;
            type_description_1 = "cccocoo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_name_2 = Nuitka_Cell_GET(par_func);
        frame_d84dddf09c2d7ef76f3d1e119e0257ab->m_frame.f_lineno = 88;
        tmp_assign_source_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_4, tmp_args_element_name_2);
        Py_DECREF(tmp_called_name_4);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 88;
            type_description_1 = "cccocoo";
            goto frame_exception_exit_1;
        }
        assert(var_is_jitted == NULL);
        var_is_jitted = tmp_assign_source_2;
    }
    goto branch_end_1;
    branch_no_1:;
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        PyObject *tmp_expression_name_4;
        PyObject *tmp_expression_name_5;
        PyObject *tmp_expression_name_6;
        if (Nuitka_Cell_GET(par_func) == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[17]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 90;
            type_description_1 = "cccocoo";
            goto frame_exception_exit_1;
        }

        tmp_isinstance_inst_1 = Nuitka_Cell_GET(par_func);
        if (Nuitka_Cell_GET(var_numba) == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[0]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 90;
            type_description_1 = "cccocoo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_6 = Nuitka_Cell_GET(var_numba);
        tmp_expression_name_5 = LOOKUP_ATTRIBUTE(tmp_expression_name_6, mod_consts[18]);
        if (tmp_expression_name_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 90;
            type_description_1 = "cccocoo";
            goto frame_exception_exit_1;
        }
        tmp_expression_name_4 = LOOKUP_ATTRIBUTE(tmp_expression_name_5, mod_consts[19]);
        Py_DECREF(tmp_expression_name_5);
        if (tmp_expression_name_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 90;
            type_description_1 = "cccocoo";
            goto frame_exception_exit_1;
        }
        tmp_isinstance_cls_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_4, mod_consts[20]);
        Py_DECREF(tmp_expression_name_4);
        if (tmp_isinstance_cls_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 90;
            type_description_1 = "cccocoo";
            goto frame_exception_exit_1;
        }
        tmp_res = Nuitka_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
        Py_DECREF(tmp_isinstance_cls_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 90;
            type_description_1 = "cccocoo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_3 = (tmp_res != 0) ? Py_True : Py_False;
        assert(var_is_jitted == NULL);
        Py_INCREF(tmp_assign_source_3);
        var_is_jitted = tmp_assign_source_3;
    }
    branch_end_1:;
    {
        nuitka_bool tmp_condition_result_2;
        int tmp_truth_name_1;
        CHECK_OBJECT(var_is_jitted);
        tmp_truth_name_1 = CHECK_IF_TRUE(var_is_jitted);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 92;
            type_description_1 = "cccocoo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_2 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_assign_source_4;
        if (Nuitka_Cell_GET(par_func) == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[17]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 94;
            type_description_1 = "cccocoo";
            goto frame_exception_exit_1;
        }

        tmp_assign_source_4 = Nuitka_Cell_GET(par_func);
        assert(var_numba_func == NULL);
        Py_INCREF(tmp_assign_source_4);
        var_numba_func = tmp_assign_source_4;
    }
    goto branch_end_2;
    branch_no_2:;
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_called_name_5;
        PyObject *tmp_called_name_6;
        PyObject *tmp_expression_name_7;
        PyObject *tmp_kwargs_name_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_args_element_name_3;
        struct Nuitka_CellObject *tmp_closure_1[4];
        if (Nuitka_Cell_GET(var_numba) == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[0]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 97;
            type_description_1 = "cccocoo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_7 = Nuitka_Cell_GET(var_numba);
        tmp_called_name_6 = LOOKUP_ATTRIBUTE(tmp_expression_name_7, mod_consts[21]);
        if (tmp_called_name_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 97;
            type_description_1 = "cccocoo";
            goto frame_exception_exit_1;
        }
        tmp_dict_key_1 = mod_consts[22];
        if (Nuitka_Cell_GET(par_nopython) == NULL) {
            Py_DECREF(tmp_called_name_6);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[22]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 97;
            type_description_1 = "cccocoo";
            goto frame_exception_exit_1;
        }

        tmp_dict_value_1 = Nuitka_Cell_GET(par_nopython);
        tmp_kwargs_name_1 = _PyDict_NewPresized( 3 );
        tmp_res = PyDict_SetItem(tmp_kwargs_name_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[23];
        if (Nuitka_Cell_GET(par_nogil) == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[23]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 97;
            type_description_1 = "cccocoo";
            goto dict_build_exception_1;
        }

        tmp_dict_value_1 = Nuitka_Cell_GET(par_nogil);
        tmp_res = PyDict_SetItem(tmp_kwargs_name_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[24];
        CHECK_OBJECT(par_parallel);
        tmp_dict_value_1 = par_parallel;
        tmp_res = PyDict_SetItem(tmp_kwargs_name_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        goto dict_build_noexception_1;
        // Exception handling pass through code for dict_build:
        dict_build_exception_1:;
        Py_DECREF(tmp_called_name_6);
        Py_DECREF(tmp_kwargs_name_1);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_1:;
        frame_d84dddf09c2d7ef76f3d1e119e0257ab->m_frame.f_lineno = 97;
        tmp_called_name_5 = CALL_FUNCTION_WITH_KEYARGS(tmp_called_name_6, tmp_kwargs_name_1);
        Py_DECREF(tmp_called_name_6);
        Py_DECREF(tmp_kwargs_name_1);
        if (tmp_called_name_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 97;
            type_description_1 = "cccocoo";
            goto frame_exception_exit_1;
        }

        tmp_closure_1[0] = par_func;
        Py_INCREF(tmp_closure_1[0]);
        tmp_closure_1[1] = par_nogil;
        Py_INCREF(tmp_closure_1[1]);
        tmp_closure_1[2] = par_nopython;
        Py_INCREF(tmp_closure_1[2]);
        tmp_closure_1[3] = var_numba;
        Py_INCREF(tmp_closure_1[3]);

        tmp_args_element_name_3 = MAKE_FUNCTION_pandas$core$util$numba_$$$function__4_jit_user_function$$$function__1_numba_func(tmp_closure_1);

        frame_d84dddf09c2d7ef76f3d1e119e0257ab->m_frame.f_lineno = 97;
        tmp_assign_source_5 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_5, tmp_args_element_name_3);
        Py_DECREF(tmp_called_name_5);
        Py_DECREF(tmp_args_element_name_3);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 97;
            type_description_1 = "cccocoo";
            goto frame_exception_exit_1;
        }
        assert(var_numba_func == NULL);
        var_numba_func = tmp_assign_source_5;
    }
    branch_end_2:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_d84dddf09c2d7ef76f3d1e119e0257ab);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_d84dddf09c2d7ef76f3d1e119e0257ab);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_d84dddf09c2d7ef76f3d1e119e0257ab, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_d84dddf09c2d7ef76f3d1e119e0257ab->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_d84dddf09c2d7ef76f3d1e119e0257ab, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_d84dddf09c2d7ef76f3d1e119e0257ab,
        type_description_1,
        par_func,
        par_nopython,
        par_nogil,
        par_parallel,
        var_numba,
        var_is_jitted,
        var_numba_func
    );


    // Release cached frame if used for exception.
    if (frame_d84dddf09c2d7ef76f3d1e119e0257ab == cache_frame_d84dddf09c2d7ef76f3d1e119e0257ab) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_d84dddf09c2d7ef76f3d1e119e0257ab);
        cache_frame_d84dddf09c2d7ef76f3d1e119e0257ab = NULL;
    }

    assertFrameObject(frame_d84dddf09c2d7ef76f3d1e119e0257ab);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    CHECK_OBJECT(var_numba_func);
    tmp_return_value = var_numba_func;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(par_func);
    Py_DECREF(par_func);
    par_func = NULL;
    CHECK_OBJECT(par_nopython);
    Py_DECREF(par_nopython);
    par_nopython = NULL;
    CHECK_OBJECT(par_nogil);
    Py_DECREF(par_nogil);
    par_nogil = NULL;
    Py_XDECREF(par_parallel);
    par_parallel = NULL;
    CHECK_OBJECT(var_numba);
    Py_DECREF(var_numba);
    var_numba = NULL;
    CHECK_OBJECT(var_is_jitted);
    Py_DECREF(var_is_jitted);
    var_is_jitted = NULL;
    CHECK_OBJECT(var_numba_func);
    Py_DECREF(var_numba_func);
    var_numba_func = NULL;
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

    CHECK_OBJECT(par_func);
    Py_DECREF(par_func);
    par_func = NULL;
    CHECK_OBJECT(par_nopython);
    Py_DECREF(par_nopython);
    par_nopython = NULL;
    CHECK_OBJECT(par_nogil);
    Py_DECREF(par_nogil);
    par_nogil = NULL;
    Py_XDECREF(par_parallel);
    par_parallel = NULL;
    CHECK_OBJECT(var_numba);
    Py_DECREF(var_numba);
    var_numba = NULL;
    Py_XDECREF(var_is_jitted);
    var_is_jitted = NULL;
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


static PyObject *impl_pandas$core$util$numba_$$$function__4_jit_user_function$$$function__1_numba_func(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_data = python_pars[0];
    PyObject *par__args = python_pars[1];
    struct Nuitka_CellObject *var_jf = Nuitka_Cell_Empty();
    PyObject *var_impl = NULL;
    struct Nuitka_FrameObject *frame_ed6aa5ee4465df93114124874ed4255e;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_ed6aa5ee4465df93114124874ed4255e = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_ed6aa5ee4465df93114124874ed4255e)) {
        Py_XDECREF(cache_frame_ed6aa5ee4465df93114124874ed4255e);

#if _DEBUG_REFCOUNTS
        if (cache_frame_ed6aa5ee4465df93114124874ed4255e == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_ed6aa5ee4465df93114124874ed4255e = MAKE_FUNCTION_FRAME(codeobj_ed6aa5ee4465df93114124874ed4255e, module_pandas$core$util$numba_, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_ed6aa5ee4465df93114124874ed4255e->m_type_description == NULL);
    frame_ed6aa5ee4465df93114124874ed4255e = cache_frame_ed6aa5ee4465df93114124874ed4255e;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_ed6aa5ee4465df93114124874ed4255e);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_ed6aa5ee4465df93114124874ed4255e) == 2); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_or_left_truth_1;
        nuitka_bool tmp_or_left_value_1;
        nuitka_bool tmp_or_right_value_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_getattr_target_1;
        PyObject *tmp_getattr_attr_1;
        PyObject *tmp_expression_name_1;
        PyObject *tmp_getattr_default_1;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        PyObject *tmp_expression_name_2;
        tmp_getattr_target_1 = GET_STRING_DICT_VALUE(moduledict_pandas$core$util$numba_, (Nuitka_StringObject *)mod_consts[28]);

        if (unlikely(tmp_getattr_target_1 == NULL)) {
            tmp_getattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[28]);
        }

        if (tmp_getattr_target_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 99;
            type_description_1 = "oococccc";
            goto frame_exception_exit_1;
        }
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[17]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 99;
            type_description_1 = "oococccc";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_1 = Nuitka_Cell_GET(self->m_closure[0]);
        tmp_getattr_attr_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_1, mod_consts[29]);
        if (tmp_getattr_attr_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 99;
            type_description_1 = "oococccc";
            goto frame_exception_exit_1;
        }
        tmp_getattr_default_1 = Py_False;
        tmp_compexpr_left_1 = BUILTIN_GETATTR(tmp_getattr_target_1, tmp_getattr_attr_1, tmp_getattr_default_1);
        Py_DECREF(tmp_getattr_attr_1);
        if (tmp_compexpr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 99;
            type_description_1 = "oococccc";
            goto frame_exception_exit_1;
        }
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {
            Py_DECREF(tmp_compexpr_left_1);
            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[17]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 99;
            type_description_1 = "oococccc";
            goto frame_exception_exit_1;
        }

        tmp_compexpr_right_1 = Nuitka_Cell_GET(self->m_closure[0]);
        tmp_or_left_value_1 = (tmp_compexpr_left_1 == tmp_compexpr_right_1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF(tmp_compexpr_left_1);
        tmp_or_left_truth_1 = tmp_or_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_or_left_truth_1 == 1) {
            goto or_left_1;
        } else {
            goto or_right_1;
        }
        or_right_1:;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[17]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 100;
            type_description_1 = "oococccc";
            goto frame_exception_exit_1;
        }

        tmp_isinstance_inst_1 = Nuitka_Cell_GET(self->m_closure[0]);
        tmp_expression_name_2 = GET_STRING_DICT_VALUE(moduledict_pandas$core$util$numba_, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_expression_name_2 == NULL)) {
            tmp_expression_name_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_expression_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 100;
            type_description_1 = "oococccc";
            goto frame_exception_exit_1;
        }
        tmp_isinstance_cls_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_2, mod_consts[31]);
        if (tmp_isinstance_cls_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 100;
            type_description_1 = "oococccc";
            goto frame_exception_exit_1;
        }
        tmp_res = Nuitka_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
        Py_DECREF(tmp_isinstance_cls_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 99;
            type_description_1 = "oococccc";
            goto frame_exception_exit_1;
        }
        tmp_or_right_value_1 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
        PyObject *tmp_assign_source_1;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[17]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 102;
            type_description_1 = "oococccc";
            goto frame_exception_exit_1;
        }

        tmp_assign_source_1 = Nuitka_Cell_GET(self->m_closure[0]);
        assert(Nuitka_Cell_GET(var_jf) == NULL);
        Py_INCREF(tmp_assign_source_1);
        PyCell_SET(var_jf, tmp_assign_source_1);

    }
    goto branch_end_1;
    branch_no_1:;
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_name_1;
        PyObject *tmp_expression_name_3;
        PyObject *tmp_args_name_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_kwargs_name_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        if (Nuitka_Cell_GET(self->m_closure[3]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[0]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 104;
            type_description_1 = "oococccc";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_3 = Nuitka_Cell_GET(self->m_closure[3]);
        tmp_called_name_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_3, mod_consts[32]);
        if (tmp_called_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 104;
            type_description_1 = "oococccc";
            goto frame_exception_exit_1;
        }
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {
            Py_DECREF(tmp_called_name_1);
            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[17]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 104;
            type_description_1 = "oococccc";
            goto frame_exception_exit_1;
        }

        tmp_tuple_element_1 = Nuitka_Cell_GET(self->m_closure[0]);
        tmp_args_name_1 = PyTuple_New(1);
        PyTuple_SET_ITEM0(tmp_args_name_1, 0, tmp_tuple_element_1);
        tmp_dict_key_1 = mod_consts[22];
        if (Nuitka_Cell_GET(self->m_closure[2]) == NULL) {
            Py_DECREF(tmp_called_name_1);
            Py_DECREF(tmp_args_name_1);
            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[22]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 104;
            type_description_1 = "oococccc";
            goto frame_exception_exit_1;
        }

        tmp_dict_value_1 = Nuitka_Cell_GET(self->m_closure[2]);
        tmp_kwargs_name_1 = _PyDict_NewPresized( 2 );
        tmp_res = PyDict_SetItem(tmp_kwargs_name_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[23];
        if (Nuitka_Cell_GET(self->m_closure[1]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[23]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 104;
            type_description_1 = "oococccc";
            goto dict_build_exception_1;
        }

        tmp_dict_value_1 = Nuitka_Cell_GET(self->m_closure[1]);
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
        frame_ed6aa5ee4465df93114124874ed4255e->m_frame.f_lineno = 104;
        tmp_assign_source_2 = CALL_FUNCTION(tmp_called_name_1, tmp_args_name_1, tmp_kwargs_name_1);
        Py_DECREF(tmp_called_name_1);
        Py_DECREF(tmp_args_name_1);
        Py_DECREF(tmp_kwargs_name_1);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 104;
            type_description_1 = "oococccc";
            goto frame_exception_exit_1;
        }
        assert(Nuitka_Cell_GET(var_jf) == NULL);
        PyCell_SET(var_jf, tmp_assign_source_2);

    }
    branch_end_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_ed6aa5ee4465df93114124874ed4255e);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_ed6aa5ee4465df93114124874ed4255e);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_ed6aa5ee4465df93114124874ed4255e, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_ed6aa5ee4465df93114124874ed4255e->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_ed6aa5ee4465df93114124874ed4255e, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_ed6aa5ee4465df93114124874ed4255e,
        type_description_1,
        par_data,
        par__args,
        var_jf,
        var_impl,
        self->m_closure[0],
        self->m_closure[3],
        self->m_closure[2],
        self->m_closure[1]
    );


    // Release cached frame if used for exception.
    if (frame_ed6aa5ee4465df93114124874ed4255e == cache_frame_ed6aa5ee4465df93114124874ed4255e) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_ed6aa5ee4465df93114124874ed4255e);
        cache_frame_ed6aa5ee4465df93114124874ed4255e = NULL;
    }

    assertFrameObject(frame_ed6aa5ee4465df93114124874ed4255e);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    {
        PyObject *tmp_assign_source_3;
        struct Nuitka_CellObject *tmp_closure_1[1];

        tmp_closure_1[0] = var_jf;
        Py_INCREF(tmp_closure_1[0]);

        tmp_assign_source_3 = MAKE_FUNCTION_pandas$core$util$numba_$$$function__4_jit_user_function$$$function__1_numba_func$$$function__1_impl(tmp_closure_1);

        assert(var_impl == NULL);
        var_impl = tmp_assign_source_3;
    }
    CHECK_OBJECT(var_impl);
    tmp_return_value = var_impl;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(par_data);
    Py_DECREF(par_data);
    par_data = NULL;
    CHECK_OBJECT(par__args);
    Py_DECREF(par__args);
    par__args = NULL;
    CHECK_OBJECT(var_jf);
    Py_DECREF(var_jf);
    var_jf = NULL;
    CHECK_OBJECT(var_impl);
    Py_DECREF(var_impl);
    var_impl = NULL;
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

    CHECK_OBJECT(par_data);
    Py_DECREF(par_data);
    par_data = NULL;
    CHECK_OBJECT(par__args);
    Py_DECREF(par__args);
    par__args = NULL;
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


static PyObject *impl_pandas$core$util$numba_$$$function__4_jit_user_function$$$function__1_numba_func$$$function__1_impl(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_data = python_pars[0];
    PyObject *par__args = python_pars[1];
    struct Nuitka_FrameObject *frame_0eb8c9418587b10c9946150b2899e459;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_0eb8c9418587b10c9946150b2899e459 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_0eb8c9418587b10c9946150b2899e459)) {
        Py_XDECREF(cache_frame_0eb8c9418587b10c9946150b2899e459);

#if _DEBUG_REFCOUNTS
        if (cache_frame_0eb8c9418587b10c9946150b2899e459 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_0eb8c9418587b10c9946150b2899e459 = MAKE_FUNCTION_FRAME(codeobj_0eb8c9418587b10c9946150b2899e459, module_pandas$core$util$numba_, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_0eb8c9418587b10c9946150b2899e459->m_type_description == NULL);
    frame_0eb8c9418587b10c9946150b2899e459 = cache_frame_0eb8c9418587b10c9946150b2899e459;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_0eb8c9418587b10c9946150b2899e459);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_0eb8c9418587b10c9946150b2899e459) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_dircall_arg3_1;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[35]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 107;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }

        tmp_dircall_arg1_1 = Nuitka_Cell_GET(self->m_closure[0]);
        CHECK_OBJECT(par_data);
        tmp_tuple_element_1 = par_data;
        tmp_dircall_arg2_1 = PyTuple_New(1);
        PyTuple_SET_ITEM0(tmp_dircall_arg2_1, 0, tmp_tuple_element_1);
        CHECK_OBJECT(par__args);
        tmp_dircall_arg3_1 = par__args;
        Py_INCREF(tmp_dircall_arg1_1);
        Py_INCREF(tmp_dircall_arg3_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
            tmp_return_value = impl___main__$$$function__10_complex_call_helper_pos_star_list(dir_call_args);
        }
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 107;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_0eb8c9418587b10c9946150b2899e459);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_0eb8c9418587b10c9946150b2899e459);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_0eb8c9418587b10c9946150b2899e459);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_0eb8c9418587b10c9946150b2899e459, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_0eb8c9418587b10c9946150b2899e459->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_0eb8c9418587b10c9946150b2899e459, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_0eb8c9418587b10c9946150b2899e459,
        type_description_1,
        par_data,
        par__args,
        self->m_closure[0]
    );


    // Release cached frame if used for exception.
    if (frame_0eb8c9418587b10c9946150b2899e459 == cache_frame_0eb8c9418587b10c9946150b2899e459) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_0eb8c9418587b10c9946150b2899e459);
        cache_frame_0eb8c9418587b10c9946150b2899e459 = NULL;
    }

    assertFrameObject(frame_0eb8c9418587b10c9946150b2899e459);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(par_data);
    Py_DECREF(par_data);
    par_data = NULL;
    CHECK_OBJECT(par__args);
    Py_DECREF(par__args);
    par__args = NULL;
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

    CHECK_OBJECT(par_data);
    Py_DECREF(par_data);
    par_data = NULL;
    CHECK_OBJECT(par__args);
    Py_DECREF(par__args);
    par__args = NULL;
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



static PyObject *MAKE_FUNCTION_pandas$core$util$numba_$$$function__1_maybe_use_numba(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pandas$core$util$numba_$$$function__1_maybe_use_numba,
        mod_consts[62],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_b05c9065d4724d66d9e3396b1bde40ee,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_pandas$core$util$numba_,
        mod_consts[2],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pandas$core$util$numba_$$$function__2_set_use_numba(PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pandas$core$util$numba_$$$function__2_set_use_numba,
        mod_consts[65],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_de92b3b4eae2b0328d2ea38da67ac851,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_pandas$core$util$numba_,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pandas$core$util$numba_$$$function__3_get_jit_arguments(PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pandas$core$util$numba_$$$function__3_get_jit_arguments,
        mod_consts[70],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_d2305ed1ed4aaa01f3d9b4765422b704,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_pandas$core$util$numba_,
        mod_consts[11],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pandas$core$util$numba_$$$function__4_jit_user_function(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pandas$core$util$numba_$$$function__4_jit_user_function,
        mod_consts[71],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_d84dddf09c2d7ef76f3d1e119e0257ab,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_pandas$core$util$numba_,
        mod_consts[27],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pandas$core$util$numba_$$$function__4_jit_user_function$$$function__1_numba_func(struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pandas$core$util$numba_$$$function__4_jit_user_function$$$function__1_numba_func,
        mod_consts[25],
#if PYTHON_VERSION >= 0x300
        mod_consts[26],
#endif
        codeobj_ed6aa5ee4465df93114124874ed4255e,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pandas$core$util$numba_,
        NULL,
        closure,
        4
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pandas$core$util$numba_$$$function__4_jit_user_function$$$function__1_numba_func$$$function__1_impl(struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pandas$core$util$numba_$$$function__4_jit_user_function$$$function__1_numba_func$$$function__1_impl,
        mod_consts[33],
#if PYTHON_VERSION >= 0x300
        mod_consts[34],
#endif
        codeobj_0eb8c9418587b10c9946150b2899e459,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pandas$core$util$numba_,
        NULL,
        closure,
        1
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

function_impl_code functable_pandas$core$util$numba_[] = {
    impl_pandas$core$util$numba_$$$function__4_jit_user_function$$$function__1_numba_func,
    impl_pandas$core$util$numba_$$$function__4_jit_user_function$$$function__1_numba_func$$$function__1_impl,
    impl_pandas$core$util$numba_$$$function__1_maybe_use_numba,
    impl_pandas$core$util$numba_$$$function__2_set_use_numba,
    impl_pandas$core$util$numba_$$$function__3_get_jit_arguments,
    impl_pandas$core$util$numba_$$$function__4_jit_user_function,
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

    function_impl_code *current = functable_pandas$core$util$numba_;
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

    if (offset > sizeof(functable_pandas$core$util$numba_) || offset < 0) {
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
        functable_pandas$core$util$numba_[offset],
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
        module_pandas$core$util$numba_,
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
PyObject *modulecode_pandas$core$util$numba_(PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *module_entry) {
    module_pandas$core$util$numba_ = module;

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
    PRINT_STRING("pandas.core.util.numba_: Calling setupMetaPathBasedLoader().\n");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 0x300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    PRINT_STRING("pandas.core.util.numba_: Calling createModuleConstants().\n");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    PRINT_STRING("pandas.core.util.numba_: Calling createModuleCodeObjects().\n");
#endif
    createModuleCodeObjects();

    // PRINT_STRING("in initpandas$core$util$numba_\n");

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.

    moduledict_pandas$core$util$numba_ = MODULE_DICT(module_pandas$core$util$numba_);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    registerDillPluginTables(module_entry->name, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_pandas$core$util$numba_,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_pandas$core$util$numba_,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_pandas$core$util$numba_, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_pandas$core$util$numba_,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_pandas$core$util$numba_, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_pandas$core$util$numba_,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_pandas$core$util$numba_, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_pandas$core$util$numba_,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_pandas$core$util$numba_);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_pandas$core$util$numba_, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_pandas$core$util$numba_, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

#if PYTHON_VERSION >= 0x300
    UPDATE_STRING_DICT0(moduledict_pandas$core$util$numba_, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);
#endif

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_pandas$core$util$numba_, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(_spec_from_module, module_pandas$core$util$numba_);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_pandas$core$util$numba_, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    PyObject *tmp_import_from_1__module = NULL;
    struct Nuitka_FrameObject *frame_e0156a0573f1a068ab6bebf36092e1b1;
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

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = mod_consts[36];
        UPDATE_STRING_DICT0(moduledict_pandas$core$util$numba_, (Nuitka_StringObject *)mod_consts[37], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = mod_consts[38];
        UPDATE_STRING_DICT0(moduledict_pandas$core$util$numba_, (Nuitka_StringObject *)mod_consts[39], tmp_assign_source_2);
    }
    // Frame without reuse.
    frame_e0156a0573f1a068ab6bebf36092e1b1 = MAKE_MODULE_FRAME(codeobj_e0156a0573f1a068ab6bebf36092e1b1, module_pandas$core$util$numba_);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack(frame_e0156a0573f1a068ab6bebf36092e1b1);
    assert(Py_REFCNT(frame_e0156a0573f1a068ab6bebf36092e1b1) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_name_1 = mod_consts[38];
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_pandas$core$util$numba_, (Nuitka_StringObject *)mod_consts[40]);

        if (unlikely(tmp_assattr_target_1 == NULL)) {
            tmp_assattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[40]);
        }

        assert(!(tmp_assattr_target_1 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[41], tmp_assattr_name_1);
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
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_pandas$core$util$numba_, (Nuitka_StringObject *)mod_consts[40]);

        if (unlikely(tmp_assattr_target_2 == NULL)) {
            tmp_assattr_target_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[40]);
        }

        assert(!(tmp_assattr_target_2 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[42], tmp_assattr_name_2);
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
        UPDATE_STRING_DICT0(moduledict_pandas$core$util$numba_, (Nuitka_StringObject *)mod_consts[43], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        tmp_assign_source_4 = PyDict_New();
        UPDATE_STRING_DICT1(moduledict_pandas$core$util$numba_, (Nuitka_StringObject *)mod_consts[44], tmp_assign_source_4);
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_name_1;
        PyObject *tmp_globals_arg_name_1;
        PyObject *tmp_locals_arg_name_1;
        PyObject *tmp_fromlist_name_1;
        PyObject *tmp_level_name_1;
        tmp_name_name_1 = mod_consts[45];
        tmp_globals_arg_name_1 = (PyObject *)moduledict_pandas$core$util$numba_;
        tmp_locals_arg_name_1 = Py_None;
        tmp_fromlist_name_1 = mod_consts[46];
        tmp_level_name_1 = mod_consts[47];
        frame_e0156a0573f1a068ab6bebf36092e1b1->m_frame.f_lineno = 2;
        tmp_import_name_from_1 = IMPORT_MODULE5(tmp_name_name_1, tmp_globals_arg_name_1, tmp_locals_arg_name_1, tmp_fromlist_name_1, tmp_level_name_1);
        if (tmp_import_name_from_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_5 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_1,
                (PyObject *)moduledict_pandas$core$util$numba_,
                mod_consts[12],
                mod_consts[47]
            );
        } else {
            tmp_assign_source_5 = IMPORT_NAME(tmp_import_name_from_1, mod_consts[12]);
        }

        Py_DECREF(tmp_import_name_from_1);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pandas$core$util$numba_, (Nuitka_StringObject *)mod_consts[12], tmp_assign_source_5);
    }
    {
        PyObject *tmp_assign_source_6;
        frame_e0156a0573f1a068ab6bebf36092e1b1->m_frame.f_lineno = 3;
        tmp_assign_source_6 = IMPORT_HARD_TYPES();
        assert(!(tmp_assign_source_6 == NULL));
        UPDATE_STRING_DICT0(moduledict_pandas$core$util$numba_, (Nuitka_StringObject *)mod_consts[30], tmp_assign_source_6);
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_name_name_2;
        PyObject *tmp_globals_arg_name_2;
        PyObject *tmp_locals_arg_name_2;
        PyObject *tmp_fromlist_name_2;
        PyObject *tmp_level_name_2;
        tmp_name_name_2 = mod_consts[48];
        tmp_globals_arg_name_2 = (PyObject *)moduledict_pandas$core$util$numba_;
        tmp_locals_arg_name_2 = Py_None;
        tmp_fromlist_name_2 = mod_consts[49];
        tmp_level_name_2 = mod_consts[47];
        frame_e0156a0573f1a068ab6bebf36092e1b1->m_frame.f_lineno = 4;
        tmp_assign_source_7 = IMPORT_MODULE5(tmp_name_name_2, tmp_globals_arg_name_2, tmp_locals_arg_name_2, tmp_fromlist_name_2, tmp_level_name_2);
        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_1__module == NULL);
        tmp_import_from_1__module = tmp_assign_source_7;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_import_name_from_2;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_2 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_2)) {
            tmp_assign_source_8 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_2,
                (PyObject *)moduledict_pandas$core$util$numba_,
                mod_consts[50],
                mod_consts[47]
            );
        } else {
            tmp_assign_source_8 = IMPORT_NAME(tmp_import_name_from_2, mod_consts[50]);
        }

        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_pandas$core$util$numba_, (Nuitka_StringObject *)mod_consts[50], tmp_assign_source_8);
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_import_name_from_3;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_3 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_3)) {
            tmp_assign_source_9 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_3,
                (PyObject *)moduledict_pandas$core$util$numba_,
                mod_consts[51],
                mod_consts[47]
            );
        } else {
            tmp_assign_source_9 = IMPORT_NAME(tmp_import_name_from_3, mod_consts[51]);
        }

        if (tmp_assign_source_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_pandas$core$util$numba_, (Nuitka_StringObject *)mod_consts[51], tmp_assign_source_9);
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_import_name_from_4;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_4 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_4)) {
            tmp_assign_source_10 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_4,
                (PyObject *)moduledict_pandas$core$util$numba_,
                mod_consts[52],
                mod_consts[47]
            );
        } else {
            tmp_assign_source_10 = IMPORT_NAME(tmp_import_name_from_4, mod_consts[52]);
        }

        if (tmp_assign_source_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_pandas$core$util$numba_, (Nuitka_StringObject *)mod_consts[52], tmp_assign_source_10);
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_import_name_from_5;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_5 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_5)) {
            tmp_assign_source_11 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_5,
                (PyObject *)moduledict_pandas$core$util$numba_,
                mod_consts[53],
                mod_consts[47]
            );
        } else {
            tmp_assign_source_11 = IMPORT_NAME(tmp_import_name_from_5, mod_consts[53]);
        }

        if (tmp_assign_source_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_pandas$core$util$numba_, (Nuitka_StringObject *)mod_consts[53], tmp_assign_source_11);
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
        PyObject *tmp_assign_source_12;
        PyObject *tmp_name_name_3;
        PyObject *tmp_globals_arg_name_3;
        PyObject *tmp_locals_arg_name_3;
        PyObject *tmp_fromlist_name_3;
        PyObject *tmp_level_name_3;
        tmp_name_name_3 = mod_consts[54];
        tmp_globals_arg_name_3 = (PyObject *)moduledict_pandas$core$util$numba_;
        tmp_locals_arg_name_3 = Py_None;
        tmp_fromlist_name_3 = Py_None;
        tmp_level_name_3 = mod_consts[47];
        frame_e0156a0573f1a068ab6bebf36092e1b1->m_frame.f_lineno = 6;
        tmp_assign_source_12 = IMPORT_MODULE5(tmp_name_name_3, tmp_globals_arg_name_3, tmp_locals_arg_name_3, tmp_fromlist_name_3, tmp_level_name_3);
        if (tmp_assign_source_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pandas$core$util$numba_, (Nuitka_StringObject *)mod_consts[28], tmp_assign_source_12);
    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_import_name_from_6;
        PyObject *tmp_name_name_4;
        PyObject *tmp_globals_arg_name_4;
        PyObject *tmp_locals_arg_name_4;
        PyObject *tmp_fromlist_name_4;
        PyObject *tmp_level_name_4;
        tmp_name_name_4 = mod_consts[55];
        tmp_globals_arg_name_4 = (PyObject *)moduledict_pandas$core$util$numba_;
        tmp_locals_arg_name_4 = Py_None;
        tmp_fromlist_name_4 = mod_consts[56];
        tmp_level_name_4 = mod_consts[47];
        frame_e0156a0573f1a068ab6bebf36092e1b1->m_frame.f_lineno = 8;
        tmp_import_name_from_6 = IMPORT_MODULE5(tmp_name_name_4, tmp_globals_arg_name_4, tmp_locals_arg_name_4, tmp_fromlist_name_4, tmp_level_name_4);
        if (tmp_import_name_from_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_6)) {
            tmp_assign_source_13 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_6,
                (PyObject *)moduledict_pandas$core$util$numba_,
                mod_consts[3],
                mod_consts[47]
            );
        } else {
            tmp_assign_source_13 = IMPORT_NAME(tmp_import_name_from_6, mod_consts[3]);
        }

        Py_DECREF(tmp_import_name_from_6);
        if (tmp_assign_source_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pandas$core$util$numba_, (Nuitka_StringObject *)mod_consts[3], tmp_assign_source_13);
    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_import_name_from_7;
        PyObject *tmp_name_name_5;
        PyObject *tmp_globals_arg_name_5;
        PyObject *tmp_locals_arg_name_5;
        PyObject *tmp_fromlist_name_5;
        PyObject *tmp_level_name_5;
        tmp_name_name_5 = mod_consts[57];
        tmp_globals_arg_name_5 = (PyObject *)moduledict_pandas$core$util$numba_;
        tmp_locals_arg_name_5 = Py_None;
        tmp_fromlist_name_5 = mod_consts[58];
        tmp_level_name_5 = mod_consts[47];
        frame_e0156a0573f1a068ab6bebf36092e1b1->m_frame.f_lineno = 9;
        tmp_import_name_from_7 = IMPORT_MODULE5(tmp_name_name_5, tmp_globals_arg_name_5, tmp_locals_arg_name_5, tmp_fromlist_name_5, tmp_level_name_5);
        if (tmp_import_name_from_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 9;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_7)) {
            tmp_assign_source_14 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_7,
                (PyObject *)moduledict_pandas$core$util$numba_,
                mod_consts[6],
                mod_consts[47]
            );
        } else {
            tmp_assign_source_14 = IMPORT_NAME(tmp_import_name_from_7, mod_consts[6]);
        }

        Py_DECREF(tmp_import_name_from_7);
        if (tmp_assign_source_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 9;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pandas$core$util$numba_, (Nuitka_StringObject *)mod_consts[6], tmp_assign_source_14);
    }
    {
        PyObject *tmp_assign_source_15;
        tmp_assign_source_15 = Py_False;
        UPDATE_STRING_DICT0(moduledict_pandas$core$util$numba_, (Nuitka_StringObject *)mod_consts[1], tmp_assign_source_15);
    }
    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_ass_subscript_1;
        tmp_ass_subvalue_1 = (PyObject *)&PyBool_Type;
        tmp_ass_subscribed_1 = GET_STRING_DICT_VALUE(moduledict_pandas$core$util$numba_, (Nuitka_StringObject *)mod_consts[44]);

        if (unlikely(tmp_ass_subscribed_1 == NULL)) {
            tmp_ass_subscribed_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[44]);
        }

        if (tmp_ass_subscribed_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 11;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_1 = mod_consts[1];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 11;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_16;
        tmp_assign_source_16 = PyDict_New();
        UPDATE_STRING_DICT1(moduledict_pandas$core$util$numba_, (Nuitka_StringObject *)mod_consts[59], tmp_assign_source_16);
    }
    {
        PyObject *tmp_ass_subvalue_2;
        PyObject *tmp_expression_name_1;
        PyObject *tmp_subscript_name_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_expression_name_2;
        PyObject *tmp_subscript_name_2;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_ass_subscribed_2;
        PyObject *tmp_ass_subscript_2;
        tmp_expression_name_1 = GET_STRING_DICT_VALUE(moduledict_pandas$core$util$numba_, (Nuitka_StringObject *)mod_consts[51]);

        if (unlikely(tmp_expression_name_1 == NULL)) {
            tmp_expression_name_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[51]);
        }

        if (tmp_expression_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 12;

            goto frame_exception_exit_1;
        }
        tmp_expression_name_2 = GET_STRING_DICT_VALUE(moduledict_pandas$core$util$numba_, (Nuitka_StringObject *)mod_consts[53]);

        if (unlikely(tmp_expression_name_2 == NULL)) {
            tmp_expression_name_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[53]);
        }

        if (tmp_expression_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 12;

            goto frame_exception_exit_1;
        }
        tmp_tuple_element_2 = GET_STRING_DICT_VALUE(moduledict_pandas$core$util$numba_, (Nuitka_StringObject *)mod_consts[50]);

        if (unlikely(tmp_tuple_element_2 == NULL)) {
            tmp_tuple_element_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[50]);
        }

        if (tmp_tuple_element_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 12;

            goto frame_exception_exit_1;
        }
        tmp_subscript_name_2 = PyTuple_New(2);
        PyTuple_SET_ITEM0(tmp_subscript_name_2, 0, tmp_tuple_element_2);
        tmp_tuple_element_2 = (PyObject *)&PyUnicode_Type;
        PyTuple_SET_ITEM0(tmp_subscript_name_2, 1, tmp_tuple_element_2);
        tmp_tuple_element_1 = LOOKUP_SUBSCRIPT(tmp_expression_name_2, tmp_subscript_name_2);
        Py_DECREF(tmp_subscript_name_2);
        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 12;

            goto frame_exception_exit_1;
        }
        tmp_subscript_name_1 = PyTuple_New(2);
        PyTuple_SET_ITEM(tmp_subscript_name_1, 0, tmp_tuple_element_1);
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_pandas$core$util$numba_, (Nuitka_StringObject *)mod_consts[50]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[50]);
        }

        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 12;

            goto tuple_build_exception_1;
        }
        PyTuple_SET_ITEM0(tmp_subscript_name_1, 1, tmp_tuple_element_1);
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_subscript_name_1);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_ass_subvalue_2 = LOOKUP_SUBSCRIPT(tmp_expression_name_1, tmp_subscript_name_1);
        Py_DECREF(tmp_subscript_name_1);
        if (tmp_ass_subvalue_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 12;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscribed_2 = GET_STRING_DICT_VALUE(moduledict_pandas$core$util$numba_, (Nuitka_StringObject *)mod_consts[44]);

        if (unlikely(tmp_ass_subscribed_2 == NULL)) {
            tmp_ass_subscribed_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[44]);
        }

        if (tmp_ass_subscribed_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_2);

            exception_lineno = 12;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_2 = mod_consts[59];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2);
        Py_DECREF(tmp_ass_subvalue_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 12;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_annotations_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_expression_name_3;
        PyObject *tmp_subscript_name_3;
        tmp_dict_key_1 = mod_consts[60];
        tmp_expression_name_3 = GET_STRING_DICT_VALUE(moduledict_pandas$core$util$numba_, (Nuitka_StringObject *)mod_consts[52]);

        if (unlikely(tmp_expression_name_3 == NULL)) {
            tmp_expression_name_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[52]);
        }

        if (tmp_expression_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 15;

            goto frame_exception_exit_1;
        }
        tmp_subscript_name_3 = (PyObject *)&PyUnicode_Type;
        tmp_dict_value_1 = LOOKUP_SUBSCRIPT(tmp_expression_name_3, tmp_subscript_name_3);
        if (tmp_dict_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 15;

            goto frame_exception_exit_1;
        }
        tmp_annotations_1 = _PyDict_NewPresized( 2 );
        tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
        Py_DECREF(tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[61];
        tmp_dict_value_1 = (PyObject *)&PyBool_Type;
        tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));


        tmp_assign_source_17 = MAKE_FUNCTION_pandas$core$util$numba_$$$function__1_maybe_use_numba(tmp_annotations_1);

        UPDATE_STRING_DICT1(moduledict_pandas$core$util$numba_, (Nuitka_StringObject *)mod_consts[62], tmp_assign_source_17);
    }
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_defaults_1;
        PyObject *tmp_annotations_2;
        tmp_defaults_1 = mod_consts[63];
        tmp_annotations_2 = PyDict_Copy(mod_consts[64]);
        Py_INCREF(tmp_defaults_1);


        tmp_assign_source_18 = MAKE_FUNCTION_pandas$core$util$numba_$$$function__2_set_use_numba(tmp_defaults_1, tmp_annotations_2);

        UPDATE_STRING_DICT1(moduledict_pandas$core$util$numba_, (Nuitka_StringObject *)mod_consts[65], tmp_assign_source_18);
    }
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_defaults_2;
        PyObject *tmp_annotations_3;
        PyObject *tmp_dict_key_2;
        PyObject *tmp_dict_value_2;
        PyObject *tmp_expression_name_4;
        PyObject *tmp_subscript_name_4;
        PyObject *tmp_expression_name_5;
        PyObject *tmp_subscript_name_5;
        tmp_defaults_2 = mod_consts[66];
        tmp_dict_key_2 = mod_consts[8];
        tmp_expression_name_4 = GET_STRING_DICT_VALUE(moduledict_pandas$core$util$numba_, (Nuitka_StringObject *)mod_consts[52]);

        if (unlikely(tmp_expression_name_4 == NULL)) {
            tmp_expression_name_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[52]);
        }

        if (tmp_expression_name_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 28;

            goto frame_exception_exit_1;
        }
        tmp_expression_name_5 = GET_STRING_DICT_VALUE(moduledict_pandas$core$util$numba_, (Nuitka_StringObject *)mod_consts[51]);

        if (unlikely(tmp_expression_name_5 == NULL)) {
            tmp_expression_name_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[51]);
        }

        if (tmp_expression_name_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 28;

            goto frame_exception_exit_1;
        }
        tmp_subscript_name_5 = mod_consts[67];
        tmp_subscript_name_4 = LOOKUP_SUBSCRIPT(tmp_expression_name_5, tmp_subscript_name_5);
        if (tmp_subscript_name_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 28;

            goto frame_exception_exit_1;
        }
        tmp_dict_value_2 = LOOKUP_SUBSCRIPT(tmp_expression_name_4, tmp_subscript_name_4);
        Py_DECREF(tmp_subscript_name_4);
        if (tmp_dict_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 28;

            goto frame_exception_exit_1;
        }
        tmp_annotations_3 = _PyDict_NewPresized( 3 );
        {
            PyObject *tmp_expression_name_6;
            PyObject *tmp_subscript_name_6;
            PyObject *tmp_expression_name_7;
            PyObject *tmp_subscript_name_7;
            tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[68];
            tmp_expression_name_6 = GET_STRING_DICT_VALUE(moduledict_pandas$core$util$numba_, (Nuitka_StringObject *)mod_consts[52]);

            if (unlikely(tmp_expression_name_6 == NULL)) {
                tmp_expression_name_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[52]);
            }

            if (tmp_expression_name_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 28;

                goto dict_build_exception_1;
            }
            tmp_subscript_name_6 = GET_STRING_DICT_VALUE(moduledict_pandas$core$util$numba_, (Nuitka_StringObject *)mod_consts[51]);

            if (unlikely(tmp_subscript_name_6 == NULL)) {
                tmp_subscript_name_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[51]);
            }

            if (tmp_subscript_name_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 28;

                goto dict_build_exception_1;
            }
            tmp_dict_value_2 = LOOKUP_SUBSCRIPT(tmp_expression_name_6, tmp_subscript_name_6);
            if (tmp_dict_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 28;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[61];
            tmp_expression_name_7 = GET_STRING_DICT_VALUE(moduledict_pandas$core$util$numba_, (Nuitka_StringObject *)mod_consts[53]);

            if (unlikely(tmp_expression_name_7 == NULL)) {
                tmp_expression_name_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[53]);
            }

            if (tmp_expression_name_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 29;

                goto dict_build_exception_1;
            }
            tmp_subscript_name_7 = mod_consts[69];
            tmp_dict_value_2 = LOOKUP_SUBSCRIPT(tmp_expression_name_7, tmp_subscript_name_7);
            if (tmp_dict_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 29;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_1;
        // Exception handling pass through code for dict_build:
        dict_build_exception_1:;
        Py_DECREF(tmp_annotations_3);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_1:;
        Py_INCREF(tmp_defaults_2);


        tmp_assign_source_19 = MAKE_FUNCTION_pandas$core$util$numba_$$$function__3_get_jit_arguments(tmp_defaults_2, tmp_annotations_3);

        UPDATE_STRING_DICT1(moduledict_pandas$core$util$numba_, (Nuitka_StringObject *)mod_consts[70], tmp_assign_source_19);
    }
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_annotations_4;
        PyObject *tmp_dict_key_3;
        PyObject *tmp_dict_value_3;
        tmp_dict_key_3 = mod_consts[17];
        tmp_dict_value_3 = GET_STRING_DICT_VALUE(moduledict_pandas$core$util$numba_, (Nuitka_StringObject *)mod_consts[50]);

        if (unlikely(tmp_dict_value_3 == NULL)) {
            tmp_dict_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[50]);
        }

        if (tmp_dict_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 64;

            goto frame_exception_exit_1;
        }
        tmp_annotations_4 = _PyDict_NewPresized( 5 );
        tmp_res = PyDict_SetItem(tmp_annotations_4, tmp_dict_key_3, tmp_dict_value_3);
        assert(!(tmp_res != 0));
        tmp_dict_key_3 = mod_consts[22];
        tmp_dict_value_3 = (PyObject *)&PyBool_Type;
        tmp_res = PyDict_SetItem(tmp_annotations_4, tmp_dict_key_3, tmp_dict_value_3);
        assert(!(tmp_res != 0));
        tmp_dict_key_3 = mod_consts[23];
        tmp_dict_value_3 = (PyObject *)&PyBool_Type;
        tmp_res = PyDict_SetItem(tmp_annotations_4, tmp_dict_key_3, tmp_dict_value_3);
        assert(!(tmp_res != 0));
        tmp_dict_key_3 = mod_consts[24];
        tmp_dict_value_3 = (PyObject *)&PyBool_Type;
        tmp_res = PyDict_SetItem(tmp_annotations_4, tmp_dict_key_3, tmp_dict_value_3);
        assert(!(tmp_res != 0));
        tmp_dict_key_3 = mod_consts[61];
        tmp_dict_value_3 = GET_STRING_DICT_VALUE(moduledict_pandas$core$util$numba_, (Nuitka_StringObject *)mod_consts[50]);

        if (unlikely(tmp_dict_value_3 == NULL)) {
            tmp_dict_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[50]);
        }

        if (tmp_dict_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 65;

            goto dict_build_exception_2;
        }
        tmp_res = PyDict_SetItem(tmp_annotations_4, tmp_dict_key_3, tmp_dict_value_3);
        assert(!(tmp_res != 0));
        goto dict_build_noexception_2;
        // Exception handling pass through code for dict_build:
        dict_build_exception_2:;
        Py_DECREF(tmp_annotations_4);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_2:;


        tmp_assign_source_20 = MAKE_FUNCTION_pandas$core$util$numba_$$$function__4_jit_user_function(tmp_annotations_4);

        UPDATE_STRING_DICT1(moduledict_pandas$core$util$numba_, (Nuitka_StringObject *)mod_consts[71], tmp_assign_source_20);
    }

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION(frame_e0156a0573f1a068ab6bebf36092e1b1);
#endif
    popFrameStack();

    assertFrameObject(frame_e0156a0573f1a068ab6bebf36092e1b1);

    goto frame_no_exception_1;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_e0156a0573f1a068ab6bebf36092e1b1);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_e0156a0573f1a068ab6bebf36092e1b1, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_e0156a0573f1a068ab6bebf36092e1b1->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_e0156a0573f1a068ab6bebf36092e1b1, exception_lineno);
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;

    frame_no_exception_1:;

    return module_pandas$core$util$numba_;
    module_exception_exit:
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);
    return NULL;
}

