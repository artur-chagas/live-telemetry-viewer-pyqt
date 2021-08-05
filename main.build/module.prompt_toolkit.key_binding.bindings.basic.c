/* Generated code for Python module 'prompt_toolkit.key_binding.bindings.basic'
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

/* The "module_prompt_toolkit$key_binding$bindings$basic" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_prompt_toolkit$key_binding$bindings$basic;
PyDictObject *moduledict_prompt_toolkit$key_binding$bindings$basic;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[225];

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(void) {
    if (constants_created == false) {
        loadConstantsBlob(&mod_consts[0], UNTRANSLATE("prompt_toolkit.key_binding.bindings.basic"));
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
void checkModuleConstants_prompt_toolkit$key_binding$bindings$basic(void) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    checkConstantsBlob(&mod_consts[0], "prompt_toolkit.key_binding.bindings.basic");
}
#endif

// The module code objects.
static PyCodeObject *codeobj_02316590801e404852690234577f647a;
static PyCodeObject *codeobj_2f6a18f23b670947eef11039226eb700;
static PyCodeObject *codeobj_b02289f2f7db061b42a6667a68fb6743;
static PyCodeObject *codeobj_ea9e47cada5751f82e3ee6b2350bdc80;
static PyCodeObject *codeobj_3bcf7de56a40ea0266611786b02be974;
static PyCodeObject *codeobj_2f3132e4a61c74327e7248d2a156c9bc;
static PyCodeObject *codeobj_e4b262fee648ea6c51aa95232089ee96;
static PyCodeObject *codeobj_145ad7c3c902d3f9fb5afc19ca8741ce;
static PyCodeObject *codeobj_c5cbeacfcb0e7cda856321ff168562fa;
static PyCodeObject *codeobj_8f45a9852c3615ca14b71105926cb2e0;
static PyCodeObject *codeobj_dac7b7d7834ee4f3515fcd689fb6d90d;
static PyCodeObject *codeobj_317fc1f6375775266c1248fcb404830e;
static PyCodeObject *codeobj_18567da51663dc9a42f0424440efc9ef;
static PyCodeObject *codeobj_1e465c63423cecf32f0c62928e893560;

static void createModuleCodeObjects(void) {
    module_filename_obj = mod_consts[197]; CHECK_OBJECT(module_filename_obj);
    codeobj_02316590801e404852690234577f647a = MAKE_CODEOBJECT(module_filename_obj, 1, CO_NOFREE, mod_consts[221], NULL, NULL, 0, 0, 0);
    codeobj_2f6a18f23b670947eef11039226eb700 = MAKE_CODEOBJECT(module_filename_obj, 206, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[153], mod_consts[222], NULL, 1, 0, 0);
    codeobj_b02289f2f7db061b42a6667a68fb6743 = MAKE_CODEOBJECT(module_filename_obj, 202, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[151], mod_consts[223], NULL, 1, 0, 0);
    codeobj_ea9e47cada5751f82e3ee6b2350bdc80 = MAKE_CODEOBJECT(module_filename_obj, 198, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[149], mod_consts[223], NULL, 1, 0, 0);
    codeobj_3bcf7de56a40ea0266611786b02be974 = MAKE_CODEOBJECT(module_filename_obj, 124, CO_NOFREE, mod_consts[100], mod_consts[223], NULL, 1, 0, 0);
    codeobj_2f3132e4a61c74327e7248d2a156c9bc = MAKE_CODEOBJECT(module_filename_obj, 213, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[156], mod_consts[223], NULL, 1, 0, 0);
    codeobj_e4b262fee648ea6c51aa95232089ee96 = MAKE_CODEOBJECT(module_filename_obj, 245, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[166], mod_consts[223], NULL, 1, 0, 0);
    codeobj_145ad7c3c902d3f9fb5afc19ca8741ce = MAKE_CODEOBJECT(module_filename_obj, 180, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[144], mod_consts[223], NULL, 1, 0, 0);
    codeobj_c5cbeacfcb0e7cda856321ff168562fa = MAKE_CODEOBJECT(module_filename_obj, 187, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[147], mod_consts[223], NULL, 1, 0, 0);
    codeobj_8f45a9852c3615ca14b71105926cb2e0 = MAKE_CODEOBJECT(module_filename_obj, 226, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[160], mod_consts[222], NULL, 1, 0, 0);
    codeobj_dac7b7d7834ee4f3515fcd689fb6d90d = MAKE_CODEOBJECT(module_filename_obj, 172, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[137], NULL, NULL, 0, 0, 0);
    codeobj_317fc1f6375775266c1248fcb404830e = MAKE_CODEOBJECT(module_filename_obj, 24, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[117], mod_consts[223], NULL, 1, 0, 0);
    codeobj_18567da51663dc9a42f0424440efc9ef = MAKE_CODEOBJECT(module_filename_obj, 241, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[162], NULL, NULL, 0, 0, 0);
    codeobj_1e465c63423cecf32f0c62928e893560 = MAKE_CODEOBJECT(module_filename_obj, 30, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[220], mod_consts[224], NULL, 0, 0, 0);
}

// The module function declarations.
static PyObject *MAKE_FUNCTION_prompt_toolkit$key_binding$bindings$basic$$$function__1_if_no_repeat(PyObject *annotations);


static PyObject *MAKE_FUNCTION_prompt_toolkit$key_binding$bindings$basic$$$function__2_load_basic_bindings(PyObject *annotations);


static PyObject *MAKE_FUNCTION_prompt_toolkit$key_binding$bindings$basic$$$function__2_load_basic_bindings$$$function__10_in_quoted_insert(PyObject *annotations);


static PyObject *MAKE_FUNCTION_prompt_toolkit$key_binding$bindings$basic$$$function__2_load_basic_bindings$$$function__11__insert_text(PyObject *annotations);


static PyObject *MAKE_FUNCTION_prompt_toolkit$key_binding$bindings$basic$$$function__2_load_basic_bindings$$$function__1__ignore(PyObject *annotations);


static PyObject *MAKE_FUNCTION_prompt_toolkit$key_binding$bindings$basic$$$function__2_load_basic_bindings$$$function__2_has_text_before_cursor(PyObject *annotations);


static PyObject *MAKE_FUNCTION_prompt_toolkit$key_binding$bindings$basic$$$function__2_load_basic_bindings$$$function__3__newline(PyObject *annotations);


static PyObject *MAKE_FUNCTION_prompt_toolkit$key_binding$bindings$basic$$$function__2_load_basic_bindings$$$function__4__newline2(PyObject *annotations);


static PyObject *MAKE_FUNCTION_prompt_toolkit$key_binding$bindings$basic$$$function__2_load_basic_bindings$$$function__5__go_up(PyObject *annotations);


static PyObject *MAKE_FUNCTION_prompt_toolkit$key_binding$bindings$basic$$$function__2_load_basic_bindings$$$function__6__go_down(PyObject *annotations);


static PyObject *MAKE_FUNCTION_prompt_toolkit$key_binding$bindings$basic$$$function__2_load_basic_bindings$$$function__7__cut(PyObject *annotations);


static PyObject *MAKE_FUNCTION_prompt_toolkit$key_binding$bindings$basic$$$function__2_load_basic_bindings$$$function__8__insert_ctrl_z(PyObject *annotations);


static PyObject *MAKE_FUNCTION_prompt_toolkit$key_binding$bindings$basic$$$function__2_load_basic_bindings$$$function__9__paste(PyObject *annotations);


// The module function definitions.
static PyObject *impl_prompt_toolkit$key_binding$bindings$basic$$$function__1_if_no_repeat(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_event = python_pars[0];
    struct Nuitka_FrameObject *frame_317fc1f6375775266c1248fcb404830e;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_317fc1f6375775266c1248fcb404830e = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_317fc1f6375775266c1248fcb404830e)) {
        Py_XDECREF(cache_frame_317fc1f6375775266c1248fcb404830e);

#if _DEBUG_REFCOUNTS
        if (cache_frame_317fc1f6375775266c1248fcb404830e == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_317fc1f6375775266c1248fcb404830e = MAKE_FUNCTION_FRAME(codeobj_317fc1f6375775266c1248fcb404830e, module_prompt_toolkit$key_binding$bindings$basic, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_317fc1f6375775266c1248fcb404830e->m_type_description == NULL);
    frame_317fc1f6375775266c1248fcb404830e = cache_frame_317fc1f6375775266c1248fcb404830e;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_317fc1f6375775266c1248fcb404830e);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_317fc1f6375775266c1248fcb404830e) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_operand_name_1;
        PyObject *tmp_expression_name_1;
        CHECK_OBJECT(par_event);
        tmp_expression_name_1 = par_event;
        tmp_operand_name_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_1, mod_consts[0]);
        if (tmp_operand_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 27;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_name_1);
        Py_DECREF(tmp_operand_name_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 27;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_return_value = (tmp_res == 0) ? Py_True : Py_False;
        Py_INCREF(tmp_return_value);
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_317fc1f6375775266c1248fcb404830e);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_317fc1f6375775266c1248fcb404830e);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_317fc1f6375775266c1248fcb404830e);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_317fc1f6375775266c1248fcb404830e, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_317fc1f6375775266c1248fcb404830e->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_317fc1f6375775266c1248fcb404830e, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_317fc1f6375775266c1248fcb404830e,
        type_description_1,
        par_event
    );


    // Release cached frame if used for exception.
    if (frame_317fc1f6375775266c1248fcb404830e == cache_frame_317fc1f6375775266c1248fcb404830e) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_317fc1f6375775266c1248fcb404830e);
        cache_frame_317fc1f6375775266c1248fcb404830e = NULL;
    }

    assertFrameObject(frame_317fc1f6375775266c1248fcb404830e);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(par_event);
    par_event = NULL;
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

    Py_XDECREF(par_event);
    par_event = NULL;
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


static PyObject *impl_prompt_toolkit$key_binding$bindings$basic$$$function__2_load_basic_bindings(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *var_key_bindings = NULL;
    PyObject *var_insert_mode = NULL;
    PyObject *var_handle = NULL;
    PyObject *var__ignore = NULL;
    PyObject *var_has_text_before_cursor = NULL;
    PyObject *var__newline = NULL;
    PyObject *var__newline2 = NULL;
    PyObject *var__go_up = NULL;
    PyObject *var__go_down = NULL;
    PyObject *var__cut = NULL;
    PyObject *var__insert_ctrl_z = NULL;
    PyObject *var__paste = NULL;
    PyObject *var_in_quoted_insert = NULL;
    PyObject *var__insert_text = NULL;
    struct Nuitka_FrameObject *frame_1e465c63423cecf32f0c62928e893560;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_1e465c63423cecf32f0c62928e893560 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_1e465c63423cecf32f0c62928e893560)) {
        Py_XDECREF(cache_frame_1e465c63423cecf32f0c62928e893560);

#if _DEBUG_REFCOUNTS
        if (cache_frame_1e465c63423cecf32f0c62928e893560 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_1e465c63423cecf32f0c62928e893560 = MAKE_FUNCTION_FRAME(codeobj_1e465c63423cecf32f0c62928e893560, module_prompt_toolkit$key_binding$bindings$basic, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_1e465c63423cecf32f0c62928e893560->m_type_description == NULL);
    frame_1e465c63423cecf32f0c62928e893560 = cache_frame_1e465c63423cecf32f0c62928e893560;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_1e465c63423cecf32f0c62928e893560);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_1e465c63423cecf32f0c62928e893560) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_name_1;
        tmp_called_name_1 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$basic, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_called_name_1 == NULL)) {
            tmp_called_name_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
        }

        if (tmp_called_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 31;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_1e465c63423cecf32f0c62928e893560->m_frame.f_lineno = 31;
        tmp_assign_source_1 = CALL_FUNCTION_NO_ARGS(tmp_called_name_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 31;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_key_bindings == NULL);
        var_key_bindings = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_left_name_1;
        PyObject *tmp_right_name_1;
        tmp_left_name_1 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$basic, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_left_name_1 == NULL)) {
            tmp_left_name_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        if (tmp_left_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 32;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_right_name_1 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$basic, (Nuitka_StringObject *)mod_consts[4]);

        if (unlikely(tmp_right_name_1 == NULL)) {
            tmp_right_name_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[4]);
        }

        if (tmp_right_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 32;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_2 = BINARY_OPERATION_BITOR_OBJECT_OBJECT_OBJECT(tmp_left_name_1, tmp_right_name_1);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 32;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_insert_mode == NULL);
        var_insert_mode = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_expression_name_1;
        CHECK_OBJECT(var_key_bindings);
        tmp_expression_name_1 = var_key_bindings;
        tmp_assign_source_3 = LOOKUP_ATTRIBUTE(tmp_expression_name_1, mod_consts[5]);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 33;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_handle == NULL);
        var_handle = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_called_name_2;
        PyObject *tmp_called_name_3;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_called_name_4;
        PyObject *tmp_called_name_5;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_called_name_6;
        PyObject *tmp_called_name_7;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_called_name_8;
        PyObject *tmp_called_name_9;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_called_name_10;
        PyObject *tmp_called_name_11;
        PyObject *tmp_args_element_name_5;
        PyObject *tmp_called_name_12;
        PyObject *tmp_called_name_13;
        PyObject *tmp_args_element_name_6;
        PyObject *tmp_called_name_14;
        PyObject *tmp_called_name_15;
        PyObject *tmp_args_element_name_7;
        PyObject *tmp_called_name_16;
        PyObject *tmp_called_name_17;
        PyObject *tmp_args_element_name_8;
        PyObject *tmp_called_name_18;
        PyObject *tmp_called_name_19;
        PyObject *tmp_args_element_name_9;
        PyObject *tmp_called_name_20;
        PyObject *tmp_called_name_21;
        PyObject *tmp_args_element_name_10;
        PyObject *tmp_called_name_22;
        PyObject *tmp_called_name_23;
        PyObject *tmp_args_element_name_11;
        PyObject *tmp_called_name_24;
        PyObject *tmp_called_name_25;
        PyObject *tmp_args_element_name_12;
        PyObject *tmp_called_name_26;
        PyObject *tmp_called_name_27;
        PyObject *tmp_args_element_name_13;
        PyObject *tmp_called_name_28;
        PyObject *tmp_called_name_29;
        PyObject *tmp_args_element_name_14;
        PyObject *tmp_called_name_30;
        PyObject *tmp_called_name_31;
        PyObject *tmp_args_element_name_15;
        PyObject *tmp_called_name_32;
        PyObject *tmp_called_name_33;
        PyObject *tmp_args_element_name_16;
        PyObject *tmp_called_name_34;
        PyObject *tmp_called_name_35;
        PyObject *tmp_args_element_name_17;
        PyObject *tmp_called_name_36;
        PyObject *tmp_called_name_37;
        PyObject *tmp_args_element_name_18;
        PyObject *tmp_called_name_38;
        PyObject *tmp_called_name_39;
        PyObject *tmp_args_element_name_19;
        PyObject *tmp_called_name_40;
        PyObject *tmp_called_name_41;
        PyObject *tmp_args_element_name_20;
        PyObject *tmp_called_name_42;
        PyObject *tmp_called_name_43;
        PyObject *tmp_args_element_name_21;
        PyObject *tmp_called_name_44;
        PyObject *tmp_called_name_45;
        PyObject *tmp_args_element_name_22;
        PyObject *tmp_called_name_46;
        PyObject *tmp_called_name_47;
        PyObject *tmp_args_element_name_23;
        PyObject *tmp_called_name_48;
        PyObject *tmp_called_name_49;
        PyObject *tmp_args_element_name_24;
        PyObject *tmp_called_name_50;
        PyObject *tmp_called_name_51;
        PyObject *tmp_args_element_name_25;
        PyObject *tmp_called_name_52;
        PyObject *tmp_called_name_53;
        PyObject *tmp_args_element_name_26;
        PyObject *tmp_called_name_54;
        PyObject *tmp_called_name_55;
        PyObject *tmp_args_element_name_27;
        PyObject *tmp_called_name_56;
        PyObject *tmp_called_name_57;
        PyObject *tmp_args_element_name_28;
        PyObject *tmp_called_name_58;
        PyObject *tmp_called_name_59;
        PyObject *tmp_args_element_name_29;
        PyObject *tmp_called_name_60;
        PyObject *tmp_called_name_61;
        PyObject *tmp_args_element_name_30;
        PyObject *tmp_called_name_62;
        PyObject *tmp_called_name_63;
        PyObject *tmp_args_element_name_31;
        PyObject *tmp_called_name_64;
        PyObject *tmp_called_name_65;
        PyObject *tmp_args_element_name_32;
        PyObject *tmp_called_name_66;
        PyObject *tmp_called_name_67;
        PyObject *tmp_args_element_name_33;
        PyObject *tmp_called_name_68;
        PyObject *tmp_called_name_69;
        PyObject *tmp_args_element_name_34;
        PyObject *tmp_called_name_70;
        PyObject *tmp_called_name_71;
        PyObject *tmp_args_element_name_35;
        PyObject *tmp_called_name_72;
        PyObject *tmp_called_name_73;
        PyObject *tmp_args_element_name_36;
        PyObject *tmp_called_name_74;
        PyObject *tmp_called_name_75;
        PyObject *tmp_args_element_name_37;
        PyObject *tmp_called_name_76;
        PyObject *tmp_called_name_77;
        PyObject *tmp_args_element_name_38;
        PyObject *tmp_called_name_78;
        PyObject *tmp_called_name_79;
        PyObject *tmp_args_element_name_39;
        PyObject *tmp_called_name_80;
        PyObject *tmp_called_name_81;
        PyObject *tmp_args_element_name_40;
        PyObject *tmp_called_name_82;
        PyObject *tmp_called_name_83;
        PyObject *tmp_args_element_name_41;
        PyObject *tmp_called_name_84;
        PyObject *tmp_called_name_85;
        PyObject *tmp_args_element_name_42;
        PyObject *tmp_called_name_86;
        PyObject *tmp_called_name_87;
        PyObject *tmp_args_element_name_43;
        PyObject *tmp_called_name_88;
        PyObject *tmp_called_name_89;
        PyObject *tmp_args_element_name_44;
        PyObject *tmp_called_name_90;
        PyObject *tmp_called_name_91;
        PyObject *tmp_args_element_name_45;
        PyObject *tmp_called_name_92;
        PyObject *tmp_called_name_93;
        PyObject *tmp_args_element_name_46;
        PyObject *tmp_called_name_94;
        PyObject *tmp_called_name_95;
        PyObject *tmp_args_element_name_47;
        PyObject *tmp_called_name_96;
        PyObject *tmp_called_name_97;
        PyObject *tmp_args_element_name_48;
        PyObject *tmp_called_name_98;
        PyObject *tmp_called_name_99;
        PyObject *tmp_args_element_name_49;
        PyObject *tmp_called_name_100;
        PyObject *tmp_called_name_101;
        PyObject *tmp_args_element_name_50;
        PyObject *tmp_called_name_102;
        PyObject *tmp_called_name_103;
        PyObject *tmp_args_element_name_51;
        PyObject *tmp_called_name_104;
        PyObject *tmp_called_name_105;
        PyObject *tmp_args_element_name_52;
        PyObject *tmp_called_name_106;
        PyObject *tmp_called_name_107;
        PyObject *tmp_args_element_name_53;
        PyObject *tmp_called_name_108;
        PyObject *tmp_called_name_109;
        PyObject *tmp_args_element_name_54;
        PyObject *tmp_called_name_110;
        PyObject *tmp_called_name_111;
        PyObject *tmp_args_element_name_55;
        PyObject *tmp_called_name_112;
        PyObject *tmp_called_name_113;
        PyObject *tmp_args_element_name_56;
        PyObject *tmp_called_name_114;
        PyObject *tmp_called_name_115;
        PyObject *tmp_args_element_name_57;
        PyObject *tmp_called_name_116;
        PyObject *tmp_called_name_117;
        PyObject *tmp_args_element_name_58;
        PyObject *tmp_called_name_118;
        PyObject *tmp_called_name_119;
        PyObject *tmp_args_element_name_59;
        PyObject *tmp_called_name_120;
        PyObject *tmp_called_name_121;
        PyObject *tmp_args_element_name_60;
        PyObject *tmp_called_name_122;
        PyObject *tmp_called_name_123;
        PyObject *tmp_args_element_name_61;
        PyObject *tmp_called_name_124;
        PyObject *tmp_called_name_125;
        PyObject *tmp_args_element_name_62;
        PyObject *tmp_called_name_126;
        PyObject *tmp_called_name_127;
        PyObject *tmp_args_element_name_63;
        PyObject *tmp_called_name_128;
        PyObject *tmp_called_name_129;
        PyObject *tmp_args_element_name_64;
        PyObject *tmp_called_name_130;
        PyObject *tmp_called_name_131;
        PyObject *tmp_args_element_name_65;
        PyObject *tmp_called_name_132;
        PyObject *tmp_called_name_133;
        PyObject *tmp_args_element_name_66;
        PyObject *tmp_called_name_134;
        PyObject *tmp_called_name_135;
        PyObject *tmp_args_element_name_67;
        PyObject *tmp_called_name_136;
        PyObject *tmp_called_name_137;
        PyObject *tmp_args_element_name_68;
        PyObject *tmp_called_name_138;
        PyObject *tmp_called_name_139;
        PyObject *tmp_args_element_name_69;
        PyObject *tmp_called_name_140;
        PyObject *tmp_called_name_141;
        PyObject *tmp_args_element_name_70;
        PyObject *tmp_called_name_142;
        PyObject *tmp_called_name_143;
        PyObject *tmp_args_element_name_71;
        PyObject *tmp_called_name_144;
        PyObject *tmp_called_name_145;
        PyObject *tmp_args_element_name_72;
        PyObject *tmp_called_name_146;
        PyObject *tmp_called_name_147;
        PyObject *tmp_args_element_name_73;
        PyObject *tmp_called_name_148;
        PyObject *tmp_called_name_149;
        PyObject *tmp_args_element_name_74;
        PyObject *tmp_called_name_150;
        PyObject *tmp_called_name_151;
        PyObject *tmp_args_element_name_75;
        PyObject *tmp_called_name_152;
        PyObject *tmp_called_name_153;
        PyObject *tmp_args_element_name_76;
        PyObject *tmp_called_name_154;
        PyObject *tmp_called_name_155;
        PyObject *tmp_args_element_name_77;
        PyObject *tmp_called_name_156;
        PyObject *tmp_called_name_157;
        PyObject *tmp_args_element_name_78;
        PyObject *tmp_called_name_158;
        PyObject *tmp_called_name_159;
        PyObject *tmp_args_element_name_79;
        PyObject *tmp_called_name_160;
        PyObject *tmp_called_name_161;
        PyObject *tmp_args_element_name_80;
        PyObject *tmp_called_name_162;
        PyObject *tmp_called_name_163;
        PyObject *tmp_args_element_name_81;
        PyObject *tmp_called_name_164;
        PyObject *tmp_called_name_165;
        PyObject *tmp_args_element_name_82;
        PyObject *tmp_called_name_166;
        PyObject *tmp_called_name_167;
        PyObject *tmp_args_element_name_83;
        PyObject *tmp_called_name_168;
        PyObject *tmp_called_name_169;
        PyObject *tmp_args_element_name_84;
        PyObject *tmp_called_name_170;
        PyObject *tmp_called_name_171;
        PyObject *tmp_args_element_name_85;
        PyObject *tmp_called_name_172;
        PyObject *tmp_called_name_173;
        PyObject *tmp_args_element_name_86;
        PyObject *tmp_called_name_174;
        PyObject *tmp_called_name_175;
        PyObject *tmp_args_element_name_87;
        PyObject *tmp_called_name_176;
        PyObject *tmp_called_name_177;
        PyObject *tmp_args_element_name_88;
        PyObject *tmp_called_name_178;
        PyObject *tmp_called_name_179;
        PyObject *tmp_args_element_name_89;
        PyObject *tmp_expression_name_2;
        PyObject *tmp_args_element_name_90;
        PyObject *tmp_annotations_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        CHECK_OBJECT(var_handle);
        tmp_called_name_3 = var_handle;
        frame_1e465c63423cecf32f0c62928e893560->m_frame.f_lineno = 35;
        tmp_called_name_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_3, mod_consts[6]);
        if (tmp_called_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 35;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_handle);
        tmp_called_name_5 = var_handle;
        frame_1e465c63423cecf32f0c62928e893560->m_frame.f_lineno = 36;
        tmp_called_name_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_5, mod_consts[7]);
        if (tmp_called_name_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_2);

            exception_lineno = 36;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_handle);
        tmp_called_name_7 = var_handle;
        frame_1e465c63423cecf32f0c62928e893560->m_frame.f_lineno = 37;
        tmp_called_name_6 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_7, mod_consts[8]);
        if (tmp_called_name_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_2);
            Py_DECREF(tmp_called_name_4);

            exception_lineno = 37;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_handle);
        tmp_called_name_9 = var_handle;
        frame_1e465c63423cecf32f0c62928e893560->m_frame.f_lineno = 38;
        tmp_called_name_8 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_9, mod_consts[9]);
        if (tmp_called_name_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_2);
            Py_DECREF(tmp_called_name_4);
            Py_DECREF(tmp_called_name_6);

            exception_lineno = 38;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_handle);
        tmp_called_name_11 = var_handle;
        frame_1e465c63423cecf32f0c62928e893560->m_frame.f_lineno = 39;
        tmp_called_name_10 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_11, mod_consts[10]);
        if (tmp_called_name_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_2);
            Py_DECREF(tmp_called_name_4);
            Py_DECREF(tmp_called_name_6);
            Py_DECREF(tmp_called_name_8);

            exception_lineno = 39;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_handle);
        tmp_called_name_13 = var_handle;
        frame_1e465c63423cecf32f0c62928e893560->m_frame.f_lineno = 40;
        tmp_called_name_12 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_13, mod_consts[11]);
        if (tmp_called_name_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_2);
            Py_DECREF(tmp_called_name_4);
            Py_DECREF(tmp_called_name_6);
            Py_DECREF(tmp_called_name_8);
            Py_DECREF(tmp_called_name_10);

            exception_lineno = 40;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_handle);
        tmp_called_name_15 = var_handle;
        frame_1e465c63423cecf32f0c62928e893560->m_frame.f_lineno = 41;
        tmp_called_name_14 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_15, mod_consts[12]);
        if (tmp_called_name_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_2);
            Py_DECREF(tmp_called_name_4);
            Py_DECREF(tmp_called_name_6);
            Py_DECREF(tmp_called_name_8);
            Py_DECREF(tmp_called_name_10);
            Py_DECREF(tmp_called_name_12);

            exception_lineno = 41;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_handle);
        tmp_called_name_17 = var_handle;
        frame_1e465c63423cecf32f0c62928e893560->m_frame.f_lineno = 42;
        tmp_called_name_16 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_17, mod_consts[13]);
        if (tmp_called_name_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_2);
            Py_DECREF(tmp_called_name_4);
            Py_DECREF(tmp_called_name_6);
            Py_DECREF(tmp_called_name_8);
            Py_DECREF(tmp_called_name_10);
            Py_DECREF(tmp_called_name_12);
            Py_DECREF(tmp_called_name_14);

            exception_lineno = 42;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_handle);
        tmp_called_name_19 = var_handle;
        frame_1e465c63423cecf32f0c62928e893560->m_frame.f_lineno = 43;
        tmp_called_name_18 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_19, mod_consts[14]);
        if (tmp_called_name_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_2);
            Py_DECREF(tmp_called_name_4);
            Py_DECREF(tmp_called_name_6);
            Py_DECREF(tmp_called_name_8);
            Py_DECREF(tmp_called_name_10);
            Py_DECREF(tmp_called_name_12);
            Py_DECREF(tmp_called_name_14);
            Py_DECREF(tmp_called_name_16);

            exception_lineno = 43;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_handle);
        tmp_called_name_21 = var_handle;
        frame_1e465c63423cecf32f0c62928e893560->m_frame.f_lineno = 44;
        tmp_called_name_20 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_21, mod_consts[15]);
        if (tmp_called_name_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_2);
            Py_DECREF(tmp_called_name_4);
            Py_DECREF(tmp_called_name_6);
            Py_DECREF(tmp_called_name_8);
            Py_DECREF(tmp_called_name_10);
            Py_DECREF(tmp_called_name_12);
            Py_DECREF(tmp_called_name_14);
            Py_DECREF(tmp_called_name_16);
            Py_DECREF(tmp_called_name_18);

            exception_lineno = 44;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_handle);
        tmp_called_name_23 = var_handle;
        frame_1e465c63423cecf32f0c62928e893560->m_frame.f_lineno = 45;
        tmp_called_name_22 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_23, mod_consts[16]);
        if (tmp_called_name_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_2);
            Py_DECREF(tmp_called_name_4);
            Py_DECREF(tmp_called_name_6);
            Py_DECREF(tmp_called_name_8);
            Py_DECREF(tmp_called_name_10);
            Py_DECREF(tmp_called_name_12);
            Py_DECREF(tmp_called_name_14);
            Py_DECREF(tmp_called_name_16);
            Py_DECREF(tmp_called_name_18);
            Py_DECREF(tmp_called_name_20);

            exception_lineno = 45;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_handle);
        tmp_called_name_25 = var_handle;
        frame_1e465c63423cecf32f0c62928e893560->m_frame.f_lineno = 46;
        tmp_called_name_24 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_25, mod_consts[17]);
        if (tmp_called_name_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_2);
            Py_DECREF(tmp_called_name_4);
            Py_DECREF(tmp_called_name_6);
            Py_DECREF(tmp_called_name_8);
            Py_DECREF(tmp_called_name_10);
            Py_DECREF(tmp_called_name_12);
            Py_DECREF(tmp_called_name_14);
            Py_DECREF(tmp_called_name_16);
            Py_DECREF(tmp_called_name_18);
            Py_DECREF(tmp_called_name_20);
            Py_DECREF(tmp_called_name_22);

            exception_lineno = 46;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_handle);
        tmp_called_name_27 = var_handle;
        frame_1e465c63423cecf32f0c62928e893560->m_frame.f_lineno = 47;
        tmp_called_name_26 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_27, mod_consts[18]);
        if (tmp_called_name_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_2);
            Py_DECREF(tmp_called_name_4);
            Py_DECREF(tmp_called_name_6);
            Py_DECREF(tmp_called_name_8);
            Py_DECREF(tmp_called_name_10);
            Py_DECREF(tmp_called_name_12);
            Py_DECREF(tmp_called_name_14);
            Py_DECREF(tmp_called_name_16);
            Py_DECREF(tmp_called_name_18);
            Py_DECREF(tmp_called_name_20);
            Py_DECREF(tmp_called_name_22);
            Py_DECREF(tmp_called_name_24);

            exception_lineno = 47;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_handle);
        tmp_called_name_29 = var_handle;
        frame_1e465c63423cecf32f0c62928e893560->m_frame.f_lineno = 48;
        tmp_called_name_28 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_29, mod_consts[19]);
        if (tmp_called_name_28 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_2);
            Py_DECREF(tmp_called_name_4);
            Py_DECREF(tmp_called_name_6);
            Py_DECREF(tmp_called_name_8);
            Py_DECREF(tmp_called_name_10);
            Py_DECREF(tmp_called_name_12);
            Py_DECREF(tmp_called_name_14);
            Py_DECREF(tmp_called_name_16);
            Py_DECREF(tmp_called_name_18);
            Py_DECREF(tmp_called_name_20);
            Py_DECREF(tmp_called_name_22);
            Py_DECREF(tmp_called_name_24);
            Py_DECREF(tmp_called_name_26);

            exception_lineno = 48;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_handle);
        tmp_called_name_31 = var_handle;
        frame_1e465c63423cecf32f0c62928e893560->m_frame.f_lineno = 49;
        tmp_called_name_30 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_31, mod_consts[20]);
        if (tmp_called_name_30 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_2);
            Py_DECREF(tmp_called_name_4);
            Py_DECREF(tmp_called_name_6);
            Py_DECREF(tmp_called_name_8);
            Py_DECREF(tmp_called_name_10);
            Py_DECREF(tmp_called_name_12);
            Py_DECREF(tmp_called_name_14);
            Py_DECREF(tmp_called_name_16);
            Py_DECREF(tmp_called_name_18);
            Py_DECREF(tmp_called_name_20);
            Py_DECREF(tmp_called_name_22);
            Py_DECREF(tmp_called_name_24);
            Py_DECREF(tmp_called_name_26);
            Py_DECREF(tmp_called_name_28);

            exception_lineno = 49;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_handle);
        tmp_called_name_33 = var_handle;
        frame_1e465c63423cecf32f0c62928e893560->m_frame.f_lineno = 50;
        tmp_called_name_32 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_33, mod_consts[21]);
        if (tmp_called_name_32 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_2);
            Py_DECREF(tmp_called_name_4);
            Py_DECREF(tmp_called_name_6);
            Py_DECREF(tmp_called_name_8);
            Py_DECREF(tmp_called_name_10);
            Py_DECREF(tmp_called_name_12);
            Py_DECREF(tmp_called_name_14);
            Py_DECREF(tmp_called_name_16);
            Py_DECREF(tmp_called_name_18);
            Py_DECREF(tmp_called_name_20);
            Py_DECREF(tmp_called_name_22);
            Py_DECREF(tmp_called_name_24);
            Py_DECREF(tmp_called_name_26);
            Py_DECREF(tmp_called_name_28);
            Py_DECREF(tmp_called_name_30);

            exception_lineno = 50;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_handle);
        tmp_called_name_35 = var_handle;
        frame_1e465c63423cecf32f0c62928e893560->m_frame.f_lineno = 51;
        tmp_called_name_34 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_35, mod_consts[22]);
        if (tmp_called_name_34 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_2);
            Py_DECREF(tmp_called_name_4);
            Py_DECREF(tmp_called_name_6);
            Py_DECREF(tmp_called_name_8);
            Py_DECREF(tmp_called_name_10);
            Py_DECREF(tmp_called_name_12);
            Py_DECREF(tmp_called_name_14);
            Py_DECREF(tmp_called_name_16);
            Py_DECREF(tmp_called_name_18);
            Py_DECREF(tmp_called_name_20);
            Py_DECREF(tmp_called_name_22);
            Py_DECREF(tmp_called_name_24);
            Py_DECREF(tmp_called_name_26);
            Py_DECREF(tmp_called_name_28);
            Py_DECREF(tmp_called_name_30);
            Py_DECREF(tmp_called_name_32);

            exception_lineno = 51;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_handle);
        tmp_called_name_37 = var_handle;
        frame_1e465c63423cecf32f0c62928e893560->m_frame.f_lineno = 52;
        tmp_called_name_36 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_37, mod_consts[23]);
        if (tmp_called_name_36 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_2);
            Py_DECREF(tmp_called_name_4);
            Py_DECREF(tmp_called_name_6);
            Py_DECREF(tmp_called_name_8);
            Py_DECREF(tmp_called_name_10);
            Py_DECREF(tmp_called_name_12);
            Py_DECREF(tmp_called_name_14);
            Py_DECREF(tmp_called_name_16);
            Py_DECREF(tmp_called_name_18);
            Py_DECREF(tmp_called_name_20);
            Py_DECREF(tmp_called_name_22);
            Py_DECREF(tmp_called_name_24);
            Py_DECREF(tmp_called_name_26);
            Py_DECREF(tmp_called_name_28);
            Py_DECREF(tmp_called_name_30);
            Py_DECREF(tmp_called_name_32);
            Py_DECREF(tmp_called_name_34);

            exception_lineno = 52;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_handle);
        tmp_called_name_39 = var_handle;
        frame_1e465c63423cecf32f0c62928e893560->m_frame.f_lineno = 53;
        tmp_called_name_38 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_39, mod_consts[24]);
        if (tmp_called_name_38 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_2);
            Py_DECREF(tmp_called_name_4);
            Py_DECREF(tmp_called_name_6);
            Py_DECREF(tmp_called_name_8);
            Py_DECREF(tmp_called_name_10);
            Py_DECREF(tmp_called_name_12);
            Py_DECREF(tmp_called_name_14);
            Py_DECREF(tmp_called_name_16);
            Py_DECREF(tmp_called_name_18);
            Py_DECREF(tmp_called_name_20);
            Py_DECREF(tmp_called_name_22);
            Py_DECREF(tmp_called_name_24);
            Py_DECREF(tmp_called_name_26);
            Py_DECREF(tmp_called_name_28);
            Py_DECREF(tmp_called_name_30);
            Py_DECREF(tmp_called_name_32);
            Py_DECREF(tmp_called_name_34);
            Py_DECREF(tmp_called_name_36);

            exception_lineno = 53;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_handle);
        tmp_called_name_41 = var_handle;
        frame_1e465c63423cecf32f0c62928e893560->m_frame.f_lineno = 54;
        tmp_called_name_40 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_41, mod_consts[25]);
        if (tmp_called_name_40 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_2);
            Py_DECREF(tmp_called_name_4);
            Py_DECREF(tmp_called_name_6);
            Py_DECREF(tmp_called_name_8);
            Py_DECREF(tmp_called_name_10);
            Py_DECREF(tmp_called_name_12);
            Py_DECREF(tmp_called_name_14);
            Py_DECREF(tmp_called_name_16);
            Py_DECREF(tmp_called_name_18);
            Py_DECREF(tmp_called_name_20);
            Py_DECREF(tmp_called_name_22);
            Py_DECREF(tmp_called_name_24);
            Py_DECREF(tmp_called_name_26);
            Py_DECREF(tmp_called_name_28);
            Py_DECREF(tmp_called_name_30);
            Py_DECREF(tmp_called_name_32);
            Py_DECREF(tmp_called_name_34);
            Py_DECREF(tmp_called_name_36);
            Py_DECREF(tmp_called_name_38);

            exception_lineno = 54;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_handle);
        tmp_called_name_43 = var_handle;
        frame_1e465c63423cecf32f0c62928e893560->m_frame.f_lineno = 55;
        tmp_called_name_42 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_43, mod_consts[26]);
        if (tmp_called_name_42 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_2);
            Py_DECREF(tmp_called_name_4);
            Py_DECREF(tmp_called_name_6);
            Py_DECREF(tmp_called_name_8);
            Py_DECREF(tmp_called_name_10);
            Py_DECREF(tmp_called_name_12);
            Py_DECREF(tmp_called_name_14);
            Py_DECREF(tmp_called_name_16);
            Py_DECREF(tmp_called_name_18);
            Py_DECREF(tmp_called_name_20);
            Py_DECREF(tmp_called_name_22);
            Py_DECREF(tmp_called_name_24);
            Py_DECREF(tmp_called_name_26);
            Py_DECREF(tmp_called_name_28);
            Py_DECREF(tmp_called_name_30);
            Py_DECREF(tmp_called_name_32);
            Py_DECREF(tmp_called_name_34);
            Py_DECREF(tmp_called_name_36);
            Py_DECREF(tmp_called_name_38);
            Py_DECREF(tmp_called_name_40);

            exception_lineno = 55;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_handle);
        tmp_called_name_45 = var_handle;
        frame_1e465c63423cecf32f0c62928e893560->m_frame.f_lineno = 56;
        tmp_called_name_44 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_45, mod_consts[27]);
        if (tmp_called_name_44 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_2);
            Py_DECREF(tmp_called_name_4);
            Py_DECREF(tmp_called_name_6);
            Py_DECREF(tmp_called_name_8);
            Py_DECREF(tmp_called_name_10);
            Py_DECREF(tmp_called_name_12);
            Py_DECREF(tmp_called_name_14);
            Py_DECREF(tmp_called_name_16);
            Py_DECREF(tmp_called_name_18);
            Py_DECREF(tmp_called_name_20);
            Py_DECREF(tmp_called_name_22);
            Py_DECREF(tmp_called_name_24);
            Py_DECREF(tmp_called_name_26);
            Py_DECREF(tmp_called_name_28);
            Py_DECREF(tmp_called_name_30);
            Py_DECREF(tmp_called_name_32);
            Py_DECREF(tmp_called_name_34);
            Py_DECREF(tmp_called_name_36);
            Py_DECREF(tmp_called_name_38);
            Py_DECREF(tmp_called_name_40);
            Py_DECREF(tmp_called_name_42);

            exception_lineno = 56;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_handle);
        tmp_called_name_47 = var_handle;
        frame_1e465c63423cecf32f0c62928e893560->m_frame.f_lineno = 57;
        tmp_called_name_46 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_47, mod_consts[28]);
        if (tmp_called_name_46 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_2);
            Py_DECREF(tmp_called_name_4);
            Py_DECREF(tmp_called_name_6);
            Py_DECREF(tmp_called_name_8);
            Py_DECREF(tmp_called_name_10);
            Py_DECREF(tmp_called_name_12);
            Py_DECREF(tmp_called_name_14);
            Py_DECREF(tmp_called_name_16);
            Py_DECREF(tmp_called_name_18);
            Py_DECREF(tmp_called_name_20);
            Py_DECREF(tmp_called_name_22);
            Py_DECREF(tmp_called_name_24);
            Py_DECREF(tmp_called_name_26);
            Py_DECREF(tmp_called_name_28);
            Py_DECREF(tmp_called_name_30);
            Py_DECREF(tmp_called_name_32);
            Py_DECREF(tmp_called_name_34);
            Py_DECREF(tmp_called_name_36);
            Py_DECREF(tmp_called_name_38);
            Py_DECREF(tmp_called_name_40);
            Py_DECREF(tmp_called_name_42);
            Py_DECREF(tmp_called_name_44);

            exception_lineno = 57;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_handle);
        tmp_called_name_49 = var_handle;
        frame_1e465c63423cecf32f0c62928e893560->m_frame.f_lineno = 58;
        tmp_called_name_48 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_49, mod_consts[29]);
        if (tmp_called_name_48 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_2);
            Py_DECREF(tmp_called_name_4);
            Py_DECREF(tmp_called_name_6);
            Py_DECREF(tmp_called_name_8);
            Py_DECREF(tmp_called_name_10);
            Py_DECREF(tmp_called_name_12);
            Py_DECREF(tmp_called_name_14);
            Py_DECREF(tmp_called_name_16);
            Py_DECREF(tmp_called_name_18);
            Py_DECREF(tmp_called_name_20);
            Py_DECREF(tmp_called_name_22);
            Py_DECREF(tmp_called_name_24);
            Py_DECREF(tmp_called_name_26);
            Py_DECREF(tmp_called_name_28);
            Py_DECREF(tmp_called_name_30);
            Py_DECREF(tmp_called_name_32);
            Py_DECREF(tmp_called_name_34);
            Py_DECREF(tmp_called_name_36);
            Py_DECREF(tmp_called_name_38);
            Py_DECREF(tmp_called_name_40);
            Py_DECREF(tmp_called_name_42);
            Py_DECREF(tmp_called_name_44);
            Py_DECREF(tmp_called_name_46);

            exception_lineno = 58;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_handle);
        tmp_called_name_51 = var_handle;
        frame_1e465c63423cecf32f0c62928e893560->m_frame.f_lineno = 59;
        tmp_called_name_50 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_51, mod_consts[30]);
        if (tmp_called_name_50 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_2);
            Py_DECREF(tmp_called_name_4);
            Py_DECREF(tmp_called_name_6);
            Py_DECREF(tmp_called_name_8);
            Py_DECREF(tmp_called_name_10);
            Py_DECREF(tmp_called_name_12);
            Py_DECREF(tmp_called_name_14);
            Py_DECREF(tmp_called_name_16);
            Py_DECREF(tmp_called_name_18);
            Py_DECREF(tmp_called_name_20);
            Py_DECREF(tmp_called_name_22);
            Py_DECREF(tmp_called_name_24);
            Py_DECREF(tmp_called_name_26);
            Py_DECREF(tmp_called_name_28);
            Py_DECREF(tmp_called_name_30);
            Py_DECREF(tmp_called_name_32);
            Py_DECREF(tmp_called_name_34);
            Py_DECREF(tmp_called_name_36);
            Py_DECREF(tmp_called_name_38);
            Py_DECREF(tmp_called_name_40);
            Py_DECREF(tmp_called_name_42);
            Py_DECREF(tmp_called_name_44);
            Py_DECREF(tmp_called_name_46);
            Py_DECREF(tmp_called_name_48);

            exception_lineno = 59;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_handle);
        tmp_called_name_53 = var_handle;
        frame_1e465c63423cecf32f0c62928e893560->m_frame.f_lineno = 60;
        tmp_called_name_52 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_53, mod_consts[31]);
        if (tmp_called_name_52 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_2);
            Py_DECREF(tmp_called_name_4);
            Py_DECREF(tmp_called_name_6);
            Py_DECREF(tmp_called_name_8);
            Py_DECREF(tmp_called_name_10);
            Py_DECREF(tmp_called_name_12);
            Py_DECREF(tmp_called_name_14);
            Py_DECREF(tmp_called_name_16);
            Py_DECREF(tmp_called_name_18);
            Py_DECREF(tmp_called_name_20);
            Py_DECREF(tmp_called_name_22);
            Py_DECREF(tmp_called_name_24);
            Py_DECREF(tmp_called_name_26);
            Py_DECREF(tmp_called_name_28);
            Py_DECREF(tmp_called_name_30);
            Py_DECREF(tmp_called_name_32);
            Py_DECREF(tmp_called_name_34);
            Py_DECREF(tmp_called_name_36);
            Py_DECREF(tmp_called_name_38);
            Py_DECREF(tmp_called_name_40);
            Py_DECREF(tmp_called_name_42);
            Py_DECREF(tmp_called_name_44);
            Py_DECREF(tmp_called_name_46);
            Py_DECREF(tmp_called_name_48);
            Py_DECREF(tmp_called_name_50);

            exception_lineno = 60;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_handle);
        tmp_called_name_55 = var_handle;
        frame_1e465c63423cecf32f0c62928e893560->m_frame.f_lineno = 61;
        tmp_called_name_54 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_55, mod_consts[32]);
        if (tmp_called_name_54 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_2);
            Py_DECREF(tmp_called_name_4);
            Py_DECREF(tmp_called_name_6);
            Py_DECREF(tmp_called_name_8);
            Py_DECREF(tmp_called_name_10);
            Py_DECREF(tmp_called_name_12);
            Py_DECREF(tmp_called_name_14);
            Py_DECREF(tmp_called_name_16);
            Py_DECREF(tmp_called_name_18);
            Py_DECREF(tmp_called_name_20);
            Py_DECREF(tmp_called_name_22);
            Py_DECREF(tmp_called_name_24);
            Py_DECREF(tmp_called_name_26);
            Py_DECREF(tmp_called_name_28);
            Py_DECREF(tmp_called_name_30);
            Py_DECREF(tmp_called_name_32);
            Py_DECREF(tmp_called_name_34);
            Py_DECREF(tmp_called_name_36);
            Py_DECREF(tmp_called_name_38);
            Py_DECREF(tmp_called_name_40);
            Py_DECREF(tmp_called_name_42);
            Py_DECREF(tmp_called_name_44);
            Py_DECREF(tmp_called_name_46);
            Py_DECREF(tmp_called_name_48);
            Py_DECREF(tmp_called_name_50);
            Py_DECREF(tmp_called_name_52);

            exception_lineno = 61;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_handle);
        tmp_called_name_57 = var_handle;
        frame_1e465c63423cecf32f0c62928e893560->m_frame.f_lineno = 62;
        tmp_called_name_56 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_57, mod_consts[33]);
        if (tmp_called_name_56 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_2);
            Py_DECREF(tmp_called_name_4);
            Py_DECREF(tmp_called_name_6);
            Py_DECREF(tmp_called_name_8);
            Py_DECREF(tmp_called_name_10);
            Py_DECREF(tmp_called_name_12);
            Py_DECREF(tmp_called_name_14);
            Py_DECREF(tmp_called_name_16);
            Py_DECREF(tmp_called_name_18);
            Py_DECREF(tmp_called_name_20);
            Py_DECREF(tmp_called_name_22);
            Py_DECREF(tmp_called_name_24);
            Py_DECREF(tmp_called_name_26);
            Py_DECREF(tmp_called_name_28);
            Py_DECREF(tmp_called_name_30);
            Py_DECREF(tmp_called_name_32);
            Py_DECREF(tmp_called_name_34);
            Py_DECREF(tmp_called_name_36);
            Py_DECREF(tmp_called_name_38);
            Py_DECREF(tmp_called_name_40);
            Py_DECREF(tmp_called_name_42);
            Py_DECREF(tmp_called_name_44);
            Py_DECREF(tmp_called_name_46);
            Py_DECREF(tmp_called_name_48);
            Py_DECREF(tmp_called_name_50);
            Py_DECREF(tmp_called_name_52);
            Py_DECREF(tmp_called_name_54);

            exception_lineno = 62;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_handle);
        tmp_called_name_59 = var_handle;
        frame_1e465c63423cecf32f0c62928e893560->m_frame.f_lineno = 63;
        tmp_called_name_58 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_59, mod_consts[34]);
        if (tmp_called_name_58 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_2);
            Py_DECREF(tmp_called_name_4);
            Py_DECREF(tmp_called_name_6);
            Py_DECREF(tmp_called_name_8);
            Py_DECREF(tmp_called_name_10);
            Py_DECREF(tmp_called_name_12);
            Py_DECREF(tmp_called_name_14);
            Py_DECREF(tmp_called_name_16);
            Py_DECREF(tmp_called_name_18);
            Py_DECREF(tmp_called_name_20);
            Py_DECREF(tmp_called_name_22);
            Py_DECREF(tmp_called_name_24);
            Py_DECREF(tmp_called_name_26);
            Py_DECREF(tmp_called_name_28);
            Py_DECREF(tmp_called_name_30);
            Py_DECREF(tmp_called_name_32);
            Py_DECREF(tmp_called_name_34);
            Py_DECREF(tmp_called_name_36);
            Py_DECREF(tmp_called_name_38);
            Py_DECREF(tmp_called_name_40);
            Py_DECREF(tmp_called_name_42);
            Py_DECREF(tmp_called_name_44);
            Py_DECREF(tmp_called_name_46);
            Py_DECREF(tmp_called_name_48);
            Py_DECREF(tmp_called_name_50);
            Py_DECREF(tmp_called_name_52);
            Py_DECREF(tmp_called_name_54);
            Py_DECREF(tmp_called_name_56);

            exception_lineno = 63;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_handle);
        tmp_called_name_61 = var_handle;
        frame_1e465c63423cecf32f0c62928e893560->m_frame.f_lineno = 64;
        tmp_called_name_60 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_61, mod_consts[35]);
        if (tmp_called_name_60 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_2);
            Py_DECREF(tmp_called_name_4);
            Py_DECREF(tmp_called_name_6);
            Py_DECREF(tmp_called_name_8);
            Py_DECREF(tmp_called_name_10);
            Py_DECREF(tmp_called_name_12);
            Py_DECREF(tmp_called_name_14);
            Py_DECREF(tmp_called_name_16);
            Py_DECREF(tmp_called_name_18);
            Py_DECREF(tmp_called_name_20);
            Py_DECREF(tmp_called_name_22);
            Py_DECREF(tmp_called_name_24);
            Py_DECREF(tmp_called_name_26);
            Py_DECREF(tmp_called_name_28);
            Py_DECREF(tmp_called_name_30);
            Py_DECREF(tmp_called_name_32);
            Py_DECREF(tmp_called_name_34);
            Py_DECREF(tmp_called_name_36);
            Py_DECREF(tmp_called_name_38);
            Py_DECREF(tmp_called_name_40);
            Py_DECREF(tmp_called_name_42);
            Py_DECREF(tmp_called_name_44);
            Py_DECREF(tmp_called_name_46);
            Py_DECREF(tmp_called_name_48);
            Py_DECREF(tmp_called_name_50);
            Py_DECREF(tmp_called_name_52);
            Py_DECREF(tmp_called_name_54);
            Py_DECREF(tmp_called_name_56);
            Py_DECREF(tmp_called_name_58);

            exception_lineno = 64;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_handle);
        tmp_called_name_63 = var_handle;
        frame_1e465c63423cecf32f0c62928e893560->m_frame.f_lineno = 65;
        tmp_called_name_62 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_63, mod_consts[36]);
        if (tmp_called_name_62 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_2);
            Py_DECREF(tmp_called_name_4);
            Py_DECREF(tmp_called_name_6);
            Py_DECREF(tmp_called_name_8);
            Py_DECREF(tmp_called_name_10);
            Py_DECREF(tmp_called_name_12);
            Py_DECREF(tmp_called_name_14);
            Py_DECREF(tmp_called_name_16);
            Py_DECREF(tmp_called_name_18);
            Py_DECREF(tmp_called_name_20);
            Py_DECREF(tmp_called_name_22);
            Py_DECREF(tmp_called_name_24);
            Py_DECREF(tmp_called_name_26);
            Py_DECREF(tmp_called_name_28);
            Py_DECREF(tmp_called_name_30);
            Py_DECREF(tmp_called_name_32);
            Py_DECREF(tmp_called_name_34);
            Py_DECREF(tmp_called_name_36);
            Py_DECREF(tmp_called_name_38);
            Py_DECREF(tmp_called_name_40);
            Py_DECREF(tmp_called_name_42);
            Py_DECREF(tmp_called_name_44);
            Py_DECREF(tmp_called_name_46);
            Py_DECREF(tmp_called_name_48);
            Py_DECREF(tmp_called_name_50);
            Py_DECREF(tmp_called_name_52);
            Py_DECREF(tmp_called_name_54);
            Py_DECREF(tmp_called_name_56);
            Py_DECREF(tmp_called_name_58);
            Py_DECREF(tmp_called_name_60);

            exception_lineno = 65;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_handle);
        tmp_called_name_65 = var_handle;
        frame_1e465c63423cecf32f0c62928e893560->m_frame.f_lineno = 66;
        tmp_called_name_64 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_65, mod_consts[37]);
        if (tmp_called_name_64 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_2);
            Py_DECREF(tmp_called_name_4);
            Py_DECREF(tmp_called_name_6);
            Py_DECREF(tmp_called_name_8);
            Py_DECREF(tmp_called_name_10);
            Py_DECREF(tmp_called_name_12);
            Py_DECREF(tmp_called_name_14);
            Py_DECREF(tmp_called_name_16);
            Py_DECREF(tmp_called_name_18);
            Py_DECREF(tmp_called_name_20);
            Py_DECREF(tmp_called_name_22);
            Py_DECREF(tmp_called_name_24);
            Py_DECREF(tmp_called_name_26);
            Py_DECREF(tmp_called_name_28);
            Py_DECREF(tmp_called_name_30);
            Py_DECREF(tmp_called_name_32);
            Py_DECREF(tmp_called_name_34);
            Py_DECREF(tmp_called_name_36);
            Py_DECREF(tmp_called_name_38);
            Py_DECREF(tmp_called_name_40);
            Py_DECREF(tmp_called_name_42);
            Py_DECREF(tmp_called_name_44);
            Py_DECREF(tmp_called_name_46);
            Py_DECREF(tmp_called_name_48);
            Py_DECREF(tmp_called_name_50);
            Py_DECREF(tmp_called_name_52);
            Py_DECREF(tmp_called_name_54);
            Py_DECREF(tmp_called_name_56);
            Py_DECREF(tmp_called_name_58);
            Py_DECREF(tmp_called_name_60);
            Py_DECREF(tmp_called_name_62);

            exception_lineno = 66;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_handle);
        tmp_called_name_67 = var_handle;
        frame_1e465c63423cecf32f0c62928e893560->m_frame.f_lineno = 67;
        tmp_called_name_66 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_67, mod_consts[38]);
        if (tmp_called_name_66 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_2);
            Py_DECREF(tmp_called_name_4);
            Py_DECREF(tmp_called_name_6);
            Py_DECREF(tmp_called_name_8);
            Py_DECREF(tmp_called_name_10);
            Py_DECREF(tmp_called_name_12);
            Py_DECREF(tmp_called_name_14);
            Py_DECREF(tmp_called_name_16);
            Py_DECREF(tmp_called_name_18);
            Py_DECREF(tmp_called_name_20);
            Py_DECREF(tmp_called_name_22);
            Py_DECREF(tmp_called_name_24);
            Py_DECREF(tmp_called_name_26);
            Py_DECREF(tmp_called_name_28);
            Py_DECREF(tmp_called_name_30);
            Py_DECREF(tmp_called_name_32);
            Py_DECREF(tmp_called_name_34);
            Py_DECREF(tmp_called_name_36);
            Py_DECREF(tmp_called_name_38);
            Py_DECREF(tmp_called_name_40);
            Py_DECREF(tmp_called_name_42);
            Py_DECREF(tmp_called_name_44);
            Py_DECREF(tmp_called_name_46);
            Py_DECREF(tmp_called_name_48);
            Py_DECREF(tmp_called_name_50);
            Py_DECREF(tmp_called_name_52);
            Py_DECREF(tmp_called_name_54);
            Py_DECREF(tmp_called_name_56);
            Py_DECREF(tmp_called_name_58);
            Py_DECREF(tmp_called_name_60);
            Py_DECREF(tmp_called_name_62);
            Py_DECREF(tmp_called_name_64);

            exception_lineno = 67;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_handle);
        tmp_called_name_69 = var_handle;
        frame_1e465c63423cecf32f0c62928e893560->m_frame.f_lineno = 68;
        tmp_called_name_68 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_69, mod_consts[39]);
        if (tmp_called_name_68 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_2);
            Py_DECREF(tmp_called_name_4);
            Py_DECREF(tmp_called_name_6);
            Py_DECREF(tmp_called_name_8);
            Py_DECREF(tmp_called_name_10);
            Py_DECREF(tmp_called_name_12);
            Py_DECREF(tmp_called_name_14);
            Py_DECREF(tmp_called_name_16);
            Py_DECREF(tmp_called_name_18);
            Py_DECREF(tmp_called_name_20);
            Py_DECREF(tmp_called_name_22);
            Py_DECREF(tmp_called_name_24);
            Py_DECREF(tmp_called_name_26);
            Py_DECREF(tmp_called_name_28);
            Py_DECREF(tmp_called_name_30);
            Py_DECREF(tmp_called_name_32);
            Py_DECREF(tmp_called_name_34);
            Py_DECREF(tmp_called_name_36);
            Py_DECREF(tmp_called_name_38);
            Py_DECREF(tmp_called_name_40);
            Py_DECREF(tmp_called_name_42);
            Py_DECREF(tmp_called_name_44);
            Py_DECREF(tmp_called_name_46);
            Py_DECREF(tmp_called_name_48);
            Py_DECREF(tmp_called_name_50);
            Py_DECREF(tmp_called_name_52);
            Py_DECREF(tmp_called_name_54);
            Py_DECREF(tmp_called_name_56);
            Py_DECREF(tmp_called_name_58);
            Py_DECREF(tmp_called_name_60);
            Py_DECREF(tmp_called_name_62);
            Py_DECREF(tmp_called_name_64);
            Py_DECREF(tmp_called_name_66);

            exception_lineno = 68;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_handle);
        tmp_called_name_71 = var_handle;
        frame_1e465c63423cecf32f0c62928e893560->m_frame.f_lineno = 69;
        tmp_called_name_70 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_71, mod_consts[40]);
        if (tmp_called_name_70 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_2);
            Py_DECREF(tmp_called_name_4);
            Py_DECREF(tmp_called_name_6);
            Py_DECREF(tmp_called_name_8);
            Py_DECREF(tmp_called_name_10);
            Py_DECREF(tmp_called_name_12);
            Py_DECREF(tmp_called_name_14);
            Py_DECREF(tmp_called_name_16);
            Py_DECREF(tmp_called_name_18);
            Py_DECREF(tmp_called_name_20);
            Py_DECREF(tmp_called_name_22);
            Py_DECREF(tmp_called_name_24);
            Py_DECREF(tmp_called_name_26);
            Py_DECREF(tmp_called_name_28);
            Py_DECREF(tmp_called_name_30);
            Py_DECREF(tmp_called_name_32);
            Py_DECREF(tmp_called_name_34);
            Py_DECREF(tmp_called_name_36);
            Py_DECREF(tmp_called_name_38);
            Py_DECREF(tmp_called_name_40);
            Py_DECREF(tmp_called_name_42);
            Py_DECREF(tmp_called_name_44);
            Py_DECREF(tmp_called_name_46);
            Py_DECREF(tmp_called_name_48);
            Py_DECREF(tmp_called_name_50);
            Py_DECREF(tmp_called_name_52);
            Py_DECREF(tmp_called_name_54);
            Py_DECREF(tmp_called_name_56);
            Py_DECREF(tmp_called_name_58);
            Py_DECREF(tmp_called_name_60);
            Py_DECREF(tmp_called_name_62);
            Py_DECREF(tmp_called_name_64);
            Py_DECREF(tmp_called_name_66);
            Py_DECREF(tmp_called_name_68);

            exception_lineno = 69;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_handle);
        tmp_called_name_73 = var_handle;
        frame_1e465c63423cecf32f0c62928e893560->m_frame.f_lineno = 70;
        tmp_called_name_72 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_73, mod_consts[41]);
        if (tmp_called_name_72 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_2);
            Py_DECREF(tmp_called_name_4);
            Py_DECREF(tmp_called_name_6);
            Py_DECREF(tmp_called_name_8);
            Py_DECREF(tmp_called_name_10);
            Py_DECREF(tmp_called_name_12);
            Py_DECREF(tmp_called_name_14);
            Py_DECREF(tmp_called_name_16);
            Py_DECREF(tmp_called_name_18);
            Py_DECREF(tmp_called_name_20);
            Py_DECREF(tmp_called_name_22);
            Py_DECREF(tmp_called_name_24);
            Py_DECREF(tmp_called_name_26);
            Py_DECREF(tmp_called_name_28);
            Py_DECREF(tmp_called_name_30);
            Py_DECREF(tmp_called_name_32);
            Py_DECREF(tmp_called_name_34);
            Py_DECREF(tmp_called_name_36);
            Py_DECREF(tmp_called_name_38);
            Py_DECREF(tmp_called_name_40);
            Py_DECREF(tmp_called_name_42);
            Py_DECREF(tmp_called_name_44);
            Py_DECREF(tmp_called_name_46);
            Py_DECREF(tmp_called_name_48);
            Py_DECREF(tmp_called_name_50);
            Py_DECREF(tmp_called_name_52);
            Py_DECREF(tmp_called_name_54);
            Py_DECREF(tmp_called_name_56);
            Py_DECREF(tmp_called_name_58);
            Py_DECREF(tmp_called_name_60);
            Py_DECREF(tmp_called_name_62);
            Py_DECREF(tmp_called_name_64);
            Py_DECREF(tmp_called_name_66);
            Py_DECREF(tmp_called_name_68);
            Py_DECREF(tmp_called_name_70);

            exception_lineno = 70;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_handle);
        tmp_called_name_75 = var_handle;
        frame_1e465c63423cecf32f0c62928e893560->m_frame.f_lineno = 71;
        tmp_called_name_74 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_75, mod_consts[42]);
        if (tmp_called_name_74 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_2);
            Py_DECREF(tmp_called_name_4);
            Py_DECREF(tmp_called_name_6);
            Py_DECREF(tmp_called_name_8);
            Py_DECREF(tmp_called_name_10);
            Py_DECREF(tmp_called_name_12);
            Py_DECREF(tmp_called_name_14);
            Py_DECREF(tmp_called_name_16);
            Py_DECREF(tmp_called_name_18);
            Py_DECREF(tmp_called_name_20);
            Py_DECREF(tmp_called_name_22);
            Py_DECREF(tmp_called_name_24);
            Py_DECREF(tmp_called_name_26);
            Py_DECREF(tmp_called_name_28);
            Py_DECREF(tmp_called_name_30);
            Py_DECREF(tmp_called_name_32);
            Py_DECREF(tmp_called_name_34);
            Py_DECREF(tmp_called_name_36);
            Py_DECREF(tmp_called_name_38);
            Py_DECREF(tmp_called_name_40);
            Py_DECREF(tmp_called_name_42);
            Py_DECREF(tmp_called_name_44);
            Py_DECREF(tmp_called_name_46);
            Py_DECREF(tmp_called_name_48);
            Py_DECREF(tmp_called_name_50);
            Py_DECREF(tmp_called_name_52);
            Py_DECREF(tmp_called_name_54);
            Py_DECREF(tmp_called_name_56);
            Py_DECREF(tmp_called_name_58);
            Py_DECREF(tmp_called_name_60);
            Py_DECREF(tmp_called_name_62);
            Py_DECREF(tmp_called_name_64);
            Py_DECREF(tmp_called_name_66);
            Py_DECREF(tmp_called_name_68);
            Py_DECREF(tmp_called_name_70);
            Py_DECREF(tmp_called_name_72);

            exception_lineno = 71;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_handle);
        tmp_called_name_77 = var_handle;
        frame_1e465c63423cecf32f0c62928e893560->m_frame.f_lineno = 72;
        tmp_called_name_76 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_77, mod_consts[43]);
        if (tmp_called_name_76 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_2);
            Py_DECREF(tmp_called_name_4);
            Py_DECREF(tmp_called_name_6);
            Py_DECREF(tmp_called_name_8);
            Py_DECREF(tmp_called_name_10);
            Py_DECREF(tmp_called_name_12);
            Py_DECREF(tmp_called_name_14);
            Py_DECREF(tmp_called_name_16);
            Py_DECREF(tmp_called_name_18);
            Py_DECREF(tmp_called_name_20);
            Py_DECREF(tmp_called_name_22);
            Py_DECREF(tmp_called_name_24);
            Py_DECREF(tmp_called_name_26);
            Py_DECREF(tmp_called_name_28);
            Py_DECREF(tmp_called_name_30);
            Py_DECREF(tmp_called_name_32);
            Py_DECREF(tmp_called_name_34);
            Py_DECREF(tmp_called_name_36);
            Py_DECREF(tmp_called_name_38);
            Py_DECREF(tmp_called_name_40);
            Py_DECREF(tmp_called_name_42);
            Py_DECREF(tmp_called_name_44);
            Py_DECREF(tmp_called_name_46);
            Py_DECREF(tmp_called_name_48);
            Py_DECREF(tmp_called_name_50);
            Py_DECREF(tmp_called_name_52);
            Py_DECREF(tmp_called_name_54);
            Py_DECREF(tmp_called_name_56);
            Py_DECREF(tmp_called_name_58);
            Py_DECREF(tmp_called_name_60);
            Py_DECREF(tmp_called_name_62);
            Py_DECREF(tmp_called_name_64);
            Py_DECREF(tmp_called_name_66);
            Py_DECREF(tmp_called_name_68);
            Py_DECREF(tmp_called_name_70);
            Py_DECREF(tmp_called_name_72);
            Py_DECREF(tmp_called_name_74);

            exception_lineno = 72;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_handle);
        tmp_called_name_79 = var_handle;
        frame_1e465c63423cecf32f0c62928e893560->m_frame.f_lineno = 73;
        tmp_called_name_78 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_79, mod_consts[44]);
        if (tmp_called_name_78 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_2);
            Py_DECREF(tmp_called_name_4);
            Py_DECREF(tmp_called_name_6);
            Py_DECREF(tmp_called_name_8);
            Py_DECREF(tmp_called_name_10);
            Py_DECREF(tmp_called_name_12);
            Py_DECREF(tmp_called_name_14);
            Py_DECREF(tmp_called_name_16);
            Py_DECREF(tmp_called_name_18);
            Py_DECREF(tmp_called_name_20);
            Py_DECREF(tmp_called_name_22);
            Py_DECREF(tmp_called_name_24);
            Py_DECREF(tmp_called_name_26);
            Py_DECREF(tmp_called_name_28);
            Py_DECREF(tmp_called_name_30);
            Py_DECREF(tmp_called_name_32);
            Py_DECREF(tmp_called_name_34);
            Py_DECREF(tmp_called_name_36);
            Py_DECREF(tmp_called_name_38);
            Py_DECREF(tmp_called_name_40);
            Py_DECREF(tmp_called_name_42);
            Py_DECREF(tmp_called_name_44);
            Py_DECREF(tmp_called_name_46);
            Py_DECREF(tmp_called_name_48);
            Py_DECREF(tmp_called_name_50);
            Py_DECREF(tmp_called_name_52);
            Py_DECREF(tmp_called_name_54);
            Py_DECREF(tmp_called_name_56);
            Py_DECREF(tmp_called_name_58);
            Py_DECREF(tmp_called_name_60);
            Py_DECREF(tmp_called_name_62);
            Py_DECREF(tmp_called_name_64);
            Py_DECREF(tmp_called_name_66);
            Py_DECREF(tmp_called_name_68);
            Py_DECREF(tmp_called_name_70);
            Py_DECREF(tmp_called_name_72);
            Py_DECREF(tmp_called_name_74);
            Py_DECREF(tmp_called_name_76);

            exception_lineno = 73;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_handle);
        tmp_called_name_81 = var_handle;
        frame_1e465c63423cecf32f0c62928e893560->m_frame.f_lineno = 74;
        tmp_called_name_80 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_81, mod_consts[45]);
        if (tmp_called_name_80 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_2);
            Py_DECREF(tmp_called_name_4);
            Py_DECREF(tmp_called_name_6);
            Py_DECREF(tmp_called_name_8);
            Py_DECREF(tmp_called_name_10);
            Py_DECREF(tmp_called_name_12);
            Py_DECREF(tmp_called_name_14);
            Py_DECREF(tmp_called_name_16);
            Py_DECREF(tmp_called_name_18);
            Py_DECREF(tmp_called_name_20);
            Py_DECREF(tmp_called_name_22);
            Py_DECREF(tmp_called_name_24);
            Py_DECREF(tmp_called_name_26);
            Py_DECREF(tmp_called_name_28);
            Py_DECREF(tmp_called_name_30);
            Py_DECREF(tmp_called_name_32);
            Py_DECREF(tmp_called_name_34);
            Py_DECREF(tmp_called_name_36);
            Py_DECREF(tmp_called_name_38);
            Py_DECREF(tmp_called_name_40);
            Py_DECREF(tmp_called_name_42);
            Py_DECREF(tmp_called_name_44);
            Py_DECREF(tmp_called_name_46);
            Py_DECREF(tmp_called_name_48);
            Py_DECREF(tmp_called_name_50);
            Py_DECREF(tmp_called_name_52);
            Py_DECREF(tmp_called_name_54);
            Py_DECREF(tmp_called_name_56);
            Py_DECREF(tmp_called_name_58);
            Py_DECREF(tmp_called_name_60);
            Py_DECREF(tmp_called_name_62);
            Py_DECREF(tmp_called_name_64);
            Py_DECREF(tmp_called_name_66);
            Py_DECREF(tmp_called_name_68);
            Py_DECREF(tmp_called_name_70);
            Py_DECREF(tmp_called_name_72);
            Py_DECREF(tmp_called_name_74);
            Py_DECREF(tmp_called_name_76);
            Py_DECREF(tmp_called_name_78);

            exception_lineno = 74;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_handle);
        tmp_called_name_83 = var_handle;
        frame_1e465c63423cecf32f0c62928e893560->m_frame.f_lineno = 75;
        tmp_called_name_82 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_83, mod_consts[46]);
        if (tmp_called_name_82 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_2);
            Py_DECREF(tmp_called_name_4);
            Py_DECREF(tmp_called_name_6);
            Py_DECREF(tmp_called_name_8);
            Py_DECREF(tmp_called_name_10);
            Py_DECREF(tmp_called_name_12);
            Py_DECREF(tmp_called_name_14);
            Py_DECREF(tmp_called_name_16);
            Py_DECREF(tmp_called_name_18);
            Py_DECREF(tmp_called_name_20);
            Py_DECREF(tmp_called_name_22);
            Py_DECREF(tmp_called_name_24);
            Py_DECREF(tmp_called_name_26);
            Py_DECREF(tmp_called_name_28);
            Py_DECREF(tmp_called_name_30);
            Py_DECREF(tmp_called_name_32);
            Py_DECREF(tmp_called_name_34);
            Py_DECREF(tmp_called_name_36);
            Py_DECREF(tmp_called_name_38);
            Py_DECREF(tmp_called_name_40);
            Py_DECREF(tmp_called_name_42);
            Py_DECREF(tmp_called_name_44);
            Py_DECREF(tmp_called_name_46);
            Py_DECREF(tmp_called_name_48);
            Py_DECREF(tmp_called_name_50);
            Py_DECREF(tmp_called_name_52);
            Py_DECREF(tmp_called_name_54);
            Py_DECREF(tmp_called_name_56);
            Py_DECREF(tmp_called_name_58);
            Py_DECREF(tmp_called_name_60);
            Py_DECREF(tmp_called_name_62);
            Py_DECREF(tmp_called_name_64);
            Py_DECREF(tmp_called_name_66);
            Py_DECREF(tmp_called_name_68);
            Py_DECREF(tmp_called_name_70);
            Py_DECREF(tmp_called_name_72);
            Py_DECREF(tmp_called_name_74);
            Py_DECREF(tmp_called_name_76);
            Py_DECREF(tmp_called_name_78);
            Py_DECREF(tmp_called_name_80);

            exception_lineno = 75;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_handle);
        tmp_called_name_85 = var_handle;
        frame_1e465c63423cecf32f0c62928e893560->m_frame.f_lineno = 76;
        tmp_called_name_84 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_85, mod_consts[47]);
        if (tmp_called_name_84 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_2);
            Py_DECREF(tmp_called_name_4);
            Py_DECREF(tmp_called_name_6);
            Py_DECREF(tmp_called_name_8);
            Py_DECREF(tmp_called_name_10);
            Py_DECREF(tmp_called_name_12);
            Py_DECREF(tmp_called_name_14);
            Py_DECREF(tmp_called_name_16);
            Py_DECREF(tmp_called_name_18);
            Py_DECREF(tmp_called_name_20);
            Py_DECREF(tmp_called_name_22);
            Py_DECREF(tmp_called_name_24);
            Py_DECREF(tmp_called_name_26);
            Py_DECREF(tmp_called_name_28);
            Py_DECREF(tmp_called_name_30);
            Py_DECREF(tmp_called_name_32);
            Py_DECREF(tmp_called_name_34);
            Py_DECREF(tmp_called_name_36);
            Py_DECREF(tmp_called_name_38);
            Py_DECREF(tmp_called_name_40);
            Py_DECREF(tmp_called_name_42);
            Py_DECREF(tmp_called_name_44);
            Py_DECREF(tmp_called_name_46);
            Py_DECREF(tmp_called_name_48);
            Py_DECREF(tmp_called_name_50);
            Py_DECREF(tmp_called_name_52);
            Py_DECREF(tmp_called_name_54);
            Py_DECREF(tmp_called_name_56);
            Py_DECREF(tmp_called_name_58);
            Py_DECREF(tmp_called_name_60);
            Py_DECREF(tmp_called_name_62);
            Py_DECREF(tmp_called_name_64);
            Py_DECREF(tmp_called_name_66);
            Py_DECREF(tmp_called_name_68);
            Py_DECREF(tmp_called_name_70);
            Py_DECREF(tmp_called_name_72);
            Py_DECREF(tmp_called_name_74);
            Py_DECREF(tmp_called_name_76);
            Py_DECREF(tmp_called_name_78);
            Py_DECREF(tmp_called_name_80);
            Py_DECREF(tmp_called_name_82);

            exception_lineno = 76;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_handle);
        tmp_called_name_87 = var_handle;
        frame_1e465c63423cecf32f0c62928e893560->m_frame.f_lineno = 77;
        tmp_called_name_86 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_87, mod_consts[48]);
        if (tmp_called_name_86 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_2);
            Py_DECREF(tmp_called_name_4);
            Py_DECREF(tmp_called_name_6);
            Py_DECREF(tmp_called_name_8);
            Py_DECREF(tmp_called_name_10);
            Py_DECREF(tmp_called_name_12);
            Py_DECREF(tmp_called_name_14);
            Py_DECREF(tmp_called_name_16);
            Py_DECREF(tmp_called_name_18);
            Py_DECREF(tmp_called_name_20);
            Py_DECREF(tmp_called_name_22);
            Py_DECREF(tmp_called_name_24);
            Py_DECREF(tmp_called_name_26);
            Py_DECREF(tmp_called_name_28);
            Py_DECREF(tmp_called_name_30);
            Py_DECREF(tmp_called_name_32);
            Py_DECREF(tmp_called_name_34);
            Py_DECREF(tmp_called_name_36);
            Py_DECREF(tmp_called_name_38);
            Py_DECREF(tmp_called_name_40);
            Py_DECREF(tmp_called_name_42);
            Py_DECREF(tmp_called_name_44);
            Py_DECREF(tmp_called_name_46);
            Py_DECREF(tmp_called_name_48);
            Py_DECREF(tmp_called_name_50);
            Py_DECREF(tmp_called_name_52);
            Py_DECREF(tmp_called_name_54);
            Py_DECREF(tmp_called_name_56);
            Py_DECREF(tmp_called_name_58);
            Py_DECREF(tmp_called_name_60);
            Py_DECREF(tmp_called_name_62);
            Py_DECREF(tmp_called_name_64);
            Py_DECREF(tmp_called_name_66);
            Py_DECREF(tmp_called_name_68);
            Py_DECREF(tmp_called_name_70);
            Py_DECREF(tmp_called_name_72);
            Py_DECREF(tmp_called_name_74);
            Py_DECREF(tmp_called_name_76);
            Py_DECREF(tmp_called_name_78);
            Py_DECREF(tmp_called_name_80);
            Py_DECREF(tmp_called_name_82);
            Py_DECREF(tmp_called_name_84);

            exception_lineno = 77;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_handle);
        tmp_called_name_89 = var_handle;
        frame_1e465c63423cecf32f0c62928e893560->m_frame.f_lineno = 78;
        tmp_called_name_88 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_89, mod_consts[49]);
        if (tmp_called_name_88 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_2);
            Py_DECREF(tmp_called_name_4);
            Py_DECREF(tmp_called_name_6);
            Py_DECREF(tmp_called_name_8);
            Py_DECREF(tmp_called_name_10);
            Py_DECREF(tmp_called_name_12);
            Py_DECREF(tmp_called_name_14);
            Py_DECREF(tmp_called_name_16);
            Py_DECREF(tmp_called_name_18);
            Py_DECREF(tmp_called_name_20);
            Py_DECREF(tmp_called_name_22);
            Py_DECREF(tmp_called_name_24);
            Py_DECREF(tmp_called_name_26);
            Py_DECREF(tmp_called_name_28);
            Py_DECREF(tmp_called_name_30);
            Py_DECREF(tmp_called_name_32);
            Py_DECREF(tmp_called_name_34);
            Py_DECREF(tmp_called_name_36);
            Py_DECREF(tmp_called_name_38);
            Py_DECREF(tmp_called_name_40);
            Py_DECREF(tmp_called_name_42);
            Py_DECREF(tmp_called_name_44);
            Py_DECREF(tmp_called_name_46);
            Py_DECREF(tmp_called_name_48);
            Py_DECREF(tmp_called_name_50);
            Py_DECREF(tmp_called_name_52);
            Py_DECREF(tmp_called_name_54);
            Py_DECREF(tmp_called_name_56);
            Py_DECREF(tmp_called_name_58);
            Py_DECREF(tmp_called_name_60);
            Py_DECREF(tmp_called_name_62);
            Py_DECREF(tmp_called_name_64);
            Py_DECREF(tmp_called_name_66);
            Py_DECREF(tmp_called_name_68);
            Py_DECREF(tmp_called_name_70);
            Py_DECREF(tmp_called_name_72);
            Py_DECREF(tmp_called_name_74);
            Py_DECREF(tmp_called_name_76);
            Py_DECREF(tmp_called_name_78);
            Py_DECREF(tmp_called_name_80);
            Py_DECREF(tmp_called_name_82);
            Py_DECREF(tmp_called_name_84);
            Py_DECREF(tmp_called_name_86);

            exception_lineno = 78;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_handle);
        tmp_called_name_91 = var_handle;
        frame_1e465c63423cecf32f0c62928e893560->m_frame.f_lineno = 79;
        tmp_called_name_90 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_91, mod_consts[50]);
        if (tmp_called_name_90 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_2);
            Py_DECREF(tmp_called_name_4);
            Py_DECREF(tmp_called_name_6);
            Py_DECREF(tmp_called_name_8);
            Py_DECREF(tmp_called_name_10);
            Py_DECREF(tmp_called_name_12);
            Py_DECREF(tmp_called_name_14);
            Py_DECREF(tmp_called_name_16);
            Py_DECREF(tmp_called_name_18);
            Py_DECREF(tmp_called_name_20);
            Py_DECREF(tmp_called_name_22);
            Py_DECREF(tmp_called_name_24);
            Py_DECREF(tmp_called_name_26);
            Py_DECREF(tmp_called_name_28);
            Py_DECREF(tmp_called_name_30);
            Py_DECREF(tmp_called_name_32);
            Py_DECREF(tmp_called_name_34);
            Py_DECREF(tmp_called_name_36);
            Py_DECREF(tmp_called_name_38);
            Py_DECREF(tmp_called_name_40);
            Py_DECREF(tmp_called_name_42);
            Py_DECREF(tmp_called_name_44);
            Py_DECREF(tmp_called_name_46);
            Py_DECREF(tmp_called_name_48);
            Py_DECREF(tmp_called_name_50);
            Py_DECREF(tmp_called_name_52);
            Py_DECREF(tmp_called_name_54);
            Py_DECREF(tmp_called_name_56);
            Py_DECREF(tmp_called_name_58);
            Py_DECREF(tmp_called_name_60);
            Py_DECREF(tmp_called_name_62);
            Py_DECREF(tmp_called_name_64);
            Py_DECREF(tmp_called_name_66);
            Py_DECREF(tmp_called_name_68);
            Py_DECREF(tmp_called_name_70);
            Py_DECREF(tmp_called_name_72);
            Py_DECREF(tmp_called_name_74);
            Py_DECREF(tmp_called_name_76);
            Py_DECREF(tmp_called_name_78);
            Py_DECREF(tmp_called_name_80);
            Py_DECREF(tmp_called_name_82);
            Py_DECREF(tmp_called_name_84);
            Py_DECREF(tmp_called_name_86);
            Py_DECREF(tmp_called_name_88);

            exception_lineno = 79;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_handle);
        tmp_called_name_93 = var_handle;
        frame_1e465c63423cecf32f0c62928e893560->m_frame.f_lineno = 80;
        tmp_called_name_92 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_93, mod_consts[51]);
        if (tmp_called_name_92 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_2);
            Py_DECREF(tmp_called_name_4);
            Py_DECREF(tmp_called_name_6);
            Py_DECREF(tmp_called_name_8);
            Py_DECREF(tmp_called_name_10);
            Py_DECREF(tmp_called_name_12);
            Py_DECREF(tmp_called_name_14);
            Py_DECREF(tmp_called_name_16);
            Py_DECREF(tmp_called_name_18);
            Py_DECREF(tmp_called_name_20);
            Py_DECREF(tmp_called_name_22);
            Py_DECREF(tmp_called_name_24);
            Py_DECREF(tmp_called_name_26);
            Py_DECREF(tmp_called_name_28);
            Py_DECREF(tmp_called_name_30);
            Py_DECREF(tmp_called_name_32);
            Py_DECREF(tmp_called_name_34);
            Py_DECREF(tmp_called_name_36);
            Py_DECREF(tmp_called_name_38);
            Py_DECREF(tmp_called_name_40);
            Py_DECREF(tmp_called_name_42);
            Py_DECREF(tmp_called_name_44);
            Py_DECREF(tmp_called_name_46);
            Py_DECREF(tmp_called_name_48);
            Py_DECREF(tmp_called_name_50);
            Py_DECREF(tmp_called_name_52);
            Py_DECREF(tmp_called_name_54);
            Py_DECREF(tmp_called_name_56);
            Py_DECREF(tmp_called_name_58);
            Py_DECREF(tmp_called_name_60);
            Py_DECREF(tmp_called_name_62);
            Py_DECREF(tmp_called_name_64);
            Py_DECREF(tmp_called_name_66);
            Py_DECREF(tmp_called_name_68);
            Py_DECREF(tmp_called_name_70);
            Py_DECREF(tmp_called_name_72);
            Py_DECREF(tmp_called_name_74);
            Py_DECREF(tmp_called_name_76);
            Py_DECREF(tmp_called_name_78);
            Py_DECREF(tmp_called_name_80);
            Py_DECREF(tmp_called_name_82);
            Py_DECREF(tmp_called_name_84);
            Py_DECREF(tmp_called_name_86);
            Py_DECREF(tmp_called_name_88);
            Py_DECREF(tmp_called_name_90);

            exception_lineno = 80;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_handle);
        tmp_called_name_95 = var_handle;
        frame_1e465c63423cecf32f0c62928e893560->m_frame.f_lineno = 81;
        tmp_called_name_94 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_95, mod_consts[52]);
        if (tmp_called_name_94 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_2);
            Py_DECREF(tmp_called_name_4);
            Py_DECREF(tmp_called_name_6);
            Py_DECREF(tmp_called_name_8);
            Py_DECREF(tmp_called_name_10);
            Py_DECREF(tmp_called_name_12);
            Py_DECREF(tmp_called_name_14);
            Py_DECREF(tmp_called_name_16);
            Py_DECREF(tmp_called_name_18);
            Py_DECREF(tmp_called_name_20);
            Py_DECREF(tmp_called_name_22);
            Py_DECREF(tmp_called_name_24);
            Py_DECREF(tmp_called_name_26);
            Py_DECREF(tmp_called_name_28);
            Py_DECREF(tmp_called_name_30);
            Py_DECREF(tmp_called_name_32);
            Py_DECREF(tmp_called_name_34);
            Py_DECREF(tmp_called_name_36);
            Py_DECREF(tmp_called_name_38);
            Py_DECREF(tmp_called_name_40);
            Py_DECREF(tmp_called_name_42);
            Py_DECREF(tmp_called_name_44);
            Py_DECREF(tmp_called_name_46);
            Py_DECREF(tmp_called_name_48);
            Py_DECREF(tmp_called_name_50);
            Py_DECREF(tmp_called_name_52);
            Py_DECREF(tmp_called_name_54);
            Py_DECREF(tmp_called_name_56);
            Py_DECREF(tmp_called_name_58);
            Py_DECREF(tmp_called_name_60);
            Py_DECREF(tmp_called_name_62);
            Py_DECREF(tmp_called_name_64);
            Py_DECREF(tmp_called_name_66);
            Py_DECREF(tmp_called_name_68);
            Py_DECREF(tmp_called_name_70);
            Py_DECREF(tmp_called_name_72);
            Py_DECREF(tmp_called_name_74);
            Py_DECREF(tmp_called_name_76);
            Py_DECREF(tmp_called_name_78);
            Py_DECREF(tmp_called_name_80);
            Py_DECREF(tmp_called_name_82);
            Py_DECREF(tmp_called_name_84);
            Py_DECREF(tmp_called_name_86);
            Py_DECREF(tmp_called_name_88);
            Py_DECREF(tmp_called_name_90);
            Py_DECREF(tmp_called_name_92);

            exception_lineno = 81;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_handle);
        tmp_called_name_97 = var_handle;
        frame_1e465c63423cecf32f0c62928e893560->m_frame.f_lineno = 82;
        tmp_called_name_96 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_97, mod_consts[53]);
        if (tmp_called_name_96 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_2);
            Py_DECREF(tmp_called_name_4);
            Py_DECREF(tmp_called_name_6);
            Py_DECREF(tmp_called_name_8);
            Py_DECREF(tmp_called_name_10);
            Py_DECREF(tmp_called_name_12);
            Py_DECREF(tmp_called_name_14);
            Py_DECREF(tmp_called_name_16);
            Py_DECREF(tmp_called_name_18);
            Py_DECREF(tmp_called_name_20);
            Py_DECREF(tmp_called_name_22);
            Py_DECREF(tmp_called_name_24);
            Py_DECREF(tmp_called_name_26);
            Py_DECREF(tmp_called_name_28);
            Py_DECREF(tmp_called_name_30);
            Py_DECREF(tmp_called_name_32);
            Py_DECREF(tmp_called_name_34);
            Py_DECREF(tmp_called_name_36);
            Py_DECREF(tmp_called_name_38);
            Py_DECREF(tmp_called_name_40);
            Py_DECREF(tmp_called_name_42);
            Py_DECREF(tmp_called_name_44);
            Py_DECREF(tmp_called_name_46);
            Py_DECREF(tmp_called_name_48);
            Py_DECREF(tmp_called_name_50);
            Py_DECREF(tmp_called_name_52);
            Py_DECREF(tmp_called_name_54);
            Py_DECREF(tmp_called_name_56);
            Py_DECREF(tmp_called_name_58);
            Py_DECREF(tmp_called_name_60);
            Py_DECREF(tmp_called_name_62);
            Py_DECREF(tmp_called_name_64);
            Py_DECREF(tmp_called_name_66);
            Py_DECREF(tmp_called_name_68);
            Py_DECREF(tmp_called_name_70);
            Py_DECREF(tmp_called_name_72);
            Py_DECREF(tmp_called_name_74);
            Py_DECREF(tmp_called_name_76);
            Py_DECREF(tmp_called_name_78);
            Py_DECREF(tmp_called_name_80);
            Py_DECREF(tmp_called_name_82);
            Py_DECREF(tmp_called_name_84);
            Py_DECREF(tmp_called_name_86);
            Py_DECREF(tmp_called_name_88);
            Py_DECREF(tmp_called_name_90);
            Py_DECREF(tmp_called_name_92);
            Py_DECREF(tmp_called_name_94);

            exception_lineno = 82;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_handle);
        tmp_called_name_99 = var_handle;
        frame_1e465c63423cecf32f0c62928e893560->m_frame.f_lineno = 83;
        tmp_called_name_98 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_99, mod_consts[54]);
        if (tmp_called_name_98 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_2);
            Py_DECREF(tmp_called_name_4);
            Py_DECREF(tmp_called_name_6);
            Py_DECREF(tmp_called_name_8);
            Py_DECREF(tmp_called_name_10);
            Py_DECREF(tmp_called_name_12);
            Py_DECREF(tmp_called_name_14);
            Py_DECREF(tmp_called_name_16);
            Py_DECREF(tmp_called_name_18);
            Py_DECREF(tmp_called_name_20);
            Py_DECREF(tmp_called_name_22);
            Py_DECREF(tmp_called_name_24);
            Py_DECREF(tmp_called_name_26);
            Py_DECREF(tmp_called_name_28);
            Py_DECREF(tmp_called_name_30);
            Py_DECREF(tmp_called_name_32);
            Py_DECREF(tmp_called_name_34);
            Py_DECREF(tmp_called_name_36);
            Py_DECREF(tmp_called_name_38);
            Py_DECREF(tmp_called_name_40);
            Py_DECREF(tmp_called_name_42);
            Py_DECREF(tmp_called_name_44);
            Py_DECREF(tmp_called_name_46);
            Py_DECREF(tmp_called_name_48);
            Py_DECREF(tmp_called_name_50);
            Py_DECREF(tmp_called_name_52);
            Py_DECREF(tmp_called_name_54);
            Py_DECREF(tmp_called_name_56);
            Py_DECREF(tmp_called_name_58);
            Py_DECREF(tmp_called_name_60);
            Py_DECREF(tmp_called_name_62);
            Py_DECREF(tmp_called_name_64);
            Py_DECREF(tmp_called_name_66);
            Py_DECREF(tmp_called_name_68);
            Py_DECREF(tmp_called_name_70);
            Py_DECREF(tmp_called_name_72);
            Py_DECREF(tmp_called_name_74);
            Py_DECREF(tmp_called_name_76);
            Py_DECREF(tmp_called_name_78);
            Py_DECREF(tmp_called_name_80);
            Py_DECREF(tmp_called_name_82);
            Py_DECREF(tmp_called_name_84);
            Py_DECREF(tmp_called_name_86);
            Py_DECREF(tmp_called_name_88);
            Py_DECREF(tmp_called_name_90);
            Py_DECREF(tmp_called_name_92);
            Py_DECREF(tmp_called_name_94);
            Py_DECREF(tmp_called_name_96);

            exception_lineno = 83;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_handle);
        tmp_called_name_101 = var_handle;
        frame_1e465c63423cecf32f0c62928e893560->m_frame.f_lineno = 84;
        tmp_called_name_100 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_101, mod_consts[55]);
        if (tmp_called_name_100 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_2);
            Py_DECREF(tmp_called_name_4);
            Py_DECREF(tmp_called_name_6);
            Py_DECREF(tmp_called_name_8);
            Py_DECREF(tmp_called_name_10);
            Py_DECREF(tmp_called_name_12);
            Py_DECREF(tmp_called_name_14);
            Py_DECREF(tmp_called_name_16);
            Py_DECREF(tmp_called_name_18);
            Py_DECREF(tmp_called_name_20);
            Py_DECREF(tmp_called_name_22);
            Py_DECREF(tmp_called_name_24);
            Py_DECREF(tmp_called_name_26);
            Py_DECREF(tmp_called_name_28);
            Py_DECREF(tmp_called_name_30);
            Py_DECREF(tmp_called_name_32);
            Py_DECREF(tmp_called_name_34);
            Py_DECREF(tmp_called_name_36);
            Py_DECREF(tmp_called_name_38);
            Py_DECREF(tmp_called_name_40);
            Py_DECREF(tmp_called_name_42);
            Py_DECREF(tmp_called_name_44);
            Py_DECREF(tmp_called_name_46);
            Py_DECREF(tmp_called_name_48);
            Py_DECREF(tmp_called_name_50);
            Py_DECREF(tmp_called_name_52);
            Py_DECREF(tmp_called_name_54);
            Py_DECREF(tmp_called_name_56);
            Py_DECREF(tmp_called_name_58);
            Py_DECREF(tmp_called_name_60);
            Py_DECREF(tmp_called_name_62);
            Py_DECREF(tmp_called_name_64);
            Py_DECREF(tmp_called_name_66);
            Py_DECREF(tmp_called_name_68);
            Py_DECREF(tmp_called_name_70);
            Py_DECREF(tmp_called_name_72);
            Py_DECREF(tmp_called_name_74);
            Py_DECREF(tmp_called_name_76);
            Py_DECREF(tmp_called_name_78);
            Py_DECREF(tmp_called_name_80);
            Py_DECREF(tmp_called_name_82);
            Py_DECREF(tmp_called_name_84);
            Py_DECREF(tmp_called_name_86);
            Py_DECREF(tmp_called_name_88);
            Py_DECREF(tmp_called_name_90);
            Py_DECREF(tmp_called_name_92);
            Py_DECREF(tmp_called_name_94);
            Py_DECREF(tmp_called_name_96);
            Py_DECREF(tmp_called_name_98);

            exception_lineno = 84;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_handle);
        tmp_called_name_103 = var_handle;
        frame_1e465c63423cecf32f0c62928e893560->m_frame.f_lineno = 85;
        tmp_called_name_102 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_103, mod_consts[56]);
        if (tmp_called_name_102 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_2);
            Py_DECREF(tmp_called_name_4);
            Py_DECREF(tmp_called_name_6);
            Py_DECREF(tmp_called_name_8);
            Py_DECREF(tmp_called_name_10);
            Py_DECREF(tmp_called_name_12);
            Py_DECREF(tmp_called_name_14);
            Py_DECREF(tmp_called_name_16);
            Py_DECREF(tmp_called_name_18);
            Py_DECREF(tmp_called_name_20);
            Py_DECREF(tmp_called_name_22);
            Py_DECREF(tmp_called_name_24);
            Py_DECREF(tmp_called_name_26);
            Py_DECREF(tmp_called_name_28);
            Py_DECREF(tmp_called_name_30);
            Py_DECREF(tmp_called_name_32);
            Py_DECREF(tmp_called_name_34);
            Py_DECREF(tmp_called_name_36);
            Py_DECREF(tmp_called_name_38);
            Py_DECREF(tmp_called_name_40);
            Py_DECREF(tmp_called_name_42);
            Py_DECREF(tmp_called_name_44);
            Py_DECREF(tmp_called_name_46);
            Py_DECREF(tmp_called_name_48);
            Py_DECREF(tmp_called_name_50);
            Py_DECREF(tmp_called_name_52);
            Py_DECREF(tmp_called_name_54);
            Py_DECREF(tmp_called_name_56);
            Py_DECREF(tmp_called_name_58);
            Py_DECREF(tmp_called_name_60);
            Py_DECREF(tmp_called_name_62);
            Py_DECREF(tmp_called_name_64);
            Py_DECREF(tmp_called_name_66);
            Py_DECREF(tmp_called_name_68);
            Py_DECREF(tmp_called_name_70);
            Py_DECREF(tmp_called_name_72);
            Py_DECREF(tmp_called_name_74);
            Py_DECREF(tmp_called_name_76);
            Py_DECREF(tmp_called_name_78);
            Py_DECREF(tmp_called_name_80);
            Py_DECREF(tmp_called_name_82);
            Py_DECREF(tmp_called_name_84);
            Py_DECREF(tmp_called_name_86);
            Py_DECREF(tmp_called_name_88);
            Py_DECREF(tmp_called_name_90);
            Py_DECREF(tmp_called_name_92);
            Py_DECREF(tmp_called_name_94);
            Py_DECREF(tmp_called_name_96);
            Py_DECREF(tmp_called_name_98);
            Py_DECREF(tmp_called_name_100);

            exception_lineno = 85;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_handle);
        tmp_called_name_105 = var_handle;
        frame_1e465c63423cecf32f0c62928e893560->m_frame.f_lineno = 86;
        tmp_called_name_104 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_105, mod_consts[57]);
        if (tmp_called_name_104 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_2);
            Py_DECREF(tmp_called_name_4);
            Py_DECREF(tmp_called_name_6);
            Py_DECREF(tmp_called_name_8);
            Py_DECREF(tmp_called_name_10);
            Py_DECREF(tmp_called_name_12);
            Py_DECREF(tmp_called_name_14);
            Py_DECREF(tmp_called_name_16);
            Py_DECREF(tmp_called_name_18);
            Py_DECREF(tmp_called_name_20);
            Py_DECREF(tmp_called_name_22);
            Py_DECREF(tmp_called_name_24);
            Py_DECREF(tmp_called_name_26);
            Py_DECREF(tmp_called_name_28);
            Py_DECREF(tmp_called_name_30);
            Py_DECREF(tmp_called_name_32);
            Py_DECREF(tmp_called_name_34);
            Py_DECREF(tmp_called_name_36);
            Py_DECREF(tmp_called_name_38);
            Py_DECREF(tmp_called_name_40);
            Py_DECREF(tmp_called_name_42);
            Py_DECREF(tmp_called_name_44);
            Py_DECREF(tmp_called_name_46);
            Py_DECREF(tmp_called_name_48);
            Py_DECREF(tmp_called_name_50);
            Py_DECREF(tmp_called_name_52);
            Py_DECREF(tmp_called_name_54);
            Py_DECREF(tmp_called_name_56);
            Py_DECREF(tmp_called_name_58);
            Py_DECREF(tmp_called_name_60);
            Py_DECREF(tmp_called_name_62);
            Py_DECREF(tmp_called_name_64);
            Py_DECREF(tmp_called_name_66);
            Py_DECREF(tmp_called_name_68);
            Py_DECREF(tmp_called_name_70);
            Py_DECREF(tmp_called_name_72);
            Py_DECREF(tmp_called_name_74);
            Py_DECREF(tmp_called_name_76);
            Py_DECREF(tmp_called_name_78);
            Py_DECREF(tmp_called_name_80);
            Py_DECREF(tmp_called_name_82);
            Py_DECREF(tmp_called_name_84);
            Py_DECREF(tmp_called_name_86);
            Py_DECREF(tmp_called_name_88);
            Py_DECREF(tmp_called_name_90);
            Py_DECREF(tmp_called_name_92);
            Py_DECREF(tmp_called_name_94);
            Py_DECREF(tmp_called_name_96);
            Py_DECREF(tmp_called_name_98);
            Py_DECREF(tmp_called_name_100);
            Py_DECREF(tmp_called_name_102);

            exception_lineno = 86;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_handle);
        tmp_called_name_107 = var_handle;
        frame_1e465c63423cecf32f0c62928e893560->m_frame.f_lineno = 87;
        tmp_called_name_106 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_107, mod_consts[58]);
        if (tmp_called_name_106 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_2);
            Py_DECREF(tmp_called_name_4);
            Py_DECREF(tmp_called_name_6);
            Py_DECREF(tmp_called_name_8);
            Py_DECREF(tmp_called_name_10);
            Py_DECREF(tmp_called_name_12);
            Py_DECREF(tmp_called_name_14);
            Py_DECREF(tmp_called_name_16);
            Py_DECREF(tmp_called_name_18);
            Py_DECREF(tmp_called_name_20);
            Py_DECREF(tmp_called_name_22);
            Py_DECREF(tmp_called_name_24);
            Py_DECREF(tmp_called_name_26);
            Py_DECREF(tmp_called_name_28);
            Py_DECREF(tmp_called_name_30);
            Py_DECREF(tmp_called_name_32);
            Py_DECREF(tmp_called_name_34);
            Py_DECREF(tmp_called_name_36);
            Py_DECREF(tmp_called_name_38);
            Py_DECREF(tmp_called_name_40);
            Py_DECREF(tmp_called_name_42);
            Py_DECREF(tmp_called_name_44);
            Py_DECREF(tmp_called_name_46);
            Py_DECREF(tmp_called_name_48);
            Py_DECREF(tmp_called_name_50);
            Py_DECREF(tmp_called_name_52);
            Py_DECREF(tmp_called_name_54);
            Py_DECREF(tmp_called_name_56);
            Py_DECREF(tmp_called_name_58);
            Py_DECREF(tmp_called_name_60);
            Py_DECREF(tmp_called_name_62);
            Py_DECREF(tmp_called_name_64);
            Py_DECREF(tmp_called_name_66);
            Py_DECREF(tmp_called_name_68);
            Py_DECREF(tmp_called_name_70);
            Py_DECREF(tmp_called_name_72);
            Py_DECREF(tmp_called_name_74);
            Py_DECREF(tmp_called_name_76);
            Py_DECREF(tmp_called_name_78);
            Py_DECREF(tmp_called_name_80);
            Py_DECREF(tmp_called_name_82);
            Py_DECREF(tmp_called_name_84);
            Py_DECREF(tmp_called_name_86);
            Py_DECREF(tmp_called_name_88);
            Py_DECREF(tmp_called_name_90);
            Py_DECREF(tmp_called_name_92);
            Py_DECREF(tmp_called_name_94);
            Py_DECREF(tmp_called_name_96);
            Py_DECREF(tmp_called_name_98);
            Py_DECREF(tmp_called_name_100);
            Py_DECREF(tmp_called_name_102);
            Py_DECREF(tmp_called_name_104);

            exception_lineno = 87;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_handle);
        tmp_called_name_109 = var_handle;
        frame_1e465c63423cecf32f0c62928e893560->m_frame.f_lineno = 88;
        tmp_called_name_108 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_109, mod_consts[59]);
        if (tmp_called_name_108 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_2);
            Py_DECREF(tmp_called_name_4);
            Py_DECREF(tmp_called_name_6);
            Py_DECREF(tmp_called_name_8);
            Py_DECREF(tmp_called_name_10);
            Py_DECREF(tmp_called_name_12);
            Py_DECREF(tmp_called_name_14);
            Py_DECREF(tmp_called_name_16);
            Py_DECREF(tmp_called_name_18);
            Py_DECREF(tmp_called_name_20);
            Py_DECREF(tmp_called_name_22);
            Py_DECREF(tmp_called_name_24);
            Py_DECREF(tmp_called_name_26);
            Py_DECREF(tmp_called_name_28);
            Py_DECREF(tmp_called_name_30);
            Py_DECREF(tmp_called_name_32);
            Py_DECREF(tmp_called_name_34);
            Py_DECREF(tmp_called_name_36);
            Py_DECREF(tmp_called_name_38);
            Py_DECREF(tmp_called_name_40);
            Py_DECREF(tmp_called_name_42);
            Py_DECREF(tmp_called_name_44);
            Py_DECREF(tmp_called_name_46);
            Py_DECREF(tmp_called_name_48);
            Py_DECREF(tmp_called_name_50);
            Py_DECREF(tmp_called_name_52);
            Py_DECREF(tmp_called_name_54);
            Py_DECREF(tmp_called_name_56);
            Py_DECREF(tmp_called_name_58);
            Py_DECREF(tmp_called_name_60);
            Py_DECREF(tmp_called_name_62);
            Py_DECREF(tmp_called_name_64);
            Py_DECREF(tmp_called_name_66);
            Py_DECREF(tmp_called_name_68);
            Py_DECREF(tmp_called_name_70);
            Py_DECREF(tmp_called_name_72);
            Py_DECREF(tmp_called_name_74);
            Py_DECREF(tmp_called_name_76);
            Py_DECREF(tmp_called_name_78);
            Py_DECREF(tmp_called_name_80);
            Py_DECREF(tmp_called_name_82);
            Py_DECREF(tmp_called_name_84);
            Py_DECREF(tmp_called_name_86);
            Py_DECREF(tmp_called_name_88);
            Py_DECREF(tmp_called_name_90);
            Py_DECREF(tmp_called_name_92);
            Py_DECREF(tmp_called_name_94);
            Py_DECREF(tmp_called_name_96);
            Py_DECREF(tmp_called_name_98);
            Py_DECREF(tmp_called_name_100);
            Py_DECREF(tmp_called_name_102);
            Py_DECREF(tmp_called_name_104);
            Py_DECREF(tmp_called_name_106);

            exception_lineno = 88;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_handle);
        tmp_called_name_111 = var_handle;
        frame_1e465c63423cecf32f0c62928e893560->m_frame.f_lineno = 89;
        tmp_called_name_110 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_111, mod_consts[60]);
        if (tmp_called_name_110 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_2);
            Py_DECREF(tmp_called_name_4);
            Py_DECREF(tmp_called_name_6);
            Py_DECREF(tmp_called_name_8);
            Py_DECREF(tmp_called_name_10);
            Py_DECREF(tmp_called_name_12);
            Py_DECREF(tmp_called_name_14);
            Py_DECREF(tmp_called_name_16);
            Py_DECREF(tmp_called_name_18);
            Py_DECREF(tmp_called_name_20);
            Py_DECREF(tmp_called_name_22);
            Py_DECREF(tmp_called_name_24);
            Py_DECREF(tmp_called_name_26);
            Py_DECREF(tmp_called_name_28);
            Py_DECREF(tmp_called_name_30);
            Py_DECREF(tmp_called_name_32);
            Py_DECREF(tmp_called_name_34);
            Py_DECREF(tmp_called_name_36);
            Py_DECREF(tmp_called_name_38);
            Py_DECREF(tmp_called_name_40);
            Py_DECREF(tmp_called_name_42);
            Py_DECREF(tmp_called_name_44);
            Py_DECREF(tmp_called_name_46);
            Py_DECREF(tmp_called_name_48);
            Py_DECREF(tmp_called_name_50);
            Py_DECREF(tmp_called_name_52);
            Py_DECREF(tmp_called_name_54);
            Py_DECREF(tmp_called_name_56);
            Py_DECREF(tmp_called_name_58);
            Py_DECREF(tmp_called_name_60);
            Py_DECREF(tmp_called_name_62);
            Py_DECREF(tmp_called_name_64);
            Py_DECREF(tmp_called_name_66);
            Py_DECREF(tmp_called_name_68);
            Py_DECREF(tmp_called_name_70);
            Py_DECREF(tmp_called_name_72);
            Py_DECREF(tmp_called_name_74);
            Py_DECREF(tmp_called_name_76);
            Py_DECREF(tmp_called_name_78);
            Py_DECREF(tmp_called_name_80);
            Py_DECREF(tmp_called_name_82);
            Py_DECREF(tmp_called_name_84);
            Py_DECREF(tmp_called_name_86);
            Py_DECREF(tmp_called_name_88);
            Py_DECREF(tmp_called_name_90);
            Py_DECREF(tmp_called_name_92);
            Py_DECREF(tmp_called_name_94);
            Py_DECREF(tmp_called_name_96);
            Py_DECREF(tmp_called_name_98);
            Py_DECREF(tmp_called_name_100);
            Py_DECREF(tmp_called_name_102);
            Py_DECREF(tmp_called_name_104);
            Py_DECREF(tmp_called_name_106);
            Py_DECREF(tmp_called_name_108);

            exception_lineno = 89;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_handle);
        tmp_called_name_113 = var_handle;
        frame_1e465c63423cecf32f0c62928e893560->m_frame.f_lineno = 90;
        tmp_called_name_112 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_113, mod_consts[61]);
        if (tmp_called_name_112 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_2);
            Py_DECREF(tmp_called_name_4);
            Py_DECREF(tmp_called_name_6);
            Py_DECREF(tmp_called_name_8);
            Py_DECREF(tmp_called_name_10);
            Py_DECREF(tmp_called_name_12);
            Py_DECREF(tmp_called_name_14);
            Py_DECREF(tmp_called_name_16);
            Py_DECREF(tmp_called_name_18);
            Py_DECREF(tmp_called_name_20);
            Py_DECREF(tmp_called_name_22);
            Py_DECREF(tmp_called_name_24);
            Py_DECREF(tmp_called_name_26);
            Py_DECREF(tmp_called_name_28);
            Py_DECREF(tmp_called_name_30);
            Py_DECREF(tmp_called_name_32);
            Py_DECREF(tmp_called_name_34);
            Py_DECREF(tmp_called_name_36);
            Py_DECREF(tmp_called_name_38);
            Py_DECREF(tmp_called_name_40);
            Py_DECREF(tmp_called_name_42);
            Py_DECREF(tmp_called_name_44);
            Py_DECREF(tmp_called_name_46);
            Py_DECREF(tmp_called_name_48);
            Py_DECREF(tmp_called_name_50);
            Py_DECREF(tmp_called_name_52);
            Py_DECREF(tmp_called_name_54);
            Py_DECREF(tmp_called_name_56);
            Py_DECREF(tmp_called_name_58);
            Py_DECREF(tmp_called_name_60);
            Py_DECREF(tmp_called_name_62);
            Py_DECREF(tmp_called_name_64);
            Py_DECREF(tmp_called_name_66);
            Py_DECREF(tmp_called_name_68);
            Py_DECREF(tmp_called_name_70);
            Py_DECREF(tmp_called_name_72);
            Py_DECREF(tmp_called_name_74);
            Py_DECREF(tmp_called_name_76);
            Py_DECREF(tmp_called_name_78);
            Py_DECREF(tmp_called_name_80);
            Py_DECREF(tmp_called_name_82);
            Py_DECREF(tmp_called_name_84);
            Py_DECREF(tmp_called_name_86);
            Py_DECREF(tmp_called_name_88);
            Py_DECREF(tmp_called_name_90);
            Py_DECREF(tmp_called_name_92);
            Py_DECREF(tmp_called_name_94);
            Py_DECREF(tmp_called_name_96);
            Py_DECREF(tmp_called_name_98);
            Py_DECREF(tmp_called_name_100);
            Py_DECREF(tmp_called_name_102);
            Py_DECREF(tmp_called_name_104);
            Py_DECREF(tmp_called_name_106);
            Py_DECREF(tmp_called_name_108);
            Py_DECREF(tmp_called_name_110);

            exception_lineno = 90;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_handle);
        tmp_called_name_115 = var_handle;
        frame_1e465c63423cecf32f0c62928e893560->m_frame.f_lineno = 91;
        tmp_called_name_114 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_115, mod_consts[62]);
        if (tmp_called_name_114 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_2);
            Py_DECREF(tmp_called_name_4);
            Py_DECREF(tmp_called_name_6);
            Py_DECREF(tmp_called_name_8);
            Py_DECREF(tmp_called_name_10);
            Py_DECREF(tmp_called_name_12);
            Py_DECREF(tmp_called_name_14);
            Py_DECREF(tmp_called_name_16);
            Py_DECREF(tmp_called_name_18);
            Py_DECREF(tmp_called_name_20);
            Py_DECREF(tmp_called_name_22);
            Py_DECREF(tmp_called_name_24);
            Py_DECREF(tmp_called_name_26);
            Py_DECREF(tmp_called_name_28);
            Py_DECREF(tmp_called_name_30);
            Py_DECREF(tmp_called_name_32);
            Py_DECREF(tmp_called_name_34);
            Py_DECREF(tmp_called_name_36);
            Py_DECREF(tmp_called_name_38);
            Py_DECREF(tmp_called_name_40);
            Py_DECREF(tmp_called_name_42);
            Py_DECREF(tmp_called_name_44);
            Py_DECREF(tmp_called_name_46);
            Py_DECREF(tmp_called_name_48);
            Py_DECREF(tmp_called_name_50);
            Py_DECREF(tmp_called_name_52);
            Py_DECREF(tmp_called_name_54);
            Py_DECREF(tmp_called_name_56);
            Py_DECREF(tmp_called_name_58);
            Py_DECREF(tmp_called_name_60);
            Py_DECREF(tmp_called_name_62);
            Py_DECREF(tmp_called_name_64);
            Py_DECREF(tmp_called_name_66);
            Py_DECREF(tmp_called_name_68);
            Py_DECREF(tmp_called_name_70);
            Py_DECREF(tmp_called_name_72);
            Py_DECREF(tmp_called_name_74);
            Py_DECREF(tmp_called_name_76);
            Py_DECREF(tmp_called_name_78);
            Py_DECREF(tmp_called_name_80);
            Py_DECREF(tmp_called_name_82);
            Py_DECREF(tmp_called_name_84);
            Py_DECREF(tmp_called_name_86);
            Py_DECREF(tmp_called_name_88);
            Py_DECREF(tmp_called_name_90);
            Py_DECREF(tmp_called_name_92);
            Py_DECREF(tmp_called_name_94);
            Py_DECREF(tmp_called_name_96);
            Py_DECREF(tmp_called_name_98);
            Py_DECREF(tmp_called_name_100);
            Py_DECREF(tmp_called_name_102);
            Py_DECREF(tmp_called_name_104);
            Py_DECREF(tmp_called_name_106);
            Py_DECREF(tmp_called_name_108);
            Py_DECREF(tmp_called_name_110);
            Py_DECREF(tmp_called_name_112);

            exception_lineno = 91;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_handle);
        tmp_called_name_117 = var_handle;
        frame_1e465c63423cecf32f0c62928e893560->m_frame.f_lineno = 92;
        tmp_called_name_116 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_117, mod_consts[63]);
        if (tmp_called_name_116 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_2);
            Py_DECREF(tmp_called_name_4);
            Py_DECREF(tmp_called_name_6);
            Py_DECREF(tmp_called_name_8);
            Py_DECREF(tmp_called_name_10);
            Py_DECREF(tmp_called_name_12);
            Py_DECREF(tmp_called_name_14);
            Py_DECREF(tmp_called_name_16);
            Py_DECREF(tmp_called_name_18);
            Py_DECREF(tmp_called_name_20);
            Py_DECREF(tmp_called_name_22);
            Py_DECREF(tmp_called_name_24);
            Py_DECREF(tmp_called_name_26);
            Py_DECREF(tmp_called_name_28);
            Py_DECREF(tmp_called_name_30);
            Py_DECREF(tmp_called_name_32);
            Py_DECREF(tmp_called_name_34);
            Py_DECREF(tmp_called_name_36);
            Py_DECREF(tmp_called_name_38);
            Py_DECREF(tmp_called_name_40);
            Py_DECREF(tmp_called_name_42);
            Py_DECREF(tmp_called_name_44);
            Py_DECREF(tmp_called_name_46);
            Py_DECREF(tmp_called_name_48);
            Py_DECREF(tmp_called_name_50);
            Py_DECREF(tmp_called_name_52);
            Py_DECREF(tmp_called_name_54);
            Py_DECREF(tmp_called_name_56);
            Py_DECREF(tmp_called_name_58);
            Py_DECREF(tmp_called_name_60);
            Py_DECREF(tmp_called_name_62);
            Py_DECREF(tmp_called_name_64);
            Py_DECREF(tmp_called_name_66);
            Py_DECREF(tmp_called_name_68);
            Py_DECREF(tmp_called_name_70);
            Py_DECREF(tmp_called_name_72);
            Py_DECREF(tmp_called_name_74);
            Py_DECREF(tmp_called_name_76);
            Py_DECREF(tmp_called_name_78);
            Py_DECREF(tmp_called_name_80);
            Py_DECREF(tmp_called_name_82);
            Py_DECREF(tmp_called_name_84);
            Py_DECREF(tmp_called_name_86);
            Py_DECREF(tmp_called_name_88);
            Py_DECREF(tmp_called_name_90);
            Py_DECREF(tmp_called_name_92);
            Py_DECREF(tmp_called_name_94);
            Py_DECREF(tmp_called_name_96);
            Py_DECREF(tmp_called_name_98);
            Py_DECREF(tmp_called_name_100);
            Py_DECREF(tmp_called_name_102);
            Py_DECREF(tmp_called_name_104);
            Py_DECREF(tmp_called_name_106);
            Py_DECREF(tmp_called_name_108);
            Py_DECREF(tmp_called_name_110);
            Py_DECREF(tmp_called_name_112);
            Py_DECREF(tmp_called_name_114);

            exception_lineno = 92;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_handle);
        tmp_called_name_119 = var_handle;
        frame_1e465c63423cecf32f0c62928e893560->m_frame.f_lineno = 93;
        tmp_called_name_118 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_119, mod_consts[64]);
        if (tmp_called_name_118 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_2);
            Py_DECREF(tmp_called_name_4);
            Py_DECREF(tmp_called_name_6);
            Py_DECREF(tmp_called_name_8);
            Py_DECREF(tmp_called_name_10);
            Py_DECREF(tmp_called_name_12);
            Py_DECREF(tmp_called_name_14);
            Py_DECREF(tmp_called_name_16);
            Py_DECREF(tmp_called_name_18);
            Py_DECREF(tmp_called_name_20);
            Py_DECREF(tmp_called_name_22);
            Py_DECREF(tmp_called_name_24);
            Py_DECREF(tmp_called_name_26);
            Py_DECREF(tmp_called_name_28);
            Py_DECREF(tmp_called_name_30);
            Py_DECREF(tmp_called_name_32);
            Py_DECREF(tmp_called_name_34);
            Py_DECREF(tmp_called_name_36);
            Py_DECREF(tmp_called_name_38);
            Py_DECREF(tmp_called_name_40);
            Py_DECREF(tmp_called_name_42);
            Py_DECREF(tmp_called_name_44);
            Py_DECREF(tmp_called_name_46);
            Py_DECREF(tmp_called_name_48);
            Py_DECREF(tmp_called_name_50);
            Py_DECREF(tmp_called_name_52);
            Py_DECREF(tmp_called_name_54);
            Py_DECREF(tmp_called_name_56);
            Py_DECREF(tmp_called_name_58);
            Py_DECREF(tmp_called_name_60);
            Py_DECREF(tmp_called_name_62);
            Py_DECREF(tmp_called_name_64);
            Py_DECREF(tmp_called_name_66);
            Py_DECREF(tmp_called_name_68);
            Py_DECREF(tmp_called_name_70);
            Py_DECREF(tmp_called_name_72);
            Py_DECREF(tmp_called_name_74);
            Py_DECREF(tmp_called_name_76);
            Py_DECREF(tmp_called_name_78);
            Py_DECREF(tmp_called_name_80);
            Py_DECREF(tmp_called_name_82);
            Py_DECREF(tmp_called_name_84);
            Py_DECREF(tmp_called_name_86);
            Py_DECREF(tmp_called_name_88);
            Py_DECREF(tmp_called_name_90);
            Py_DECREF(tmp_called_name_92);
            Py_DECREF(tmp_called_name_94);
            Py_DECREF(tmp_called_name_96);
            Py_DECREF(tmp_called_name_98);
            Py_DECREF(tmp_called_name_100);
            Py_DECREF(tmp_called_name_102);
            Py_DECREF(tmp_called_name_104);
            Py_DECREF(tmp_called_name_106);
            Py_DECREF(tmp_called_name_108);
            Py_DECREF(tmp_called_name_110);
            Py_DECREF(tmp_called_name_112);
            Py_DECREF(tmp_called_name_114);
            Py_DECREF(tmp_called_name_116);

            exception_lineno = 93;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_handle);
        tmp_called_name_121 = var_handle;
        frame_1e465c63423cecf32f0c62928e893560->m_frame.f_lineno = 94;
        tmp_called_name_120 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_121, mod_consts[65]);
        if (tmp_called_name_120 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_2);
            Py_DECREF(tmp_called_name_4);
            Py_DECREF(tmp_called_name_6);
            Py_DECREF(tmp_called_name_8);
            Py_DECREF(tmp_called_name_10);
            Py_DECREF(tmp_called_name_12);
            Py_DECREF(tmp_called_name_14);
            Py_DECREF(tmp_called_name_16);
            Py_DECREF(tmp_called_name_18);
            Py_DECREF(tmp_called_name_20);
            Py_DECREF(tmp_called_name_22);
            Py_DECREF(tmp_called_name_24);
            Py_DECREF(tmp_called_name_26);
            Py_DECREF(tmp_called_name_28);
            Py_DECREF(tmp_called_name_30);
            Py_DECREF(tmp_called_name_32);
            Py_DECREF(tmp_called_name_34);
            Py_DECREF(tmp_called_name_36);
            Py_DECREF(tmp_called_name_38);
            Py_DECREF(tmp_called_name_40);
            Py_DECREF(tmp_called_name_42);
            Py_DECREF(tmp_called_name_44);
            Py_DECREF(tmp_called_name_46);
            Py_DECREF(tmp_called_name_48);
            Py_DECREF(tmp_called_name_50);
            Py_DECREF(tmp_called_name_52);
            Py_DECREF(tmp_called_name_54);
            Py_DECREF(tmp_called_name_56);
            Py_DECREF(tmp_called_name_58);
            Py_DECREF(tmp_called_name_60);
            Py_DECREF(tmp_called_name_62);
            Py_DECREF(tmp_called_name_64);
            Py_DECREF(tmp_called_name_66);
            Py_DECREF(tmp_called_name_68);
            Py_DECREF(tmp_called_name_70);
            Py_DECREF(tmp_called_name_72);
            Py_DECREF(tmp_called_name_74);
            Py_DECREF(tmp_called_name_76);
            Py_DECREF(tmp_called_name_78);
            Py_DECREF(tmp_called_name_80);
            Py_DECREF(tmp_called_name_82);
            Py_DECREF(tmp_called_name_84);
            Py_DECREF(tmp_called_name_86);
            Py_DECREF(tmp_called_name_88);
            Py_DECREF(tmp_called_name_90);
            Py_DECREF(tmp_called_name_92);
            Py_DECREF(tmp_called_name_94);
            Py_DECREF(tmp_called_name_96);
            Py_DECREF(tmp_called_name_98);
            Py_DECREF(tmp_called_name_100);
            Py_DECREF(tmp_called_name_102);
            Py_DECREF(tmp_called_name_104);
            Py_DECREF(tmp_called_name_106);
            Py_DECREF(tmp_called_name_108);
            Py_DECREF(tmp_called_name_110);
            Py_DECREF(tmp_called_name_112);
            Py_DECREF(tmp_called_name_114);
            Py_DECREF(tmp_called_name_116);
            Py_DECREF(tmp_called_name_118);

            exception_lineno = 94;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_handle);
        tmp_called_name_123 = var_handle;
        frame_1e465c63423cecf32f0c62928e893560->m_frame.f_lineno = 95;
        tmp_called_name_122 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_123, mod_consts[66]);
        if (tmp_called_name_122 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_2);
            Py_DECREF(tmp_called_name_4);
            Py_DECREF(tmp_called_name_6);
            Py_DECREF(tmp_called_name_8);
            Py_DECREF(tmp_called_name_10);
            Py_DECREF(tmp_called_name_12);
            Py_DECREF(tmp_called_name_14);
            Py_DECREF(tmp_called_name_16);
            Py_DECREF(tmp_called_name_18);
            Py_DECREF(tmp_called_name_20);
            Py_DECREF(tmp_called_name_22);
            Py_DECREF(tmp_called_name_24);
            Py_DECREF(tmp_called_name_26);
            Py_DECREF(tmp_called_name_28);
            Py_DECREF(tmp_called_name_30);
            Py_DECREF(tmp_called_name_32);
            Py_DECREF(tmp_called_name_34);
            Py_DECREF(tmp_called_name_36);
            Py_DECREF(tmp_called_name_38);
            Py_DECREF(tmp_called_name_40);
            Py_DECREF(tmp_called_name_42);
            Py_DECREF(tmp_called_name_44);
            Py_DECREF(tmp_called_name_46);
            Py_DECREF(tmp_called_name_48);
            Py_DECREF(tmp_called_name_50);
            Py_DECREF(tmp_called_name_52);
            Py_DECREF(tmp_called_name_54);
            Py_DECREF(tmp_called_name_56);
            Py_DECREF(tmp_called_name_58);
            Py_DECREF(tmp_called_name_60);
            Py_DECREF(tmp_called_name_62);
            Py_DECREF(tmp_called_name_64);
            Py_DECREF(tmp_called_name_66);
            Py_DECREF(tmp_called_name_68);
            Py_DECREF(tmp_called_name_70);
            Py_DECREF(tmp_called_name_72);
            Py_DECREF(tmp_called_name_74);
            Py_DECREF(tmp_called_name_76);
            Py_DECREF(tmp_called_name_78);
            Py_DECREF(tmp_called_name_80);
            Py_DECREF(tmp_called_name_82);
            Py_DECREF(tmp_called_name_84);
            Py_DECREF(tmp_called_name_86);
            Py_DECREF(tmp_called_name_88);
            Py_DECREF(tmp_called_name_90);
            Py_DECREF(tmp_called_name_92);
            Py_DECREF(tmp_called_name_94);
            Py_DECREF(tmp_called_name_96);
            Py_DECREF(tmp_called_name_98);
            Py_DECREF(tmp_called_name_100);
            Py_DECREF(tmp_called_name_102);
            Py_DECREF(tmp_called_name_104);
            Py_DECREF(tmp_called_name_106);
            Py_DECREF(tmp_called_name_108);
            Py_DECREF(tmp_called_name_110);
            Py_DECREF(tmp_called_name_112);
            Py_DECREF(tmp_called_name_114);
            Py_DECREF(tmp_called_name_116);
            Py_DECREF(tmp_called_name_118);
            Py_DECREF(tmp_called_name_120);

            exception_lineno = 95;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_handle);
        tmp_called_name_125 = var_handle;
        frame_1e465c63423cecf32f0c62928e893560->m_frame.f_lineno = 96;
        tmp_called_name_124 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_125, mod_consts[67]);
        if (tmp_called_name_124 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_2);
            Py_DECREF(tmp_called_name_4);
            Py_DECREF(tmp_called_name_6);
            Py_DECREF(tmp_called_name_8);
            Py_DECREF(tmp_called_name_10);
            Py_DECREF(tmp_called_name_12);
            Py_DECREF(tmp_called_name_14);
            Py_DECREF(tmp_called_name_16);
            Py_DECREF(tmp_called_name_18);
            Py_DECREF(tmp_called_name_20);
            Py_DECREF(tmp_called_name_22);
            Py_DECREF(tmp_called_name_24);
            Py_DECREF(tmp_called_name_26);
            Py_DECREF(tmp_called_name_28);
            Py_DECREF(tmp_called_name_30);
            Py_DECREF(tmp_called_name_32);
            Py_DECREF(tmp_called_name_34);
            Py_DECREF(tmp_called_name_36);
            Py_DECREF(tmp_called_name_38);
            Py_DECREF(tmp_called_name_40);
            Py_DECREF(tmp_called_name_42);
            Py_DECREF(tmp_called_name_44);
            Py_DECREF(tmp_called_name_46);
            Py_DECREF(tmp_called_name_48);
            Py_DECREF(tmp_called_name_50);
            Py_DECREF(tmp_called_name_52);
            Py_DECREF(tmp_called_name_54);
            Py_DECREF(tmp_called_name_56);
            Py_DECREF(tmp_called_name_58);
            Py_DECREF(tmp_called_name_60);
            Py_DECREF(tmp_called_name_62);
            Py_DECREF(tmp_called_name_64);
            Py_DECREF(tmp_called_name_66);
            Py_DECREF(tmp_called_name_68);
            Py_DECREF(tmp_called_name_70);
            Py_DECREF(tmp_called_name_72);
            Py_DECREF(tmp_called_name_74);
            Py_DECREF(tmp_called_name_76);
            Py_DECREF(tmp_called_name_78);
            Py_DECREF(tmp_called_name_80);
            Py_DECREF(tmp_called_name_82);
            Py_DECREF(tmp_called_name_84);
            Py_DECREF(tmp_called_name_86);
            Py_DECREF(tmp_called_name_88);
            Py_DECREF(tmp_called_name_90);
            Py_DECREF(tmp_called_name_92);
            Py_DECREF(tmp_called_name_94);
            Py_DECREF(tmp_called_name_96);
            Py_DECREF(tmp_called_name_98);
            Py_DECREF(tmp_called_name_100);
            Py_DECREF(tmp_called_name_102);
            Py_DECREF(tmp_called_name_104);
            Py_DECREF(tmp_called_name_106);
            Py_DECREF(tmp_called_name_108);
            Py_DECREF(tmp_called_name_110);
            Py_DECREF(tmp_called_name_112);
            Py_DECREF(tmp_called_name_114);
            Py_DECREF(tmp_called_name_116);
            Py_DECREF(tmp_called_name_118);
            Py_DECREF(tmp_called_name_120);
            Py_DECREF(tmp_called_name_122);

            exception_lineno = 96;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_handle);
        tmp_called_name_127 = var_handle;
        frame_1e465c63423cecf32f0c62928e893560->m_frame.f_lineno = 97;
        tmp_called_name_126 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_127, mod_consts[68]);
        if (tmp_called_name_126 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_2);
            Py_DECREF(tmp_called_name_4);
            Py_DECREF(tmp_called_name_6);
            Py_DECREF(tmp_called_name_8);
            Py_DECREF(tmp_called_name_10);
            Py_DECREF(tmp_called_name_12);
            Py_DECREF(tmp_called_name_14);
            Py_DECREF(tmp_called_name_16);
            Py_DECREF(tmp_called_name_18);
            Py_DECREF(tmp_called_name_20);
            Py_DECREF(tmp_called_name_22);
            Py_DECREF(tmp_called_name_24);
            Py_DECREF(tmp_called_name_26);
            Py_DECREF(tmp_called_name_28);
            Py_DECREF(tmp_called_name_30);
            Py_DECREF(tmp_called_name_32);
            Py_DECREF(tmp_called_name_34);
            Py_DECREF(tmp_called_name_36);
            Py_DECREF(tmp_called_name_38);
            Py_DECREF(tmp_called_name_40);
            Py_DECREF(tmp_called_name_42);
            Py_DECREF(tmp_called_name_44);
            Py_DECREF(tmp_called_name_46);
            Py_DECREF(tmp_called_name_48);
            Py_DECREF(tmp_called_name_50);
            Py_DECREF(tmp_called_name_52);
            Py_DECREF(tmp_called_name_54);
            Py_DECREF(tmp_called_name_56);
            Py_DECREF(tmp_called_name_58);
            Py_DECREF(tmp_called_name_60);
            Py_DECREF(tmp_called_name_62);
            Py_DECREF(tmp_called_name_64);
            Py_DECREF(tmp_called_name_66);
            Py_DECREF(tmp_called_name_68);
            Py_DECREF(tmp_called_name_70);
            Py_DECREF(tmp_called_name_72);
            Py_DECREF(tmp_called_name_74);
            Py_DECREF(tmp_called_name_76);
            Py_DECREF(tmp_called_name_78);
            Py_DECREF(tmp_called_name_80);
            Py_DECREF(tmp_called_name_82);
            Py_DECREF(tmp_called_name_84);
            Py_DECREF(tmp_called_name_86);
            Py_DECREF(tmp_called_name_88);
            Py_DECREF(tmp_called_name_90);
            Py_DECREF(tmp_called_name_92);
            Py_DECREF(tmp_called_name_94);
            Py_DECREF(tmp_called_name_96);
            Py_DECREF(tmp_called_name_98);
            Py_DECREF(tmp_called_name_100);
            Py_DECREF(tmp_called_name_102);
            Py_DECREF(tmp_called_name_104);
            Py_DECREF(tmp_called_name_106);
            Py_DECREF(tmp_called_name_108);
            Py_DECREF(tmp_called_name_110);
            Py_DECREF(tmp_called_name_112);
            Py_DECREF(tmp_called_name_114);
            Py_DECREF(tmp_called_name_116);
            Py_DECREF(tmp_called_name_118);
            Py_DECREF(tmp_called_name_120);
            Py_DECREF(tmp_called_name_122);
            Py_DECREF(tmp_called_name_124);

            exception_lineno = 97;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_handle);
        tmp_called_name_129 = var_handle;
        frame_1e465c63423cecf32f0c62928e893560->m_frame.f_lineno = 98;
        tmp_called_name_128 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_129, mod_consts[69]);
        if (tmp_called_name_128 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_2);
            Py_DECREF(tmp_called_name_4);
            Py_DECREF(tmp_called_name_6);
            Py_DECREF(tmp_called_name_8);
            Py_DECREF(tmp_called_name_10);
            Py_DECREF(tmp_called_name_12);
            Py_DECREF(tmp_called_name_14);
            Py_DECREF(tmp_called_name_16);
            Py_DECREF(tmp_called_name_18);
            Py_DECREF(tmp_called_name_20);
            Py_DECREF(tmp_called_name_22);
            Py_DECREF(tmp_called_name_24);
            Py_DECREF(tmp_called_name_26);
            Py_DECREF(tmp_called_name_28);
            Py_DECREF(tmp_called_name_30);
            Py_DECREF(tmp_called_name_32);
            Py_DECREF(tmp_called_name_34);
            Py_DECREF(tmp_called_name_36);
            Py_DECREF(tmp_called_name_38);
            Py_DECREF(tmp_called_name_40);
            Py_DECREF(tmp_called_name_42);
            Py_DECREF(tmp_called_name_44);
            Py_DECREF(tmp_called_name_46);
            Py_DECREF(tmp_called_name_48);
            Py_DECREF(tmp_called_name_50);
            Py_DECREF(tmp_called_name_52);
            Py_DECREF(tmp_called_name_54);
            Py_DECREF(tmp_called_name_56);
            Py_DECREF(tmp_called_name_58);
            Py_DECREF(tmp_called_name_60);
            Py_DECREF(tmp_called_name_62);
            Py_DECREF(tmp_called_name_64);
            Py_DECREF(tmp_called_name_66);
            Py_DECREF(tmp_called_name_68);
            Py_DECREF(tmp_called_name_70);
            Py_DECREF(tmp_called_name_72);
            Py_DECREF(tmp_called_name_74);
            Py_DECREF(tmp_called_name_76);
            Py_DECREF(tmp_called_name_78);
            Py_DECREF(tmp_called_name_80);
            Py_DECREF(tmp_called_name_82);
            Py_DECREF(tmp_called_name_84);
            Py_DECREF(tmp_called_name_86);
            Py_DECREF(tmp_called_name_88);
            Py_DECREF(tmp_called_name_90);
            Py_DECREF(tmp_called_name_92);
            Py_DECREF(tmp_called_name_94);
            Py_DECREF(tmp_called_name_96);
            Py_DECREF(tmp_called_name_98);
            Py_DECREF(tmp_called_name_100);
            Py_DECREF(tmp_called_name_102);
            Py_DECREF(tmp_called_name_104);
            Py_DECREF(tmp_called_name_106);
            Py_DECREF(tmp_called_name_108);
            Py_DECREF(tmp_called_name_110);
            Py_DECREF(tmp_called_name_112);
            Py_DECREF(tmp_called_name_114);
            Py_DECREF(tmp_called_name_116);
            Py_DECREF(tmp_called_name_118);
            Py_DECREF(tmp_called_name_120);
            Py_DECREF(tmp_called_name_122);
            Py_DECREF(tmp_called_name_124);
            Py_DECREF(tmp_called_name_126);

            exception_lineno = 98;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_handle);
        tmp_called_name_131 = var_handle;
        frame_1e465c63423cecf32f0c62928e893560->m_frame.f_lineno = 99;
        tmp_called_name_130 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_131, mod_consts[70]);
        if (tmp_called_name_130 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_2);
            Py_DECREF(tmp_called_name_4);
            Py_DECREF(tmp_called_name_6);
            Py_DECREF(tmp_called_name_8);
            Py_DECREF(tmp_called_name_10);
            Py_DECREF(tmp_called_name_12);
            Py_DECREF(tmp_called_name_14);
            Py_DECREF(tmp_called_name_16);
            Py_DECREF(tmp_called_name_18);
            Py_DECREF(tmp_called_name_20);
            Py_DECREF(tmp_called_name_22);
            Py_DECREF(tmp_called_name_24);
            Py_DECREF(tmp_called_name_26);
            Py_DECREF(tmp_called_name_28);
            Py_DECREF(tmp_called_name_30);
            Py_DECREF(tmp_called_name_32);
            Py_DECREF(tmp_called_name_34);
            Py_DECREF(tmp_called_name_36);
            Py_DECREF(tmp_called_name_38);
            Py_DECREF(tmp_called_name_40);
            Py_DECREF(tmp_called_name_42);
            Py_DECREF(tmp_called_name_44);
            Py_DECREF(tmp_called_name_46);
            Py_DECREF(tmp_called_name_48);
            Py_DECREF(tmp_called_name_50);
            Py_DECREF(tmp_called_name_52);
            Py_DECREF(tmp_called_name_54);
            Py_DECREF(tmp_called_name_56);
            Py_DECREF(tmp_called_name_58);
            Py_DECREF(tmp_called_name_60);
            Py_DECREF(tmp_called_name_62);
            Py_DECREF(tmp_called_name_64);
            Py_DECREF(tmp_called_name_66);
            Py_DECREF(tmp_called_name_68);
            Py_DECREF(tmp_called_name_70);
            Py_DECREF(tmp_called_name_72);
            Py_DECREF(tmp_called_name_74);
            Py_DECREF(tmp_called_name_76);
            Py_DECREF(tmp_called_name_78);
            Py_DECREF(tmp_called_name_80);
            Py_DECREF(tmp_called_name_82);
            Py_DECREF(tmp_called_name_84);
            Py_DECREF(tmp_called_name_86);
            Py_DECREF(tmp_called_name_88);
            Py_DECREF(tmp_called_name_90);
            Py_DECREF(tmp_called_name_92);
            Py_DECREF(tmp_called_name_94);
            Py_DECREF(tmp_called_name_96);
            Py_DECREF(tmp_called_name_98);
            Py_DECREF(tmp_called_name_100);
            Py_DECREF(tmp_called_name_102);
            Py_DECREF(tmp_called_name_104);
            Py_DECREF(tmp_called_name_106);
            Py_DECREF(tmp_called_name_108);
            Py_DECREF(tmp_called_name_110);
            Py_DECREF(tmp_called_name_112);
            Py_DECREF(tmp_called_name_114);
            Py_DECREF(tmp_called_name_116);
            Py_DECREF(tmp_called_name_118);
            Py_DECREF(tmp_called_name_120);
            Py_DECREF(tmp_called_name_122);
            Py_DECREF(tmp_called_name_124);
            Py_DECREF(tmp_called_name_126);
            Py_DECREF(tmp_called_name_128);

            exception_lineno = 99;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_handle);
        tmp_called_name_133 = var_handle;
        frame_1e465c63423cecf32f0c62928e893560->m_frame.f_lineno = 100;
        tmp_called_name_132 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_133, mod_consts[71]);
        if (tmp_called_name_132 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_2);
            Py_DECREF(tmp_called_name_4);
            Py_DECREF(tmp_called_name_6);
            Py_DECREF(tmp_called_name_8);
            Py_DECREF(tmp_called_name_10);
            Py_DECREF(tmp_called_name_12);
            Py_DECREF(tmp_called_name_14);
            Py_DECREF(tmp_called_name_16);
            Py_DECREF(tmp_called_name_18);
            Py_DECREF(tmp_called_name_20);
            Py_DECREF(tmp_called_name_22);
            Py_DECREF(tmp_called_name_24);
            Py_DECREF(tmp_called_name_26);
            Py_DECREF(tmp_called_name_28);
            Py_DECREF(tmp_called_name_30);
            Py_DECREF(tmp_called_name_32);
            Py_DECREF(tmp_called_name_34);
            Py_DECREF(tmp_called_name_36);
            Py_DECREF(tmp_called_name_38);
            Py_DECREF(tmp_called_name_40);
            Py_DECREF(tmp_called_name_42);
            Py_DECREF(tmp_called_name_44);
            Py_DECREF(tmp_called_name_46);
            Py_DECREF(tmp_called_name_48);
            Py_DECREF(tmp_called_name_50);
            Py_DECREF(tmp_called_name_52);
            Py_DECREF(tmp_called_name_54);
            Py_DECREF(tmp_called_name_56);
            Py_DECREF(tmp_called_name_58);
            Py_DECREF(tmp_called_name_60);
            Py_DECREF(tmp_called_name_62);
            Py_DECREF(tmp_called_name_64);
            Py_DECREF(tmp_called_name_66);
            Py_DECREF(tmp_called_name_68);
            Py_DECREF(tmp_called_name_70);
            Py_DECREF(tmp_called_name_72);
            Py_DECREF(tmp_called_name_74);
            Py_DECREF(tmp_called_name_76);
            Py_DECREF(tmp_called_name_78);
            Py_DECREF(tmp_called_name_80);
            Py_DECREF(tmp_called_name_82);
            Py_DECREF(tmp_called_name_84);
            Py_DECREF(tmp_called_name_86);
            Py_DECREF(tmp_called_name_88);
            Py_DECREF(tmp_called_name_90);
            Py_DECREF(tmp_called_name_92);
            Py_DECREF(tmp_called_name_94);
            Py_DECREF(tmp_called_name_96);
            Py_DECREF(tmp_called_name_98);
            Py_DECREF(tmp_called_name_100);
            Py_DECREF(tmp_called_name_102);
            Py_DECREF(tmp_called_name_104);
            Py_DECREF(tmp_called_name_106);
            Py_DECREF(tmp_called_name_108);
            Py_DECREF(tmp_called_name_110);
            Py_DECREF(tmp_called_name_112);
            Py_DECREF(tmp_called_name_114);
            Py_DECREF(tmp_called_name_116);
            Py_DECREF(tmp_called_name_118);
            Py_DECREF(tmp_called_name_120);
            Py_DECREF(tmp_called_name_122);
            Py_DECREF(tmp_called_name_124);
            Py_DECREF(tmp_called_name_126);
            Py_DECREF(tmp_called_name_128);
            Py_DECREF(tmp_called_name_130);

            exception_lineno = 100;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_handle);
        tmp_called_name_135 = var_handle;
        frame_1e465c63423cecf32f0c62928e893560->m_frame.f_lineno = 101;
        tmp_called_name_134 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_135, mod_consts[72]);
        if (tmp_called_name_134 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_2);
            Py_DECREF(tmp_called_name_4);
            Py_DECREF(tmp_called_name_6);
            Py_DECREF(tmp_called_name_8);
            Py_DECREF(tmp_called_name_10);
            Py_DECREF(tmp_called_name_12);
            Py_DECREF(tmp_called_name_14);
            Py_DECREF(tmp_called_name_16);
            Py_DECREF(tmp_called_name_18);
            Py_DECREF(tmp_called_name_20);
            Py_DECREF(tmp_called_name_22);
            Py_DECREF(tmp_called_name_24);
            Py_DECREF(tmp_called_name_26);
            Py_DECREF(tmp_called_name_28);
            Py_DECREF(tmp_called_name_30);
            Py_DECREF(tmp_called_name_32);
            Py_DECREF(tmp_called_name_34);
            Py_DECREF(tmp_called_name_36);
            Py_DECREF(tmp_called_name_38);
            Py_DECREF(tmp_called_name_40);
            Py_DECREF(tmp_called_name_42);
            Py_DECREF(tmp_called_name_44);
            Py_DECREF(tmp_called_name_46);
            Py_DECREF(tmp_called_name_48);
            Py_DECREF(tmp_called_name_50);
            Py_DECREF(tmp_called_name_52);
            Py_DECREF(tmp_called_name_54);
            Py_DECREF(tmp_called_name_56);
            Py_DECREF(tmp_called_name_58);
            Py_DECREF(tmp_called_name_60);
            Py_DECREF(tmp_called_name_62);
            Py_DECREF(tmp_called_name_64);
            Py_DECREF(tmp_called_name_66);
            Py_DECREF(tmp_called_name_68);
            Py_DECREF(tmp_called_name_70);
            Py_DECREF(tmp_called_name_72);
            Py_DECREF(tmp_called_name_74);
            Py_DECREF(tmp_called_name_76);
            Py_DECREF(tmp_called_name_78);
            Py_DECREF(tmp_called_name_80);
            Py_DECREF(tmp_called_name_82);
            Py_DECREF(tmp_called_name_84);
            Py_DECREF(tmp_called_name_86);
            Py_DECREF(tmp_called_name_88);
            Py_DECREF(tmp_called_name_90);
            Py_DECREF(tmp_called_name_92);
            Py_DECREF(tmp_called_name_94);
            Py_DECREF(tmp_called_name_96);
            Py_DECREF(tmp_called_name_98);
            Py_DECREF(tmp_called_name_100);
            Py_DECREF(tmp_called_name_102);
            Py_DECREF(tmp_called_name_104);
            Py_DECREF(tmp_called_name_106);
            Py_DECREF(tmp_called_name_108);
            Py_DECREF(tmp_called_name_110);
            Py_DECREF(tmp_called_name_112);
            Py_DECREF(tmp_called_name_114);
            Py_DECREF(tmp_called_name_116);
            Py_DECREF(tmp_called_name_118);
            Py_DECREF(tmp_called_name_120);
            Py_DECREF(tmp_called_name_122);
            Py_DECREF(tmp_called_name_124);
            Py_DECREF(tmp_called_name_126);
            Py_DECREF(tmp_called_name_128);
            Py_DECREF(tmp_called_name_130);
            Py_DECREF(tmp_called_name_132);

            exception_lineno = 101;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_handle);
        tmp_called_name_137 = var_handle;
        frame_1e465c63423cecf32f0c62928e893560->m_frame.f_lineno = 102;
        tmp_called_name_136 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_137, mod_consts[73]);
        if (tmp_called_name_136 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_2);
            Py_DECREF(tmp_called_name_4);
            Py_DECREF(tmp_called_name_6);
            Py_DECREF(tmp_called_name_8);
            Py_DECREF(tmp_called_name_10);
            Py_DECREF(tmp_called_name_12);
            Py_DECREF(tmp_called_name_14);
            Py_DECREF(tmp_called_name_16);
            Py_DECREF(tmp_called_name_18);
            Py_DECREF(tmp_called_name_20);
            Py_DECREF(tmp_called_name_22);
            Py_DECREF(tmp_called_name_24);
            Py_DECREF(tmp_called_name_26);
            Py_DECREF(tmp_called_name_28);
            Py_DECREF(tmp_called_name_30);
            Py_DECREF(tmp_called_name_32);
            Py_DECREF(tmp_called_name_34);
            Py_DECREF(tmp_called_name_36);
            Py_DECREF(tmp_called_name_38);
            Py_DECREF(tmp_called_name_40);
            Py_DECREF(tmp_called_name_42);
            Py_DECREF(tmp_called_name_44);
            Py_DECREF(tmp_called_name_46);
            Py_DECREF(tmp_called_name_48);
            Py_DECREF(tmp_called_name_50);
            Py_DECREF(tmp_called_name_52);
            Py_DECREF(tmp_called_name_54);
            Py_DECREF(tmp_called_name_56);
            Py_DECREF(tmp_called_name_58);
            Py_DECREF(tmp_called_name_60);
            Py_DECREF(tmp_called_name_62);
            Py_DECREF(tmp_called_name_64);
            Py_DECREF(tmp_called_name_66);
            Py_DECREF(tmp_called_name_68);
            Py_DECREF(tmp_called_name_70);
            Py_DECREF(tmp_called_name_72);
            Py_DECREF(tmp_called_name_74);
            Py_DECREF(tmp_called_name_76);
            Py_DECREF(tmp_called_name_78);
            Py_DECREF(tmp_called_name_80);
            Py_DECREF(tmp_called_name_82);
            Py_DECREF(tmp_called_name_84);
            Py_DECREF(tmp_called_name_86);
            Py_DECREF(tmp_called_name_88);
            Py_DECREF(tmp_called_name_90);
            Py_DECREF(tmp_called_name_92);
            Py_DECREF(tmp_called_name_94);
            Py_DECREF(tmp_called_name_96);
            Py_DECREF(tmp_called_name_98);
            Py_DECREF(tmp_called_name_100);
            Py_DECREF(tmp_called_name_102);
            Py_DECREF(tmp_called_name_104);
            Py_DECREF(tmp_called_name_106);
            Py_DECREF(tmp_called_name_108);
            Py_DECREF(tmp_called_name_110);
            Py_DECREF(tmp_called_name_112);
            Py_DECREF(tmp_called_name_114);
            Py_DECREF(tmp_called_name_116);
            Py_DECREF(tmp_called_name_118);
            Py_DECREF(tmp_called_name_120);
            Py_DECREF(tmp_called_name_122);
            Py_DECREF(tmp_called_name_124);
            Py_DECREF(tmp_called_name_126);
            Py_DECREF(tmp_called_name_128);
            Py_DECREF(tmp_called_name_130);
            Py_DECREF(tmp_called_name_132);
            Py_DECREF(tmp_called_name_134);

            exception_lineno = 102;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_handle);
        tmp_called_name_139 = var_handle;
        frame_1e465c63423cecf32f0c62928e893560->m_frame.f_lineno = 103;
        tmp_called_name_138 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_139, mod_consts[74]);
        if (tmp_called_name_138 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_2);
            Py_DECREF(tmp_called_name_4);
            Py_DECREF(tmp_called_name_6);
            Py_DECREF(tmp_called_name_8);
            Py_DECREF(tmp_called_name_10);
            Py_DECREF(tmp_called_name_12);
            Py_DECREF(tmp_called_name_14);
            Py_DECREF(tmp_called_name_16);
            Py_DECREF(tmp_called_name_18);
            Py_DECREF(tmp_called_name_20);
            Py_DECREF(tmp_called_name_22);
            Py_DECREF(tmp_called_name_24);
            Py_DECREF(tmp_called_name_26);
            Py_DECREF(tmp_called_name_28);
            Py_DECREF(tmp_called_name_30);
            Py_DECREF(tmp_called_name_32);
            Py_DECREF(tmp_called_name_34);
            Py_DECREF(tmp_called_name_36);
            Py_DECREF(tmp_called_name_38);
            Py_DECREF(tmp_called_name_40);
            Py_DECREF(tmp_called_name_42);
            Py_DECREF(tmp_called_name_44);
            Py_DECREF(tmp_called_name_46);
            Py_DECREF(tmp_called_name_48);
            Py_DECREF(tmp_called_name_50);
            Py_DECREF(tmp_called_name_52);
            Py_DECREF(tmp_called_name_54);
            Py_DECREF(tmp_called_name_56);
            Py_DECREF(tmp_called_name_58);
            Py_DECREF(tmp_called_name_60);
            Py_DECREF(tmp_called_name_62);
            Py_DECREF(tmp_called_name_64);
            Py_DECREF(tmp_called_name_66);
            Py_DECREF(tmp_called_name_68);
            Py_DECREF(tmp_called_name_70);
            Py_DECREF(tmp_called_name_72);
            Py_DECREF(tmp_called_name_74);
            Py_DECREF(tmp_called_name_76);
            Py_DECREF(tmp_called_name_78);
            Py_DECREF(tmp_called_name_80);
            Py_DECREF(tmp_called_name_82);
            Py_DECREF(tmp_called_name_84);
            Py_DECREF(tmp_called_name_86);
            Py_DECREF(tmp_called_name_88);
            Py_DECREF(tmp_called_name_90);
            Py_DECREF(tmp_called_name_92);
            Py_DECREF(tmp_called_name_94);
            Py_DECREF(tmp_called_name_96);
            Py_DECREF(tmp_called_name_98);
            Py_DECREF(tmp_called_name_100);
            Py_DECREF(tmp_called_name_102);
            Py_DECREF(tmp_called_name_104);
            Py_DECREF(tmp_called_name_106);
            Py_DECREF(tmp_called_name_108);
            Py_DECREF(tmp_called_name_110);
            Py_DECREF(tmp_called_name_112);
            Py_DECREF(tmp_called_name_114);
            Py_DECREF(tmp_called_name_116);
            Py_DECREF(tmp_called_name_118);
            Py_DECREF(tmp_called_name_120);
            Py_DECREF(tmp_called_name_122);
            Py_DECREF(tmp_called_name_124);
            Py_DECREF(tmp_called_name_126);
            Py_DECREF(tmp_called_name_128);
            Py_DECREF(tmp_called_name_130);
            Py_DECREF(tmp_called_name_132);
            Py_DECREF(tmp_called_name_134);
            Py_DECREF(tmp_called_name_136);

            exception_lineno = 103;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_handle);
        tmp_called_name_141 = var_handle;
        frame_1e465c63423cecf32f0c62928e893560->m_frame.f_lineno = 104;
        tmp_called_name_140 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_141, mod_consts[75]);
        if (tmp_called_name_140 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_2);
            Py_DECREF(tmp_called_name_4);
            Py_DECREF(tmp_called_name_6);
            Py_DECREF(tmp_called_name_8);
            Py_DECREF(tmp_called_name_10);
            Py_DECREF(tmp_called_name_12);
            Py_DECREF(tmp_called_name_14);
            Py_DECREF(tmp_called_name_16);
            Py_DECREF(tmp_called_name_18);
            Py_DECREF(tmp_called_name_20);
            Py_DECREF(tmp_called_name_22);
            Py_DECREF(tmp_called_name_24);
            Py_DECREF(tmp_called_name_26);
            Py_DECREF(tmp_called_name_28);
            Py_DECREF(tmp_called_name_30);
            Py_DECREF(tmp_called_name_32);
            Py_DECREF(tmp_called_name_34);
            Py_DECREF(tmp_called_name_36);
            Py_DECREF(tmp_called_name_38);
            Py_DECREF(tmp_called_name_40);
            Py_DECREF(tmp_called_name_42);
            Py_DECREF(tmp_called_name_44);
            Py_DECREF(tmp_called_name_46);
            Py_DECREF(tmp_called_name_48);
            Py_DECREF(tmp_called_name_50);
            Py_DECREF(tmp_called_name_52);
            Py_DECREF(tmp_called_name_54);
            Py_DECREF(tmp_called_name_56);
            Py_DECREF(tmp_called_name_58);
            Py_DECREF(tmp_called_name_60);
            Py_DECREF(tmp_called_name_62);
            Py_DECREF(tmp_called_name_64);
            Py_DECREF(tmp_called_name_66);
            Py_DECREF(tmp_called_name_68);
            Py_DECREF(tmp_called_name_70);
            Py_DECREF(tmp_called_name_72);
            Py_DECREF(tmp_called_name_74);
            Py_DECREF(tmp_called_name_76);
            Py_DECREF(tmp_called_name_78);
            Py_DECREF(tmp_called_name_80);
            Py_DECREF(tmp_called_name_82);
            Py_DECREF(tmp_called_name_84);
            Py_DECREF(tmp_called_name_86);
            Py_DECREF(tmp_called_name_88);
            Py_DECREF(tmp_called_name_90);
            Py_DECREF(tmp_called_name_92);
            Py_DECREF(tmp_called_name_94);
            Py_DECREF(tmp_called_name_96);
            Py_DECREF(tmp_called_name_98);
            Py_DECREF(tmp_called_name_100);
            Py_DECREF(tmp_called_name_102);
            Py_DECREF(tmp_called_name_104);
            Py_DECREF(tmp_called_name_106);
            Py_DECREF(tmp_called_name_108);
            Py_DECREF(tmp_called_name_110);
            Py_DECREF(tmp_called_name_112);
            Py_DECREF(tmp_called_name_114);
            Py_DECREF(tmp_called_name_116);
            Py_DECREF(tmp_called_name_118);
            Py_DECREF(tmp_called_name_120);
            Py_DECREF(tmp_called_name_122);
            Py_DECREF(tmp_called_name_124);
            Py_DECREF(tmp_called_name_126);
            Py_DECREF(tmp_called_name_128);
            Py_DECREF(tmp_called_name_130);
            Py_DECREF(tmp_called_name_132);
            Py_DECREF(tmp_called_name_134);
            Py_DECREF(tmp_called_name_136);
            Py_DECREF(tmp_called_name_138);

            exception_lineno = 104;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_handle);
        tmp_called_name_143 = var_handle;
        frame_1e465c63423cecf32f0c62928e893560->m_frame.f_lineno = 105;
        tmp_called_name_142 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_143, mod_consts[76]);
        if (tmp_called_name_142 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_2);
            Py_DECREF(tmp_called_name_4);
            Py_DECREF(tmp_called_name_6);
            Py_DECREF(tmp_called_name_8);
            Py_DECREF(tmp_called_name_10);
            Py_DECREF(tmp_called_name_12);
            Py_DECREF(tmp_called_name_14);
            Py_DECREF(tmp_called_name_16);
            Py_DECREF(tmp_called_name_18);
            Py_DECREF(tmp_called_name_20);
            Py_DECREF(tmp_called_name_22);
            Py_DECREF(tmp_called_name_24);
            Py_DECREF(tmp_called_name_26);
            Py_DECREF(tmp_called_name_28);
            Py_DECREF(tmp_called_name_30);
            Py_DECREF(tmp_called_name_32);
            Py_DECREF(tmp_called_name_34);
            Py_DECREF(tmp_called_name_36);
            Py_DECREF(tmp_called_name_38);
            Py_DECREF(tmp_called_name_40);
            Py_DECREF(tmp_called_name_42);
            Py_DECREF(tmp_called_name_44);
            Py_DECREF(tmp_called_name_46);
            Py_DECREF(tmp_called_name_48);
            Py_DECREF(tmp_called_name_50);
            Py_DECREF(tmp_called_name_52);
            Py_DECREF(tmp_called_name_54);
            Py_DECREF(tmp_called_name_56);
            Py_DECREF(tmp_called_name_58);
            Py_DECREF(tmp_called_name_60);
            Py_DECREF(tmp_called_name_62);
            Py_DECREF(tmp_called_name_64);
            Py_DECREF(tmp_called_name_66);
            Py_DECREF(tmp_called_name_68);
            Py_DECREF(tmp_called_name_70);
            Py_DECREF(tmp_called_name_72);
            Py_DECREF(tmp_called_name_74);
            Py_DECREF(tmp_called_name_76);
            Py_DECREF(tmp_called_name_78);
            Py_DECREF(tmp_called_name_80);
            Py_DECREF(tmp_called_name_82);
            Py_DECREF(tmp_called_name_84);
            Py_DECREF(tmp_called_name_86);
            Py_DECREF(tmp_called_name_88);
            Py_DECREF(tmp_called_name_90);
            Py_DECREF(tmp_called_name_92);
            Py_DECREF(tmp_called_name_94);
            Py_DECREF(tmp_called_name_96);
            Py_DECREF(tmp_called_name_98);
            Py_DECREF(tmp_called_name_100);
            Py_DECREF(tmp_called_name_102);
            Py_DECREF(tmp_called_name_104);
            Py_DECREF(tmp_called_name_106);
            Py_DECREF(tmp_called_name_108);
            Py_DECREF(tmp_called_name_110);
            Py_DECREF(tmp_called_name_112);
            Py_DECREF(tmp_called_name_114);
            Py_DECREF(tmp_called_name_116);
            Py_DECREF(tmp_called_name_118);
            Py_DECREF(tmp_called_name_120);
            Py_DECREF(tmp_called_name_122);
            Py_DECREF(tmp_called_name_124);
            Py_DECREF(tmp_called_name_126);
            Py_DECREF(tmp_called_name_128);
            Py_DECREF(tmp_called_name_130);
            Py_DECREF(tmp_called_name_132);
            Py_DECREF(tmp_called_name_134);
            Py_DECREF(tmp_called_name_136);
            Py_DECREF(tmp_called_name_138);
            Py_DECREF(tmp_called_name_140);

            exception_lineno = 105;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_handle);
        tmp_called_name_145 = var_handle;
        frame_1e465c63423cecf32f0c62928e893560->m_frame.f_lineno = 106;
        tmp_called_name_144 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_145, mod_consts[77]);
        if (tmp_called_name_144 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_2);
            Py_DECREF(tmp_called_name_4);
            Py_DECREF(tmp_called_name_6);
            Py_DECREF(tmp_called_name_8);
            Py_DECREF(tmp_called_name_10);
            Py_DECREF(tmp_called_name_12);
            Py_DECREF(tmp_called_name_14);
            Py_DECREF(tmp_called_name_16);
            Py_DECREF(tmp_called_name_18);
            Py_DECREF(tmp_called_name_20);
            Py_DECREF(tmp_called_name_22);
            Py_DECREF(tmp_called_name_24);
            Py_DECREF(tmp_called_name_26);
            Py_DECREF(tmp_called_name_28);
            Py_DECREF(tmp_called_name_30);
            Py_DECREF(tmp_called_name_32);
            Py_DECREF(tmp_called_name_34);
            Py_DECREF(tmp_called_name_36);
            Py_DECREF(tmp_called_name_38);
            Py_DECREF(tmp_called_name_40);
            Py_DECREF(tmp_called_name_42);
            Py_DECREF(tmp_called_name_44);
            Py_DECREF(tmp_called_name_46);
            Py_DECREF(tmp_called_name_48);
            Py_DECREF(tmp_called_name_50);
            Py_DECREF(tmp_called_name_52);
            Py_DECREF(tmp_called_name_54);
            Py_DECREF(tmp_called_name_56);
            Py_DECREF(tmp_called_name_58);
            Py_DECREF(tmp_called_name_60);
            Py_DECREF(tmp_called_name_62);
            Py_DECREF(tmp_called_name_64);
            Py_DECREF(tmp_called_name_66);
            Py_DECREF(tmp_called_name_68);
            Py_DECREF(tmp_called_name_70);
            Py_DECREF(tmp_called_name_72);
            Py_DECREF(tmp_called_name_74);
            Py_DECREF(tmp_called_name_76);
            Py_DECREF(tmp_called_name_78);
            Py_DECREF(tmp_called_name_80);
            Py_DECREF(tmp_called_name_82);
            Py_DECREF(tmp_called_name_84);
            Py_DECREF(tmp_called_name_86);
            Py_DECREF(tmp_called_name_88);
            Py_DECREF(tmp_called_name_90);
            Py_DECREF(tmp_called_name_92);
            Py_DECREF(tmp_called_name_94);
            Py_DECREF(tmp_called_name_96);
            Py_DECREF(tmp_called_name_98);
            Py_DECREF(tmp_called_name_100);
            Py_DECREF(tmp_called_name_102);
            Py_DECREF(tmp_called_name_104);
            Py_DECREF(tmp_called_name_106);
            Py_DECREF(tmp_called_name_108);
            Py_DECREF(tmp_called_name_110);
            Py_DECREF(tmp_called_name_112);
            Py_DECREF(tmp_called_name_114);
            Py_DECREF(tmp_called_name_116);
            Py_DECREF(tmp_called_name_118);
            Py_DECREF(tmp_called_name_120);
            Py_DECREF(tmp_called_name_122);
            Py_DECREF(tmp_called_name_124);
            Py_DECREF(tmp_called_name_126);
            Py_DECREF(tmp_called_name_128);
            Py_DECREF(tmp_called_name_130);
            Py_DECREF(tmp_called_name_132);
            Py_DECREF(tmp_called_name_134);
            Py_DECREF(tmp_called_name_136);
            Py_DECREF(tmp_called_name_138);
            Py_DECREF(tmp_called_name_140);
            Py_DECREF(tmp_called_name_142);

            exception_lineno = 106;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_handle);
        tmp_called_name_147 = var_handle;
        frame_1e465c63423cecf32f0c62928e893560->m_frame.f_lineno = 107;
        tmp_called_name_146 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_147, mod_consts[78]);
        if (tmp_called_name_146 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_2);
            Py_DECREF(tmp_called_name_4);
            Py_DECREF(tmp_called_name_6);
            Py_DECREF(tmp_called_name_8);
            Py_DECREF(tmp_called_name_10);
            Py_DECREF(tmp_called_name_12);
            Py_DECREF(tmp_called_name_14);
            Py_DECREF(tmp_called_name_16);
            Py_DECREF(tmp_called_name_18);
            Py_DECREF(tmp_called_name_20);
            Py_DECREF(tmp_called_name_22);
            Py_DECREF(tmp_called_name_24);
            Py_DECREF(tmp_called_name_26);
            Py_DECREF(tmp_called_name_28);
            Py_DECREF(tmp_called_name_30);
            Py_DECREF(tmp_called_name_32);
            Py_DECREF(tmp_called_name_34);
            Py_DECREF(tmp_called_name_36);
            Py_DECREF(tmp_called_name_38);
            Py_DECREF(tmp_called_name_40);
            Py_DECREF(tmp_called_name_42);
            Py_DECREF(tmp_called_name_44);
            Py_DECREF(tmp_called_name_46);
            Py_DECREF(tmp_called_name_48);
            Py_DECREF(tmp_called_name_50);
            Py_DECREF(tmp_called_name_52);
            Py_DECREF(tmp_called_name_54);
            Py_DECREF(tmp_called_name_56);
            Py_DECREF(tmp_called_name_58);
            Py_DECREF(tmp_called_name_60);
            Py_DECREF(tmp_called_name_62);
            Py_DECREF(tmp_called_name_64);
            Py_DECREF(tmp_called_name_66);
            Py_DECREF(tmp_called_name_68);
            Py_DECREF(tmp_called_name_70);
            Py_DECREF(tmp_called_name_72);
            Py_DECREF(tmp_called_name_74);
            Py_DECREF(tmp_called_name_76);
            Py_DECREF(tmp_called_name_78);
            Py_DECREF(tmp_called_name_80);
            Py_DECREF(tmp_called_name_82);
            Py_DECREF(tmp_called_name_84);
            Py_DECREF(tmp_called_name_86);
            Py_DECREF(tmp_called_name_88);
            Py_DECREF(tmp_called_name_90);
            Py_DECREF(tmp_called_name_92);
            Py_DECREF(tmp_called_name_94);
            Py_DECREF(tmp_called_name_96);
            Py_DECREF(tmp_called_name_98);
            Py_DECREF(tmp_called_name_100);
            Py_DECREF(tmp_called_name_102);
            Py_DECREF(tmp_called_name_104);
            Py_DECREF(tmp_called_name_106);
            Py_DECREF(tmp_called_name_108);
            Py_DECREF(tmp_called_name_110);
            Py_DECREF(tmp_called_name_112);
            Py_DECREF(tmp_called_name_114);
            Py_DECREF(tmp_called_name_116);
            Py_DECREF(tmp_called_name_118);
            Py_DECREF(tmp_called_name_120);
            Py_DECREF(tmp_called_name_122);
            Py_DECREF(tmp_called_name_124);
            Py_DECREF(tmp_called_name_126);
            Py_DECREF(tmp_called_name_128);
            Py_DECREF(tmp_called_name_130);
            Py_DECREF(tmp_called_name_132);
            Py_DECREF(tmp_called_name_134);
            Py_DECREF(tmp_called_name_136);
            Py_DECREF(tmp_called_name_138);
            Py_DECREF(tmp_called_name_140);
            Py_DECREF(tmp_called_name_142);
            Py_DECREF(tmp_called_name_144);

            exception_lineno = 107;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_handle);
        tmp_called_name_149 = var_handle;
        frame_1e465c63423cecf32f0c62928e893560->m_frame.f_lineno = 108;
        tmp_called_name_148 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_149, mod_consts[79]);
        if (tmp_called_name_148 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_2);
            Py_DECREF(tmp_called_name_4);
            Py_DECREF(tmp_called_name_6);
            Py_DECREF(tmp_called_name_8);
            Py_DECREF(tmp_called_name_10);
            Py_DECREF(tmp_called_name_12);
            Py_DECREF(tmp_called_name_14);
            Py_DECREF(tmp_called_name_16);
            Py_DECREF(tmp_called_name_18);
            Py_DECREF(tmp_called_name_20);
            Py_DECREF(tmp_called_name_22);
            Py_DECREF(tmp_called_name_24);
            Py_DECREF(tmp_called_name_26);
            Py_DECREF(tmp_called_name_28);
            Py_DECREF(tmp_called_name_30);
            Py_DECREF(tmp_called_name_32);
            Py_DECREF(tmp_called_name_34);
            Py_DECREF(tmp_called_name_36);
            Py_DECREF(tmp_called_name_38);
            Py_DECREF(tmp_called_name_40);
            Py_DECREF(tmp_called_name_42);
            Py_DECREF(tmp_called_name_44);
            Py_DECREF(tmp_called_name_46);
            Py_DECREF(tmp_called_name_48);
            Py_DECREF(tmp_called_name_50);
            Py_DECREF(tmp_called_name_52);
            Py_DECREF(tmp_called_name_54);
            Py_DECREF(tmp_called_name_56);
            Py_DECREF(tmp_called_name_58);
            Py_DECREF(tmp_called_name_60);
            Py_DECREF(tmp_called_name_62);
            Py_DECREF(tmp_called_name_64);
            Py_DECREF(tmp_called_name_66);
            Py_DECREF(tmp_called_name_68);
            Py_DECREF(tmp_called_name_70);
            Py_DECREF(tmp_called_name_72);
            Py_DECREF(tmp_called_name_74);
            Py_DECREF(tmp_called_name_76);
            Py_DECREF(tmp_called_name_78);
            Py_DECREF(tmp_called_name_80);
            Py_DECREF(tmp_called_name_82);
            Py_DECREF(tmp_called_name_84);
            Py_DECREF(tmp_called_name_86);
            Py_DECREF(tmp_called_name_88);
            Py_DECREF(tmp_called_name_90);
            Py_DECREF(tmp_called_name_92);
            Py_DECREF(tmp_called_name_94);
            Py_DECREF(tmp_called_name_96);
            Py_DECREF(tmp_called_name_98);
            Py_DECREF(tmp_called_name_100);
            Py_DECREF(tmp_called_name_102);
            Py_DECREF(tmp_called_name_104);
            Py_DECREF(tmp_called_name_106);
            Py_DECREF(tmp_called_name_108);
            Py_DECREF(tmp_called_name_110);
            Py_DECREF(tmp_called_name_112);
            Py_DECREF(tmp_called_name_114);
            Py_DECREF(tmp_called_name_116);
            Py_DECREF(tmp_called_name_118);
            Py_DECREF(tmp_called_name_120);
            Py_DECREF(tmp_called_name_122);
            Py_DECREF(tmp_called_name_124);
            Py_DECREF(tmp_called_name_126);
            Py_DECREF(tmp_called_name_128);
            Py_DECREF(tmp_called_name_130);
            Py_DECREF(tmp_called_name_132);
            Py_DECREF(tmp_called_name_134);
            Py_DECREF(tmp_called_name_136);
            Py_DECREF(tmp_called_name_138);
            Py_DECREF(tmp_called_name_140);
            Py_DECREF(tmp_called_name_142);
            Py_DECREF(tmp_called_name_144);
            Py_DECREF(tmp_called_name_146);

            exception_lineno = 108;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_handle);
        tmp_called_name_151 = var_handle;
        frame_1e465c63423cecf32f0c62928e893560->m_frame.f_lineno = 109;
        tmp_called_name_150 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_151, mod_consts[80]);
        if (tmp_called_name_150 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_2);
            Py_DECREF(tmp_called_name_4);
            Py_DECREF(tmp_called_name_6);
            Py_DECREF(tmp_called_name_8);
            Py_DECREF(tmp_called_name_10);
            Py_DECREF(tmp_called_name_12);
            Py_DECREF(tmp_called_name_14);
            Py_DECREF(tmp_called_name_16);
            Py_DECREF(tmp_called_name_18);
            Py_DECREF(tmp_called_name_20);
            Py_DECREF(tmp_called_name_22);
            Py_DECREF(tmp_called_name_24);
            Py_DECREF(tmp_called_name_26);
            Py_DECREF(tmp_called_name_28);
            Py_DECREF(tmp_called_name_30);
            Py_DECREF(tmp_called_name_32);
            Py_DECREF(tmp_called_name_34);
            Py_DECREF(tmp_called_name_36);
            Py_DECREF(tmp_called_name_38);
            Py_DECREF(tmp_called_name_40);
            Py_DECREF(tmp_called_name_42);
            Py_DECREF(tmp_called_name_44);
            Py_DECREF(tmp_called_name_46);
            Py_DECREF(tmp_called_name_48);
            Py_DECREF(tmp_called_name_50);
            Py_DECREF(tmp_called_name_52);
            Py_DECREF(tmp_called_name_54);
            Py_DECREF(tmp_called_name_56);
            Py_DECREF(tmp_called_name_58);
            Py_DECREF(tmp_called_name_60);
            Py_DECREF(tmp_called_name_62);
            Py_DECREF(tmp_called_name_64);
            Py_DECREF(tmp_called_name_66);
            Py_DECREF(tmp_called_name_68);
            Py_DECREF(tmp_called_name_70);
            Py_DECREF(tmp_called_name_72);
            Py_DECREF(tmp_called_name_74);
            Py_DECREF(tmp_called_name_76);
            Py_DECREF(tmp_called_name_78);
            Py_DECREF(tmp_called_name_80);
            Py_DECREF(tmp_called_name_82);
            Py_DECREF(tmp_called_name_84);
            Py_DECREF(tmp_called_name_86);
            Py_DECREF(tmp_called_name_88);
            Py_DECREF(tmp_called_name_90);
            Py_DECREF(tmp_called_name_92);
            Py_DECREF(tmp_called_name_94);
            Py_DECREF(tmp_called_name_96);
            Py_DECREF(tmp_called_name_98);
            Py_DECREF(tmp_called_name_100);
            Py_DECREF(tmp_called_name_102);
            Py_DECREF(tmp_called_name_104);
            Py_DECREF(tmp_called_name_106);
            Py_DECREF(tmp_called_name_108);
            Py_DECREF(tmp_called_name_110);
            Py_DECREF(tmp_called_name_112);
            Py_DECREF(tmp_called_name_114);
            Py_DECREF(tmp_called_name_116);
            Py_DECREF(tmp_called_name_118);
            Py_DECREF(tmp_called_name_120);
            Py_DECREF(tmp_called_name_122);
            Py_DECREF(tmp_called_name_124);
            Py_DECREF(tmp_called_name_126);
            Py_DECREF(tmp_called_name_128);
            Py_DECREF(tmp_called_name_130);
            Py_DECREF(tmp_called_name_132);
            Py_DECREF(tmp_called_name_134);
            Py_DECREF(tmp_called_name_136);
            Py_DECREF(tmp_called_name_138);
            Py_DECREF(tmp_called_name_140);
            Py_DECREF(tmp_called_name_142);
            Py_DECREF(tmp_called_name_144);
            Py_DECREF(tmp_called_name_146);
            Py_DECREF(tmp_called_name_148);

            exception_lineno = 109;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_handle);
        tmp_called_name_153 = var_handle;
        frame_1e465c63423cecf32f0c62928e893560->m_frame.f_lineno = 110;
        tmp_called_name_152 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_153, mod_consts[81]);
        if (tmp_called_name_152 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_2);
            Py_DECREF(tmp_called_name_4);
            Py_DECREF(tmp_called_name_6);
            Py_DECREF(tmp_called_name_8);
            Py_DECREF(tmp_called_name_10);
            Py_DECREF(tmp_called_name_12);
            Py_DECREF(tmp_called_name_14);
            Py_DECREF(tmp_called_name_16);
            Py_DECREF(tmp_called_name_18);
            Py_DECREF(tmp_called_name_20);
            Py_DECREF(tmp_called_name_22);
            Py_DECREF(tmp_called_name_24);
            Py_DECREF(tmp_called_name_26);
            Py_DECREF(tmp_called_name_28);
            Py_DECREF(tmp_called_name_30);
            Py_DECREF(tmp_called_name_32);
            Py_DECREF(tmp_called_name_34);
            Py_DECREF(tmp_called_name_36);
            Py_DECREF(tmp_called_name_38);
            Py_DECREF(tmp_called_name_40);
            Py_DECREF(tmp_called_name_42);
            Py_DECREF(tmp_called_name_44);
            Py_DECREF(tmp_called_name_46);
            Py_DECREF(tmp_called_name_48);
            Py_DECREF(tmp_called_name_50);
            Py_DECREF(tmp_called_name_52);
            Py_DECREF(tmp_called_name_54);
            Py_DECREF(tmp_called_name_56);
            Py_DECREF(tmp_called_name_58);
            Py_DECREF(tmp_called_name_60);
            Py_DECREF(tmp_called_name_62);
            Py_DECREF(tmp_called_name_64);
            Py_DECREF(tmp_called_name_66);
            Py_DECREF(tmp_called_name_68);
            Py_DECREF(tmp_called_name_70);
            Py_DECREF(tmp_called_name_72);
            Py_DECREF(tmp_called_name_74);
            Py_DECREF(tmp_called_name_76);
            Py_DECREF(tmp_called_name_78);
            Py_DECREF(tmp_called_name_80);
            Py_DECREF(tmp_called_name_82);
            Py_DECREF(tmp_called_name_84);
            Py_DECREF(tmp_called_name_86);
            Py_DECREF(tmp_called_name_88);
            Py_DECREF(tmp_called_name_90);
            Py_DECREF(tmp_called_name_92);
            Py_DECREF(tmp_called_name_94);
            Py_DECREF(tmp_called_name_96);
            Py_DECREF(tmp_called_name_98);
            Py_DECREF(tmp_called_name_100);
            Py_DECREF(tmp_called_name_102);
            Py_DECREF(tmp_called_name_104);
            Py_DECREF(tmp_called_name_106);
            Py_DECREF(tmp_called_name_108);
            Py_DECREF(tmp_called_name_110);
            Py_DECREF(tmp_called_name_112);
            Py_DECREF(tmp_called_name_114);
            Py_DECREF(tmp_called_name_116);
            Py_DECREF(tmp_called_name_118);
            Py_DECREF(tmp_called_name_120);
            Py_DECREF(tmp_called_name_122);
            Py_DECREF(tmp_called_name_124);
            Py_DECREF(tmp_called_name_126);
            Py_DECREF(tmp_called_name_128);
            Py_DECREF(tmp_called_name_130);
            Py_DECREF(tmp_called_name_132);
            Py_DECREF(tmp_called_name_134);
            Py_DECREF(tmp_called_name_136);
            Py_DECREF(tmp_called_name_138);
            Py_DECREF(tmp_called_name_140);
            Py_DECREF(tmp_called_name_142);
            Py_DECREF(tmp_called_name_144);
            Py_DECREF(tmp_called_name_146);
            Py_DECREF(tmp_called_name_148);
            Py_DECREF(tmp_called_name_150);

            exception_lineno = 110;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_handle);
        tmp_called_name_155 = var_handle;
        frame_1e465c63423cecf32f0c62928e893560->m_frame.f_lineno = 111;
        tmp_called_name_154 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_155, mod_consts[82]);
        if (tmp_called_name_154 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_2);
            Py_DECREF(tmp_called_name_4);
            Py_DECREF(tmp_called_name_6);
            Py_DECREF(tmp_called_name_8);
            Py_DECREF(tmp_called_name_10);
            Py_DECREF(tmp_called_name_12);
            Py_DECREF(tmp_called_name_14);
            Py_DECREF(tmp_called_name_16);
            Py_DECREF(tmp_called_name_18);
            Py_DECREF(tmp_called_name_20);
            Py_DECREF(tmp_called_name_22);
            Py_DECREF(tmp_called_name_24);
            Py_DECREF(tmp_called_name_26);
            Py_DECREF(tmp_called_name_28);
            Py_DECREF(tmp_called_name_30);
            Py_DECREF(tmp_called_name_32);
            Py_DECREF(tmp_called_name_34);
            Py_DECREF(tmp_called_name_36);
            Py_DECREF(tmp_called_name_38);
            Py_DECREF(tmp_called_name_40);
            Py_DECREF(tmp_called_name_42);
            Py_DECREF(tmp_called_name_44);
            Py_DECREF(tmp_called_name_46);
            Py_DECREF(tmp_called_name_48);
            Py_DECREF(tmp_called_name_50);
            Py_DECREF(tmp_called_name_52);
            Py_DECREF(tmp_called_name_54);
            Py_DECREF(tmp_called_name_56);
            Py_DECREF(tmp_called_name_58);
            Py_DECREF(tmp_called_name_60);
            Py_DECREF(tmp_called_name_62);
            Py_DECREF(tmp_called_name_64);
            Py_DECREF(tmp_called_name_66);
            Py_DECREF(tmp_called_name_68);
            Py_DECREF(tmp_called_name_70);
            Py_DECREF(tmp_called_name_72);
            Py_DECREF(tmp_called_name_74);
            Py_DECREF(tmp_called_name_76);
            Py_DECREF(tmp_called_name_78);
            Py_DECREF(tmp_called_name_80);
            Py_DECREF(tmp_called_name_82);
            Py_DECREF(tmp_called_name_84);
            Py_DECREF(tmp_called_name_86);
            Py_DECREF(tmp_called_name_88);
            Py_DECREF(tmp_called_name_90);
            Py_DECREF(tmp_called_name_92);
            Py_DECREF(tmp_called_name_94);
            Py_DECREF(tmp_called_name_96);
            Py_DECREF(tmp_called_name_98);
            Py_DECREF(tmp_called_name_100);
            Py_DECREF(tmp_called_name_102);
            Py_DECREF(tmp_called_name_104);
            Py_DECREF(tmp_called_name_106);
            Py_DECREF(tmp_called_name_108);
            Py_DECREF(tmp_called_name_110);
            Py_DECREF(tmp_called_name_112);
            Py_DECREF(tmp_called_name_114);
            Py_DECREF(tmp_called_name_116);
            Py_DECREF(tmp_called_name_118);
            Py_DECREF(tmp_called_name_120);
            Py_DECREF(tmp_called_name_122);
            Py_DECREF(tmp_called_name_124);
            Py_DECREF(tmp_called_name_126);
            Py_DECREF(tmp_called_name_128);
            Py_DECREF(tmp_called_name_130);
            Py_DECREF(tmp_called_name_132);
            Py_DECREF(tmp_called_name_134);
            Py_DECREF(tmp_called_name_136);
            Py_DECREF(tmp_called_name_138);
            Py_DECREF(tmp_called_name_140);
            Py_DECREF(tmp_called_name_142);
            Py_DECREF(tmp_called_name_144);
            Py_DECREF(tmp_called_name_146);
            Py_DECREF(tmp_called_name_148);
            Py_DECREF(tmp_called_name_150);
            Py_DECREF(tmp_called_name_152);

            exception_lineno = 111;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_handle);
        tmp_called_name_157 = var_handle;
        frame_1e465c63423cecf32f0c62928e893560->m_frame.f_lineno = 112;
        tmp_called_name_156 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_157, mod_consts[83]);
        if (tmp_called_name_156 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_2);
            Py_DECREF(tmp_called_name_4);
            Py_DECREF(tmp_called_name_6);
            Py_DECREF(tmp_called_name_8);
            Py_DECREF(tmp_called_name_10);
            Py_DECREF(tmp_called_name_12);
            Py_DECREF(tmp_called_name_14);
            Py_DECREF(tmp_called_name_16);
            Py_DECREF(tmp_called_name_18);
            Py_DECREF(tmp_called_name_20);
            Py_DECREF(tmp_called_name_22);
            Py_DECREF(tmp_called_name_24);
            Py_DECREF(tmp_called_name_26);
            Py_DECREF(tmp_called_name_28);
            Py_DECREF(tmp_called_name_30);
            Py_DECREF(tmp_called_name_32);
            Py_DECREF(tmp_called_name_34);
            Py_DECREF(tmp_called_name_36);
            Py_DECREF(tmp_called_name_38);
            Py_DECREF(tmp_called_name_40);
            Py_DECREF(tmp_called_name_42);
            Py_DECREF(tmp_called_name_44);
            Py_DECREF(tmp_called_name_46);
            Py_DECREF(tmp_called_name_48);
            Py_DECREF(tmp_called_name_50);
            Py_DECREF(tmp_called_name_52);
            Py_DECREF(tmp_called_name_54);
            Py_DECREF(tmp_called_name_56);
            Py_DECREF(tmp_called_name_58);
            Py_DECREF(tmp_called_name_60);
            Py_DECREF(tmp_called_name_62);
            Py_DECREF(tmp_called_name_64);
            Py_DECREF(tmp_called_name_66);
            Py_DECREF(tmp_called_name_68);
            Py_DECREF(tmp_called_name_70);
            Py_DECREF(tmp_called_name_72);
            Py_DECREF(tmp_called_name_74);
            Py_DECREF(tmp_called_name_76);
            Py_DECREF(tmp_called_name_78);
            Py_DECREF(tmp_called_name_80);
            Py_DECREF(tmp_called_name_82);
            Py_DECREF(tmp_called_name_84);
            Py_DECREF(tmp_called_name_86);
            Py_DECREF(tmp_called_name_88);
            Py_DECREF(tmp_called_name_90);
            Py_DECREF(tmp_called_name_92);
            Py_DECREF(tmp_called_name_94);
            Py_DECREF(tmp_called_name_96);
            Py_DECREF(tmp_called_name_98);
            Py_DECREF(tmp_called_name_100);
            Py_DECREF(tmp_called_name_102);
            Py_DECREF(tmp_called_name_104);
            Py_DECREF(tmp_called_name_106);
            Py_DECREF(tmp_called_name_108);
            Py_DECREF(tmp_called_name_110);
            Py_DECREF(tmp_called_name_112);
            Py_DECREF(tmp_called_name_114);
            Py_DECREF(tmp_called_name_116);
            Py_DECREF(tmp_called_name_118);
            Py_DECREF(tmp_called_name_120);
            Py_DECREF(tmp_called_name_122);
            Py_DECREF(tmp_called_name_124);
            Py_DECREF(tmp_called_name_126);
            Py_DECREF(tmp_called_name_128);
            Py_DECREF(tmp_called_name_130);
            Py_DECREF(tmp_called_name_132);
            Py_DECREF(tmp_called_name_134);
            Py_DECREF(tmp_called_name_136);
            Py_DECREF(tmp_called_name_138);
            Py_DECREF(tmp_called_name_140);
            Py_DECREF(tmp_called_name_142);
            Py_DECREF(tmp_called_name_144);
            Py_DECREF(tmp_called_name_146);
            Py_DECREF(tmp_called_name_148);
            Py_DECREF(tmp_called_name_150);
            Py_DECREF(tmp_called_name_152);
            Py_DECREF(tmp_called_name_154);

            exception_lineno = 112;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_handle);
        tmp_called_name_159 = var_handle;
        frame_1e465c63423cecf32f0c62928e893560->m_frame.f_lineno = 113;
        tmp_called_name_158 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_159, mod_consts[84]);
        if (tmp_called_name_158 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_2);
            Py_DECREF(tmp_called_name_4);
            Py_DECREF(tmp_called_name_6);
            Py_DECREF(tmp_called_name_8);
            Py_DECREF(tmp_called_name_10);
            Py_DECREF(tmp_called_name_12);
            Py_DECREF(tmp_called_name_14);
            Py_DECREF(tmp_called_name_16);
            Py_DECREF(tmp_called_name_18);
            Py_DECREF(tmp_called_name_20);
            Py_DECREF(tmp_called_name_22);
            Py_DECREF(tmp_called_name_24);
            Py_DECREF(tmp_called_name_26);
            Py_DECREF(tmp_called_name_28);
            Py_DECREF(tmp_called_name_30);
            Py_DECREF(tmp_called_name_32);
            Py_DECREF(tmp_called_name_34);
            Py_DECREF(tmp_called_name_36);
            Py_DECREF(tmp_called_name_38);
            Py_DECREF(tmp_called_name_40);
            Py_DECREF(tmp_called_name_42);
            Py_DECREF(tmp_called_name_44);
            Py_DECREF(tmp_called_name_46);
            Py_DECREF(tmp_called_name_48);
            Py_DECREF(tmp_called_name_50);
            Py_DECREF(tmp_called_name_52);
            Py_DECREF(tmp_called_name_54);
            Py_DECREF(tmp_called_name_56);
            Py_DECREF(tmp_called_name_58);
            Py_DECREF(tmp_called_name_60);
            Py_DECREF(tmp_called_name_62);
            Py_DECREF(tmp_called_name_64);
            Py_DECREF(tmp_called_name_66);
            Py_DECREF(tmp_called_name_68);
            Py_DECREF(tmp_called_name_70);
            Py_DECREF(tmp_called_name_72);
            Py_DECREF(tmp_called_name_74);
            Py_DECREF(tmp_called_name_76);
            Py_DECREF(tmp_called_name_78);
            Py_DECREF(tmp_called_name_80);
            Py_DECREF(tmp_called_name_82);
            Py_DECREF(tmp_called_name_84);
            Py_DECREF(tmp_called_name_86);
            Py_DECREF(tmp_called_name_88);
            Py_DECREF(tmp_called_name_90);
            Py_DECREF(tmp_called_name_92);
            Py_DECREF(tmp_called_name_94);
            Py_DECREF(tmp_called_name_96);
            Py_DECREF(tmp_called_name_98);
            Py_DECREF(tmp_called_name_100);
            Py_DECREF(tmp_called_name_102);
            Py_DECREF(tmp_called_name_104);
            Py_DECREF(tmp_called_name_106);
            Py_DECREF(tmp_called_name_108);
            Py_DECREF(tmp_called_name_110);
            Py_DECREF(tmp_called_name_112);
            Py_DECREF(tmp_called_name_114);
            Py_DECREF(tmp_called_name_116);
            Py_DECREF(tmp_called_name_118);
            Py_DECREF(tmp_called_name_120);
            Py_DECREF(tmp_called_name_122);
            Py_DECREF(tmp_called_name_124);
            Py_DECREF(tmp_called_name_126);
            Py_DECREF(tmp_called_name_128);
            Py_DECREF(tmp_called_name_130);
            Py_DECREF(tmp_called_name_132);
            Py_DECREF(tmp_called_name_134);
            Py_DECREF(tmp_called_name_136);
            Py_DECREF(tmp_called_name_138);
            Py_DECREF(tmp_called_name_140);
            Py_DECREF(tmp_called_name_142);
            Py_DECREF(tmp_called_name_144);
            Py_DECREF(tmp_called_name_146);
            Py_DECREF(tmp_called_name_148);
            Py_DECREF(tmp_called_name_150);
            Py_DECREF(tmp_called_name_152);
            Py_DECREF(tmp_called_name_154);
            Py_DECREF(tmp_called_name_156);

            exception_lineno = 113;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_handle);
        tmp_called_name_161 = var_handle;
        frame_1e465c63423cecf32f0c62928e893560->m_frame.f_lineno = 114;
        tmp_called_name_160 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_161, mod_consts[85]);
        if (tmp_called_name_160 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_2);
            Py_DECREF(tmp_called_name_4);
            Py_DECREF(tmp_called_name_6);
            Py_DECREF(tmp_called_name_8);
            Py_DECREF(tmp_called_name_10);
            Py_DECREF(tmp_called_name_12);
            Py_DECREF(tmp_called_name_14);
            Py_DECREF(tmp_called_name_16);
            Py_DECREF(tmp_called_name_18);
            Py_DECREF(tmp_called_name_20);
            Py_DECREF(tmp_called_name_22);
            Py_DECREF(tmp_called_name_24);
            Py_DECREF(tmp_called_name_26);
            Py_DECREF(tmp_called_name_28);
            Py_DECREF(tmp_called_name_30);
            Py_DECREF(tmp_called_name_32);
            Py_DECREF(tmp_called_name_34);
            Py_DECREF(tmp_called_name_36);
            Py_DECREF(tmp_called_name_38);
            Py_DECREF(tmp_called_name_40);
            Py_DECREF(tmp_called_name_42);
            Py_DECREF(tmp_called_name_44);
            Py_DECREF(tmp_called_name_46);
            Py_DECREF(tmp_called_name_48);
            Py_DECREF(tmp_called_name_50);
            Py_DECREF(tmp_called_name_52);
            Py_DECREF(tmp_called_name_54);
            Py_DECREF(tmp_called_name_56);
            Py_DECREF(tmp_called_name_58);
            Py_DECREF(tmp_called_name_60);
            Py_DECREF(tmp_called_name_62);
            Py_DECREF(tmp_called_name_64);
            Py_DECREF(tmp_called_name_66);
            Py_DECREF(tmp_called_name_68);
            Py_DECREF(tmp_called_name_70);
            Py_DECREF(tmp_called_name_72);
            Py_DECREF(tmp_called_name_74);
            Py_DECREF(tmp_called_name_76);
            Py_DECREF(tmp_called_name_78);
            Py_DECREF(tmp_called_name_80);
            Py_DECREF(tmp_called_name_82);
            Py_DECREF(tmp_called_name_84);
            Py_DECREF(tmp_called_name_86);
            Py_DECREF(tmp_called_name_88);
            Py_DECREF(tmp_called_name_90);
            Py_DECREF(tmp_called_name_92);
            Py_DECREF(tmp_called_name_94);
            Py_DECREF(tmp_called_name_96);
            Py_DECREF(tmp_called_name_98);
            Py_DECREF(tmp_called_name_100);
            Py_DECREF(tmp_called_name_102);
            Py_DECREF(tmp_called_name_104);
            Py_DECREF(tmp_called_name_106);
            Py_DECREF(tmp_called_name_108);
            Py_DECREF(tmp_called_name_110);
            Py_DECREF(tmp_called_name_112);
            Py_DECREF(tmp_called_name_114);
            Py_DECREF(tmp_called_name_116);
            Py_DECREF(tmp_called_name_118);
            Py_DECREF(tmp_called_name_120);
            Py_DECREF(tmp_called_name_122);
            Py_DECREF(tmp_called_name_124);
            Py_DECREF(tmp_called_name_126);
            Py_DECREF(tmp_called_name_128);
            Py_DECREF(tmp_called_name_130);
            Py_DECREF(tmp_called_name_132);
            Py_DECREF(tmp_called_name_134);
            Py_DECREF(tmp_called_name_136);
            Py_DECREF(tmp_called_name_138);
            Py_DECREF(tmp_called_name_140);
            Py_DECREF(tmp_called_name_142);
            Py_DECREF(tmp_called_name_144);
            Py_DECREF(tmp_called_name_146);
            Py_DECREF(tmp_called_name_148);
            Py_DECREF(tmp_called_name_150);
            Py_DECREF(tmp_called_name_152);
            Py_DECREF(tmp_called_name_154);
            Py_DECREF(tmp_called_name_156);
            Py_DECREF(tmp_called_name_158);

            exception_lineno = 114;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_handle);
        tmp_called_name_163 = var_handle;
        frame_1e465c63423cecf32f0c62928e893560->m_frame.f_lineno = 115;
        tmp_called_name_162 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_163, mod_consts[86]);
        if (tmp_called_name_162 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_2);
            Py_DECREF(tmp_called_name_4);
            Py_DECREF(tmp_called_name_6);
            Py_DECREF(tmp_called_name_8);
            Py_DECREF(tmp_called_name_10);
            Py_DECREF(tmp_called_name_12);
            Py_DECREF(tmp_called_name_14);
            Py_DECREF(tmp_called_name_16);
            Py_DECREF(tmp_called_name_18);
            Py_DECREF(tmp_called_name_20);
            Py_DECREF(tmp_called_name_22);
            Py_DECREF(tmp_called_name_24);
            Py_DECREF(tmp_called_name_26);
            Py_DECREF(tmp_called_name_28);
            Py_DECREF(tmp_called_name_30);
            Py_DECREF(tmp_called_name_32);
            Py_DECREF(tmp_called_name_34);
            Py_DECREF(tmp_called_name_36);
            Py_DECREF(tmp_called_name_38);
            Py_DECREF(tmp_called_name_40);
            Py_DECREF(tmp_called_name_42);
            Py_DECREF(tmp_called_name_44);
            Py_DECREF(tmp_called_name_46);
            Py_DECREF(tmp_called_name_48);
            Py_DECREF(tmp_called_name_50);
            Py_DECREF(tmp_called_name_52);
            Py_DECREF(tmp_called_name_54);
            Py_DECREF(tmp_called_name_56);
            Py_DECREF(tmp_called_name_58);
            Py_DECREF(tmp_called_name_60);
            Py_DECREF(tmp_called_name_62);
            Py_DECREF(tmp_called_name_64);
            Py_DECREF(tmp_called_name_66);
            Py_DECREF(tmp_called_name_68);
            Py_DECREF(tmp_called_name_70);
            Py_DECREF(tmp_called_name_72);
            Py_DECREF(tmp_called_name_74);
            Py_DECREF(tmp_called_name_76);
            Py_DECREF(tmp_called_name_78);
            Py_DECREF(tmp_called_name_80);
            Py_DECREF(tmp_called_name_82);
            Py_DECREF(tmp_called_name_84);
            Py_DECREF(tmp_called_name_86);
            Py_DECREF(tmp_called_name_88);
            Py_DECREF(tmp_called_name_90);
            Py_DECREF(tmp_called_name_92);
            Py_DECREF(tmp_called_name_94);
            Py_DECREF(tmp_called_name_96);
            Py_DECREF(tmp_called_name_98);
            Py_DECREF(tmp_called_name_100);
            Py_DECREF(tmp_called_name_102);
            Py_DECREF(tmp_called_name_104);
            Py_DECREF(tmp_called_name_106);
            Py_DECREF(tmp_called_name_108);
            Py_DECREF(tmp_called_name_110);
            Py_DECREF(tmp_called_name_112);
            Py_DECREF(tmp_called_name_114);
            Py_DECREF(tmp_called_name_116);
            Py_DECREF(tmp_called_name_118);
            Py_DECREF(tmp_called_name_120);
            Py_DECREF(tmp_called_name_122);
            Py_DECREF(tmp_called_name_124);
            Py_DECREF(tmp_called_name_126);
            Py_DECREF(tmp_called_name_128);
            Py_DECREF(tmp_called_name_130);
            Py_DECREF(tmp_called_name_132);
            Py_DECREF(tmp_called_name_134);
            Py_DECREF(tmp_called_name_136);
            Py_DECREF(tmp_called_name_138);
            Py_DECREF(tmp_called_name_140);
            Py_DECREF(tmp_called_name_142);
            Py_DECREF(tmp_called_name_144);
            Py_DECREF(tmp_called_name_146);
            Py_DECREF(tmp_called_name_148);
            Py_DECREF(tmp_called_name_150);
            Py_DECREF(tmp_called_name_152);
            Py_DECREF(tmp_called_name_154);
            Py_DECREF(tmp_called_name_156);
            Py_DECREF(tmp_called_name_158);
            Py_DECREF(tmp_called_name_160);

            exception_lineno = 115;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_handle);
        tmp_called_name_165 = var_handle;
        frame_1e465c63423cecf32f0c62928e893560->m_frame.f_lineno = 116;
        tmp_called_name_164 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_165, mod_consts[87]);
        if (tmp_called_name_164 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_2);
            Py_DECREF(tmp_called_name_4);
            Py_DECREF(tmp_called_name_6);
            Py_DECREF(tmp_called_name_8);
            Py_DECREF(tmp_called_name_10);
            Py_DECREF(tmp_called_name_12);
            Py_DECREF(tmp_called_name_14);
            Py_DECREF(tmp_called_name_16);
            Py_DECREF(tmp_called_name_18);
            Py_DECREF(tmp_called_name_20);
            Py_DECREF(tmp_called_name_22);
            Py_DECREF(tmp_called_name_24);
            Py_DECREF(tmp_called_name_26);
            Py_DECREF(tmp_called_name_28);
            Py_DECREF(tmp_called_name_30);
            Py_DECREF(tmp_called_name_32);
            Py_DECREF(tmp_called_name_34);
            Py_DECREF(tmp_called_name_36);
            Py_DECREF(tmp_called_name_38);
            Py_DECREF(tmp_called_name_40);
            Py_DECREF(tmp_called_name_42);
            Py_DECREF(tmp_called_name_44);
            Py_DECREF(tmp_called_name_46);
            Py_DECREF(tmp_called_name_48);
            Py_DECREF(tmp_called_name_50);
            Py_DECREF(tmp_called_name_52);
            Py_DECREF(tmp_called_name_54);
            Py_DECREF(tmp_called_name_56);
            Py_DECREF(tmp_called_name_58);
            Py_DECREF(tmp_called_name_60);
            Py_DECREF(tmp_called_name_62);
            Py_DECREF(tmp_called_name_64);
            Py_DECREF(tmp_called_name_66);
            Py_DECREF(tmp_called_name_68);
            Py_DECREF(tmp_called_name_70);
            Py_DECREF(tmp_called_name_72);
            Py_DECREF(tmp_called_name_74);
            Py_DECREF(tmp_called_name_76);
            Py_DECREF(tmp_called_name_78);
            Py_DECREF(tmp_called_name_80);
            Py_DECREF(tmp_called_name_82);
            Py_DECREF(tmp_called_name_84);
            Py_DECREF(tmp_called_name_86);
            Py_DECREF(tmp_called_name_88);
            Py_DECREF(tmp_called_name_90);
            Py_DECREF(tmp_called_name_92);
            Py_DECREF(tmp_called_name_94);
            Py_DECREF(tmp_called_name_96);
            Py_DECREF(tmp_called_name_98);
            Py_DECREF(tmp_called_name_100);
            Py_DECREF(tmp_called_name_102);
            Py_DECREF(tmp_called_name_104);
            Py_DECREF(tmp_called_name_106);
            Py_DECREF(tmp_called_name_108);
            Py_DECREF(tmp_called_name_110);
            Py_DECREF(tmp_called_name_112);
            Py_DECREF(tmp_called_name_114);
            Py_DECREF(tmp_called_name_116);
            Py_DECREF(tmp_called_name_118);
            Py_DECREF(tmp_called_name_120);
            Py_DECREF(tmp_called_name_122);
            Py_DECREF(tmp_called_name_124);
            Py_DECREF(tmp_called_name_126);
            Py_DECREF(tmp_called_name_128);
            Py_DECREF(tmp_called_name_130);
            Py_DECREF(tmp_called_name_132);
            Py_DECREF(tmp_called_name_134);
            Py_DECREF(tmp_called_name_136);
            Py_DECREF(tmp_called_name_138);
            Py_DECREF(tmp_called_name_140);
            Py_DECREF(tmp_called_name_142);
            Py_DECREF(tmp_called_name_144);
            Py_DECREF(tmp_called_name_146);
            Py_DECREF(tmp_called_name_148);
            Py_DECREF(tmp_called_name_150);
            Py_DECREF(tmp_called_name_152);
            Py_DECREF(tmp_called_name_154);
            Py_DECREF(tmp_called_name_156);
            Py_DECREF(tmp_called_name_158);
            Py_DECREF(tmp_called_name_160);
            Py_DECREF(tmp_called_name_162);

            exception_lineno = 116;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_handle);
        tmp_called_name_167 = var_handle;
        frame_1e465c63423cecf32f0c62928e893560->m_frame.f_lineno = 117;
        tmp_called_name_166 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_167, mod_consts[88]);
        if (tmp_called_name_166 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_2);
            Py_DECREF(tmp_called_name_4);
            Py_DECREF(tmp_called_name_6);
            Py_DECREF(tmp_called_name_8);
            Py_DECREF(tmp_called_name_10);
            Py_DECREF(tmp_called_name_12);
            Py_DECREF(tmp_called_name_14);
            Py_DECREF(tmp_called_name_16);
            Py_DECREF(tmp_called_name_18);
            Py_DECREF(tmp_called_name_20);
            Py_DECREF(tmp_called_name_22);
            Py_DECREF(tmp_called_name_24);
            Py_DECREF(tmp_called_name_26);
            Py_DECREF(tmp_called_name_28);
            Py_DECREF(tmp_called_name_30);
            Py_DECREF(tmp_called_name_32);
            Py_DECREF(tmp_called_name_34);
            Py_DECREF(tmp_called_name_36);
            Py_DECREF(tmp_called_name_38);
            Py_DECREF(tmp_called_name_40);
            Py_DECREF(tmp_called_name_42);
            Py_DECREF(tmp_called_name_44);
            Py_DECREF(tmp_called_name_46);
            Py_DECREF(tmp_called_name_48);
            Py_DECREF(tmp_called_name_50);
            Py_DECREF(tmp_called_name_52);
            Py_DECREF(tmp_called_name_54);
            Py_DECREF(tmp_called_name_56);
            Py_DECREF(tmp_called_name_58);
            Py_DECREF(tmp_called_name_60);
            Py_DECREF(tmp_called_name_62);
            Py_DECREF(tmp_called_name_64);
            Py_DECREF(tmp_called_name_66);
            Py_DECREF(tmp_called_name_68);
            Py_DECREF(tmp_called_name_70);
            Py_DECREF(tmp_called_name_72);
            Py_DECREF(tmp_called_name_74);
            Py_DECREF(tmp_called_name_76);
            Py_DECREF(tmp_called_name_78);
            Py_DECREF(tmp_called_name_80);
            Py_DECREF(tmp_called_name_82);
            Py_DECREF(tmp_called_name_84);
            Py_DECREF(tmp_called_name_86);
            Py_DECREF(tmp_called_name_88);
            Py_DECREF(tmp_called_name_90);
            Py_DECREF(tmp_called_name_92);
            Py_DECREF(tmp_called_name_94);
            Py_DECREF(tmp_called_name_96);
            Py_DECREF(tmp_called_name_98);
            Py_DECREF(tmp_called_name_100);
            Py_DECREF(tmp_called_name_102);
            Py_DECREF(tmp_called_name_104);
            Py_DECREF(tmp_called_name_106);
            Py_DECREF(tmp_called_name_108);
            Py_DECREF(tmp_called_name_110);
            Py_DECREF(tmp_called_name_112);
            Py_DECREF(tmp_called_name_114);
            Py_DECREF(tmp_called_name_116);
            Py_DECREF(tmp_called_name_118);
            Py_DECREF(tmp_called_name_120);
            Py_DECREF(tmp_called_name_122);
            Py_DECREF(tmp_called_name_124);
            Py_DECREF(tmp_called_name_126);
            Py_DECREF(tmp_called_name_128);
            Py_DECREF(tmp_called_name_130);
            Py_DECREF(tmp_called_name_132);
            Py_DECREF(tmp_called_name_134);
            Py_DECREF(tmp_called_name_136);
            Py_DECREF(tmp_called_name_138);
            Py_DECREF(tmp_called_name_140);
            Py_DECREF(tmp_called_name_142);
            Py_DECREF(tmp_called_name_144);
            Py_DECREF(tmp_called_name_146);
            Py_DECREF(tmp_called_name_148);
            Py_DECREF(tmp_called_name_150);
            Py_DECREF(tmp_called_name_152);
            Py_DECREF(tmp_called_name_154);
            Py_DECREF(tmp_called_name_156);
            Py_DECREF(tmp_called_name_158);
            Py_DECREF(tmp_called_name_160);
            Py_DECREF(tmp_called_name_162);
            Py_DECREF(tmp_called_name_164);

            exception_lineno = 117;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_handle);
        tmp_called_name_169 = var_handle;
        frame_1e465c63423cecf32f0c62928e893560->m_frame.f_lineno = 118;
        tmp_called_name_168 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_169, mod_consts[89]);
        if (tmp_called_name_168 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_2);
            Py_DECREF(tmp_called_name_4);
            Py_DECREF(tmp_called_name_6);
            Py_DECREF(tmp_called_name_8);
            Py_DECREF(tmp_called_name_10);
            Py_DECREF(tmp_called_name_12);
            Py_DECREF(tmp_called_name_14);
            Py_DECREF(tmp_called_name_16);
            Py_DECREF(tmp_called_name_18);
            Py_DECREF(tmp_called_name_20);
            Py_DECREF(tmp_called_name_22);
            Py_DECREF(tmp_called_name_24);
            Py_DECREF(tmp_called_name_26);
            Py_DECREF(tmp_called_name_28);
            Py_DECREF(tmp_called_name_30);
            Py_DECREF(tmp_called_name_32);
            Py_DECREF(tmp_called_name_34);
            Py_DECREF(tmp_called_name_36);
            Py_DECREF(tmp_called_name_38);
            Py_DECREF(tmp_called_name_40);
            Py_DECREF(tmp_called_name_42);
            Py_DECREF(tmp_called_name_44);
            Py_DECREF(tmp_called_name_46);
            Py_DECREF(tmp_called_name_48);
            Py_DECREF(tmp_called_name_50);
            Py_DECREF(tmp_called_name_52);
            Py_DECREF(tmp_called_name_54);
            Py_DECREF(tmp_called_name_56);
            Py_DECREF(tmp_called_name_58);
            Py_DECREF(tmp_called_name_60);
            Py_DECREF(tmp_called_name_62);
            Py_DECREF(tmp_called_name_64);
            Py_DECREF(tmp_called_name_66);
            Py_DECREF(tmp_called_name_68);
            Py_DECREF(tmp_called_name_70);
            Py_DECREF(tmp_called_name_72);
            Py_DECREF(tmp_called_name_74);
            Py_DECREF(tmp_called_name_76);
            Py_DECREF(tmp_called_name_78);
            Py_DECREF(tmp_called_name_80);
            Py_DECREF(tmp_called_name_82);
            Py_DECREF(tmp_called_name_84);
            Py_DECREF(tmp_called_name_86);
            Py_DECREF(tmp_called_name_88);
            Py_DECREF(tmp_called_name_90);
            Py_DECREF(tmp_called_name_92);
            Py_DECREF(tmp_called_name_94);
            Py_DECREF(tmp_called_name_96);
            Py_DECREF(tmp_called_name_98);
            Py_DECREF(tmp_called_name_100);
            Py_DECREF(tmp_called_name_102);
            Py_DECREF(tmp_called_name_104);
            Py_DECREF(tmp_called_name_106);
            Py_DECREF(tmp_called_name_108);
            Py_DECREF(tmp_called_name_110);
            Py_DECREF(tmp_called_name_112);
            Py_DECREF(tmp_called_name_114);
            Py_DECREF(tmp_called_name_116);
            Py_DECREF(tmp_called_name_118);
            Py_DECREF(tmp_called_name_120);
            Py_DECREF(tmp_called_name_122);
            Py_DECREF(tmp_called_name_124);
            Py_DECREF(tmp_called_name_126);
            Py_DECREF(tmp_called_name_128);
            Py_DECREF(tmp_called_name_130);
            Py_DECREF(tmp_called_name_132);
            Py_DECREF(tmp_called_name_134);
            Py_DECREF(tmp_called_name_136);
            Py_DECREF(tmp_called_name_138);
            Py_DECREF(tmp_called_name_140);
            Py_DECREF(tmp_called_name_142);
            Py_DECREF(tmp_called_name_144);
            Py_DECREF(tmp_called_name_146);
            Py_DECREF(tmp_called_name_148);
            Py_DECREF(tmp_called_name_150);
            Py_DECREF(tmp_called_name_152);
            Py_DECREF(tmp_called_name_154);
            Py_DECREF(tmp_called_name_156);
            Py_DECREF(tmp_called_name_158);
            Py_DECREF(tmp_called_name_160);
            Py_DECREF(tmp_called_name_162);
            Py_DECREF(tmp_called_name_164);
            Py_DECREF(tmp_called_name_166);

            exception_lineno = 118;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_handle);
        tmp_called_name_171 = var_handle;
        frame_1e465c63423cecf32f0c62928e893560->m_frame.f_lineno = 119;
        tmp_called_name_170 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_171, mod_consts[90]);
        if (tmp_called_name_170 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_2);
            Py_DECREF(tmp_called_name_4);
            Py_DECREF(tmp_called_name_6);
            Py_DECREF(tmp_called_name_8);
            Py_DECREF(tmp_called_name_10);
            Py_DECREF(tmp_called_name_12);
            Py_DECREF(tmp_called_name_14);
            Py_DECREF(tmp_called_name_16);
            Py_DECREF(tmp_called_name_18);
            Py_DECREF(tmp_called_name_20);
            Py_DECREF(tmp_called_name_22);
            Py_DECREF(tmp_called_name_24);
            Py_DECREF(tmp_called_name_26);
            Py_DECREF(tmp_called_name_28);
            Py_DECREF(tmp_called_name_30);
            Py_DECREF(tmp_called_name_32);
            Py_DECREF(tmp_called_name_34);
            Py_DECREF(tmp_called_name_36);
            Py_DECREF(tmp_called_name_38);
            Py_DECREF(tmp_called_name_40);
            Py_DECREF(tmp_called_name_42);
            Py_DECREF(tmp_called_name_44);
            Py_DECREF(tmp_called_name_46);
            Py_DECREF(tmp_called_name_48);
            Py_DECREF(tmp_called_name_50);
            Py_DECREF(tmp_called_name_52);
            Py_DECREF(tmp_called_name_54);
            Py_DECREF(tmp_called_name_56);
            Py_DECREF(tmp_called_name_58);
            Py_DECREF(tmp_called_name_60);
            Py_DECREF(tmp_called_name_62);
            Py_DECREF(tmp_called_name_64);
            Py_DECREF(tmp_called_name_66);
            Py_DECREF(tmp_called_name_68);
            Py_DECREF(tmp_called_name_70);
            Py_DECREF(tmp_called_name_72);
            Py_DECREF(tmp_called_name_74);
            Py_DECREF(tmp_called_name_76);
            Py_DECREF(tmp_called_name_78);
            Py_DECREF(tmp_called_name_80);
            Py_DECREF(tmp_called_name_82);
            Py_DECREF(tmp_called_name_84);
            Py_DECREF(tmp_called_name_86);
            Py_DECREF(tmp_called_name_88);
            Py_DECREF(tmp_called_name_90);
            Py_DECREF(tmp_called_name_92);
            Py_DECREF(tmp_called_name_94);
            Py_DECREF(tmp_called_name_96);
            Py_DECREF(tmp_called_name_98);
            Py_DECREF(tmp_called_name_100);
            Py_DECREF(tmp_called_name_102);
            Py_DECREF(tmp_called_name_104);
            Py_DECREF(tmp_called_name_106);
            Py_DECREF(tmp_called_name_108);
            Py_DECREF(tmp_called_name_110);
            Py_DECREF(tmp_called_name_112);
            Py_DECREF(tmp_called_name_114);
            Py_DECREF(tmp_called_name_116);
            Py_DECREF(tmp_called_name_118);
            Py_DECREF(tmp_called_name_120);
            Py_DECREF(tmp_called_name_122);
            Py_DECREF(tmp_called_name_124);
            Py_DECREF(tmp_called_name_126);
            Py_DECREF(tmp_called_name_128);
            Py_DECREF(tmp_called_name_130);
            Py_DECREF(tmp_called_name_132);
            Py_DECREF(tmp_called_name_134);
            Py_DECREF(tmp_called_name_136);
            Py_DECREF(tmp_called_name_138);
            Py_DECREF(tmp_called_name_140);
            Py_DECREF(tmp_called_name_142);
            Py_DECREF(tmp_called_name_144);
            Py_DECREF(tmp_called_name_146);
            Py_DECREF(tmp_called_name_148);
            Py_DECREF(tmp_called_name_150);
            Py_DECREF(tmp_called_name_152);
            Py_DECREF(tmp_called_name_154);
            Py_DECREF(tmp_called_name_156);
            Py_DECREF(tmp_called_name_158);
            Py_DECREF(tmp_called_name_160);
            Py_DECREF(tmp_called_name_162);
            Py_DECREF(tmp_called_name_164);
            Py_DECREF(tmp_called_name_166);
            Py_DECREF(tmp_called_name_168);

            exception_lineno = 119;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_handle);
        tmp_called_name_173 = var_handle;
        frame_1e465c63423cecf32f0c62928e893560->m_frame.f_lineno = 120;
        tmp_called_name_172 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_173, mod_consts[91]);
        if (tmp_called_name_172 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_2);
            Py_DECREF(tmp_called_name_4);
            Py_DECREF(tmp_called_name_6);
            Py_DECREF(tmp_called_name_8);
            Py_DECREF(tmp_called_name_10);
            Py_DECREF(tmp_called_name_12);
            Py_DECREF(tmp_called_name_14);
            Py_DECREF(tmp_called_name_16);
            Py_DECREF(tmp_called_name_18);
            Py_DECREF(tmp_called_name_20);
            Py_DECREF(tmp_called_name_22);
            Py_DECREF(tmp_called_name_24);
            Py_DECREF(tmp_called_name_26);
            Py_DECREF(tmp_called_name_28);
            Py_DECREF(tmp_called_name_30);
            Py_DECREF(tmp_called_name_32);
            Py_DECREF(tmp_called_name_34);
            Py_DECREF(tmp_called_name_36);
            Py_DECREF(tmp_called_name_38);
            Py_DECREF(tmp_called_name_40);
            Py_DECREF(tmp_called_name_42);
            Py_DECREF(tmp_called_name_44);
            Py_DECREF(tmp_called_name_46);
            Py_DECREF(tmp_called_name_48);
            Py_DECREF(tmp_called_name_50);
            Py_DECREF(tmp_called_name_52);
            Py_DECREF(tmp_called_name_54);
            Py_DECREF(tmp_called_name_56);
            Py_DECREF(tmp_called_name_58);
            Py_DECREF(tmp_called_name_60);
            Py_DECREF(tmp_called_name_62);
            Py_DECREF(tmp_called_name_64);
            Py_DECREF(tmp_called_name_66);
            Py_DECREF(tmp_called_name_68);
            Py_DECREF(tmp_called_name_70);
            Py_DECREF(tmp_called_name_72);
            Py_DECREF(tmp_called_name_74);
            Py_DECREF(tmp_called_name_76);
            Py_DECREF(tmp_called_name_78);
            Py_DECREF(tmp_called_name_80);
            Py_DECREF(tmp_called_name_82);
            Py_DECREF(tmp_called_name_84);
            Py_DECREF(tmp_called_name_86);
            Py_DECREF(tmp_called_name_88);
            Py_DECREF(tmp_called_name_90);
            Py_DECREF(tmp_called_name_92);
            Py_DECREF(tmp_called_name_94);
            Py_DECREF(tmp_called_name_96);
            Py_DECREF(tmp_called_name_98);
            Py_DECREF(tmp_called_name_100);
            Py_DECREF(tmp_called_name_102);
            Py_DECREF(tmp_called_name_104);
            Py_DECREF(tmp_called_name_106);
            Py_DECREF(tmp_called_name_108);
            Py_DECREF(tmp_called_name_110);
            Py_DECREF(tmp_called_name_112);
            Py_DECREF(tmp_called_name_114);
            Py_DECREF(tmp_called_name_116);
            Py_DECREF(tmp_called_name_118);
            Py_DECREF(tmp_called_name_120);
            Py_DECREF(tmp_called_name_122);
            Py_DECREF(tmp_called_name_124);
            Py_DECREF(tmp_called_name_126);
            Py_DECREF(tmp_called_name_128);
            Py_DECREF(tmp_called_name_130);
            Py_DECREF(tmp_called_name_132);
            Py_DECREF(tmp_called_name_134);
            Py_DECREF(tmp_called_name_136);
            Py_DECREF(tmp_called_name_138);
            Py_DECREF(tmp_called_name_140);
            Py_DECREF(tmp_called_name_142);
            Py_DECREF(tmp_called_name_144);
            Py_DECREF(tmp_called_name_146);
            Py_DECREF(tmp_called_name_148);
            Py_DECREF(tmp_called_name_150);
            Py_DECREF(tmp_called_name_152);
            Py_DECREF(tmp_called_name_154);
            Py_DECREF(tmp_called_name_156);
            Py_DECREF(tmp_called_name_158);
            Py_DECREF(tmp_called_name_160);
            Py_DECREF(tmp_called_name_162);
            Py_DECREF(tmp_called_name_164);
            Py_DECREF(tmp_called_name_166);
            Py_DECREF(tmp_called_name_168);
            Py_DECREF(tmp_called_name_170);

            exception_lineno = 120;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_handle);
        tmp_called_name_175 = var_handle;
        frame_1e465c63423cecf32f0c62928e893560->m_frame.f_lineno = 121;
        tmp_called_name_174 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_175, mod_consts[92]);
        if (tmp_called_name_174 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_2);
            Py_DECREF(tmp_called_name_4);
            Py_DECREF(tmp_called_name_6);
            Py_DECREF(tmp_called_name_8);
            Py_DECREF(tmp_called_name_10);
            Py_DECREF(tmp_called_name_12);
            Py_DECREF(tmp_called_name_14);
            Py_DECREF(tmp_called_name_16);
            Py_DECREF(tmp_called_name_18);
            Py_DECREF(tmp_called_name_20);
            Py_DECREF(tmp_called_name_22);
            Py_DECREF(tmp_called_name_24);
            Py_DECREF(tmp_called_name_26);
            Py_DECREF(tmp_called_name_28);
            Py_DECREF(tmp_called_name_30);
            Py_DECREF(tmp_called_name_32);
            Py_DECREF(tmp_called_name_34);
            Py_DECREF(tmp_called_name_36);
            Py_DECREF(tmp_called_name_38);
            Py_DECREF(tmp_called_name_40);
            Py_DECREF(tmp_called_name_42);
            Py_DECREF(tmp_called_name_44);
            Py_DECREF(tmp_called_name_46);
            Py_DECREF(tmp_called_name_48);
            Py_DECREF(tmp_called_name_50);
            Py_DECREF(tmp_called_name_52);
            Py_DECREF(tmp_called_name_54);
            Py_DECREF(tmp_called_name_56);
            Py_DECREF(tmp_called_name_58);
            Py_DECREF(tmp_called_name_60);
            Py_DECREF(tmp_called_name_62);
            Py_DECREF(tmp_called_name_64);
            Py_DECREF(tmp_called_name_66);
            Py_DECREF(tmp_called_name_68);
            Py_DECREF(tmp_called_name_70);
            Py_DECREF(tmp_called_name_72);
            Py_DECREF(tmp_called_name_74);
            Py_DECREF(tmp_called_name_76);
            Py_DECREF(tmp_called_name_78);
            Py_DECREF(tmp_called_name_80);
            Py_DECREF(tmp_called_name_82);
            Py_DECREF(tmp_called_name_84);
            Py_DECREF(tmp_called_name_86);
            Py_DECREF(tmp_called_name_88);
            Py_DECREF(tmp_called_name_90);
            Py_DECREF(tmp_called_name_92);
            Py_DECREF(tmp_called_name_94);
            Py_DECREF(tmp_called_name_96);
            Py_DECREF(tmp_called_name_98);
            Py_DECREF(tmp_called_name_100);
            Py_DECREF(tmp_called_name_102);
            Py_DECREF(tmp_called_name_104);
            Py_DECREF(tmp_called_name_106);
            Py_DECREF(tmp_called_name_108);
            Py_DECREF(tmp_called_name_110);
            Py_DECREF(tmp_called_name_112);
            Py_DECREF(tmp_called_name_114);
            Py_DECREF(tmp_called_name_116);
            Py_DECREF(tmp_called_name_118);
            Py_DECREF(tmp_called_name_120);
            Py_DECREF(tmp_called_name_122);
            Py_DECREF(tmp_called_name_124);
            Py_DECREF(tmp_called_name_126);
            Py_DECREF(tmp_called_name_128);
            Py_DECREF(tmp_called_name_130);
            Py_DECREF(tmp_called_name_132);
            Py_DECREF(tmp_called_name_134);
            Py_DECREF(tmp_called_name_136);
            Py_DECREF(tmp_called_name_138);
            Py_DECREF(tmp_called_name_140);
            Py_DECREF(tmp_called_name_142);
            Py_DECREF(tmp_called_name_144);
            Py_DECREF(tmp_called_name_146);
            Py_DECREF(tmp_called_name_148);
            Py_DECREF(tmp_called_name_150);
            Py_DECREF(tmp_called_name_152);
            Py_DECREF(tmp_called_name_154);
            Py_DECREF(tmp_called_name_156);
            Py_DECREF(tmp_called_name_158);
            Py_DECREF(tmp_called_name_160);
            Py_DECREF(tmp_called_name_162);
            Py_DECREF(tmp_called_name_164);
            Py_DECREF(tmp_called_name_166);
            Py_DECREF(tmp_called_name_168);
            Py_DECREF(tmp_called_name_170);
            Py_DECREF(tmp_called_name_172);

            exception_lineno = 121;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_handle);
        tmp_called_name_177 = var_handle;
        frame_1e465c63423cecf32f0c62928e893560->m_frame.f_lineno = 122;
        tmp_called_name_176 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_177, mod_consts[93]);
        if (tmp_called_name_176 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_2);
            Py_DECREF(tmp_called_name_4);
            Py_DECREF(tmp_called_name_6);
            Py_DECREF(tmp_called_name_8);
            Py_DECREF(tmp_called_name_10);
            Py_DECREF(tmp_called_name_12);
            Py_DECREF(tmp_called_name_14);
            Py_DECREF(tmp_called_name_16);
            Py_DECREF(tmp_called_name_18);
            Py_DECREF(tmp_called_name_20);
            Py_DECREF(tmp_called_name_22);
            Py_DECREF(tmp_called_name_24);
            Py_DECREF(tmp_called_name_26);
            Py_DECREF(tmp_called_name_28);
            Py_DECREF(tmp_called_name_30);
            Py_DECREF(tmp_called_name_32);
            Py_DECREF(tmp_called_name_34);
            Py_DECREF(tmp_called_name_36);
            Py_DECREF(tmp_called_name_38);
            Py_DECREF(tmp_called_name_40);
            Py_DECREF(tmp_called_name_42);
            Py_DECREF(tmp_called_name_44);
            Py_DECREF(tmp_called_name_46);
            Py_DECREF(tmp_called_name_48);
            Py_DECREF(tmp_called_name_50);
            Py_DECREF(tmp_called_name_52);
            Py_DECREF(tmp_called_name_54);
            Py_DECREF(tmp_called_name_56);
            Py_DECREF(tmp_called_name_58);
            Py_DECREF(tmp_called_name_60);
            Py_DECREF(tmp_called_name_62);
            Py_DECREF(tmp_called_name_64);
            Py_DECREF(tmp_called_name_66);
            Py_DECREF(tmp_called_name_68);
            Py_DECREF(tmp_called_name_70);
            Py_DECREF(tmp_called_name_72);
            Py_DECREF(tmp_called_name_74);
            Py_DECREF(tmp_called_name_76);
            Py_DECREF(tmp_called_name_78);
            Py_DECREF(tmp_called_name_80);
            Py_DECREF(tmp_called_name_82);
            Py_DECREF(tmp_called_name_84);
            Py_DECREF(tmp_called_name_86);
            Py_DECREF(tmp_called_name_88);
            Py_DECREF(tmp_called_name_90);
            Py_DECREF(tmp_called_name_92);
            Py_DECREF(tmp_called_name_94);
            Py_DECREF(tmp_called_name_96);
            Py_DECREF(tmp_called_name_98);
            Py_DECREF(tmp_called_name_100);
            Py_DECREF(tmp_called_name_102);
            Py_DECREF(tmp_called_name_104);
            Py_DECREF(tmp_called_name_106);
            Py_DECREF(tmp_called_name_108);
            Py_DECREF(tmp_called_name_110);
            Py_DECREF(tmp_called_name_112);
            Py_DECREF(tmp_called_name_114);
            Py_DECREF(tmp_called_name_116);
            Py_DECREF(tmp_called_name_118);
            Py_DECREF(tmp_called_name_120);
            Py_DECREF(tmp_called_name_122);
            Py_DECREF(tmp_called_name_124);
            Py_DECREF(tmp_called_name_126);
            Py_DECREF(tmp_called_name_128);
            Py_DECREF(tmp_called_name_130);
            Py_DECREF(tmp_called_name_132);
            Py_DECREF(tmp_called_name_134);
            Py_DECREF(tmp_called_name_136);
            Py_DECREF(tmp_called_name_138);
            Py_DECREF(tmp_called_name_140);
            Py_DECREF(tmp_called_name_142);
            Py_DECREF(tmp_called_name_144);
            Py_DECREF(tmp_called_name_146);
            Py_DECREF(tmp_called_name_148);
            Py_DECREF(tmp_called_name_150);
            Py_DECREF(tmp_called_name_152);
            Py_DECREF(tmp_called_name_154);
            Py_DECREF(tmp_called_name_156);
            Py_DECREF(tmp_called_name_158);
            Py_DECREF(tmp_called_name_160);
            Py_DECREF(tmp_called_name_162);
            Py_DECREF(tmp_called_name_164);
            Py_DECREF(tmp_called_name_166);
            Py_DECREF(tmp_called_name_168);
            Py_DECREF(tmp_called_name_170);
            Py_DECREF(tmp_called_name_172);
            Py_DECREF(tmp_called_name_174);

            exception_lineno = 122;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_handle);
        tmp_called_name_179 = var_handle;
        tmp_expression_name_2 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$basic, (Nuitka_StringObject *)mod_consts[94]);

        if (unlikely(tmp_expression_name_2 == NULL)) {
            tmp_expression_name_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[94]);
        }

        if (tmp_expression_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_2);
            Py_DECREF(tmp_called_name_4);
            Py_DECREF(tmp_called_name_6);
            Py_DECREF(tmp_called_name_8);
            Py_DECREF(tmp_called_name_10);
            Py_DECREF(tmp_called_name_12);
            Py_DECREF(tmp_called_name_14);
            Py_DECREF(tmp_called_name_16);
            Py_DECREF(tmp_called_name_18);
            Py_DECREF(tmp_called_name_20);
            Py_DECREF(tmp_called_name_22);
            Py_DECREF(tmp_called_name_24);
            Py_DECREF(tmp_called_name_26);
            Py_DECREF(tmp_called_name_28);
            Py_DECREF(tmp_called_name_30);
            Py_DECREF(tmp_called_name_32);
            Py_DECREF(tmp_called_name_34);
            Py_DECREF(tmp_called_name_36);
            Py_DECREF(tmp_called_name_38);
            Py_DECREF(tmp_called_name_40);
            Py_DECREF(tmp_called_name_42);
            Py_DECREF(tmp_called_name_44);
            Py_DECREF(tmp_called_name_46);
            Py_DECREF(tmp_called_name_48);
            Py_DECREF(tmp_called_name_50);
            Py_DECREF(tmp_called_name_52);
            Py_DECREF(tmp_called_name_54);
            Py_DECREF(tmp_called_name_56);
            Py_DECREF(tmp_called_name_58);
            Py_DECREF(tmp_called_name_60);
            Py_DECREF(tmp_called_name_62);
            Py_DECREF(tmp_called_name_64);
            Py_DECREF(tmp_called_name_66);
            Py_DECREF(tmp_called_name_68);
            Py_DECREF(tmp_called_name_70);
            Py_DECREF(tmp_called_name_72);
            Py_DECREF(tmp_called_name_74);
            Py_DECREF(tmp_called_name_76);
            Py_DECREF(tmp_called_name_78);
            Py_DECREF(tmp_called_name_80);
            Py_DECREF(tmp_called_name_82);
            Py_DECREF(tmp_called_name_84);
            Py_DECREF(tmp_called_name_86);
            Py_DECREF(tmp_called_name_88);
            Py_DECREF(tmp_called_name_90);
            Py_DECREF(tmp_called_name_92);
            Py_DECREF(tmp_called_name_94);
            Py_DECREF(tmp_called_name_96);
            Py_DECREF(tmp_called_name_98);
            Py_DECREF(tmp_called_name_100);
            Py_DECREF(tmp_called_name_102);
            Py_DECREF(tmp_called_name_104);
            Py_DECREF(tmp_called_name_106);
            Py_DECREF(tmp_called_name_108);
            Py_DECREF(tmp_called_name_110);
            Py_DECREF(tmp_called_name_112);
            Py_DECREF(tmp_called_name_114);
            Py_DECREF(tmp_called_name_116);
            Py_DECREF(tmp_called_name_118);
            Py_DECREF(tmp_called_name_120);
            Py_DECREF(tmp_called_name_122);
            Py_DECREF(tmp_called_name_124);
            Py_DECREF(tmp_called_name_126);
            Py_DECREF(tmp_called_name_128);
            Py_DECREF(tmp_called_name_130);
            Py_DECREF(tmp_called_name_132);
            Py_DECREF(tmp_called_name_134);
            Py_DECREF(tmp_called_name_136);
            Py_DECREF(tmp_called_name_138);
            Py_DECREF(tmp_called_name_140);
            Py_DECREF(tmp_called_name_142);
            Py_DECREF(tmp_called_name_144);
            Py_DECREF(tmp_called_name_146);
            Py_DECREF(tmp_called_name_148);
            Py_DECREF(tmp_called_name_150);
            Py_DECREF(tmp_called_name_152);
            Py_DECREF(tmp_called_name_154);
            Py_DECREF(tmp_called_name_156);
            Py_DECREF(tmp_called_name_158);
            Py_DECREF(tmp_called_name_160);
            Py_DECREF(tmp_called_name_162);
            Py_DECREF(tmp_called_name_164);
            Py_DECREF(tmp_called_name_166);
            Py_DECREF(tmp_called_name_168);
            Py_DECREF(tmp_called_name_170);
            Py_DECREF(tmp_called_name_172);
            Py_DECREF(tmp_called_name_174);
            Py_DECREF(tmp_called_name_176);

            exception_lineno = 123;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_89 = LOOKUP_ATTRIBUTE(tmp_expression_name_2, mod_consts[95]);
        if (tmp_args_element_name_89 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_2);
            Py_DECREF(tmp_called_name_4);
            Py_DECREF(tmp_called_name_6);
            Py_DECREF(tmp_called_name_8);
            Py_DECREF(tmp_called_name_10);
            Py_DECREF(tmp_called_name_12);
            Py_DECREF(tmp_called_name_14);
            Py_DECREF(tmp_called_name_16);
            Py_DECREF(tmp_called_name_18);
            Py_DECREF(tmp_called_name_20);
            Py_DECREF(tmp_called_name_22);
            Py_DECREF(tmp_called_name_24);
            Py_DECREF(tmp_called_name_26);
            Py_DECREF(tmp_called_name_28);
            Py_DECREF(tmp_called_name_30);
            Py_DECREF(tmp_called_name_32);
            Py_DECREF(tmp_called_name_34);
            Py_DECREF(tmp_called_name_36);
            Py_DECREF(tmp_called_name_38);
            Py_DECREF(tmp_called_name_40);
            Py_DECREF(tmp_called_name_42);
            Py_DECREF(tmp_called_name_44);
            Py_DECREF(tmp_called_name_46);
            Py_DECREF(tmp_called_name_48);
            Py_DECREF(tmp_called_name_50);
            Py_DECREF(tmp_called_name_52);
            Py_DECREF(tmp_called_name_54);
            Py_DECREF(tmp_called_name_56);
            Py_DECREF(tmp_called_name_58);
            Py_DECREF(tmp_called_name_60);
            Py_DECREF(tmp_called_name_62);
            Py_DECREF(tmp_called_name_64);
            Py_DECREF(tmp_called_name_66);
            Py_DECREF(tmp_called_name_68);
            Py_DECREF(tmp_called_name_70);
            Py_DECREF(tmp_called_name_72);
            Py_DECREF(tmp_called_name_74);
            Py_DECREF(tmp_called_name_76);
            Py_DECREF(tmp_called_name_78);
            Py_DECREF(tmp_called_name_80);
            Py_DECREF(tmp_called_name_82);
            Py_DECREF(tmp_called_name_84);
            Py_DECREF(tmp_called_name_86);
            Py_DECREF(tmp_called_name_88);
            Py_DECREF(tmp_called_name_90);
            Py_DECREF(tmp_called_name_92);
            Py_DECREF(tmp_called_name_94);
            Py_DECREF(tmp_called_name_96);
            Py_DECREF(tmp_called_name_98);
            Py_DECREF(tmp_called_name_100);
            Py_DECREF(tmp_called_name_102);
            Py_DECREF(tmp_called_name_104);
            Py_DECREF(tmp_called_name_106);
            Py_DECREF(tmp_called_name_108);
            Py_DECREF(tmp_called_name_110);
            Py_DECREF(tmp_called_name_112);
            Py_DECREF(tmp_called_name_114);
            Py_DECREF(tmp_called_name_116);
            Py_DECREF(tmp_called_name_118);
            Py_DECREF(tmp_called_name_120);
            Py_DECREF(tmp_called_name_122);
            Py_DECREF(tmp_called_name_124);
            Py_DECREF(tmp_called_name_126);
            Py_DECREF(tmp_called_name_128);
            Py_DECREF(tmp_called_name_130);
            Py_DECREF(tmp_called_name_132);
            Py_DECREF(tmp_called_name_134);
            Py_DECREF(tmp_called_name_136);
            Py_DECREF(tmp_called_name_138);
            Py_DECREF(tmp_called_name_140);
            Py_DECREF(tmp_called_name_142);
            Py_DECREF(tmp_called_name_144);
            Py_DECREF(tmp_called_name_146);
            Py_DECREF(tmp_called_name_148);
            Py_DECREF(tmp_called_name_150);
            Py_DECREF(tmp_called_name_152);
            Py_DECREF(tmp_called_name_154);
            Py_DECREF(tmp_called_name_156);
            Py_DECREF(tmp_called_name_158);
            Py_DECREF(tmp_called_name_160);
            Py_DECREF(tmp_called_name_162);
            Py_DECREF(tmp_called_name_164);
            Py_DECREF(tmp_called_name_166);
            Py_DECREF(tmp_called_name_168);
            Py_DECREF(tmp_called_name_170);
            Py_DECREF(tmp_called_name_172);
            Py_DECREF(tmp_called_name_174);
            Py_DECREF(tmp_called_name_176);

            exception_lineno = 123;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_1e465c63423cecf32f0c62928e893560->m_frame.f_lineno = 123;
        tmp_called_name_178 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_179, tmp_args_element_name_89);
        Py_DECREF(tmp_args_element_name_89);
        if (tmp_called_name_178 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_2);
            Py_DECREF(tmp_called_name_4);
            Py_DECREF(tmp_called_name_6);
            Py_DECREF(tmp_called_name_8);
            Py_DECREF(tmp_called_name_10);
            Py_DECREF(tmp_called_name_12);
            Py_DECREF(tmp_called_name_14);
            Py_DECREF(tmp_called_name_16);
            Py_DECREF(tmp_called_name_18);
            Py_DECREF(tmp_called_name_20);
            Py_DECREF(tmp_called_name_22);
            Py_DECREF(tmp_called_name_24);
            Py_DECREF(tmp_called_name_26);
            Py_DECREF(tmp_called_name_28);
            Py_DECREF(tmp_called_name_30);
            Py_DECREF(tmp_called_name_32);
            Py_DECREF(tmp_called_name_34);
            Py_DECREF(tmp_called_name_36);
            Py_DECREF(tmp_called_name_38);
            Py_DECREF(tmp_called_name_40);
            Py_DECREF(tmp_called_name_42);
            Py_DECREF(tmp_called_name_44);
            Py_DECREF(tmp_called_name_46);
            Py_DECREF(tmp_called_name_48);
            Py_DECREF(tmp_called_name_50);
            Py_DECREF(tmp_called_name_52);
            Py_DECREF(tmp_called_name_54);
            Py_DECREF(tmp_called_name_56);
            Py_DECREF(tmp_called_name_58);
            Py_DECREF(tmp_called_name_60);
            Py_DECREF(tmp_called_name_62);
            Py_DECREF(tmp_called_name_64);
            Py_DECREF(tmp_called_name_66);
            Py_DECREF(tmp_called_name_68);
            Py_DECREF(tmp_called_name_70);
            Py_DECREF(tmp_called_name_72);
            Py_DECREF(tmp_called_name_74);
            Py_DECREF(tmp_called_name_76);
            Py_DECREF(tmp_called_name_78);
            Py_DECREF(tmp_called_name_80);
            Py_DECREF(tmp_called_name_82);
            Py_DECREF(tmp_called_name_84);
            Py_DECREF(tmp_called_name_86);
            Py_DECREF(tmp_called_name_88);
            Py_DECREF(tmp_called_name_90);
            Py_DECREF(tmp_called_name_92);
            Py_DECREF(tmp_called_name_94);
            Py_DECREF(tmp_called_name_96);
            Py_DECREF(tmp_called_name_98);
            Py_DECREF(tmp_called_name_100);
            Py_DECREF(tmp_called_name_102);
            Py_DECREF(tmp_called_name_104);
            Py_DECREF(tmp_called_name_106);
            Py_DECREF(tmp_called_name_108);
            Py_DECREF(tmp_called_name_110);
            Py_DECREF(tmp_called_name_112);
            Py_DECREF(tmp_called_name_114);
            Py_DECREF(tmp_called_name_116);
            Py_DECREF(tmp_called_name_118);
            Py_DECREF(tmp_called_name_120);
            Py_DECREF(tmp_called_name_122);
            Py_DECREF(tmp_called_name_124);
            Py_DECREF(tmp_called_name_126);
            Py_DECREF(tmp_called_name_128);
            Py_DECREF(tmp_called_name_130);
            Py_DECREF(tmp_called_name_132);
            Py_DECREF(tmp_called_name_134);
            Py_DECREF(tmp_called_name_136);
            Py_DECREF(tmp_called_name_138);
            Py_DECREF(tmp_called_name_140);
            Py_DECREF(tmp_called_name_142);
            Py_DECREF(tmp_called_name_144);
            Py_DECREF(tmp_called_name_146);
            Py_DECREF(tmp_called_name_148);
            Py_DECREF(tmp_called_name_150);
            Py_DECREF(tmp_called_name_152);
            Py_DECREF(tmp_called_name_154);
            Py_DECREF(tmp_called_name_156);
            Py_DECREF(tmp_called_name_158);
            Py_DECREF(tmp_called_name_160);
            Py_DECREF(tmp_called_name_162);
            Py_DECREF(tmp_called_name_164);
            Py_DECREF(tmp_called_name_166);
            Py_DECREF(tmp_called_name_168);
            Py_DECREF(tmp_called_name_170);
            Py_DECREF(tmp_called_name_172);
            Py_DECREF(tmp_called_name_174);
            Py_DECREF(tmp_called_name_176);

            exception_lineno = 123;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_dict_key_1 = mod_consts[96];
        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$basic, (Nuitka_StringObject *)mod_consts[97]);

        if (unlikely(tmp_dict_value_1 == NULL)) {
            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[97]);
        }

        if (tmp_dict_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_2);
            Py_DECREF(tmp_called_name_4);
            Py_DECREF(tmp_called_name_6);
            Py_DECREF(tmp_called_name_8);
            Py_DECREF(tmp_called_name_10);
            Py_DECREF(tmp_called_name_12);
            Py_DECREF(tmp_called_name_14);
            Py_DECREF(tmp_called_name_16);
            Py_DECREF(tmp_called_name_18);
            Py_DECREF(tmp_called_name_20);
            Py_DECREF(tmp_called_name_22);
            Py_DECREF(tmp_called_name_24);
            Py_DECREF(tmp_called_name_26);
            Py_DECREF(tmp_called_name_28);
            Py_DECREF(tmp_called_name_30);
            Py_DECREF(tmp_called_name_32);
            Py_DECREF(tmp_called_name_34);
            Py_DECREF(tmp_called_name_36);
            Py_DECREF(tmp_called_name_38);
            Py_DECREF(tmp_called_name_40);
            Py_DECREF(tmp_called_name_42);
            Py_DECREF(tmp_called_name_44);
            Py_DECREF(tmp_called_name_46);
            Py_DECREF(tmp_called_name_48);
            Py_DECREF(tmp_called_name_50);
            Py_DECREF(tmp_called_name_52);
            Py_DECREF(tmp_called_name_54);
            Py_DECREF(tmp_called_name_56);
            Py_DECREF(tmp_called_name_58);
            Py_DECREF(tmp_called_name_60);
            Py_DECREF(tmp_called_name_62);
            Py_DECREF(tmp_called_name_64);
            Py_DECREF(tmp_called_name_66);
            Py_DECREF(tmp_called_name_68);
            Py_DECREF(tmp_called_name_70);
            Py_DECREF(tmp_called_name_72);
            Py_DECREF(tmp_called_name_74);
            Py_DECREF(tmp_called_name_76);
            Py_DECREF(tmp_called_name_78);
            Py_DECREF(tmp_called_name_80);
            Py_DECREF(tmp_called_name_82);
            Py_DECREF(tmp_called_name_84);
            Py_DECREF(tmp_called_name_86);
            Py_DECREF(tmp_called_name_88);
            Py_DECREF(tmp_called_name_90);
            Py_DECREF(tmp_called_name_92);
            Py_DECREF(tmp_called_name_94);
            Py_DECREF(tmp_called_name_96);
            Py_DECREF(tmp_called_name_98);
            Py_DECREF(tmp_called_name_100);
            Py_DECREF(tmp_called_name_102);
            Py_DECREF(tmp_called_name_104);
            Py_DECREF(tmp_called_name_106);
            Py_DECREF(tmp_called_name_108);
            Py_DECREF(tmp_called_name_110);
            Py_DECREF(tmp_called_name_112);
            Py_DECREF(tmp_called_name_114);
            Py_DECREF(tmp_called_name_116);
            Py_DECREF(tmp_called_name_118);
            Py_DECREF(tmp_called_name_120);
            Py_DECREF(tmp_called_name_122);
            Py_DECREF(tmp_called_name_124);
            Py_DECREF(tmp_called_name_126);
            Py_DECREF(tmp_called_name_128);
            Py_DECREF(tmp_called_name_130);
            Py_DECREF(tmp_called_name_132);
            Py_DECREF(tmp_called_name_134);
            Py_DECREF(tmp_called_name_136);
            Py_DECREF(tmp_called_name_138);
            Py_DECREF(tmp_called_name_140);
            Py_DECREF(tmp_called_name_142);
            Py_DECREF(tmp_called_name_144);
            Py_DECREF(tmp_called_name_146);
            Py_DECREF(tmp_called_name_148);
            Py_DECREF(tmp_called_name_150);
            Py_DECREF(tmp_called_name_152);
            Py_DECREF(tmp_called_name_154);
            Py_DECREF(tmp_called_name_156);
            Py_DECREF(tmp_called_name_158);
            Py_DECREF(tmp_called_name_160);
            Py_DECREF(tmp_called_name_162);
            Py_DECREF(tmp_called_name_164);
            Py_DECREF(tmp_called_name_166);
            Py_DECREF(tmp_called_name_168);
            Py_DECREF(tmp_called_name_170);
            Py_DECREF(tmp_called_name_172);
            Py_DECREF(tmp_called_name_174);
            Py_DECREF(tmp_called_name_176);
            Py_DECREF(tmp_called_name_178);

            exception_lineno = 124;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_annotations_1 = _PyDict_NewPresized( 2 );
        tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[98];
        tmp_dict_value_1 = Py_None;
        tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));


        tmp_args_element_name_90 = MAKE_FUNCTION_prompt_toolkit$key_binding$bindings$basic$$$function__2_load_basic_bindings$$$function__1__ignore(tmp_annotations_1);

        frame_1e465c63423cecf32f0c62928e893560->m_frame.f_lineno = 123;
        tmp_args_element_name_88 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_178, tmp_args_element_name_90);
        Py_DECREF(tmp_called_name_178);
        Py_DECREF(tmp_args_element_name_90);
        if (tmp_args_element_name_88 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_2);
            Py_DECREF(tmp_called_name_4);
            Py_DECREF(tmp_called_name_6);
            Py_DECREF(tmp_called_name_8);
            Py_DECREF(tmp_called_name_10);
            Py_DECREF(tmp_called_name_12);
            Py_DECREF(tmp_called_name_14);
            Py_DECREF(tmp_called_name_16);
            Py_DECREF(tmp_called_name_18);
            Py_DECREF(tmp_called_name_20);
            Py_DECREF(tmp_called_name_22);
            Py_DECREF(tmp_called_name_24);
            Py_DECREF(tmp_called_name_26);
            Py_DECREF(tmp_called_name_28);
            Py_DECREF(tmp_called_name_30);
            Py_DECREF(tmp_called_name_32);
            Py_DECREF(tmp_called_name_34);
            Py_DECREF(tmp_called_name_36);
            Py_DECREF(tmp_called_name_38);
            Py_DECREF(tmp_called_name_40);
            Py_DECREF(tmp_called_name_42);
            Py_DECREF(tmp_called_name_44);
            Py_DECREF(tmp_called_name_46);
            Py_DECREF(tmp_called_name_48);
            Py_DECREF(tmp_called_name_50);
            Py_DECREF(tmp_called_name_52);
            Py_DECREF(tmp_called_name_54);
            Py_DECREF(tmp_called_name_56);
            Py_DECREF(tmp_called_name_58);
            Py_DECREF(tmp_called_name_60);
            Py_DECREF(tmp_called_name_62);
            Py_DECREF(tmp_called_name_64);
            Py_DECREF(tmp_called_name_66);
            Py_DECREF(tmp_called_name_68);
            Py_DECREF(tmp_called_name_70);
            Py_DECREF(tmp_called_name_72);
            Py_DECREF(tmp_called_name_74);
            Py_DECREF(tmp_called_name_76);
            Py_DECREF(tmp_called_name_78);
            Py_DECREF(tmp_called_name_80);
            Py_DECREF(tmp_called_name_82);
            Py_DECREF(tmp_called_name_84);
            Py_DECREF(tmp_called_name_86);
            Py_DECREF(tmp_called_name_88);
            Py_DECREF(tmp_called_name_90);
            Py_DECREF(tmp_called_name_92);
            Py_DECREF(tmp_called_name_94);
            Py_DECREF(tmp_called_name_96);
            Py_DECREF(tmp_called_name_98);
            Py_DECREF(tmp_called_name_100);
            Py_DECREF(tmp_called_name_102);
            Py_DECREF(tmp_called_name_104);
            Py_DECREF(tmp_called_name_106);
            Py_DECREF(tmp_called_name_108);
            Py_DECREF(tmp_called_name_110);
            Py_DECREF(tmp_called_name_112);
            Py_DECREF(tmp_called_name_114);
            Py_DECREF(tmp_called_name_116);
            Py_DECREF(tmp_called_name_118);
            Py_DECREF(tmp_called_name_120);
            Py_DECREF(tmp_called_name_122);
            Py_DECREF(tmp_called_name_124);
            Py_DECREF(tmp_called_name_126);
            Py_DECREF(tmp_called_name_128);
            Py_DECREF(tmp_called_name_130);
            Py_DECREF(tmp_called_name_132);
            Py_DECREF(tmp_called_name_134);
            Py_DECREF(tmp_called_name_136);
            Py_DECREF(tmp_called_name_138);
            Py_DECREF(tmp_called_name_140);
            Py_DECREF(tmp_called_name_142);
            Py_DECREF(tmp_called_name_144);
            Py_DECREF(tmp_called_name_146);
            Py_DECREF(tmp_called_name_148);
            Py_DECREF(tmp_called_name_150);
            Py_DECREF(tmp_called_name_152);
            Py_DECREF(tmp_called_name_154);
            Py_DECREF(tmp_called_name_156);
            Py_DECREF(tmp_called_name_158);
            Py_DECREF(tmp_called_name_160);
            Py_DECREF(tmp_called_name_162);
            Py_DECREF(tmp_called_name_164);
            Py_DECREF(tmp_called_name_166);
            Py_DECREF(tmp_called_name_168);
            Py_DECREF(tmp_called_name_170);
            Py_DECREF(tmp_called_name_172);
            Py_DECREF(tmp_called_name_174);
            Py_DECREF(tmp_called_name_176);

            exception_lineno = 123;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_1e465c63423cecf32f0c62928e893560->m_frame.f_lineno = 122;
        tmp_args_element_name_87 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_176, tmp_args_element_name_88);
        Py_DECREF(tmp_called_name_176);
        Py_DECREF(tmp_args_element_name_88);
        if (tmp_args_element_name_87 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_2);
            Py_DECREF(tmp_called_name_4);
            Py_DECREF(tmp_called_name_6);
            Py_DECREF(tmp_called_name_8);
            Py_DECREF(tmp_called_name_10);
            Py_DECREF(tmp_called_name_12);
            Py_DECREF(tmp_called_name_14);
            Py_DECREF(tmp_called_name_16);
            Py_DECREF(tmp_called_name_18);
            Py_DECREF(tmp_called_name_20);
            Py_DECREF(tmp_called_name_22);
            Py_DECREF(tmp_called_name_24);
            Py_DECREF(tmp_called_name_26);
            Py_DECREF(tmp_called_name_28);
            Py_DECREF(tmp_called_name_30);
            Py_DECREF(tmp_called_name_32);
            Py_DECREF(tmp_called_name_34);
            Py_DECREF(tmp_called_name_36);
            Py_DECREF(tmp_called_name_38);
            Py_DECREF(tmp_called_name_40);
            Py_DECREF(tmp_called_name_42);
            Py_DECREF(tmp_called_name_44);
            Py_DECREF(tmp_called_name_46);
            Py_DECREF(tmp_called_name_48);
            Py_DECREF(tmp_called_name_50);
            Py_DECREF(tmp_called_name_52);
            Py_DECREF(tmp_called_name_54);
            Py_DECREF(tmp_called_name_56);
            Py_DECREF(tmp_called_name_58);
            Py_DECREF(tmp_called_name_60);
            Py_DECREF(tmp_called_name_62);
            Py_DECREF(tmp_called_name_64);
            Py_DECREF(tmp_called_name_66);
            Py_DECREF(tmp_called_name_68);
            Py_DECREF(tmp_called_name_70);
            Py_DECREF(tmp_called_name_72);
            Py_DECREF(tmp_called_name_74);
            Py_DECREF(tmp_called_name_76);
            Py_DECREF(tmp_called_name_78);
            Py_DECREF(tmp_called_name_80);
            Py_DECREF(tmp_called_name_82);
            Py_DECREF(tmp_called_name_84);
            Py_DECREF(tmp_called_name_86);
            Py_DECREF(tmp_called_name_88);
            Py_DECREF(tmp_called_name_90);
            Py_DECREF(tmp_called_name_92);
            Py_DECREF(tmp_called_name_94);
            Py_DECREF(tmp_called_name_96);
            Py_DECREF(tmp_called_name_98);
            Py_DECREF(tmp_called_name_100);
            Py_DECREF(tmp_called_name_102);
            Py_DECREF(tmp_called_name_104);
            Py_DECREF(tmp_called_name_106);
            Py_DECREF(tmp_called_name_108);
            Py_DECREF(tmp_called_name_110);
            Py_DECREF(tmp_called_name_112);
            Py_DECREF(tmp_called_name_114);
            Py_DECREF(tmp_called_name_116);
            Py_DECREF(tmp_called_name_118);
            Py_DECREF(tmp_called_name_120);
            Py_DECREF(tmp_called_name_122);
            Py_DECREF(tmp_called_name_124);
            Py_DECREF(tmp_called_name_126);
            Py_DECREF(tmp_called_name_128);
            Py_DECREF(tmp_called_name_130);
            Py_DECREF(tmp_called_name_132);
            Py_DECREF(tmp_called_name_134);
            Py_DECREF(tmp_called_name_136);
            Py_DECREF(tmp_called_name_138);
            Py_DECREF(tmp_called_name_140);
            Py_DECREF(tmp_called_name_142);
            Py_DECREF(tmp_called_name_144);
            Py_DECREF(tmp_called_name_146);
            Py_DECREF(tmp_called_name_148);
            Py_DECREF(tmp_called_name_150);
            Py_DECREF(tmp_called_name_152);
            Py_DECREF(tmp_called_name_154);
            Py_DECREF(tmp_called_name_156);
            Py_DECREF(tmp_called_name_158);
            Py_DECREF(tmp_called_name_160);
            Py_DECREF(tmp_called_name_162);
            Py_DECREF(tmp_called_name_164);
            Py_DECREF(tmp_called_name_166);
            Py_DECREF(tmp_called_name_168);
            Py_DECREF(tmp_called_name_170);
            Py_DECREF(tmp_called_name_172);
            Py_DECREF(tmp_called_name_174);

            exception_lineno = 122;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_1e465c63423cecf32f0c62928e893560->m_frame.f_lineno = 121;
        tmp_args_element_name_86 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_174, tmp_args_element_name_87);
        Py_DECREF(tmp_called_name_174);
        Py_DECREF(tmp_args_element_name_87);
        if (tmp_args_element_name_86 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_2);
            Py_DECREF(tmp_called_name_4);
            Py_DECREF(tmp_called_name_6);
            Py_DECREF(tmp_called_name_8);
            Py_DECREF(tmp_called_name_10);
            Py_DECREF(tmp_called_name_12);
            Py_DECREF(tmp_called_name_14);
            Py_DECREF(tmp_called_name_16);
            Py_DECREF(tmp_called_name_18);
            Py_DECREF(tmp_called_name_20);
            Py_DECREF(tmp_called_name_22);
            Py_DECREF(tmp_called_name_24);
            Py_DECREF(tmp_called_name_26);
            Py_DECREF(tmp_called_name_28);
            Py_DECREF(tmp_called_name_30);
            Py_DECREF(tmp_called_name_32);
            Py_DECREF(tmp_called_name_34);
            Py_DECREF(tmp_called_name_36);
            Py_DECREF(tmp_called_name_38);
            Py_DECREF(tmp_called_name_40);
            Py_DECREF(tmp_called_name_42);
            Py_DECREF(tmp_called_name_44);
            Py_DECREF(tmp_called_name_46);
            Py_DECREF(tmp_called_name_48);
            Py_DECREF(tmp_called_name_50);
            Py_DECREF(tmp_called_name_52);
            Py_DECREF(tmp_called_name_54);
            Py_DECREF(tmp_called_name_56);
            Py_DECREF(tmp_called_name_58);
            Py_DECREF(tmp_called_name_60);
            Py_DECREF(tmp_called_name_62);
            Py_DECREF(tmp_called_name_64);
            Py_DECREF(tmp_called_name_66);
            Py_DECREF(tmp_called_name_68);
            Py_DECREF(tmp_called_name_70);
            Py_DECREF(tmp_called_name_72);
            Py_DECREF(tmp_called_name_74);
            Py_DECREF(tmp_called_name_76);
            Py_DECREF(tmp_called_name_78);
            Py_DECREF(tmp_called_name_80);
            Py_DECREF(tmp_called_name_82);
            Py_DECREF(tmp_called_name_84);
            Py_DECREF(tmp_called_name_86);
            Py_DECREF(tmp_called_name_88);
            Py_DECREF(tmp_called_name_90);
            Py_DECREF(tmp_called_name_92);
            Py_DECREF(tmp_called_name_94);
            Py_DECREF(tmp_called_name_96);
            Py_DECREF(tmp_called_name_98);
            Py_DECREF(tmp_called_name_100);
            Py_DECREF(tmp_called_name_102);
            Py_DECREF(tmp_called_name_104);
            Py_DECREF(tmp_called_name_106);
            Py_DECREF(tmp_called_name_108);
            Py_DECREF(tmp_called_name_110);
            Py_DECREF(tmp_called_name_112);
            Py_DECREF(tmp_called_name_114);
            Py_DECREF(tmp_called_name_116);
            Py_DECREF(tmp_called_name_118);
            Py_DECREF(tmp_called_name_120);
            Py_DECREF(tmp_called_name_122);
            Py_DECREF(tmp_called_name_124);
            Py_DECREF(tmp_called_name_126);
            Py_DECREF(tmp_called_name_128);
            Py_DECREF(tmp_called_name_130);
            Py_DECREF(tmp_called_name_132);
            Py_DECREF(tmp_called_name_134);
            Py_DECREF(tmp_called_name_136);
            Py_DECREF(tmp_called_name_138);
            Py_DECREF(tmp_called_name_140);
            Py_DECREF(tmp_called_name_142);
            Py_DECREF(tmp_called_name_144);
            Py_DECREF(tmp_called_name_146);
            Py_DECREF(tmp_called_name_148);
            Py_DECREF(tmp_called_name_150);
            Py_DECREF(tmp_called_name_152);
            Py_DECREF(tmp_called_name_154);
            Py_DECREF(tmp_called_name_156);
            Py_DECREF(tmp_called_name_158);
            Py_DECREF(tmp_called_name_160);
            Py_DECREF(tmp_called_name_162);
            Py_DECREF(tmp_called_name_164);
            Py_DECREF(tmp_called_name_166);
            Py_DECREF(tmp_called_name_168);
            Py_DECREF(tmp_called_name_170);
            Py_DECREF(tmp_called_name_172);

            exception_lineno = 121;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_1e465c63423cecf32f0c62928e893560->m_frame.f_lineno = 120;
        tmp_args_element_name_85 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_172, tmp_args_element_name_86);
        Py_DECREF(tmp_called_name_172);
        Py_DECREF(tmp_args_element_name_86);
        if (tmp_args_element_name_85 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_2);
            Py_DECREF(tmp_called_name_4);
            Py_DECREF(tmp_called_name_6);
            Py_DECREF(tmp_called_name_8);
            Py_DECREF(tmp_called_name_10);
            Py_DECREF(tmp_called_name_12);
            Py_DECREF(tmp_called_name_14);
            Py_DECREF(tmp_called_name_16);
            Py_DECREF(tmp_called_name_18);
            Py_DECREF(tmp_called_name_20);
            Py_DECREF(tmp_called_name_22);
            Py_DECREF(tmp_called_name_24);
            Py_DECREF(tmp_called_name_26);
            Py_DECREF(tmp_called_name_28);
            Py_DECREF(tmp_called_name_30);
            Py_DECREF(tmp_called_name_32);
            Py_DECREF(tmp_called_name_34);
            Py_DECREF(tmp_called_name_36);
            Py_DECREF(tmp_called_name_38);
            Py_DECREF(tmp_called_name_40);
            Py_DECREF(tmp_called_name_42);
            Py_DECREF(tmp_called_name_44);
            Py_DECREF(tmp_called_name_46);
            Py_DECREF(tmp_called_name_48);
            Py_DECREF(tmp_called_name_50);
            Py_DECREF(tmp_called_name_52);
            Py_DECREF(tmp_called_name_54);
            Py_DECREF(tmp_called_name_56);
            Py_DECREF(tmp_called_name_58);
            Py_DECREF(tmp_called_name_60);
            Py_DECREF(tmp_called_name_62);
            Py_DECREF(tmp_called_name_64);
            Py_DECREF(tmp_called_name_66);
            Py_DECREF(tmp_called_name_68);
            Py_DECREF(tmp_called_name_70);
            Py_DECREF(tmp_called_name_72);
            Py_DECREF(tmp_called_name_74);
            Py_DECREF(tmp_called_name_76);
            Py_DECREF(tmp_called_name_78);
            Py_DECREF(tmp_called_name_80);
            Py_DECREF(tmp_called_name_82);
            Py_DECREF(tmp_called_name_84);
            Py_DECREF(tmp_called_name_86);
            Py_DECREF(tmp_called_name_88);
            Py_DECREF(tmp_called_name_90);
            Py_DECREF(tmp_called_name_92);
            Py_DECREF(tmp_called_name_94);
            Py_DECREF(tmp_called_name_96);
            Py_DECREF(tmp_called_name_98);
            Py_DECREF(tmp_called_name_100);
            Py_DECREF(tmp_called_name_102);
            Py_DECREF(tmp_called_name_104);
            Py_DECREF(tmp_called_name_106);
            Py_DECREF(tmp_called_name_108);
            Py_DECREF(tmp_called_name_110);
            Py_DECREF(tmp_called_name_112);
            Py_DECREF(tmp_called_name_114);
            Py_DECREF(tmp_called_name_116);
            Py_DECREF(tmp_called_name_118);
            Py_DECREF(tmp_called_name_120);
            Py_DECREF(tmp_called_name_122);
            Py_DECREF(tmp_called_name_124);
            Py_DECREF(tmp_called_name_126);
            Py_DECREF(tmp_called_name_128);
            Py_DECREF(tmp_called_name_130);
            Py_DECREF(tmp_called_name_132);
            Py_DECREF(tmp_called_name_134);
            Py_DECREF(tmp_called_name_136);
            Py_DECREF(tmp_called_name_138);
            Py_DECREF(tmp_called_name_140);
            Py_DECREF(tmp_called_name_142);
            Py_DECREF(tmp_called_name_144);
            Py_DECREF(tmp_called_name_146);
            Py_DECREF(tmp_called_name_148);
            Py_DECREF(tmp_called_name_150);
            Py_DECREF(tmp_called_name_152);
            Py_DECREF(tmp_called_name_154);
            Py_DECREF(tmp_called_name_156);
            Py_DECREF(tmp_called_name_158);
            Py_DECREF(tmp_called_name_160);
            Py_DECREF(tmp_called_name_162);
            Py_DECREF(tmp_called_name_164);
            Py_DECREF(tmp_called_name_166);
            Py_DECREF(tmp_called_name_168);
            Py_DECREF(tmp_called_name_170);

            exception_lineno = 120;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_1e465c63423cecf32f0c62928e893560->m_frame.f_lineno = 119;
        tmp_args_element_name_84 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_170, tmp_args_element_name_85);
        Py_DECREF(tmp_called_name_170);
        Py_DECREF(tmp_args_element_name_85);
        if (tmp_args_element_name_84 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_2);
            Py_DECREF(tmp_called_name_4);
            Py_DECREF(tmp_called_name_6);
            Py_DECREF(tmp_called_name_8);
            Py_DECREF(tmp_called_name_10);
            Py_DECREF(tmp_called_name_12);
            Py_DECREF(tmp_called_name_14);
            Py_DECREF(tmp_called_name_16);
            Py_DECREF(tmp_called_name_18);
            Py_DECREF(tmp_called_name_20);
            Py_DECREF(tmp_called_name_22);
            Py_DECREF(tmp_called_name_24);
            Py_DECREF(tmp_called_name_26);
            Py_DECREF(tmp_called_name_28);
            Py_DECREF(tmp_called_name_30);
            Py_DECREF(tmp_called_name_32);
            Py_DECREF(tmp_called_name_34);
            Py_DECREF(tmp_called_name_36);
            Py_DECREF(tmp_called_name_38);
            Py_DECREF(tmp_called_name_40);
            Py_DECREF(tmp_called_name_42);
            Py_DECREF(tmp_called_name_44);
            Py_DECREF(tmp_called_name_46);
            Py_DECREF(tmp_called_name_48);
            Py_DECREF(tmp_called_name_50);
            Py_DECREF(tmp_called_name_52);
            Py_DECREF(tmp_called_name_54);
            Py_DECREF(tmp_called_name_56);
            Py_DECREF(tmp_called_name_58);
            Py_DECREF(tmp_called_name_60);
            Py_DECREF(tmp_called_name_62);
            Py_DECREF(tmp_called_name_64);
            Py_DECREF(tmp_called_name_66);
            Py_DECREF(tmp_called_name_68);
            Py_DECREF(tmp_called_name_70);
            Py_DECREF(tmp_called_name_72);
            Py_DECREF(tmp_called_name_74);
            Py_DECREF(tmp_called_name_76);
            Py_DECREF(tmp_called_name_78);
            Py_DECREF(tmp_called_name_80);
            Py_DECREF(tmp_called_name_82);
            Py_DECREF(tmp_called_name_84);
            Py_DECREF(tmp_called_name_86);
            Py_DECREF(tmp_called_name_88);
            Py_DECREF(tmp_called_name_90);
            Py_DECREF(tmp_called_name_92);
            Py_DECREF(tmp_called_name_94);
            Py_DECREF(tmp_called_name_96);
            Py_DECREF(tmp_called_name_98);
            Py_DECREF(tmp_called_name_100);
            Py_DECREF(tmp_called_name_102);
            Py_DECREF(tmp_called_name_104);
            Py_DECREF(tmp_called_name_106);
            Py_DECREF(tmp_called_name_108);
            Py_DECREF(tmp_called_name_110);
            Py_DECREF(tmp_called_name_112);
            Py_DECREF(tmp_called_name_114);
            Py_DECREF(tmp_called_name_116);
            Py_DECREF(tmp_called_name_118);
            Py_DECREF(tmp_called_name_120);
            Py_DECREF(tmp_called_name_122);
            Py_DECREF(tmp_called_name_124);
            Py_DECREF(tmp_called_name_126);
            Py_DECREF(tmp_called_name_128);
            Py_DECREF(tmp_called_name_130);
            Py_DECREF(tmp_called_name_132);
            Py_DECREF(tmp_called_name_134);
            Py_DECREF(tmp_called_name_136);
            Py_DECREF(tmp_called_name_138);
            Py_DECREF(tmp_called_name_140);
            Py_DECREF(tmp_called_name_142);
            Py_DECREF(tmp_called_name_144);
            Py_DECREF(tmp_called_name_146);
            Py_DECREF(tmp_called_name_148);
            Py_DECREF(tmp_called_name_150);
            Py_DECREF(tmp_called_name_152);
            Py_DECREF(tmp_called_name_154);
            Py_DECREF(tmp_called_name_156);
            Py_DECREF(tmp_called_name_158);
            Py_DECREF(tmp_called_name_160);
            Py_DECREF(tmp_called_name_162);
            Py_DECREF(tmp_called_name_164);
            Py_DECREF(tmp_called_name_166);
            Py_DECREF(tmp_called_name_168);

            exception_lineno = 119;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_1e465c63423cecf32f0c62928e893560->m_frame.f_lineno = 118;
        tmp_args_element_name_83 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_168, tmp_args_element_name_84);
        Py_DECREF(tmp_called_name_168);
        Py_DECREF(tmp_args_element_name_84);
        if (tmp_args_element_name_83 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_2);
            Py_DECREF(tmp_called_name_4);
            Py_DECREF(tmp_called_name_6);
            Py_DECREF(tmp_called_name_8);
            Py_DECREF(tmp_called_name_10);
            Py_DECREF(tmp_called_name_12);
            Py_DECREF(tmp_called_name_14);
            Py_DECREF(tmp_called_name_16);
            Py_DECREF(tmp_called_name_18);
            Py_DECREF(tmp_called_name_20);
            Py_DECREF(tmp_called_name_22);
            Py_DECREF(tmp_called_name_24);
            Py_DECREF(tmp_called_name_26);
            Py_DECREF(tmp_called_name_28);
            Py_DECREF(tmp_called_name_30);
            Py_DECREF(tmp_called_name_32);
            Py_DECREF(tmp_called_name_34);
            Py_DECREF(tmp_called_name_36);
            Py_DECREF(tmp_called_name_38);
            Py_DECREF(tmp_called_name_40);
            Py_DECREF(tmp_called_name_42);
            Py_DECREF(tmp_called_name_44);
            Py_DECREF(tmp_called_name_46);
            Py_DECREF(tmp_called_name_48);
            Py_DECREF(tmp_called_name_50);
            Py_DECREF(tmp_called_name_52);
            Py_DECREF(tmp_called_name_54);
            Py_DECREF(tmp_called_name_56);
            Py_DECREF(tmp_called_name_58);
            Py_DECREF(tmp_called_name_60);
            Py_DECREF(tmp_called_name_62);
            Py_DECREF(tmp_called_name_64);
            Py_DECREF(tmp_called_name_66);
            Py_DECREF(tmp_called_name_68);
            Py_DECREF(tmp_called_name_70);
            Py_DECREF(tmp_called_name_72);
            Py_DECREF(tmp_called_name_74);
            Py_DECREF(tmp_called_name_76);
            Py_DECREF(tmp_called_name_78);
            Py_DECREF(tmp_called_name_80);
            Py_DECREF(tmp_called_name_82);
            Py_DECREF(tmp_called_name_84);
            Py_DECREF(tmp_called_name_86);
            Py_DECREF(tmp_called_name_88);
            Py_DECREF(tmp_called_name_90);
            Py_DECREF(tmp_called_name_92);
            Py_DECREF(tmp_called_name_94);
            Py_DECREF(tmp_called_name_96);
            Py_DECREF(tmp_called_name_98);
            Py_DECREF(tmp_called_name_100);
            Py_DECREF(tmp_called_name_102);
            Py_DECREF(tmp_called_name_104);
            Py_DECREF(tmp_called_name_106);
            Py_DECREF(tmp_called_name_108);
            Py_DECREF(tmp_called_name_110);
            Py_DECREF(tmp_called_name_112);
            Py_DECREF(tmp_called_name_114);
            Py_DECREF(tmp_called_name_116);
            Py_DECREF(tmp_called_name_118);
            Py_DECREF(tmp_called_name_120);
            Py_DECREF(tmp_called_name_122);
            Py_DECREF(tmp_called_name_124);
            Py_DECREF(tmp_called_name_126);
            Py_DECREF(tmp_called_name_128);
            Py_DECREF(tmp_called_name_130);
            Py_DECREF(tmp_called_name_132);
            Py_DECREF(tmp_called_name_134);
            Py_DECREF(tmp_called_name_136);
            Py_DECREF(tmp_called_name_138);
            Py_DECREF(tmp_called_name_140);
            Py_DECREF(tmp_called_name_142);
            Py_DECREF(tmp_called_name_144);
            Py_DECREF(tmp_called_name_146);
            Py_DECREF(tmp_called_name_148);
            Py_DECREF(tmp_called_name_150);
            Py_DECREF(tmp_called_name_152);
            Py_DECREF(tmp_called_name_154);
            Py_DECREF(tmp_called_name_156);
            Py_DECREF(tmp_called_name_158);
            Py_DECREF(tmp_called_name_160);
            Py_DECREF(tmp_called_name_162);
            Py_DECREF(tmp_called_name_164);
            Py_DECREF(tmp_called_name_166);

            exception_lineno = 118;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_1e465c63423cecf32f0c62928e893560->m_frame.f_lineno = 117;
        tmp_args_element_name_82 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_166, tmp_args_element_name_83);
        Py_DECREF(tmp_called_name_166);
        Py_DECREF(tmp_args_element_name_83);
        if (tmp_args_element_name_82 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_2);
            Py_DECREF(tmp_called_name_4);
            Py_DECREF(tmp_called_name_6);
            Py_DECREF(tmp_called_name_8);
            Py_DECREF(tmp_called_name_10);
            Py_DECREF(tmp_called_name_12);
            Py_DECREF(tmp_called_name_14);
            Py_DECREF(tmp_called_name_16);
            Py_DECREF(tmp_called_name_18);
            Py_DECREF(tmp_called_name_20);
            Py_DECREF(tmp_called_name_22);
            Py_DECREF(tmp_called_name_24);
            Py_DECREF(tmp_called_name_26);
            Py_DECREF(tmp_called_name_28);
            Py_DECREF(tmp_called_name_30);
            Py_DECREF(tmp_called_name_32);
            Py_DECREF(tmp_called_name_34);
            Py_DECREF(tmp_called_name_36);
            Py_DECREF(tmp_called_name_38);
            Py_DECREF(tmp_called_name_40);
            Py_DECREF(tmp_called_name_42);
            Py_DECREF(tmp_called_name_44);
            Py_DECREF(tmp_called_name_46);
            Py_DECREF(tmp_called_name_48);
            Py_DECREF(tmp_called_name_50);
            Py_DECREF(tmp_called_name_52);
            Py_DECREF(tmp_called_name_54);
            Py_DECREF(tmp_called_name_56);
            Py_DECREF(tmp_called_name_58);
            Py_DECREF(tmp_called_name_60);
            Py_DECREF(tmp_called_name_62);
            Py_DECREF(tmp_called_name_64);
            Py_DECREF(tmp_called_name_66);
            Py_DECREF(tmp_called_name_68);
            Py_DECREF(tmp_called_name_70);
            Py_DECREF(tmp_called_name_72);
            Py_DECREF(tmp_called_name_74);
            Py_DECREF(tmp_called_name_76);
            Py_DECREF(tmp_called_name_78);
            Py_DECREF(tmp_called_name_80);
            Py_DECREF(tmp_called_name_82);
            Py_DECREF(tmp_called_name_84);
            Py_DECREF(tmp_called_name_86);
            Py_DECREF(tmp_called_name_88);
            Py_DECREF(tmp_called_name_90);
            Py_DECREF(tmp_called_name_92);
            Py_DECREF(tmp_called_name_94);
            Py_DECREF(tmp_called_name_96);
            Py_DECREF(tmp_called_name_98);
            Py_DECREF(tmp_called_name_100);
            Py_DECREF(tmp_called_name_102);
            Py_DECREF(tmp_called_name_104);
            Py_DECREF(tmp_called_name_106);
            Py_DECREF(tmp_called_name_108);
            Py_DECREF(tmp_called_name_110);
            Py_DECREF(tmp_called_name_112);
            Py_DECREF(tmp_called_name_114);
            Py_DECREF(tmp_called_name_116);
            Py_DECREF(tmp_called_name_118);
            Py_DECREF(tmp_called_name_120);
            Py_DECREF(tmp_called_name_122);
            Py_DECREF(tmp_called_name_124);
            Py_DECREF(tmp_called_name_126);
            Py_DECREF(tmp_called_name_128);
            Py_DECREF(tmp_called_name_130);
            Py_DECREF(tmp_called_name_132);
            Py_DECREF(tmp_called_name_134);
            Py_DECREF(tmp_called_name_136);
            Py_DECREF(tmp_called_name_138);
            Py_DECREF(tmp_called_name_140);
            Py_DECREF(tmp_called_name_142);
            Py_DECREF(tmp_called_name_144);
            Py_DECREF(tmp_called_name_146);
            Py_DECREF(tmp_called_name_148);
            Py_DECREF(tmp_called_name_150);
            Py_DECREF(tmp_called_name_152);
            Py_DECREF(tmp_called_name_154);
            Py_DECREF(tmp_called_name_156);
            Py_DECREF(tmp_called_name_158);
            Py_DECREF(tmp_called_name_160);
            Py_DECREF(tmp_called_name_162);
            Py_DECREF(tmp_called_name_164);

            exception_lineno = 117;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_1e465c63423cecf32f0c62928e893560->m_frame.f_lineno = 116;
        tmp_args_element_name_81 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_164, tmp_args_element_name_82);
        Py_DECREF(tmp_called_name_164);
        Py_DECREF(tmp_args_element_name_82);
        if (tmp_args_element_name_81 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_2);
            Py_DECREF(tmp_called_name_4);
            Py_DECREF(tmp_called_name_6);
            Py_DECREF(tmp_called_name_8);
            Py_DECREF(tmp_called_name_10);
            Py_DECREF(tmp_called_name_12);
            Py_DECREF(tmp_called_name_14);
            Py_DECREF(tmp_called_name_16);
            Py_DECREF(tmp_called_name_18);
            Py_DECREF(tmp_called_name_20);
            Py_DECREF(tmp_called_name_22);
            Py_DECREF(tmp_called_name_24);
            Py_DECREF(tmp_called_name_26);
            Py_DECREF(tmp_called_name_28);
            Py_DECREF(tmp_called_name_30);
            Py_DECREF(tmp_called_name_32);
            Py_DECREF(tmp_called_name_34);
            Py_DECREF(tmp_called_name_36);
            Py_DECREF(tmp_called_name_38);
            Py_DECREF(tmp_called_name_40);
            Py_DECREF(tmp_called_name_42);
            Py_DECREF(tmp_called_name_44);
            Py_DECREF(tmp_called_name_46);
            Py_DECREF(tmp_called_name_48);
            Py_DECREF(tmp_called_name_50);
            Py_DECREF(tmp_called_name_52);
            Py_DECREF(tmp_called_name_54);
            Py_DECREF(tmp_called_name_56);
            Py_DECREF(tmp_called_name_58);
            Py_DECREF(tmp_called_name_60);
            Py_DECREF(tmp_called_name_62);
            Py_DECREF(tmp_called_name_64);
            Py_DECREF(tmp_called_name_66);
            Py_DECREF(tmp_called_name_68);
            Py_DECREF(tmp_called_name_70);
            Py_DECREF(tmp_called_name_72);
            Py_DECREF(tmp_called_name_74);
            Py_DECREF(tmp_called_name_76);
            Py_DECREF(tmp_called_name_78);
            Py_DECREF(tmp_called_name_80);
            Py_DECREF(tmp_called_name_82);
            Py_DECREF(tmp_called_name_84);
            Py_DECREF(tmp_called_name_86);
            Py_DECREF(tmp_called_name_88);
            Py_DECREF(tmp_called_name_90);
            Py_DECREF(tmp_called_name_92);
            Py_DECREF(tmp_called_name_94);
            Py_DECREF(tmp_called_name_96);
            Py_DECREF(tmp_called_name_98);
            Py_DECREF(tmp_called_name_100);
            Py_DECREF(tmp_called_name_102);
            Py_DECREF(tmp_called_name_104);
            Py_DECREF(tmp_called_name_106);
            Py_DECREF(tmp_called_name_108);
            Py_DECREF(tmp_called_name_110);
            Py_DECREF(tmp_called_name_112);
            Py_DECREF(tmp_called_name_114);
            Py_DECREF(tmp_called_name_116);
            Py_DECREF(tmp_called_name_118);
            Py_DECREF(tmp_called_name_120);
            Py_DECREF(tmp_called_name_122);
            Py_DECREF(tmp_called_name_124);
            Py_DECREF(tmp_called_name_126);
            Py_DECREF(tmp_called_name_128);
            Py_DECREF(tmp_called_name_130);
            Py_DECREF(tmp_called_name_132);
            Py_DECREF(tmp_called_name_134);
            Py_DECREF(tmp_called_name_136);
            Py_DECREF(tmp_called_name_138);
            Py_DECREF(tmp_called_name_140);
            Py_DECREF(tmp_called_name_142);
            Py_DECREF(tmp_called_name_144);
            Py_DECREF(tmp_called_name_146);
            Py_DECREF(tmp_called_name_148);
            Py_DECREF(tmp_called_name_150);
            Py_DECREF(tmp_called_name_152);
            Py_DECREF(tmp_called_name_154);
            Py_DECREF(tmp_called_name_156);
            Py_DECREF(tmp_called_name_158);
            Py_DECREF(tmp_called_name_160);
            Py_DECREF(tmp_called_name_162);

            exception_lineno = 116;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_1e465c63423cecf32f0c62928e893560->m_frame.f_lineno = 115;
        tmp_args_element_name_80 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_162, tmp_args_element_name_81);
        Py_DECREF(tmp_called_name_162);
        Py_DECREF(tmp_args_element_name_81);
        if (tmp_args_element_name_80 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_2);
            Py_DECREF(tmp_called_name_4);
            Py_DECREF(tmp_called_name_6);
            Py_DECREF(tmp_called_name_8);
            Py_DECREF(tmp_called_name_10);
            Py_DECREF(tmp_called_name_12);
            Py_DECREF(tmp_called_name_14);
            Py_DECREF(tmp_called_name_16);
            Py_DECREF(tmp_called_name_18);
            Py_DECREF(tmp_called_name_20);
            Py_DECREF(tmp_called_name_22);
            Py_DECREF(tmp_called_name_24);
            Py_DECREF(tmp_called_name_26);
            Py_DECREF(tmp_called_name_28);
            Py_DECREF(tmp_called_name_30);
            Py_DECREF(tmp_called_name_32);
            Py_DECREF(tmp_called_name_34);
            Py_DECREF(tmp_called_name_36);
            Py_DECREF(tmp_called_name_38);
            Py_DECREF(tmp_called_name_40);
            Py_DECREF(tmp_called_name_42);
            Py_DECREF(tmp_called_name_44);
            Py_DECREF(tmp_called_name_46);
            Py_DECREF(tmp_called_name_48);
            Py_DECREF(tmp_called_name_50);
            Py_DECREF(tmp_called_name_52);
            Py_DECREF(tmp_called_name_54);
            Py_DECREF(tmp_called_name_56);
            Py_DECREF(tmp_called_name_58);
            Py_DECREF(tmp_called_name_60);
            Py_DECREF(tmp_called_name_62);
            Py_DECREF(tmp_called_name_64);
            Py_DECREF(tmp_called_name_66);
            Py_DECREF(tmp_called_name_68);
            Py_DECREF(tmp_called_name_70);
            Py_DECREF(tmp_called_name_72);
            Py_DECREF(tmp_called_name_74);
            Py_DECREF(tmp_called_name_76);
            Py_DECREF(tmp_called_name_78);
            Py_DECREF(tmp_called_name_80);
            Py_DECREF(tmp_called_name_82);
            Py_DECREF(tmp_called_name_84);
            Py_DECREF(tmp_called_name_86);
            Py_DECREF(tmp_called_name_88);
            Py_DECREF(tmp_called_name_90);
            Py_DECREF(tmp_called_name_92);
            Py_DECREF(tmp_called_name_94);
            Py_DECREF(tmp_called_name_96);
            Py_DECREF(tmp_called_name_98);
            Py_DECREF(tmp_called_name_100);
            Py_DECREF(tmp_called_name_102);
            Py_DECREF(tmp_called_name_104);
            Py_DECREF(tmp_called_name_106);
            Py_DECREF(tmp_called_name_108);
            Py_DECREF(tmp_called_name_110);
            Py_DECREF(tmp_called_name_112);
            Py_DECREF(tmp_called_name_114);
            Py_DECREF(tmp_called_name_116);
            Py_DECREF(tmp_called_name_118);
            Py_DECREF(tmp_called_name_120);
            Py_DECREF(tmp_called_name_122);
            Py_DECREF(tmp_called_name_124);
            Py_DECREF(tmp_called_name_126);
            Py_DECREF(tmp_called_name_128);
            Py_DECREF(tmp_called_name_130);
            Py_DECREF(tmp_called_name_132);
            Py_DECREF(tmp_called_name_134);
            Py_DECREF(tmp_called_name_136);
            Py_DECREF(tmp_called_name_138);
            Py_DECREF(tmp_called_name_140);
            Py_DECREF(tmp_called_name_142);
            Py_DECREF(tmp_called_name_144);
            Py_DECREF(tmp_called_name_146);
            Py_DECREF(tmp_called_name_148);
            Py_DECREF(tmp_called_name_150);
            Py_DECREF(tmp_called_name_152);
            Py_DECREF(tmp_called_name_154);
            Py_DECREF(tmp_called_name_156);
            Py_DECREF(tmp_called_name_158);
            Py_DECREF(tmp_called_name_160);

            exception_lineno = 115;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_1e465c63423cecf32f0c62928e893560->m_frame.f_lineno = 114;
        tmp_args_element_name_79 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_160, tmp_args_element_name_80);
        Py_DECREF(tmp_called_name_160);
        Py_DECREF(tmp_args_element_name_80);
        if (tmp_args_element_name_79 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_2);
            Py_DECREF(tmp_called_name_4);
            Py_DECREF(tmp_called_name_6);
            Py_DECREF(tmp_called_name_8);
            Py_DECREF(tmp_called_name_10);
            Py_DECREF(tmp_called_name_12);
            Py_DECREF(tmp_called_name_14);
            Py_DECREF(tmp_called_name_16);
            Py_DECREF(tmp_called_name_18);
            Py_DECREF(tmp_called_name_20);
            Py_DECREF(tmp_called_name_22);
            Py_DECREF(tmp_called_name_24);
            Py_DECREF(tmp_called_name_26);
            Py_DECREF(tmp_called_name_28);
            Py_DECREF(tmp_called_name_30);
            Py_DECREF(tmp_called_name_32);
            Py_DECREF(tmp_called_name_34);
            Py_DECREF(tmp_called_name_36);
            Py_DECREF(tmp_called_name_38);
            Py_DECREF(tmp_called_name_40);
            Py_DECREF(tmp_called_name_42);
            Py_DECREF(tmp_called_name_44);
            Py_DECREF(tmp_called_name_46);
            Py_DECREF(tmp_called_name_48);
            Py_DECREF(tmp_called_name_50);
            Py_DECREF(tmp_called_name_52);
            Py_DECREF(tmp_called_name_54);
            Py_DECREF(tmp_called_name_56);
            Py_DECREF(tmp_called_name_58);
            Py_DECREF(tmp_called_name_60);
            Py_DECREF(tmp_called_name_62);
            Py_DECREF(tmp_called_name_64);
            Py_DECREF(tmp_called_name_66);
            Py_DECREF(tmp_called_name_68);
            Py_DECREF(tmp_called_name_70);
            Py_DECREF(tmp_called_name_72);
            Py_DECREF(tmp_called_name_74);
            Py_DECREF(tmp_called_name_76);
            Py_DECREF(tmp_called_name_78);
            Py_DECREF(tmp_called_name_80);
            Py_DECREF(tmp_called_name_82);
            Py_DECREF(tmp_called_name_84);
            Py_DECREF(tmp_called_name_86);
            Py_DECREF(tmp_called_name_88);
            Py_DECREF(tmp_called_name_90);
            Py_DECREF(tmp_called_name_92);
            Py_DECREF(tmp_called_name_94);
            Py_DECREF(tmp_called_name_96);
            Py_DECREF(tmp_called_name_98);
            Py_DECREF(tmp_called_name_100);
            Py_DECREF(tmp_called_name_102);
            Py_DECREF(tmp_called_name_104);
            Py_DECREF(tmp_called_name_106);
            Py_DECREF(tmp_called_name_108);
            Py_DECREF(tmp_called_name_110);
            Py_DECREF(tmp_called_name_112);
            Py_DECREF(tmp_called_name_114);
            Py_DECREF(tmp_called_name_116);
            Py_DECREF(tmp_called_name_118);
            Py_DECREF(tmp_called_name_120);
            Py_DECREF(tmp_called_name_122);
            Py_DECREF(tmp_called_name_124);
            Py_DECREF(tmp_called_name_126);
            Py_DECREF(tmp_called_name_128);
            Py_DECREF(tmp_called_name_130);
            Py_DECREF(tmp_called_name_132);
            Py_DECREF(tmp_called_name_134);
            Py_DECREF(tmp_called_name_136);
            Py_DECREF(tmp_called_name_138);
            Py_DECREF(tmp_called_name_140);
            Py_DECREF(tmp_called_name_142);
            Py_DECREF(tmp_called_name_144);
            Py_DECREF(tmp_called_name_146);
            Py_DECREF(tmp_called_name_148);
            Py_DECREF(tmp_called_name_150);
            Py_DECREF(tmp_called_name_152);
            Py_DECREF(tmp_called_name_154);
            Py_DECREF(tmp_called_name_156);
            Py_DECREF(tmp_called_name_158);

            exception_lineno = 114;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_1e465c63423cecf32f0c62928e893560->m_frame.f_lineno = 113;
        tmp_args_element_name_78 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_158, tmp_args_element_name_79);
        Py_DECREF(tmp_called_name_158);
        Py_DECREF(tmp_args_element_name_79);
        if (tmp_args_element_name_78 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_2);
            Py_DECREF(tmp_called_name_4);
            Py_DECREF(tmp_called_name_6);
            Py_DECREF(tmp_called_name_8);
            Py_DECREF(tmp_called_name_10);
            Py_DECREF(tmp_called_name_12);
            Py_DECREF(tmp_called_name_14);
            Py_DECREF(tmp_called_name_16);
            Py_DECREF(tmp_called_name_18);
            Py_DECREF(tmp_called_name_20);
            Py_DECREF(tmp_called_name_22);
            Py_DECREF(tmp_called_name_24);
            Py_DECREF(tmp_called_name_26);
            Py_DECREF(tmp_called_name_28);
            Py_DECREF(tmp_called_name_30);
            Py_DECREF(tmp_called_name_32);
            Py_DECREF(tmp_called_name_34);
            Py_DECREF(tmp_called_name_36);
            Py_DECREF(tmp_called_name_38);
            Py_DECREF(tmp_called_name_40);
            Py_DECREF(tmp_called_name_42);
            Py_DECREF(tmp_called_name_44);
            Py_DECREF(tmp_called_name_46);
            Py_DECREF(tmp_called_name_48);
            Py_DECREF(tmp_called_name_50);
            Py_DECREF(tmp_called_name_52);
            Py_DECREF(tmp_called_name_54);
            Py_DECREF(tmp_called_name_56);
            Py_DECREF(tmp_called_name_58);
            Py_DECREF(tmp_called_name_60);
            Py_DECREF(tmp_called_name_62);
            Py_DECREF(tmp_called_name_64);
            Py_DECREF(tmp_called_name_66);
            Py_DECREF(tmp_called_name_68);
            Py_DECREF(tmp_called_name_70);
            Py_DECREF(tmp_called_name_72);
            Py_DECREF(tmp_called_name_74);
            Py_DECREF(tmp_called_name_76);
            Py_DECREF(tmp_called_name_78);
            Py_DECREF(tmp_called_name_80);
            Py_DECREF(tmp_called_name_82);
            Py_DECREF(tmp_called_name_84);
            Py_DECREF(tmp_called_name_86);
            Py_DECREF(tmp_called_name_88);
            Py_DECREF(tmp_called_name_90);
            Py_DECREF(tmp_called_name_92);
            Py_DECREF(tmp_called_name_94);
            Py_DECREF(tmp_called_name_96);
            Py_DECREF(tmp_called_name_98);
            Py_DECREF(tmp_called_name_100);
            Py_DECREF(tmp_called_name_102);
            Py_DECREF(tmp_called_name_104);
            Py_DECREF(tmp_called_name_106);
            Py_DECREF(tmp_called_name_108);
            Py_DECREF(tmp_called_name_110);
            Py_DECREF(tmp_called_name_112);
            Py_DECREF(tmp_called_name_114);
            Py_DECREF(tmp_called_name_116);
            Py_DECREF(tmp_called_name_118);
            Py_DECREF(tmp_called_name_120);
            Py_DECREF(tmp_called_name_122);
            Py_DECREF(tmp_called_name_124);
            Py_DECREF(tmp_called_name_126);
            Py_DECREF(tmp_called_name_128);
            Py_DECREF(tmp_called_name_130);
            Py_DECREF(tmp_called_name_132);
            Py_DECREF(tmp_called_name_134);
            Py_DECREF(tmp_called_name_136);
            Py_DECREF(tmp_called_name_138);
            Py_DECREF(tmp_called_name_140);
            Py_DECREF(tmp_called_name_142);
            Py_DECREF(tmp_called_name_144);
            Py_DECREF(tmp_called_name_146);
            Py_DECREF(tmp_called_name_148);
            Py_DECREF(tmp_called_name_150);
            Py_DECREF(tmp_called_name_152);
            Py_DECREF(tmp_called_name_154);
            Py_DECREF(tmp_called_name_156);

            exception_lineno = 113;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_1e465c63423cecf32f0c62928e893560->m_frame.f_lineno = 112;
        tmp_args_element_name_77 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_156, tmp_args_element_name_78);
        Py_DECREF(tmp_called_name_156);
        Py_DECREF(tmp_args_element_name_78);
        if (tmp_args_element_name_77 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_2);
            Py_DECREF(tmp_called_name_4);
            Py_DECREF(tmp_called_name_6);
            Py_DECREF(tmp_called_name_8);
            Py_DECREF(tmp_called_name_10);
            Py_DECREF(tmp_called_name_12);
            Py_DECREF(tmp_called_name_14);
            Py_DECREF(tmp_called_name_16);
            Py_DECREF(tmp_called_name_18);
            Py_DECREF(tmp_called_name_20);
            Py_DECREF(tmp_called_name_22);
            Py_DECREF(tmp_called_name_24);
            Py_DECREF(tmp_called_name_26);
            Py_DECREF(tmp_called_name_28);
            Py_DECREF(tmp_called_name_30);
            Py_DECREF(tmp_called_name_32);
            Py_DECREF(tmp_called_name_34);
            Py_DECREF(tmp_called_name_36);
            Py_DECREF(tmp_called_name_38);
            Py_DECREF(tmp_called_name_40);
            Py_DECREF(tmp_called_name_42);
            Py_DECREF(tmp_called_name_44);
            Py_DECREF(tmp_called_name_46);
            Py_DECREF(tmp_called_name_48);
            Py_DECREF(tmp_called_name_50);
            Py_DECREF(tmp_called_name_52);
            Py_DECREF(tmp_called_name_54);
            Py_DECREF(tmp_called_name_56);
            Py_DECREF(tmp_called_name_58);
            Py_DECREF(tmp_called_name_60);
            Py_DECREF(tmp_called_name_62);
            Py_DECREF(tmp_called_name_64);
            Py_DECREF(tmp_called_name_66);
            Py_DECREF(tmp_called_name_68);
            Py_DECREF(tmp_called_name_70);
            Py_DECREF(tmp_called_name_72);
            Py_DECREF(tmp_called_name_74);
            Py_DECREF(tmp_called_name_76);
            Py_DECREF(tmp_called_name_78);
            Py_DECREF(tmp_called_name_80);
            Py_DECREF(tmp_called_name_82);
            Py_DECREF(tmp_called_name_84);
            Py_DECREF(tmp_called_name_86);
            Py_DECREF(tmp_called_name_88);
            Py_DECREF(tmp_called_name_90);
            Py_DECREF(tmp_called_name_92);
            Py_DECREF(tmp_called_name_94);
            Py_DECREF(tmp_called_name_96);
            Py_DECREF(tmp_called_name_98);
            Py_DECREF(tmp_called_name_100);
            Py_DECREF(tmp_called_name_102);
            Py_DECREF(tmp_called_name_104);
            Py_DECREF(tmp_called_name_106);
            Py_DECREF(tmp_called_name_108);
            Py_DECREF(tmp_called_name_110);
            Py_DECREF(tmp_called_name_112);
            Py_DECREF(tmp_called_name_114);
            Py_DECREF(tmp_called_name_116);
            Py_DECREF(tmp_called_name_118);
            Py_DECREF(tmp_called_name_120);
            Py_DECREF(tmp_called_name_122);
            Py_DECREF(tmp_called_name_124);
            Py_DECREF(tmp_called_name_126);
            Py_DECREF(tmp_called_name_128);
            Py_DECREF(tmp_called_name_130);
            Py_DECREF(tmp_called_name_132);
            Py_DECREF(tmp_called_name_134);
            Py_DECREF(tmp_called_name_136);
            Py_DECREF(tmp_called_name_138);
            Py_DECREF(tmp_called_name_140);
            Py_DECREF(tmp_called_name_142);
            Py_DECREF(tmp_called_name_144);
            Py_DECREF(tmp_called_name_146);
            Py_DECREF(tmp_called_name_148);
            Py_DECREF(tmp_called_name_150);
            Py_DECREF(tmp_called_name_152);
            Py_DECREF(tmp_called_name_154);

            exception_lineno = 112;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_1e465c63423cecf32f0c62928e893560->m_frame.f_lineno = 111;
        tmp_args_element_name_76 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_154, tmp_args_element_name_77);
        Py_DECREF(tmp_called_name_154);
        Py_DECREF(tmp_args_element_name_77);
        if (tmp_args_element_name_76 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_2);
            Py_DECREF(tmp_called_name_4);
            Py_DECREF(tmp_called_name_6);
            Py_DECREF(tmp_called_name_8);
            Py_DECREF(tmp_called_name_10);
            Py_DECREF(tmp_called_name_12);
            Py_DECREF(tmp_called_name_14);
            Py_DECREF(tmp_called_name_16);
            Py_DECREF(tmp_called_name_18);
            Py_DECREF(tmp_called_name_20);
            Py_DECREF(tmp_called_name_22);
            Py_DECREF(tmp_called_name_24);
            Py_DECREF(tmp_called_name_26);
            Py_DECREF(tmp_called_name_28);
            Py_DECREF(tmp_called_name_30);
            Py_DECREF(tmp_called_name_32);
            Py_DECREF(tmp_called_name_34);
            Py_DECREF(tmp_called_name_36);
            Py_DECREF(tmp_called_name_38);
            Py_DECREF(tmp_called_name_40);
            Py_DECREF(tmp_called_name_42);
            Py_DECREF(tmp_called_name_44);
            Py_DECREF(tmp_called_name_46);
            Py_DECREF(tmp_called_name_48);
            Py_DECREF(tmp_called_name_50);
            Py_DECREF(tmp_called_name_52);
            Py_DECREF(tmp_called_name_54);
            Py_DECREF(tmp_called_name_56);
            Py_DECREF(tmp_called_name_58);
            Py_DECREF(tmp_called_name_60);
            Py_DECREF(tmp_called_name_62);
            Py_DECREF(tmp_called_name_64);
            Py_DECREF(tmp_called_name_66);
            Py_DECREF(tmp_called_name_68);
            Py_DECREF(tmp_called_name_70);
            Py_DECREF(tmp_called_name_72);
            Py_DECREF(tmp_called_name_74);
            Py_DECREF(tmp_called_name_76);
            Py_DECREF(tmp_called_name_78);
            Py_DECREF(tmp_called_name_80);
            Py_DECREF(tmp_called_name_82);
            Py_DECREF(tmp_called_name_84);
            Py_DECREF(tmp_called_name_86);
            Py_DECREF(tmp_called_name_88);
            Py_DECREF(tmp_called_name_90);
            Py_DECREF(tmp_called_name_92);
            Py_DECREF(tmp_called_name_94);
            Py_DECREF(tmp_called_name_96);
            Py_DECREF(tmp_called_name_98);
            Py_DECREF(tmp_called_name_100);
            Py_DECREF(tmp_called_name_102);
            Py_DECREF(tmp_called_name_104);
            Py_DECREF(tmp_called_name_106);
            Py_DECREF(tmp_called_name_108);
            Py_DECREF(tmp_called_name_110);
            Py_DECREF(tmp_called_name_112);
            Py_DECREF(tmp_called_name_114);
            Py_DECREF(tmp_called_name_116);
            Py_DECREF(tmp_called_name_118);
            Py_DECREF(tmp_called_name_120);
            Py_DECREF(tmp_called_name_122);
            Py_DECREF(tmp_called_name_124);
            Py_DECREF(tmp_called_name_126);
            Py_DECREF(tmp_called_name_128);
            Py_DECREF(tmp_called_name_130);
            Py_DECREF(tmp_called_name_132);
            Py_DECREF(tmp_called_name_134);
            Py_DECREF(tmp_called_name_136);
            Py_DECREF(tmp_called_name_138);
            Py_DECREF(tmp_called_name_140);
            Py_DECREF(tmp_called_name_142);
            Py_DECREF(tmp_called_name_144);
            Py_DECREF(tmp_called_name_146);
            Py_DECREF(tmp_called_name_148);
            Py_DECREF(tmp_called_name_150);
            Py_DECREF(tmp_called_name_152);

            exception_lineno = 111;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_1e465c63423cecf32f0c62928e893560->m_frame.f_lineno = 110;
        tmp_args_element_name_75 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_152, tmp_args_element_name_76);
        Py_DECREF(tmp_called_name_152);
        Py_DECREF(tmp_args_element_name_76);
        if (tmp_args_element_name_75 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_2);
            Py_DECREF(tmp_called_name_4);
            Py_DECREF(tmp_called_name_6);
            Py_DECREF(tmp_called_name_8);
            Py_DECREF(tmp_called_name_10);
            Py_DECREF(tmp_called_name_12);
            Py_DECREF(tmp_called_name_14);
            Py_DECREF(tmp_called_name_16);
            Py_DECREF(tmp_called_name_18);
            Py_DECREF(tmp_called_name_20);
            Py_DECREF(tmp_called_name_22);
            Py_DECREF(tmp_called_name_24);
            Py_DECREF(tmp_called_name_26);
            Py_DECREF(tmp_called_name_28);
            Py_DECREF(tmp_called_name_30);
            Py_DECREF(tmp_called_name_32);
            Py_DECREF(tmp_called_name_34);
            Py_DECREF(tmp_called_name_36);
            Py_DECREF(tmp_called_name_38);
            Py_DECREF(tmp_called_name_40);
            Py_DECREF(tmp_called_name_42);
            Py_DECREF(tmp_called_name_44);
            Py_DECREF(tmp_called_name_46);
            Py_DECREF(tmp_called_name_48);
            Py_DECREF(tmp_called_name_50);
            Py_DECREF(tmp_called_name_52);
            Py_DECREF(tmp_called_name_54);
            Py_DECREF(tmp_called_name_56);
            Py_DECREF(tmp_called_name_58);
            Py_DECREF(tmp_called_name_60);
            Py_DECREF(tmp_called_name_62);
            Py_DECREF(tmp_called_name_64);
            Py_DECREF(tmp_called_name_66);
            Py_DECREF(tmp_called_name_68);
            Py_DECREF(tmp_called_name_70);
            Py_DECREF(tmp_called_name_72);
            Py_DECREF(tmp_called_name_74);
            Py_DECREF(tmp_called_name_76);
            Py_DECREF(tmp_called_name_78);
            Py_DECREF(tmp_called_name_80);
            Py_DECREF(tmp_called_name_82);
            Py_DECREF(tmp_called_name_84);
            Py_DECREF(tmp_called_name_86);
            Py_DECREF(tmp_called_name_88);
            Py_DECREF(tmp_called_name_90);
            Py_DECREF(tmp_called_name_92);
            Py_DECREF(tmp_called_name_94);
            Py_DECREF(tmp_called_name_96);
            Py_DECREF(tmp_called_name_98);
            Py_DECREF(tmp_called_name_100);
            Py_DECREF(tmp_called_name_102);
            Py_DECREF(tmp_called_name_104);
            Py_DECREF(tmp_called_name_106);
            Py_DECREF(tmp_called_name_108);
            Py_DECREF(tmp_called_name_110);
            Py_DECREF(tmp_called_name_112);
            Py_DECREF(tmp_called_name_114);
            Py_DECREF(tmp_called_name_116);
            Py_DECREF(tmp_called_name_118);
            Py_DECREF(tmp_called_name_120);
            Py_DECREF(tmp_called_name_122);
            Py_DECREF(tmp_called_name_124);
            Py_DECREF(tmp_called_name_126);
            Py_DECREF(tmp_called_name_128);
            Py_DECREF(tmp_called_name_130);
            Py_DECREF(tmp_called_name_132);
            Py_DECREF(tmp_called_name_134);
            Py_DECREF(tmp_called_name_136);
            Py_DECREF(tmp_called_name_138);
            Py_DECREF(tmp_called_name_140);
            Py_DECREF(tmp_called_name_142);
            Py_DECREF(tmp_called_name_144);
            Py_DECREF(tmp_called_name_146);
            Py_DECREF(tmp_called_name_148);
            Py_DECREF(tmp_called_name_150);

            exception_lineno = 110;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_1e465c63423cecf32f0c62928e893560->m_frame.f_lineno = 109;
        tmp_args_element_name_74 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_150, tmp_args_element_name_75);
        Py_DECREF(tmp_called_name_150);
        Py_DECREF(tmp_args_element_name_75);
        if (tmp_args_element_name_74 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_2);
            Py_DECREF(tmp_called_name_4);
            Py_DECREF(tmp_called_name_6);
            Py_DECREF(tmp_called_name_8);
            Py_DECREF(tmp_called_name_10);
            Py_DECREF(tmp_called_name_12);
            Py_DECREF(tmp_called_name_14);
            Py_DECREF(tmp_called_name_16);
            Py_DECREF(tmp_called_name_18);
            Py_DECREF(tmp_called_name_20);
            Py_DECREF(tmp_called_name_22);
            Py_DECREF(tmp_called_name_24);
            Py_DECREF(tmp_called_name_26);
            Py_DECREF(tmp_called_name_28);
            Py_DECREF(tmp_called_name_30);
            Py_DECREF(tmp_called_name_32);
            Py_DECREF(tmp_called_name_34);
            Py_DECREF(tmp_called_name_36);
            Py_DECREF(tmp_called_name_38);
            Py_DECREF(tmp_called_name_40);
            Py_DECREF(tmp_called_name_42);
            Py_DECREF(tmp_called_name_44);
            Py_DECREF(tmp_called_name_46);
            Py_DECREF(tmp_called_name_48);
            Py_DECREF(tmp_called_name_50);
            Py_DECREF(tmp_called_name_52);
            Py_DECREF(tmp_called_name_54);
            Py_DECREF(tmp_called_name_56);
            Py_DECREF(tmp_called_name_58);
            Py_DECREF(tmp_called_name_60);
            Py_DECREF(tmp_called_name_62);
            Py_DECREF(tmp_called_name_64);
            Py_DECREF(tmp_called_name_66);
            Py_DECREF(tmp_called_name_68);
            Py_DECREF(tmp_called_name_70);
            Py_DECREF(tmp_called_name_72);
            Py_DECREF(tmp_called_name_74);
            Py_DECREF(tmp_called_name_76);
            Py_DECREF(tmp_called_name_78);
            Py_DECREF(tmp_called_name_80);
            Py_DECREF(tmp_called_name_82);
            Py_DECREF(tmp_called_name_84);
            Py_DECREF(tmp_called_name_86);
            Py_DECREF(tmp_called_name_88);
            Py_DECREF(tmp_called_name_90);
            Py_DECREF(tmp_called_name_92);
            Py_DECREF(tmp_called_name_94);
            Py_DECREF(tmp_called_name_96);
            Py_DECREF(tmp_called_name_98);
            Py_DECREF(tmp_called_name_100);
            Py_DECREF(tmp_called_name_102);
            Py_DECREF(tmp_called_name_104);
            Py_DECREF(tmp_called_name_106);
            Py_DECREF(tmp_called_name_108);
            Py_DECREF(tmp_called_name_110);
            Py_DECREF(tmp_called_name_112);
            Py_DECREF(tmp_called_name_114);
            Py_DECREF(tmp_called_name_116);
            Py_DECREF(tmp_called_name_118);
            Py_DECREF(tmp_called_name_120);
            Py_DECREF(tmp_called_name_122);
            Py_DECREF(tmp_called_name_124);
            Py_DECREF(tmp_called_name_126);
            Py_DECREF(tmp_called_name_128);
            Py_DECREF(tmp_called_name_130);
            Py_DECREF(tmp_called_name_132);
            Py_DECREF(tmp_called_name_134);
            Py_DECREF(tmp_called_name_136);
            Py_DECREF(tmp_called_name_138);
            Py_DECREF(tmp_called_name_140);
            Py_DECREF(tmp_called_name_142);
            Py_DECREF(tmp_called_name_144);
            Py_DECREF(tmp_called_name_146);
            Py_DECREF(tmp_called_name_148);

            exception_lineno = 109;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_1e465c63423cecf32f0c62928e893560->m_frame.f_lineno = 108;
        tmp_args_element_name_73 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_148, tmp_args_element_name_74);
        Py_DECREF(tmp_called_name_148);
        Py_DECREF(tmp_args_element_name_74);
        if (tmp_args_element_name_73 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_2);
            Py_DECREF(tmp_called_name_4);
            Py_DECREF(tmp_called_name_6);
            Py_DECREF(tmp_called_name_8);
            Py_DECREF(tmp_called_name_10);
            Py_DECREF(tmp_called_name_12);
            Py_DECREF(tmp_called_name_14);
            Py_DECREF(tmp_called_name_16);
            Py_DECREF(tmp_called_name_18);
            Py_DECREF(tmp_called_name_20);
            Py_DECREF(tmp_called_name_22);
            Py_DECREF(tmp_called_name_24);
            Py_DECREF(tmp_called_name_26);
            Py_DECREF(tmp_called_name_28);
            Py_DECREF(tmp_called_name_30);
            Py_DECREF(tmp_called_name_32);
            Py_DECREF(tmp_called_name_34);
            Py_DECREF(tmp_called_name_36);
            Py_DECREF(tmp_called_name_38);
            Py_DECREF(tmp_called_name_40);
            Py_DECREF(tmp_called_name_42);
            Py_DECREF(tmp_called_name_44);
            Py_DECREF(tmp_called_name_46);
            Py_DECREF(tmp_called_name_48);
            Py_DECREF(tmp_called_name_50);
            Py_DECREF(tmp_called_name_52);
            Py_DECREF(tmp_called_name_54);
            Py_DECREF(tmp_called_name_56);
            Py_DECREF(tmp_called_name_58);
            Py_DECREF(tmp_called_name_60);
            Py_DECREF(tmp_called_name_62);
            Py_DECREF(tmp_called_name_64);
            Py_DECREF(tmp_called_name_66);
            Py_DECREF(tmp_called_name_68);
            Py_DECREF(tmp_called_name_70);
            Py_DECREF(tmp_called_name_72);
            Py_DECREF(tmp_called_name_74);
            Py_DECREF(tmp_called_name_76);
            Py_DECREF(tmp_called_name_78);
            Py_DECREF(tmp_called_name_80);
            Py_DECREF(tmp_called_name_82);
            Py_DECREF(tmp_called_name_84);
            Py_DECREF(tmp_called_name_86);
            Py_DECREF(tmp_called_name_88);
            Py_DECREF(tmp_called_name_90);
            Py_DECREF(tmp_called_name_92);
            Py_DECREF(tmp_called_name_94);
            Py_DECREF(tmp_called_name_96);
            Py_DECREF(tmp_called_name_98);
            Py_DECREF(tmp_called_name_100);
            Py_DECREF(tmp_called_name_102);
            Py_DECREF(tmp_called_name_104);
            Py_DECREF(tmp_called_name_106);
            Py_DECREF(tmp_called_name_108);
            Py_DECREF(tmp_called_name_110);
            Py_DECREF(tmp_called_name_112);
            Py_DECREF(tmp_called_name_114);
            Py_DECREF(tmp_called_name_116);
            Py_DECREF(tmp_called_name_118);
            Py_DECREF(tmp_called_name_120);
            Py_DECREF(tmp_called_name_122);
            Py_DECREF(tmp_called_name_124);
            Py_DECREF(tmp_called_name_126);
            Py_DECREF(tmp_called_name_128);
            Py_DECREF(tmp_called_name_130);
            Py_DECREF(tmp_called_name_132);
            Py_DECREF(tmp_called_name_134);
            Py_DECREF(tmp_called_name_136);
            Py_DECREF(tmp_called_name_138);
            Py_DECREF(tmp_called_name_140);
            Py_DECREF(tmp_called_name_142);
            Py_DECREF(tmp_called_name_144);
            Py_DECREF(tmp_called_name_146);

            exception_lineno = 108;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_1e465c63423cecf32f0c62928e893560->m_frame.f_lineno = 107;
        tmp_args_element_name_72 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_146, tmp_args_element_name_73);
        Py_DECREF(tmp_called_name_146);
        Py_DECREF(tmp_args_element_name_73);
        if (tmp_args_element_name_72 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_2);
            Py_DECREF(tmp_called_name_4);
            Py_DECREF(tmp_called_name_6);
            Py_DECREF(tmp_called_name_8);
            Py_DECREF(tmp_called_name_10);
            Py_DECREF(tmp_called_name_12);
            Py_DECREF(tmp_called_name_14);
            Py_DECREF(tmp_called_name_16);
            Py_DECREF(tmp_called_name_18);
            Py_DECREF(tmp_called_name_20);
            Py_DECREF(tmp_called_name_22);
            Py_DECREF(tmp_called_name_24);
            Py_DECREF(tmp_called_name_26);
            Py_DECREF(tmp_called_name_28);
            Py_DECREF(tmp_called_name_30);
            Py_DECREF(tmp_called_name_32);
            Py_DECREF(tmp_called_name_34);
            Py_DECREF(tmp_called_name_36);
            Py_DECREF(tmp_called_name_38);
            Py_DECREF(tmp_called_name_40);
            Py_DECREF(tmp_called_name_42);
            Py_DECREF(tmp_called_name_44);
            Py_DECREF(tmp_called_name_46);
            Py_DECREF(tmp_called_name_48);
            Py_DECREF(tmp_called_name_50);
            Py_DECREF(tmp_called_name_52);
            Py_DECREF(tmp_called_name_54);
            Py_DECREF(tmp_called_name_56);
            Py_DECREF(tmp_called_name_58);
            Py_DECREF(tmp_called_name_60);
            Py_DECREF(tmp_called_name_62);
            Py_DECREF(tmp_called_name_64);
            Py_DECREF(tmp_called_name_66);
            Py_DECREF(tmp_called_name_68);
            Py_DECREF(tmp_called_name_70);
            Py_DECREF(tmp_called_name_72);
            Py_DECREF(tmp_called_name_74);
            Py_DECREF(tmp_called_name_76);
            Py_DECREF(tmp_called_name_78);
            Py_DECREF(tmp_called_name_80);
            Py_DECREF(tmp_called_name_82);
            Py_DECREF(tmp_called_name_84);
            Py_DECREF(tmp_called_name_86);
            Py_DECREF(tmp_called_name_88);
            Py_DECREF(tmp_called_name_90);
            Py_DECREF(tmp_called_name_92);
            Py_DECREF(tmp_called_name_94);
            Py_DECREF(tmp_called_name_96);
            Py_DECREF(tmp_called_name_98);
            Py_DECREF(tmp_called_name_100);
            Py_DECREF(tmp_called_name_102);
            Py_DECREF(tmp_called_name_104);
            Py_DECREF(tmp_called_name_106);
            Py_DECREF(tmp_called_name_108);
            Py_DECREF(tmp_called_name_110);
            Py_DECREF(tmp_called_name_112);
            Py_DECREF(tmp_called_name_114);
            Py_DECREF(tmp_called_name_116);
            Py_DECREF(tmp_called_name_118);
            Py_DECREF(tmp_called_name_120);
            Py_DECREF(tmp_called_name_122);
            Py_DECREF(tmp_called_name_124);
            Py_DECREF(tmp_called_name_126);
            Py_DECREF(tmp_called_name_128);
            Py_DECREF(tmp_called_name_130);
            Py_DECREF(tmp_called_name_132);
            Py_DECREF(tmp_called_name_134);
            Py_DECREF(tmp_called_name_136);
            Py_DECREF(tmp_called_name_138);
            Py_DECREF(tmp_called_name_140);
            Py_DECREF(tmp_called_name_142);
            Py_DECREF(tmp_called_name_144);

            exception_lineno = 107;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_1e465c63423cecf32f0c62928e893560->m_frame.f_lineno = 106;
        tmp_args_element_name_71 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_144, tmp_args_element_name_72);
        Py_DECREF(tmp_called_name_144);
        Py_DECREF(tmp_args_element_name_72);
        if (tmp_args_element_name_71 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_2);
            Py_DECREF(tmp_called_name_4);
            Py_DECREF(tmp_called_name_6);
            Py_DECREF(tmp_called_name_8);
            Py_DECREF(tmp_called_name_10);
            Py_DECREF(tmp_called_name_12);
            Py_DECREF(tmp_called_name_14);
            Py_DECREF(tmp_called_name_16);
            Py_DECREF(tmp_called_name_18);
            Py_DECREF(tmp_called_name_20);
            Py_DECREF(tmp_called_name_22);
            Py_DECREF(tmp_called_name_24);
            Py_DECREF(tmp_called_name_26);
            Py_DECREF(tmp_called_name_28);
            Py_DECREF(tmp_called_name_30);
            Py_DECREF(tmp_called_name_32);
            Py_DECREF(tmp_called_name_34);
            Py_DECREF(tmp_called_name_36);
            Py_DECREF(tmp_called_name_38);
            Py_DECREF(tmp_called_name_40);
            Py_DECREF(tmp_called_name_42);
            Py_DECREF(tmp_called_name_44);
            Py_DECREF(tmp_called_name_46);
            Py_DECREF(tmp_called_name_48);
            Py_DECREF(tmp_called_name_50);
            Py_DECREF(tmp_called_name_52);
            Py_DECREF(tmp_called_name_54);
            Py_DECREF(tmp_called_name_56);
            Py_DECREF(tmp_called_name_58);
            Py_DECREF(tmp_called_name_60);
            Py_DECREF(tmp_called_name_62);
            Py_DECREF(tmp_called_name_64);
            Py_DECREF(tmp_called_name_66);
            Py_DECREF(tmp_called_name_68);
            Py_DECREF(tmp_called_name_70);
            Py_DECREF(tmp_called_name_72);
            Py_DECREF(tmp_called_name_74);
            Py_DECREF(tmp_called_name_76);
            Py_DECREF(tmp_called_name_78);
            Py_DECREF(tmp_called_name_80);
            Py_DECREF(tmp_called_name_82);
            Py_DECREF(tmp_called_name_84);
            Py_DECREF(tmp_called_name_86);
            Py_DECREF(tmp_called_name_88);
            Py_DECREF(tmp_called_name_90);
            Py_DECREF(tmp_called_name_92);
            Py_DECREF(tmp_called_name_94);
            Py_DECREF(tmp_called_name_96);
            Py_DECREF(tmp_called_name_98);
            Py_DECREF(tmp_called_name_100);
            Py_DECREF(tmp_called_name_102);
            Py_DECREF(tmp_called_name_104);
            Py_DECREF(tmp_called_name_106);
            Py_DECREF(tmp_called_name_108);
            Py_DECREF(tmp_called_name_110);
            Py_DECREF(tmp_called_name_112);
            Py_DECREF(tmp_called_name_114);
            Py_DECREF(tmp_called_name_116);
            Py_DECREF(tmp_called_name_118);
            Py_DECREF(tmp_called_name_120);
            Py_DECREF(tmp_called_name_122);
            Py_DECREF(tmp_called_name_124);
            Py_DECREF(tmp_called_name_126);
            Py_DECREF(tmp_called_name_128);
            Py_DECREF(tmp_called_name_130);
            Py_DECREF(tmp_called_name_132);
            Py_DECREF(tmp_called_name_134);
            Py_DECREF(tmp_called_name_136);
            Py_DECREF(tmp_called_name_138);
            Py_DECREF(tmp_called_name_140);
            Py_DECREF(tmp_called_name_142);

            exception_lineno = 106;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_1e465c63423cecf32f0c62928e893560->m_frame.f_lineno = 105;
        tmp_args_element_name_70 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_142, tmp_args_element_name_71);
        Py_DECREF(tmp_called_name_142);
        Py_DECREF(tmp_args_element_name_71);
        if (tmp_args_element_name_70 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_2);
            Py_DECREF(tmp_called_name_4);
            Py_DECREF(tmp_called_name_6);
            Py_DECREF(tmp_called_name_8);
            Py_DECREF(tmp_called_name_10);
            Py_DECREF(tmp_called_name_12);
            Py_DECREF(tmp_called_name_14);
            Py_DECREF(tmp_called_name_16);
            Py_DECREF(tmp_called_name_18);
            Py_DECREF(tmp_called_name_20);
            Py_DECREF(tmp_called_name_22);
            Py_DECREF(tmp_called_name_24);
            Py_DECREF(tmp_called_name_26);
            Py_DECREF(tmp_called_name_28);
            Py_DECREF(tmp_called_name_30);
            Py_DECREF(tmp_called_name_32);
            Py_DECREF(tmp_called_name_34);
            Py_DECREF(tmp_called_name_36);
            Py_DECREF(tmp_called_name_38);
            Py_DECREF(tmp_called_name_40);
            Py_DECREF(tmp_called_name_42);
            Py_DECREF(tmp_called_name_44);
            Py_DECREF(tmp_called_name_46);
            Py_DECREF(tmp_called_name_48);
            Py_DECREF(tmp_called_name_50);
            Py_DECREF(tmp_called_name_52);
            Py_DECREF(tmp_called_name_54);
            Py_DECREF(tmp_called_name_56);
            Py_DECREF(tmp_called_name_58);
            Py_DECREF(tmp_called_name_60);
            Py_DECREF(tmp_called_name_62);
            Py_DECREF(tmp_called_name_64);
            Py_DECREF(tmp_called_name_66);
            Py_DECREF(tmp_called_name_68);
            Py_DECREF(tmp_called_name_70);
            Py_DECREF(tmp_called_name_72);
            Py_DECREF(tmp_called_name_74);
            Py_DECREF(tmp_called_name_76);
            Py_DECREF(tmp_called_name_78);
            Py_DECREF(tmp_called_name_80);
            Py_DECREF(tmp_called_name_82);
            Py_DECREF(tmp_called_name_84);
            Py_DECREF(tmp_called_name_86);
            Py_DECREF(tmp_called_name_88);
            Py_DECREF(tmp_called_name_90);
            Py_DECREF(tmp_called_name_92);
            Py_DECREF(tmp_called_name_94);
            Py_DECREF(tmp_called_name_96);
            Py_DECREF(tmp_called_name_98);
            Py_DECREF(tmp_called_name_100);
            Py_DECREF(tmp_called_name_102);
            Py_DECREF(tmp_called_name_104);
            Py_DECREF(tmp_called_name_106);
            Py_DECREF(tmp_called_name_108);
            Py_DECREF(tmp_called_name_110);
            Py_DECREF(tmp_called_name_112);
            Py_DECREF(tmp_called_name_114);
            Py_DECREF(tmp_called_name_116);
            Py_DECREF(tmp_called_name_118);
            Py_DECREF(tmp_called_name_120);
            Py_DECREF(tmp_called_name_122);
            Py_DECREF(tmp_called_name_124);
            Py_DECREF(tmp_called_name_126);
            Py_DECREF(tmp_called_name_128);
            Py_DECREF(tmp_called_name_130);
            Py_DECREF(tmp_called_name_132);
            Py_DECREF(tmp_called_name_134);
            Py_DECREF(tmp_called_name_136);
            Py_DECREF(tmp_called_name_138);
            Py_DECREF(tmp_called_name_140);

            exception_lineno = 105;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_1e465c63423cecf32f0c62928e893560->m_frame.f_lineno = 104;
        tmp_args_element_name_69 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_140, tmp_args_element_name_70);
        Py_DECREF(tmp_called_name_140);
        Py_DECREF(tmp_args_element_name_70);
        if (tmp_args_element_name_69 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_2);
            Py_DECREF(tmp_called_name_4);
            Py_DECREF(tmp_called_name_6);
            Py_DECREF(tmp_called_name_8);
            Py_DECREF(tmp_called_name_10);
            Py_DECREF(tmp_called_name_12);
            Py_DECREF(tmp_called_name_14);
            Py_DECREF(tmp_called_name_16);
            Py_DECREF(tmp_called_name_18);
            Py_DECREF(tmp_called_name_20);
            Py_DECREF(tmp_called_name_22);
            Py_DECREF(tmp_called_name_24);
            Py_DECREF(tmp_called_name_26);
            Py_DECREF(tmp_called_name_28);
            Py_DECREF(tmp_called_name_30);
            Py_DECREF(tmp_called_name_32);
            Py_DECREF(tmp_called_name_34);
            Py_DECREF(tmp_called_name_36);
            Py_DECREF(tmp_called_name_38);
            Py_DECREF(tmp_called_name_40);
            Py_DECREF(tmp_called_name_42);
            Py_DECREF(tmp_called_name_44);
            Py_DECREF(tmp_called_name_46);
            Py_DECREF(tmp_called_name_48);
            Py_DECREF(tmp_called_name_50);
            Py_DECREF(tmp_called_name_52);
            Py_DECREF(tmp_called_name_54);
            Py_DECREF(tmp_called_name_56);
            Py_DECREF(tmp_called_name_58);
            Py_DECREF(tmp_called_name_60);
            Py_DECREF(tmp_called_name_62);
            Py_DECREF(tmp_called_name_64);
            Py_DECREF(tmp_called_name_66);
            Py_DECREF(tmp_called_name_68);
            Py_DECREF(tmp_called_name_70);
            Py_DECREF(tmp_called_name_72);
            Py_DECREF(tmp_called_name_74);
            Py_DECREF(tmp_called_name_76);
            Py_DECREF(tmp_called_name_78);
            Py_DECREF(tmp_called_name_80);
            Py_DECREF(tmp_called_name_82);
            Py_DECREF(tmp_called_name_84);
            Py_DECREF(tmp_called_name_86);
            Py_DECREF(tmp_called_name_88);
            Py_DECREF(tmp_called_name_90);
            Py_DECREF(tmp_called_name_92);
            Py_DECREF(tmp_called_name_94);
            Py_DECREF(tmp_called_name_96);
            Py_DECREF(tmp_called_name_98);
            Py_DECREF(tmp_called_name_100);
            Py_DECREF(tmp_called_name_102);
            Py_DECREF(tmp_called_name_104);
            Py_DECREF(tmp_called_name_106);
            Py_DECREF(tmp_called_name_108);
            Py_DECREF(tmp_called_name_110);
            Py_DECREF(tmp_called_name_112);
            Py_DECREF(tmp_called_name_114);
            Py_DECREF(tmp_called_name_116);
            Py_DECREF(tmp_called_name_118);
            Py_DECREF(tmp_called_name_120);
            Py_DECREF(tmp_called_name_122);
            Py_DECREF(tmp_called_name_124);
            Py_DECREF(tmp_called_name_126);
            Py_DECREF(tmp_called_name_128);
            Py_DECREF(tmp_called_name_130);
            Py_DECREF(tmp_called_name_132);
            Py_DECREF(tmp_called_name_134);
            Py_DECREF(tmp_called_name_136);
            Py_DECREF(tmp_called_name_138);

            exception_lineno = 104;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_1e465c63423cecf32f0c62928e893560->m_frame.f_lineno = 103;
        tmp_args_element_name_68 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_138, tmp_args_element_name_69);
        Py_DECREF(tmp_called_name_138);
        Py_DECREF(tmp_args_element_name_69);
        if (tmp_args_element_name_68 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_2);
            Py_DECREF(tmp_called_name_4);
            Py_DECREF(tmp_called_name_6);
            Py_DECREF(tmp_called_name_8);
            Py_DECREF(tmp_called_name_10);
            Py_DECREF(tmp_called_name_12);
            Py_DECREF(tmp_called_name_14);
            Py_DECREF(tmp_called_name_16);
            Py_DECREF(tmp_called_name_18);
            Py_DECREF(tmp_called_name_20);
            Py_DECREF(tmp_called_name_22);
            Py_DECREF(tmp_called_name_24);
            Py_DECREF(tmp_called_name_26);
            Py_DECREF(tmp_called_name_28);
            Py_DECREF(tmp_called_name_30);
            Py_DECREF(tmp_called_name_32);
            Py_DECREF(tmp_called_name_34);
            Py_DECREF(tmp_called_name_36);
            Py_DECREF(tmp_called_name_38);
            Py_DECREF(tmp_called_name_40);
            Py_DECREF(tmp_called_name_42);
            Py_DECREF(tmp_called_name_44);
            Py_DECREF(tmp_called_name_46);
            Py_DECREF(tmp_called_name_48);
            Py_DECREF(tmp_called_name_50);
            Py_DECREF(tmp_called_name_52);
            Py_DECREF(tmp_called_name_54);
            Py_DECREF(tmp_called_name_56);
            Py_DECREF(tmp_called_name_58);
            Py_DECREF(tmp_called_name_60);
            Py_DECREF(tmp_called_name_62);
            Py_DECREF(tmp_called_name_64);
            Py_DECREF(tmp_called_name_66);
            Py_DECREF(tmp_called_name_68);
            Py_DECREF(tmp_called_name_70);
            Py_DECREF(tmp_called_name_72);
            Py_DECREF(tmp_called_name_74);
            Py_DECREF(tmp_called_name_76);
            Py_DECREF(tmp_called_name_78);
            Py_DECREF(tmp_called_name_80);
            Py_DECREF(tmp_called_name_82);
            Py_DECREF(tmp_called_name_84);
            Py_DECREF(tmp_called_name_86);
            Py_DECREF(tmp_called_name_88);
            Py_DECREF(tmp_called_name_90);
            Py_DECREF(tmp_called_name_92);
            Py_DECREF(tmp_called_name_94);
            Py_DECREF(tmp_called_name_96);
            Py_DECREF(tmp_called_name_98);
            Py_DECREF(tmp_called_name_100);
            Py_DECREF(tmp_called_name_102);
            Py_DECREF(tmp_called_name_104);
            Py_DECREF(tmp_called_name_106);
            Py_DECREF(tmp_called_name_108);
            Py_DECREF(tmp_called_name_110);
            Py_DECREF(tmp_called_name_112);
            Py_DECREF(tmp_called_name_114);
            Py_DECREF(tmp_called_name_116);
            Py_DECREF(tmp_called_name_118);
            Py_DECREF(tmp_called_name_120);
            Py_DECREF(tmp_called_name_122);
            Py_DECREF(tmp_called_name_124);
            Py_DECREF(tmp_called_name_126);
            Py_DECREF(tmp_called_name_128);
            Py_DECREF(tmp_called_name_130);
            Py_DECREF(tmp_called_name_132);
            Py_DECREF(tmp_called_name_134);
            Py_DECREF(tmp_called_name_136);

            exception_lineno = 103;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_1e465c63423cecf32f0c62928e893560->m_frame.f_lineno = 102;
        tmp_args_element_name_67 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_136, tmp_args_element_name_68);
        Py_DECREF(tmp_called_name_136);
        Py_DECREF(tmp_args_element_name_68);
        if (tmp_args_element_name_67 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_2);
            Py_DECREF(tmp_called_name_4);
            Py_DECREF(tmp_called_name_6);
            Py_DECREF(tmp_called_name_8);
            Py_DECREF(tmp_called_name_10);
            Py_DECREF(tmp_called_name_12);
            Py_DECREF(tmp_called_name_14);
            Py_DECREF(tmp_called_name_16);
            Py_DECREF(tmp_called_name_18);
            Py_DECREF(tmp_called_name_20);
            Py_DECREF(tmp_called_name_22);
            Py_DECREF(tmp_called_name_24);
            Py_DECREF(tmp_called_name_26);
            Py_DECREF(tmp_called_name_28);
            Py_DECREF(tmp_called_name_30);
            Py_DECREF(tmp_called_name_32);
            Py_DECREF(tmp_called_name_34);
            Py_DECREF(tmp_called_name_36);
            Py_DECREF(tmp_called_name_38);
            Py_DECREF(tmp_called_name_40);
            Py_DECREF(tmp_called_name_42);
            Py_DECREF(tmp_called_name_44);
            Py_DECREF(tmp_called_name_46);
            Py_DECREF(tmp_called_name_48);
            Py_DECREF(tmp_called_name_50);
            Py_DECREF(tmp_called_name_52);
            Py_DECREF(tmp_called_name_54);
            Py_DECREF(tmp_called_name_56);
            Py_DECREF(tmp_called_name_58);
            Py_DECREF(tmp_called_name_60);
            Py_DECREF(tmp_called_name_62);
            Py_DECREF(tmp_called_name_64);
            Py_DECREF(tmp_called_name_66);
            Py_DECREF(tmp_called_name_68);
            Py_DECREF(tmp_called_name_70);
            Py_DECREF(tmp_called_name_72);
            Py_DECREF(tmp_called_name_74);
            Py_DECREF(tmp_called_name_76);
            Py_DECREF(tmp_called_name_78);
            Py_DECREF(tmp_called_name_80);
            Py_DECREF(tmp_called_name_82);
            Py_DECREF(tmp_called_name_84);
            Py_DECREF(tmp_called_name_86);
            Py_DECREF(tmp_called_name_88);
            Py_DECREF(tmp_called_name_90);
            Py_DECREF(tmp_called_name_92);
            Py_DECREF(tmp_called_name_94);
            Py_DECREF(tmp_called_name_96);
            Py_DECREF(tmp_called_name_98);
            Py_DECREF(tmp_called_name_100);
            Py_DECREF(tmp_called_name_102);
            Py_DECREF(tmp_called_name_104);
            Py_DECREF(tmp_called_name_106);
            Py_DECREF(tmp_called_name_108);
            Py_DECREF(tmp_called_name_110);
            Py_DECREF(tmp_called_name_112);
            Py_DECREF(tmp_called_name_114);
            Py_DECREF(tmp_called_name_116);
            Py_DECREF(tmp_called_name_118);
            Py_DECREF(tmp_called_name_120);
            Py_DECREF(tmp_called_name_122);
            Py_DECREF(tmp_called_name_124);
            Py_DECREF(tmp_called_name_126);
            Py_DECREF(tmp_called_name_128);
            Py_DECREF(tmp_called_name_130);
            Py_DECREF(tmp_called_name_132);
            Py_DECREF(tmp_called_name_134);

            exception_lineno = 102;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_1e465c63423cecf32f0c62928e893560->m_frame.f_lineno = 101;
        tmp_args_element_name_66 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_134, tmp_args_element_name_67);
        Py_DECREF(tmp_called_name_134);
        Py_DECREF(tmp_args_element_name_67);
        if (tmp_args_element_name_66 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_2);
            Py_DECREF(tmp_called_name_4);
            Py_DECREF(tmp_called_name_6);
            Py_DECREF(tmp_called_name_8);
            Py_DECREF(tmp_called_name_10);
            Py_DECREF(tmp_called_name_12);
            Py_DECREF(tmp_called_name_14);
            Py_DECREF(tmp_called_name_16);
            Py_DECREF(tmp_called_name_18);
            Py_DECREF(tmp_called_name_20);
            Py_DECREF(tmp_called_name_22);
            Py_DECREF(tmp_called_name_24);
            Py_DECREF(tmp_called_name_26);
            Py_DECREF(tmp_called_name_28);
            Py_DECREF(tmp_called_name_30);
            Py_DECREF(tmp_called_name_32);
            Py_DECREF(tmp_called_name_34);
            Py_DECREF(tmp_called_name_36);
            Py_DECREF(tmp_called_name_38);
            Py_DECREF(tmp_called_name_40);
            Py_DECREF(tmp_called_name_42);
            Py_DECREF(tmp_called_name_44);
            Py_DECREF(tmp_called_name_46);
            Py_DECREF(tmp_called_name_48);
            Py_DECREF(tmp_called_name_50);
            Py_DECREF(tmp_called_name_52);
            Py_DECREF(tmp_called_name_54);
            Py_DECREF(tmp_called_name_56);
            Py_DECREF(tmp_called_name_58);
            Py_DECREF(tmp_called_name_60);
            Py_DECREF(tmp_called_name_62);
            Py_DECREF(tmp_called_name_64);
            Py_DECREF(tmp_called_name_66);
            Py_DECREF(tmp_called_name_68);
            Py_DECREF(tmp_called_name_70);
            Py_DECREF(tmp_called_name_72);
            Py_DECREF(tmp_called_name_74);
            Py_DECREF(tmp_called_name_76);
            Py_DECREF(tmp_called_name_78);
            Py_DECREF(tmp_called_name_80);
            Py_DECREF(tmp_called_name_82);
            Py_DECREF(tmp_called_name_84);
            Py_DECREF(tmp_called_name_86);
            Py_DECREF(tmp_called_name_88);
            Py_DECREF(tmp_called_name_90);
            Py_DECREF(tmp_called_name_92);
            Py_DECREF(tmp_called_name_94);
            Py_DECREF(tmp_called_name_96);
            Py_DECREF(tmp_called_name_98);
            Py_DECREF(tmp_called_name_100);
            Py_DECREF(tmp_called_name_102);
            Py_DECREF(tmp_called_name_104);
            Py_DECREF(tmp_called_name_106);
            Py_DECREF(tmp_called_name_108);
            Py_DECREF(tmp_called_name_110);
            Py_DECREF(tmp_called_name_112);
            Py_DECREF(tmp_called_name_114);
            Py_DECREF(tmp_called_name_116);
            Py_DECREF(tmp_called_name_118);
            Py_DECREF(tmp_called_name_120);
            Py_DECREF(tmp_called_name_122);
            Py_DECREF(tmp_called_name_124);
            Py_DECREF(tmp_called_name_126);
            Py_DECREF(tmp_called_name_128);
            Py_DECREF(tmp_called_name_130);
            Py_DECREF(tmp_called_name_132);

            exception_lineno = 101;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_1e465c63423cecf32f0c62928e893560->m_frame.f_lineno = 100;
        tmp_args_element_name_65 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_132, tmp_args_element_name_66);
        Py_DECREF(tmp_called_name_132);
        Py_DECREF(tmp_args_element_name_66);
        if (tmp_args_element_name_65 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_2);
            Py_DECREF(tmp_called_name_4);
            Py_DECREF(tmp_called_name_6);
            Py_DECREF(tmp_called_name_8);
            Py_DECREF(tmp_called_name_10);
            Py_DECREF(tmp_called_name_12);
            Py_DECREF(tmp_called_name_14);
            Py_DECREF(tmp_called_name_16);
            Py_DECREF(tmp_called_name_18);
            Py_DECREF(tmp_called_name_20);
            Py_DECREF(tmp_called_name_22);
            Py_DECREF(tmp_called_name_24);
            Py_DECREF(tmp_called_name_26);
            Py_DECREF(tmp_called_name_28);
            Py_DECREF(tmp_called_name_30);
            Py_DECREF(tmp_called_name_32);
            Py_DECREF(tmp_called_name_34);
            Py_DECREF(tmp_called_name_36);
            Py_DECREF(tmp_called_name_38);
            Py_DECREF(tmp_called_name_40);
            Py_DECREF(tmp_called_name_42);
            Py_DECREF(tmp_called_name_44);
            Py_DECREF(tmp_called_name_46);
            Py_DECREF(tmp_called_name_48);
            Py_DECREF(tmp_called_name_50);
            Py_DECREF(tmp_called_name_52);
            Py_DECREF(tmp_called_name_54);
            Py_DECREF(tmp_called_name_56);
            Py_DECREF(tmp_called_name_58);
            Py_DECREF(tmp_called_name_60);
            Py_DECREF(tmp_called_name_62);
            Py_DECREF(tmp_called_name_64);
            Py_DECREF(tmp_called_name_66);
            Py_DECREF(tmp_called_name_68);
            Py_DECREF(tmp_called_name_70);
            Py_DECREF(tmp_called_name_72);
            Py_DECREF(tmp_called_name_74);
            Py_DECREF(tmp_called_name_76);
            Py_DECREF(tmp_called_name_78);
            Py_DECREF(tmp_called_name_80);
            Py_DECREF(tmp_called_name_82);
            Py_DECREF(tmp_called_name_84);
            Py_DECREF(tmp_called_name_86);
            Py_DECREF(tmp_called_name_88);
            Py_DECREF(tmp_called_name_90);
            Py_DECREF(tmp_called_name_92);
            Py_DECREF(tmp_called_name_94);
            Py_DECREF(tmp_called_name_96);
            Py_DECREF(tmp_called_name_98);
            Py_DECREF(tmp_called_name_100);
            Py_DECREF(tmp_called_name_102);
            Py_DECREF(tmp_called_name_104);
            Py_DECREF(tmp_called_name_106);
            Py_DECREF(tmp_called_name_108);
            Py_DECREF(tmp_called_name_110);
            Py_DECREF(tmp_called_name_112);
            Py_DECREF(tmp_called_name_114);
            Py_DECREF(tmp_called_name_116);
            Py_DECREF(tmp_called_name_118);
            Py_DECREF(tmp_called_name_120);
            Py_DECREF(tmp_called_name_122);
            Py_DECREF(tmp_called_name_124);
            Py_DECREF(tmp_called_name_126);
            Py_DECREF(tmp_called_name_128);
            Py_DECREF(tmp_called_name_130);

            exception_lineno = 100;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_1e465c63423cecf32f0c62928e893560->m_frame.f_lineno = 99;
        tmp_args_element_name_64 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_130, tmp_args_element_name_65);
        Py_DECREF(tmp_called_name_130);
        Py_DECREF(tmp_args_element_name_65);
        if (tmp_args_element_name_64 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_2);
            Py_DECREF(tmp_called_name_4);
            Py_DECREF(tmp_called_name_6);
            Py_DECREF(tmp_called_name_8);
            Py_DECREF(tmp_called_name_10);
            Py_DECREF(tmp_called_name_12);
            Py_DECREF(tmp_called_name_14);
            Py_DECREF(tmp_called_name_16);
            Py_DECREF(tmp_called_name_18);
            Py_DECREF(tmp_called_name_20);
            Py_DECREF(tmp_called_name_22);
            Py_DECREF(tmp_called_name_24);
            Py_DECREF(tmp_called_name_26);
            Py_DECREF(tmp_called_name_28);
            Py_DECREF(tmp_called_name_30);
            Py_DECREF(tmp_called_name_32);
            Py_DECREF(tmp_called_name_34);
            Py_DECREF(tmp_called_name_36);
            Py_DECREF(tmp_called_name_38);
            Py_DECREF(tmp_called_name_40);
            Py_DECREF(tmp_called_name_42);
            Py_DECREF(tmp_called_name_44);
            Py_DECREF(tmp_called_name_46);
            Py_DECREF(tmp_called_name_48);
            Py_DECREF(tmp_called_name_50);
            Py_DECREF(tmp_called_name_52);
            Py_DECREF(tmp_called_name_54);
            Py_DECREF(tmp_called_name_56);
            Py_DECREF(tmp_called_name_58);
            Py_DECREF(tmp_called_name_60);
            Py_DECREF(tmp_called_name_62);
            Py_DECREF(tmp_called_name_64);
            Py_DECREF(tmp_called_name_66);
            Py_DECREF(tmp_called_name_68);
            Py_DECREF(tmp_called_name_70);
            Py_DECREF(tmp_called_name_72);
            Py_DECREF(tmp_called_name_74);
            Py_DECREF(tmp_called_name_76);
            Py_DECREF(tmp_called_name_78);
            Py_DECREF(tmp_called_name_80);
            Py_DECREF(tmp_called_name_82);
            Py_DECREF(tmp_called_name_84);
            Py_DECREF(tmp_called_name_86);
            Py_DECREF(tmp_called_name_88);
            Py_DECREF(tmp_called_name_90);
            Py_DECREF(tmp_called_name_92);
            Py_DECREF(tmp_called_name_94);
            Py_DECREF(tmp_called_name_96);
            Py_DECREF(tmp_called_name_98);
            Py_DECREF(tmp_called_name_100);
            Py_DECREF(tmp_called_name_102);
            Py_DECREF(tmp_called_name_104);
            Py_DECREF(tmp_called_name_106);
            Py_DECREF(tmp_called_name_108);
            Py_DECREF(tmp_called_name_110);
            Py_DECREF(tmp_called_name_112);
            Py_DECREF(tmp_called_name_114);
            Py_DECREF(tmp_called_name_116);
            Py_DECREF(tmp_called_name_118);
            Py_DECREF(tmp_called_name_120);
            Py_DECREF(tmp_called_name_122);
            Py_DECREF(tmp_called_name_124);
            Py_DECREF(tmp_called_name_126);
            Py_DECREF(tmp_called_name_128);

            exception_lineno = 99;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_1e465c63423cecf32f0c62928e893560->m_frame.f_lineno = 98;
        tmp_args_element_name_63 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_128, tmp_args_element_name_64);
        Py_DECREF(tmp_called_name_128);
        Py_DECREF(tmp_args_element_name_64);
        if (tmp_args_element_name_63 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_2);
            Py_DECREF(tmp_called_name_4);
            Py_DECREF(tmp_called_name_6);
            Py_DECREF(tmp_called_name_8);
            Py_DECREF(tmp_called_name_10);
            Py_DECREF(tmp_called_name_12);
            Py_DECREF(tmp_called_name_14);
            Py_DECREF(tmp_called_name_16);
            Py_DECREF(tmp_called_name_18);
            Py_DECREF(tmp_called_name_20);
            Py_DECREF(tmp_called_name_22);
            Py_DECREF(tmp_called_name_24);
            Py_DECREF(tmp_called_name_26);
            Py_DECREF(tmp_called_name_28);
            Py_DECREF(tmp_called_name_30);
            Py_DECREF(tmp_called_name_32);
            Py_DECREF(tmp_called_name_34);
            Py_DECREF(tmp_called_name_36);
            Py_DECREF(tmp_called_name_38);
            Py_DECREF(tmp_called_name_40);
            Py_DECREF(tmp_called_name_42);
            Py_DECREF(tmp_called_name_44);
            Py_DECREF(tmp_called_name_46);
            Py_DECREF(tmp_called_name_48);
            Py_DECREF(tmp_called_name_50);
            Py_DECREF(tmp_called_name_52);
            Py_DECREF(tmp_called_name_54);
            Py_DECREF(tmp_called_name_56);
            Py_DECREF(tmp_called_name_58);
            Py_DECREF(tmp_called_name_60);
            Py_DECREF(tmp_called_name_62);
            Py_DECREF(tmp_called_name_64);
            Py_DECREF(tmp_called_name_66);
            Py_DECREF(tmp_called_name_68);
            Py_DECREF(tmp_called_name_70);
            Py_DECREF(tmp_called_name_72);
            Py_DECREF(tmp_called_name_74);
            Py_DECREF(tmp_called_name_76);
            Py_DECREF(tmp_called_name_78);
            Py_DECREF(tmp_called_name_80);
            Py_DECREF(tmp_called_name_82);
            Py_DECREF(tmp_called_name_84);
            Py_DECREF(tmp_called_name_86);
            Py_DECREF(tmp_called_name_88);
            Py_DECREF(tmp_called_name_90);
            Py_DECREF(tmp_called_name_92);
            Py_DECREF(tmp_called_name_94);
            Py_DECREF(tmp_called_name_96);
            Py_DECREF(tmp_called_name_98);
            Py_DECREF(tmp_called_name_100);
            Py_DECREF(tmp_called_name_102);
            Py_DECREF(tmp_called_name_104);
            Py_DECREF(tmp_called_name_106);
            Py_DECREF(tmp_called_name_108);
            Py_DECREF(tmp_called_name_110);
            Py_DECREF(tmp_called_name_112);
            Py_DECREF(tmp_called_name_114);
            Py_DECREF(tmp_called_name_116);
            Py_DECREF(tmp_called_name_118);
            Py_DECREF(tmp_called_name_120);
            Py_DECREF(tmp_called_name_122);
            Py_DECREF(tmp_called_name_124);
            Py_DECREF(tmp_called_name_126);

            exception_lineno = 98;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_1e465c63423cecf32f0c62928e893560->m_frame.f_lineno = 97;
        tmp_args_element_name_62 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_126, tmp_args_element_name_63);
        Py_DECREF(tmp_called_name_126);
        Py_DECREF(tmp_args_element_name_63);
        if (tmp_args_element_name_62 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_2);
            Py_DECREF(tmp_called_name_4);
            Py_DECREF(tmp_called_name_6);
            Py_DECREF(tmp_called_name_8);
            Py_DECREF(tmp_called_name_10);
            Py_DECREF(tmp_called_name_12);
            Py_DECREF(tmp_called_name_14);
            Py_DECREF(tmp_called_name_16);
            Py_DECREF(tmp_called_name_18);
            Py_DECREF(tmp_called_name_20);
            Py_DECREF(tmp_called_name_22);
            Py_DECREF(tmp_called_name_24);
            Py_DECREF(tmp_called_name_26);
            Py_DECREF(tmp_called_name_28);
            Py_DECREF(tmp_called_name_30);
            Py_DECREF(tmp_called_name_32);
            Py_DECREF(tmp_called_name_34);
            Py_DECREF(tmp_called_name_36);
            Py_DECREF(tmp_called_name_38);
            Py_DECREF(tmp_called_name_40);
            Py_DECREF(tmp_called_name_42);
            Py_DECREF(tmp_called_name_44);
            Py_DECREF(tmp_called_name_46);
            Py_DECREF(tmp_called_name_48);
            Py_DECREF(tmp_called_name_50);
            Py_DECREF(tmp_called_name_52);
            Py_DECREF(tmp_called_name_54);
            Py_DECREF(tmp_called_name_56);
            Py_DECREF(tmp_called_name_58);
            Py_DECREF(tmp_called_name_60);
            Py_DECREF(tmp_called_name_62);
            Py_DECREF(tmp_called_name_64);
            Py_DECREF(tmp_called_name_66);
            Py_DECREF(tmp_called_name_68);
            Py_DECREF(tmp_called_name_70);
            Py_DECREF(tmp_called_name_72);
            Py_DECREF(tmp_called_name_74);
            Py_DECREF(tmp_called_name_76);
            Py_DECREF(tmp_called_name_78);
            Py_DECREF(tmp_called_name_80);
            Py_DECREF(tmp_called_name_82);
            Py_DECREF(tmp_called_name_84);
            Py_DECREF(tmp_called_name_86);
            Py_DECREF(tmp_called_name_88);
            Py_DECREF(tmp_called_name_90);
            Py_DECREF(tmp_called_name_92);
            Py_DECREF(tmp_called_name_94);
            Py_DECREF(tmp_called_name_96);
            Py_DECREF(tmp_called_name_98);
            Py_DECREF(tmp_called_name_100);
            Py_DECREF(tmp_called_name_102);
            Py_DECREF(tmp_called_name_104);
            Py_DECREF(tmp_called_name_106);
            Py_DECREF(tmp_called_name_108);
            Py_DECREF(tmp_called_name_110);
            Py_DECREF(tmp_called_name_112);
            Py_DECREF(tmp_called_name_114);
            Py_DECREF(tmp_called_name_116);
            Py_DECREF(tmp_called_name_118);
            Py_DECREF(tmp_called_name_120);
            Py_DECREF(tmp_called_name_122);
            Py_DECREF(tmp_called_name_124);

            exception_lineno = 97;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_1e465c63423cecf32f0c62928e893560->m_frame.f_lineno = 96;
        tmp_args_element_name_61 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_124, tmp_args_element_name_62);
        Py_DECREF(tmp_called_name_124);
        Py_DECREF(tmp_args_element_name_62);
        if (tmp_args_element_name_61 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_2);
            Py_DECREF(tmp_called_name_4);
            Py_DECREF(tmp_called_name_6);
            Py_DECREF(tmp_called_name_8);
            Py_DECREF(tmp_called_name_10);
            Py_DECREF(tmp_called_name_12);
            Py_DECREF(tmp_called_name_14);
            Py_DECREF(tmp_called_name_16);
            Py_DECREF(tmp_called_name_18);
            Py_DECREF(tmp_called_name_20);
            Py_DECREF(tmp_called_name_22);
            Py_DECREF(tmp_called_name_24);
            Py_DECREF(tmp_called_name_26);
            Py_DECREF(tmp_called_name_28);
            Py_DECREF(tmp_called_name_30);
            Py_DECREF(tmp_called_name_32);
            Py_DECREF(tmp_called_name_34);
            Py_DECREF(tmp_called_name_36);
            Py_DECREF(tmp_called_name_38);
            Py_DECREF(tmp_called_name_40);
            Py_DECREF(tmp_called_name_42);
            Py_DECREF(tmp_called_name_44);
            Py_DECREF(tmp_called_name_46);
            Py_DECREF(tmp_called_name_48);
            Py_DECREF(tmp_called_name_50);
            Py_DECREF(tmp_called_name_52);
            Py_DECREF(tmp_called_name_54);
            Py_DECREF(tmp_called_name_56);
            Py_DECREF(tmp_called_name_58);
            Py_DECREF(tmp_called_name_60);
            Py_DECREF(tmp_called_name_62);
            Py_DECREF(tmp_called_name_64);
            Py_DECREF(tmp_called_name_66);
            Py_DECREF(tmp_called_name_68);
            Py_DECREF(tmp_called_name_70);
            Py_DECREF(tmp_called_name_72);
            Py_DECREF(tmp_called_name_74);
            Py_DECREF(tmp_called_name_76);
            Py_DECREF(tmp_called_name_78);
            Py_DECREF(tmp_called_name_80);
            Py_DECREF(tmp_called_name_82);
            Py_DECREF(tmp_called_name_84);
            Py_DECREF(tmp_called_name_86);
            Py_DECREF(tmp_called_name_88);
            Py_DECREF(tmp_called_name_90);
            Py_DECREF(tmp_called_name_92);
            Py_DECREF(tmp_called_name_94);
            Py_DECREF(tmp_called_name_96);
            Py_DECREF(tmp_called_name_98);
            Py_DECREF(tmp_called_name_100);
            Py_DECREF(tmp_called_name_102);
            Py_DECREF(tmp_called_name_104);
            Py_DECREF(tmp_called_name_106);
            Py_DECREF(tmp_called_name_108);
            Py_DECREF(tmp_called_name_110);
            Py_DECREF(tmp_called_name_112);
            Py_DECREF(tmp_called_name_114);
            Py_DECREF(tmp_called_name_116);
            Py_DECREF(tmp_called_name_118);
            Py_DECREF(tmp_called_name_120);
            Py_DECREF(tmp_called_name_122);

            exception_lineno = 96;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_1e465c63423cecf32f0c62928e893560->m_frame.f_lineno = 95;
        tmp_args_element_name_60 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_122, tmp_args_element_name_61);
        Py_DECREF(tmp_called_name_122);
        Py_DECREF(tmp_args_element_name_61);
        if (tmp_args_element_name_60 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_2);
            Py_DECREF(tmp_called_name_4);
            Py_DECREF(tmp_called_name_6);
            Py_DECREF(tmp_called_name_8);
            Py_DECREF(tmp_called_name_10);
            Py_DECREF(tmp_called_name_12);
            Py_DECREF(tmp_called_name_14);
            Py_DECREF(tmp_called_name_16);
            Py_DECREF(tmp_called_name_18);
            Py_DECREF(tmp_called_name_20);
            Py_DECREF(tmp_called_name_22);
            Py_DECREF(tmp_called_name_24);
            Py_DECREF(tmp_called_name_26);
            Py_DECREF(tmp_called_name_28);
            Py_DECREF(tmp_called_name_30);
            Py_DECREF(tmp_called_name_32);
            Py_DECREF(tmp_called_name_34);
            Py_DECREF(tmp_called_name_36);
            Py_DECREF(tmp_called_name_38);
            Py_DECREF(tmp_called_name_40);
            Py_DECREF(tmp_called_name_42);
            Py_DECREF(tmp_called_name_44);
            Py_DECREF(tmp_called_name_46);
            Py_DECREF(tmp_called_name_48);
            Py_DECREF(tmp_called_name_50);
            Py_DECREF(tmp_called_name_52);
            Py_DECREF(tmp_called_name_54);
            Py_DECREF(tmp_called_name_56);
            Py_DECREF(tmp_called_name_58);
            Py_DECREF(tmp_called_name_60);
            Py_DECREF(tmp_called_name_62);
            Py_DECREF(tmp_called_name_64);
            Py_DECREF(tmp_called_name_66);
            Py_DECREF(tmp_called_name_68);
            Py_DECREF(tmp_called_name_70);
            Py_DECREF(tmp_called_name_72);
            Py_DECREF(tmp_called_name_74);
            Py_DECREF(tmp_called_name_76);
            Py_DECREF(tmp_called_name_78);
            Py_DECREF(tmp_called_name_80);
            Py_DECREF(tmp_called_name_82);
            Py_DECREF(tmp_called_name_84);
            Py_DECREF(tmp_called_name_86);
            Py_DECREF(tmp_called_name_88);
            Py_DECREF(tmp_called_name_90);
            Py_DECREF(tmp_called_name_92);
            Py_DECREF(tmp_called_name_94);
            Py_DECREF(tmp_called_name_96);
            Py_DECREF(tmp_called_name_98);
            Py_DECREF(tmp_called_name_100);
            Py_DECREF(tmp_called_name_102);
            Py_DECREF(tmp_called_name_104);
            Py_DECREF(tmp_called_name_106);
            Py_DECREF(tmp_called_name_108);
            Py_DECREF(tmp_called_name_110);
            Py_DECREF(tmp_called_name_112);
            Py_DECREF(tmp_called_name_114);
            Py_DECREF(tmp_called_name_116);
            Py_DECREF(tmp_called_name_118);
            Py_DECREF(tmp_called_name_120);

            exception_lineno = 95;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_1e465c63423cecf32f0c62928e893560->m_frame.f_lineno = 94;
        tmp_args_element_name_59 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_120, tmp_args_element_name_60);
        Py_DECREF(tmp_called_name_120);
        Py_DECREF(tmp_args_element_name_60);
        if (tmp_args_element_name_59 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_2);
            Py_DECREF(tmp_called_name_4);
            Py_DECREF(tmp_called_name_6);
            Py_DECREF(tmp_called_name_8);
            Py_DECREF(tmp_called_name_10);
            Py_DECREF(tmp_called_name_12);
            Py_DECREF(tmp_called_name_14);
            Py_DECREF(tmp_called_name_16);
            Py_DECREF(tmp_called_name_18);
            Py_DECREF(tmp_called_name_20);
            Py_DECREF(tmp_called_name_22);
            Py_DECREF(tmp_called_name_24);
            Py_DECREF(tmp_called_name_26);
            Py_DECREF(tmp_called_name_28);
            Py_DECREF(tmp_called_name_30);
            Py_DECREF(tmp_called_name_32);
            Py_DECREF(tmp_called_name_34);
            Py_DECREF(tmp_called_name_36);
            Py_DECREF(tmp_called_name_38);
            Py_DECREF(tmp_called_name_40);
            Py_DECREF(tmp_called_name_42);
            Py_DECREF(tmp_called_name_44);
            Py_DECREF(tmp_called_name_46);
            Py_DECREF(tmp_called_name_48);
            Py_DECREF(tmp_called_name_50);
            Py_DECREF(tmp_called_name_52);
            Py_DECREF(tmp_called_name_54);
            Py_DECREF(tmp_called_name_56);
            Py_DECREF(tmp_called_name_58);
            Py_DECREF(tmp_called_name_60);
            Py_DECREF(tmp_called_name_62);
            Py_DECREF(tmp_called_name_64);
            Py_DECREF(tmp_called_name_66);
            Py_DECREF(tmp_called_name_68);
            Py_DECREF(tmp_called_name_70);
            Py_DECREF(tmp_called_name_72);
            Py_DECREF(tmp_called_name_74);
            Py_DECREF(tmp_called_name_76);
            Py_DECREF(tmp_called_name_78);
            Py_DECREF(tmp_called_name_80);
            Py_DECREF(tmp_called_name_82);
            Py_DECREF(tmp_called_name_84);
            Py_DECREF(tmp_called_name_86);
            Py_DECREF(tmp_called_name_88);
            Py_DECREF(tmp_called_name_90);
            Py_DECREF(tmp_called_name_92);
            Py_DECREF(tmp_called_name_94);
            Py_DECREF(tmp_called_name_96);
            Py_DECREF(tmp_called_name_98);
            Py_DECREF(tmp_called_name_100);
            Py_DECREF(tmp_called_name_102);
            Py_DECREF(tmp_called_name_104);
            Py_DECREF(tmp_called_name_106);
            Py_DECREF(tmp_called_name_108);
            Py_DECREF(tmp_called_name_110);
            Py_DECREF(tmp_called_name_112);
            Py_DECREF(tmp_called_name_114);
            Py_DECREF(tmp_called_name_116);
            Py_DECREF(tmp_called_name_118);

            exception_lineno = 94;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_1e465c63423cecf32f0c62928e893560->m_frame.f_lineno = 93;
        tmp_args_element_name_58 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_118, tmp_args_element_name_59);
        Py_DECREF(tmp_called_name_118);
        Py_DECREF(tmp_args_element_name_59);
        if (tmp_args_element_name_58 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_2);
            Py_DECREF(tmp_called_name_4);
            Py_DECREF(tmp_called_name_6);
            Py_DECREF(tmp_called_name_8);
            Py_DECREF(tmp_called_name_10);
            Py_DECREF(tmp_called_name_12);
            Py_DECREF(tmp_called_name_14);
            Py_DECREF(tmp_called_name_16);
            Py_DECREF(tmp_called_name_18);
            Py_DECREF(tmp_called_name_20);
            Py_DECREF(tmp_called_name_22);
            Py_DECREF(tmp_called_name_24);
            Py_DECREF(tmp_called_name_26);
            Py_DECREF(tmp_called_name_28);
            Py_DECREF(tmp_called_name_30);
            Py_DECREF(tmp_called_name_32);
            Py_DECREF(tmp_called_name_34);
            Py_DECREF(tmp_called_name_36);
            Py_DECREF(tmp_called_name_38);
            Py_DECREF(tmp_called_name_40);
            Py_DECREF(tmp_called_name_42);
            Py_DECREF(tmp_called_name_44);
            Py_DECREF(tmp_called_name_46);
            Py_DECREF(tmp_called_name_48);
            Py_DECREF(tmp_called_name_50);
            Py_DECREF(tmp_called_name_52);
            Py_DECREF(tmp_called_name_54);
            Py_DECREF(tmp_called_name_56);
            Py_DECREF(tmp_called_name_58);
            Py_DECREF(tmp_called_name_60);
            Py_DECREF(tmp_called_name_62);
            Py_DECREF(tmp_called_name_64);
            Py_DECREF(tmp_called_name_66);
            Py_DECREF(tmp_called_name_68);
            Py_DECREF(tmp_called_name_70);
            Py_DECREF(tmp_called_name_72);
            Py_DECREF(tmp_called_name_74);
            Py_DECREF(tmp_called_name_76);
            Py_DECREF(tmp_called_name_78);
            Py_DECREF(tmp_called_name_80);
            Py_DECREF(tmp_called_name_82);
            Py_DECREF(tmp_called_name_84);
            Py_DECREF(tmp_called_name_86);
            Py_DECREF(tmp_called_name_88);
            Py_DECREF(tmp_called_name_90);
            Py_DECREF(tmp_called_name_92);
            Py_DECREF(tmp_called_name_94);
            Py_DECREF(tmp_called_name_96);
            Py_DECREF(tmp_called_name_98);
            Py_DECREF(tmp_called_name_100);
            Py_DECREF(tmp_called_name_102);
            Py_DECREF(tmp_called_name_104);
            Py_DECREF(tmp_called_name_106);
            Py_DECREF(tmp_called_name_108);
            Py_DECREF(tmp_called_name_110);
            Py_DECREF(tmp_called_name_112);
            Py_DECREF(tmp_called_name_114);
            Py_DECREF(tmp_called_name_116);

            exception_lineno = 93;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_1e465c63423cecf32f0c62928e893560->m_frame.f_lineno = 92;
        tmp_args_element_name_57 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_116, tmp_args_element_name_58);
        Py_DECREF(tmp_called_name_116);
        Py_DECREF(tmp_args_element_name_58);
        if (tmp_args_element_name_57 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_2);
            Py_DECREF(tmp_called_name_4);
            Py_DECREF(tmp_called_name_6);
            Py_DECREF(tmp_called_name_8);
            Py_DECREF(tmp_called_name_10);
            Py_DECREF(tmp_called_name_12);
            Py_DECREF(tmp_called_name_14);
            Py_DECREF(tmp_called_name_16);
            Py_DECREF(tmp_called_name_18);
            Py_DECREF(tmp_called_name_20);
            Py_DECREF(tmp_called_name_22);
            Py_DECREF(tmp_called_name_24);
            Py_DECREF(tmp_called_name_26);
            Py_DECREF(tmp_called_name_28);
            Py_DECREF(tmp_called_name_30);
            Py_DECREF(tmp_called_name_32);
            Py_DECREF(tmp_called_name_34);
            Py_DECREF(tmp_called_name_36);
            Py_DECREF(tmp_called_name_38);
            Py_DECREF(tmp_called_name_40);
            Py_DECREF(tmp_called_name_42);
            Py_DECREF(tmp_called_name_44);
            Py_DECREF(tmp_called_name_46);
            Py_DECREF(tmp_called_name_48);
            Py_DECREF(tmp_called_name_50);
            Py_DECREF(tmp_called_name_52);
            Py_DECREF(tmp_called_name_54);
            Py_DECREF(tmp_called_name_56);
            Py_DECREF(tmp_called_name_58);
            Py_DECREF(tmp_called_name_60);
            Py_DECREF(tmp_called_name_62);
            Py_DECREF(tmp_called_name_64);
            Py_DECREF(tmp_called_name_66);
            Py_DECREF(tmp_called_name_68);
            Py_DECREF(tmp_called_name_70);
            Py_DECREF(tmp_called_name_72);
            Py_DECREF(tmp_called_name_74);
            Py_DECREF(tmp_called_name_76);
            Py_DECREF(tmp_called_name_78);
            Py_DECREF(tmp_called_name_80);
            Py_DECREF(tmp_called_name_82);
            Py_DECREF(tmp_called_name_84);
            Py_DECREF(tmp_called_name_86);
            Py_DECREF(tmp_called_name_88);
            Py_DECREF(tmp_called_name_90);
            Py_DECREF(tmp_called_name_92);
            Py_DECREF(tmp_called_name_94);
            Py_DECREF(tmp_called_name_96);
            Py_DECREF(tmp_called_name_98);
            Py_DECREF(tmp_called_name_100);
            Py_DECREF(tmp_called_name_102);
            Py_DECREF(tmp_called_name_104);
            Py_DECREF(tmp_called_name_106);
            Py_DECREF(tmp_called_name_108);
            Py_DECREF(tmp_called_name_110);
            Py_DECREF(tmp_called_name_112);
            Py_DECREF(tmp_called_name_114);

            exception_lineno = 92;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_1e465c63423cecf32f0c62928e893560->m_frame.f_lineno = 91;
        tmp_args_element_name_56 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_114, tmp_args_element_name_57);
        Py_DECREF(tmp_called_name_114);
        Py_DECREF(tmp_args_element_name_57);
        if (tmp_args_element_name_56 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_2);
            Py_DECREF(tmp_called_name_4);
            Py_DECREF(tmp_called_name_6);
            Py_DECREF(tmp_called_name_8);
            Py_DECREF(tmp_called_name_10);
            Py_DECREF(tmp_called_name_12);
            Py_DECREF(tmp_called_name_14);
            Py_DECREF(tmp_called_name_16);
            Py_DECREF(tmp_called_name_18);
            Py_DECREF(tmp_called_name_20);
            Py_DECREF(tmp_called_name_22);
            Py_DECREF(tmp_called_name_24);
            Py_DECREF(tmp_called_name_26);
            Py_DECREF(tmp_called_name_28);
            Py_DECREF(tmp_called_name_30);
            Py_DECREF(tmp_called_name_32);
            Py_DECREF(tmp_called_name_34);
            Py_DECREF(tmp_called_name_36);
            Py_DECREF(tmp_called_name_38);
            Py_DECREF(tmp_called_name_40);
            Py_DECREF(tmp_called_name_42);
            Py_DECREF(tmp_called_name_44);
            Py_DECREF(tmp_called_name_46);
            Py_DECREF(tmp_called_name_48);
            Py_DECREF(tmp_called_name_50);
            Py_DECREF(tmp_called_name_52);
            Py_DECREF(tmp_called_name_54);
            Py_DECREF(tmp_called_name_56);
            Py_DECREF(tmp_called_name_58);
            Py_DECREF(tmp_called_name_60);
            Py_DECREF(tmp_called_name_62);
            Py_DECREF(tmp_called_name_64);
            Py_DECREF(tmp_called_name_66);
            Py_DECREF(tmp_called_name_68);
            Py_DECREF(tmp_called_name_70);
            Py_DECREF(tmp_called_name_72);
            Py_DECREF(tmp_called_name_74);
            Py_DECREF(tmp_called_name_76);
            Py_DECREF(tmp_called_name_78);
            Py_DECREF(tmp_called_name_80);
            Py_DECREF(tmp_called_name_82);
            Py_DECREF(tmp_called_name_84);
            Py_DECREF(tmp_called_name_86);
            Py_DECREF(tmp_called_name_88);
            Py_DECREF(tmp_called_name_90);
            Py_DECREF(tmp_called_name_92);
            Py_DECREF(tmp_called_name_94);
            Py_DECREF(tmp_called_name_96);
            Py_DECREF(tmp_called_name_98);
            Py_DECREF(tmp_called_name_100);
            Py_DECREF(tmp_called_name_102);
            Py_DECREF(tmp_called_name_104);
            Py_DECREF(tmp_called_name_106);
            Py_DECREF(tmp_called_name_108);
            Py_DECREF(tmp_called_name_110);
            Py_DECREF(tmp_called_name_112);

            exception_lineno = 91;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_1e465c63423cecf32f0c62928e893560->m_frame.f_lineno = 90;
        tmp_args_element_name_55 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_112, tmp_args_element_name_56);
        Py_DECREF(tmp_called_name_112);
        Py_DECREF(tmp_args_element_name_56);
        if (tmp_args_element_name_55 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_2);
            Py_DECREF(tmp_called_name_4);
            Py_DECREF(tmp_called_name_6);
            Py_DECREF(tmp_called_name_8);
            Py_DECREF(tmp_called_name_10);
            Py_DECREF(tmp_called_name_12);
            Py_DECREF(tmp_called_name_14);
            Py_DECREF(tmp_called_name_16);
            Py_DECREF(tmp_called_name_18);
            Py_DECREF(tmp_called_name_20);
            Py_DECREF(tmp_called_name_22);
            Py_DECREF(tmp_called_name_24);
            Py_DECREF(tmp_called_name_26);
            Py_DECREF(tmp_called_name_28);
            Py_DECREF(tmp_called_name_30);
            Py_DECREF(tmp_called_name_32);
            Py_DECREF(tmp_called_name_34);
            Py_DECREF(tmp_called_name_36);
            Py_DECREF(tmp_called_name_38);
            Py_DECREF(tmp_called_name_40);
            Py_DECREF(tmp_called_name_42);
            Py_DECREF(tmp_called_name_44);
            Py_DECREF(tmp_called_name_46);
            Py_DECREF(tmp_called_name_48);
            Py_DECREF(tmp_called_name_50);
            Py_DECREF(tmp_called_name_52);
            Py_DECREF(tmp_called_name_54);
            Py_DECREF(tmp_called_name_56);
            Py_DECREF(tmp_called_name_58);
            Py_DECREF(tmp_called_name_60);
            Py_DECREF(tmp_called_name_62);
            Py_DECREF(tmp_called_name_64);
            Py_DECREF(tmp_called_name_66);
            Py_DECREF(tmp_called_name_68);
            Py_DECREF(tmp_called_name_70);
            Py_DECREF(tmp_called_name_72);
            Py_DECREF(tmp_called_name_74);
            Py_DECREF(tmp_called_name_76);
            Py_DECREF(tmp_called_name_78);
            Py_DECREF(tmp_called_name_80);
            Py_DECREF(tmp_called_name_82);
            Py_DECREF(tmp_called_name_84);
            Py_DECREF(tmp_called_name_86);
            Py_DECREF(tmp_called_name_88);
            Py_DECREF(tmp_called_name_90);
            Py_DECREF(tmp_called_name_92);
            Py_DECREF(tmp_called_name_94);
            Py_DECREF(tmp_called_name_96);
            Py_DECREF(tmp_called_name_98);
            Py_DECREF(tmp_called_name_100);
            Py_DECREF(tmp_called_name_102);
            Py_DECREF(tmp_called_name_104);
            Py_DECREF(tmp_called_name_106);
            Py_DECREF(tmp_called_name_108);
            Py_DECREF(tmp_called_name_110);

            exception_lineno = 90;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_1e465c63423cecf32f0c62928e893560->m_frame.f_lineno = 89;
        tmp_args_element_name_54 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_110, tmp_args_element_name_55);
        Py_DECREF(tmp_called_name_110);
        Py_DECREF(tmp_args_element_name_55);
        if (tmp_args_element_name_54 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_2);
            Py_DECREF(tmp_called_name_4);
            Py_DECREF(tmp_called_name_6);
            Py_DECREF(tmp_called_name_8);
            Py_DECREF(tmp_called_name_10);
            Py_DECREF(tmp_called_name_12);
            Py_DECREF(tmp_called_name_14);
            Py_DECREF(tmp_called_name_16);
            Py_DECREF(tmp_called_name_18);
            Py_DECREF(tmp_called_name_20);
            Py_DECREF(tmp_called_name_22);
            Py_DECREF(tmp_called_name_24);
            Py_DECREF(tmp_called_name_26);
            Py_DECREF(tmp_called_name_28);
            Py_DECREF(tmp_called_name_30);
            Py_DECREF(tmp_called_name_32);
            Py_DECREF(tmp_called_name_34);
            Py_DECREF(tmp_called_name_36);
            Py_DECREF(tmp_called_name_38);
            Py_DECREF(tmp_called_name_40);
            Py_DECREF(tmp_called_name_42);
            Py_DECREF(tmp_called_name_44);
            Py_DECREF(tmp_called_name_46);
            Py_DECREF(tmp_called_name_48);
            Py_DECREF(tmp_called_name_50);
            Py_DECREF(tmp_called_name_52);
            Py_DECREF(tmp_called_name_54);
            Py_DECREF(tmp_called_name_56);
            Py_DECREF(tmp_called_name_58);
            Py_DECREF(tmp_called_name_60);
            Py_DECREF(tmp_called_name_62);
            Py_DECREF(tmp_called_name_64);
            Py_DECREF(tmp_called_name_66);
            Py_DECREF(tmp_called_name_68);
            Py_DECREF(tmp_called_name_70);
            Py_DECREF(tmp_called_name_72);
            Py_DECREF(tmp_called_name_74);
            Py_DECREF(tmp_called_name_76);
            Py_DECREF(tmp_called_name_78);
            Py_DECREF(tmp_called_name_80);
            Py_DECREF(tmp_called_name_82);
            Py_DECREF(tmp_called_name_84);
            Py_DECREF(tmp_called_name_86);
            Py_DECREF(tmp_called_name_88);
            Py_DECREF(tmp_called_name_90);
            Py_DECREF(tmp_called_name_92);
            Py_DECREF(tmp_called_name_94);
            Py_DECREF(tmp_called_name_96);
            Py_DECREF(tmp_called_name_98);
            Py_DECREF(tmp_called_name_100);
            Py_DECREF(tmp_called_name_102);
            Py_DECREF(tmp_called_name_104);
            Py_DECREF(tmp_called_name_106);
            Py_DECREF(tmp_called_name_108);

            exception_lineno = 89;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_1e465c63423cecf32f0c62928e893560->m_frame.f_lineno = 88;
        tmp_args_element_name_53 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_108, tmp_args_element_name_54);
        Py_DECREF(tmp_called_name_108);
        Py_DECREF(tmp_args_element_name_54);
        if (tmp_args_element_name_53 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_2);
            Py_DECREF(tmp_called_name_4);
            Py_DECREF(tmp_called_name_6);
            Py_DECREF(tmp_called_name_8);
            Py_DECREF(tmp_called_name_10);
            Py_DECREF(tmp_called_name_12);
            Py_DECREF(tmp_called_name_14);
            Py_DECREF(tmp_called_name_16);
            Py_DECREF(tmp_called_name_18);
            Py_DECREF(tmp_called_name_20);
            Py_DECREF(tmp_called_name_22);
            Py_DECREF(tmp_called_name_24);
            Py_DECREF(tmp_called_name_26);
            Py_DECREF(tmp_called_name_28);
            Py_DECREF(tmp_called_name_30);
            Py_DECREF(tmp_called_name_32);
            Py_DECREF(tmp_called_name_34);
            Py_DECREF(tmp_called_name_36);
            Py_DECREF(tmp_called_name_38);
            Py_DECREF(tmp_called_name_40);
            Py_DECREF(tmp_called_name_42);
            Py_DECREF(tmp_called_name_44);
            Py_DECREF(tmp_called_name_46);
            Py_DECREF(tmp_called_name_48);
            Py_DECREF(tmp_called_name_50);
            Py_DECREF(tmp_called_name_52);
            Py_DECREF(tmp_called_name_54);
            Py_DECREF(tmp_called_name_56);
            Py_DECREF(tmp_called_name_58);
            Py_DECREF(tmp_called_name_60);
            Py_DECREF(tmp_called_name_62);
            Py_DECREF(tmp_called_name_64);
            Py_DECREF(tmp_called_name_66);
            Py_DECREF(tmp_called_name_68);
            Py_DECREF(tmp_called_name_70);
            Py_DECREF(tmp_called_name_72);
            Py_DECREF(tmp_called_name_74);
            Py_DECREF(tmp_called_name_76);
            Py_DECREF(tmp_called_name_78);
            Py_DECREF(tmp_called_name_80);
            Py_DECREF(tmp_called_name_82);
            Py_DECREF(tmp_called_name_84);
            Py_DECREF(tmp_called_name_86);
            Py_DECREF(tmp_called_name_88);
            Py_DECREF(tmp_called_name_90);
            Py_DECREF(tmp_called_name_92);
            Py_DECREF(tmp_called_name_94);
            Py_DECREF(tmp_called_name_96);
            Py_DECREF(tmp_called_name_98);
            Py_DECREF(tmp_called_name_100);
            Py_DECREF(tmp_called_name_102);
            Py_DECREF(tmp_called_name_104);
            Py_DECREF(tmp_called_name_106);

            exception_lineno = 88;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_1e465c63423cecf32f0c62928e893560->m_frame.f_lineno = 87;
        tmp_args_element_name_52 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_106, tmp_args_element_name_53);
        Py_DECREF(tmp_called_name_106);
        Py_DECREF(tmp_args_element_name_53);
        if (tmp_args_element_name_52 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_2);
            Py_DECREF(tmp_called_name_4);
            Py_DECREF(tmp_called_name_6);
            Py_DECREF(tmp_called_name_8);
            Py_DECREF(tmp_called_name_10);
            Py_DECREF(tmp_called_name_12);
            Py_DECREF(tmp_called_name_14);
            Py_DECREF(tmp_called_name_16);
            Py_DECREF(tmp_called_name_18);
            Py_DECREF(tmp_called_name_20);
            Py_DECREF(tmp_called_name_22);
            Py_DECREF(tmp_called_name_24);
            Py_DECREF(tmp_called_name_26);
            Py_DECREF(tmp_called_name_28);
            Py_DECREF(tmp_called_name_30);
            Py_DECREF(tmp_called_name_32);
            Py_DECREF(tmp_called_name_34);
            Py_DECREF(tmp_called_name_36);
            Py_DECREF(tmp_called_name_38);
            Py_DECREF(tmp_called_name_40);
            Py_DECREF(tmp_called_name_42);
            Py_DECREF(tmp_called_name_44);
            Py_DECREF(tmp_called_name_46);
            Py_DECREF(tmp_called_name_48);
            Py_DECREF(tmp_called_name_50);
            Py_DECREF(tmp_called_name_52);
            Py_DECREF(tmp_called_name_54);
            Py_DECREF(tmp_called_name_56);
            Py_DECREF(tmp_called_name_58);
            Py_DECREF(tmp_called_name_60);
            Py_DECREF(tmp_called_name_62);
            Py_DECREF(tmp_called_name_64);
            Py_DECREF(tmp_called_name_66);
            Py_DECREF(tmp_called_name_68);
            Py_DECREF(tmp_called_name_70);
            Py_DECREF(tmp_called_name_72);
            Py_DECREF(tmp_called_name_74);
            Py_DECREF(tmp_called_name_76);
            Py_DECREF(tmp_called_name_78);
            Py_DECREF(tmp_called_name_80);
            Py_DECREF(tmp_called_name_82);
            Py_DECREF(tmp_called_name_84);
            Py_DECREF(tmp_called_name_86);
            Py_DECREF(tmp_called_name_88);
            Py_DECREF(tmp_called_name_90);
            Py_DECREF(tmp_called_name_92);
            Py_DECREF(tmp_called_name_94);
            Py_DECREF(tmp_called_name_96);
            Py_DECREF(tmp_called_name_98);
            Py_DECREF(tmp_called_name_100);
            Py_DECREF(tmp_called_name_102);
            Py_DECREF(tmp_called_name_104);

            exception_lineno = 87;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_1e465c63423cecf32f0c62928e893560->m_frame.f_lineno = 86;
        tmp_args_element_name_51 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_104, tmp_args_element_name_52);
        Py_DECREF(tmp_called_name_104);
        Py_DECREF(tmp_args_element_name_52);
        if (tmp_args_element_name_51 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_2);
            Py_DECREF(tmp_called_name_4);
            Py_DECREF(tmp_called_name_6);
            Py_DECREF(tmp_called_name_8);
            Py_DECREF(tmp_called_name_10);
            Py_DECREF(tmp_called_name_12);
            Py_DECREF(tmp_called_name_14);
            Py_DECREF(tmp_called_name_16);
            Py_DECREF(tmp_called_name_18);
            Py_DECREF(tmp_called_name_20);
            Py_DECREF(tmp_called_name_22);
            Py_DECREF(tmp_called_name_24);
            Py_DECREF(tmp_called_name_26);
            Py_DECREF(tmp_called_name_28);
            Py_DECREF(tmp_called_name_30);
            Py_DECREF(tmp_called_name_32);
            Py_DECREF(tmp_called_name_34);
            Py_DECREF(tmp_called_name_36);
            Py_DECREF(tmp_called_name_38);
            Py_DECREF(tmp_called_name_40);
            Py_DECREF(tmp_called_name_42);
            Py_DECREF(tmp_called_name_44);
            Py_DECREF(tmp_called_name_46);
            Py_DECREF(tmp_called_name_48);
            Py_DECREF(tmp_called_name_50);
            Py_DECREF(tmp_called_name_52);
            Py_DECREF(tmp_called_name_54);
            Py_DECREF(tmp_called_name_56);
            Py_DECREF(tmp_called_name_58);
            Py_DECREF(tmp_called_name_60);
            Py_DECREF(tmp_called_name_62);
            Py_DECREF(tmp_called_name_64);
            Py_DECREF(tmp_called_name_66);
            Py_DECREF(tmp_called_name_68);
            Py_DECREF(tmp_called_name_70);
            Py_DECREF(tmp_called_name_72);
            Py_DECREF(tmp_called_name_74);
            Py_DECREF(tmp_called_name_76);
            Py_DECREF(tmp_called_name_78);
            Py_DECREF(tmp_called_name_80);
            Py_DECREF(tmp_called_name_82);
            Py_DECREF(tmp_called_name_84);
            Py_DECREF(tmp_called_name_86);
            Py_DECREF(tmp_called_name_88);
            Py_DECREF(tmp_called_name_90);
            Py_DECREF(tmp_called_name_92);
            Py_DECREF(tmp_called_name_94);
            Py_DECREF(tmp_called_name_96);
            Py_DECREF(tmp_called_name_98);
            Py_DECREF(tmp_called_name_100);
            Py_DECREF(tmp_called_name_102);

            exception_lineno = 86;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_1e465c63423cecf32f0c62928e893560->m_frame.f_lineno = 85;
        tmp_args_element_name_50 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_102, tmp_args_element_name_51);
        Py_DECREF(tmp_called_name_102);
        Py_DECREF(tmp_args_element_name_51);
        if (tmp_args_element_name_50 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_2);
            Py_DECREF(tmp_called_name_4);
            Py_DECREF(tmp_called_name_6);
            Py_DECREF(tmp_called_name_8);
            Py_DECREF(tmp_called_name_10);
            Py_DECREF(tmp_called_name_12);
            Py_DECREF(tmp_called_name_14);
            Py_DECREF(tmp_called_name_16);
            Py_DECREF(tmp_called_name_18);
            Py_DECREF(tmp_called_name_20);
            Py_DECREF(tmp_called_name_22);
            Py_DECREF(tmp_called_name_24);
            Py_DECREF(tmp_called_name_26);
            Py_DECREF(tmp_called_name_28);
            Py_DECREF(tmp_called_name_30);
            Py_DECREF(tmp_called_name_32);
            Py_DECREF(tmp_called_name_34);
            Py_DECREF(tmp_called_name_36);
            Py_DECREF(tmp_called_name_38);
            Py_DECREF(tmp_called_name_40);
            Py_DECREF(tmp_called_name_42);
            Py_DECREF(tmp_called_name_44);
            Py_DECREF(tmp_called_name_46);
            Py_DECREF(tmp_called_name_48);
            Py_DECREF(tmp_called_name_50);
            Py_DECREF(tmp_called_name_52);
            Py_DECREF(tmp_called_name_54);
            Py_DECREF(tmp_called_name_56);
            Py_DECREF(tmp_called_name_58);
            Py_DECREF(tmp_called_name_60);
            Py_DECREF(tmp_called_name_62);
            Py_DECREF(tmp_called_name_64);
            Py_DECREF(tmp_called_name_66);
            Py_DECREF(tmp_called_name_68);
            Py_DECREF(tmp_called_name_70);
            Py_DECREF(tmp_called_name_72);
            Py_DECREF(tmp_called_name_74);
            Py_DECREF(tmp_called_name_76);
            Py_DECREF(tmp_called_name_78);
            Py_DECREF(tmp_called_name_80);
            Py_DECREF(tmp_called_name_82);
            Py_DECREF(tmp_called_name_84);
            Py_DECREF(tmp_called_name_86);
            Py_DECREF(tmp_called_name_88);
            Py_DECREF(tmp_called_name_90);
            Py_DECREF(tmp_called_name_92);
            Py_DECREF(tmp_called_name_94);
            Py_DECREF(tmp_called_name_96);
            Py_DECREF(tmp_called_name_98);
            Py_DECREF(tmp_called_name_100);

            exception_lineno = 85;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_1e465c63423cecf32f0c62928e893560->m_frame.f_lineno = 84;
        tmp_args_element_name_49 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_100, tmp_args_element_name_50);
        Py_DECREF(tmp_called_name_100);
        Py_DECREF(tmp_args_element_name_50);
        if (tmp_args_element_name_49 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_2);
            Py_DECREF(tmp_called_name_4);
            Py_DECREF(tmp_called_name_6);
            Py_DECREF(tmp_called_name_8);
            Py_DECREF(tmp_called_name_10);
            Py_DECREF(tmp_called_name_12);
            Py_DECREF(tmp_called_name_14);
            Py_DECREF(tmp_called_name_16);
            Py_DECREF(tmp_called_name_18);
            Py_DECREF(tmp_called_name_20);
            Py_DECREF(tmp_called_name_22);
            Py_DECREF(tmp_called_name_24);
            Py_DECREF(tmp_called_name_26);
            Py_DECREF(tmp_called_name_28);
            Py_DECREF(tmp_called_name_30);
            Py_DECREF(tmp_called_name_32);
            Py_DECREF(tmp_called_name_34);
            Py_DECREF(tmp_called_name_36);
            Py_DECREF(tmp_called_name_38);
            Py_DECREF(tmp_called_name_40);
            Py_DECREF(tmp_called_name_42);
            Py_DECREF(tmp_called_name_44);
            Py_DECREF(tmp_called_name_46);
            Py_DECREF(tmp_called_name_48);
            Py_DECREF(tmp_called_name_50);
            Py_DECREF(tmp_called_name_52);
            Py_DECREF(tmp_called_name_54);
            Py_DECREF(tmp_called_name_56);
            Py_DECREF(tmp_called_name_58);
            Py_DECREF(tmp_called_name_60);
            Py_DECREF(tmp_called_name_62);
            Py_DECREF(tmp_called_name_64);
            Py_DECREF(tmp_called_name_66);
            Py_DECREF(tmp_called_name_68);
            Py_DECREF(tmp_called_name_70);
            Py_DECREF(tmp_called_name_72);
            Py_DECREF(tmp_called_name_74);
            Py_DECREF(tmp_called_name_76);
            Py_DECREF(tmp_called_name_78);
            Py_DECREF(tmp_called_name_80);
            Py_DECREF(tmp_called_name_82);
            Py_DECREF(tmp_called_name_84);
            Py_DECREF(tmp_called_name_86);
            Py_DECREF(tmp_called_name_88);
            Py_DECREF(tmp_called_name_90);
            Py_DECREF(tmp_called_name_92);
            Py_DECREF(tmp_called_name_94);
            Py_DECREF(tmp_called_name_96);
            Py_DECREF(tmp_called_name_98);

            exception_lineno = 84;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_1e465c63423cecf32f0c62928e893560->m_frame.f_lineno = 83;
        tmp_args_element_name_48 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_98, tmp_args_element_name_49);
        Py_DECREF(tmp_called_name_98);
        Py_DECREF(tmp_args_element_name_49);
        if (tmp_args_element_name_48 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_2);
            Py_DECREF(tmp_called_name_4);
            Py_DECREF(tmp_called_name_6);
            Py_DECREF(tmp_called_name_8);
            Py_DECREF(tmp_called_name_10);
            Py_DECREF(tmp_called_name_12);
            Py_DECREF(tmp_called_name_14);
            Py_DECREF(tmp_called_name_16);
            Py_DECREF(tmp_called_name_18);
            Py_DECREF(tmp_called_name_20);
            Py_DECREF(tmp_called_name_22);
            Py_DECREF(tmp_called_name_24);
            Py_DECREF(tmp_called_name_26);
            Py_DECREF(tmp_called_name_28);
            Py_DECREF(tmp_called_name_30);
            Py_DECREF(tmp_called_name_32);
            Py_DECREF(tmp_called_name_34);
            Py_DECREF(tmp_called_name_36);
            Py_DECREF(tmp_called_name_38);
            Py_DECREF(tmp_called_name_40);
            Py_DECREF(tmp_called_name_42);
            Py_DECREF(tmp_called_name_44);
            Py_DECREF(tmp_called_name_46);
            Py_DECREF(tmp_called_name_48);
            Py_DECREF(tmp_called_name_50);
            Py_DECREF(tmp_called_name_52);
            Py_DECREF(tmp_called_name_54);
            Py_DECREF(tmp_called_name_56);
            Py_DECREF(tmp_called_name_58);
            Py_DECREF(tmp_called_name_60);
            Py_DECREF(tmp_called_name_62);
            Py_DECREF(tmp_called_name_64);
            Py_DECREF(tmp_called_name_66);
            Py_DECREF(tmp_called_name_68);
            Py_DECREF(tmp_called_name_70);
            Py_DECREF(tmp_called_name_72);
            Py_DECREF(tmp_called_name_74);
            Py_DECREF(tmp_called_name_76);
            Py_DECREF(tmp_called_name_78);
            Py_DECREF(tmp_called_name_80);
            Py_DECREF(tmp_called_name_82);
            Py_DECREF(tmp_called_name_84);
            Py_DECREF(tmp_called_name_86);
            Py_DECREF(tmp_called_name_88);
            Py_DECREF(tmp_called_name_90);
            Py_DECREF(tmp_called_name_92);
            Py_DECREF(tmp_called_name_94);
            Py_DECREF(tmp_called_name_96);

            exception_lineno = 83;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_1e465c63423cecf32f0c62928e893560->m_frame.f_lineno = 82;
        tmp_args_element_name_47 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_96, tmp_args_element_name_48);
        Py_DECREF(tmp_called_name_96);
        Py_DECREF(tmp_args_element_name_48);
        if (tmp_args_element_name_47 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_2);
            Py_DECREF(tmp_called_name_4);
            Py_DECREF(tmp_called_name_6);
            Py_DECREF(tmp_called_name_8);
            Py_DECREF(tmp_called_name_10);
            Py_DECREF(tmp_called_name_12);
            Py_DECREF(tmp_called_name_14);
            Py_DECREF(tmp_called_name_16);
            Py_DECREF(tmp_called_name_18);
            Py_DECREF(tmp_called_name_20);
            Py_DECREF(tmp_called_name_22);
            Py_DECREF(tmp_called_name_24);
            Py_DECREF(tmp_called_name_26);
            Py_DECREF(tmp_called_name_28);
            Py_DECREF(tmp_called_name_30);
            Py_DECREF(tmp_called_name_32);
            Py_DECREF(tmp_called_name_34);
            Py_DECREF(tmp_called_name_36);
            Py_DECREF(tmp_called_name_38);
            Py_DECREF(tmp_called_name_40);
            Py_DECREF(tmp_called_name_42);
            Py_DECREF(tmp_called_name_44);
            Py_DECREF(tmp_called_name_46);
            Py_DECREF(tmp_called_name_48);
            Py_DECREF(tmp_called_name_50);
            Py_DECREF(tmp_called_name_52);
            Py_DECREF(tmp_called_name_54);
            Py_DECREF(tmp_called_name_56);
            Py_DECREF(tmp_called_name_58);
            Py_DECREF(tmp_called_name_60);
            Py_DECREF(tmp_called_name_62);
            Py_DECREF(tmp_called_name_64);
            Py_DECREF(tmp_called_name_66);
            Py_DECREF(tmp_called_name_68);
            Py_DECREF(tmp_called_name_70);
            Py_DECREF(tmp_called_name_72);
            Py_DECREF(tmp_called_name_74);
            Py_DECREF(tmp_called_name_76);
            Py_DECREF(tmp_called_name_78);
            Py_DECREF(tmp_called_name_80);
            Py_DECREF(tmp_called_name_82);
            Py_DECREF(tmp_called_name_84);
            Py_DECREF(tmp_called_name_86);
            Py_DECREF(tmp_called_name_88);
            Py_DECREF(tmp_called_name_90);
            Py_DECREF(tmp_called_name_92);
            Py_DECREF(tmp_called_name_94);

            exception_lineno = 82;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_1e465c63423cecf32f0c62928e893560->m_frame.f_lineno = 81;
        tmp_args_element_name_46 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_94, tmp_args_element_name_47);
        Py_DECREF(tmp_called_name_94);
        Py_DECREF(tmp_args_element_name_47);
        if (tmp_args_element_name_46 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_2);
            Py_DECREF(tmp_called_name_4);
            Py_DECREF(tmp_called_name_6);
            Py_DECREF(tmp_called_name_8);
            Py_DECREF(tmp_called_name_10);
            Py_DECREF(tmp_called_name_12);
            Py_DECREF(tmp_called_name_14);
            Py_DECREF(tmp_called_name_16);
            Py_DECREF(tmp_called_name_18);
            Py_DECREF(tmp_called_name_20);
            Py_DECREF(tmp_called_name_22);
            Py_DECREF(tmp_called_name_24);
            Py_DECREF(tmp_called_name_26);
            Py_DECREF(tmp_called_name_28);
            Py_DECREF(tmp_called_name_30);
            Py_DECREF(tmp_called_name_32);
            Py_DECREF(tmp_called_name_34);
            Py_DECREF(tmp_called_name_36);
            Py_DECREF(tmp_called_name_38);
            Py_DECREF(tmp_called_name_40);
            Py_DECREF(tmp_called_name_42);
            Py_DECREF(tmp_called_name_44);
            Py_DECREF(tmp_called_name_46);
            Py_DECREF(tmp_called_name_48);
            Py_DECREF(tmp_called_name_50);
            Py_DECREF(tmp_called_name_52);
            Py_DECREF(tmp_called_name_54);
            Py_DECREF(tmp_called_name_56);
            Py_DECREF(tmp_called_name_58);
            Py_DECREF(tmp_called_name_60);
            Py_DECREF(tmp_called_name_62);
            Py_DECREF(tmp_called_name_64);
            Py_DECREF(tmp_called_name_66);
            Py_DECREF(tmp_called_name_68);
            Py_DECREF(tmp_called_name_70);
            Py_DECREF(tmp_called_name_72);
            Py_DECREF(tmp_called_name_74);
            Py_DECREF(tmp_called_name_76);
            Py_DECREF(tmp_called_name_78);
            Py_DECREF(tmp_called_name_80);
            Py_DECREF(tmp_called_name_82);
            Py_DECREF(tmp_called_name_84);
            Py_DECREF(tmp_called_name_86);
            Py_DECREF(tmp_called_name_88);
            Py_DECREF(tmp_called_name_90);
            Py_DECREF(tmp_called_name_92);

            exception_lineno = 81;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_1e465c63423cecf32f0c62928e893560->m_frame.f_lineno = 80;
        tmp_args_element_name_45 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_92, tmp_args_element_name_46);
        Py_DECREF(tmp_called_name_92);
        Py_DECREF(tmp_args_element_name_46);
        if (tmp_args_element_name_45 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_2);
            Py_DECREF(tmp_called_name_4);
            Py_DECREF(tmp_called_name_6);
            Py_DECREF(tmp_called_name_8);
            Py_DECREF(tmp_called_name_10);
            Py_DECREF(tmp_called_name_12);
            Py_DECREF(tmp_called_name_14);
            Py_DECREF(tmp_called_name_16);
            Py_DECREF(tmp_called_name_18);
            Py_DECREF(tmp_called_name_20);
            Py_DECREF(tmp_called_name_22);
            Py_DECREF(tmp_called_name_24);
            Py_DECREF(tmp_called_name_26);
            Py_DECREF(tmp_called_name_28);
            Py_DECREF(tmp_called_name_30);
            Py_DECREF(tmp_called_name_32);
            Py_DECREF(tmp_called_name_34);
            Py_DECREF(tmp_called_name_36);
            Py_DECREF(tmp_called_name_38);
            Py_DECREF(tmp_called_name_40);
            Py_DECREF(tmp_called_name_42);
            Py_DECREF(tmp_called_name_44);
            Py_DECREF(tmp_called_name_46);
            Py_DECREF(tmp_called_name_48);
            Py_DECREF(tmp_called_name_50);
            Py_DECREF(tmp_called_name_52);
            Py_DECREF(tmp_called_name_54);
            Py_DECREF(tmp_called_name_56);
            Py_DECREF(tmp_called_name_58);
            Py_DECREF(tmp_called_name_60);
            Py_DECREF(tmp_called_name_62);
            Py_DECREF(tmp_called_name_64);
            Py_DECREF(tmp_called_name_66);
            Py_DECREF(tmp_called_name_68);
            Py_DECREF(tmp_called_name_70);
            Py_DECREF(tmp_called_name_72);
            Py_DECREF(tmp_called_name_74);
            Py_DECREF(tmp_called_name_76);
            Py_DECREF(tmp_called_name_78);
            Py_DECREF(tmp_called_name_80);
            Py_DECREF(tmp_called_name_82);
            Py_DECREF(tmp_called_name_84);
            Py_DECREF(tmp_called_name_86);
            Py_DECREF(tmp_called_name_88);
            Py_DECREF(tmp_called_name_90);

            exception_lineno = 80;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_1e465c63423cecf32f0c62928e893560->m_frame.f_lineno = 79;
        tmp_args_element_name_44 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_90, tmp_args_element_name_45);
        Py_DECREF(tmp_called_name_90);
        Py_DECREF(tmp_args_element_name_45);
        if (tmp_args_element_name_44 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_2);
            Py_DECREF(tmp_called_name_4);
            Py_DECREF(tmp_called_name_6);
            Py_DECREF(tmp_called_name_8);
            Py_DECREF(tmp_called_name_10);
            Py_DECREF(tmp_called_name_12);
            Py_DECREF(tmp_called_name_14);
            Py_DECREF(tmp_called_name_16);
            Py_DECREF(tmp_called_name_18);
            Py_DECREF(tmp_called_name_20);
            Py_DECREF(tmp_called_name_22);
            Py_DECREF(tmp_called_name_24);
            Py_DECREF(tmp_called_name_26);
            Py_DECREF(tmp_called_name_28);
            Py_DECREF(tmp_called_name_30);
            Py_DECREF(tmp_called_name_32);
            Py_DECREF(tmp_called_name_34);
            Py_DECREF(tmp_called_name_36);
            Py_DECREF(tmp_called_name_38);
            Py_DECREF(tmp_called_name_40);
            Py_DECREF(tmp_called_name_42);
            Py_DECREF(tmp_called_name_44);
            Py_DECREF(tmp_called_name_46);
            Py_DECREF(tmp_called_name_48);
            Py_DECREF(tmp_called_name_50);
            Py_DECREF(tmp_called_name_52);
            Py_DECREF(tmp_called_name_54);
            Py_DECREF(tmp_called_name_56);
            Py_DECREF(tmp_called_name_58);
            Py_DECREF(tmp_called_name_60);
            Py_DECREF(tmp_called_name_62);
            Py_DECREF(tmp_called_name_64);
            Py_DECREF(tmp_called_name_66);
            Py_DECREF(tmp_called_name_68);
            Py_DECREF(tmp_called_name_70);
            Py_DECREF(tmp_called_name_72);
            Py_DECREF(tmp_called_name_74);
            Py_DECREF(tmp_called_name_76);
            Py_DECREF(tmp_called_name_78);
            Py_DECREF(tmp_called_name_80);
            Py_DECREF(tmp_called_name_82);
            Py_DECREF(tmp_called_name_84);
            Py_DECREF(tmp_called_name_86);
            Py_DECREF(tmp_called_name_88);

            exception_lineno = 79;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_1e465c63423cecf32f0c62928e893560->m_frame.f_lineno = 78;
        tmp_args_element_name_43 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_88, tmp_args_element_name_44);
        Py_DECREF(tmp_called_name_88);
        Py_DECREF(tmp_args_element_name_44);
        if (tmp_args_element_name_43 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_2);
            Py_DECREF(tmp_called_name_4);
            Py_DECREF(tmp_called_name_6);
            Py_DECREF(tmp_called_name_8);
            Py_DECREF(tmp_called_name_10);
            Py_DECREF(tmp_called_name_12);
            Py_DECREF(tmp_called_name_14);
            Py_DECREF(tmp_called_name_16);
            Py_DECREF(tmp_called_name_18);
            Py_DECREF(tmp_called_name_20);
            Py_DECREF(tmp_called_name_22);
            Py_DECREF(tmp_called_name_24);
            Py_DECREF(tmp_called_name_26);
            Py_DECREF(tmp_called_name_28);
            Py_DECREF(tmp_called_name_30);
            Py_DECREF(tmp_called_name_32);
            Py_DECREF(tmp_called_name_34);
            Py_DECREF(tmp_called_name_36);
            Py_DECREF(tmp_called_name_38);
            Py_DECREF(tmp_called_name_40);
            Py_DECREF(tmp_called_name_42);
            Py_DECREF(tmp_called_name_44);
            Py_DECREF(tmp_called_name_46);
            Py_DECREF(tmp_called_name_48);
            Py_DECREF(tmp_called_name_50);
            Py_DECREF(tmp_called_name_52);
            Py_DECREF(tmp_called_name_54);
            Py_DECREF(tmp_called_name_56);
            Py_DECREF(tmp_called_name_58);
            Py_DECREF(tmp_called_name_60);
            Py_DECREF(tmp_called_name_62);
            Py_DECREF(tmp_called_name_64);
            Py_DECREF(tmp_called_name_66);
            Py_DECREF(tmp_called_name_68);
            Py_DECREF(tmp_called_name_70);
            Py_DECREF(tmp_called_name_72);
            Py_DECREF(tmp_called_name_74);
            Py_DECREF(tmp_called_name_76);
            Py_DECREF(tmp_called_name_78);
            Py_DECREF(tmp_called_name_80);
            Py_DECREF(tmp_called_name_82);
            Py_DECREF(tmp_called_name_84);
            Py_DECREF(tmp_called_name_86);

            exception_lineno = 78;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_1e465c63423cecf32f0c62928e893560->m_frame.f_lineno = 77;
        tmp_args_element_name_42 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_86, tmp_args_element_name_43);
        Py_DECREF(tmp_called_name_86);
        Py_DECREF(tmp_args_element_name_43);
        if (tmp_args_element_name_42 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_2);
            Py_DECREF(tmp_called_name_4);
            Py_DECREF(tmp_called_name_6);
            Py_DECREF(tmp_called_name_8);
            Py_DECREF(tmp_called_name_10);
            Py_DECREF(tmp_called_name_12);
            Py_DECREF(tmp_called_name_14);
            Py_DECREF(tmp_called_name_16);
            Py_DECREF(tmp_called_name_18);
            Py_DECREF(tmp_called_name_20);
            Py_DECREF(tmp_called_name_22);
            Py_DECREF(tmp_called_name_24);
            Py_DECREF(tmp_called_name_26);
            Py_DECREF(tmp_called_name_28);
            Py_DECREF(tmp_called_name_30);
            Py_DECREF(tmp_called_name_32);
            Py_DECREF(tmp_called_name_34);
            Py_DECREF(tmp_called_name_36);
            Py_DECREF(tmp_called_name_38);
            Py_DECREF(tmp_called_name_40);
            Py_DECREF(tmp_called_name_42);
            Py_DECREF(tmp_called_name_44);
            Py_DECREF(tmp_called_name_46);
            Py_DECREF(tmp_called_name_48);
            Py_DECREF(tmp_called_name_50);
            Py_DECREF(tmp_called_name_52);
            Py_DECREF(tmp_called_name_54);
            Py_DECREF(tmp_called_name_56);
            Py_DECREF(tmp_called_name_58);
            Py_DECREF(tmp_called_name_60);
            Py_DECREF(tmp_called_name_62);
            Py_DECREF(tmp_called_name_64);
            Py_DECREF(tmp_called_name_66);
            Py_DECREF(tmp_called_name_68);
            Py_DECREF(tmp_called_name_70);
            Py_DECREF(tmp_called_name_72);
            Py_DECREF(tmp_called_name_74);
            Py_DECREF(tmp_called_name_76);
            Py_DECREF(tmp_called_name_78);
            Py_DECREF(tmp_called_name_80);
            Py_DECREF(tmp_called_name_82);
            Py_DECREF(tmp_called_name_84);

            exception_lineno = 77;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_1e465c63423cecf32f0c62928e893560->m_frame.f_lineno = 76;
        tmp_args_element_name_41 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_84, tmp_args_element_name_42);
        Py_DECREF(tmp_called_name_84);
        Py_DECREF(tmp_args_element_name_42);
        if (tmp_args_element_name_41 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_2);
            Py_DECREF(tmp_called_name_4);
            Py_DECREF(tmp_called_name_6);
            Py_DECREF(tmp_called_name_8);
            Py_DECREF(tmp_called_name_10);
            Py_DECREF(tmp_called_name_12);
            Py_DECREF(tmp_called_name_14);
            Py_DECREF(tmp_called_name_16);
            Py_DECREF(tmp_called_name_18);
            Py_DECREF(tmp_called_name_20);
            Py_DECREF(tmp_called_name_22);
            Py_DECREF(tmp_called_name_24);
            Py_DECREF(tmp_called_name_26);
            Py_DECREF(tmp_called_name_28);
            Py_DECREF(tmp_called_name_30);
            Py_DECREF(tmp_called_name_32);
            Py_DECREF(tmp_called_name_34);
            Py_DECREF(tmp_called_name_36);
            Py_DECREF(tmp_called_name_38);
            Py_DECREF(tmp_called_name_40);
            Py_DECREF(tmp_called_name_42);
            Py_DECREF(tmp_called_name_44);
            Py_DECREF(tmp_called_name_46);
            Py_DECREF(tmp_called_name_48);
            Py_DECREF(tmp_called_name_50);
            Py_DECREF(tmp_called_name_52);
            Py_DECREF(tmp_called_name_54);
            Py_DECREF(tmp_called_name_56);
            Py_DECREF(tmp_called_name_58);
            Py_DECREF(tmp_called_name_60);
            Py_DECREF(tmp_called_name_62);
            Py_DECREF(tmp_called_name_64);
            Py_DECREF(tmp_called_name_66);
            Py_DECREF(tmp_called_name_68);
            Py_DECREF(tmp_called_name_70);
            Py_DECREF(tmp_called_name_72);
            Py_DECREF(tmp_called_name_74);
            Py_DECREF(tmp_called_name_76);
            Py_DECREF(tmp_called_name_78);
            Py_DECREF(tmp_called_name_80);
            Py_DECREF(tmp_called_name_82);

            exception_lineno = 76;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_1e465c63423cecf32f0c62928e893560->m_frame.f_lineno = 75;
        tmp_args_element_name_40 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_82, tmp_args_element_name_41);
        Py_DECREF(tmp_called_name_82);
        Py_DECREF(tmp_args_element_name_41);
        if (tmp_args_element_name_40 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_2);
            Py_DECREF(tmp_called_name_4);
            Py_DECREF(tmp_called_name_6);
            Py_DECREF(tmp_called_name_8);
            Py_DECREF(tmp_called_name_10);
            Py_DECREF(tmp_called_name_12);
            Py_DECREF(tmp_called_name_14);
            Py_DECREF(tmp_called_name_16);
            Py_DECREF(tmp_called_name_18);
            Py_DECREF(tmp_called_name_20);
            Py_DECREF(tmp_called_name_22);
            Py_DECREF(tmp_called_name_24);
            Py_DECREF(tmp_called_name_26);
            Py_DECREF(tmp_called_name_28);
            Py_DECREF(tmp_called_name_30);
            Py_DECREF(tmp_called_name_32);
            Py_DECREF(tmp_called_name_34);
            Py_DECREF(tmp_called_name_36);
            Py_DECREF(tmp_called_name_38);
            Py_DECREF(tmp_called_name_40);
            Py_DECREF(tmp_called_name_42);
            Py_DECREF(tmp_called_name_44);
            Py_DECREF(tmp_called_name_46);
            Py_DECREF(tmp_called_name_48);
            Py_DECREF(tmp_called_name_50);
            Py_DECREF(tmp_called_name_52);
            Py_DECREF(tmp_called_name_54);
            Py_DECREF(tmp_called_name_56);
            Py_DECREF(tmp_called_name_58);
            Py_DECREF(tmp_called_name_60);
            Py_DECREF(tmp_called_name_62);
            Py_DECREF(tmp_called_name_64);
            Py_DECREF(tmp_called_name_66);
            Py_DECREF(tmp_called_name_68);
            Py_DECREF(tmp_called_name_70);
            Py_DECREF(tmp_called_name_72);
            Py_DECREF(tmp_called_name_74);
            Py_DECREF(tmp_called_name_76);
            Py_DECREF(tmp_called_name_78);
            Py_DECREF(tmp_called_name_80);

            exception_lineno = 75;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_1e465c63423cecf32f0c62928e893560->m_frame.f_lineno = 74;
        tmp_args_element_name_39 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_80, tmp_args_element_name_40);
        Py_DECREF(tmp_called_name_80);
        Py_DECREF(tmp_args_element_name_40);
        if (tmp_args_element_name_39 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_2);
            Py_DECREF(tmp_called_name_4);
            Py_DECREF(tmp_called_name_6);
            Py_DECREF(tmp_called_name_8);
            Py_DECREF(tmp_called_name_10);
            Py_DECREF(tmp_called_name_12);
            Py_DECREF(tmp_called_name_14);
            Py_DECREF(tmp_called_name_16);
            Py_DECREF(tmp_called_name_18);
            Py_DECREF(tmp_called_name_20);
            Py_DECREF(tmp_called_name_22);
            Py_DECREF(tmp_called_name_24);
            Py_DECREF(tmp_called_name_26);
            Py_DECREF(tmp_called_name_28);
            Py_DECREF(tmp_called_name_30);
            Py_DECREF(tmp_called_name_32);
            Py_DECREF(tmp_called_name_34);
            Py_DECREF(tmp_called_name_36);
            Py_DECREF(tmp_called_name_38);
            Py_DECREF(tmp_called_name_40);
            Py_DECREF(tmp_called_name_42);
            Py_DECREF(tmp_called_name_44);
            Py_DECREF(tmp_called_name_46);
            Py_DECREF(tmp_called_name_48);
            Py_DECREF(tmp_called_name_50);
            Py_DECREF(tmp_called_name_52);
            Py_DECREF(tmp_called_name_54);
            Py_DECREF(tmp_called_name_56);
            Py_DECREF(tmp_called_name_58);
            Py_DECREF(tmp_called_name_60);
            Py_DECREF(tmp_called_name_62);
            Py_DECREF(tmp_called_name_64);
            Py_DECREF(tmp_called_name_66);
            Py_DECREF(tmp_called_name_68);
            Py_DECREF(tmp_called_name_70);
            Py_DECREF(tmp_called_name_72);
            Py_DECREF(tmp_called_name_74);
            Py_DECREF(tmp_called_name_76);
            Py_DECREF(tmp_called_name_78);

            exception_lineno = 74;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_1e465c63423cecf32f0c62928e893560->m_frame.f_lineno = 73;
        tmp_args_element_name_38 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_78, tmp_args_element_name_39);
        Py_DECREF(tmp_called_name_78);
        Py_DECREF(tmp_args_element_name_39);
        if (tmp_args_element_name_38 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_2);
            Py_DECREF(tmp_called_name_4);
            Py_DECREF(tmp_called_name_6);
            Py_DECREF(tmp_called_name_8);
            Py_DECREF(tmp_called_name_10);
            Py_DECREF(tmp_called_name_12);
            Py_DECREF(tmp_called_name_14);
            Py_DECREF(tmp_called_name_16);
            Py_DECREF(tmp_called_name_18);
            Py_DECREF(tmp_called_name_20);
            Py_DECREF(tmp_called_name_22);
            Py_DECREF(tmp_called_name_24);
            Py_DECREF(tmp_called_name_26);
            Py_DECREF(tmp_called_name_28);
            Py_DECREF(tmp_called_name_30);
            Py_DECREF(tmp_called_name_32);
            Py_DECREF(tmp_called_name_34);
            Py_DECREF(tmp_called_name_36);
            Py_DECREF(tmp_called_name_38);
            Py_DECREF(tmp_called_name_40);
            Py_DECREF(tmp_called_name_42);
            Py_DECREF(tmp_called_name_44);
            Py_DECREF(tmp_called_name_46);
            Py_DECREF(tmp_called_name_48);
            Py_DECREF(tmp_called_name_50);
            Py_DECREF(tmp_called_name_52);
            Py_DECREF(tmp_called_name_54);
            Py_DECREF(tmp_called_name_56);
            Py_DECREF(tmp_called_name_58);
            Py_DECREF(tmp_called_name_60);
            Py_DECREF(tmp_called_name_62);
            Py_DECREF(tmp_called_name_64);
            Py_DECREF(tmp_called_name_66);
            Py_DECREF(tmp_called_name_68);
            Py_DECREF(tmp_called_name_70);
            Py_DECREF(tmp_called_name_72);
            Py_DECREF(tmp_called_name_74);
            Py_DECREF(tmp_called_name_76);

            exception_lineno = 73;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_1e465c63423cecf32f0c62928e893560->m_frame.f_lineno = 72;
        tmp_args_element_name_37 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_76, tmp_args_element_name_38);
        Py_DECREF(tmp_called_name_76);
        Py_DECREF(tmp_args_element_name_38);
        if (tmp_args_element_name_37 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_2);
            Py_DECREF(tmp_called_name_4);
            Py_DECREF(tmp_called_name_6);
            Py_DECREF(tmp_called_name_8);
            Py_DECREF(tmp_called_name_10);
            Py_DECREF(tmp_called_name_12);
            Py_DECREF(tmp_called_name_14);
            Py_DECREF(tmp_called_name_16);
            Py_DECREF(tmp_called_name_18);
            Py_DECREF(tmp_called_name_20);
            Py_DECREF(tmp_called_name_22);
            Py_DECREF(tmp_called_name_24);
            Py_DECREF(tmp_called_name_26);
            Py_DECREF(tmp_called_name_28);
            Py_DECREF(tmp_called_name_30);
            Py_DECREF(tmp_called_name_32);
            Py_DECREF(tmp_called_name_34);
            Py_DECREF(tmp_called_name_36);
            Py_DECREF(tmp_called_name_38);
            Py_DECREF(tmp_called_name_40);
            Py_DECREF(tmp_called_name_42);
            Py_DECREF(tmp_called_name_44);
            Py_DECREF(tmp_called_name_46);
            Py_DECREF(tmp_called_name_48);
            Py_DECREF(tmp_called_name_50);
            Py_DECREF(tmp_called_name_52);
            Py_DECREF(tmp_called_name_54);
            Py_DECREF(tmp_called_name_56);
            Py_DECREF(tmp_called_name_58);
            Py_DECREF(tmp_called_name_60);
            Py_DECREF(tmp_called_name_62);
            Py_DECREF(tmp_called_name_64);
            Py_DECREF(tmp_called_name_66);
            Py_DECREF(tmp_called_name_68);
            Py_DECREF(tmp_called_name_70);
            Py_DECREF(tmp_called_name_72);
            Py_DECREF(tmp_called_name_74);

            exception_lineno = 72;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_1e465c63423cecf32f0c62928e893560->m_frame.f_lineno = 71;
        tmp_args_element_name_36 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_74, tmp_args_element_name_37);
        Py_DECREF(tmp_called_name_74);
        Py_DECREF(tmp_args_element_name_37);
        if (tmp_args_element_name_36 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_2);
            Py_DECREF(tmp_called_name_4);
            Py_DECREF(tmp_called_name_6);
            Py_DECREF(tmp_called_name_8);
            Py_DECREF(tmp_called_name_10);
            Py_DECREF(tmp_called_name_12);
            Py_DECREF(tmp_called_name_14);
            Py_DECREF(tmp_called_name_16);
            Py_DECREF(tmp_called_name_18);
            Py_DECREF(tmp_called_name_20);
            Py_DECREF(tmp_called_name_22);
            Py_DECREF(tmp_called_name_24);
            Py_DECREF(tmp_called_name_26);
            Py_DECREF(tmp_called_name_28);
            Py_DECREF(tmp_called_name_30);
            Py_DECREF(tmp_called_name_32);
            Py_DECREF(tmp_called_name_34);
            Py_DECREF(tmp_called_name_36);
            Py_DECREF(tmp_called_name_38);
            Py_DECREF(tmp_called_name_40);
            Py_DECREF(tmp_called_name_42);
            Py_DECREF(tmp_called_name_44);
            Py_DECREF(tmp_called_name_46);
            Py_DECREF(tmp_called_name_48);
            Py_DECREF(tmp_called_name_50);
            Py_DECREF(tmp_called_name_52);
            Py_DECREF(tmp_called_name_54);
            Py_DECREF(tmp_called_name_56);
            Py_DECREF(tmp_called_name_58);
            Py_DECREF(tmp_called_name_60);
            Py_DECREF(tmp_called_name_62);
            Py_DECREF(tmp_called_name_64);
            Py_DECREF(tmp_called_name_66);
            Py_DECREF(tmp_called_name_68);
            Py_DECREF(tmp_called_name_70);
            Py_DECREF(tmp_called_name_72);

            exception_lineno = 71;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_1e465c63423cecf32f0c62928e893560->m_frame.f_lineno = 70;
        tmp_args_element_name_35 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_72, tmp_args_element_name_36);
        Py_DECREF(tmp_called_name_72);
        Py_DECREF(tmp_args_element_name_36);
        if (tmp_args_element_name_35 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_2);
            Py_DECREF(tmp_called_name_4);
            Py_DECREF(tmp_called_name_6);
            Py_DECREF(tmp_called_name_8);
            Py_DECREF(tmp_called_name_10);
            Py_DECREF(tmp_called_name_12);
            Py_DECREF(tmp_called_name_14);
            Py_DECREF(tmp_called_name_16);
            Py_DECREF(tmp_called_name_18);
            Py_DECREF(tmp_called_name_20);
            Py_DECREF(tmp_called_name_22);
            Py_DECREF(tmp_called_name_24);
            Py_DECREF(tmp_called_name_26);
            Py_DECREF(tmp_called_name_28);
            Py_DECREF(tmp_called_name_30);
            Py_DECREF(tmp_called_name_32);
            Py_DECREF(tmp_called_name_34);
            Py_DECREF(tmp_called_name_36);
            Py_DECREF(tmp_called_name_38);
            Py_DECREF(tmp_called_name_40);
            Py_DECREF(tmp_called_name_42);
            Py_DECREF(tmp_called_name_44);
            Py_DECREF(tmp_called_name_46);
            Py_DECREF(tmp_called_name_48);
            Py_DECREF(tmp_called_name_50);
            Py_DECREF(tmp_called_name_52);
            Py_DECREF(tmp_called_name_54);
            Py_DECREF(tmp_called_name_56);
            Py_DECREF(tmp_called_name_58);
            Py_DECREF(tmp_called_name_60);
            Py_DECREF(tmp_called_name_62);
            Py_DECREF(tmp_called_name_64);
            Py_DECREF(tmp_called_name_66);
            Py_DECREF(tmp_called_name_68);
            Py_DECREF(tmp_called_name_70);

            exception_lineno = 70;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_1e465c63423cecf32f0c62928e893560->m_frame.f_lineno = 69;
        tmp_args_element_name_34 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_70, tmp_args_element_name_35);
        Py_DECREF(tmp_called_name_70);
        Py_DECREF(tmp_args_element_name_35);
        if (tmp_args_element_name_34 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_2);
            Py_DECREF(tmp_called_name_4);
            Py_DECREF(tmp_called_name_6);
            Py_DECREF(tmp_called_name_8);
            Py_DECREF(tmp_called_name_10);
            Py_DECREF(tmp_called_name_12);
            Py_DECREF(tmp_called_name_14);
            Py_DECREF(tmp_called_name_16);
            Py_DECREF(tmp_called_name_18);
            Py_DECREF(tmp_called_name_20);
            Py_DECREF(tmp_called_name_22);
            Py_DECREF(tmp_called_name_24);
            Py_DECREF(tmp_called_name_26);
            Py_DECREF(tmp_called_name_28);
            Py_DECREF(tmp_called_name_30);
            Py_DECREF(tmp_called_name_32);
            Py_DECREF(tmp_called_name_34);
            Py_DECREF(tmp_called_name_36);
            Py_DECREF(tmp_called_name_38);
            Py_DECREF(tmp_called_name_40);
            Py_DECREF(tmp_called_name_42);
            Py_DECREF(tmp_called_name_44);
            Py_DECREF(tmp_called_name_46);
            Py_DECREF(tmp_called_name_48);
            Py_DECREF(tmp_called_name_50);
            Py_DECREF(tmp_called_name_52);
            Py_DECREF(tmp_called_name_54);
            Py_DECREF(tmp_called_name_56);
            Py_DECREF(tmp_called_name_58);
            Py_DECREF(tmp_called_name_60);
            Py_DECREF(tmp_called_name_62);
            Py_DECREF(tmp_called_name_64);
            Py_DECREF(tmp_called_name_66);
            Py_DECREF(tmp_called_name_68);

            exception_lineno = 69;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_1e465c63423cecf32f0c62928e893560->m_frame.f_lineno = 68;
        tmp_args_element_name_33 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_68, tmp_args_element_name_34);
        Py_DECREF(tmp_called_name_68);
        Py_DECREF(tmp_args_element_name_34);
        if (tmp_args_element_name_33 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_2);
            Py_DECREF(tmp_called_name_4);
            Py_DECREF(tmp_called_name_6);
            Py_DECREF(tmp_called_name_8);
            Py_DECREF(tmp_called_name_10);
            Py_DECREF(tmp_called_name_12);
            Py_DECREF(tmp_called_name_14);
            Py_DECREF(tmp_called_name_16);
            Py_DECREF(tmp_called_name_18);
            Py_DECREF(tmp_called_name_20);
            Py_DECREF(tmp_called_name_22);
            Py_DECREF(tmp_called_name_24);
            Py_DECREF(tmp_called_name_26);
            Py_DECREF(tmp_called_name_28);
            Py_DECREF(tmp_called_name_30);
            Py_DECREF(tmp_called_name_32);
            Py_DECREF(tmp_called_name_34);
            Py_DECREF(tmp_called_name_36);
            Py_DECREF(tmp_called_name_38);
            Py_DECREF(tmp_called_name_40);
            Py_DECREF(tmp_called_name_42);
            Py_DECREF(tmp_called_name_44);
            Py_DECREF(tmp_called_name_46);
            Py_DECREF(tmp_called_name_48);
            Py_DECREF(tmp_called_name_50);
            Py_DECREF(tmp_called_name_52);
            Py_DECREF(tmp_called_name_54);
            Py_DECREF(tmp_called_name_56);
            Py_DECREF(tmp_called_name_58);
            Py_DECREF(tmp_called_name_60);
            Py_DECREF(tmp_called_name_62);
            Py_DECREF(tmp_called_name_64);
            Py_DECREF(tmp_called_name_66);

            exception_lineno = 68;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_1e465c63423cecf32f0c62928e893560->m_frame.f_lineno = 67;
        tmp_args_element_name_32 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_66, tmp_args_element_name_33);
        Py_DECREF(tmp_called_name_66);
        Py_DECREF(tmp_args_element_name_33);
        if (tmp_args_element_name_32 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_2);
            Py_DECREF(tmp_called_name_4);
            Py_DECREF(tmp_called_name_6);
            Py_DECREF(tmp_called_name_8);
            Py_DECREF(tmp_called_name_10);
            Py_DECREF(tmp_called_name_12);
            Py_DECREF(tmp_called_name_14);
            Py_DECREF(tmp_called_name_16);
            Py_DECREF(tmp_called_name_18);
            Py_DECREF(tmp_called_name_20);
            Py_DECREF(tmp_called_name_22);
            Py_DECREF(tmp_called_name_24);
            Py_DECREF(tmp_called_name_26);
            Py_DECREF(tmp_called_name_28);
            Py_DECREF(tmp_called_name_30);
            Py_DECREF(tmp_called_name_32);
            Py_DECREF(tmp_called_name_34);
            Py_DECREF(tmp_called_name_36);
            Py_DECREF(tmp_called_name_38);
            Py_DECREF(tmp_called_name_40);
            Py_DECREF(tmp_called_name_42);
            Py_DECREF(tmp_called_name_44);
            Py_DECREF(tmp_called_name_46);
            Py_DECREF(tmp_called_name_48);
            Py_DECREF(tmp_called_name_50);
            Py_DECREF(tmp_called_name_52);
            Py_DECREF(tmp_called_name_54);
            Py_DECREF(tmp_called_name_56);
            Py_DECREF(tmp_called_name_58);
            Py_DECREF(tmp_called_name_60);
            Py_DECREF(tmp_called_name_62);
            Py_DECREF(tmp_called_name_64);

            exception_lineno = 67;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_1e465c63423cecf32f0c62928e893560->m_frame.f_lineno = 66;
        tmp_args_element_name_31 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_64, tmp_args_element_name_32);
        Py_DECREF(tmp_called_name_64);
        Py_DECREF(tmp_args_element_name_32);
        if (tmp_args_element_name_31 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_2);
            Py_DECREF(tmp_called_name_4);
            Py_DECREF(tmp_called_name_6);
            Py_DECREF(tmp_called_name_8);
            Py_DECREF(tmp_called_name_10);
            Py_DECREF(tmp_called_name_12);
            Py_DECREF(tmp_called_name_14);
            Py_DECREF(tmp_called_name_16);
            Py_DECREF(tmp_called_name_18);
            Py_DECREF(tmp_called_name_20);
            Py_DECREF(tmp_called_name_22);
            Py_DECREF(tmp_called_name_24);
            Py_DECREF(tmp_called_name_26);
            Py_DECREF(tmp_called_name_28);
            Py_DECREF(tmp_called_name_30);
            Py_DECREF(tmp_called_name_32);
            Py_DECREF(tmp_called_name_34);
            Py_DECREF(tmp_called_name_36);
            Py_DECREF(tmp_called_name_38);
            Py_DECREF(tmp_called_name_40);
            Py_DECREF(tmp_called_name_42);
            Py_DECREF(tmp_called_name_44);
            Py_DECREF(tmp_called_name_46);
            Py_DECREF(tmp_called_name_48);
            Py_DECREF(tmp_called_name_50);
            Py_DECREF(tmp_called_name_52);
            Py_DECREF(tmp_called_name_54);
            Py_DECREF(tmp_called_name_56);
            Py_DECREF(tmp_called_name_58);
            Py_DECREF(tmp_called_name_60);
            Py_DECREF(tmp_called_name_62);

            exception_lineno = 66;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_1e465c63423cecf32f0c62928e893560->m_frame.f_lineno = 65;
        tmp_args_element_name_30 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_62, tmp_args_element_name_31);
        Py_DECREF(tmp_called_name_62);
        Py_DECREF(tmp_args_element_name_31);
        if (tmp_args_element_name_30 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_2);
            Py_DECREF(tmp_called_name_4);
            Py_DECREF(tmp_called_name_6);
            Py_DECREF(tmp_called_name_8);
            Py_DECREF(tmp_called_name_10);
            Py_DECREF(tmp_called_name_12);
            Py_DECREF(tmp_called_name_14);
            Py_DECREF(tmp_called_name_16);
            Py_DECREF(tmp_called_name_18);
            Py_DECREF(tmp_called_name_20);
            Py_DECREF(tmp_called_name_22);
            Py_DECREF(tmp_called_name_24);
            Py_DECREF(tmp_called_name_26);
            Py_DECREF(tmp_called_name_28);
            Py_DECREF(tmp_called_name_30);
            Py_DECREF(tmp_called_name_32);
            Py_DECREF(tmp_called_name_34);
            Py_DECREF(tmp_called_name_36);
            Py_DECREF(tmp_called_name_38);
            Py_DECREF(tmp_called_name_40);
            Py_DECREF(tmp_called_name_42);
            Py_DECREF(tmp_called_name_44);
            Py_DECREF(tmp_called_name_46);
            Py_DECREF(tmp_called_name_48);
            Py_DECREF(tmp_called_name_50);
            Py_DECREF(tmp_called_name_52);
            Py_DECREF(tmp_called_name_54);
            Py_DECREF(tmp_called_name_56);
            Py_DECREF(tmp_called_name_58);
            Py_DECREF(tmp_called_name_60);

            exception_lineno = 65;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_1e465c63423cecf32f0c62928e893560->m_frame.f_lineno = 64;
        tmp_args_element_name_29 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_60, tmp_args_element_name_30);
        Py_DECREF(tmp_called_name_60);
        Py_DECREF(tmp_args_element_name_30);
        if (tmp_args_element_name_29 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_2);
            Py_DECREF(tmp_called_name_4);
            Py_DECREF(tmp_called_name_6);
            Py_DECREF(tmp_called_name_8);
            Py_DECREF(tmp_called_name_10);
            Py_DECREF(tmp_called_name_12);
            Py_DECREF(tmp_called_name_14);
            Py_DECREF(tmp_called_name_16);
            Py_DECREF(tmp_called_name_18);
            Py_DECREF(tmp_called_name_20);
            Py_DECREF(tmp_called_name_22);
            Py_DECREF(tmp_called_name_24);
            Py_DECREF(tmp_called_name_26);
            Py_DECREF(tmp_called_name_28);
            Py_DECREF(tmp_called_name_30);
            Py_DECREF(tmp_called_name_32);
            Py_DECREF(tmp_called_name_34);
            Py_DECREF(tmp_called_name_36);
            Py_DECREF(tmp_called_name_38);
            Py_DECREF(tmp_called_name_40);
            Py_DECREF(tmp_called_name_42);
            Py_DECREF(tmp_called_name_44);
            Py_DECREF(tmp_called_name_46);
            Py_DECREF(tmp_called_name_48);
            Py_DECREF(tmp_called_name_50);
            Py_DECREF(tmp_called_name_52);
            Py_DECREF(tmp_called_name_54);
            Py_DECREF(tmp_called_name_56);
            Py_DECREF(tmp_called_name_58);

            exception_lineno = 64;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_1e465c63423cecf32f0c62928e893560->m_frame.f_lineno = 63;
        tmp_args_element_name_28 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_58, tmp_args_element_name_29);
        Py_DECREF(tmp_called_name_58);
        Py_DECREF(tmp_args_element_name_29);
        if (tmp_args_element_name_28 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_2);
            Py_DECREF(tmp_called_name_4);
            Py_DECREF(tmp_called_name_6);
            Py_DECREF(tmp_called_name_8);
            Py_DECREF(tmp_called_name_10);
            Py_DECREF(tmp_called_name_12);
            Py_DECREF(tmp_called_name_14);
            Py_DECREF(tmp_called_name_16);
            Py_DECREF(tmp_called_name_18);
            Py_DECREF(tmp_called_name_20);
            Py_DECREF(tmp_called_name_22);
            Py_DECREF(tmp_called_name_24);
            Py_DECREF(tmp_called_name_26);
            Py_DECREF(tmp_called_name_28);
            Py_DECREF(tmp_called_name_30);
            Py_DECREF(tmp_called_name_32);
            Py_DECREF(tmp_called_name_34);
            Py_DECREF(tmp_called_name_36);
            Py_DECREF(tmp_called_name_38);
            Py_DECREF(tmp_called_name_40);
            Py_DECREF(tmp_called_name_42);
            Py_DECREF(tmp_called_name_44);
            Py_DECREF(tmp_called_name_46);
            Py_DECREF(tmp_called_name_48);
            Py_DECREF(tmp_called_name_50);
            Py_DECREF(tmp_called_name_52);
            Py_DECREF(tmp_called_name_54);
            Py_DECREF(tmp_called_name_56);

            exception_lineno = 63;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_1e465c63423cecf32f0c62928e893560->m_frame.f_lineno = 62;
        tmp_args_element_name_27 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_56, tmp_args_element_name_28);
        Py_DECREF(tmp_called_name_56);
        Py_DECREF(tmp_args_element_name_28);
        if (tmp_args_element_name_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_2);
            Py_DECREF(tmp_called_name_4);
            Py_DECREF(tmp_called_name_6);
            Py_DECREF(tmp_called_name_8);
            Py_DECREF(tmp_called_name_10);
            Py_DECREF(tmp_called_name_12);
            Py_DECREF(tmp_called_name_14);
            Py_DECREF(tmp_called_name_16);
            Py_DECREF(tmp_called_name_18);
            Py_DECREF(tmp_called_name_20);
            Py_DECREF(tmp_called_name_22);
            Py_DECREF(tmp_called_name_24);
            Py_DECREF(tmp_called_name_26);
            Py_DECREF(tmp_called_name_28);
            Py_DECREF(tmp_called_name_30);
            Py_DECREF(tmp_called_name_32);
            Py_DECREF(tmp_called_name_34);
            Py_DECREF(tmp_called_name_36);
            Py_DECREF(tmp_called_name_38);
            Py_DECREF(tmp_called_name_40);
            Py_DECREF(tmp_called_name_42);
            Py_DECREF(tmp_called_name_44);
            Py_DECREF(tmp_called_name_46);
            Py_DECREF(tmp_called_name_48);
            Py_DECREF(tmp_called_name_50);
            Py_DECREF(tmp_called_name_52);
            Py_DECREF(tmp_called_name_54);

            exception_lineno = 62;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_1e465c63423cecf32f0c62928e893560->m_frame.f_lineno = 61;
        tmp_args_element_name_26 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_54, tmp_args_element_name_27);
        Py_DECREF(tmp_called_name_54);
        Py_DECREF(tmp_args_element_name_27);
        if (tmp_args_element_name_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_2);
            Py_DECREF(tmp_called_name_4);
            Py_DECREF(tmp_called_name_6);
            Py_DECREF(tmp_called_name_8);
            Py_DECREF(tmp_called_name_10);
            Py_DECREF(tmp_called_name_12);
            Py_DECREF(tmp_called_name_14);
            Py_DECREF(tmp_called_name_16);
            Py_DECREF(tmp_called_name_18);
            Py_DECREF(tmp_called_name_20);
            Py_DECREF(tmp_called_name_22);
            Py_DECREF(tmp_called_name_24);
            Py_DECREF(tmp_called_name_26);
            Py_DECREF(tmp_called_name_28);
            Py_DECREF(tmp_called_name_30);
            Py_DECREF(tmp_called_name_32);
            Py_DECREF(tmp_called_name_34);
            Py_DECREF(tmp_called_name_36);
            Py_DECREF(tmp_called_name_38);
            Py_DECREF(tmp_called_name_40);
            Py_DECREF(tmp_called_name_42);
            Py_DECREF(tmp_called_name_44);
            Py_DECREF(tmp_called_name_46);
            Py_DECREF(tmp_called_name_48);
            Py_DECREF(tmp_called_name_50);
            Py_DECREF(tmp_called_name_52);

            exception_lineno = 61;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_1e465c63423cecf32f0c62928e893560->m_frame.f_lineno = 60;
        tmp_args_element_name_25 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_52, tmp_args_element_name_26);
        Py_DECREF(tmp_called_name_52);
        Py_DECREF(tmp_args_element_name_26);
        if (tmp_args_element_name_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_2);
            Py_DECREF(tmp_called_name_4);
            Py_DECREF(tmp_called_name_6);
            Py_DECREF(tmp_called_name_8);
            Py_DECREF(tmp_called_name_10);
            Py_DECREF(tmp_called_name_12);
            Py_DECREF(tmp_called_name_14);
            Py_DECREF(tmp_called_name_16);
            Py_DECREF(tmp_called_name_18);
            Py_DECREF(tmp_called_name_20);
            Py_DECREF(tmp_called_name_22);
            Py_DECREF(tmp_called_name_24);
            Py_DECREF(tmp_called_name_26);
            Py_DECREF(tmp_called_name_28);
            Py_DECREF(tmp_called_name_30);
            Py_DECREF(tmp_called_name_32);
            Py_DECREF(tmp_called_name_34);
            Py_DECREF(tmp_called_name_36);
            Py_DECREF(tmp_called_name_38);
            Py_DECREF(tmp_called_name_40);
            Py_DECREF(tmp_called_name_42);
            Py_DECREF(tmp_called_name_44);
            Py_DECREF(tmp_called_name_46);
            Py_DECREF(tmp_called_name_48);
            Py_DECREF(tmp_called_name_50);

            exception_lineno = 60;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_1e465c63423cecf32f0c62928e893560->m_frame.f_lineno = 59;
        tmp_args_element_name_24 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_50, tmp_args_element_name_25);
        Py_DECREF(tmp_called_name_50);
        Py_DECREF(tmp_args_element_name_25);
        if (tmp_args_element_name_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_2);
            Py_DECREF(tmp_called_name_4);
            Py_DECREF(tmp_called_name_6);
            Py_DECREF(tmp_called_name_8);
            Py_DECREF(tmp_called_name_10);
            Py_DECREF(tmp_called_name_12);
            Py_DECREF(tmp_called_name_14);
            Py_DECREF(tmp_called_name_16);
            Py_DECREF(tmp_called_name_18);
            Py_DECREF(tmp_called_name_20);
            Py_DECREF(tmp_called_name_22);
            Py_DECREF(tmp_called_name_24);
            Py_DECREF(tmp_called_name_26);
            Py_DECREF(tmp_called_name_28);
            Py_DECREF(tmp_called_name_30);
            Py_DECREF(tmp_called_name_32);
            Py_DECREF(tmp_called_name_34);
            Py_DECREF(tmp_called_name_36);
            Py_DECREF(tmp_called_name_38);
            Py_DECREF(tmp_called_name_40);
            Py_DECREF(tmp_called_name_42);
            Py_DECREF(tmp_called_name_44);
            Py_DECREF(tmp_called_name_46);
            Py_DECREF(tmp_called_name_48);

            exception_lineno = 59;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_1e465c63423cecf32f0c62928e893560->m_frame.f_lineno = 58;
        tmp_args_element_name_23 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_48, tmp_args_element_name_24);
        Py_DECREF(tmp_called_name_48);
        Py_DECREF(tmp_args_element_name_24);
        if (tmp_args_element_name_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_2);
            Py_DECREF(tmp_called_name_4);
            Py_DECREF(tmp_called_name_6);
            Py_DECREF(tmp_called_name_8);
            Py_DECREF(tmp_called_name_10);
            Py_DECREF(tmp_called_name_12);
            Py_DECREF(tmp_called_name_14);
            Py_DECREF(tmp_called_name_16);
            Py_DECREF(tmp_called_name_18);
            Py_DECREF(tmp_called_name_20);
            Py_DECREF(tmp_called_name_22);
            Py_DECREF(tmp_called_name_24);
            Py_DECREF(tmp_called_name_26);
            Py_DECREF(tmp_called_name_28);
            Py_DECREF(tmp_called_name_30);
            Py_DECREF(tmp_called_name_32);
            Py_DECREF(tmp_called_name_34);
            Py_DECREF(tmp_called_name_36);
            Py_DECREF(tmp_called_name_38);
            Py_DECREF(tmp_called_name_40);
            Py_DECREF(tmp_called_name_42);
            Py_DECREF(tmp_called_name_44);
            Py_DECREF(tmp_called_name_46);

            exception_lineno = 58;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_1e465c63423cecf32f0c62928e893560->m_frame.f_lineno = 57;
        tmp_args_element_name_22 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_46, tmp_args_element_name_23);
        Py_DECREF(tmp_called_name_46);
        Py_DECREF(tmp_args_element_name_23);
        if (tmp_args_element_name_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_2);
            Py_DECREF(tmp_called_name_4);
            Py_DECREF(tmp_called_name_6);
            Py_DECREF(tmp_called_name_8);
            Py_DECREF(tmp_called_name_10);
            Py_DECREF(tmp_called_name_12);
            Py_DECREF(tmp_called_name_14);
            Py_DECREF(tmp_called_name_16);
            Py_DECREF(tmp_called_name_18);
            Py_DECREF(tmp_called_name_20);
            Py_DECREF(tmp_called_name_22);
            Py_DECREF(tmp_called_name_24);
            Py_DECREF(tmp_called_name_26);
            Py_DECREF(tmp_called_name_28);
            Py_DECREF(tmp_called_name_30);
            Py_DECREF(tmp_called_name_32);
            Py_DECREF(tmp_called_name_34);
            Py_DECREF(tmp_called_name_36);
            Py_DECREF(tmp_called_name_38);
            Py_DECREF(tmp_called_name_40);
            Py_DECREF(tmp_called_name_42);
            Py_DECREF(tmp_called_name_44);

            exception_lineno = 57;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_1e465c63423cecf32f0c62928e893560->m_frame.f_lineno = 56;
        tmp_args_element_name_21 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_44, tmp_args_element_name_22);
        Py_DECREF(tmp_called_name_44);
        Py_DECREF(tmp_args_element_name_22);
        if (tmp_args_element_name_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_2);
            Py_DECREF(tmp_called_name_4);
            Py_DECREF(tmp_called_name_6);
            Py_DECREF(tmp_called_name_8);
            Py_DECREF(tmp_called_name_10);
            Py_DECREF(tmp_called_name_12);
            Py_DECREF(tmp_called_name_14);
            Py_DECREF(tmp_called_name_16);
            Py_DECREF(tmp_called_name_18);
            Py_DECREF(tmp_called_name_20);
            Py_DECREF(tmp_called_name_22);
            Py_DECREF(tmp_called_name_24);
            Py_DECREF(tmp_called_name_26);
            Py_DECREF(tmp_called_name_28);
            Py_DECREF(tmp_called_name_30);
            Py_DECREF(tmp_called_name_32);
            Py_DECREF(tmp_called_name_34);
            Py_DECREF(tmp_called_name_36);
            Py_DECREF(tmp_called_name_38);
            Py_DECREF(tmp_called_name_40);
            Py_DECREF(tmp_called_name_42);

            exception_lineno = 56;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_1e465c63423cecf32f0c62928e893560->m_frame.f_lineno = 55;
        tmp_args_element_name_20 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_42, tmp_args_element_name_21);
        Py_DECREF(tmp_called_name_42);
        Py_DECREF(tmp_args_element_name_21);
        if (tmp_args_element_name_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_2);
            Py_DECREF(tmp_called_name_4);
            Py_DECREF(tmp_called_name_6);
            Py_DECREF(tmp_called_name_8);
            Py_DECREF(tmp_called_name_10);
            Py_DECREF(tmp_called_name_12);
            Py_DECREF(tmp_called_name_14);
            Py_DECREF(tmp_called_name_16);
            Py_DECREF(tmp_called_name_18);
            Py_DECREF(tmp_called_name_20);
            Py_DECREF(tmp_called_name_22);
            Py_DECREF(tmp_called_name_24);
            Py_DECREF(tmp_called_name_26);
            Py_DECREF(tmp_called_name_28);
            Py_DECREF(tmp_called_name_30);
            Py_DECREF(tmp_called_name_32);
            Py_DECREF(tmp_called_name_34);
            Py_DECREF(tmp_called_name_36);
            Py_DECREF(tmp_called_name_38);
            Py_DECREF(tmp_called_name_40);

            exception_lineno = 55;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_1e465c63423cecf32f0c62928e893560->m_frame.f_lineno = 54;
        tmp_args_element_name_19 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_40, tmp_args_element_name_20);
        Py_DECREF(tmp_called_name_40);
        Py_DECREF(tmp_args_element_name_20);
        if (tmp_args_element_name_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_2);
            Py_DECREF(tmp_called_name_4);
            Py_DECREF(tmp_called_name_6);
            Py_DECREF(tmp_called_name_8);
            Py_DECREF(tmp_called_name_10);
            Py_DECREF(tmp_called_name_12);
            Py_DECREF(tmp_called_name_14);
            Py_DECREF(tmp_called_name_16);
            Py_DECREF(tmp_called_name_18);
            Py_DECREF(tmp_called_name_20);
            Py_DECREF(tmp_called_name_22);
            Py_DECREF(tmp_called_name_24);
            Py_DECREF(tmp_called_name_26);
            Py_DECREF(tmp_called_name_28);
            Py_DECREF(tmp_called_name_30);
            Py_DECREF(tmp_called_name_32);
            Py_DECREF(tmp_called_name_34);
            Py_DECREF(tmp_called_name_36);
            Py_DECREF(tmp_called_name_38);

            exception_lineno = 54;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_1e465c63423cecf32f0c62928e893560->m_frame.f_lineno = 53;
        tmp_args_element_name_18 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_38, tmp_args_element_name_19);
        Py_DECREF(tmp_called_name_38);
        Py_DECREF(tmp_args_element_name_19);
        if (tmp_args_element_name_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_2);
            Py_DECREF(tmp_called_name_4);
            Py_DECREF(tmp_called_name_6);
            Py_DECREF(tmp_called_name_8);
            Py_DECREF(tmp_called_name_10);
            Py_DECREF(tmp_called_name_12);
            Py_DECREF(tmp_called_name_14);
            Py_DECREF(tmp_called_name_16);
            Py_DECREF(tmp_called_name_18);
            Py_DECREF(tmp_called_name_20);
            Py_DECREF(tmp_called_name_22);
            Py_DECREF(tmp_called_name_24);
            Py_DECREF(tmp_called_name_26);
            Py_DECREF(tmp_called_name_28);
            Py_DECREF(tmp_called_name_30);
            Py_DECREF(tmp_called_name_32);
            Py_DECREF(tmp_called_name_34);
            Py_DECREF(tmp_called_name_36);

            exception_lineno = 53;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_1e465c63423cecf32f0c62928e893560->m_frame.f_lineno = 52;
        tmp_args_element_name_17 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_36, tmp_args_element_name_18);
        Py_DECREF(tmp_called_name_36);
        Py_DECREF(tmp_args_element_name_18);
        if (tmp_args_element_name_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_2);
            Py_DECREF(tmp_called_name_4);
            Py_DECREF(tmp_called_name_6);
            Py_DECREF(tmp_called_name_8);
            Py_DECREF(tmp_called_name_10);
            Py_DECREF(tmp_called_name_12);
            Py_DECREF(tmp_called_name_14);
            Py_DECREF(tmp_called_name_16);
            Py_DECREF(tmp_called_name_18);
            Py_DECREF(tmp_called_name_20);
            Py_DECREF(tmp_called_name_22);
            Py_DECREF(tmp_called_name_24);
            Py_DECREF(tmp_called_name_26);
            Py_DECREF(tmp_called_name_28);
            Py_DECREF(tmp_called_name_30);
            Py_DECREF(tmp_called_name_32);
            Py_DECREF(tmp_called_name_34);

            exception_lineno = 52;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_1e465c63423cecf32f0c62928e893560->m_frame.f_lineno = 51;
        tmp_args_element_name_16 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_34, tmp_args_element_name_17);
        Py_DECREF(tmp_called_name_34);
        Py_DECREF(tmp_args_element_name_17);
        if (tmp_args_element_name_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_2);
            Py_DECREF(tmp_called_name_4);
            Py_DECREF(tmp_called_name_6);
            Py_DECREF(tmp_called_name_8);
            Py_DECREF(tmp_called_name_10);
            Py_DECREF(tmp_called_name_12);
            Py_DECREF(tmp_called_name_14);
            Py_DECREF(tmp_called_name_16);
            Py_DECREF(tmp_called_name_18);
            Py_DECREF(tmp_called_name_20);
            Py_DECREF(tmp_called_name_22);
            Py_DECREF(tmp_called_name_24);
            Py_DECREF(tmp_called_name_26);
            Py_DECREF(tmp_called_name_28);
            Py_DECREF(tmp_called_name_30);
            Py_DECREF(tmp_called_name_32);

            exception_lineno = 51;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_1e465c63423cecf32f0c62928e893560->m_frame.f_lineno = 50;
        tmp_args_element_name_15 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_32, tmp_args_element_name_16);
        Py_DECREF(tmp_called_name_32);
        Py_DECREF(tmp_args_element_name_16);
        if (tmp_args_element_name_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_2);
            Py_DECREF(tmp_called_name_4);
            Py_DECREF(tmp_called_name_6);
            Py_DECREF(tmp_called_name_8);
            Py_DECREF(tmp_called_name_10);
            Py_DECREF(tmp_called_name_12);
            Py_DECREF(tmp_called_name_14);
            Py_DECREF(tmp_called_name_16);
            Py_DECREF(tmp_called_name_18);
            Py_DECREF(tmp_called_name_20);
            Py_DECREF(tmp_called_name_22);
            Py_DECREF(tmp_called_name_24);
            Py_DECREF(tmp_called_name_26);
            Py_DECREF(tmp_called_name_28);
            Py_DECREF(tmp_called_name_30);

            exception_lineno = 50;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_1e465c63423cecf32f0c62928e893560->m_frame.f_lineno = 49;
        tmp_args_element_name_14 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_30, tmp_args_element_name_15);
        Py_DECREF(tmp_called_name_30);
        Py_DECREF(tmp_args_element_name_15);
        if (tmp_args_element_name_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_2);
            Py_DECREF(tmp_called_name_4);
            Py_DECREF(tmp_called_name_6);
            Py_DECREF(tmp_called_name_8);
            Py_DECREF(tmp_called_name_10);
            Py_DECREF(tmp_called_name_12);
            Py_DECREF(tmp_called_name_14);
            Py_DECREF(tmp_called_name_16);
            Py_DECREF(tmp_called_name_18);
            Py_DECREF(tmp_called_name_20);
            Py_DECREF(tmp_called_name_22);
            Py_DECREF(tmp_called_name_24);
            Py_DECREF(tmp_called_name_26);
            Py_DECREF(tmp_called_name_28);

            exception_lineno = 49;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_1e465c63423cecf32f0c62928e893560->m_frame.f_lineno = 48;
        tmp_args_element_name_13 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_28, tmp_args_element_name_14);
        Py_DECREF(tmp_called_name_28);
        Py_DECREF(tmp_args_element_name_14);
        if (tmp_args_element_name_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_2);
            Py_DECREF(tmp_called_name_4);
            Py_DECREF(tmp_called_name_6);
            Py_DECREF(tmp_called_name_8);
            Py_DECREF(tmp_called_name_10);
            Py_DECREF(tmp_called_name_12);
            Py_DECREF(tmp_called_name_14);
            Py_DECREF(tmp_called_name_16);
            Py_DECREF(tmp_called_name_18);
            Py_DECREF(tmp_called_name_20);
            Py_DECREF(tmp_called_name_22);
            Py_DECREF(tmp_called_name_24);
            Py_DECREF(tmp_called_name_26);

            exception_lineno = 48;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_1e465c63423cecf32f0c62928e893560->m_frame.f_lineno = 47;
        tmp_args_element_name_12 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_26, tmp_args_element_name_13);
        Py_DECREF(tmp_called_name_26);
        Py_DECREF(tmp_args_element_name_13);
        if (tmp_args_element_name_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_2);
            Py_DECREF(tmp_called_name_4);
            Py_DECREF(tmp_called_name_6);
            Py_DECREF(tmp_called_name_8);
            Py_DECREF(tmp_called_name_10);
            Py_DECREF(tmp_called_name_12);
            Py_DECREF(tmp_called_name_14);
            Py_DECREF(tmp_called_name_16);
            Py_DECREF(tmp_called_name_18);
            Py_DECREF(tmp_called_name_20);
            Py_DECREF(tmp_called_name_22);
            Py_DECREF(tmp_called_name_24);

            exception_lineno = 47;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_1e465c63423cecf32f0c62928e893560->m_frame.f_lineno = 46;
        tmp_args_element_name_11 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_24, tmp_args_element_name_12);
        Py_DECREF(tmp_called_name_24);
        Py_DECREF(tmp_args_element_name_12);
        if (tmp_args_element_name_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_2);
            Py_DECREF(tmp_called_name_4);
            Py_DECREF(tmp_called_name_6);
            Py_DECREF(tmp_called_name_8);
            Py_DECREF(tmp_called_name_10);
            Py_DECREF(tmp_called_name_12);
            Py_DECREF(tmp_called_name_14);
            Py_DECREF(tmp_called_name_16);
            Py_DECREF(tmp_called_name_18);
            Py_DECREF(tmp_called_name_20);
            Py_DECREF(tmp_called_name_22);

            exception_lineno = 46;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_1e465c63423cecf32f0c62928e893560->m_frame.f_lineno = 45;
        tmp_args_element_name_10 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_22, tmp_args_element_name_11);
        Py_DECREF(tmp_called_name_22);
        Py_DECREF(tmp_args_element_name_11);
        if (tmp_args_element_name_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_2);
            Py_DECREF(tmp_called_name_4);
            Py_DECREF(tmp_called_name_6);
            Py_DECREF(tmp_called_name_8);
            Py_DECREF(tmp_called_name_10);
            Py_DECREF(tmp_called_name_12);
            Py_DECREF(tmp_called_name_14);
            Py_DECREF(tmp_called_name_16);
            Py_DECREF(tmp_called_name_18);
            Py_DECREF(tmp_called_name_20);

            exception_lineno = 45;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_1e465c63423cecf32f0c62928e893560->m_frame.f_lineno = 44;
        tmp_args_element_name_9 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_20, tmp_args_element_name_10);
        Py_DECREF(tmp_called_name_20);
        Py_DECREF(tmp_args_element_name_10);
        if (tmp_args_element_name_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_2);
            Py_DECREF(tmp_called_name_4);
            Py_DECREF(tmp_called_name_6);
            Py_DECREF(tmp_called_name_8);
            Py_DECREF(tmp_called_name_10);
            Py_DECREF(tmp_called_name_12);
            Py_DECREF(tmp_called_name_14);
            Py_DECREF(tmp_called_name_16);
            Py_DECREF(tmp_called_name_18);

            exception_lineno = 44;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_1e465c63423cecf32f0c62928e893560->m_frame.f_lineno = 43;
        tmp_args_element_name_8 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_18, tmp_args_element_name_9);
        Py_DECREF(tmp_called_name_18);
        Py_DECREF(tmp_args_element_name_9);
        if (tmp_args_element_name_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_2);
            Py_DECREF(tmp_called_name_4);
            Py_DECREF(tmp_called_name_6);
            Py_DECREF(tmp_called_name_8);
            Py_DECREF(tmp_called_name_10);
            Py_DECREF(tmp_called_name_12);
            Py_DECREF(tmp_called_name_14);
            Py_DECREF(tmp_called_name_16);

            exception_lineno = 43;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_1e465c63423cecf32f0c62928e893560->m_frame.f_lineno = 42;
        tmp_args_element_name_7 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_16, tmp_args_element_name_8);
        Py_DECREF(tmp_called_name_16);
        Py_DECREF(tmp_args_element_name_8);
        if (tmp_args_element_name_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_2);
            Py_DECREF(tmp_called_name_4);
            Py_DECREF(tmp_called_name_6);
            Py_DECREF(tmp_called_name_8);
            Py_DECREF(tmp_called_name_10);
            Py_DECREF(tmp_called_name_12);
            Py_DECREF(tmp_called_name_14);

            exception_lineno = 42;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_1e465c63423cecf32f0c62928e893560->m_frame.f_lineno = 41;
        tmp_args_element_name_6 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_14, tmp_args_element_name_7);
        Py_DECREF(tmp_called_name_14);
        Py_DECREF(tmp_args_element_name_7);
        if (tmp_args_element_name_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_2);
            Py_DECREF(tmp_called_name_4);
            Py_DECREF(tmp_called_name_6);
            Py_DECREF(tmp_called_name_8);
            Py_DECREF(tmp_called_name_10);
            Py_DECREF(tmp_called_name_12);

            exception_lineno = 41;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_1e465c63423cecf32f0c62928e893560->m_frame.f_lineno = 40;
        tmp_args_element_name_5 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_12, tmp_args_element_name_6);
        Py_DECREF(tmp_called_name_12);
        Py_DECREF(tmp_args_element_name_6);
        if (tmp_args_element_name_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_2);
            Py_DECREF(tmp_called_name_4);
            Py_DECREF(tmp_called_name_6);
            Py_DECREF(tmp_called_name_8);
            Py_DECREF(tmp_called_name_10);

            exception_lineno = 40;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_1e465c63423cecf32f0c62928e893560->m_frame.f_lineno = 39;
        tmp_args_element_name_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_10, tmp_args_element_name_5);
        Py_DECREF(tmp_called_name_10);
        Py_DECREF(tmp_args_element_name_5);
        if (tmp_args_element_name_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_2);
            Py_DECREF(tmp_called_name_4);
            Py_DECREF(tmp_called_name_6);
            Py_DECREF(tmp_called_name_8);

            exception_lineno = 39;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_1e465c63423cecf32f0c62928e893560->m_frame.f_lineno = 38;
        tmp_args_element_name_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_8, tmp_args_element_name_4);
        Py_DECREF(tmp_called_name_8);
        Py_DECREF(tmp_args_element_name_4);
        if (tmp_args_element_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_2);
            Py_DECREF(tmp_called_name_4);
            Py_DECREF(tmp_called_name_6);

            exception_lineno = 38;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_1e465c63423cecf32f0c62928e893560->m_frame.f_lineno = 37;
        tmp_args_element_name_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_6, tmp_args_element_name_3);
        Py_DECREF(tmp_called_name_6);
        Py_DECREF(tmp_args_element_name_3);
        if (tmp_args_element_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_2);
            Py_DECREF(tmp_called_name_4);

            exception_lineno = 37;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_1e465c63423cecf32f0c62928e893560->m_frame.f_lineno = 36;
        tmp_args_element_name_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_4, tmp_args_element_name_2);
        Py_DECREF(tmp_called_name_4);
        Py_DECREF(tmp_args_element_name_2);
        if (tmp_args_element_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_2);

            exception_lineno = 36;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_1e465c63423cecf32f0c62928e893560->m_frame.f_lineno = 35;
        tmp_assign_source_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_2, tmp_args_element_name_1);
        Py_DECREF(tmp_called_name_2);
        Py_DECREF(tmp_args_element_name_1);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 35;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var__ignore == NULL);
        var__ignore = tmp_assign_source_4;
    }
    {
        PyObject *tmp_called_name_180;
        PyObject *tmp_called_name_181;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_91;
        PyObject *tmp_called_name_182;
        CHECK_OBJECT(var_handle);
        tmp_called_name_181 = var_handle;
        frame_1e465c63423cecf32f0c62928e893560->m_frame.f_lineno = 136;
        tmp_called_name_180 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_181, mod_consts[70]);
        if (tmp_called_name_180 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 136;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_182 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$basic, (Nuitka_StringObject *)mod_consts[102]);

        if (unlikely(tmp_called_name_182 == NULL)) {
            tmp_called_name_182 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[102]);
        }

        if (tmp_called_name_182 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_180);

            exception_lineno = 136;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_1e465c63423cecf32f0c62928e893560->m_frame.f_lineno = 136;
        tmp_args_element_name_91 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_182, mod_consts[103]);
        if (tmp_args_element_name_91 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_180);

            exception_lineno = 136;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_1e465c63423cecf32f0c62928e893560->m_frame.f_lineno = 136;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_180, tmp_args_element_name_91);
        Py_DECREF(tmp_called_name_180);
        Py_DECREF(tmp_args_element_name_91);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 136;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_called_name_183;
        PyObject *tmp_called_name_184;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_name_92;
        PyObject *tmp_called_name_185;
        CHECK_OBJECT(var_handle);
        tmp_called_name_184 = var_handle;
        frame_1e465c63423cecf32f0c62928e893560->m_frame.f_lineno = 137;
        tmp_called_name_183 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_184, mod_consts[71]);
        if (tmp_called_name_183 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 137;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_185 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$basic, (Nuitka_StringObject *)mod_consts[102]);

        if (unlikely(tmp_called_name_185 == NULL)) {
            tmp_called_name_185 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[102]);
        }

        if (tmp_called_name_185 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_183);

            exception_lineno = 137;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_1e465c63423cecf32f0c62928e893560->m_frame.f_lineno = 137;
        tmp_args_element_name_92 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_185, mod_consts[104]);
        if (tmp_args_element_name_92 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_183);

            exception_lineno = 137;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_1e465c63423cecf32f0c62928e893560->m_frame.f_lineno = 137;
        tmp_call_result_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_183, tmp_args_element_name_92);
        Py_DECREF(tmp_called_name_183);
        Py_DECREF(tmp_args_element_name_92);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 137;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    {
        PyObject *tmp_called_name_186;
        PyObject *tmp_called_name_187;
        PyObject *tmp_call_result_3;
        PyObject *tmp_args_element_name_93;
        PyObject *tmp_called_name_188;
        CHECK_OBJECT(var_handle);
        tmp_called_name_187 = var_handle;
        frame_1e465c63423cecf32f0c62928e893560->m_frame.f_lineno = 138;
        tmp_called_name_186 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_187, mod_consts[65]);
        if (tmp_called_name_186 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 138;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_188 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$basic, (Nuitka_StringObject *)mod_consts[102]);

        if (unlikely(tmp_called_name_188 == NULL)) {
            tmp_called_name_188 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[102]);
        }

        if (tmp_called_name_188 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_186);

            exception_lineno = 138;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_1e465c63423cecf32f0c62928e893560->m_frame.f_lineno = 138;
        tmp_args_element_name_93 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_188, mod_consts[105]);
        if (tmp_args_element_name_93 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_186);

            exception_lineno = 138;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_1e465c63423cecf32f0c62928e893560->m_frame.f_lineno = 138;
        tmp_call_result_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_186, tmp_args_element_name_93);
        Py_DECREF(tmp_called_name_186);
        Py_DECREF(tmp_args_element_name_93);
        if (tmp_call_result_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 138;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_3);
    }
    {
        PyObject *tmp_called_name_189;
        PyObject *tmp_called_name_190;
        PyObject *tmp_call_result_4;
        PyObject *tmp_args_element_name_94;
        PyObject *tmp_called_name_191;
        CHECK_OBJECT(var_handle);
        tmp_called_name_190 = var_handle;
        frame_1e465c63423cecf32f0c62928e893560->m_frame.f_lineno = 139;
        tmp_called_name_189 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_190, mod_consts[64]);
        if (tmp_called_name_189 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 139;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_191 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$basic, (Nuitka_StringObject *)mod_consts[102]);

        if (unlikely(tmp_called_name_191 == NULL)) {
            tmp_called_name_191 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[102]);
        }

        if (tmp_called_name_191 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_189);

            exception_lineno = 139;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_1e465c63423cecf32f0c62928e893560->m_frame.f_lineno = 139;
        tmp_args_element_name_94 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_191, mod_consts[106]);
        if (tmp_args_element_name_94 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_189);

            exception_lineno = 139;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_1e465c63423cecf32f0c62928e893560->m_frame.f_lineno = 139;
        tmp_call_result_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_189, tmp_args_element_name_94);
        Py_DECREF(tmp_called_name_189);
        Py_DECREF(tmp_args_element_name_94);
        if (tmp_call_result_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 139;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_4);
    }
    {
        PyObject *tmp_called_name_192;
        PyObject *tmp_called_name_193;
        PyObject *tmp_call_result_5;
        PyObject *tmp_args_element_name_95;
        PyObject *tmp_called_name_194;
        CHECK_OBJECT(var_handle);
        tmp_called_name_193 = var_handle;
        frame_1e465c63423cecf32f0c62928e893560->m_frame.f_lineno = 140;
        tmp_called_name_192 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_193, mod_consts[87]);
        if (tmp_called_name_192 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 140;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_194 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$basic, (Nuitka_StringObject *)mod_consts[102]);

        if (unlikely(tmp_called_name_194 == NULL)) {
            tmp_called_name_194 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[102]);
        }

        if (tmp_called_name_194 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_192);

            exception_lineno = 140;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_1e465c63423cecf32f0c62928e893560->m_frame.f_lineno = 140;
        tmp_args_element_name_95 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_194, mod_consts[107]);
        if (tmp_args_element_name_95 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_192);

            exception_lineno = 140;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_1e465c63423cecf32f0c62928e893560->m_frame.f_lineno = 140;
        tmp_call_result_5 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_192, tmp_args_element_name_95);
        Py_DECREF(tmp_called_name_192);
        Py_DECREF(tmp_args_element_name_95);
        if (tmp_call_result_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 140;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_5);
    }
    {
        PyObject *tmp_called_name_195;
        PyObject *tmp_called_name_196;
        PyObject *tmp_call_result_6;
        PyObject *tmp_args_element_name_96;
        PyObject *tmp_called_name_197;
        CHECK_OBJECT(var_handle);
        tmp_called_name_196 = var_handle;
        frame_1e465c63423cecf32f0c62928e893560->m_frame.f_lineno = 141;
        tmp_called_name_195 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_196, mod_consts[88]);
        if (tmp_called_name_195 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 141;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_197 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$basic, (Nuitka_StringObject *)mod_consts[102]);

        if (unlikely(tmp_called_name_197 == NULL)) {
            tmp_called_name_197 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[102]);
        }

        if (tmp_called_name_197 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_195);

            exception_lineno = 141;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_1e465c63423cecf32f0c62928e893560->m_frame.f_lineno = 141;
        tmp_args_element_name_96 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_197, mod_consts[108]);
        if (tmp_args_element_name_96 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_195);

            exception_lineno = 141;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_1e465c63423cecf32f0c62928e893560->m_frame.f_lineno = 141;
        tmp_call_result_6 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_195, tmp_args_element_name_96);
        Py_DECREF(tmp_called_name_195);
        Py_DECREF(tmp_args_element_name_96);
        if (tmp_call_result_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 141;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_6);
    }
    {
        PyObject *tmp_called_name_198;
        PyObject *tmp_called_name_199;
        PyObject *tmp_call_result_7;
        PyObject *tmp_args_element_name_97;
        PyObject *tmp_called_name_200;
        CHECK_OBJECT(var_handle);
        tmp_called_name_199 = var_handle;
        frame_1e465c63423cecf32f0c62928e893560->m_frame.f_lineno = 142;
        tmp_called_name_198 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_199, mod_consts[17]);
        if (tmp_called_name_198 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 142;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_200 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$basic, (Nuitka_StringObject *)mod_consts[102]);

        if (unlikely(tmp_called_name_200 == NULL)) {
            tmp_called_name_200 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[102]);
        }

        if (tmp_called_name_200 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_198);

            exception_lineno = 142;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_1e465c63423cecf32f0c62928e893560->m_frame.f_lineno = 142;
        tmp_args_element_name_97 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_200, mod_consts[109]);
        if (tmp_args_element_name_97 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_198);

            exception_lineno = 142;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_1e465c63423cecf32f0c62928e893560->m_frame.f_lineno = 142;
        tmp_call_result_7 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_198, tmp_args_element_name_97);
        Py_DECREF(tmp_called_name_198);
        Py_DECREF(tmp_args_element_name_97);
        if (tmp_call_result_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 142;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_7);
    }
    {
        PyObject *tmp_called_name_201;
        PyObject *tmp_called_name_202;
        PyObject *tmp_args_name_1;
        PyObject *tmp_kwargs_name_1;
        PyObject *tmp_dict_key_2;
        PyObject *tmp_dict_value_2;
        PyObject *tmp_call_result_8;
        PyObject *tmp_args_element_name_98;
        PyObject *tmp_called_name_203;
        CHECK_OBJECT(var_handle);
        tmp_called_name_202 = var_handle;
        tmp_args_name_1 = mod_consts[110];
        tmp_dict_key_2 = mod_consts[111];
        CHECK_OBJECT(var_insert_mode);
        tmp_dict_value_2 = var_insert_mode;
        tmp_kwargs_name_1 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_kwargs_name_1, tmp_dict_key_2, tmp_dict_value_2);
        assert(!(tmp_res != 0));
        frame_1e465c63423cecf32f0c62928e893560->m_frame.f_lineno = 144;
        tmp_called_name_201 = CALL_FUNCTION(tmp_called_name_202, tmp_args_name_1, tmp_kwargs_name_1);
        Py_DECREF(tmp_kwargs_name_1);
        if (tmp_called_name_201 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 144;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_203 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$basic, (Nuitka_StringObject *)mod_consts[102]);

        if (unlikely(tmp_called_name_203 == NULL)) {
            tmp_called_name_203 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[102]);
        }

        if (tmp_called_name_203 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_201);

            exception_lineno = 144;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_1e465c63423cecf32f0c62928e893560->m_frame.f_lineno = 144;
        tmp_args_element_name_98 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_203, mod_consts[112]);
        if (tmp_args_element_name_98 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_201);

            exception_lineno = 144;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_1e465c63423cecf32f0c62928e893560->m_frame.f_lineno = 144;
        tmp_call_result_8 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_201, tmp_args_element_name_98);
        Py_DECREF(tmp_called_name_201);
        Py_DECREF(tmp_args_element_name_98);
        if (tmp_call_result_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 144;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_8);
    }
    {
        PyObject *tmp_called_name_204;
        PyObject *tmp_called_name_205;
        PyObject *tmp_args_name_2;
        PyObject *tmp_kwargs_name_2;
        PyObject *tmp_dict_key_3;
        PyObject *tmp_dict_value_3;
        PyObject *tmp_call_result_9;
        PyObject *tmp_args_element_name_99;
        PyObject *tmp_called_name_206;
        CHECK_OBJECT(var_handle);
        tmp_called_name_205 = var_handle;
        tmp_args_name_2 = mod_consts[113];
        tmp_dict_key_3 = mod_consts[111];
        CHECK_OBJECT(var_insert_mode);
        tmp_dict_value_3 = var_insert_mode;
        tmp_kwargs_name_2 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_kwargs_name_2, tmp_dict_key_3, tmp_dict_value_3);
        assert(!(tmp_res != 0));
        frame_1e465c63423cecf32f0c62928e893560->m_frame.f_lineno = 145;
        tmp_called_name_204 = CALL_FUNCTION(tmp_called_name_205, tmp_args_name_2, tmp_kwargs_name_2);
        Py_DECREF(tmp_kwargs_name_2);
        if (tmp_called_name_204 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 145;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_206 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$basic, (Nuitka_StringObject *)mod_consts[102]);

        if (unlikely(tmp_called_name_206 == NULL)) {
            tmp_called_name_206 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[102]);
        }

        if (tmp_called_name_206 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_204);

            exception_lineno = 145;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_1e465c63423cecf32f0c62928e893560->m_frame.f_lineno = 145;
        tmp_args_element_name_99 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_206, mod_consts[114]);
        if (tmp_args_element_name_99 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_204);

            exception_lineno = 145;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_1e465c63423cecf32f0c62928e893560->m_frame.f_lineno = 145;
        tmp_call_result_9 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_204, tmp_args_element_name_99);
        Py_DECREF(tmp_called_name_204);
        Py_DECREF(tmp_args_element_name_99);
        if (tmp_call_result_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 145;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_9);
    }
    {
        PyObject *tmp_called_name_207;
        PyObject *tmp_called_name_208;
        PyObject *tmp_args_name_3;
        PyObject *tmp_kwargs_name_3;
        PyObject *tmp_dict_key_4;
        PyObject *tmp_dict_value_4;
        PyObject *tmp_call_result_10;
        PyObject *tmp_args_element_name_100;
        PyObject *tmp_called_name_209;
        CHECK_OBJECT(var_handle);
        tmp_called_name_208 = var_handle;
        tmp_args_name_3 = mod_consts[115];
        tmp_dict_key_4 = mod_consts[111];
        CHECK_OBJECT(var_insert_mode);
        tmp_dict_value_4 = var_insert_mode;
        tmp_kwargs_name_3 = _PyDict_NewPresized( 2 );
        tmp_res = PyDict_SetItem(tmp_kwargs_name_3, tmp_dict_key_4, tmp_dict_value_4);
        assert(!(tmp_res != 0));
        tmp_dict_key_4 = mod_consts[116];
        tmp_dict_value_4 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$basic, (Nuitka_StringObject *)mod_consts[117]);

        if (unlikely(tmp_dict_value_4 == NULL)) {
            tmp_dict_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[117]);
        }

        if (tmp_dict_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 146;
            type_description_1 = "oooooooooooooo";
            goto dict_build_exception_1;
        }
        tmp_res = PyDict_SetItem(tmp_kwargs_name_3, tmp_dict_key_4, tmp_dict_value_4);
        assert(!(tmp_res != 0));
        goto dict_build_noexception_1;
        // Exception handling pass through code for dict_build:
        dict_build_exception_1:;
        Py_DECREF(tmp_kwargs_name_3);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_1:;
        frame_1e465c63423cecf32f0c62928e893560->m_frame.f_lineno = 146;
        tmp_called_name_207 = CALL_FUNCTION(tmp_called_name_208, tmp_args_name_3, tmp_kwargs_name_3);
        Py_DECREF(tmp_kwargs_name_3);
        if (tmp_called_name_207 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 146;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_209 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$basic, (Nuitka_StringObject *)mod_consts[102]);

        if (unlikely(tmp_called_name_209 == NULL)) {
            tmp_called_name_209 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[102]);
        }

        if (tmp_called_name_209 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_207);

            exception_lineno = 147;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_1e465c63423cecf32f0c62928e893560->m_frame.f_lineno = 147;
        tmp_args_element_name_100 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_209, mod_consts[118]);
        if (tmp_args_element_name_100 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_207);

            exception_lineno = 147;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_1e465c63423cecf32f0c62928e893560->m_frame.f_lineno = 146;
        tmp_call_result_10 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_207, tmp_args_element_name_100);
        Py_DECREF(tmp_called_name_207);
        Py_DECREF(tmp_args_element_name_100);
        if (tmp_call_result_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 146;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_10);
    }
    {
        PyObject *tmp_called_name_210;
        PyObject *tmp_called_name_211;
        PyObject *tmp_args_name_4;
        PyObject *tmp_kwargs_name_4;
        PyObject *tmp_dict_key_5;
        PyObject *tmp_dict_value_5;
        PyObject *tmp_call_result_11;
        PyObject *tmp_args_element_name_101;
        PyObject *tmp_called_name_212;
        CHECK_OBJECT(var_handle);
        tmp_called_name_211 = var_handle;
        tmp_args_name_4 = mod_consts[119];
        tmp_dict_key_5 = mod_consts[111];
        CHECK_OBJECT(var_insert_mode);
        tmp_dict_value_5 = var_insert_mode;
        tmp_kwargs_name_4 = _PyDict_NewPresized( 2 );
        tmp_res = PyDict_SetItem(tmp_kwargs_name_4, tmp_dict_key_5, tmp_dict_value_5);
        assert(!(tmp_res != 0));
        tmp_dict_key_5 = mod_consts[116];
        tmp_dict_value_5 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$basic, (Nuitka_StringObject *)mod_consts[117]);

        if (unlikely(tmp_dict_value_5 == NULL)) {
            tmp_dict_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[117]);
        }

        if (tmp_dict_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 149;
            type_description_1 = "oooooooooooooo";
            goto dict_build_exception_2;
        }
        tmp_res = PyDict_SetItem(tmp_kwargs_name_4, tmp_dict_key_5, tmp_dict_value_5);
        assert(!(tmp_res != 0));
        goto dict_build_noexception_2;
        // Exception handling pass through code for dict_build:
        dict_build_exception_2:;
        Py_DECREF(tmp_kwargs_name_4);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_2:;
        frame_1e465c63423cecf32f0c62928e893560->m_frame.f_lineno = 149;
        tmp_called_name_210 = CALL_FUNCTION(tmp_called_name_211, tmp_args_name_4, tmp_kwargs_name_4);
        Py_DECREF(tmp_kwargs_name_4);
        if (tmp_called_name_210 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 149;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_212 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$basic, (Nuitka_StringObject *)mod_consts[102]);

        if (unlikely(tmp_called_name_212 == NULL)) {
            tmp_called_name_212 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[102]);
        }

        if (tmp_called_name_212 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_210);

            exception_lineno = 150;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_1e465c63423cecf32f0c62928e893560->m_frame.f_lineno = 150;
        tmp_args_element_name_101 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_212, mod_consts[120]);
        if (tmp_args_element_name_101 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_210);

            exception_lineno = 150;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_1e465c63423cecf32f0c62928e893560->m_frame.f_lineno = 149;
        tmp_call_result_11 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_210, tmp_args_element_name_101);
        Py_DECREF(tmp_called_name_210);
        Py_DECREF(tmp_args_element_name_101);
        if (tmp_call_result_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 149;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_11);
    }
    {
        PyObject *tmp_called_name_213;
        PyObject *tmp_called_name_214;
        PyObject *tmp_args_name_5;
        PyObject *tmp_kwargs_name_5;
        PyObject *tmp_dict_key_6;
        PyObject *tmp_dict_value_6;
        PyObject *tmp_call_result_12;
        PyObject *tmp_args_element_name_102;
        PyObject *tmp_called_name_215;
        CHECK_OBJECT(var_handle);
        tmp_called_name_214 = var_handle;
        tmp_args_name_5 = mod_consts[121];
        tmp_dict_key_6 = mod_consts[111];
        CHECK_OBJECT(var_insert_mode);
        tmp_dict_value_6 = var_insert_mode;
        tmp_kwargs_name_5 = _PyDict_NewPresized( 2 );
        tmp_res = PyDict_SetItem(tmp_kwargs_name_5, tmp_dict_key_6, tmp_dict_value_6);
        assert(!(tmp_res != 0));
        tmp_dict_key_6 = mod_consts[116];
        tmp_dict_value_6 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$basic, (Nuitka_StringObject *)mod_consts[117]);

        if (unlikely(tmp_dict_value_6 == NULL)) {
            tmp_dict_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[117]);
        }

        if (tmp_dict_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 152;
            type_description_1 = "oooooooooooooo";
            goto dict_build_exception_3;
        }
        tmp_res = PyDict_SetItem(tmp_kwargs_name_5, tmp_dict_key_6, tmp_dict_value_6);
        assert(!(tmp_res != 0));
        goto dict_build_noexception_3;
        // Exception handling pass through code for dict_build:
        dict_build_exception_3:;
        Py_DECREF(tmp_kwargs_name_5);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_3:;
        frame_1e465c63423cecf32f0c62928e893560->m_frame.f_lineno = 152;
        tmp_called_name_213 = CALL_FUNCTION(tmp_called_name_214, tmp_args_name_5, tmp_kwargs_name_5);
        Py_DECREF(tmp_kwargs_name_5);
        if (tmp_called_name_213 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 152;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_215 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$basic, (Nuitka_StringObject *)mod_consts[102]);

        if (unlikely(tmp_called_name_215 == NULL)) {
            tmp_called_name_215 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[102]);
        }

        if (tmp_called_name_215 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_213);

            exception_lineno = 153;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_1e465c63423cecf32f0c62928e893560->m_frame.f_lineno = 153;
        tmp_args_element_name_102 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_215, mod_consts[120]);
        if (tmp_args_element_name_102 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_213);

            exception_lineno = 153;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_1e465c63423cecf32f0c62928e893560->m_frame.f_lineno = 152;
        tmp_call_result_12 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_213, tmp_args_element_name_102);
        Py_DECREF(tmp_called_name_213);
        Py_DECREF(tmp_args_element_name_102);
        if (tmp_call_result_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 152;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_12);
    }
    {
        PyObject *tmp_called_name_216;
        PyObject *tmp_called_name_217;
        PyObject *tmp_args_name_6;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_expression_name_3;
        PyObject *tmp_kwargs_name_6;
        PyObject *tmp_dict_key_7;
        PyObject *tmp_dict_value_7;
        PyObject *tmp_call_result_13;
        PyObject *tmp_args_element_name_103;
        PyObject *tmp_called_name_218;
        CHECK_OBJECT(var_handle);
        tmp_called_name_217 = var_handle;
        tmp_expression_name_3 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$basic, (Nuitka_StringObject *)mod_consts[94]);

        if (unlikely(tmp_expression_name_3 == NULL)) {
            tmp_expression_name_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[94]);
        }

        if (tmp_expression_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 155;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_3, mod_consts[122]);
        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 155;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_name_6 = PyTuple_New(1);
        PyTuple_SET_ITEM(tmp_args_name_6, 0, tmp_tuple_element_1);
        tmp_dict_key_7 = mod_consts[111];
        CHECK_OBJECT(var_insert_mode);
        tmp_dict_value_7 = var_insert_mode;
        tmp_kwargs_name_6 = _PyDict_NewPresized( 2 );
        tmp_res = PyDict_SetItem(tmp_kwargs_name_6, tmp_dict_key_7, tmp_dict_value_7);
        assert(!(tmp_res != 0));
        tmp_dict_key_7 = mod_consts[116];
        tmp_dict_value_7 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$basic, (Nuitka_StringObject *)mod_consts[117]);

        if (unlikely(tmp_dict_value_7 == NULL)) {
            tmp_dict_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[117]);
        }

        if (tmp_dict_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 155;
            type_description_1 = "oooooooooooooo";
            goto dict_build_exception_4;
        }
        tmp_res = PyDict_SetItem(tmp_kwargs_name_6, tmp_dict_key_7, tmp_dict_value_7);
        assert(!(tmp_res != 0));
        goto dict_build_noexception_4;
        // Exception handling pass through code for dict_build:
        dict_build_exception_4:;
        Py_DECREF(tmp_args_name_6);
        Py_DECREF(tmp_kwargs_name_6);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_4:;
        frame_1e465c63423cecf32f0c62928e893560->m_frame.f_lineno = 155;
        tmp_called_name_216 = CALL_FUNCTION(tmp_called_name_217, tmp_args_name_6, tmp_kwargs_name_6);
        Py_DECREF(tmp_args_name_6);
        Py_DECREF(tmp_kwargs_name_6);
        if (tmp_called_name_216 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 155;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_218 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$basic, (Nuitka_StringObject *)mod_consts[102]);

        if (unlikely(tmp_called_name_218 == NULL)) {
            tmp_called_name_218 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[102]);
        }

        if (tmp_called_name_218 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_216);

            exception_lineno = 156;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_1e465c63423cecf32f0c62928e893560->m_frame.f_lineno = 156;
        tmp_args_element_name_103 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_218, mod_consts[123]);
        if (tmp_args_element_name_103 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_216);

            exception_lineno = 156;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_1e465c63423cecf32f0c62928e893560->m_frame.f_lineno = 155;
        tmp_call_result_13 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_216, tmp_args_element_name_103);
        Py_DECREF(tmp_called_name_216);
        Py_DECREF(tmp_args_element_name_103);
        if (tmp_call_result_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 155;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_13);
    }
    {
        PyObject *tmp_called_name_219;
        PyObject *tmp_called_name_220;
        PyObject *tmp_args_name_7;
        PyObject *tmp_kwargs_name_7;
        PyObject *tmp_dict_key_8;
        PyObject *tmp_dict_value_8;
        PyObject *tmp_call_result_14;
        PyObject *tmp_args_element_name_104;
        PyObject *tmp_called_name_221;
        CHECK_OBJECT(var_handle);
        tmp_called_name_220 = var_handle;
        tmp_args_name_7 = mod_consts[124];
        tmp_dict_key_8 = mod_consts[111];
        CHECK_OBJECT(var_insert_mode);
        tmp_dict_value_8 = var_insert_mode;
        tmp_kwargs_name_7 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_kwargs_name_7, tmp_dict_key_8, tmp_dict_value_8);
        assert(!(tmp_res != 0));
        frame_1e465c63423cecf32f0c62928e893560->m_frame.f_lineno = 158;
        tmp_called_name_219 = CALL_FUNCTION(tmp_called_name_220, tmp_args_name_7, tmp_kwargs_name_7);
        Py_DECREF(tmp_kwargs_name_7);
        if (tmp_called_name_219 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 158;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_221 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$basic, (Nuitka_StringObject *)mod_consts[102]);

        if (unlikely(tmp_called_name_221 == NULL)) {
            tmp_called_name_221 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[102]);
        }

        if (tmp_called_name_221 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_219);

            exception_lineno = 158;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_1e465c63423cecf32f0c62928e893560->m_frame.f_lineno = 158;
        tmp_args_element_name_104 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_221, mod_consts[125]);
        if (tmp_args_element_name_104 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_219);

            exception_lineno = 158;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_1e465c63423cecf32f0c62928e893560->m_frame.f_lineno = 158;
        tmp_call_result_14 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_219, tmp_args_element_name_104);
        Py_DECREF(tmp_called_name_219);
        Py_DECREF(tmp_args_element_name_104);
        if (tmp_call_result_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 158;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_14);
    }
    {
        PyObject *tmp_called_name_222;
        PyObject *tmp_called_name_223;
        PyObject *tmp_args_name_8;
        PyObject *tmp_kwargs_name_8;
        PyObject *tmp_dict_key_9;
        PyObject *tmp_dict_value_9;
        PyObject *tmp_call_result_15;
        PyObject *tmp_args_element_name_105;
        PyObject *tmp_called_name_224;
        CHECK_OBJECT(var_handle);
        tmp_called_name_223 = var_handle;
        tmp_args_name_8 = mod_consts[126];
        tmp_dict_key_9 = mod_consts[111];
        CHECK_OBJECT(var_insert_mode);
        tmp_dict_value_9 = var_insert_mode;
        tmp_kwargs_name_8 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_kwargs_name_8, tmp_dict_key_9, tmp_dict_value_9);
        assert(!(tmp_res != 0));
        frame_1e465c63423cecf32f0c62928e893560->m_frame.f_lineno = 159;
        tmp_called_name_222 = CALL_FUNCTION(tmp_called_name_223, tmp_args_name_8, tmp_kwargs_name_8);
        Py_DECREF(tmp_kwargs_name_8);
        if (tmp_called_name_222 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 159;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_224 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$basic, (Nuitka_StringObject *)mod_consts[102]);

        if (unlikely(tmp_called_name_224 == NULL)) {
            tmp_called_name_224 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[102]);
        }

        if (tmp_called_name_224 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_222);

            exception_lineno = 159;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_1e465c63423cecf32f0c62928e893560->m_frame.f_lineno = 159;
        tmp_args_element_name_105 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_224, mod_consts[127]);
        if (tmp_args_element_name_105 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_222);

            exception_lineno = 159;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_1e465c63423cecf32f0c62928e893560->m_frame.f_lineno = 159;
        tmp_call_result_15 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_222, tmp_args_element_name_105);
        Py_DECREF(tmp_called_name_222);
        Py_DECREF(tmp_args_element_name_105);
        if (tmp_call_result_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 159;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_15);
    }
    {
        PyObject *tmp_called_name_225;
        PyObject *tmp_called_name_226;
        PyObject *tmp_args_name_9;
        PyObject *tmp_kwargs_name_9;
        PyObject *tmp_dict_key_10;
        PyObject *tmp_dict_value_10;
        PyObject *tmp_call_result_16;
        PyObject *tmp_args_element_name_106;
        PyObject *tmp_called_name_227;
        CHECK_OBJECT(var_handle);
        tmp_called_name_226 = var_handle;
        tmp_args_name_9 = mod_consts[128];
        tmp_dict_key_10 = mod_consts[111];
        CHECK_OBJECT(var_insert_mode);
        tmp_dict_value_10 = var_insert_mode;
        tmp_kwargs_name_9 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_kwargs_name_9, tmp_dict_key_10, tmp_dict_value_10);
        assert(!(tmp_res != 0));
        frame_1e465c63423cecf32f0c62928e893560->m_frame.f_lineno = 160;
        tmp_called_name_225 = CALL_FUNCTION(tmp_called_name_226, tmp_args_name_9, tmp_kwargs_name_9);
        Py_DECREF(tmp_kwargs_name_9);
        if (tmp_called_name_225 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 160;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_227 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$basic, (Nuitka_StringObject *)mod_consts[102]);

        if (unlikely(tmp_called_name_227 == NULL)) {
            tmp_called_name_227 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[102]);
        }

        if (tmp_called_name_227 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_225);

            exception_lineno = 160;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_1e465c63423cecf32f0c62928e893560->m_frame.f_lineno = 160;
        tmp_args_element_name_106 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_227, mod_consts[129]);
        if (tmp_args_element_name_106 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_225);

            exception_lineno = 160;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_1e465c63423cecf32f0c62928e893560->m_frame.f_lineno = 160;
        tmp_call_result_16 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_225, tmp_args_element_name_106);
        Py_DECREF(tmp_called_name_225);
        Py_DECREF(tmp_args_element_name_106);
        if (tmp_call_result_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 160;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_16);
    }
    {
        PyObject *tmp_called_name_228;
        PyObject *tmp_called_name_229;
        PyObject *tmp_args_name_10;
        PyObject *tmp_kwargs_name_10;
        PyObject *tmp_dict_key_11;
        PyObject *tmp_dict_value_11;
        PyObject *tmp_call_result_17;
        PyObject *tmp_args_element_name_107;
        PyObject *tmp_called_name_230;
        CHECK_OBJECT(var_handle);
        tmp_called_name_229 = var_handle;
        tmp_args_name_10 = mod_consts[130];
        tmp_dict_key_11 = mod_consts[111];
        CHECK_OBJECT(var_insert_mode);
        tmp_dict_value_11 = var_insert_mode;
        tmp_kwargs_name_10 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_kwargs_name_10, tmp_dict_key_11, tmp_dict_value_11);
        assert(!(tmp_res != 0));
        frame_1e465c63423cecf32f0c62928e893560->m_frame.f_lineno = 164;
        tmp_called_name_228 = CALL_FUNCTION(tmp_called_name_229, tmp_args_name_10, tmp_kwargs_name_10);
        Py_DECREF(tmp_kwargs_name_10);
        if (tmp_called_name_228 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 164;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_230 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$basic, (Nuitka_StringObject *)mod_consts[102]);

        if (unlikely(tmp_called_name_230 == NULL)) {
            tmp_called_name_230 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[102]);
        }

        if (tmp_called_name_230 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_228);

            exception_lineno = 164;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_1e465c63423cecf32f0c62928e893560->m_frame.f_lineno = 164;
        tmp_args_element_name_107 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_230, mod_consts[131]);
        if (tmp_args_element_name_107 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_228);

            exception_lineno = 164;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_1e465c63423cecf32f0c62928e893560->m_frame.f_lineno = 164;
        tmp_call_result_17 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_228, tmp_args_element_name_107);
        Py_DECREF(tmp_called_name_228);
        Py_DECREF(tmp_args_element_name_107);
        if (tmp_call_result_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 164;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_17);
    }
    {
        PyObject *tmp_called_name_231;
        PyObject *tmp_called_name_232;
        PyObject *tmp_args_name_11;
        PyObject *tmp_kwargs_name_11;
        PyObject *tmp_dict_key_12;
        PyObject *tmp_dict_value_12;
        PyObject *tmp_operand_name_1;
        PyObject *tmp_call_result_18;
        PyObject *tmp_args_element_name_108;
        PyObject *tmp_called_name_233;
        CHECK_OBJECT(var_handle);
        tmp_called_name_232 = var_handle;
        tmp_args_name_11 = mod_consts[132];
        tmp_dict_key_12 = mod_consts[111];
        tmp_operand_name_1 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$basic, (Nuitka_StringObject *)mod_consts[133]);

        if (unlikely(tmp_operand_name_1 == NULL)) {
            tmp_operand_name_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[133]);
        }

        if (tmp_operand_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 166;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_dict_value_12 = UNARY_OPERATION(PyNumber_Invert, tmp_operand_name_1);
        if (tmp_dict_value_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 166;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_kwargs_name_11 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_kwargs_name_11, tmp_dict_key_12, tmp_dict_value_12);
        Py_DECREF(tmp_dict_value_12);
        assert(!(tmp_res != 0));
        frame_1e465c63423cecf32f0c62928e893560->m_frame.f_lineno = 166;
        tmp_called_name_231 = CALL_FUNCTION(tmp_called_name_232, tmp_args_name_11, tmp_kwargs_name_11);
        Py_DECREF(tmp_kwargs_name_11);
        if (tmp_called_name_231 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 166;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_233 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$basic, (Nuitka_StringObject *)mod_consts[102]);

        if (unlikely(tmp_called_name_233 == NULL)) {
            tmp_called_name_233 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[102]);
        }

        if (tmp_called_name_233 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_231);

            exception_lineno = 166;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_1e465c63423cecf32f0c62928e893560->m_frame.f_lineno = 166;
        tmp_args_element_name_108 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_233, mod_consts[107]);
        if (tmp_args_element_name_108 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_231);

            exception_lineno = 166;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_1e465c63423cecf32f0c62928e893560->m_frame.f_lineno = 166;
        tmp_call_result_18 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_231, tmp_args_element_name_108);
        Py_DECREF(tmp_called_name_231);
        Py_DECREF(tmp_args_element_name_108);
        if (tmp_call_result_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 166;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_18);
    }
    {
        PyObject *tmp_called_name_234;
        PyObject *tmp_called_name_235;
        PyObject *tmp_args_name_12;
        PyObject *tmp_kwargs_name_12;
        PyObject *tmp_dict_key_13;
        PyObject *tmp_dict_value_13;
        PyObject *tmp_operand_name_2;
        PyObject *tmp_call_result_19;
        PyObject *tmp_args_element_name_109;
        PyObject *tmp_called_name_236;
        CHECK_OBJECT(var_handle);
        tmp_called_name_235 = var_handle;
        tmp_args_name_12 = mod_consts[134];
        tmp_dict_key_13 = mod_consts[111];
        tmp_operand_name_2 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$basic, (Nuitka_StringObject *)mod_consts[133]);

        if (unlikely(tmp_operand_name_2 == NULL)) {
            tmp_operand_name_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[133]);
        }

        if (tmp_operand_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 167;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_dict_value_13 = UNARY_OPERATION(PyNumber_Invert, tmp_operand_name_2);
        if (tmp_dict_value_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 167;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_kwargs_name_12 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_kwargs_name_12, tmp_dict_key_13, tmp_dict_value_13);
        Py_DECREF(tmp_dict_value_13);
        assert(!(tmp_res != 0));
        frame_1e465c63423cecf32f0c62928e893560->m_frame.f_lineno = 167;
        tmp_called_name_234 = CALL_FUNCTION(tmp_called_name_235, tmp_args_name_12, tmp_kwargs_name_12);
        Py_DECREF(tmp_kwargs_name_12);
        if (tmp_called_name_234 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 167;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_236 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$basic, (Nuitka_StringObject *)mod_consts[102]);

        if (unlikely(tmp_called_name_236 == NULL)) {
            tmp_called_name_236 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[102]);
        }

        if (tmp_called_name_236 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_234);

            exception_lineno = 167;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_1e465c63423cecf32f0c62928e893560->m_frame.f_lineno = 167;
        tmp_args_element_name_109 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_236, mod_consts[108]);
        if (tmp_args_element_name_109 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_234);

            exception_lineno = 167;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_1e465c63423cecf32f0c62928e893560->m_frame.f_lineno = 167;
        tmp_call_result_19 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_234, tmp_args_element_name_109);
        Py_DECREF(tmp_called_name_234);
        Py_DECREF(tmp_args_element_name_109);
        if (tmp_call_result_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 167;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_19);
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_called_name_237;
        PyObject *tmp_args_element_name_110;
        PyObject *tmp_annotations_2;
        tmp_called_name_237 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$basic, (Nuitka_StringObject *)mod_consts[135]);

        if (unlikely(tmp_called_name_237 == NULL)) {
            tmp_called_name_237 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[135]);
        }

        if (tmp_called_name_237 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 171;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_annotations_2 = PyDict_Copy(mod_consts[136]);


        tmp_args_element_name_110 = MAKE_FUNCTION_prompt_toolkit$key_binding$bindings$basic$$$function__2_load_basic_bindings$$$function__2_has_text_before_cursor(tmp_annotations_2);

        frame_1e465c63423cecf32f0c62928e893560->m_frame.f_lineno = 171;
        tmp_assign_source_5 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_237, tmp_args_element_name_110);
        Py_DECREF(tmp_args_element_name_110);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 171;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_has_text_before_cursor == NULL);
        var_has_text_before_cursor = tmp_assign_source_5;
    }
    {
        PyObject *tmp_called_name_238;
        PyObject *tmp_called_name_239;
        PyObject *tmp_args_name_13;
        PyObject *tmp_kwargs_name_13;
        PyObject *tmp_dict_key_14;
        PyObject *tmp_dict_value_14;
        PyObject *tmp_left_name_2;
        PyObject *tmp_right_name_2;
        PyObject *tmp_call_result_20;
        PyObject *tmp_args_element_name_111;
        PyObject *tmp_called_name_240;
        CHECK_OBJECT(var_handle);
        tmp_called_name_239 = var_handle;
        tmp_args_name_13 = mod_consts[139];
        tmp_dict_key_14 = mod_consts[111];
        CHECK_OBJECT(var_has_text_before_cursor);
        tmp_left_name_2 = var_has_text_before_cursor;
        CHECK_OBJECT(var_insert_mode);
        tmp_right_name_2 = var_insert_mode;
        tmp_dict_value_14 = BINARY_OPERATION_BITAND_OBJECT_OBJECT_OBJECT(tmp_left_name_2, tmp_right_name_2);
        if (tmp_dict_value_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 175;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_kwargs_name_13 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_kwargs_name_13, tmp_dict_key_14, tmp_dict_value_14);
        Py_DECREF(tmp_dict_value_14);
        assert(!(tmp_res != 0));
        frame_1e465c63423cecf32f0c62928e893560->m_frame.f_lineno = 175;
        tmp_called_name_238 = CALL_FUNCTION(tmp_called_name_239, tmp_args_name_13, tmp_kwargs_name_13);
        Py_DECREF(tmp_kwargs_name_13);
        if (tmp_called_name_238 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 175;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_240 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$basic, (Nuitka_StringObject *)mod_consts[102]);

        if (unlikely(tmp_called_name_240 == NULL)) {
            tmp_called_name_240 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[102]);
        }

        if (tmp_called_name_240 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_238);

            exception_lineno = 176;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_1e465c63423cecf32f0c62928e893560->m_frame.f_lineno = 176;
        tmp_args_element_name_111 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_240, mod_consts[120]);
        if (tmp_args_element_name_111 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_238);

            exception_lineno = 176;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_1e465c63423cecf32f0c62928e893560->m_frame.f_lineno = 175;
        tmp_call_result_20 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_238, tmp_args_element_name_111);
        Py_DECREF(tmp_called_name_238);
        Py_DECREF(tmp_args_element_name_111);
        if (tmp_call_result_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 175;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_20);
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_called_name_241;
        PyObject *tmp_called_name_242;
        PyObject *tmp_args_name_14;
        PyObject *tmp_kwargs_name_14;
        PyObject *tmp_dict_key_15;
        PyObject *tmp_dict_value_15;
        PyObject *tmp_left_name_3;
        PyObject *tmp_right_name_3;
        PyObject *tmp_args_element_name_112;
        PyObject *tmp_annotations_3;
        PyObject *tmp_dict_key_16;
        PyObject *tmp_dict_value_16;
        CHECK_OBJECT(var_handle);
        tmp_called_name_242 = var_handle;
        tmp_args_name_14 = mod_consts[140];
        tmp_dict_key_15 = mod_consts[111];
        if (var_insert_mode == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[141]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 179;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_left_name_3 = var_insert_mode;
        tmp_right_name_3 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$basic, (Nuitka_StringObject *)mod_consts[142]);

        if (unlikely(tmp_right_name_3 == NULL)) {
            tmp_right_name_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[142]);
        }

        if (tmp_right_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 179;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_dict_value_15 = BINARY_OPERATION_BITAND_OBJECT_OBJECT_OBJECT(tmp_left_name_3, tmp_right_name_3);
        if (tmp_dict_value_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 179;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_kwargs_name_14 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_kwargs_name_14, tmp_dict_key_15, tmp_dict_value_15);
        Py_DECREF(tmp_dict_value_15);
        assert(!(tmp_res != 0));
        frame_1e465c63423cecf32f0c62928e893560->m_frame.f_lineno = 179;
        tmp_called_name_241 = CALL_FUNCTION(tmp_called_name_242, tmp_args_name_14, tmp_kwargs_name_14);
        Py_DECREF(tmp_kwargs_name_14);
        if (tmp_called_name_241 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 179;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_dict_key_16 = mod_consts[96];
        tmp_dict_value_16 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$basic, (Nuitka_StringObject *)mod_consts[97]);

        if (unlikely(tmp_dict_value_16 == NULL)) {
            tmp_dict_value_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[97]);
        }

        if (tmp_dict_value_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_241);

            exception_lineno = 180;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_annotations_3 = _PyDict_NewPresized( 2 );
        tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_16, tmp_dict_value_16);
        assert(!(tmp_res != 0));
        tmp_dict_key_16 = mod_consts[98];
        tmp_dict_value_16 = Py_None;
        tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_16, tmp_dict_value_16);
        assert(!(tmp_res != 0));


        tmp_args_element_name_112 = MAKE_FUNCTION_prompt_toolkit$key_binding$bindings$basic$$$function__2_load_basic_bindings$$$function__3__newline(tmp_annotations_3);

        frame_1e465c63423cecf32f0c62928e893560->m_frame.f_lineno = 179;
        tmp_assign_source_6 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_241, tmp_args_element_name_112);
        Py_DECREF(tmp_called_name_241);
        Py_DECREF(tmp_args_element_name_112);
        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 179;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var__newline == NULL);
        var__newline = tmp_assign_source_6;
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_called_name_243;
        PyObject *tmp_called_name_244;
        PyObject *tmp_args_element_name_113;
        PyObject *tmp_annotations_4;
        PyObject *tmp_dict_key_17;
        PyObject *tmp_dict_value_17;
        CHECK_OBJECT(var_handle);
        tmp_called_name_244 = var_handle;
        frame_1e465c63423cecf32f0c62928e893560->m_frame.f_lineno = 186;
        tmp_called_name_243 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_244, mod_consts[15]);
        if (tmp_called_name_243 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 186;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_dict_key_17 = mod_consts[96];
        tmp_dict_value_17 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$basic, (Nuitka_StringObject *)mod_consts[97]);

        if (unlikely(tmp_dict_value_17 == NULL)) {
            tmp_dict_value_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[97]);
        }

        if (tmp_dict_value_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_243);

            exception_lineno = 187;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_annotations_4 = _PyDict_NewPresized( 2 );
        tmp_res = PyDict_SetItem(tmp_annotations_4, tmp_dict_key_17, tmp_dict_value_17);
        assert(!(tmp_res != 0));
        tmp_dict_key_17 = mod_consts[98];
        tmp_dict_value_17 = Py_None;
        tmp_res = PyDict_SetItem(tmp_annotations_4, tmp_dict_key_17, tmp_dict_value_17);
        assert(!(tmp_res != 0));


        tmp_args_element_name_113 = MAKE_FUNCTION_prompt_toolkit$key_binding$bindings$basic$$$function__2_load_basic_bindings$$$function__4__newline2(tmp_annotations_4);

        frame_1e465c63423cecf32f0c62928e893560->m_frame.f_lineno = 186;
        tmp_assign_source_7 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_243, tmp_args_element_name_113);
        Py_DECREF(tmp_called_name_243);
        Py_DECREF(tmp_args_element_name_113);
        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 186;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var__newline2 == NULL);
        var__newline2 = tmp_assign_source_7;
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_called_name_245;
        PyObject *tmp_called_name_246;
        PyObject *tmp_args_element_name_114;
        PyObject *tmp_annotations_5;
        PyObject *tmp_dict_key_18;
        PyObject *tmp_dict_value_18;
        CHECK_OBJECT(var_handle);
        tmp_called_name_246 = var_handle;
        frame_1e465c63423cecf32f0c62928e893560->m_frame.f_lineno = 197;
        tmp_called_name_245 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_246, mod_consts[62]);
        if (tmp_called_name_245 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 197;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_dict_key_18 = mod_consts[96];
        tmp_dict_value_18 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$basic, (Nuitka_StringObject *)mod_consts[97]);

        if (unlikely(tmp_dict_value_18 == NULL)) {
            tmp_dict_value_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[97]);
        }

        if (tmp_dict_value_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_245);

            exception_lineno = 198;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_annotations_5 = _PyDict_NewPresized( 2 );
        tmp_res = PyDict_SetItem(tmp_annotations_5, tmp_dict_key_18, tmp_dict_value_18);
        assert(!(tmp_res != 0));
        tmp_dict_key_18 = mod_consts[98];
        tmp_dict_value_18 = Py_None;
        tmp_res = PyDict_SetItem(tmp_annotations_5, tmp_dict_key_18, tmp_dict_value_18);
        assert(!(tmp_res != 0));


        tmp_args_element_name_114 = MAKE_FUNCTION_prompt_toolkit$key_binding$bindings$basic$$$function__2_load_basic_bindings$$$function__5__go_up(tmp_annotations_5);

        frame_1e465c63423cecf32f0c62928e893560->m_frame.f_lineno = 197;
        tmp_assign_source_8 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_245, tmp_args_element_name_114);
        Py_DECREF(tmp_called_name_245);
        Py_DECREF(tmp_args_element_name_114);
        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 197;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var__go_up == NULL);
        var__go_up = tmp_assign_source_8;
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_called_name_247;
        PyObject *tmp_called_name_248;
        PyObject *tmp_args_element_name_115;
        PyObject *tmp_annotations_6;
        PyObject *tmp_dict_key_19;
        PyObject *tmp_dict_value_19;
        CHECK_OBJECT(var_handle);
        tmp_called_name_248 = var_handle;
        frame_1e465c63423cecf32f0c62928e893560->m_frame.f_lineno = 201;
        tmp_called_name_247 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_248, mod_consts[63]);
        if (tmp_called_name_247 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 201;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_dict_key_19 = mod_consts[96];
        tmp_dict_value_19 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$basic, (Nuitka_StringObject *)mod_consts[97]);

        if (unlikely(tmp_dict_value_19 == NULL)) {
            tmp_dict_value_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[97]);
        }

        if (tmp_dict_value_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_247);

            exception_lineno = 202;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_annotations_6 = _PyDict_NewPresized( 2 );
        tmp_res = PyDict_SetItem(tmp_annotations_6, tmp_dict_key_19, tmp_dict_value_19);
        assert(!(tmp_res != 0));
        tmp_dict_key_19 = mod_consts[98];
        tmp_dict_value_19 = Py_None;
        tmp_res = PyDict_SetItem(tmp_annotations_6, tmp_dict_key_19, tmp_dict_value_19);
        assert(!(tmp_res != 0));


        tmp_args_element_name_115 = MAKE_FUNCTION_prompt_toolkit$key_binding$bindings$basic$$$function__2_load_basic_bindings$$$function__6__go_down(tmp_annotations_6);

        frame_1e465c63423cecf32f0c62928e893560->m_frame.f_lineno = 201;
        tmp_assign_source_9 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_247, tmp_args_element_name_115);
        Py_DECREF(tmp_called_name_247);
        Py_DECREF(tmp_args_element_name_115);
        if (tmp_assign_source_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 201;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var__go_down == NULL);
        var__go_down = tmp_assign_source_9;
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_called_name_249;
        PyObject *tmp_called_name_250;
        PyObject *tmp_args_name_15;
        PyObject *tmp_kwargs_name_15;
        PyObject *tmp_dict_key_20;
        PyObject *tmp_dict_value_20;
        PyObject *tmp_args_element_name_116;
        PyObject *tmp_annotations_7;
        PyObject *tmp_dict_key_21;
        PyObject *tmp_dict_value_21;
        CHECK_OBJECT(var_handle);
        tmp_called_name_250 = var_handle;
        tmp_args_name_15 = mod_consts[119];
        tmp_dict_key_20 = mod_consts[111];
        tmp_dict_value_20 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$basic, (Nuitka_StringObject *)mod_consts[133]);

        if (unlikely(tmp_dict_value_20 == NULL)) {
            tmp_dict_value_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[133]);
        }

        if (tmp_dict_value_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 205;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_kwargs_name_15 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_kwargs_name_15, tmp_dict_key_20, tmp_dict_value_20);
        assert(!(tmp_res != 0));
        frame_1e465c63423cecf32f0c62928e893560->m_frame.f_lineno = 205;
        tmp_called_name_249 = CALL_FUNCTION(tmp_called_name_250, tmp_args_name_15, tmp_kwargs_name_15);
        Py_DECREF(tmp_kwargs_name_15);
        if (tmp_called_name_249 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 205;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_dict_key_21 = mod_consts[96];
        tmp_dict_value_21 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$basic, (Nuitka_StringObject *)mod_consts[97]);

        if (unlikely(tmp_dict_value_21 == NULL)) {
            tmp_dict_value_21 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[97]);
        }

        if (tmp_dict_value_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_249);

            exception_lineno = 206;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_annotations_7 = _PyDict_NewPresized( 2 );
        tmp_res = PyDict_SetItem(tmp_annotations_7, tmp_dict_key_21, tmp_dict_value_21);
        assert(!(tmp_res != 0));
        tmp_dict_key_21 = mod_consts[98];
        tmp_dict_value_21 = Py_None;
        tmp_res = PyDict_SetItem(tmp_annotations_7, tmp_dict_key_21, tmp_dict_value_21);
        assert(!(tmp_res != 0));


        tmp_args_element_name_116 = MAKE_FUNCTION_prompt_toolkit$key_binding$bindings$basic$$$function__2_load_basic_bindings$$$function__7__cut(tmp_annotations_7);

        frame_1e465c63423cecf32f0c62928e893560->m_frame.f_lineno = 205;
        tmp_assign_source_10 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_249, tmp_args_element_name_116);
        Py_DECREF(tmp_called_name_249);
        Py_DECREF(tmp_args_element_name_116);
        if (tmp_assign_source_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 205;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var__cut == NULL);
        var__cut = tmp_assign_source_10;
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_called_name_251;
        PyObject *tmp_called_name_252;
        PyObject *tmp_args_element_name_117;
        PyObject *tmp_annotations_8;
        PyObject *tmp_dict_key_22;
        PyObject *tmp_dict_value_22;
        CHECK_OBJECT(var_handle);
        tmp_called_name_252 = var_handle;
        frame_1e465c63423cecf32f0c62928e893560->m_frame.f_lineno = 212;
        tmp_called_name_251 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_252, mod_consts[31]);
        if (tmp_called_name_251 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 212;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_dict_key_22 = mod_consts[96];
        tmp_dict_value_22 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$basic, (Nuitka_StringObject *)mod_consts[97]);

        if (unlikely(tmp_dict_value_22 == NULL)) {
            tmp_dict_value_22 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[97]);
        }

        if (tmp_dict_value_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_251);

            exception_lineno = 213;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_annotations_8 = _PyDict_NewPresized( 2 );
        tmp_res = PyDict_SetItem(tmp_annotations_8, tmp_dict_key_22, tmp_dict_value_22);
        assert(!(tmp_res != 0));
        tmp_dict_key_22 = mod_consts[98];
        tmp_dict_value_22 = Py_None;
        tmp_res = PyDict_SetItem(tmp_annotations_8, tmp_dict_key_22, tmp_dict_value_22);
        assert(!(tmp_res != 0));


        tmp_args_element_name_117 = MAKE_FUNCTION_prompt_toolkit$key_binding$bindings$basic$$$function__2_load_basic_bindings$$$function__8__insert_ctrl_z(tmp_annotations_8);

        frame_1e465c63423cecf32f0c62928e893560->m_frame.f_lineno = 212;
        tmp_assign_source_11 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_251, tmp_args_element_name_117);
        Py_DECREF(tmp_called_name_251);
        Py_DECREF(tmp_args_element_name_117);
        if (tmp_assign_source_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 212;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var__insert_ctrl_z == NULL);
        var__insert_ctrl_z = tmp_assign_source_11;
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_called_name_253;
        PyObject *tmp_called_name_254;
        PyObject *tmp_args_element_name_118;
        PyObject *tmp_expression_name_4;
        PyObject *tmp_args_element_name_119;
        PyObject *tmp_annotations_9;
        PyObject *tmp_dict_key_23;
        PyObject *tmp_dict_value_23;
        CHECK_OBJECT(var_handle);
        tmp_called_name_254 = var_handle;
        tmp_expression_name_4 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$basic, (Nuitka_StringObject *)mod_consts[94]);

        if (unlikely(tmp_expression_name_4 == NULL)) {
            tmp_expression_name_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[94]);
        }

        if (tmp_expression_name_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 225;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_118 = LOOKUP_ATTRIBUTE(tmp_expression_name_4, mod_consts[158]);
        if (tmp_args_element_name_118 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 225;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_1e465c63423cecf32f0c62928e893560->m_frame.f_lineno = 225;
        tmp_called_name_253 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_254, tmp_args_element_name_118);
        Py_DECREF(tmp_args_element_name_118);
        if (tmp_called_name_253 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 225;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_dict_key_23 = mod_consts[96];
        tmp_dict_value_23 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$basic, (Nuitka_StringObject *)mod_consts[97]);

        if (unlikely(tmp_dict_value_23 == NULL)) {
            tmp_dict_value_23 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[97]);
        }

        if (tmp_dict_value_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_253);

            exception_lineno = 226;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_annotations_9 = _PyDict_NewPresized( 2 );
        tmp_res = PyDict_SetItem(tmp_annotations_9, tmp_dict_key_23, tmp_dict_value_23);
        assert(!(tmp_res != 0));
        tmp_dict_key_23 = mod_consts[98];
        tmp_dict_value_23 = Py_None;
        tmp_res = PyDict_SetItem(tmp_annotations_9, tmp_dict_key_23, tmp_dict_value_23);
        assert(!(tmp_res != 0));


        tmp_args_element_name_119 = MAKE_FUNCTION_prompt_toolkit$key_binding$bindings$basic$$$function__2_load_basic_bindings$$$function__9__paste(tmp_annotations_9);

        frame_1e465c63423cecf32f0c62928e893560->m_frame.f_lineno = 225;
        tmp_assign_source_12 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_253, tmp_args_element_name_119);
        Py_DECREF(tmp_called_name_253);
        Py_DECREF(tmp_args_element_name_119);
        if (tmp_assign_source_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 225;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var__paste == NULL);
        var__paste = tmp_assign_source_12;
    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_called_name_255;
        PyObject *tmp_args_element_name_120;
        PyObject *tmp_annotations_10;
        tmp_called_name_255 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$basic, (Nuitka_StringObject *)mod_consts[135]);

        if (unlikely(tmp_called_name_255 == NULL)) {
            tmp_called_name_255 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[135]);
        }

        if (tmp_called_name_255 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 240;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_annotations_10 = PyDict_Copy(mod_consts[136]);


        tmp_args_element_name_120 = MAKE_FUNCTION_prompt_toolkit$key_binding$bindings$basic$$$function__2_load_basic_bindings$$$function__10_in_quoted_insert(tmp_annotations_10);

        frame_1e465c63423cecf32f0c62928e893560->m_frame.f_lineno = 240;
        tmp_assign_source_13 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_255, tmp_args_element_name_120);
        Py_DECREF(tmp_args_element_name_120);
        if (tmp_assign_source_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 240;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_in_quoted_insert == NULL);
        var_in_quoted_insert = tmp_assign_source_13;
    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_called_name_256;
        PyObject *tmp_called_name_257;
        PyObject *tmp_args_name_16;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_expression_name_5;
        PyObject *tmp_kwargs_name_16;
        PyObject *tmp_dict_key_24;
        PyObject *tmp_dict_value_24;
        PyObject *tmp_args_element_name_121;
        PyObject *tmp_annotations_11;
        PyObject *tmp_dict_key_25;
        PyObject *tmp_dict_value_25;
        CHECK_OBJECT(var_handle);
        tmp_called_name_257 = var_handle;
        tmp_expression_name_5 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$basic, (Nuitka_StringObject *)mod_consts[94]);

        if (unlikely(tmp_expression_name_5 == NULL)) {
            tmp_expression_name_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[94]);
        }

        if (tmp_expression_name_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 244;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_5, mod_consts[122]);
        if (tmp_tuple_element_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 244;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_name_16 = PyTuple_New(1);
        PyTuple_SET_ITEM(tmp_args_name_16, 0, tmp_tuple_element_2);
        tmp_dict_key_24 = mod_consts[111];
        CHECK_OBJECT(var_in_quoted_insert);
        tmp_dict_value_24 = var_in_quoted_insert;
        tmp_kwargs_name_16 = _PyDict_NewPresized( 2 );
        tmp_res = PyDict_SetItem(tmp_kwargs_name_16, tmp_dict_key_24, tmp_dict_value_24);
        assert(!(tmp_res != 0));
        tmp_dict_key_24 = mod_consts[164];
        tmp_dict_value_24 = Py_True;
        tmp_res = PyDict_SetItem(tmp_kwargs_name_16, tmp_dict_key_24, tmp_dict_value_24);
        assert(!(tmp_res != 0));
        frame_1e465c63423cecf32f0c62928e893560->m_frame.f_lineno = 244;
        tmp_called_name_256 = CALL_FUNCTION(tmp_called_name_257, tmp_args_name_16, tmp_kwargs_name_16);
        Py_DECREF(tmp_args_name_16);
        Py_DECREF(tmp_kwargs_name_16);
        if (tmp_called_name_256 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 244;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_dict_key_25 = mod_consts[96];
        tmp_dict_value_25 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$basic, (Nuitka_StringObject *)mod_consts[97]);

        if (unlikely(tmp_dict_value_25 == NULL)) {
            tmp_dict_value_25 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[97]);
        }

        if (tmp_dict_value_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_256);

            exception_lineno = 245;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_annotations_11 = _PyDict_NewPresized( 2 );
        tmp_res = PyDict_SetItem(tmp_annotations_11, tmp_dict_key_25, tmp_dict_value_25);
        assert(!(tmp_res != 0));
        tmp_dict_key_25 = mod_consts[98];
        tmp_dict_value_25 = Py_None;
        tmp_res = PyDict_SetItem(tmp_annotations_11, tmp_dict_key_25, tmp_dict_value_25);
        assert(!(tmp_res != 0));


        tmp_args_element_name_121 = MAKE_FUNCTION_prompt_toolkit$key_binding$bindings$basic$$$function__2_load_basic_bindings$$$function__11__insert_text(tmp_annotations_11);

        frame_1e465c63423cecf32f0c62928e893560->m_frame.f_lineno = 244;
        tmp_assign_source_14 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_256, tmp_args_element_name_121);
        Py_DECREF(tmp_called_name_256);
        Py_DECREF(tmp_args_element_name_121);
        if (tmp_assign_source_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 244;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var__insert_text == NULL);
        var__insert_text = tmp_assign_source_14;
    }
    if (var_key_bindings == NULL) {

        FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[168]);
        exception_tb = NULL;
        NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
        CHAIN_EXCEPTION(exception_value);

        exception_lineno = 252;
        type_description_1 = "oooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_return_value = var_key_bindings;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_1e465c63423cecf32f0c62928e893560);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_1e465c63423cecf32f0c62928e893560);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_1e465c63423cecf32f0c62928e893560);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_1e465c63423cecf32f0c62928e893560, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_1e465c63423cecf32f0c62928e893560->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_1e465c63423cecf32f0c62928e893560, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_1e465c63423cecf32f0c62928e893560,
        type_description_1,
        var_key_bindings,
        var_insert_mode,
        var_handle,
        var__ignore,
        var_has_text_before_cursor,
        var__newline,
        var__newline2,
        var__go_up,
        var__go_down,
        var__cut,
        var__insert_ctrl_z,
        var__paste,
        var_in_quoted_insert,
        var__insert_text
    );


    // Release cached frame if used for exception.
    if (frame_1e465c63423cecf32f0c62928e893560 == cache_frame_1e465c63423cecf32f0c62928e893560) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_1e465c63423cecf32f0c62928e893560);
        cache_frame_1e465c63423cecf32f0c62928e893560 = NULL;
    }

    assertFrameObject(frame_1e465c63423cecf32f0c62928e893560);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(var_key_bindings);
    var_key_bindings = NULL;
    Py_XDECREF(var_insert_mode);
    var_insert_mode = NULL;
    CHECK_OBJECT(var_handle);
    Py_DECREF(var_handle);
    var_handle = NULL;
    CHECK_OBJECT(var__ignore);
    Py_DECREF(var__ignore);
    var__ignore = NULL;
    Py_XDECREF(var_has_text_before_cursor);
    var_has_text_before_cursor = NULL;
    CHECK_OBJECT(var__newline);
    Py_DECREF(var__newline);
    var__newline = NULL;
    CHECK_OBJECT(var__newline2);
    Py_DECREF(var__newline2);
    var__newline2 = NULL;
    CHECK_OBJECT(var__go_up);
    Py_DECREF(var__go_up);
    var__go_up = NULL;
    CHECK_OBJECT(var__go_down);
    Py_DECREF(var__go_down);
    var__go_down = NULL;
    CHECK_OBJECT(var__cut);
    Py_DECREF(var__cut);
    var__cut = NULL;
    CHECK_OBJECT(var__insert_ctrl_z);
    Py_DECREF(var__insert_ctrl_z);
    var__insert_ctrl_z = NULL;
    CHECK_OBJECT(var__paste);
    Py_DECREF(var__paste);
    var__paste = NULL;
    CHECK_OBJECT(var_in_quoted_insert);
    Py_DECREF(var_in_quoted_insert);
    var_in_quoted_insert = NULL;
    CHECK_OBJECT(var__insert_text);
    Py_DECREF(var__insert_text);
    var__insert_text = NULL;
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

    Py_XDECREF(var_key_bindings);
    var_key_bindings = NULL;
    Py_XDECREF(var_insert_mode);
    var_insert_mode = NULL;
    Py_XDECREF(var_handle);
    var_handle = NULL;
    Py_XDECREF(var__ignore);
    var__ignore = NULL;
    Py_XDECREF(var_has_text_before_cursor);
    var_has_text_before_cursor = NULL;
    Py_XDECREF(var__newline);
    var__newline = NULL;
    Py_XDECREF(var__newline2);
    var__newline2 = NULL;
    Py_XDECREF(var__go_up);
    var__go_up = NULL;
    Py_XDECREF(var__go_down);
    var__go_down = NULL;
    Py_XDECREF(var__cut);
    var__cut = NULL;
    Py_XDECREF(var__insert_ctrl_z);
    var__insert_ctrl_z = NULL;
    Py_XDECREF(var__paste);
    var__paste = NULL;
    Py_XDECREF(var_in_quoted_insert);
    var_in_quoted_insert = NULL;
    Py_XDECREF(var__insert_text);
    var__insert_text = NULL;
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


static PyObject *impl_prompt_toolkit$key_binding$bindings$basic$$$function__2_load_basic_bindings$$$function__1__ignore(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_event = python_pars[0];
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    // Tried code:
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(par_event);
    Py_DECREF(par_event);
    par_event = NULL;
    goto function_return_exit;
    // End of try:
    CHECK_OBJECT(par_event);
    Py_DECREF(par_event);
    par_event = NULL;

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


static PyObject *impl_prompt_toolkit$key_binding$bindings$basic$$$function__2_load_basic_bindings$$$function__2_has_text_before_cursor(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_FrameObject *frame_dac7b7d7834ee4f3515fcd689fb6d90d;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_dac7b7d7834ee4f3515fcd689fb6d90d = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_dac7b7d7834ee4f3515fcd689fb6d90d)) {
        Py_XDECREF(cache_frame_dac7b7d7834ee4f3515fcd689fb6d90d);

#if _DEBUG_REFCOUNTS
        if (cache_frame_dac7b7d7834ee4f3515fcd689fb6d90d == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_dac7b7d7834ee4f3515fcd689fb6d90d = MAKE_FUNCTION_FRAME(codeobj_dac7b7d7834ee4f3515fcd689fb6d90d, module_prompt_toolkit$key_binding$bindings$basic, 0);
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_dac7b7d7834ee4f3515fcd689fb6d90d->m_type_description == NULL);
    frame_dac7b7d7834ee4f3515fcd689fb6d90d = cache_frame_dac7b7d7834ee4f3515fcd689fb6d90d;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_dac7b7d7834ee4f3515fcd689fb6d90d);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_dac7b7d7834ee4f3515fcd689fb6d90d) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_value_name_1;
        PyObject *tmp_expression_name_1;
        PyObject *tmp_expression_name_2;
        PyObject *tmp_called_name_1;
        tmp_called_name_1 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$basic, (Nuitka_StringObject *)mod_consts[169]);

        if (unlikely(tmp_called_name_1 == NULL)) {
            tmp_called_name_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[169]);
        }

        if (tmp_called_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 173;

            goto frame_exception_exit_1;
        }
        frame_dac7b7d7834ee4f3515fcd689fb6d90d->m_frame.f_lineno = 173;
        tmp_expression_name_2 = CALL_FUNCTION_NO_ARGS(tmp_called_name_1);
        if (tmp_expression_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 173;

            goto frame_exception_exit_1;
        }
        tmp_expression_name_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_2, mod_consts[170]);
        Py_DECREF(tmp_expression_name_2);
        if (tmp_expression_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 173;

            goto frame_exception_exit_1;
        }
        tmp_value_name_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_1, mod_consts[171]);
        Py_DECREF(tmp_expression_name_1);
        if (tmp_value_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 173;

            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_value_name_1);
        Py_DECREF(tmp_value_name_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 173;

            goto frame_exception_exit_1;
        }
        tmp_return_value = (tmp_res != 0) ? Py_True : Py_False;
        Py_INCREF(tmp_return_value);
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_dac7b7d7834ee4f3515fcd689fb6d90d);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_dac7b7d7834ee4f3515fcd689fb6d90d);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_dac7b7d7834ee4f3515fcd689fb6d90d);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_dac7b7d7834ee4f3515fcd689fb6d90d, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_dac7b7d7834ee4f3515fcd689fb6d90d->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_dac7b7d7834ee4f3515fcd689fb6d90d, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_dac7b7d7834ee4f3515fcd689fb6d90d,
        type_description_1
    );


    // Release cached frame if used for exception.
    if (frame_dac7b7d7834ee4f3515fcd689fb6d90d == cache_frame_dac7b7d7834ee4f3515fcd689fb6d90d) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_dac7b7d7834ee4f3515fcd689fb6d90d);
        cache_frame_dac7b7d7834ee4f3515fcd689fb6d90d = NULL;
    }

    assertFrameObject(frame_dac7b7d7834ee4f3515fcd689fb6d90d);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

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


static PyObject *impl_prompt_toolkit$key_binding$bindings$basic$$$function__2_load_basic_bindings$$$function__3__newline(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_event = python_pars[0];
    struct Nuitka_FrameObject *frame_145ad7c3c902d3f9fb5afc19ca8741ce;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_145ad7c3c902d3f9fb5afc19ca8741ce = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_145ad7c3c902d3f9fb5afc19ca8741ce)) {
        Py_XDECREF(cache_frame_145ad7c3c902d3f9fb5afc19ca8741ce);

#if _DEBUG_REFCOUNTS
        if (cache_frame_145ad7c3c902d3f9fb5afc19ca8741ce == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_145ad7c3c902d3f9fb5afc19ca8741ce = MAKE_FUNCTION_FRAME(codeobj_145ad7c3c902d3f9fb5afc19ca8741ce, module_prompt_toolkit$key_binding$bindings$basic, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_145ad7c3c902d3f9fb5afc19ca8741ce->m_type_description == NULL);
    frame_145ad7c3c902d3f9fb5afc19ca8741ce = cache_frame_145ad7c3c902d3f9fb5afc19ca8741ce;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_145ad7c3c902d3f9fb5afc19ca8741ce);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_145ad7c3c902d3f9fb5afc19ca8741ce) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_expression_name_1;
        PyObject *tmp_expression_name_2;
        PyObject *tmp_call_result_1;
        PyObject *tmp_kwargs_name_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_operand_name_1;
        PyObject *tmp_called_name_2;
        CHECK_OBJECT(par_event);
        tmp_expression_name_2 = par_event;
        tmp_expression_name_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_2, mod_consts[170]);
        if (tmp_expression_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 184;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_called_name_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_1, mod_consts[172]);
        Py_DECREF(tmp_expression_name_1);
        if (tmp_called_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 184;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_dict_key_1 = mod_consts[173];
        tmp_called_name_2 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$basic, (Nuitka_StringObject *)mod_consts[174]);

        if (unlikely(tmp_called_name_2 == NULL)) {
            tmp_called_name_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[174]);
        }

        if (tmp_called_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_1);

            exception_lineno = 184;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_145ad7c3c902d3f9fb5afc19ca8741ce->m_frame.f_lineno = 184;
        tmp_operand_name_1 = CALL_FUNCTION_NO_ARGS(tmp_called_name_2);
        if (tmp_operand_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_1);

            exception_lineno = 184;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_name_1);
        Py_DECREF(tmp_operand_name_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_1);

            exception_lineno = 184;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_dict_value_1 = (tmp_res == 0) ? Py_True : Py_False;
        tmp_kwargs_name_1 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_kwargs_name_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        frame_145ad7c3c902d3f9fb5afc19ca8741ce->m_frame.f_lineno = 184;
        tmp_call_result_1 = CALL_FUNCTION_WITH_KEYARGS(tmp_called_name_1, tmp_kwargs_name_1);
        Py_DECREF(tmp_called_name_1);
        Py_DECREF(tmp_kwargs_name_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 184;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_145ad7c3c902d3f9fb5afc19ca8741ce);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_145ad7c3c902d3f9fb5afc19ca8741ce);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_145ad7c3c902d3f9fb5afc19ca8741ce, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_145ad7c3c902d3f9fb5afc19ca8741ce->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_145ad7c3c902d3f9fb5afc19ca8741ce, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_145ad7c3c902d3f9fb5afc19ca8741ce,
        type_description_1,
        par_event
    );


    // Release cached frame if used for exception.
    if (frame_145ad7c3c902d3f9fb5afc19ca8741ce == cache_frame_145ad7c3c902d3f9fb5afc19ca8741ce) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_145ad7c3c902d3f9fb5afc19ca8741ce);
        cache_frame_145ad7c3c902d3f9fb5afc19ca8741ce = NULL;
    }

    assertFrameObject(frame_145ad7c3c902d3f9fb5afc19ca8741ce);

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
    Py_XDECREF(par_event);
    par_event = NULL;
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

    Py_XDECREF(par_event);
    par_event = NULL;
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


static PyObject *impl_prompt_toolkit$key_binding$bindings$basic$$$function__2_load_basic_bindings$$$function__4__newline2(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_event = python_pars[0];
    struct Nuitka_FrameObject *frame_c5cbeacfcb0e7cda856321ff168562fa;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_c5cbeacfcb0e7cda856321ff168562fa = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_c5cbeacfcb0e7cda856321ff168562fa)) {
        Py_XDECREF(cache_frame_c5cbeacfcb0e7cda856321ff168562fa);

#if _DEBUG_REFCOUNTS
        if (cache_frame_c5cbeacfcb0e7cda856321ff168562fa == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_c5cbeacfcb0e7cda856321ff168562fa = MAKE_FUNCTION_FRAME(codeobj_c5cbeacfcb0e7cda856321ff168562fa, module_prompt_toolkit$key_binding$bindings$basic, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_c5cbeacfcb0e7cda856321ff168562fa->m_type_description == NULL);
    frame_c5cbeacfcb0e7cda856321ff168562fa = cache_frame_c5cbeacfcb0e7cda856321ff168562fa;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_c5cbeacfcb0e7cda856321ff168562fa);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_c5cbeacfcb0e7cda856321ff168562fa) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_expression_name_1;
        PyObject *tmp_expression_name_2;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_name_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_called_name_2;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_expression_name_3;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_kwargs_name_1;
        CHECK_OBJECT(par_event);
        tmp_expression_name_2 = par_event;
        tmp_expression_name_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_2, mod_consts[175]);
        if (tmp_expression_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 193;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_called_name_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_1, mod_consts[176]);
        Py_DECREF(tmp_expression_name_1);
        if (tmp_called_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 193;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_called_name_2 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$basic, (Nuitka_StringObject *)mod_consts[177]);

        if (unlikely(tmp_called_name_2 == NULL)) {
            tmp_called_name_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[177]);
        }

        if (tmp_called_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_1);

            exception_lineno = 193;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_expression_name_3 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$basic, (Nuitka_StringObject *)mod_consts[94]);

        if (unlikely(tmp_expression_name_3 == NULL)) {
            tmp_expression_name_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[94]);
        }

        if (tmp_expression_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_1);

            exception_lineno = 193;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_3, mod_consts[178]);
        if (tmp_args_element_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_1);

            exception_lineno = 193;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_2 = mod_consts[179];
        frame_c5cbeacfcb0e7cda856321ff168562fa->m_frame.f_lineno = 193;
        {
            PyObject *call_args[] = {tmp_args_element_name_1, tmp_args_element_name_2};
            tmp_tuple_element_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_2, call_args);
        }

        Py_DECREF(tmp_args_element_name_1);
        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_1);

            exception_lineno = 193;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_args_name_1 = PyTuple_New(1);
        PyTuple_SET_ITEM(tmp_args_name_1, 0, tmp_tuple_element_1);
        tmp_kwargs_name_1 = PyDict_Copy(mod_consts[180]);
        frame_c5cbeacfcb0e7cda856321ff168562fa->m_frame.f_lineno = 193;
        tmp_call_result_1 = CALL_FUNCTION(tmp_called_name_1, tmp_args_name_1, tmp_kwargs_name_1);
        Py_DECREF(tmp_called_name_1);
        Py_DECREF(tmp_args_name_1);
        Py_DECREF(tmp_kwargs_name_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 193;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_c5cbeacfcb0e7cda856321ff168562fa);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_c5cbeacfcb0e7cda856321ff168562fa);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_c5cbeacfcb0e7cda856321ff168562fa, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_c5cbeacfcb0e7cda856321ff168562fa->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_c5cbeacfcb0e7cda856321ff168562fa, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_c5cbeacfcb0e7cda856321ff168562fa,
        type_description_1,
        par_event
    );


    // Release cached frame if used for exception.
    if (frame_c5cbeacfcb0e7cda856321ff168562fa == cache_frame_c5cbeacfcb0e7cda856321ff168562fa) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_c5cbeacfcb0e7cda856321ff168562fa);
        cache_frame_c5cbeacfcb0e7cda856321ff168562fa = NULL;
    }

    assertFrameObject(frame_c5cbeacfcb0e7cda856321ff168562fa);

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
    Py_XDECREF(par_event);
    par_event = NULL;
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

    Py_XDECREF(par_event);
    par_event = NULL;
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


static PyObject *impl_prompt_toolkit$key_binding$bindings$basic$$$function__2_load_basic_bindings$$$function__5__go_up(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_event = python_pars[0];
    struct Nuitka_FrameObject *frame_ea9e47cada5751f82e3ee6b2350bdc80;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_ea9e47cada5751f82e3ee6b2350bdc80 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_ea9e47cada5751f82e3ee6b2350bdc80)) {
        Py_XDECREF(cache_frame_ea9e47cada5751f82e3ee6b2350bdc80);

#if _DEBUG_REFCOUNTS
        if (cache_frame_ea9e47cada5751f82e3ee6b2350bdc80 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_ea9e47cada5751f82e3ee6b2350bdc80 = MAKE_FUNCTION_FRAME(codeobj_ea9e47cada5751f82e3ee6b2350bdc80, module_prompt_toolkit$key_binding$bindings$basic, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_ea9e47cada5751f82e3ee6b2350bdc80->m_type_description == NULL);
    frame_ea9e47cada5751f82e3ee6b2350bdc80 = cache_frame_ea9e47cada5751f82e3ee6b2350bdc80;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_ea9e47cada5751f82e3ee6b2350bdc80);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_ea9e47cada5751f82e3ee6b2350bdc80) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_expression_name_1;
        PyObject *tmp_expression_name_2;
        PyObject *tmp_call_result_1;
        PyObject *tmp_kwargs_name_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_expression_name_3;
        CHECK_OBJECT(par_event);
        tmp_expression_name_2 = par_event;
        tmp_expression_name_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_2, mod_consts[170]);
        if (tmp_expression_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 199;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_called_name_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_1, mod_consts[181]);
        Py_DECREF(tmp_expression_name_1);
        if (tmp_called_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 199;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_dict_key_1 = mod_consts[182];
        if (par_event == NULL) {
            Py_DECREF(tmp_called_name_1);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[96]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 199;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_3 = par_event;
        tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_3, mod_consts[183]);
        if (tmp_dict_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_1);

            exception_lineno = 199;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_kwargs_name_1 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_kwargs_name_1, tmp_dict_key_1, tmp_dict_value_1);
        Py_DECREF(tmp_dict_value_1);
        assert(!(tmp_res != 0));
        frame_ea9e47cada5751f82e3ee6b2350bdc80->m_frame.f_lineno = 199;
        tmp_call_result_1 = CALL_FUNCTION_WITH_KEYARGS(tmp_called_name_1, tmp_kwargs_name_1);
        Py_DECREF(tmp_called_name_1);
        Py_DECREF(tmp_kwargs_name_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 199;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_ea9e47cada5751f82e3ee6b2350bdc80);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_ea9e47cada5751f82e3ee6b2350bdc80);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_ea9e47cada5751f82e3ee6b2350bdc80, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_ea9e47cada5751f82e3ee6b2350bdc80->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_ea9e47cada5751f82e3ee6b2350bdc80, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_ea9e47cada5751f82e3ee6b2350bdc80,
        type_description_1,
        par_event
    );


    // Release cached frame if used for exception.
    if (frame_ea9e47cada5751f82e3ee6b2350bdc80 == cache_frame_ea9e47cada5751f82e3ee6b2350bdc80) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_ea9e47cada5751f82e3ee6b2350bdc80);
        cache_frame_ea9e47cada5751f82e3ee6b2350bdc80 = NULL;
    }

    assertFrameObject(frame_ea9e47cada5751f82e3ee6b2350bdc80);

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
    Py_XDECREF(par_event);
    par_event = NULL;
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

    Py_XDECREF(par_event);
    par_event = NULL;
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


static PyObject *impl_prompt_toolkit$key_binding$bindings$basic$$$function__2_load_basic_bindings$$$function__6__go_down(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_event = python_pars[0];
    struct Nuitka_FrameObject *frame_b02289f2f7db061b42a6667a68fb6743;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_b02289f2f7db061b42a6667a68fb6743 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_b02289f2f7db061b42a6667a68fb6743)) {
        Py_XDECREF(cache_frame_b02289f2f7db061b42a6667a68fb6743);

#if _DEBUG_REFCOUNTS
        if (cache_frame_b02289f2f7db061b42a6667a68fb6743 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_b02289f2f7db061b42a6667a68fb6743 = MAKE_FUNCTION_FRAME(codeobj_b02289f2f7db061b42a6667a68fb6743, module_prompt_toolkit$key_binding$bindings$basic, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_b02289f2f7db061b42a6667a68fb6743->m_type_description == NULL);
    frame_b02289f2f7db061b42a6667a68fb6743 = cache_frame_b02289f2f7db061b42a6667a68fb6743;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_b02289f2f7db061b42a6667a68fb6743);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_b02289f2f7db061b42a6667a68fb6743) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_expression_name_1;
        PyObject *tmp_expression_name_2;
        PyObject *tmp_call_result_1;
        PyObject *tmp_kwargs_name_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_expression_name_3;
        CHECK_OBJECT(par_event);
        tmp_expression_name_2 = par_event;
        tmp_expression_name_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_2, mod_consts[170]);
        if (tmp_expression_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 203;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_called_name_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_1, mod_consts[184]);
        Py_DECREF(tmp_expression_name_1);
        if (tmp_called_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 203;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_dict_key_1 = mod_consts[182];
        if (par_event == NULL) {
            Py_DECREF(tmp_called_name_1);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[96]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 203;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_3 = par_event;
        tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_3, mod_consts[183]);
        if (tmp_dict_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_1);

            exception_lineno = 203;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_kwargs_name_1 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_kwargs_name_1, tmp_dict_key_1, tmp_dict_value_1);
        Py_DECREF(tmp_dict_value_1);
        assert(!(tmp_res != 0));
        frame_b02289f2f7db061b42a6667a68fb6743->m_frame.f_lineno = 203;
        tmp_call_result_1 = CALL_FUNCTION_WITH_KEYARGS(tmp_called_name_1, tmp_kwargs_name_1);
        Py_DECREF(tmp_called_name_1);
        Py_DECREF(tmp_kwargs_name_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 203;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_b02289f2f7db061b42a6667a68fb6743);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_b02289f2f7db061b42a6667a68fb6743);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_b02289f2f7db061b42a6667a68fb6743, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_b02289f2f7db061b42a6667a68fb6743->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_b02289f2f7db061b42a6667a68fb6743, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_b02289f2f7db061b42a6667a68fb6743,
        type_description_1,
        par_event
    );


    // Release cached frame if used for exception.
    if (frame_b02289f2f7db061b42a6667a68fb6743 == cache_frame_b02289f2f7db061b42a6667a68fb6743) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_b02289f2f7db061b42a6667a68fb6743);
        cache_frame_b02289f2f7db061b42a6667a68fb6743 = NULL;
    }

    assertFrameObject(frame_b02289f2f7db061b42a6667a68fb6743);

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
    Py_XDECREF(par_event);
    par_event = NULL;
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

    Py_XDECREF(par_event);
    par_event = NULL;
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


static PyObject *impl_prompt_toolkit$key_binding$bindings$basic$$$function__2_load_basic_bindings$$$function__7__cut(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_event = python_pars[0];
    PyObject *var_data = NULL;
    struct Nuitka_FrameObject *frame_2f6a18f23b670947eef11039226eb700;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_2f6a18f23b670947eef11039226eb700 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_2f6a18f23b670947eef11039226eb700)) {
        Py_XDECREF(cache_frame_2f6a18f23b670947eef11039226eb700);

#if _DEBUG_REFCOUNTS
        if (cache_frame_2f6a18f23b670947eef11039226eb700 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_2f6a18f23b670947eef11039226eb700 = MAKE_FUNCTION_FRAME(codeobj_2f6a18f23b670947eef11039226eb700, module_prompt_toolkit$key_binding$bindings$basic, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_2f6a18f23b670947eef11039226eb700->m_type_description == NULL);
    frame_2f6a18f23b670947eef11039226eb700 = cache_frame_2f6a18f23b670947eef11039226eb700;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_2f6a18f23b670947eef11039226eb700);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_2f6a18f23b670947eef11039226eb700) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_name_1;
        CHECK_OBJECT(par_event);
        tmp_expression_name_1 = par_event;
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_1, mod_consts[170]);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 207;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_2f6a18f23b670947eef11039226eb700->m_frame.f_lineno = 207;
        tmp_assign_source_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[185]);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 207;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        assert(var_data == NULL);
        var_data = tmp_assign_source_1;
    }
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_expression_name_2;
        PyObject *tmp_expression_name_3;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_1;
        if (par_event == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[96]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 208;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_3 = par_event;
        tmp_expression_name_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_3, mod_consts[186]);
        if (tmp_expression_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 208;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_2, mod_consts[187]);
        Py_DECREF(tmp_expression_name_2);
        if (tmp_called_instance_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 208;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_data);
        tmp_args_element_name_1 = var_data;
        frame_2f6a18f23b670947eef11039226eb700->m_frame.f_lineno = 208;
        tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_2, mod_consts[188], tmp_args_element_name_1);
        Py_DECREF(tmp_called_instance_2);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 208;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_2f6a18f23b670947eef11039226eb700);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_2f6a18f23b670947eef11039226eb700);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_2f6a18f23b670947eef11039226eb700, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_2f6a18f23b670947eef11039226eb700->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_2f6a18f23b670947eef11039226eb700, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_2f6a18f23b670947eef11039226eb700,
        type_description_1,
        par_event,
        var_data
    );


    // Release cached frame if used for exception.
    if (frame_2f6a18f23b670947eef11039226eb700 == cache_frame_2f6a18f23b670947eef11039226eb700) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_2f6a18f23b670947eef11039226eb700);
        cache_frame_2f6a18f23b670947eef11039226eb700 = NULL;
    }

    assertFrameObject(frame_2f6a18f23b670947eef11039226eb700);

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
    Py_XDECREF(par_event);
    par_event = NULL;
    Py_XDECREF(var_data);
    var_data = NULL;
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

    Py_XDECREF(par_event);
    par_event = NULL;
    Py_XDECREF(var_data);
    var_data = NULL;
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


static PyObject *impl_prompt_toolkit$key_binding$bindings$basic$$$function__2_load_basic_bindings$$$function__8__insert_ctrl_z(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_event = python_pars[0];
    struct Nuitka_FrameObject *frame_2f3132e4a61c74327e7248d2a156c9bc;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_2f3132e4a61c74327e7248d2a156c9bc = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_2f3132e4a61c74327e7248d2a156c9bc)) {
        Py_XDECREF(cache_frame_2f3132e4a61c74327e7248d2a156c9bc);

#if _DEBUG_REFCOUNTS
        if (cache_frame_2f3132e4a61c74327e7248d2a156c9bc == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_2f3132e4a61c74327e7248d2a156c9bc = MAKE_FUNCTION_FRAME(codeobj_2f3132e4a61c74327e7248d2a156c9bc, module_prompt_toolkit$key_binding$bindings$basic, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_2f3132e4a61c74327e7248d2a156c9bc->m_type_description == NULL);
    frame_2f3132e4a61c74327e7248d2a156c9bc = cache_frame_2f3132e4a61c74327e7248d2a156c9bc;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_2f3132e4a61c74327e7248d2a156c9bc);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_2f3132e4a61c74327e7248d2a156c9bc) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_expression_name_1;
        PyObject *tmp_expression_name_2;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_expression_name_3;
        CHECK_OBJECT(par_event);
        tmp_expression_name_2 = par_event;
        tmp_expression_name_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_2, mod_consts[170]);
        if (tmp_expression_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 223;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_called_name_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_1, mod_consts[189]);
        Py_DECREF(tmp_expression_name_1);
        if (tmp_called_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 223;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        if (par_event == NULL) {
            Py_DECREF(tmp_called_name_1);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[96]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 223;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_3 = par_event;
        tmp_args_element_name_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_3, mod_consts[190]);
        if (tmp_args_element_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_1);

            exception_lineno = 223;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_2f3132e4a61c74327e7248d2a156c9bc->m_frame.f_lineno = 223;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_1, tmp_args_element_name_1);
        Py_DECREF(tmp_called_name_1);
        Py_DECREF(tmp_args_element_name_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 223;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_2f3132e4a61c74327e7248d2a156c9bc);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_2f3132e4a61c74327e7248d2a156c9bc);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_2f3132e4a61c74327e7248d2a156c9bc, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_2f3132e4a61c74327e7248d2a156c9bc->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_2f3132e4a61c74327e7248d2a156c9bc, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_2f3132e4a61c74327e7248d2a156c9bc,
        type_description_1,
        par_event
    );


    // Release cached frame if used for exception.
    if (frame_2f3132e4a61c74327e7248d2a156c9bc == cache_frame_2f3132e4a61c74327e7248d2a156c9bc) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_2f3132e4a61c74327e7248d2a156c9bc);
        cache_frame_2f3132e4a61c74327e7248d2a156c9bc = NULL;
    }

    assertFrameObject(frame_2f3132e4a61c74327e7248d2a156c9bc);

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
    Py_XDECREF(par_event);
    par_event = NULL;
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

    Py_XDECREF(par_event);
    par_event = NULL;
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


static PyObject *impl_prompt_toolkit$key_binding$bindings$basic$$$function__2_load_basic_bindings$$$function__9__paste(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_event = python_pars[0];
    PyObject *var_data = NULL;
    struct Nuitka_FrameObject *frame_8f45a9852c3615ca14b71105926cb2e0;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_8f45a9852c3615ca14b71105926cb2e0 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_8f45a9852c3615ca14b71105926cb2e0)) {
        Py_XDECREF(cache_frame_8f45a9852c3615ca14b71105926cb2e0);

#if _DEBUG_REFCOUNTS
        if (cache_frame_8f45a9852c3615ca14b71105926cb2e0 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_8f45a9852c3615ca14b71105926cb2e0 = MAKE_FUNCTION_FRAME(codeobj_8f45a9852c3615ca14b71105926cb2e0, module_prompt_toolkit$key_binding$bindings$basic, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_8f45a9852c3615ca14b71105926cb2e0->m_type_description == NULL);
    frame_8f45a9852c3615ca14b71105926cb2e0 = cache_frame_8f45a9852c3615ca14b71105926cb2e0;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_8f45a9852c3615ca14b71105926cb2e0);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_8f45a9852c3615ca14b71105926cb2e0) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_expression_name_1;
        CHECK_OBJECT(par_event);
        tmp_expression_name_1 = par_event;
        tmp_assign_source_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_1, mod_consts[190]);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 230;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        assert(var_data == NULL);
        var_data = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_instance_1;
        CHECK_OBJECT(var_data);
        tmp_called_instance_1 = var_data;
        frame_8f45a9852c3615ca14b71105926cb2e0->m_frame.f_lineno = 235;
        tmp_assign_source_2 = CALL_METHOD_WITH_ARGS2(
            tmp_called_instance_1,
            mod_consts[191],
            &PyTuple_GET_ITEM(mod_consts[192], 0)
        );

        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 235;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_data;
            var_data = tmp_assign_source_2;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_instance_2;
        CHECK_OBJECT(var_data);
        tmp_called_instance_2 = var_data;
        frame_8f45a9852c3615ca14b71105926cb2e0->m_frame.f_lineno = 236;
        tmp_assign_source_3 = CALL_METHOD_WITH_ARGS2(
            tmp_called_instance_2,
            mod_consts[191],
            &PyTuple_GET_ITEM(mod_consts[193], 0)
        );

        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 236;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_data;
            var_data = tmp_assign_source_3;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_called_instance_3;
        PyObject *tmp_expression_name_2;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_1;
        if (par_event == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[96]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 238;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_2 = par_event;
        tmp_called_instance_3 = LOOKUP_ATTRIBUTE(tmp_expression_name_2, mod_consts[170]);
        if (tmp_called_instance_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 238;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_data);
        tmp_args_element_name_1 = var_data;
        frame_8f45a9852c3615ca14b71105926cb2e0->m_frame.f_lineno = 238;
        tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_3, mod_consts[189], tmp_args_element_name_1);
        Py_DECREF(tmp_called_instance_3);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 238;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_8f45a9852c3615ca14b71105926cb2e0);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_8f45a9852c3615ca14b71105926cb2e0);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_8f45a9852c3615ca14b71105926cb2e0, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_8f45a9852c3615ca14b71105926cb2e0->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_8f45a9852c3615ca14b71105926cb2e0, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_8f45a9852c3615ca14b71105926cb2e0,
        type_description_1,
        par_event,
        var_data
    );


    // Release cached frame if used for exception.
    if (frame_8f45a9852c3615ca14b71105926cb2e0 == cache_frame_8f45a9852c3615ca14b71105926cb2e0) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_8f45a9852c3615ca14b71105926cb2e0);
        cache_frame_8f45a9852c3615ca14b71105926cb2e0 = NULL;
    }

    assertFrameObject(frame_8f45a9852c3615ca14b71105926cb2e0);

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
    Py_XDECREF(par_event);
    par_event = NULL;
    Py_XDECREF(var_data);
    var_data = NULL;
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

    Py_XDECREF(par_event);
    par_event = NULL;
    Py_XDECREF(var_data);
    var_data = NULL;
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


static PyObject *impl_prompt_toolkit$key_binding$bindings$basic$$$function__2_load_basic_bindings$$$function__10_in_quoted_insert(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_FrameObject *frame_18567da51663dc9a42f0424440efc9ef;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_18567da51663dc9a42f0424440efc9ef = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_18567da51663dc9a42f0424440efc9ef)) {
        Py_XDECREF(cache_frame_18567da51663dc9a42f0424440efc9ef);

#if _DEBUG_REFCOUNTS
        if (cache_frame_18567da51663dc9a42f0424440efc9ef == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_18567da51663dc9a42f0424440efc9ef = MAKE_FUNCTION_FRAME(codeobj_18567da51663dc9a42f0424440efc9ef, module_prompt_toolkit$key_binding$bindings$basic, 0);
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_18567da51663dc9a42f0424440efc9ef->m_type_description == NULL);
    frame_18567da51663dc9a42f0424440efc9ef = cache_frame_18567da51663dc9a42f0424440efc9ef;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_18567da51663dc9a42f0424440efc9ef);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_18567da51663dc9a42f0424440efc9ef) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_expression_name_1;
        PyObject *tmp_called_name_1;
        tmp_called_name_1 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$basic, (Nuitka_StringObject *)mod_consts[169]);

        if (unlikely(tmp_called_name_1 == NULL)) {
            tmp_called_name_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[169]);
        }

        if (tmp_called_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 242;

            goto frame_exception_exit_1;
        }
        frame_18567da51663dc9a42f0424440efc9ef->m_frame.f_lineno = 242;
        tmp_expression_name_1 = CALL_FUNCTION_NO_ARGS(tmp_called_name_1);
        if (tmp_expression_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 242;

            goto frame_exception_exit_1;
        }
        tmp_return_value = LOOKUP_ATTRIBUTE(tmp_expression_name_1, mod_consts[194]);
        Py_DECREF(tmp_expression_name_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 242;

            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_18567da51663dc9a42f0424440efc9ef);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_18567da51663dc9a42f0424440efc9ef);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_18567da51663dc9a42f0424440efc9ef);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_18567da51663dc9a42f0424440efc9ef, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_18567da51663dc9a42f0424440efc9ef->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_18567da51663dc9a42f0424440efc9ef, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_18567da51663dc9a42f0424440efc9ef,
        type_description_1
    );


    // Release cached frame if used for exception.
    if (frame_18567da51663dc9a42f0424440efc9ef == cache_frame_18567da51663dc9a42f0424440efc9ef) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_18567da51663dc9a42f0424440efc9ef);
        cache_frame_18567da51663dc9a42f0424440efc9ef = NULL;
    }

    assertFrameObject(frame_18567da51663dc9a42f0424440efc9ef);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

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


static PyObject *impl_prompt_toolkit$key_binding$bindings$basic$$$function__2_load_basic_bindings$$$function__11__insert_text(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_event = python_pars[0];
    struct Nuitka_FrameObject *frame_e4b262fee648ea6c51aa95232089ee96;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_e4b262fee648ea6c51aa95232089ee96 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_e4b262fee648ea6c51aa95232089ee96)) {
        Py_XDECREF(cache_frame_e4b262fee648ea6c51aa95232089ee96);

#if _DEBUG_REFCOUNTS
        if (cache_frame_e4b262fee648ea6c51aa95232089ee96 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_e4b262fee648ea6c51aa95232089ee96 = MAKE_FUNCTION_FRAME(codeobj_e4b262fee648ea6c51aa95232089ee96, module_prompt_toolkit$key_binding$bindings$basic, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_e4b262fee648ea6c51aa95232089ee96->m_type_description == NULL);
    frame_e4b262fee648ea6c51aa95232089ee96 = cache_frame_e4b262fee648ea6c51aa95232089ee96;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_e4b262fee648ea6c51aa95232089ee96);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_e4b262fee648ea6c51aa95232089ee96) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_expression_name_1;
        PyObject *tmp_expression_name_2;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_name_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_expression_name_3;
        PyObject *tmp_kwargs_name_1;
        CHECK_OBJECT(par_event);
        tmp_expression_name_2 = par_event;
        tmp_expression_name_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_2, mod_consts[170]);
        if (tmp_expression_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 249;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_called_name_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_1, mod_consts[189]);
        Py_DECREF(tmp_expression_name_1);
        if (tmp_called_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 249;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        if (par_event == NULL) {
            Py_DECREF(tmp_called_name_1);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[96]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 249;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_3 = par_event;
        tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_3, mod_consts[190]);
        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_1);

            exception_lineno = 249;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_args_name_1 = PyTuple_New(1);
        PyTuple_SET_ITEM(tmp_args_name_1, 0, tmp_tuple_element_1);
        tmp_kwargs_name_1 = PyDict_Copy(mod_consts[195]);
        frame_e4b262fee648ea6c51aa95232089ee96->m_frame.f_lineno = 249;
        tmp_call_result_1 = CALL_FUNCTION(tmp_called_name_1, tmp_args_name_1, tmp_kwargs_name_1);
        Py_DECREF(tmp_called_name_1);
        Py_DECREF(tmp_args_name_1);
        Py_DECREF(tmp_kwargs_name_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 249;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        PyObject *tmp_expression_name_4;
        tmp_assattr_name_1 = Py_False;
        if (par_event == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[96]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 250;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_4 = par_event;
        tmp_assattr_target_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_4, mod_consts[186]);
        if (tmp_assattr_target_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 250;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[194], tmp_assattr_name_1);
        Py_DECREF(tmp_assattr_target_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 250;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_e4b262fee648ea6c51aa95232089ee96);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_e4b262fee648ea6c51aa95232089ee96);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_e4b262fee648ea6c51aa95232089ee96, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_e4b262fee648ea6c51aa95232089ee96->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_e4b262fee648ea6c51aa95232089ee96, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_e4b262fee648ea6c51aa95232089ee96,
        type_description_1,
        par_event
    );


    // Release cached frame if used for exception.
    if (frame_e4b262fee648ea6c51aa95232089ee96 == cache_frame_e4b262fee648ea6c51aa95232089ee96) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_e4b262fee648ea6c51aa95232089ee96);
        cache_frame_e4b262fee648ea6c51aa95232089ee96 = NULL;
    }

    assertFrameObject(frame_e4b262fee648ea6c51aa95232089ee96);

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
    Py_XDECREF(par_event);
    par_event = NULL;
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

    Py_XDECREF(par_event);
    par_event = NULL;
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



static PyObject *MAKE_FUNCTION_prompt_toolkit$key_binding$bindings$basic$$$function__1_if_no_repeat(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_prompt_toolkit$key_binding$bindings$basic$$$function__1_if_no_repeat,
        mod_consts[117],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_317fc1f6375775266c1248fcb404830e,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_prompt_toolkit$key_binding$bindings$basic,
        mod_consts[1],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_prompt_toolkit$key_binding$bindings$basic$$$function__2_load_basic_bindings(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_prompt_toolkit$key_binding$bindings$basic$$$function__2_load_basic_bindings,
        mod_consts[220],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_1e465c63423cecf32f0c62928e893560,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_prompt_toolkit$key_binding$bindings$basic,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_prompt_toolkit$key_binding$bindings$basic$$$function__2_load_basic_bindings$$$function__10_in_quoted_insert(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_prompt_toolkit$key_binding$bindings$basic$$$function__2_load_basic_bindings$$$function__10_in_quoted_insert,
        mod_consts[162],
#if PYTHON_VERSION >= 0x300
        mod_consts[163],
#endif
        codeobj_18567da51663dc9a42f0424440efc9ef,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_prompt_toolkit$key_binding$bindings$basic,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_prompt_toolkit$key_binding$bindings$basic$$$function__2_load_basic_bindings$$$function__11__insert_text(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_prompt_toolkit$key_binding$bindings$basic$$$function__2_load_basic_bindings$$$function__11__insert_text,
        mod_consts[166],
#if PYTHON_VERSION >= 0x300
        mod_consts[167],
#endif
        codeobj_e4b262fee648ea6c51aa95232089ee96,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_prompt_toolkit$key_binding$bindings$basic,
        mod_consts[165],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_prompt_toolkit$key_binding$bindings$basic$$$function__2_load_basic_bindings$$$function__1__ignore(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_prompt_toolkit$key_binding$bindings$basic$$$function__2_load_basic_bindings$$$function__1__ignore,
        mod_consts[100],
#if PYTHON_VERSION >= 0x300
        mod_consts[101],
#endif
        codeobj_3bcf7de56a40ea0266611786b02be974,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_prompt_toolkit$key_binding$bindings$basic,
        mod_consts[99],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_prompt_toolkit$key_binding$bindings$basic$$$function__2_load_basic_bindings$$$function__2_has_text_before_cursor(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_prompt_toolkit$key_binding$bindings$basic$$$function__2_load_basic_bindings$$$function__2_has_text_before_cursor,
        mod_consts[137],
#if PYTHON_VERSION >= 0x300
        mod_consts[138],
#endif
        codeobj_dac7b7d7834ee4f3515fcd689fb6d90d,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_prompt_toolkit$key_binding$bindings$basic,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_prompt_toolkit$key_binding$bindings$basic$$$function__2_load_basic_bindings$$$function__3__newline(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_prompt_toolkit$key_binding$bindings$basic$$$function__2_load_basic_bindings$$$function__3__newline,
        mod_consts[144],
#if PYTHON_VERSION >= 0x300
        mod_consts[145],
#endif
        codeobj_145ad7c3c902d3f9fb5afc19ca8741ce,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_prompt_toolkit$key_binding$bindings$basic,
        mod_consts[143],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_prompt_toolkit$key_binding$bindings$basic$$$function__2_load_basic_bindings$$$function__4__newline2(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_prompt_toolkit$key_binding$bindings$basic$$$function__2_load_basic_bindings$$$function__4__newline2,
        mod_consts[147],
#if PYTHON_VERSION >= 0x300
        mod_consts[148],
#endif
        codeobj_c5cbeacfcb0e7cda856321ff168562fa,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_prompt_toolkit$key_binding$bindings$basic,
        mod_consts[146],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_prompt_toolkit$key_binding$bindings$basic$$$function__2_load_basic_bindings$$$function__5__go_up(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_prompt_toolkit$key_binding$bindings$basic$$$function__2_load_basic_bindings$$$function__5__go_up,
        mod_consts[149],
#if PYTHON_VERSION >= 0x300
        mod_consts[150],
#endif
        codeobj_ea9e47cada5751f82e3ee6b2350bdc80,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_prompt_toolkit$key_binding$bindings$basic,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_prompt_toolkit$key_binding$bindings$basic$$$function__2_load_basic_bindings$$$function__6__go_down(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_prompt_toolkit$key_binding$bindings$basic$$$function__2_load_basic_bindings$$$function__6__go_down,
        mod_consts[151],
#if PYTHON_VERSION >= 0x300
        mod_consts[152],
#endif
        codeobj_b02289f2f7db061b42a6667a68fb6743,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_prompt_toolkit$key_binding$bindings$basic,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_prompt_toolkit$key_binding$bindings$basic$$$function__2_load_basic_bindings$$$function__7__cut(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_prompt_toolkit$key_binding$bindings$basic$$$function__2_load_basic_bindings$$$function__7__cut,
        mod_consts[153],
#if PYTHON_VERSION >= 0x300
        mod_consts[154],
#endif
        codeobj_2f6a18f23b670947eef11039226eb700,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_prompt_toolkit$key_binding$bindings$basic,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_prompt_toolkit$key_binding$bindings$basic$$$function__2_load_basic_bindings$$$function__8__insert_ctrl_z(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_prompt_toolkit$key_binding$bindings$basic$$$function__2_load_basic_bindings$$$function__8__insert_ctrl_z,
        mod_consts[156],
#if PYTHON_VERSION >= 0x300
        mod_consts[157],
#endif
        codeobj_2f3132e4a61c74327e7248d2a156c9bc,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_prompt_toolkit$key_binding$bindings$basic,
        mod_consts[155],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_prompt_toolkit$key_binding$bindings$basic$$$function__2_load_basic_bindings$$$function__9__paste(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_prompt_toolkit$key_binding$bindings$basic$$$function__2_load_basic_bindings$$$function__9__paste,
        mod_consts[160],
#if PYTHON_VERSION >= 0x300
        mod_consts[161],
#endif
        codeobj_8f45a9852c3615ca14b71105926cb2e0,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_prompt_toolkit$key_binding$bindings$basic,
        mod_consts[159],
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

function_impl_code functable_prompt_toolkit$key_binding$bindings$basic[] = {
    impl_prompt_toolkit$key_binding$bindings$basic$$$function__2_load_basic_bindings$$$function__1__ignore,
    impl_prompt_toolkit$key_binding$bindings$basic$$$function__2_load_basic_bindings$$$function__2_has_text_before_cursor,
    impl_prompt_toolkit$key_binding$bindings$basic$$$function__2_load_basic_bindings$$$function__3__newline,
    impl_prompt_toolkit$key_binding$bindings$basic$$$function__2_load_basic_bindings$$$function__4__newline2,
    impl_prompt_toolkit$key_binding$bindings$basic$$$function__2_load_basic_bindings$$$function__5__go_up,
    impl_prompt_toolkit$key_binding$bindings$basic$$$function__2_load_basic_bindings$$$function__6__go_down,
    impl_prompt_toolkit$key_binding$bindings$basic$$$function__2_load_basic_bindings$$$function__7__cut,
    impl_prompt_toolkit$key_binding$bindings$basic$$$function__2_load_basic_bindings$$$function__8__insert_ctrl_z,
    impl_prompt_toolkit$key_binding$bindings$basic$$$function__2_load_basic_bindings$$$function__9__paste,
    impl_prompt_toolkit$key_binding$bindings$basic$$$function__2_load_basic_bindings$$$function__10_in_quoted_insert,
    impl_prompt_toolkit$key_binding$bindings$basic$$$function__2_load_basic_bindings$$$function__11__insert_text,
    impl_prompt_toolkit$key_binding$bindings$basic$$$function__1_if_no_repeat,
    impl_prompt_toolkit$key_binding$bindings$basic$$$function__2_load_basic_bindings,
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

    function_impl_code *current = functable_prompt_toolkit$key_binding$bindings$basic;
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

    if (offset > sizeof(functable_prompt_toolkit$key_binding$bindings$basic) || offset < 0) {
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
        functable_prompt_toolkit$key_binding$bindings$basic[offset],
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
        module_prompt_toolkit$key_binding$bindings$basic,
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
PyObject *modulecode_prompt_toolkit$key_binding$bindings$basic(PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *module_entry) {
    module_prompt_toolkit$key_binding$bindings$basic = module;

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
    PRINT_STRING("prompt_toolkit.key_binding.bindings.basic: Calling setupMetaPathBasedLoader().\n");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 0x300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    PRINT_STRING("prompt_toolkit.key_binding.bindings.basic: Calling createModuleConstants().\n");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    PRINT_STRING("prompt_toolkit.key_binding.bindings.basic: Calling createModuleCodeObjects().\n");
#endif
    createModuleCodeObjects();

    // PRINT_STRING("in initprompt_toolkit$key_binding$bindings$basic\n");

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.

    moduledict_prompt_toolkit$key_binding$bindings$basic = MODULE_DICT(module_prompt_toolkit$key_binding$bindings$basic);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    registerDillPluginTables(module_entry->name, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_prompt_toolkit$key_binding$bindings$basic,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_prompt_toolkit$key_binding$bindings$basic,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$basic, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_prompt_toolkit$key_binding$bindings$basic,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$basic, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_prompt_toolkit$key_binding$bindings$basic,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$basic, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_prompt_toolkit$key_binding$bindings$basic,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_prompt_toolkit$key_binding$bindings$basic);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$basic, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_prompt_toolkit$key_binding$bindings$basic, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

#if PYTHON_VERSION >= 0x300
    UPDATE_STRING_DICT0(moduledict_prompt_toolkit$key_binding$bindings$basic, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);
#endif

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_prompt_toolkit$key_binding$bindings$basic, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(_spec_from_module, module_prompt_toolkit$key_binding$bindings$basic);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_prompt_toolkit$key_binding$bindings$basic, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    PyObject *tmp_import_from_1__module = NULL;
    PyObject *tmp_import_from_2__module = NULL;
    struct Nuitka_FrameObject *frame_02316590801e404852690234577f647a;
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
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    int tmp_res;

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = Py_None;
        UPDATE_STRING_DICT0(moduledict_prompt_toolkit$key_binding$bindings$basic, (Nuitka_StringObject *)mod_consts[196], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = mod_consts[197];
        UPDATE_STRING_DICT0(moduledict_prompt_toolkit$key_binding$bindings$basic, (Nuitka_StringObject *)mod_consts[198], tmp_assign_source_2);
    }
    // Frame without reuse.
    frame_02316590801e404852690234577f647a = MAKE_MODULE_FRAME(codeobj_02316590801e404852690234577f647a, module_prompt_toolkit$key_binding$bindings$basic);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack(frame_02316590801e404852690234577f647a);
    assert(Py_REFCNT(frame_02316590801e404852690234577f647a) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_name_1 = mod_consts[197];
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$basic, (Nuitka_StringObject *)mod_consts[199]);

        if (unlikely(tmp_assattr_target_1 == NULL)) {
            tmp_assattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[199]);
        }

        assert(!(tmp_assattr_target_1 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[200], tmp_assattr_name_1);
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
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$basic, (Nuitka_StringObject *)mod_consts[199]);

        if (unlikely(tmp_assattr_target_2 == NULL)) {
            tmp_assattr_target_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[199]);
        }

        assert(!(tmp_assattr_target_2 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[201], tmp_assattr_name_2);
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
        UPDATE_STRING_DICT0(moduledict_prompt_toolkit$key_binding$bindings$basic, (Nuitka_StringObject *)mod_consts[202], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_name_1;
        PyObject *tmp_globals_arg_name_1;
        PyObject *tmp_locals_arg_name_1;
        PyObject *tmp_fromlist_name_1;
        PyObject *tmp_level_name_1;
        tmp_name_name_1 = mod_consts[203];
        tmp_globals_arg_name_1 = (PyObject *)moduledict_prompt_toolkit$key_binding$bindings$basic;
        tmp_locals_arg_name_1 = Py_None;
        tmp_fromlist_name_1 = mod_consts[204];
        tmp_level_name_1 = mod_consts[205];
        frame_02316590801e404852690234577f647a->m_frame.f_lineno = 2;
        tmp_import_name_from_1 = IMPORT_MODULE5(tmp_name_name_1, tmp_globals_arg_name_1, tmp_locals_arg_name_1, tmp_fromlist_name_1, tmp_level_name_1);
        if (tmp_import_name_from_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_4 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_1,
                (PyObject *)moduledict_prompt_toolkit$key_binding$bindings$basic,
                mod_consts[169],
                mod_consts[205]
            );
        } else {
            tmp_assign_source_4 = IMPORT_NAME(tmp_import_name_from_1, mod_consts[169]);
        }

        Py_DECREF(tmp_import_name_from_1);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_prompt_toolkit$key_binding$bindings$basic, (Nuitka_StringObject *)mod_consts[169], tmp_assign_source_4);
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_name_name_2;
        PyObject *tmp_globals_arg_name_2;
        PyObject *tmp_locals_arg_name_2;
        PyObject *tmp_fromlist_name_2;
        PyObject *tmp_level_name_2;
        tmp_name_name_2 = mod_consts[206];
        tmp_globals_arg_name_2 = (PyObject *)moduledict_prompt_toolkit$key_binding$bindings$basic;
        tmp_locals_arg_name_2 = Py_None;
        tmp_fromlist_name_2 = mod_consts[207];
        tmp_level_name_2 = mod_consts[205];
        frame_02316590801e404852690234577f647a->m_frame.f_lineno = 3;
        tmp_assign_source_5 = IMPORT_MODULE5(tmp_name_name_2, tmp_globals_arg_name_2, tmp_locals_arg_name_2, tmp_fromlist_name_2, tmp_level_name_2);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_1__module == NULL);
        tmp_import_from_1__module = tmp_assign_source_5;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_import_name_from_2;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_2 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_2)) {
            tmp_assign_source_6 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_2,
                (PyObject *)moduledict_prompt_toolkit$key_binding$bindings$basic,
                mod_consts[135],
                mod_consts[205]
            );
        } else {
            tmp_assign_source_6 = IMPORT_NAME(tmp_import_name_from_2, mod_consts[135]);
        }

        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_prompt_toolkit$key_binding$bindings$basic, (Nuitka_StringObject *)mod_consts[135], tmp_assign_source_6);
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_import_name_from_3;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_3 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_3)) {
            tmp_assign_source_7 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_3,
                (PyObject *)moduledict_prompt_toolkit$key_binding$bindings$basic,
                mod_consts[4],
                mod_consts[205]
            );
        } else {
            tmp_assign_source_7 = IMPORT_NAME(tmp_import_name_from_3, mod_consts[4]);
        }

        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_prompt_toolkit$key_binding$bindings$basic, (Nuitka_StringObject *)mod_consts[4], tmp_assign_source_7);
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_import_name_from_4;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_4 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_4)) {
            tmp_assign_source_8 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_4,
                (PyObject *)moduledict_prompt_toolkit$key_binding$bindings$basic,
                mod_consts[133],
                mod_consts[205]
            );
        } else {
            tmp_assign_source_8 = IMPORT_NAME(tmp_import_name_from_4, mod_consts[133]);
        }

        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_prompt_toolkit$key_binding$bindings$basic, (Nuitka_StringObject *)mod_consts[133], tmp_assign_source_8);
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_import_name_from_5;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_5 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_5)) {
            tmp_assign_source_9 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_5,
                (PyObject *)moduledict_prompt_toolkit$key_binding$bindings$basic,
                mod_consts[174],
                mod_consts[205]
            );
        } else {
            tmp_assign_source_9 = IMPORT_NAME(tmp_import_name_from_5, mod_consts[174]);
        }

        if (tmp_assign_source_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_prompt_toolkit$key_binding$bindings$basic, (Nuitka_StringObject *)mod_consts[174], tmp_assign_source_9);
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_import_name_from_6;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_6 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_6)) {
            tmp_assign_source_10 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_6,
                (PyObject *)moduledict_prompt_toolkit$key_binding$bindings$basic,
                mod_consts[142],
                mod_consts[205]
            );
        } else {
            tmp_assign_source_10 = IMPORT_NAME(tmp_import_name_from_6, mod_consts[142]);
        }

        if (tmp_assign_source_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_prompt_toolkit$key_binding$bindings$basic, (Nuitka_StringObject *)mod_consts[142], tmp_assign_source_10);
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_import_name_from_7;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_7 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_7)) {
            tmp_assign_source_11 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_7,
                (PyObject *)moduledict_prompt_toolkit$key_binding$bindings$basic,
                mod_consts[3],
                mod_consts[205]
            );
        } else {
            tmp_assign_source_11 = IMPORT_NAME(tmp_import_name_from_7, mod_consts[3]);
        }

        if (tmp_assign_source_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_prompt_toolkit$key_binding$bindings$basic, (Nuitka_StringObject *)mod_consts[3], tmp_assign_source_11);
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
        tmp_name_name_3 = mod_consts[208];
        tmp_globals_arg_name_3 = (PyObject *)moduledict_prompt_toolkit$key_binding$bindings$basic;
        tmp_locals_arg_name_3 = Py_None;
        tmp_fromlist_name_3 = mod_consts[209];
        tmp_level_name_3 = mod_consts[205];
        frame_02316590801e404852690234577f647a->m_frame.f_lineno = 11;
        tmp_assign_source_12 = IMPORT_MODULE5(tmp_name_name_3, tmp_globals_arg_name_3, tmp_locals_arg_name_3, tmp_fromlist_name_3, tmp_level_name_3);
        if (tmp_assign_source_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 11;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_2__module == NULL);
        tmp_import_from_2__module = tmp_assign_source_12;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_import_name_from_8;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_8 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_8)) {
            tmp_assign_source_13 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_8,
                (PyObject *)moduledict_prompt_toolkit$key_binding$bindings$basic,
                mod_consts[177],
                mod_consts[205]
            );
        } else {
            tmp_assign_source_13 = IMPORT_NAME(tmp_import_name_from_8, mod_consts[177]);
        }

        if (tmp_assign_source_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 11;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_prompt_toolkit$key_binding$bindings$basic, (Nuitka_StringObject *)mod_consts[177], tmp_assign_source_13);
    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_import_name_from_9;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_9 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_9)) {
            tmp_assign_source_14 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_9,
                (PyObject *)moduledict_prompt_toolkit$key_binding$bindings$basic,
                mod_consts[210],
                mod_consts[205]
            );
        } else {
            tmp_assign_source_14 = IMPORT_NAME(tmp_import_name_from_9, mod_consts[210]);
        }

        if (tmp_assign_source_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 11;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_prompt_toolkit$key_binding$bindings$basic, (Nuitka_StringObject *)mod_consts[210], tmp_assign_source_14);
    }
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

    CHECK_OBJECT(tmp_import_from_2__module);
    Py_DECREF(tmp_import_from_2__module);
    tmp_import_from_2__module = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    CHECK_OBJECT(tmp_import_from_2__module);
    Py_DECREF(tmp_import_from_2__module);
    tmp_import_from_2__module = NULL;
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_import_name_from_10;
        PyObject *tmp_name_name_4;
        PyObject *tmp_globals_arg_name_4;
        PyObject *tmp_locals_arg_name_4;
        PyObject *tmp_fromlist_name_4;
        PyObject *tmp_level_name_4;
        tmp_name_name_4 = mod_consts[211];
        tmp_globals_arg_name_4 = (PyObject *)moduledict_prompt_toolkit$key_binding$bindings$basic;
        tmp_locals_arg_name_4 = Py_None;
        tmp_fromlist_name_4 = mod_consts[212];
        tmp_level_name_4 = mod_consts[205];
        frame_02316590801e404852690234577f647a->m_frame.f_lineno = 12;
        tmp_import_name_from_10 = IMPORT_MODULE5(tmp_name_name_4, tmp_globals_arg_name_4, tmp_locals_arg_name_4, tmp_fromlist_name_4, tmp_level_name_4);
        if (tmp_import_name_from_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 12;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_10)) {
            tmp_assign_source_15 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_10,
                (PyObject *)moduledict_prompt_toolkit$key_binding$bindings$basic,
                mod_consts[94],
                mod_consts[205]
            );
        } else {
            tmp_assign_source_15 = IMPORT_NAME(tmp_import_name_from_10, mod_consts[94]);
        }

        Py_DECREF(tmp_import_name_from_10);
        if (tmp_assign_source_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 12;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_prompt_toolkit$key_binding$bindings$basic, (Nuitka_StringObject *)mod_consts[94], tmp_assign_source_15);
    }
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_import_name_from_11;
        PyObject *tmp_name_name_5;
        PyObject *tmp_globals_arg_name_5;
        PyObject *tmp_locals_arg_name_5;
        PyObject *tmp_fromlist_name_5;
        PyObject *tmp_level_name_5;
        tmp_name_name_5 = mod_consts[168];
        tmp_globals_arg_name_5 = (PyObject *)moduledict_prompt_toolkit$key_binding$bindings$basic;
        tmp_locals_arg_name_5 = Py_None;
        tmp_fromlist_name_5 = mod_consts[213];
        tmp_level_name_5 = mod_consts[214];
        frame_02316590801e404852690234577f647a->m_frame.f_lineno = 14;
        tmp_import_name_from_11 = IMPORT_MODULE5(tmp_name_name_5, tmp_globals_arg_name_5, tmp_locals_arg_name_5, tmp_fromlist_name_5, tmp_level_name_5);
        if (tmp_import_name_from_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 14;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_11)) {
            tmp_assign_source_16 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_11,
                (PyObject *)moduledict_prompt_toolkit$key_binding$bindings$basic,
                mod_consts[2],
                mod_consts[205]
            );
        } else {
            tmp_assign_source_16 = IMPORT_NAME(tmp_import_name_from_11, mod_consts[2]);
        }

        Py_DECREF(tmp_import_name_from_11);
        if (tmp_assign_source_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 14;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_prompt_toolkit$key_binding$bindings$basic, (Nuitka_StringObject *)mod_consts[2], tmp_assign_source_16);
    }
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_import_name_from_12;
        PyObject *tmp_name_name_6;
        PyObject *tmp_globals_arg_name_6;
        PyObject *tmp_locals_arg_name_6;
        PyObject *tmp_fromlist_name_6;
        PyObject *tmp_level_name_6;
        tmp_name_name_6 = mod_consts[215];
        tmp_globals_arg_name_6 = (PyObject *)moduledict_prompt_toolkit$key_binding$bindings$basic;
        tmp_locals_arg_name_6 = Py_None;
        tmp_fromlist_name_6 = mod_consts[216];
        tmp_level_name_6 = mod_consts[217];
        frame_02316590801e404852690234577f647a->m_frame.f_lineno = 15;
        tmp_import_name_from_12 = IMPORT_MODULE5(tmp_name_name_6, tmp_globals_arg_name_6, tmp_locals_arg_name_6, tmp_fromlist_name_6, tmp_level_name_6);
        if (tmp_import_name_from_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 15;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_12)) {
            tmp_assign_source_17 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_12,
                (PyObject *)moduledict_prompt_toolkit$key_binding$bindings$basic,
                mod_consts[102],
                mod_consts[205]
            );
        } else {
            tmp_assign_source_17 = IMPORT_NAME(tmp_import_name_from_12, mod_consts[102]);
        }

        Py_DECREF(tmp_import_name_from_12);
        if (tmp_assign_source_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 15;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_prompt_toolkit$key_binding$bindings$basic, (Nuitka_StringObject *)mod_consts[102], tmp_assign_source_17);
    }
    {
        PyObject *tmp_assign_source_18;
        tmp_assign_source_18 = LIST_COPY(mod_consts[218]);
        UPDATE_STRING_DICT1(moduledict_prompt_toolkit$key_binding$bindings$basic, (Nuitka_StringObject *)mod_consts[219], tmp_assign_source_18);
    }
    {
        PyObject *tmp_assign_source_19;
        tmp_assign_source_19 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$basic, (Nuitka_StringObject *)mod_consts[210]);

        if (unlikely(tmp_assign_source_19 == NULL)) {
            tmp_assign_source_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[210]);
        }

        if (tmp_assign_source_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT0(moduledict_prompt_toolkit$key_binding$bindings$basic, (Nuitka_StringObject *)mod_consts[97], tmp_assign_source_19);
    }
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_annotations_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        tmp_dict_key_1 = mod_consts[96];
        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$basic, (Nuitka_StringObject *)mod_consts[97]);

        if (unlikely(tmp_dict_value_1 == NULL)) {
            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[97]);
        }

        assert(!(tmp_dict_value_1 == NULL));
        tmp_annotations_1 = _PyDict_NewPresized( 2 );
        tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[98];
        tmp_dict_value_1 = (PyObject *)&PyBool_Type;
        tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));


        tmp_assign_source_20 = MAKE_FUNCTION_prompt_toolkit$key_binding$bindings$basic$$$function__1_if_no_repeat(tmp_annotations_1);

        UPDATE_STRING_DICT1(moduledict_prompt_toolkit$key_binding$bindings$basic, (Nuitka_StringObject *)mod_consts[117], tmp_assign_source_20);
    }
    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_annotations_2;
        PyObject *tmp_dict_key_2;
        PyObject *tmp_dict_value_2;
        tmp_dict_key_2 = mod_consts[98];
        tmp_dict_value_2 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$basic, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_dict_value_2 == NULL)) {
            tmp_dict_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
        }

        if (tmp_dict_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 30;

            goto frame_exception_exit_1;
        }
        tmp_annotations_2 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_2, tmp_dict_value_2);
        assert(!(tmp_res != 0));


        tmp_assign_source_21 = MAKE_FUNCTION_prompt_toolkit$key_binding$bindings$basic$$$function__2_load_basic_bindings(tmp_annotations_2);

        UPDATE_STRING_DICT1(moduledict_prompt_toolkit$key_binding$bindings$basic, (Nuitka_StringObject *)mod_consts[220], tmp_assign_source_21);
    }

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION(frame_02316590801e404852690234577f647a);
#endif
    popFrameStack();

    assertFrameObject(frame_02316590801e404852690234577f647a);

    goto frame_no_exception_1;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_02316590801e404852690234577f647a);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_02316590801e404852690234577f647a, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_02316590801e404852690234577f647a->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_02316590801e404852690234577f647a, exception_lineno);
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;

    frame_no_exception_1:;

    return module_prompt_toolkit$key_binding$bindings$basic;
    module_exception_exit:
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);
    return NULL;
}

