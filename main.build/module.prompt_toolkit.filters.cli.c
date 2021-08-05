/* Generated code for Python module 'prompt_toolkit.filters.cli'
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

/* The "module_prompt_toolkit$filters$cli" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_prompt_toolkit$filters$cli;
PyDictObject *moduledict_prompt_toolkit$filters$cli;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[64];

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(void) {
    if (constants_created == false) {
        loadConstantsBlob(&mod_consts[0], UNTRANSLATE("prompt_toolkit.filters.cli"));
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
void checkModuleConstants_prompt_toolkit$filters$cli(void) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    checkConstantsBlob(&mod_consts[0], "prompt_toolkit.filters.cli");
}
#endif

// The module code objects.
static PyCodeObject *codeobj_261e2e0a8ffc14dd4760963c16d1af7d;
static PyCodeObject *codeobj_355c3869126f015e5c8ed734b6d7d5ca;
static PyCodeObject *codeobj_d409b8121c14866444e18e62af89d8e0;
static PyCodeObject *codeobj_53c4b4e938f626078e639c5eff08e21d;
static PyCodeObject *codeobj_20a8ccc88f869243a37f2fa25b539b6b;
static PyCodeObject *codeobj_da06b8c2d049174cdf6f1e17817532b9;
static PyCodeObject *codeobj_05daed9b71e586bb85e45ff4559b3328;
static PyCodeObject *codeobj_04769b1aa0582ba9102bad58190b87d7;
static PyCodeObject *codeobj_fc7d5f571cdf83f06b01bd438f60d162;
static PyCodeObject *codeobj_7a0ab281adb54c05501041a3f949568b;
static PyCodeObject *codeobj_53b9670651b63411b2276e95436caba2;
static PyCodeObject *codeobj_e0f3d2c8899acda5a9a13ea05909ceb5;
static PyCodeObject *codeobj_aa9aa4b9d5f7ae63a7adb465c7b9c7f0;
static PyCodeObject *codeobj_d7c0ce02c689eed9e32a271e4b13f2cb;
static PyCodeObject *codeobj_fa3cd85496c2c83e79f546dbd177949e;
static PyCodeObject *codeobj_6908b45ea06f20eb93468ab83f82c43a;
static PyCodeObject *codeobj_8bbad72ef9fb38368c3ac3c7af654fd1;
static PyCodeObject *codeobj_3ca471af766f9cc7d23829f6a5ddfb75;
static PyCodeObject *codeobj_fe4f1ce43d748da839515f6ef8af097d;
static PyCodeObject *codeobj_6b504d33c348db1765a139e432590da8;
static PyCodeObject *codeobj_5d694145f542720a07c956200bf29e01;
static PyCodeObject *codeobj_9062fc9b5df0c430d0f3869dbc57e102;
static PyCodeObject *codeobj_aa7f14b92842911b4ff4dc14be85bc75;
static PyCodeObject *codeobj_9f3b06048659763feae613f05b6cf9a0;

static void createModuleCodeObjects(void) {
    module_filename_obj = mod_consts[24]; CHECK_OBJECT(module_filename_obj);
    codeobj_261e2e0a8ffc14dd4760963c16d1af7d = MAKE_CODEOBJECT(module_filename_obj, 37, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[35], NULL, NULL, 0, 0, 0);
    codeobj_355c3869126f015e5c8ed734b6d7d5ca = MAKE_CODEOBJECT(module_filename_obj, 38, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[35], NULL, NULL, 0, 0, 0);
    codeobj_d409b8121c14866444e18e62af89d8e0 = MAKE_CODEOBJECT(module_filename_obj, 39, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[35], NULL, NULL, 0, 0, 0);
    codeobj_53c4b4e938f626078e639c5eff08e21d = MAKE_CODEOBJECT(module_filename_obj, 40, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[35], NULL, NULL, 0, 0, 0);
    codeobj_20a8ccc88f869243a37f2fa25b539b6b = MAKE_CODEOBJECT(module_filename_obj, 41, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[35], NULL, NULL, 0, 0, 0);
    codeobj_da06b8c2d049174cdf6f1e17817532b9 = MAKE_CODEOBJECT(module_filename_obj, 42, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[35], NULL, NULL, 0, 0, 0);
    codeobj_05daed9b71e586bb85e45ff4559b3328 = MAKE_CODEOBJECT(module_filename_obj, 43, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[35], NULL, NULL, 0, 0, 0);
    codeobj_04769b1aa0582ba9102bad58190b87d7 = MAKE_CODEOBJECT(module_filename_obj, 44, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[35], NULL, NULL, 0, 0, 0);
    codeobj_fc7d5f571cdf83f06b01bd438f60d162 = MAKE_CODEOBJECT(module_filename_obj, 45, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[35], NULL, NULL, 0, 0, 0);
    codeobj_7a0ab281adb54c05501041a3f949568b = MAKE_CODEOBJECT(module_filename_obj, 46, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[35], NULL, NULL, 0, 0, 0);
    codeobj_53b9670651b63411b2276e95436caba2 = MAKE_CODEOBJECT(module_filename_obj, 47, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[35], NULL, NULL, 0, 0, 0);
    codeobj_e0f3d2c8899acda5a9a13ea05909ceb5 = MAKE_CODEOBJECT(module_filename_obj, 48, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[35], NULL, NULL, 0, 0, 0);
    codeobj_aa9aa4b9d5f7ae63a7adb465c7b9c7f0 = MAKE_CODEOBJECT(module_filename_obj, 49, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[35], NULL, NULL, 0, 0, 0);
    codeobj_d7c0ce02c689eed9e32a271e4b13f2cb = MAKE_CODEOBJECT(module_filename_obj, 50, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[35], NULL, NULL, 0, 0, 0);
    codeobj_fa3cd85496c2c83e79f546dbd177949e = MAKE_CODEOBJECT(module_filename_obj, 51, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[35], NULL, NULL, 0, 0, 0);
    codeobj_6908b45ea06f20eb93468ab83f82c43a = MAKE_CODEOBJECT(module_filename_obj, 52, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[35], NULL, NULL, 0, 0, 0);
    codeobj_8bbad72ef9fb38368c3ac3c7af654fd1 = MAKE_CODEOBJECT(module_filename_obj, 53, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[35], NULL, NULL, 0, 0, 0);
    codeobj_3ca471af766f9cc7d23829f6a5ddfb75 = MAKE_CODEOBJECT(module_filename_obj, 54, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[35], NULL, NULL, 0, 0, 0);
    codeobj_fe4f1ce43d748da839515f6ef8af097d = MAKE_CODEOBJECT(module_filename_obj, 55, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[35], NULL, NULL, 0, 0, 0);
    codeobj_6b504d33c348db1765a139e432590da8 = MAKE_CODEOBJECT(module_filename_obj, 56, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[35], NULL, NULL, 0, 0, 0);
    codeobj_5d694145f542720a07c956200bf29e01 = MAKE_CODEOBJECT(module_filename_obj, 57, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[35], NULL, NULL, 0, 0, 0);
    codeobj_9062fc9b5df0c430d0f3869dbc57e102 = MAKE_CODEOBJECT(module_filename_obj, 58, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[35], NULL, NULL, 0, 0, 0);
    codeobj_aa7f14b92842911b4ff4dc14be85bc75 = MAKE_CODEOBJECT(module_filename_obj, 59, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[35], NULL, NULL, 0, 0, 0);
    codeobj_9f3b06048659763feae613f05b6cf9a0 = MAKE_CODEOBJECT(module_filename_obj, 1, CO_NOFREE, mod_consts[63], NULL, NULL, 0, 0, 0);
}

// The module function declarations.
static PyObject *MAKE_FUNCTION_prompt_toolkit$filters$cli$$$function__10_lambda();


static PyObject *MAKE_FUNCTION_prompt_toolkit$filters$cli$$$function__11_lambda();


static PyObject *MAKE_FUNCTION_prompt_toolkit$filters$cli$$$function__12_lambda();


static PyObject *MAKE_FUNCTION_prompt_toolkit$filters$cli$$$function__13_lambda();


static PyObject *MAKE_FUNCTION_prompt_toolkit$filters$cli$$$function__14_lambda();


static PyObject *MAKE_FUNCTION_prompt_toolkit$filters$cli$$$function__15_lambda();


static PyObject *MAKE_FUNCTION_prompt_toolkit$filters$cli$$$function__16_lambda();


static PyObject *MAKE_FUNCTION_prompt_toolkit$filters$cli$$$function__17_lambda();


static PyObject *MAKE_FUNCTION_prompt_toolkit$filters$cli$$$function__18_lambda();


static PyObject *MAKE_FUNCTION_prompt_toolkit$filters$cli$$$function__19_lambda();


static PyObject *MAKE_FUNCTION_prompt_toolkit$filters$cli$$$function__1_lambda();


static PyObject *MAKE_FUNCTION_prompt_toolkit$filters$cli$$$function__20_lambda();


static PyObject *MAKE_FUNCTION_prompt_toolkit$filters$cli$$$function__21_lambda();


static PyObject *MAKE_FUNCTION_prompt_toolkit$filters$cli$$$function__22_lambda();


static PyObject *MAKE_FUNCTION_prompt_toolkit$filters$cli$$$function__23_lambda();


static PyObject *MAKE_FUNCTION_prompt_toolkit$filters$cli$$$function__2_lambda();


static PyObject *MAKE_FUNCTION_prompt_toolkit$filters$cli$$$function__3_lambda();


static PyObject *MAKE_FUNCTION_prompt_toolkit$filters$cli$$$function__4_lambda();


static PyObject *MAKE_FUNCTION_prompt_toolkit$filters$cli$$$function__5_lambda();


static PyObject *MAKE_FUNCTION_prompt_toolkit$filters$cli$$$function__6_lambda();


static PyObject *MAKE_FUNCTION_prompt_toolkit$filters$cli$$$function__7_lambda();


static PyObject *MAKE_FUNCTION_prompt_toolkit$filters$cli$$$function__8_lambda();


static PyObject *MAKE_FUNCTION_prompt_toolkit$filters$cli$$$function__9_lambda();


// The module function definitions.
static PyObject *impl_prompt_toolkit$filters$cli$$$function__1_lambda(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_FrameObject *frame_261e2e0a8ffc14dd4760963c16d1af7d;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_261e2e0a8ffc14dd4760963c16d1af7d = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_261e2e0a8ffc14dd4760963c16d1af7d)) {
        Py_XDECREF(cache_frame_261e2e0a8ffc14dd4760963c16d1af7d);

#if _DEBUG_REFCOUNTS
        if (cache_frame_261e2e0a8ffc14dd4760963c16d1af7d == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_261e2e0a8ffc14dd4760963c16d1af7d = MAKE_FUNCTION_FRAME(codeobj_261e2e0a8ffc14dd4760963c16d1af7d, module_prompt_toolkit$filters$cli, 0);
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_261e2e0a8ffc14dd4760963c16d1af7d->m_type_description == NULL);
    frame_261e2e0a8ffc14dd4760963c16d1af7d = cache_frame_261e2e0a8ffc14dd4760963c16d1af7d;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_261e2e0a8ffc14dd4760963c16d1af7d);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_261e2e0a8ffc14dd4760963c16d1af7d) == 2); // Frame stack

    // Framed code:
    tmp_return_value = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$filters$cli, (Nuitka_StringObject *)mod_consts[0]);

    if (unlikely(tmp_return_value == NULL)) {
        tmp_return_value = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
    }

    if (tmp_return_value == NULL) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 37;

        goto frame_exception_exit_1;
    }
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_261e2e0a8ffc14dd4760963c16d1af7d);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_261e2e0a8ffc14dd4760963c16d1af7d);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_261e2e0a8ffc14dd4760963c16d1af7d);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_261e2e0a8ffc14dd4760963c16d1af7d, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_261e2e0a8ffc14dd4760963c16d1af7d->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_261e2e0a8ffc14dd4760963c16d1af7d, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_261e2e0a8ffc14dd4760963c16d1af7d,
        type_description_1
    );


    // Release cached frame if used for exception.
    if (frame_261e2e0a8ffc14dd4760963c16d1af7d == cache_frame_261e2e0a8ffc14dd4760963c16d1af7d) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_261e2e0a8ffc14dd4760963c16d1af7d);
        cache_frame_261e2e0a8ffc14dd4760963c16d1af7d = NULL;
    }

    assertFrameObject(frame_261e2e0a8ffc14dd4760963c16d1af7d);

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


static PyObject *impl_prompt_toolkit$filters$cli$$$function__2_lambda(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_FrameObject *frame_355c3869126f015e5c8ed734b6d7d5ca;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_355c3869126f015e5c8ed734b6d7d5ca = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_355c3869126f015e5c8ed734b6d7d5ca)) {
        Py_XDECREF(cache_frame_355c3869126f015e5c8ed734b6d7d5ca);

#if _DEBUG_REFCOUNTS
        if (cache_frame_355c3869126f015e5c8ed734b6d7d5ca == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_355c3869126f015e5c8ed734b6d7d5ca = MAKE_FUNCTION_FRAME(codeobj_355c3869126f015e5c8ed734b6d7d5ca, module_prompt_toolkit$filters$cli, 0);
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_355c3869126f015e5c8ed734b6d7d5ca->m_type_description == NULL);
    frame_355c3869126f015e5c8ed734b6d7d5ca = cache_frame_355c3869126f015e5c8ed734b6d7d5ca;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_355c3869126f015e5c8ed734b6d7d5ca);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_355c3869126f015e5c8ed734b6d7d5ca) == 2); // Frame stack

    // Framed code:
    tmp_return_value = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$filters$cli, (Nuitka_StringObject *)mod_consts[1]);

    if (unlikely(tmp_return_value == NULL)) {
        tmp_return_value = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
    }

    if (tmp_return_value == NULL) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 38;

        goto frame_exception_exit_1;
    }
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_355c3869126f015e5c8ed734b6d7d5ca);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_355c3869126f015e5c8ed734b6d7d5ca);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_355c3869126f015e5c8ed734b6d7d5ca);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_355c3869126f015e5c8ed734b6d7d5ca, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_355c3869126f015e5c8ed734b6d7d5ca->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_355c3869126f015e5c8ed734b6d7d5ca, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_355c3869126f015e5c8ed734b6d7d5ca,
        type_description_1
    );


    // Release cached frame if used for exception.
    if (frame_355c3869126f015e5c8ed734b6d7d5ca == cache_frame_355c3869126f015e5c8ed734b6d7d5ca) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_355c3869126f015e5c8ed734b6d7d5ca);
        cache_frame_355c3869126f015e5c8ed734b6d7d5ca = NULL;
    }

    assertFrameObject(frame_355c3869126f015e5c8ed734b6d7d5ca);

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


static PyObject *impl_prompt_toolkit$filters$cli$$$function__3_lambda(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_FrameObject *frame_d409b8121c14866444e18e62af89d8e0;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_d409b8121c14866444e18e62af89d8e0 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_d409b8121c14866444e18e62af89d8e0)) {
        Py_XDECREF(cache_frame_d409b8121c14866444e18e62af89d8e0);

#if _DEBUG_REFCOUNTS
        if (cache_frame_d409b8121c14866444e18e62af89d8e0 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_d409b8121c14866444e18e62af89d8e0 = MAKE_FUNCTION_FRAME(codeobj_d409b8121c14866444e18e62af89d8e0, module_prompt_toolkit$filters$cli, 0);
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_d409b8121c14866444e18e62af89d8e0->m_type_description == NULL);
    frame_d409b8121c14866444e18e62af89d8e0 = cache_frame_d409b8121c14866444e18e62af89d8e0;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_d409b8121c14866444e18e62af89d8e0);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_d409b8121c14866444e18e62af89d8e0) == 2); // Frame stack

    // Framed code:
    tmp_return_value = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$filters$cli, (Nuitka_StringObject *)mod_consts[2]);

    if (unlikely(tmp_return_value == NULL)) {
        tmp_return_value = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
    }

    if (tmp_return_value == NULL) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 39;

        goto frame_exception_exit_1;
    }
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_d409b8121c14866444e18e62af89d8e0);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_d409b8121c14866444e18e62af89d8e0);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_d409b8121c14866444e18e62af89d8e0);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_d409b8121c14866444e18e62af89d8e0, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_d409b8121c14866444e18e62af89d8e0->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_d409b8121c14866444e18e62af89d8e0, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_d409b8121c14866444e18e62af89d8e0,
        type_description_1
    );


    // Release cached frame if used for exception.
    if (frame_d409b8121c14866444e18e62af89d8e0 == cache_frame_d409b8121c14866444e18e62af89d8e0) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_d409b8121c14866444e18e62af89d8e0);
        cache_frame_d409b8121c14866444e18e62af89d8e0 = NULL;
    }

    assertFrameObject(frame_d409b8121c14866444e18e62af89d8e0);

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


static PyObject *impl_prompt_toolkit$filters$cli$$$function__4_lambda(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_FrameObject *frame_53c4b4e938f626078e639c5eff08e21d;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_53c4b4e938f626078e639c5eff08e21d = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_53c4b4e938f626078e639c5eff08e21d)) {
        Py_XDECREF(cache_frame_53c4b4e938f626078e639c5eff08e21d);

#if _DEBUG_REFCOUNTS
        if (cache_frame_53c4b4e938f626078e639c5eff08e21d == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_53c4b4e938f626078e639c5eff08e21d = MAKE_FUNCTION_FRAME(codeobj_53c4b4e938f626078e639c5eff08e21d, module_prompt_toolkit$filters$cli, 0);
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_53c4b4e938f626078e639c5eff08e21d->m_type_description == NULL);
    frame_53c4b4e938f626078e639c5eff08e21d = cache_frame_53c4b4e938f626078e639c5eff08e21d;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_53c4b4e938f626078e639c5eff08e21d);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_53c4b4e938f626078e639c5eff08e21d) == 2); // Frame stack

    // Framed code:
    tmp_return_value = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$filters$cli, (Nuitka_StringObject *)mod_consts[3]);

    if (unlikely(tmp_return_value == NULL)) {
        tmp_return_value = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
    }

    if (tmp_return_value == NULL) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 40;

        goto frame_exception_exit_1;
    }
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_53c4b4e938f626078e639c5eff08e21d);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_53c4b4e938f626078e639c5eff08e21d);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_53c4b4e938f626078e639c5eff08e21d);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_53c4b4e938f626078e639c5eff08e21d, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_53c4b4e938f626078e639c5eff08e21d->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_53c4b4e938f626078e639c5eff08e21d, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_53c4b4e938f626078e639c5eff08e21d,
        type_description_1
    );


    // Release cached frame if used for exception.
    if (frame_53c4b4e938f626078e639c5eff08e21d == cache_frame_53c4b4e938f626078e639c5eff08e21d) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_53c4b4e938f626078e639c5eff08e21d);
        cache_frame_53c4b4e938f626078e639c5eff08e21d = NULL;
    }

    assertFrameObject(frame_53c4b4e938f626078e639c5eff08e21d);

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


static PyObject *impl_prompt_toolkit$filters$cli$$$function__5_lambda(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_FrameObject *frame_20a8ccc88f869243a37f2fa25b539b6b;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_20a8ccc88f869243a37f2fa25b539b6b = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_20a8ccc88f869243a37f2fa25b539b6b)) {
        Py_XDECREF(cache_frame_20a8ccc88f869243a37f2fa25b539b6b);

#if _DEBUG_REFCOUNTS
        if (cache_frame_20a8ccc88f869243a37f2fa25b539b6b == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_20a8ccc88f869243a37f2fa25b539b6b = MAKE_FUNCTION_FRAME(codeobj_20a8ccc88f869243a37f2fa25b539b6b, module_prompt_toolkit$filters$cli, 0);
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_20a8ccc88f869243a37f2fa25b539b6b->m_type_description == NULL);
    frame_20a8ccc88f869243a37f2fa25b539b6b = cache_frame_20a8ccc88f869243a37f2fa25b539b6b;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_20a8ccc88f869243a37f2fa25b539b6b);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_20a8ccc88f869243a37f2fa25b539b6b) == 2); // Frame stack

    // Framed code:
    tmp_return_value = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$filters$cli, (Nuitka_StringObject *)mod_consts[4]);

    if (unlikely(tmp_return_value == NULL)) {
        tmp_return_value = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[4]);
    }

    if (tmp_return_value == NULL) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 41;

        goto frame_exception_exit_1;
    }
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_20a8ccc88f869243a37f2fa25b539b6b);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_20a8ccc88f869243a37f2fa25b539b6b);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_20a8ccc88f869243a37f2fa25b539b6b);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_20a8ccc88f869243a37f2fa25b539b6b, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_20a8ccc88f869243a37f2fa25b539b6b->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_20a8ccc88f869243a37f2fa25b539b6b, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_20a8ccc88f869243a37f2fa25b539b6b,
        type_description_1
    );


    // Release cached frame if used for exception.
    if (frame_20a8ccc88f869243a37f2fa25b539b6b == cache_frame_20a8ccc88f869243a37f2fa25b539b6b) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_20a8ccc88f869243a37f2fa25b539b6b);
        cache_frame_20a8ccc88f869243a37f2fa25b539b6b = NULL;
    }

    assertFrameObject(frame_20a8ccc88f869243a37f2fa25b539b6b);

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


static PyObject *impl_prompt_toolkit$filters$cli$$$function__6_lambda(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_FrameObject *frame_da06b8c2d049174cdf6f1e17817532b9;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_da06b8c2d049174cdf6f1e17817532b9 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_da06b8c2d049174cdf6f1e17817532b9)) {
        Py_XDECREF(cache_frame_da06b8c2d049174cdf6f1e17817532b9);

#if _DEBUG_REFCOUNTS
        if (cache_frame_da06b8c2d049174cdf6f1e17817532b9 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_da06b8c2d049174cdf6f1e17817532b9 = MAKE_FUNCTION_FRAME(codeobj_da06b8c2d049174cdf6f1e17817532b9, module_prompt_toolkit$filters$cli, 0);
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_da06b8c2d049174cdf6f1e17817532b9->m_type_description == NULL);
    frame_da06b8c2d049174cdf6f1e17817532b9 = cache_frame_da06b8c2d049174cdf6f1e17817532b9;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_da06b8c2d049174cdf6f1e17817532b9);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_da06b8c2d049174cdf6f1e17817532b9) == 2); // Frame stack

    // Framed code:
    tmp_return_value = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$filters$cli, (Nuitka_StringObject *)mod_consts[5]);

    if (unlikely(tmp_return_value == NULL)) {
        tmp_return_value = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[5]);
    }

    if (tmp_return_value == NULL) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 42;

        goto frame_exception_exit_1;
    }
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_da06b8c2d049174cdf6f1e17817532b9);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_da06b8c2d049174cdf6f1e17817532b9);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_da06b8c2d049174cdf6f1e17817532b9);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_da06b8c2d049174cdf6f1e17817532b9, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_da06b8c2d049174cdf6f1e17817532b9->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_da06b8c2d049174cdf6f1e17817532b9, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_da06b8c2d049174cdf6f1e17817532b9,
        type_description_1
    );


    // Release cached frame if used for exception.
    if (frame_da06b8c2d049174cdf6f1e17817532b9 == cache_frame_da06b8c2d049174cdf6f1e17817532b9) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_da06b8c2d049174cdf6f1e17817532b9);
        cache_frame_da06b8c2d049174cdf6f1e17817532b9 = NULL;
    }

    assertFrameObject(frame_da06b8c2d049174cdf6f1e17817532b9);

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


static PyObject *impl_prompt_toolkit$filters$cli$$$function__7_lambda(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_FrameObject *frame_05daed9b71e586bb85e45ff4559b3328;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_05daed9b71e586bb85e45ff4559b3328 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_05daed9b71e586bb85e45ff4559b3328)) {
        Py_XDECREF(cache_frame_05daed9b71e586bb85e45ff4559b3328);

#if _DEBUG_REFCOUNTS
        if (cache_frame_05daed9b71e586bb85e45ff4559b3328 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_05daed9b71e586bb85e45ff4559b3328 = MAKE_FUNCTION_FRAME(codeobj_05daed9b71e586bb85e45ff4559b3328, module_prompt_toolkit$filters$cli, 0);
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_05daed9b71e586bb85e45ff4559b3328->m_type_description == NULL);
    frame_05daed9b71e586bb85e45ff4559b3328 = cache_frame_05daed9b71e586bb85e45ff4559b3328;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_05daed9b71e586bb85e45ff4559b3328);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_05daed9b71e586bb85e45ff4559b3328) == 2); // Frame stack

    // Framed code:
    tmp_return_value = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$filters$cli, (Nuitka_StringObject *)mod_consts[6]);

    if (unlikely(tmp_return_value == NULL)) {
        tmp_return_value = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
    }

    if (tmp_return_value == NULL) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 43;

        goto frame_exception_exit_1;
    }
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_05daed9b71e586bb85e45ff4559b3328);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_05daed9b71e586bb85e45ff4559b3328);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_05daed9b71e586bb85e45ff4559b3328);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_05daed9b71e586bb85e45ff4559b3328, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_05daed9b71e586bb85e45ff4559b3328->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_05daed9b71e586bb85e45ff4559b3328, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_05daed9b71e586bb85e45ff4559b3328,
        type_description_1
    );


    // Release cached frame if used for exception.
    if (frame_05daed9b71e586bb85e45ff4559b3328 == cache_frame_05daed9b71e586bb85e45ff4559b3328) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_05daed9b71e586bb85e45ff4559b3328);
        cache_frame_05daed9b71e586bb85e45ff4559b3328 = NULL;
    }

    assertFrameObject(frame_05daed9b71e586bb85e45ff4559b3328);

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


static PyObject *impl_prompt_toolkit$filters$cli$$$function__8_lambda(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_FrameObject *frame_04769b1aa0582ba9102bad58190b87d7;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_04769b1aa0582ba9102bad58190b87d7 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_04769b1aa0582ba9102bad58190b87d7)) {
        Py_XDECREF(cache_frame_04769b1aa0582ba9102bad58190b87d7);

#if _DEBUG_REFCOUNTS
        if (cache_frame_04769b1aa0582ba9102bad58190b87d7 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_04769b1aa0582ba9102bad58190b87d7 = MAKE_FUNCTION_FRAME(codeobj_04769b1aa0582ba9102bad58190b87d7, module_prompt_toolkit$filters$cli, 0);
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_04769b1aa0582ba9102bad58190b87d7->m_type_description == NULL);
    frame_04769b1aa0582ba9102bad58190b87d7 = cache_frame_04769b1aa0582ba9102bad58190b87d7;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_04769b1aa0582ba9102bad58190b87d7);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_04769b1aa0582ba9102bad58190b87d7) == 2); // Frame stack

    // Framed code:
    tmp_return_value = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$filters$cli, (Nuitka_StringObject *)mod_consts[7]);

    if (unlikely(tmp_return_value == NULL)) {
        tmp_return_value = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[7]);
    }

    if (tmp_return_value == NULL) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 44;

        goto frame_exception_exit_1;
    }
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_04769b1aa0582ba9102bad58190b87d7);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_04769b1aa0582ba9102bad58190b87d7);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_04769b1aa0582ba9102bad58190b87d7);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_04769b1aa0582ba9102bad58190b87d7, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_04769b1aa0582ba9102bad58190b87d7->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_04769b1aa0582ba9102bad58190b87d7, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_04769b1aa0582ba9102bad58190b87d7,
        type_description_1
    );


    // Release cached frame if used for exception.
    if (frame_04769b1aa0582ba9102bad58190b87d7 == cache_frame_04769b1aa0582ba9102bad58190b87d7) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_04769b1aa0582ba9102bad58190b87d7);
        cache_frame_04769b1aa0582ba9102bad58190b87d7 = NULL;
    }

    assertFrameObject(frame_04769b1aa0582ba9102bad58190b87d7);

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


static PyObject *impl_prompt_toolkit$filters$cli$$$function__9_lambda(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_FrameObject *frame_fc7d5f571cdf83f06b01bd438f60d162;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_fc7d5f571cdf83f06b01bd438f60d162 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_fc7d5f571cdf83f06b01bd438f60d162)) {
        Py_XDECREF(cache_frame_fc7d5f571cdf83f06b01bd438f60d162);

#if _DEBUG_REFCOUNTS
        if (cache_frame_fc7d5f571cdf83f06b01bd438f60d162 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_fc7d5f571cdf83f06b01bd438f60d162 = MAKE_FUNCTION_FRAME(codeobj_fc7d5f571cdf83f06b01bd438f60d162, module_prompt_toolkit$filters$cli, 0);
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_fc7d5f571cdf83f06b01bd438f60d162->m_type_description == NULL);
    frame_fc7d5f571cdf83f06b01bd438f60d162 = cache_frame_fc7d5f571cdf83f06b01bd438f60d162;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_fc7d5f571cdf83f06b01bd438f60d162);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_fc7d5f571cdf83f06b01bd438f60d162) == 2); // Frame stack

    // Framed code:
    tmp_return_value = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$filters$cli, (Nuitka_StringObject *)mod_consts[8]);

    if (unlikely(tmp_return_value == NULL)) {
        tmp_return_value = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[8]);
    }

    if (tmp_return_value == NULL) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 45;

        goto frame_exception_exit_1;
    }
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_fc7d5f571cdf83f06b01bd438f60d162);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_fc7d5f571cdf83f06b01bd438f60d162);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_fc7d5f571cdf83f06b01bd438f60d162);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_fc7d5f571cdf83f06b01bd438f60d162, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_fc7d5f571cdf83f06b01bd438f60d162->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_fc7d5f571cdf83f06b01bd438f60d162, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_fc7d5f571cdf83f06b01bd438f60d162,
        type_description_1
    );


    // Release cached frame if used for exception.
    if (frame_fc7d5f571cdf83f06b01bd438f60d162 == cache_frame_fc7d5f571cdf83f06b01bd438f60d162) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_fc7d5f571cdf83f06b01bd438f60d162);
        cache_frame_fc7d5f571cdf83f06b01bd438f60d162 = NULL;
    }

    assertFrameObject(frame_fc7d5f571cdf83f06b01bd438f60d162);

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


static PyObject *impl_prompt_toolkit$filters$cli$$$function__10_lambda(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_FrameObject *frame_7a0ab281adb54c05501041a3f949568b;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_7a0ab281adb54c05501041a3f949568b = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_7a0ab281adb54c05501041a3f949568b)) {
        Py_XDECREF(cache_frame_7a0ab281adb54c05501041a3f949568b);

#if _DEBUG_REFCOUNTS
        if (cache_frame_7a0ab281adb54c05501041a3f949568b == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_7a0ab281adb54c05501041a3f949568b = MAKE_FUNCTION_FRAME(codeobj_7a0ab281adb54c05501041a3f949568b, module_prompt_toolkit$filters$cli, 0);
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_7a0ab281adb54c05501041a3f949568b->m_type_description == NULL);
    frame_7a0ab281adb54c05501041a3f949568b = cache_frame_7a0ab281adb54c05501041a3f949568b;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_7a0ab281adb54c05501041a3f949568b);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_7a0ab281adb54c05501041a3f949568b) == 2); // Frame stack

    // Framed code:
    tmp_return_value = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$filters$cli, (Nuitka_StringObject *)mod_consts[9]);

    if (unlikely(tmp_return_value == NULL)) {
        tmp_return_value = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
    }

    if (tmp_return_value == NULL) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 46;

        goto frame_exception_exit_1;
    }
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_7a0ab281adb54c05501041a3f949568b);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_7a0ab281adb54c05501041a3f949568b);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_7a0ab281adb54c05501041a3f949568b);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_7a0ab281adb54c05501041a3f949568b, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_7a0ab281adb54c05501041a3f949568b->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_7a0ab281adb54c05501041a3f949568b, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_7a0ab281adb54c05501041a3f949568b,
        type_description_1
    );


    // Release cached frame if used for exception.
    if (frame_7a0ab281adb54c05501041a3f949568b == cache_frame_7a0ab281adb54c05501041a3f949568b) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_7a0ab281adb54c05501041a3f949568b);
        cache_frame_7a0ab281adb54c05501041a3f949568b = NULL;
    }

    assertFrameObject(frame_7a0ab281adb54c05501041a3f949568b);

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


static PyObject *impl_prompt_toolkit$filters$cli$$$function__11_lambda(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_FrameObject *frame_53b9670651b63411b2276e95436caba2;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_53b9670651b63411b2276e95436caba2 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_53b9670651b63411b2276e95436caba2)) {
        Py_XDECREF(cache_frame_53b9670651b63411b2276e95436caba2);

#if _DEBUG_REFCOUNTS
        if (cache_frame_53b9670651b63411b2276e95436caba2 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_53b9670651b63411b2276e95436caba2 = MAKE_FUNCTION_FRAME(codeobj_53b9670651b63411b2276e95436caba2, module_prompt_toolkit$filters$cli, 0);
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_53b9670651b63411b2276e95436caba2->m_type_description == NULL);
    frame_53b9670651b63411b2276e95436caba2 = cache_frame_53b9670651b63411b2276e95436caba2;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_53b9670651b63411b2276e95436caba2);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_53b9670651b63411b2276e95436caba2) == 2); // Frame stack

    // Framed code:
    tmp_return_value = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$filters$cli, (Nuitka_StringObject *)mod_consts[9]);

    if (unlikely(tmp_return_value == NULL)) {
        tmp_return_value = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
    }

    if (tmp_return_value == NULL) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 47;

        goto frame_exception_exit_1;
    }
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_53b9670651b63411b2276e95436caba2);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_53b9670651b63411b2276e95436caba2);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_53b9670651b63411b2276e95436caba2);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_53b9670651b63411b2276e95436caba2, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_53b9670651b63411b2276e95436caba2->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_53b9670651b63411b2276e95436caba2, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_53b9670651b63411b2276e95436caba2,
        type_description_1
    );


    // Release cached frame if used for exception.
    if (frame_53b9670651b63411b2276e95436caba2 == cache_frame_53b9670651b63411b2276e95436caba2) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_53b9670651b63411b2276e95436caba2);
        cache_frame_53b9670651b63411b2276e95436caba2 = NULL;
    }

    assertFrameObject(frame_53b9670651b63411b2276e95436caba2);

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


static PyObject *impl_prompt_toolkit$filters$cli$$$function__12_lambda(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_FrameObject *frame_e0f3d2c8899acda5a9a13ea05909ceb5;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_e0f3d2c8899acda5a9a13ea05909ceb5 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_e0f3d2c8899acda5a9a13ea05909ceb5)) {
        Py_XDECREF(cache_frame_e0f3d2c8899acda5a9a13ea05909ceb5);

#if _DEBUG_REFCOUNTS
        if (cache_frame_e0f3d2c8899acda5a9a13ea05909ceb5 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_e0f3d2c8899acda5a9a13ea05909ceb5 = MAKE_FUNCTION_FRAME(codeobj_e0f3d2c8899acda5a9a13ea05909ceb5, module_prompt_toolkit$filters$cli, 0);
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_e0f3d2c8899acda5a9a13ea05909ceb5->m_type_description == NULL);
    frame_e0f3d2c8899acda5a9a13ea05909ceb5 = cache_frame_e0f3d2c8899acda5a9a13ea05909ceb5;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_e0f3d2c8899acda5a9a13ea05909ceb5);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_e0f3d2c8899acda5a9a13ea05909ceb5) == 2); // Frame stack

    // Framed code:
    tmp_return_value = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$filters$cli, (Nuitka_StringObject *)mod_consts[10]);

    if (unlikely(tmp_return_value == NULL)) {
        tmp_return_value = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
    }

    if (tmp_return_value == NULL) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 48;

        goto frame_exception_exit_1;
    }
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_e0f3d2c8899acda5a9a13ea05909ceb5);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_e0f3d2c8899acda5a9a13ea05909ceb5);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_e0f3d2c8899acda5a9a13ea05909ceb5);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_e0f3d2c8899acda5a9a13ea05909ceb5, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_e0f3d2c8899acda5a9a13ea05909ceb5->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_e0f3d2c8899acda5a9a13ea05909ceb5, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_e0f3d2c8899acda5a9a13ea05909ceb5,
        type_description_1
    );


    // Release cached frame if used for exception.
    if (frame_e0f3d2c8899acda5a9a13ea05909ceb5 == cache_frame_e0f3d2c8899acda5a9a13ea05909ceb5) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_e0f3d2c8899acda5a9a13ea05909ceb5);
        cache_frame_e0f3d2c8899acda5a9a13ea05909ceb5 = NULL;
    }

    assertFrameObject(frame_e0f3d2c8899acda5a9a13ea05909ceb5);

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


static PyObject *impl_prompt_toolkit$filters$cli$$$function__13_lambda(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_FrameObject *frame_aa9aa4b9d5f7ae63a7adb465c7b9c7f0;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_aa9aa4b9d5f7ae63a7adb465c7b9c7f0 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_aa9aa4b9d5f7ae63a7adb465c7b9c7f0)) {
        Py_XDECREF(cache_frame_aa9aa4b9d5f7ae63a7adb465c7b9c7f0);

#if _DEBUG_REFCOUNTS
        if (cache_frame_aa9aa4b9d5f7ae63a7adb465c7b9c7f0 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_aa9aa4b9d5f7ae63a7adb465c7b9c7f0 = MAKE_FUNCTION_FRAME(codeobj_aa9aa4b9d5f7ae63a7adb465c7b9c7f0, module_prompt_toolkit$filters$cli, 0);
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_aa9aa4b9d5f7ae63a7adb465c7b9c7f0->m_type_description == NULL);
    frame_aa9aa4b9d5f7ae63a7adb465c7b9c7f0 = cache_frame_aa9aa4b9d5f7ae63a7adb465c7b9c7f0;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_aa9aa4b9d5f7ae63a7adb465c7b9c7f0);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_aa9aa4b9d5f7ae63a7adb465c7b9c7f0) == 2); // Frame stack

    // Framed code:
    tmp_return_value = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$filters$cli, (Nuitka_StringObject *)mod_consts[11]);

    if (unlikely(tmp_return_value == NULL)) {
        tmp_return_value = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
    }

    if (tmp_return_value == NULL) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 49;

        goto frame_exception_exit_1;
    }
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_aa9aa4b9d5f7ae63a7adb465c7b9c7f0);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_aa9aa4b9d5f7ae63a7adb465c7b9c7f0);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_aa9aa4b9d5f7ae63a7adb465c7b9c7f0);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_aa9aa4b9d5f7ae63a7adb465c7b9c7f0, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_aa9aa4b9d5f7ae63a7adb465c7b9c7f0->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_aa9aa4b9d5f7ae63a7adb465c7b9c7f0, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_aa9aa4b9d5f7ae63a7adb465c7b9c7f0,
        type_description_1
    );


    // Release cached frame if used for exception.
    if (frame_aa9aa4b9d5f7ae63a7adb465c7b9c7f0 == cache_frame_aa9aa4b9d5f7ae63a7adb465c7b9c7f0) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_aa9aa4b9d5f7ae63a7adb465c7b9c7f0);
        cache_frame_aa9aa4b9d5f7ae63a7adb465c7b9c7f0 = NULL;
    }

    assertFrameObject(frame_aa9aa4b9d5f7ae63a7adb465c7b9c7f0);

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


static PyObject *impl_prompt_toolkit$filters$cli$$$function__14_lambda(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_FrameObject *frame_d7c0ce02c689eed9e32a271e4b13f2cb;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_d7c0ce02c689eed9e32a271e4b13f2cb = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_d7c0ce02c689eed9e32a271e4b13f2cb)) {
        Py_XDECREF(cache_frame_d7c0ce02c689eed9e32a271e4b13f2cb);

#if _DEBUG_REFCOUNTS
        if (cache_frame_d7c0ce02c689eed9e32a271e4b13f2cb == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_d7c0ce02c689eed9e32a271e4b13f2cb = MAKE_FUNCTION_FRAME(codeobj_d7c0ce02c689eed9e32a271e4b13f2cb, module_prompt_toolkit$filters$cli, 0);
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_d7c0ce02c689eed9e32a271e4b13f2cb->m_type_description == NULL);
    frame_d7c0ce02c689eed9e32a271e4b13f2cb = cache_frame_d7c0ce02c689eed9e32a271e4b13f2cb;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_d7c0ce02c689eed9e32a271e4b13f2cb);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_d7c0ce02c689eed9e32a271e4b13f2cb) == 2); // Frame stack

    // Framed code:
    tmp_return_value = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$filters$cli, (Nuitka_StringObject *)mod_consts[12]);

    if (unlikely(tmp_return_value == NULL)) {
        tmp_return_value = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[12]);
    }

    if (tmp_return_value == NULL) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 50;

        goto frame_exception_exit_1;
    }
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_d7c0ce02c689eed9e32a271e4b13f2cb);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_d7c0ce02c689eed9e32a271e4b13f2cb);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_d7c0ce02c689eed9e32a271e4b13f2cb);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_d7c0ce02c689eed9e32a271e4b13f2cb, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_d7c0ce02c689eed9e32a271e4b13f2cb->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_d7c0ce02c689eed9e32a271e4b13f2cb, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_d7c0ce02c689eed9e32a271e4b13f2cb,
        type_description_1
    );


    // Release cached frame if used for exception.
    if (frame_d7c0ce02c689eed9e32a271e4b13f2cb == cache_frame_d7c0ce02c689eed9e32a271e4b13f2cb) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_d7c0ce02c689eed9e32a271e4b13f2cb);
        cache_frame_d7c0ce02c689eed9e32a271e4b13f2cb = NULL;
    }

    assertFrameObject(frame_d7c0ce02c689eed9e32a271e4b13f2cb);

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


static PyObject *impl_prompt_toolkit$filters$cli$$$function__15_lambda(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_FrameObject *frame_fa3cd85496c2c83e79f546dbd177949e;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_fa3cd85496c2c83e79f546dbd177949e = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_fa3cd85496c2c83e79f546dbd177949e)) {
        Py_XDECREF(cache_frame_fa3cd85496c2c83e79f546dbd177949e);

#if _DEBUG_REFCOUNTS
        if (cache_frame_fa3cd85496c2c83e79f546dbd177949e == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_fa3cd85496c2c83e79f546dbd177949e = MAKE_FUNCTION_FRAME(codeobj_fa3cd85496c2c83e79f546dbd177949e, module_prompt_toolkit$filters$cli, 0);
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_fa3cd85496c2c83e79f546dbd177949e->m_type_description == NULL);
    frame_fa3cd85496c2c83e79f546dbd177949e = cache_frame_fa3cd85496c2c83e79f546dbd177949e;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_fa3cd85496c2c83e79f546dbd177949e);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_fa3cd85496c2c83e79f546dbd177949e) == 2); // Frame stack

    // Framed code:
    tmp_return_value = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$filters$cli, (Nuitka_StringObject *)mod_consts[13]);

    if (unlikely(tmp_return_value == NULL)) {
        tmp_return_value = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[13]);
    }

    if (tmp_return_value == NULL) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 51;

        goto frame_exception_exit_1;
    }
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_fa3cd85496c2c83e79f546dbd177949e);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_fa3cd85496c2c83e79f546dbd177949e);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_fa3cd85496c2c83e79f546dbd177949e);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_fa3cd85496c2c83e79f546dbd177949e, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_fa3cd85496c2c83e79f546dbd177949e->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_fa3cd85496c2c83e79f546dbd177949e, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_fa3cd85496c2c83e79f546dbd177949e,
        type_description_1
    );


    // Release cached frame if used for exception.
    if (frame_fa3cd85496c2c83e79f546dbd177949e == cache_frame_fa3cd85496c2c83e79f546dbd177949e) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_fa3cd85496c2c83e79f546dbd177949e);
        cache_frame_fa3cd85496c2c83e79f546dbd177949e = NULL;
    }

    assertFrameObject(frame_fa3cd85496c2c83e79f546dbd177949e);

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


static PyObject *impl_prompt_toolkit$filters$cli$$$function__16_lambda(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_FrameObject *frame_6908b45ea06f20eb93468ab83f82c43a;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_6908b45ea06f20eb93468ab83f82c43a = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_6908b45ea06f20eb93468ab83f82c43a)) {
        Py_XDECREF(cache_frame_6908b45ea06f20eb93468ab83f82c43a);

#if _DEBUG_REFCOUNTS
        if (cache_frame_6908b45ea06f20eb93468ab83f82c43a == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_6908b45ea06f20eb93468ab83f82c43a = MAKE_FUNCTION_FRAME(codeobj_6908b45ea06f20eb93468ab83f82c43a, module_prompt_toolkit$filters$cli, 0);
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_6908b45ea06f20eb93468ab83f82c43a->m_type_description == NULL);
    frame_6908b45ea06f20eb93468ab83f82c43a = cache_frame_6908b45ea06f20eb93468ab83f82c43a;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_6908b45ea06f20eb93468ab83f82c43a);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_6908b45ea06f20eb93468ab83f82c43a) == 2); // Frame stack

    // Framed code:
    tmp_return_value = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$filters$cli, (Nuitka_StringObject *)mod_consts[14]);

    if (unlikely(tmp_return_value == NULL)) {
        tmp_return_value = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[14]);
    }

    if (tmp_return_value == NULL) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 52;

        goto frame_exception_exit_1;
    }
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_6908b45ea06f20eb93468ab83f82c43a);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_6908b45ea06f20eb93468ab83f82c43a);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_6908b45ea06f20eb93468ab83f82c43a);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_6908b45ea06f20eb93468ab83f82c43a, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_6908b45ea06f20eb93468ab83f82c43a->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_6908b45ea06f20eb93468ab83f82c43a, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_6908b45ea06f20eb93468ab83f82c43a,
        type_description_1
    );


    // Release cached frame if used for exception.
    if (frame_6908b45ea06f20eb93468ab83f82c43a == cache_frame_6908b45ea06f20eb93468ab83f82c43a) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_6908b45ea06f20eb93468ab83f82c43a);
        cache_frame_6908b45ea06f20eb93468ab83f82c43a = NULL;
    }

    assertFrameObject(frame_6908b45ea06f20eb93468ab83f82c43a);

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


static PyObject *impl_prompt_toolkit$filters$cli$$$function__17_lambda(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_FrameObject *frame_8bbad72ef9fb38368c3ac3c7af654fd1;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_8bbad72ef9fb38368c3ac3c7af654fd1 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_8bbad72ef9fb38368c3ac3c7af654fd1)) {
        Py_XDECREF(cache_frame_8bbad72ef9fb38368c3ac3c7af654fd1);

#if _DEBUG_REFCOUNTS
        if (cache_frame_8bbad72ef9fb38368c3ac3c7af654fd1 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_8bbad72ef9fb38368c3ac3c7af654fd1 = MAKE_FUNCTION_FRAME(codeobj_8bbad72ef9fb38368c3ac3c7af654fd1, module_prompt_toolkit$filters$cli, 0);
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_8bbad72ef9fb38368c3ac3c7af654fd1->m_type_description == NULL);
    frame_8bbad72ef9fb38368c3ac3c7af654fd1 = cache_frame_8bbad72ef9fb38368c3ac3c7af654fd1;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_8bbad72ef9fb38368c3ac3c7af654fd1);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_8bbad72ef9fb38368c3ac3c7af654fd1) == 2); // Frame stack

    // Framed code:
    tmp_return_value = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$filters$cli, (Nuitka_StringObject *)mod_consts[15]);

    if (unlikely(tmp_return_value == NULL)) {
        tmp_return_value = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
    }

    if (tmp_return_value == NULL) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 53;

        goto frame_exception_exit_1;
    }
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_8bbad72ef9fb38368c3ac3c7af654fd1);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_8bbad72ef9fb38368c3ac3c7af654fd1);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_8bbad72ef9fb38368c3ac3c7af654fd1);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_8bbad72ef9fb38368c3ac3c7af654fd1, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_8bbad72ef9fb38368c3ac3c7af654fd1->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_8bbad72ef9fb38368c3ac3c7af654fd1, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_8bbad72ef9fb38368c3ac3c7af654fd1,
        type_description_1
    );


    // Release cached frame if used for exception.
    if (frame_8bbad72ef9fb38368c3ac3c7af654fd1 == cache_frame_8bbad72ef9fb38368c3ac3c7af654fd1) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_8bbad72ef9fb38368c3ac3c7af654fd1);
        cache_frame_8bbad72ef9fb38368c3ac3c7af654fd1 = NULL;
    }

    assertFrameObject(frame_8bbad72ef9fb38368c3ac3c7af654fd1);

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


static PyObject *impl_prompt_toolkit$filters$cli$$$function__18_lambda(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_FrameObject *frame_3ca471af766f9cc7d23829f6a5ddfb75;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_3ca471af766f9cc7d23829f6a5ddfb75 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_3ca471af766f9cc7d23829f6a5ddfb75)) {
        Py_XDECREF(cache_frame_3ca471af766f9cc7d23829f6a5ddfb75);

#if _DEBUG_REFCOUNTS
        if (cache_frame_3ca471af766f9cc7d23829f6a5ddfb75 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_3ca471af766f9cc7d23829f6a5ddfb75 = MAKE_FUNCTION_FRAME(codeobj_3ca471af766f9cc7d23829f6a5ddfb75, module_prompt_toolkit$filters$cli, 0);
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_3ca471af766f9cc7d23829f6a5ddfb75->m_type_description == NULL);
    frame_3ca471af766f9cc7d23829f6a5ddfb75 = cache_frame_3ca471af766f9cc7d23829f6a5ddfb75;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_3ca471af766f9cc7d23829f6a5ddfb75);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_3ca471af766f9cc7d23829f6a5ddfb75) == 2); // Frame stack

    // Framed code:
    tmp_return_value = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$filters$cli, (Nuitka_StringObject *)mod_consts[16]);

    if (unlikely(tmp_return_value == NULL)) {
        tmp_return_value = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[16]);
    }

    if (tmp_return_value == NULL) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 54;

        goto frame_exception_exit_1;
    }
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_3ca471af766f9cc7d23829f6a5ddfb75);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_3ca471af766f9cc7d23829f6a5ddfb75);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_3ca471af766f9cc7d23829f6a5ddfb75);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_3ca471af766f9cc7d23829f6a5ddfb75, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_3ca471af766f9cc7d23829f6a5ddfb75->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_3ca471af766f9cc7d23829f6a5ddfb75, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_3ca471af766f9cc7d23829f6a5ddfb75,
        type_description_1
    );


    // Release cached frame if used for exception.
    if (frame_3ca471af766f9cc7d23829f6a5ddfb75 == cache_frame_3ca471af766f9cc7d23829f6a5ddfb75) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_3ca471af766f9cc7d23829f6a5ddfb75);
        cache_frame_3ca471af766f9cc7d23829f6a5ddfb75 = NULL;
    }

    assertFrameObject(frame_3ca471af766f9cc7d23829f6a5ddfb75);

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


static PyObject *impl_prompt_toolkit$filters$cli$$$function__19_lambda(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_FrameObject *frame_fe4f1ce43d748da839515f6ef8af097d;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_fe4f1ce43d748da839515f6ef8af097d = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_fe4f1ce43d748da839515f6ef8af097d)) {
        Py_XDECREF(cache_frame_fe4f1ce43d748da839515f6ef8af097d);

#if _DEBUG_REFCOUNTS
        if (cache_frame_fe4f1ce43d748da839515f6ef8af097d == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_fe4f1ce43d748da839515f6ef8af097d = MAKE_FUNCTION_FRAME(codeobj_fe4f1ce43d748da839515f6ef8af097d, module_prompt_toolkit$filters$cli, 0);
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_fe4f1ce43d748da839515f6ef8af097d->m_type_description == NULL);
    frame_fe4f1ce43d748da839515f6ef8af097d = cache_frame_fe4f1ce43d748da839515f6ef8af097d;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_fe4f1ce43d748da839515f6ef8af097d);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_fe4f1ce43d748da839515f6ef8af097d) == 2); // Frame stack

    // Framed code:
    tmp_return_value = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$filters$cli, (Nuitka_StringObject *)mod_consts[17]);

    if (unlikely(tmp_return_value == NULL)) {
        tmp_return_value = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[17]);
    }

    if (tmp_return_value == NULL) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 55;

        goto frame_exception_exit_1;
    }
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_fe4f1ce43d748da839515f6ef8af097d);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_fe4f1ce43d748da839515f6ef8af097d);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_fe4f1ce43d748da839515f6ef8af097d);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_fe4f1ce43d748da839515f6ef8af097d, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_fe4f1ce43d748da839515f6ef8af097d->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_fe4f1ce43d748da839515f6ef8af097d, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_fe4f1ce43d748da839515f6ef8af097d,
        type_description_1
    );


    // Release cached frame if used for exception.
    if (frame_fe4f1ce43d748da839515f6ef8af097d == cache_frame_fe4f1ce43d748da839515f6ef8af097d) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_fe4f1ce43d748da839515f6ef8af097d);
        cache_frame_fe4f1ce43d748da839515f6ef8af097d = NULL;
    }

    assertFrameObject(frame_fe4f1ce43d748da839515f6ef8af097d);

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


static PyObject *impl_prompt_toolkit$filters$cli$$$function__20_lambda(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_FrameObject *frame_6b504d33c348db1765a139e432590da8;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_6b504d33c348db1765a139e432590da8 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_6b504d33c348db1765a139e432590da8)) {
        Py_XDECREF(cache_frame_6b504d33c348db1765a139e432590da8);

#if _DEBUG_REFCOUNTS
        if (cache_frame_6b504d33c348db1765a139e432590da8 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_6b504d33c348db1765a139e432590da8 = MAKE_FUNCTION_FRAME(codeobj_6b504d33c348db1765a139e432590da8, module_prompt_toolkit$filters$cli, 0);
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_6b504d33c348db1765a139e432590da8->m_type_description == NULL);
    frame_6b504d33c348db1765a139e432590da8 = cache_frame_6b504d33c348db1765a139e432590da8;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_6b504d33c348db1765a139e432590da8);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_6b504d33c348db1765a139e432590da8) == 2); // Frame stack

    // Framed code:
    tmp_return_value = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$filters$cli, (Nuitka_StringObject *)mod_consts[18]);

    if (unlikely(tmp_return_value == NULL)) {
        tmp_return_value = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[18]);
    }

    if (tmp_return_value == NULL) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 56;

        goto frame_exception_exit_1;
    }
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_6b504d33c348db1765a139e432590da8);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_6b504d33c348db1765a139e432590da8);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_6b504d33c348db1765a139e432590da8);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_6b504d33c348db1765a139e432590da8, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_6b504d33c348db1765a139e432590da8->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_6b504d33c348db1765a139e432590da8, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_6b504d33c348db1765a139e432590da8,
        type_description_1
    );


    // Release cached frame if used for exception.
    if (frame_6b504d33c348db1765a139e432590da8 == cache_frame_6b504d33c348db1765a139e432590da8) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_6b504d33c348db1765a139e432590da8);
        cache_frame_6b504d33c348db1765a139e432590da8 = NULL;
    }

    assertFrameObject(frame_6b504d33c348db1765a139e432590da8);

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


static PyObject *impl_prompt_toolkit$filters$cli$$$function__21_lambda(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_FrameObject *frame_5d694145f542720a07c956200bf29e01;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_5d694145f542720a07c956200bf29e01 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_5d694145f542720a07c956200bf29e01)) {
        Py_XDECREF(cache_frame_5d694145f542720a07c956200bf29e01);

#if _DEBUG_REFCOUNTS
        if (cache_frame_5d694145f542720a07c956200bf29e01 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_5d694145f542720a07c956200bf29e01 = MAKE_FUNCTION_FRAME(codeobj_5d694145f542720a07c956200bf29e01, module_prompt_toolkit$filters$cli, 0);
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_5d694145f542720a07c956200bf29e01->m_type_description == NULL);
    frame_5d694145f542720a07c956200bf29e01 = cache_frame_5d694145f542720a07c956200bf29e01;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_5d694145f542720a07c956200bf29e01);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_5d694145f542720a07c956200bf29e01) == 2); // Frame stack

    // Framed code:
    tmp_return_value = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$filters$cli, (Nuitka_StringObject *)mod_consts[19]);

    if (unlikely(tmp_return_value == NULL)) {
        tmp_return_value = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
    }

    if (tmp_return_value == NULL) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 57;

        goto frame_exception_exit_1;
    }
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_5d694145f542720a07c956200bf29e01);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_5d694145f542720a07c956200bf29e01);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_5d694145f542720a07c956200bf29e01);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_5d694145f542720a07c956200bf29e01, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_5d694145f542720a07c956200bf29e01->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_5d694145f542720a07c956200bf29e01, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_5d694145f542720a07c956200bf29e01,
        type_description_1
    );


    // Release cached frame if used for exception.
    if (frame_5d694145f542720a07c956200bf29e01 == cache_frame_5d694145f542720a07c956200bf29e01) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_5d694145f542720a07c956200bf29e01);
        cache_frame_5d694145f542720a07c956200bf29e01 = NULL;
    }

    assertFrameObject(frame_5d694145f542720a07c956200bf29e01);

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


static PyObject *impl_prompt_toolkit$filters$cli$$$function__22_lambda(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_FrameObject *frame_9062fc9b5df0c430d0f3869dbc57e102;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_9062fc9b5df0c430d0f3869dbc57e102 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_9062fc9b5df0c430d0f3869dbc57e102)) {
        Py_XDECREF(cache_frame_9062fc9b5df0c430d0f3869dbc57e102);

#if _DEBUG_REFCOUNTS
        if (cache_frame_9062fc9b5df0c430d0f3869dbc57e102 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_9062fc9b5df0c430d0f3869dbc57e102 = MAKE_FUNCTION_FRAME(codeobj_9062fc9b5df0c430d0f3869dbc57e102, module_prompt_toolkit$filters$cli, 0);
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_9062fc9b5df0c430d0f3869dbc57e102->m_type_description == NULL);
    frame_9062fc9b5df0c430d0f3869dbc57e102 = cache_frame_9062fc9b5df0c430d0f3869dbc57e102;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_9062fc9b5df0c430d0f3869dbc57e102);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_9062fc9b5df0c430d0f3869dbc57e102) == 2); // Frame stack

    // Framed code:
    tmp_return_value = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$filters$cli, (Nuitka_StringObject *)mod_consts[20]);

    if (unlikely(tmp_return_value == NULL)) {
        tmp_return_value = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
    }

    if (tmp_return_value == NULL) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 58;

        goto frame_exception_exit_1;
    }
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_9062fc9b5df0c430d0f3869dbc57e102);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_9062fc9b5df0c430d0f3869dbc57e102);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_9062fc9b5df0c430d0f3869dbc57e102);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_9062fc9b5df0c430d0f3869dbc57e102, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_9062fc9b5df0c430d0f3869dbc57e102->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_9062fc9b5df0c430d0f3869dbc57e102, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_9062fc9b5df0c430d0f3869dbc57e102,
        type_description_1
    );


    // Release cached frame if used for exception.
    if (frame_9062fc9b5df0c430d0f3869dbc57e102 == cache_frame_9062fc9b5df0c430d0f3869dbc57e102) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_9062fc9b5df0c430d0f3869dbc57e102);
        cache_frame_9062fc9b5df0c430d0f3869dbc57e102 = NULL;
    }

    assertFrameObject(frame_9062fc9b5df0c430d0f3869dbc57e102);

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


static PyObject *impl_prompt_toolkit$filters$cli$$$function__23_lambda(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_FrameObject *frame_aa7f14b92842911b4ff4dc14be85bc75;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_aa7f14b92842911b4ff4dc14be85bc75 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_aa7f14b92842911b4ff4dc14be85bc75)) {
        Py_XDECREF(cache_frame_aa7f14b92842911b4ff4dc14be85bc75);

#if _DEBUG_REFCOUNTS
        if (cache_frame_aa7f14b92842911b4ff4dc14be85bc75 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_aa7f14b92842911b4ff4dc14be85bc75 = MAKE_FUNCTION_FRAME(codeobj_aa7f14b92842911b4ff4dc14be85bc75, module_prompt_toolkit$filters$cli, 0);
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_aa7f14b92842911b4ff4dc14be85bc75->m_type_description == NULL);
    frame_aa7f14b92842911b4ff4dc14be85bc75 = cache_frame_aa7f14b92842911b4ff4dc14be85bc75;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_aa7f14b92842911b4ff4dc14be85bc75);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_aa7f14b92842911b4ff4dc14be85bc75) == 2); // Frame stack

    // Framed code:
    tmp_return_value = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$filters$cli, (Nuitka_StringObject *)mod_consts[21]);

    if (unlikely(tmp_return_value == NULL)) {
        tmp_return_value = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
    }

    if (tmp_return_value == NULL) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 59;

        goto frame_exception_exit_1;
    }
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_aa7f14b92842911b4ff4dc14be85bc75);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_aa7f14b92842911b4ff4dc14be85bc75);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_aa7f14b92842911b4ff4dc14be85bc75);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_aa7f14b92842911b4ff4dc14be85bc75, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_aa7f14b92842911b4ff4dc14be85bc75->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_aa7f14b92842911b4ff4dc14be85bc75, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_aa7f14b92842911b4ff4dc14be85bc75,
        type_description_1
    );


    // Release cached frame if used for exception.
    if (frame_aa7f14b92842911b4ff4dc14be85bc75 == cache_frame_aa7f14b92842911b4ff4dc14be85bc75) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_aa7f14b92842911b4ff4dc14be85bc75);
        cache_frame_aa7f14b92842911b4ff4dc14be85bc75 = NULL;
    }

    assertFrameObject(frame_aa7f14b92842911b4ff4dc14be85bc75);

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



static PyObject *MAKE_FUNCTION_prompt_toolkit$filters$cli$$$function__10_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_prompt_toolkit$filters$cli$$$function__10_lambda,
        mod_consts[35],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_7a0ab281adb54c05501041a3f949568b,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_prompt_toolkit$filters$cli,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_prompt_toolkit$filters$cli$$$function__11_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_prompt_toolkit$filters$cli$$$function__11_lambda,
        mod_consts[35],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_53b9670651b63411b2276e95436caba2,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_prompt_toolkit$filters$cli,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_prompt_toolkit$filters$cli$$$function__12_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_prompt_toolkit$filters$cli$$$function__12_lambda,
        mod_consts[35],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_e0f3d2c8899acda5a9a13ea05909ceb5,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_prompt_toolkit$filters$cli,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_prompt_toolkit$filters$cli$$$function__13_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_prompt_toolkit$filters$cli$$$function__13_lambda,
        mod_consts[35],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_aa9aa4b9d5f7ae63a7adb465c7b9c7f0,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_prompt_toolkit$filters$cli,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_prompt_toolkit$filters$cli$$$function__14_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_prompt_toolkit$filters$cli$$$function__14_lambda,
        mod_consts[35],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_d7c0ce02c689eed9e32a271e4b13f2cb,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_prompt_toolkit$filters$cli,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_prompt_toolkit$filters$cli$$$function__15_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_prompt_toolkit$filters$cli$$$function__15_lambda,
        mod_consts[35],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_fa3cd85496c2c83e79f546dbd177949e,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_prompt_toolkit$filters$cli,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_prompt_toolkit$filters$cli$$$function__16_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_prompt_toolkit$filters$cli$$$function__16_lambda,
        mod_consts[35],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_6908b45ea06f20eb93468ab83f82c43a,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_prompt_toolkit$filters$cli,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_prompt_toolkit$filters$cli$$$function__17_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_prompt_toolkit$filters$cli$$$function__17_lambda,
        mod_consts[35],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_8bbad72ef9fb38368c3ac3c7af654fd1,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_prompt_toolkit$filters$cli,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_prompt_toolkit$filters$cli$$$function__18_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_prompt_toolkit$filters$cli$$$function__18_lambda,
        mod_consts[35],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_3ca471af766f9cc7d23829f6a5ddfb75,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_prompt_toolkit$filters$cli,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_prompt_toolkit$filters$cli$$$function__19_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_prompt_toolkit$filters$cli$$$function__19_lambda,
        mod_consts[35],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_fe4f1ce43d748da839515f6ef8af097d,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_prompt_toolkit$filters$cli,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_prompt_toolkit$filters$cli$$$function__1_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_prompt_toolkit$filters$cli$$$function__1_lambda,
        mod_consts[35],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_261e2e0a8ffc14dd4760963c16d1af7d,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_prompt_toolkit$filters$cli,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_prompt_toolkit$filters$cli$$$function__20_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_prompt_toolkit$filters$cli$$$function__20_lambda,
        mod_consts[35],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_6b504d33c348db1765a139e432590da8,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_prompt_toolkit$filters$cli,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_prompt_toolkit$filters$cli$$$function__21_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_prompt_toolkit$filters$cli$$$function__21_lambda,
        mod_consts[35],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_5d694145f542720a07c956200bf29e01,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_prompt_toolkit$filters$cli,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_prompt_toolkit$filters$cli$$$function__22_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_prompt_toolkit$filters$cli$$$function__22_lambda,
        mod_consts[35],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_9062fc9b5df0c430d0f3869dbc57e102,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_prompt_toolkit$filters$cli,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_prompt_toolkit$filters$cli$$$function__23_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_prompt_toolkit$filters$cli$$$function__23_lambda,
        mod_consts[35],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_aa7f14b92842911b4ff4dc14be85bc75,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_prompt_toolkit$filters$cli,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_prompt_toolkit$filters$cli$$$function__2_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_prompt_toolkit$filters$cli$$$function__2_lambda,
        mod_consts[35],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_355c3869126f015e5c8ed734b6d7d5ca,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_prompt_toolkit$filters$cli,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_prompt_toolkit$filters$cli$$$function__3_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_prompt_toolkit$filters$cli$$$function__3_lambda,
        mod_consts[35],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_d409b8121c14866444e18e62af89d8e0,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_prompt_toolkit$filters$cli,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_prompt_toolkit$filters$cli$$$function__4_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_prompt_toolkit$filters$cli$$$function__4_lambda,
        mod_consts[35],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_53c4b4e938f626078e639c5eff08e21d,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_prompt_toolkit$filters$cli,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_prompt_toolkit$filters$cli$$$function__5_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_prompt_toolkit$filters$cli$$$function__5_lambda,
        mod_consts[35],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_20a8ccc88f869243a37f2fa25b539b6b,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_prompt_toolkit$filters$cli,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_prompt_toolkit$filters$cli$$$function__6_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_prompt_toolkit$filters$cli$$$function__6_lambda,
        mod_consts[35],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_da06b8c2d049174cdf6f1e17817532b9,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_prompt_toolkit$filters$cli,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_prompt_toolkit$filters$cli$$$function__7_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_prompt_toolkit$filters$cli$$$function__7_lambda,
        mod_consts[35],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_05daed9b71e586bb85e45ff4559b3328,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_prompt_toolkit$filters$cli,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_prompt_toolkit$filters$cli$$$function__8_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_prompt_toolkit$filters$cli$$$function__8_lambda,
        mod_consts[35],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_04769b1aa0582ba9102bad58190b87d7,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_prompt_toolkit$filters$cli,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_prompt_toolkit$filters$cli$$$function__9_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_prompt_toolkit$filters$cli$$$function__9_lambda,
        mod_consts[35],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_fc7d5f571cdf83f06b01bd438f60d162,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_prompt_toolkit$filters$cli,
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

function_impl_code functable_prompt_toolkit$filters$cli[] = {
    impl_prompt_toolkit$filters$cli$$$function__1_lambda,
    impl_prompt_toolkit$filters$cli$$$function__2_lambda,
    impl_prompt_toolkit$filters$cli$$$function__3_lambda,
    impl_prompt_toolkit$filters$cli$$$function__4_lambda,
    impl_prompt_toolkit$filters$cli$$$function__5_lambda,
    impl_prompt_toolkit$filters$cli$$$function__6_lambda,
    impl_prompt_toolkit$filters$cli$$$function__7_lambda,
    impl_prompt_toolkit$filters$cli$$$function__8_lambda,
    impl_prompt_toolkit$filters$cli$$$function__9_lambda,
    impl_prompt_toolkit$filters$cli$$$function__10_lambda,
    impl_prompt_toolkit$filters$cli$$$function__11_lambda,
    impl_prompt_toolkit$filters$cli$$$function__12_lambda,
    impl_prompt_toolkit$filters$cli$$$function__13_lambda,
    impl_prompt_toolkit$filters$cli$$$function__14_lambda,
    impl_prompt_toolkit$filters$cli$$$function__15_lambda,
    impl_prompt_toolkit$filters$cli$$$function__16_lambda,
    impl_prompt_toolkit$filters$cli$$$function__17_lambda,
    impl_prompt_toolkit$filters$cli$$$function__18_lambda,
    impl_prompt_toolkit$filters$cli$$$function__19_lambda,
    impl_prompt_toolkit$filters$cli$$$function__20_lambda,
    impl_prompt_toolkit$filters$cli$$$function__21_lambda,
    impl_prompt_toolkit$filters$cli$$$function__22_lambda,
    impl_prompt_toolkit$filters$cli$$$function__23_lambda,
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

    function_impl_code *current = functable_prompt_toolkit$filters$cli;
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

    if (offset > sizeof(functable_prompt_toolkit$filters$cli) || offset < 0) {
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
        functable_prompt_toolkit$filters$cli[offset],
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
        module_prompt_toolkit$filters$cli,
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
PyObject *modulecode_prompt_toolkit$filters$cli(PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *module_entry) {
    module_prompt_toolkit$filters$cli = module;

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
    PRINT_STRING("prompt_toolkit.filters.cli: Calling setupMetaPathBasedLoader().\n");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 0x300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    PRINT_STRING("prompt_toolkit.filters.cli: Calling createModuleConstants().\n");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    PRINT_STRING("prompt_toolkit.filters.cli: Calling createModuleCodeObjects().\n");
#endif
    createModuleCodeObjects();

    // PRINT_STRING("in initprompt_toolkit$filters$cli\n");

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.

    moduledict_prompt_toolkit$filters$cli = MODULE_DICT(module_prompt_toolkit$filters$cli);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    registerDillPluginTables(module_entry->name, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_prompt_toolkit$filters$cli,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_prompt_toolkit$filters$cli,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$filters$cli, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_prompt_toolkit$filters$cli,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$filters$cli, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_prompt_toolkit$filters$cli,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$filters$cli, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_prompt_toolkit$filters$cli,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_prompt_toolkit$filters$cli);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$filters$cli, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_prompt_toolkit$filters$cli, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

#if PYTHON_VERSION >= 0x300
    UPDATE_STRING_DICT0(moduledict_prompt_toolkit$filters$cli, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);
#endif

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_prompt_toolkit$filters$cli, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(_spec_from_module, module_prompt_toolkit$filters$cli);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_prompt_toolkit$filters$cli, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    struct Nuitka_FrameObject *frame_9f3b06048659763feae613f05b6cf9a0;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = mod_consts[22];
        UPDATE_STRING_DICT0(moduledict_prompt_toolkit$filters$cli, (Nuitka_StringObject *)mod_consts[23], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = mod_consts[24];
        UPDATE_STRING_DICT0(moduledict_prompt_toolkit$filters$cli, (Nuitka_StringObject *)mod_consts[25], tmp_assign_source_2);
    }
    // Frame without reuse.
    frame_9f3b06048659763feae613f05b6cf9a0 = MAKE_MODULE_FRAME(codeobj_9f3b06048659763feae613f05b6cf9a0, module_prompt_toolkit$filters$cli);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack(frame_9f3b06048659763feae613f05b6cf9a0);
    assert(Py_REFCNT(frame_9f3b06048659763feae613f05b6cf9a0) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_name_1 = mod_consts[24];
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$filters$cli, (Nuitka_StringObject *)mod_consts[26]);

        if (unlikely(tmp_assattr_target_1 == NULL)) {
            tmp_assattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[26]);
        }

        assert(!(tmp_assattr_target_1 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[27], tmp_assattr_name_1);
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
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$filters$cli, (Nuitka_StringObject *)mod_consts[26]);

        if (unlikely(tmp_assattr_target_2 == NULL)) {
            tmp_assattr_target_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[26]);
        }

        assert(!(tmp_assattr_target_2 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[28], tmp_assattr_name_2);
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
        UPDATE_STRING_DICT0(moduledict_prompt_toolkit$filters$cli, (Nuitka_StringObject *)mod_consts[29], tmp_assign_source_3);
    }
    {
        PyObject *tmp_star_imported_1;
        PyObject *tmp_name_name_1;
        PyObject *tmp_globals_arg_name_1;
        PyObject *tmp_locals_arg_name_1;
        PyObject *tmp_fromlist_name_1;
        PyObject *tmp_level_name_1;
        tmp_name_name_1 = mod_consts[30];
        tmp_globals_arg_name_1 = (PyObject *)moduledict_prompt_toolkit$filters$cli;
        tmp_locals_arg_name_1 = (PyObject *)moduledict_prompt_toolkit$filters$cli;
        tmp_fromlist_name_1 = mod_consts[31];
        tmp_level_name_1 = mod_consts[32];
        frame_9f3b06048659763feae613f05b6cf9a0->m_frame.f_lineno = 5;
        tmp_star_imported_1 = IMPORT_MODULE5(tmp_name_name_1, tmp_globals_arg_name_1, tmp_locals_arg_name_1, tmp_fromlist_name_1, tmp_level_name_1);
        if (tmp_star_imported_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto frame_exception_exit_1;
        }
        tmp_result = IMPORT_MODULE_STAR(module_prompt_toolkit$filters$cli, true, tmp_star_imported_1);
        Py_DECREF(tmp_star_imported_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_4;
        tmp_assign_source_4 = LIST_COPY(mod_consts[33]);
        UPDATE_STRING_DICT1(moduledict_prompt_toolkit$filters$cli, (Nuitka_StringObject *)mod_consts[34], tmp_assign_source_4);
    }
    {
        PyObject *tmp_assign_source_5;


        tmp_assign_source_5 = MAKE_FUNCTION_prompt_toolkit$filters$cli$$$function__1_lambda();

        UPDATE_STRING_DICT1(moduledict_prompt_toolkit$filters$cli, (Nuitka_StringObject *)mod_consts[36], tmp_assign_source_5);
    }
    {
        PyObject *tmp_assign_source_6;


        tmp_assign_source_6 = MAKE_FUNCTION_prompt_toolkit$filters$cli$$$function__2_lambda();

        UPDATE_STRING_DICT1(moduledict_prompt_toolkit$filters$cli, (Nuitka_StringObject *)mod_consts[37], tmp_assign_source_6);
    }
    {
        PyObject *tmp_assign_source_7;


        tmp_assign_source_7 = MAKE_FUNCTION_prompt_toolkit$filters$cli$$$function__3_lambda();

        UPDATE_STRING_DICT1(moduledict_prompt_toolkit$filters$cli, (Nuitka_StringObject *)mod_consts[38], tmp_assign_source_7);
    }
    {
        PyObject *tmp_assign_source_8;


        tmp_assign_source_8 = MAKE_FUNCTION_prompt_toolkit$filters$cli$$$function__4_lambda();

        UPDATE_STRING_DICT1(moduledict_prompt_toolkit$filters$cli, (Nuitka_StringObject *)mod_consts[39], tmp_assign_source_8);
    }
    {
        PyObject *tmp_assign_source_9;


        tmp_assign_source_9 = MAKE_FUNCTION_prompt_toolkit$filters$cli$$$function__5_lambda();

        UPDATE_STRING_DICT1(moduledict_prompt_toolkit$filters$cli, (Nuitka_StringObject *)mod_consts[40], tmp_assign_source_9);
    }
    {
        PyObject *tmp_assign_source_10;


        tmp_assign_source_10 = MAKE_FUNCTION_prompt_toolkit$filters$cli$$$function__6_lambda();

        UPDATE_STRING_DICT1(moduledict_prompt_toolkit$filters$cli, (Nuitka_StringObject *)mod_consts[41], tmp_assign_source_10);
    }
    {
        PyObject *tmp_assign_source_11;


        tmp_assign_source_11 = MAKE_FUNCTION_prompt_toolkit$filters$cli$$$function__7_lambda();

        UPDATE_STRING_DICT1(moduledict_prompt_toolkit$filters$cli, (Nuitka_StringObject *)mod_consts[42], tmp_assign_source_11);
    }
    {
        PyObject *tmp_assign_source_12;


        tmp_assign_source_12 = MAKE_FUNCTION_prompt_toolkit$filters$cli$$$function__8_lambda();

        UPDATE_STRING_DICT1(moduledict_prompt_toolkit$filters$cli, (Nuitka_StringObject *)mod_consts[43], tmp_assign_source_12);
    }
    {
        PyObject *tmp_assign_source_13;


        tmp_assign_source_13 = MAKE_FUNCTION_prompt_toolkit$filters$cli$$$function__9_lambda();

        UPDATE_STRING_DICT1(moduledict_prompt_toolkit$filters$cli, (Nuitka_StringObject *)mod_consts[44], tmp_assign_source_13);
    }
    {
        PyObject *tmp_assign_source_14;


        tmp_assign_source_14 = MAKE_FUNCTION_prompt_toolkit$filters$cli$$$function__10_lambda();

        UPDATE_STRING_DICT1(moduledict_prompt_toolkit$filters$cli, (Nuitka_StringObject *)mod_consts[45], tmp_assign_source_14);
    }
    {
        PyObject *tmp_assign_source_15;


        tmp_assign_source_15 = MAKE_FUNCTION_prompt_toolkit$filters$cli$$$function__11_lambda();

        UPDATE_STRING_DICT1(moduledict_prompt_toolkit$filters$cli, (Nuitka_StringObject *)mod_consts[46], tmp_assign_source_15);
    }
    {
        PyObject *tmp_assign_source_16;


        tmp_assign_source_16 = MAKE_FUNCTION_prompt_toolkit$filters$cli$$$function__12_lambda();

        UPDATE_STRING_DICT1(moduledict_prompt_toolkit$filters$cli, (Nuitka_StringObject *)mod_consts[47], tmp_assign_source_16);
    }
    {
        PyObject *tmp_assign_source_17;


        tmp_assign_source_17 = MAKE_FUNCTION_prompt_toolkit$filters$cli$$$function__13_lambda();

        UPDATE_STRING_DICT1(moduledict_prompt_toolkit$filters$cli, (Nuitka_StringObject *)mod_consts[48], tmp_assign_source_17);
    }
    {
        PyObject *tmp_assign_source_18;


        tmp_assign_source_18 = MAKE_FUNCTION_prompt_toolkit$filters$cli$$$function__14_lambda();

        UPDATE_STRING_DICT1(moduledict_prompt_toolkit$filters$cli, (Nuitka_StringObject *)mod_consts[49], tmp_assign_source_18);
    }
    {
        PyObject *tmp_assign_source_19;


        tmp_assign_source_19 = MAKE_FUNCTION_prompt_toolkit$filters$cli$$$function__15_lambda();

        UPDATE_STRING_DICT1(moduledict_prompt_toolkit$filters$cli, (Nuitka_StringObject *)mod_consts[50], tmp_assign_source_19);
    }
    {
        PyObject *tmp_assign_source_20;


        tmp_assign_source_20 = MAKE_FUNCTION_prompt_toolkit$filters$cli$$$function__16_lambda();

        UPDATE_STRING_DICT1(moduledict_prompt_toolkit$filters$cli, (Nuitka_StringObject *)mod_consts[51], tmp_assign_source_20);
    }
    {
        PyObject *tmp_assign_source_21;


        tmp_assign_source_21 = MAKE_FUNCTION_prompt_toolkit$filters$cli$$$function__17_lambda();

        UPDATE_STRING_DICT1(moduledict_prompt_toolkit$filters$cli, (Nuitka_StringObject *)mod_consts[52], tmp_assign_source_21);
    }
    {
        PyObject *tmp_assign_source_22;


        tmp_assign_source_22 = MAKE_FUNCTION_prompt_toolkit$filters$cli$$$function__18_lambda();

        UPDATE_STRING_DICT1(moduledict_prompt_toolkit$filters$cli, (Nuitka_StringObject *)mod_consts[53], tmp_assign_source_22);
    }
    {
        PyObject *tmp_assign_source_23;


        tmp_assign_source_23 = MAKE_FUNCTION_prompt_toolkit$filters$cli$$$function__19_lambda();

        UPDATE_STRING_DICT1(moduledict_prompt_toolkit$filters$cli, (Nuitka_StringObject *)mod_consts[54], tmp_assign_source_23);
    }
    {
        PyObject *tmp_assign_source_24;


        tmp_assign_source_24 = MAKE_FUNCTION_prompt_toolkit$filters$cli$$$function__20_lambda();

        UPDATE_STRING_DICT1(moduledict_prompt_toolkit$filters$cli, (Nuitka_StringObject *)mod_consts[55], tmp_assign_source_24);
    }
    {
        PyObject *tmp_assign_source_25;


        tmp_assign_source_25 = MAKE_FUNCTION_prompt_toolkit$filters$cli$$$function__21_lambda();

        UPDATE_STRING_DICT1(moduledict_prompt_toolkit$filters$cli, (Nuitka_StringObject *)mod_consts[56], tmp_assign_source_25);
    }
    {
        PyObject *tmp_assign_source_26;


        tmp_assign_source_26 = MAKE_FUNCTION_prompt_toolkit$filters$cli$$$function__22_lambda();

        UPDATE_STRING_DICT1(moduledict_prompt_toolkit$filters$cli, (Nuitka_StringObject *)mod_consts[57], tmp_assign_source_26);
    }
    {
        PyObject *tmp_assign_source_27;


        tmp_assign_source_27 = MAKE_FUNCTION_prompt_toolkit$filters$cli$$$function__23_lambda();

        UPDATE_STRING_DICT1(moduledict_prompt_toolkit$filters$cli, (Nuitka_StringObject *)mod_consts[58], tmp_assign_source_27);
    }
    {
        PyObject *tmp_assign_source_28;
        tmp_assign_source_28 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$filters$cli, (Nuitka_StringObject *)mod_consts[59]);

        if (unlikely(tmp_assign_source_28 == NULL)) {
            tmp_assign_source_28 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[59]);
        }

        if (tmp_assign_source_28 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 61;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT0(moduledict_prompt_toolkit$filters$cli, (Nuitka_StringObject *)mod_consts[60], tmp_assign_source_28);
    }
    {
        PyObject *tmp_assign_source_29;
        tmp_assign_source_29 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$filters$cli, (Nuitka_StringObject *)mod_consts[61]);

        if (unlikely(tmp_assign_source_29 == NULL)) {
            tmp_assign_source_29 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[61]);
        }

        if (tmp_assign_source_29 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 62;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT0(moduledict_prompt_toolkit$filters$cli, (Nuitka_StringObject *)mod_consts[62], tmp_assign_source_29);
    }

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION(frame_9f3b06048659763feae613f05b6cf9a0);
#endif
    popFrameStack();

    assertFrameObject(frame_9f3b06048659763feae613f05b6cf9a0);

    goto frame_no_exception_1;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_9f3b06048659763feae613f05b6cf9a0);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_9f3b06048659763feae613f05b6cf9a0, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_9f3b06048659763feae613f05b6cf9a0->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_9f3b06048659763feae613f05b6cf9a0, exception_lineno);
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;

    frame_no_exception_1:;

    return module_prompt_toolkit$filters$cli;
    module_exception_exit:
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);
    return NULL;
}

