/* Generated code for Python module 'scipy.optimize._linprog_doc'
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

/* The "module_scipy$optimize$_linprog_doc" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_scipy$optimize$_linprog_doc;
PyDictObject *moduledict_scipy$optimize$_linprog_doc;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[33];

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(void) {
    if (constants_created == false) {
        loadConstantsBlob(&mod_consts[0], UNTRANSLATE("scipy.optimize._linprog_doc"));
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
void checkModuleConstants_scipy$optimize$_linprog_doc(void) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    checkConstantsBlob(&mod_consts[0], "scipy.optimize._linprog_doc");
}
#endif

// The module code objects.
static PyCodeObject *codeobj_ac76a030f43280f336f801be8daf3091;
static PyCodeObject *codeobj_f88b9c31f93a85215f356764ccaa2453;
static PyCodeObject *codeobj_7c076c6fd89440837385cd185a9f87ce;
static PyCodeObject *codeobj_517ad9e80238445ec93c140b413a518c;
static PyCodeObject *codeobj_dfeb993311c0bf43dd9a07faeeafa890;
static PyCodeObject *codeobj_7fd06c50c3cc86e622d79e8e8859e1c1;
static PyCodeObject *codeobj_d16c6aeea826295edbb48c09e31168d6;

static void createModuleCodeObjects(void) {
    module_filename_obj = mod_consts[8]; CHECK_OBJECT(module_filename_obj);
    codeobj_ac76a030f43280f336f801be8daf3091 = MAKE_CODEOBJECT(module_filename_obj, 1, CO_NOFREE, mod_consts[26], NULL, NULL, 0, 0, 0);
    codeobj_f88b9c31f93a85215f356764ccaa2453 = MAKE_CODEOBJECT(module_filename_obj, 9, CO_VARKEYWORDS | CO_NOFREE, mod_consts[15], mod_consts[27], NULL, 16, 0, 0);
    codeobj_7c076c6fd89440837385cd185a9f87ce = MAKE_CODEOBJECT(module_filename_obj, 266, CO_VARKEYWORDS | CO_NOFREE, mod_consts[17], mod_consts[28], NULL, 15, 0, 0);
    codeobj_517ad9e80238445ec93c140b413a518c = MAKE_CODEOBJECT(module_filename_obj, 507, CO_VARKEYWORDS | CO_NOFREE, mod_consts[19], mod_consts[29], NULL, 15, 0, 0);
    codeobj_dfeb993311c0bf43dd9a07faeeafa890 = MAKE_CODEOBJECT(module_filename_obj, 735, CO_VARKEYWORDS | CO_NOFREE, mod_consts[21], mod_consts[30], NULL, 23, 0, 0);
    codeobj_7fd06c50c3cc86e622d79e8e8859e1c1 = MAKE_CODEOBJECT(module_filename_obj, 1061, CO_VARKEYWORDS | CO_NOFREE, mod_consts[23], mod_consts[31], NULL, 18, 0, 0);
    codeobj_d16c6aeea826295edbb48c09e31168d6 = MAKE_CODEOBJECT(module_filename_obj, 1242, CO_VARKEYWORDS | CO_NOFREE, mod_consts[25], mod_consts[32], NULL, 15, 0, 0);
}

// The module function declarations.
static PyObject *MAKE_FUNCTION_scipy$optimize$_linprog_doc$$$function__1__linprog_highs_doc(PyObject *defaults);


static PyObject *MAKE_FUNCTION_scipy$optimize$_linprog_doc$$$function__2__linprog_highs_ds_doc(PyObject *defaults);


static PyObject *MAKE_FUNCTION_scipy$optimize$_linprog_doc$$$function__3__linprog_highs_ipm_doc(PyObject *defaults);


static PyObject *MAKE_FUNCTION_scipy$optimize$_linprog_doc$$$function__4__linprog_ip_doc(PyObject *defaults);


static PyObject *MAKE_FUNCTION_scipy$optimize$_linprog_doc$$$function__5__linprog_rs_doc(PyObject *defaults);


static PyObject *MAKE_FUNCTION_scipy$optimize$_linprog_doc$$$function__6__linprog_simplex_doc(PyObject *defaults);


// The module function definitions.
static PyObject *impl_scipy$optimize$_linprog_doc$$$function__1__linprog_highs_doc(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_c = python_pars[0];
    PyObject *par_A_ub = python_pars[1];
    PyObject *par_b_ub = python_pars[2];
    PyObject *par_A_eq = python_pars[3];
    PyObject *par_b_eq = python_pars[4];
    PyObject *par_bounds = python_pars[5];
    PyObject *par_method = python_pars[6];
    PyObject *par_callback = python_pars[7];
    PyObject *par_maxiter = python_pars[8];
    PyObject *par_disp = python_pars[9];
    PyObject *par_presolve = python_pars[10];
    PyObject *par_time_limit = python_pars[11];
    PyObject *par_dual_feasibility_tolerance = python_pars[12];
    PyObject *par_primal_feasibility_tolerance = python_pars[13];
    PyObject *par_ipm_optimality_tolerance = python_pars[14];
    PyObject *par_simplex_dual_edge_weight_strategy = python_pars[15];
    PyObject *par_unknown_options = python_pars[16];
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
    CHECK_OBJECT(par_c);
    Py_DECREF(par_c);
    par_c = NULL;
    CHECK_OBJECT(par_A_ub);
    Py_DECREF(par_A_ub);
    par_A_ub = NULL;
    CHECK_OBJECT(par_b_ub);
    Py_DECREF(par_b_ub);
    par_b_ub = NULL;
    CHECK_OBJECT(par_A_eq);
    Py_DECREF(par_A_eq);
    par_A_eq = NULL;
    CHECK_OBJECT(par_b_eq);
    Py_DECREF(par_b_eq);
    par_b_eq = NULL;
    CHECK_OBJECT(par_bounds);
    Py_DECREF(par_bounds);
    par_bounds = NULL;
    CHECK_OBJECT(par_method);
    Py_DECREF(par_method);
    par_method = NULL;
    CHECK_OBJECT(par_callback);
    Py_DECREF(par_callback);
    par_callback = NULL;
    CHECK_OBJECT(par_maxiter);
    Py_DECREF(par_maxiter);
    par_maxiter = NULL;
    CHECK_OBJECT(par_disp);
    Py_DECREF(par_disp);
    par_disp = NULL;
    CHECK_OBJECT(par_presolve);
    Py_DECREF(par_presolve);
    par_presolve = NULL;
    CHECK_OBJECT(par_time_limit);
    Py_DECREF(par_time_limit);
    par_time_limit = NULL;
    CHECK_OBJECT(par_dual_feasibility_tolerance);
    Py_DECREF(par_dual_feasibility_tolerance);
    par_dual_feasibility_tolerance = NULL;
    CHECK_OBJECT(par_primal_feasibility_tolerance);
    Py_DECREF(par_primal_feasibility_tolerance);
    par_primal_feasibility_tolerance = NULL;
    CHECK_OBJECT(par_ipm_optimality_tolerance);
    Py_DECREF(par_ipm_optimality_tolerance);
    par_ipm_optimality_tolerance = NULL;
    CHECK_OBJECT(par_simplex_dual_edge_weight_strategy);
    Py_DECREF(par_simplex_dual_edge_weight_strategy);
    par_simplex_dual_edge_weight_strategy = NULL;
    CHECK_OBJECT(par_unknown_options);
    Py_DECREF(par_unknown_options);
    par_unknown_options = NULL;
    goto function_return_exit;
    // End of try:
    CHECK_OBJECT(par_c);
    Py_DECREF(par_c);
    par_c = NULL;
    CHECK_OBJECT(par_A_ub);
    Py_DECREF(par_A_ub);
    par_A_ub = NULL;
    CHECK_OBJECT(par_b_ub);
    Py_DECREF(par_b_ub);
    par_b_ub = NULL;
    CHECK_OBJECT(par_A_eq);
    Py_DECREF(par_A_eq);
    par_A_eq = NULL;
    CHECK_OBJECT(par_b_eq);
    Py_DECREF(par_b_eq);
    par_b_eq = NULL;
    CHECK_OBJECT(par_bounds);
    Py_DECREF(par_bounds);
    par_bounds = NULL;
    CHECK_OBJECT(par_method);
    Py_DECREF(par_method);
    par_method = NULL;
    CHECK_OBJECT(par_callback);
    Py_DECREF(par_callback);
    par_callback = NULL;
    CHECK_OBJECT(par_maxiter);
    Py_DECREF(par_maxiter);
    par_maxiter = NULL;
    CHECK_OBJECT(par_disp);
    Py_DECREF(par_disp);
    par_disp = NULL;
    CHECK_OBJECT(par_presolve);
    Py_DECREF(par_presolve);
    par_presolve = NULL;
    CHECK_OBJECT(par_time_limit);
    Py_DECREF(par_time_limit);
    par_time_limit = NULL;
    CHECK_OBJECT(par_dual_feasibility_tolerance);
    Py_DECREF(par_dual_feasibility_tolerance);
    par_dual_feasibility_tolerance = NULL;
    CHECK_OBJECT(par_primal_feasibility_tolerance);
    Py_DECREF(par_primal_feasibility_tolerance);
    par_primal_feasibility_tolerance = NULL;
    CHECK_OBJECT(par_ipm_optimality_tolerance);
    Py_DECREF(par_ipm_optimality_tolerance);
    par_ipm_optimality_tolerance = NULL;
    CHECK_OBJECT(par_simplex_dual_edge_weight_strategy);
    Py_DECREF(par_simplex_dual_edge_weight_strategy);
    par_simplex_dual_edge_weight_strategy = NULL;
    CHECK_OBJECT(par_unknown_options);
    Py_DECREF(par_unknown_options);
    par_unknown_options = NULL;

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


static PyObject *impl_scipy$optimize$_linprog_doc$$$function__2__linprog_highs_ds_doc(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_c = python_pars[0];
    PyObject *par_A_ub = python_pars[1];
    PyObject *par_b_ub = python_pars[2];
    PyObject *par_A_eq = python_pars[3];
    PyObject *par_b_eq = python_pars[4];
    PyObject *par_bounds = python_pars[5];
    PyObject *par_method = python_pars[6];
    PyObject *par_callback = python_pars[7];
    PyObject *par_maxiter = python_pars[8];
    PyObject *par_disp = python_pars[9];
    PyObject *par_presolve = python_pars[10];
    PyObject *par_time_limit = python_pars[11];
    PyObject *par_dual_feasibility_tolerance = python_pars[12];
    PyObject *par_primal_feasibility_tolerance = python_pars[13];
    PyObject *par_simplex_dual_edge_weight_strategy = python_pars[14];
    PyObject *par_unknown_options = python_pars[15];
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
    CHECK_OBJECT(par_c);
    Py_DECREF(par_c);
    par_c = NULL;
    CHECK_OBJECT(par_A_ub);
    Py_DECREF(par_A_ub);
    par_A_ub = NULL;
    CHECK_OBJECT(par_b_ub);
    Py_DECREF(par_b_ub);
    par_b_ub = NULL;
    CHECK_OBJECT(par_A_eq);
    Py_DECREF(par_A_eq);
    par_A_eq = NULL;
    CHECK_OBJECT(par_b_eq);
    Py_DECREF(par_b_eq);
    par_b_eq = NULL;
    CHECK_OBJECT(par_bounds);
    Py_DECREF(par_bounds);
    par_bounds = NULL;
    CHECK_OBJECT(par_method);
    Py_DECREF(par_method);
    par_method = NULL;
    CHECK_OBJECT(par_callback);
    Py_DECREF(par_callback);
    par_callback = NULL;
    CHECK_OBJECT(par_maxiter);
    Py_DECREF(par_maxiter);
    par_maxiter = NULL;
    CHECK_OBJECT(par_disp);
    Py_DECREF(par_disp);
    par_disp = NULL;
    CHECK_OBJECT(par_presolve);
    Py_DECREF(par_presolve);
    par_presolve = NULL;
    CHECK_OBJECT(par_time_limit);
    Py_DECREF(par_time_limit);
    par_time_limit = NULL;
    CHECK_OBJECT(par_dual_feasibility_tolerance);
    Py_DECREF(par_dual_feasibility_tolerance);
    par_dual_feasibility_tolerance = NULL;
    CHECK_OBJECT(par_primal_feasibility_tolerance);
    Py_DECREF(par_primal_feasibility_tolerance);
    par_primal_feasibility_tolerance = NULL;
    CHECK_OBJECT(par_simplex_dual_edge_weight_strategy);
    Py_DECREF(par_simplex_dual_edge_weight_strategy);
    par_simplex_dual_edge_weight_strategy = NULL;
    CHECK_OBJECT(par_unknown_options);
    Py_DECREF(par_unknown_options);
    par_unknown_options = NULL;
    goto function_return_exit;
    // End of try:
    CHECK_OBJECT(par_c);
    Py_DECREF(par_c);
    par_c = NULL;
    CHECK_OBJECT(par_A_ub);
    Py_DECREF(par_A_ub);
    par_A_ub = NULL;
    CHECK_OBJECT(par_b_ub);
    Py_DECREF(par_b_ub);
    par_b_ub = NULL;
    CHECK_OBJECT(par_A_eq);
    Py_DECREF(par_A_eq);
    par_A_eq = NULL;
    CHECK_OBJECT(par_b_eq);
    Py_DECREF(par_b_eq);
    par_b_eq = NULL;
    CHECK_OBJECT(par_bounds);
    Py_DECREF(par_bounds);
    par_bounds = NULL;
    CHECK_OBJECT(par_method);
    Py_DECREF(par_method);
    par_method = NULL;
    CHECK_OBJECT(par_callback);
    Py_DECREF(par_callback);
    par_callback = NULL;
    CHECK_OBJECT(par_maxiter);
    Py_DECREF(par_maxiter);
    par_maxiter = NULL;
    CHECK_OBJECT(par_disp);
    Py_DECREF(par_disp);
    par_disp = NULL;
    CHECK_OBJECT(par_presolve);
    Py_DECREF(par_presolve);
    par_presolve = NULL;
    CHECK_OBJECT(par_time_limit);
    Py_DECREF(par_time_limit);
    par_time_limit = NULL;
    CHECK_OBJECT(par_dual_feasibility_tolerance);
    Py_DECREF(par_dual_feasibility_tolerance);
    par_dual_feasibility_tolerance = NULL;
    CHECK_OBJECT(par_primal_feasibility_tolerance);
    Py_DECREF(par_primal_feasibility_tolerance);
    par_primal_feasibility_tolerance = NULL;
    CHECK_OBJECT(par_simplex_dual_edge_weight_strategy);
    Py_DECREF(par_simplex_dual_edge_weight_strategy);
    par_simplex_dual_edge_weight_strategy = NULL;
    CHECK_OBJECT(par_unknown_options);
    Py_DECREF(par_unknown_options);
    par_unknown_options = NULL;

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


static PyObject *impl_scipy$optimize$_linprog_doc$$$function__3__linprog_highs_ipm_doc(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_c = python_pars[0];
    PyObject *par_A_ub = python_pars[1];
    PyObject *par_b_ub = python_pars[2];
    PyObject *par_A_eq = python_pars[3];
    PyObject *par_b_eq = python_pars[4];
    PyObject *par_bounds = python_pars[5];
    PyObject *par_method = python_pars[6];
    PyObject *par_callback = python_pars[7];
    PyObject *par_maxiter = python_pars[8];
    PyObject *par_disp = python_pars[9];
    PyObject *par_presolve = python_pars[10];
    PyObject *par_time_limit = python_pars[11];
    PyObject *par_dual_feasibility_tolerance = python_pars[12];
    PyObject *par_primal_feasibility_tolerance = python_pars[13];
    PyObject *par_ipm_optimality_tolerance = python_pars[14];
    PyObject *par_unknown_options = python_pars[15];
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
    CHECK_OBJECT(par_c);
    Py_DECREF(par_c);
    par_c = NULL;
    CHECK_OBJECT(par_A_ub);
    Py_DECREF(par_A_ub);
    par_A_ub = NULL;
    CHECK_OBJECT(par_b_ub);
    Py_DECREF(par_b_ub);
    par_b_ub = NULL;
    CHECK_OBJECT(par_A_eq);
    Py_DECREF(par_A_eq);
    par_A_eq = NULL;
    CHECK_OBJECT(par_b_eq);
    Py_DECREF(par_b_eq);
    par_b_eq = NULL;
    CHECK_OBJECT(par_bounds);
    Py_DECREF(par_bounds);
    par_bounds = NULL;
    CHECK_OBJECT(par_method);
    Py_DECREF(par_method);
    par_method = NULL;
    CHECK_OBJECT(par_callback);
    Py_DECREF(par_callback);
    par_callback = NULL;
    CHECK_OBJECT(par_maxiter);
    Py_DECREF(par_maxiter);
    par_maxiter = NULL;
    CHECK_OBJECT(par_disp);
    Py_DECREF(par_disp);
    par_disp = NULL;
    CHECK_OBJECT(par_presolve);
    Py_DECREF(par_presolve);
    par_presolve = NULL;
    CHECK_OBJECT(par_time_limit);
    Py_DECREF(par_time_limit);
    par_time_limit = NULL;
    CHECK_OBJECT(par_dual_feasibility_tolerance);
    Py_DECREF(par_dual_feasibility_tolerance);
    par_dual_feasibility_tolerance = NULL;
    CHECK_OBJECT(par_primal_feasibility_tolerance);
    Py_DECREF(par_primal_feasibility_tolerance);
    par_primal_feasibility_tolerance = NULL;
    CHECK_OBJECT(par_ipm_optimality_tolerance);
    Py_DECREF(par_ipm_optimality_tolerance);
    par_ipm_optimality_tolerance = NULL;
    CHECK_OBJECT(par_unknown_options);
    Py_DECREF(par_unknown_options);
    par_unknown_options = NULL;
    goto function_return_exit;
    // End of try:
    CHECK_OBJECT(par_c);
    Py_DECREF(par_c);
    par_c = NULL;
    CHECK_OBJECT(par_A_ub);
    Py_DECREF(par_A_ub);
    par_A_ub = NULL;
    CHECK_OBJECT(par_b_ub);
    Py_DECREF(par_b_ub);
    par_b_ub = NULL;
    CHECK_OBJECT(par_A_eq);
    Py_DECREF(par_A_eq);
    par_A_eq = NULL;
    CHECK_OBJECT(par_b_eq);
    Py_DECREF(par_b_eq);
    par_b_eq = NULL;
    CHECK_OBJECT(par_bounds);
    Py_DECREF(par_bounds);
    par_bounds = NULL;
    CHECK_OBJECT(par_method);
    Py_DECREF(par_method);
    par_method = NULL;
    CHECK_OBJECT(par_callback);
    Py_DECREF(par_callback);
    par_callback = NULL;
    CHECK_OBJECT(par_maxiter);
    Py_DECREF(par_maxiter);
    par_maxiter = NULL;
    CHECK_OBJECT(par_disp);
    Py_DECREF(par_disp);
    par_disp = NULL;
    CHECK_OBJECT(par_presolve);
    Py_DECREF(par_presolve);
    par_presolve = NULL;
    CHECK_OBJECT(par_time_limit);
    Py_DECREF(par_time_limit);
    par_time_limit = NULL;
    CHECK_OBJECT(par_dual_feasibility_tolerance);
    Py_DECREF(par_dual_feasibility_tolerance);
    par_dual_feasibility_tolerance = NULL;
    CHECK_OBJECT(par_primal_feasibility_tolerance);
    Py_DECREF(par_primal_feasibility_tolerance);
    par_primal_feasibility_tolerance = NULL;
    CHECK_OBJECT(par_ipm_optimality_tolerance);
    Py_DECREF(par_ipm_optimality_tolerance);
    par_ipm_optimality_tolerance = NULL;
    CHECK_OBJECT(par_unknown_options);
    Py_DECREF(par_unknown_options);
    par_unknown_options = NULL;

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


static PyObject *impl_scipy$optimize$_linprog_doc$$$function__4__linprog_ip_doc(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_c = python_pars[0];
    PyObject *par_A_ub = python_pars[1];
    PyObject *par_b_ub = python_pars[2];
    PyObject *par_A_eq = python_pars[3];
    PyObject *par_b_eq = python_pars[4];
    PyObject *par_bounds = python_pars[5];
    PyObject *par_method = python_pars[6];
    PyObject *par_callback = python_pars[7];
    PyObject *par_maxiter = python_pars[8];
    PyObject *par_disp = python_pars[9];
    PyObject *par_presolve = python_pars[10];
    PyObject *par_tol = python_pars[11];
    PyObject *par_autoscale = python_pars[12];
    PyObject *par_rr = python_pars[13];
    PyObject *par_alpha0 = python_pars[14];
    PyObject *par_beta = python_pars[15];
    PyObject *par_sparse = python_pars[16];
    PyObject *par_lstsq = python_pars[17];
    PyObject *par_sym_pos = python_pars[18];
    PyObject *par_cholesky = python_pars[19];
    PyObject *par_pc = python_pars[20];
    PyObject *par_ip = python_pars[21];
    PyObject *par_permc_spec = python_pars[22];
    PyObject *par_unknown_options = python_pars[23];
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
    CHECK_OBJECT(par_c);
    Py_DECREF(par_c);
    par_c = NULL;
    CHECK_OBJECT(par_A_ub);
    Py_DECREF(par_A_ub);
    par_A_ub = NULL;
    CHECK_OBJECT(par_b_ub);
    Py_DECREF(par_b_ub);
    par_b_ub = NULL;
    CHECK_OBJECT(par_A_eq);
    Py_DECREF(par_A_eq);
    par_A_eq = NULL;
    CHECK_OBJECT(par_b_eq);
    Py_DECREF(par_b_eq);
    par_b_eq = NULL;
    CHECK_OBJECT(par_bounds);
    Py_DECREF(par_bounds);
    par_bounds = NULL;
    CHECK_OBJECT(par_method);
    Py_DECREF(par_method);
    par_method = NULL;
    CHECK_OBJECT(par_callback);
    Py_DECREF(par_callback);
    par_callback = NULL;
    CHECK_OBJECT(par_maxiter);
    Py_DECREF(par_maxiter);
    par_maxiter = NULL;
    CHECK_OBJECT(par_disp);
    Py_DECREF(par_disp);
    par_disp = NULL;
    CHECK_OBJECT(par_presolve);
    Py_DECREF(par_presolve);
    par_presolve = NULL;
    CHECK_OBJECT(par_tol);
    Py_DECREF(par_tol);
    par_tol = NULL;
    CHECK_OBJECT(par_autoscale);
    Py_DECREF(par_autoscale);
    par_autoscale = NULL;
    CHECK_OBJECT(par_rr);
    Py_DECREF(par_rr);
    par_rr = NULL;
    CHECK_OBJECT(par_alpha0);
    Py_DECREF(par_alpha0);
    par_alpha0 = NULL;
    CHECK_OBJECT(par_beta);
    Py_DECREF(par_beta);
    par_beta = NULL;
    CHECK_OBJECT(par_sparse);
    Py_DECREF(par_sparse);
    par_sparse = NULL;
    CHECK_OBJECT(par_lstsq);
    Py_DECREF(par_lstsq);
    par_lstsq = NULL;
    CHECK_OBJECT(par_sym_pos);
    Py_DECREF(par_sym_pos);
    par_sym_pos = NULL;
    CHECK_OBJECT(par_cholesky);
    Py_DECREF(par_cholesky);
    par_cholesky = NULL;
    CHECK_OBJECT(par_pc);
    Py_DECREF(par_pc);
    par_pc = NULL;
    CHECK_OBJECT(par_ip);
    Py_DECREF(par_ip);
    par_ip = NULL;
    CHECK_OBJECT(par_permc_spec);
    Py_DECREF(par_permc_spec);
    par_permc_spec = NULL;
    CHECK_OBJECT(par_unknown_options);
    Py_DECREF(par_unknown_options);
    par_unknown_options = NULL;
    goto function_return_exit;
    // End of try:
    CHECK_OBJECT(par_c);
    Py_DECREF(par_c);
    par_c = NULL;
    CHECK_OBJECT(par_A_ub);
    Py_DECREF(par_A_ub);
    par_A_ub = NULL;
    CHECK_OBJECT(par_b_ub);
    Py_DECREF(par_b_ub);
    par_b_ub = NULL;
    CHECK_OBJECT(par_A_eq);
    Py_DECREF(par_A_eq);
    par_A_eq = NULL;
    CHECK_OBJECT(par_b_eq);
    Py_DECREF(par_b_eq);
    par_b_eq = NULL;
    CHECK_OBJECT(par_bounds);
    Py_DECREF(par_bounds);
    par_bounds = NULL;
    CHECK_OBJECT(par_method);
    Py_DECREF(par_method);
    par_method = NULL;
    CHECK_OBJECT(par_callback);
    Py_DECREF(par_callback);
    par_callback = NULL;
    CHECK_OBJECT(par_maxiter);
    Py_DECREF(par_maxiter);
    par_maxiter = NULL;
    CHECK_OBJECT(par_disp);
    Py_DECREF(par_disp);
    par_disp = NULL;
    CHECK_OBJECT(par_presolve);
    Py_DECREF(par_presolve);
    par_presolve = NULL;
    CHECK_OBJECT(par_tol);
    Py_DECREF(par_tol);
    par_tol = NULL;
    CHECK_OBJECT(par_autoscale);
    Py_DECREF(par_autoscale);
    par_autoscale = NULL;
    CHECK_OBJECT(par_rr);
    Py_DECREF(par_rr);
    par_rr = NULL;
    CHECK_OBJECT(par_alpha0);
    Py_DECREF(par_alpha0);
    par_alpha0 = NULL;
    CHECK_OBJECT(par_beta);
    Py_DECREF(par_beta);
    par_beta = NULL;
    CHECK_OBJECT(par_sparse);
    Py_DECREF(par_sparse);
    par_sparse = NULL;
    CHECK_OBJECT(par_lstsq);
    Py_DECREF(par_lstsq);
    par_lstsq = NULL;
    CHECK_OBJECT(par_sym_pos);
    Py_DECREF(par_sym_pos);
    par_sym_pos = NULL;
    CHECK_OBJECT(par_cholesky);
    Py_DECREF(par_cholesky);
    par_cholesky = NULL;
    CHECK_OBJECT(par_pc);
    Py_DECREF(par_pc);
    par_pc = NULL;
    CHECK_OBJECT(par_ip);
    Py_DECREF(par_ip);
    par_ip = NULL;
    CHECK_OBJECT(par_permc_spec);
    Py_DECREF(par_permc_spec);
    par_permc_spec = NULL;
    CHECK_OBJECT(par_unknown_options);
    Py_DECREF(par_unknown_options);
    par_unknown_options = NULL;

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


static PyObject *impl_scipy$optimize$_linprog_doc$$$function__5__linprog_rs_doc(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_c = python_pars[0];
    PyObject *par_A_ub = python_pars[1];
    PyObject *par_b_ub = python_pars[2];
    PyObject *par_A_eq = python_pars[3];
    PyObject *par_b_eq = python_pars[4];
    PyObject *par_bounds = python_pars[5];
    PyObject *par_method = python_pars[6];
    PyObject *par_callback = python_pars[7];
    PyObject *par_x0 = python_pars[8];
    PyObject *par_maxiter = python_pars[9];
    PyObject *par_disp = python_pars[10];
    PyObject *par_presolve = python_pars[11];
    PyObject *par_tol = python_pars[12];
    PyObject *par_autoscale = python_pars[13];
    PyObject *par_rr = python_pars[14];
    PyObject *par_maxupdate = python_pars[15];
    PyObject *par_mast = python_pars[16];
    PyObject *par_pivot = python_pars[17];
    PyObject *par_unknown_options = python_pars[18];
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
    CHECK_OBJECT(par_c);
    Py_DECREF(par_c);
    par_c = NULL;
    CHECK_OBJECT(par_A_ub);
    Py_DECREF(par_A_ub);
    par_A_ub = NULL;
    CHECK_OBJECT(par_b_ub);
    Py_DECREF(par_b_ub);
    par_b_ub = NULL;
    CHECK_OBJECT(par_A_eq);
    Py_DECREF(par_A_eq);
    par_A_eq = NULL;
    CHECK_OBJECT(par_b_eq);
    Py_DECREF(par_b_eq);
    par_b_eq = NULL;
    CHECK_OBJECT(par_bounds);
    Py_DECREF(par_bounds);
    par_bounds = NULL;
    CHECK_OBJECT(par_method);
    Py_DECREF(par_method);
    par_method = NULL;
    CHECK_OBJECT(par_callback);
    Py_DECREF(par_callback);
    par_callback = NULL;
    CHECK_OBJECT(par_x0);
    Py_DECREF(par_x0);
    par_x0 = NULL;
    CHECK_OBJECT(par_maxiter);
    Py_DECREF(par_maxiter);
    par_maxiter = NULL;
    CHECK_OBJECT(par_disp);
    Py_DECREF(par_disp);
    par_disp = NULL;
    CHECK_OBJECT(par_presolve);
    Py_DECREF(par_presolve);
    par_presolve = NULL;
    CHECK_OBJECT(par_tol);
    Py_DECREF(par_tol);
    par_tol = NULL;
    CHECK_OBJECT(par_autoscale);
    Py_DECREF(par_autoscale);
    par_autoscale = NULL;
    CHECK_OBJECT(par_rr);
    Py_DECREF(par_rr);
    par_rr = NULL;
    CHECK_OBJECT(par_maxupdate);
    Py_DECREF(par_maxupdate);
    par_maxupdate = NULL;
    CHECK_OBJECT(par_mast);
    Py_DECREF(par_mast);
    par_mast = NULL;
    CHECK_OBJECT(par_pivot);
    Py_DECREF(par_pivot);
    par_pivot = NULL;
    CHECK_OBJECT(par_unknown_options);
    Py_DECREF(par_unknown_options);
    par_unknown_options = NULL;
    goto function_return_exit;
    // End of try:
    CHECK_OBJECT(par_c);
    Py_DECREF(par_c);
    par_c = NULL;
    CHECK_OBJECT(par_A_ub);
    Py_DECREF(par_A_ub);
    par_A_ub = NULL;
    CHECK_OBJECT(par_b_ub);
    Py_DECREF(par_b_ub);
    par_b_ub = NULL;
    CHECK_OBJECT(par_A_eq);
    Py_DECREF(par_A_eq);
    par_A_eq = NULL;
    CHECK_OBJECT(par_b_eq);
    Py_DECREF(par_b_eq);
    par_b_eq = NULL;
    CHECK_OBJECT(par_bounds);
    Py_DECREF(par_bounds);
    par_bounds = NULL;
    CHECK_OBJECT(par_method);
    Py_DECREF(par_method);
    par_method = NULL;
    CHECK_OBJECT(par_callback);
    Py_DECREF(par_callback);
    par_callback = NULL;
    CHECK_OBJECT(par_x0);
    Py_DECREF(par_x0);
    par_x0 = NULL;
    CHECK_OBJECT(par_maxiter);
    Py_DECREF(par_maxiter);
    par_maxiter = NULL;
    CHECK_OBJECT(par_disp);
    Py_DECREF(par_disp);
    par_disp = NULL;
    CHECK_OBJECT(par_presolve);
    Py_DECREF(par_presolve);
    par_presolve = NULL;
    CHECK_OBJECT(par_tol);
    Py_DECREF(par_tol);
    par_tol = NULL;
    CHECK_OBJECT(par_autoscale);
    Py_DECREF(par_autoscale);
    par_autoscale = NULL;
    CHECK_OBJECT(par_rr);
    Py_DECREF(par_rr);
    par_rr = NULL;
    CHECK_OBJECT(par_maxupdate);
    Py_DECREF(par_maxupdate);
    par_maxupdate = NULL;
    CHECK_OBJECT(par_mast);
    Py_DECREF(par_mast);
    par_mast = NULL;
    CHECK_OBJECT(par_pivot);
    Py_DECREF(par_pivot);
    par_pivot = NULL;
    CHECK_OBJECT(par_unknown_options);
    Py_DECREF(par_unknown_options);
    par_unknown_options = NULL;

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


static PyObject *impl_scipy$optimize$_linprog_doc$$$function__6__linprog_simplex_doc(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_c = python_pars[0];
    PyObject *par_A_ub = python_pars[1];
    PyObject *par_b_ub = python_pars[2];
    PyObject *par_A_eq = python_pars[3];
    PyObject *par_b_eq = python_pars[4];
    PyObject *par_bounds = python_pars[5];
    PyObject *par_method = python_pars[6];
    PyObject *par_callback = python_pars[7];
    PyObject *par_maxiter = python_pars[8];
    PyObject *par_disp = python_pars[9];
    PyObject *par_presolve = python_pars[10];
    PyObject *par_tol = python_pars[11];
    PyObject *par_autoscale = python_pars[12];
    PyObject *par_rr = python_pars[13];
    PyObject *par_bland = python_pars[14];
    PyObject *par_unknown_options = python_pars[15];
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
    CHECK_OBJECT(par_c);
    Py_DECREF(par_c);
    par_c = NULL;
    CHECK_OBJECT(par_A_ub);
    Py_DECREF(par_A_ub);
    par_A_ub = NULL;
    CHECK_OBJECT(par_b_ub);
    Py_DECREF(par_b_ub);
    par_b_ub = NULL;
    CHECK_OBJECT(par_A_eq);
    Py_DECREF(par_A_eq);
    par_A_eq = NULL;
    CHECK_OBJECT(par_b_eq);
    Py_DECREF(par_b_eq);
    par_b_eq = NULL;
    CHECK_OBJECT(par_bounds);
    Py_DECREF(par_bounds);
    par_bounds = NULL;
    CHECK_OBJECT(par_method);
    Py_DECREF(par_method);
    par_method = NULL;
    CHECK_OBJECT(par_callback);
    Py_DECREF(par_callback);
    par_callback = NULL;
    CHECK_OBJECT(par_maxiter);
    Py_DECREF(par_maxiter);
    par_maxiter = NULL;
    CHECK_OBJECT(par_disp);
    Py_DECREF(par_disp);
    par_disp = NULL;
    CHECK_OBJECT(par_presolve);
    Py_DECREF(par_presolve);
    par_presolve = NULL;
    CHECK_OBJECT(par_tol);
    Py_DECREF(par_tol);
    par_tol = NULL;
    CHECK_OBJECT(par_autoscale);
    Py_DECREF(par_autoscale);
    par_autoscale = NULL;
    CHECK_OBJECT(par_rr);
    Py_DECREF(par_rr);
    par_rr = NULL;
    CHECK_OBJECT(par_bland);
    Py_DECREF(par_bland);
    par_bland = NULL;
    CHECK_OBJECT(par_unknown_options);
    Py_DECREF(par_unknown_options);
    par_unknown_options = NULL;
    goto function_return_exit;
    // End of try:
    CHECK_OBJECT(par_c);
    Py_DECREF(par_c);
    par_c = NULL;
    CHECK_OBJECT(par_A_ub);
    Py_DECREF(par_A_ub);
    par_A_ub = NULL;
    CHECK_OBJECT(par_b_ub);
    Py_DECREF(par_b_ub);
    par_b_ub = NULL;
    CHECK_OBJECT(par_A_eq);
    Py_DECREF(par_A_eq);
    par_A_eq = NULL;
    CHECK_OBJECT(par_b_eq);
    Py_DECREF(par_b_eq);
    par_b_eq = NULL;
    CHECK_OBJECT(par_bounds);
    Py_DECREF(par_bounds);
    par_bounds = NULL;
    CHECK_OBJECT(par_method);
    Py_DECREF(par_method);
    par_method = NULL;
    CHECK_OBJECT(par_callback);
    Py_DECREF(par_callback);
    par_callback = NULL;
    CHECK_OBJECT(par_maxiter);
    Py_DECREF(par_maxiter);
    par_maxiter = NULL;
    CHECK_OBJECT(par_disp);
    Py_DECREF(par_disp);
    par_disp = NULL;
    CHECK_OBJECT(par_presolve);
    Py_DECREF(par_presolve);
    par_presolve = NULL;
    CHECK_OBJECT(par_tol);
    Py_DECREF(par_tol);
    par_tol = NULL;
    CHECK_OBJECT(par_autoscale);
    Py_DECREF(par_autoscale);
    par_autoscale = NULL;
    CHECK_OBJECT(par_rr);
    Py_DECREF(par_rr);
    par_rr = NULL;
    CHECK_OBJECT(par_bland);
    Py_DECREF(par_bland);
    par_bland = NULL;
    CHECK_OBJECT(par_unknown_options);
    Py_DECREF(par_unknown_options);
    par_unknown_options = NULL;

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



static PyObject *MAKE_FUNCTION_scipy$optimize$_linprog_doc$$$function__1__linprog_highs_doc(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$optimize$_linprog_doc$$$function__1__linprog_highs_doc,
        mod_consts[15],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_f88b9c31f93a85215f356764ccaa2453,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_scipy$optimize$_linprog_doc,
        mod_consts[0],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$optimize$_linprog_doc$$$function__2__linprog_highs_ds_doc(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$optimize$_linprog_doc$$$function__2__linprog_highs_ds_doc,
        mod_consts[17],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_7c076c6fd89440837385cd185a9f87ce,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_scipy$optimize$_linprog_doc,
        mod_consts[1],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$optimize$_linprog_doc$$$function__3__linprog_highs_ipm_doc(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$optimize$_linprog_doc$$$function__3__linprog_highs_ipm_doc,
        mod_consts[19],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_517ad9e80238445ec93c140b413a518c,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_scipy$optimize$_linprog_doc,
        mod_consts[2],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$optimize$_linprog_doc$$$function__4__linprog_ip_doc(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$optimize$_linprog_doc$$$function__4__linprog_ip_doc,
        mod_consts[21],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_dfeb993311c0bf43dd9a07faeeafa890,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_scipy$optimize$_linprog_doc,
        mod_consts[3],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$optimize$_linprog_doc$$$function__5__linprog_rs_doc(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$optimize$_linprog_doc$$$function__5__linprog_rs_doc,
        mod_consts[23],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_7fd06c50c3cc86e622d79e8e8859e1c1,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_scipy$optimize$_linprog_doc,
        mod_consts[4],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$optimize$_linprog_doc$$$function__6__linprog_simplex_doc(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$optimize$_linprog_doc$$$function__6__linprog_simplex_doc,
        mod_consts[25],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_d16c6aeea826295edbb48c09e31168d6,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_scipy$optimize$_linprog_doc,
        mod_consts[5],
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

function_impl_code functable_scipy$optimize$_linprog_doc[] = {
    impl_scipy$optimize$_linprog_doc$$$function__1__linprog_highs_doc,
    impl_scipy$optimize$_linprog_doc$$$function__2__linprog_highs_ds_doc,
    impl_scipy$optimize$_linprog_doc$$$function__3__linprog_highs_ipm_doc,
    impl_scipy$optimize$_linprog_doc$$$function__4__linprog_ip_doc,
    impl_scipy$optimize$_linprog_doc$$$function__5__linprog_rs_doc,
    impl_scipy$optimize$_linprog_doc$$$function__6__linprog_simplex_doc,
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

    function_impl_code *current = functable_scipy$optimize$_linprog_doc;
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

    if (offset > sizeof(functable_scipy$optimize$_linprog_doc) || offset < 0) {
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
        functable_scipy$optimize$_linprog_doc[offset],
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
        module_scipy$optimize$_linprog_doc,
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
PyObject *modulecode_scipy$optimize$_linprog_doc(PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *module_entry) {
    module_scipy$optimize$_linprog_doc = module;

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
    PRINT_STRING("scipy.optimize._linprog_doc: Calling setupMetaPathBasedLoader().\n");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 0x300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    PRINT_STRING("scipy.optimize._linprog_doc: Calling createModuleConstants().\n");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    PRINT_STRING("scipy.optimize._linprog_doc: Calling createModuleCodeObjects().\n");
#endif
    createModuleCodeObjects();

    // PRINT_STRING("in initscipy$optimize$_linprog_doc\n");

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.

    moduledict_scipy$optimize$_linprog_doc = MODULE_DICT(module_scipy$optimize$_linprog_doc);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    registerDillPluginTables(module_entry->name, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_scipy$optimize$_linprog_doc,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_scipy$optimize$_linprog_doc,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_scipy$optimize$_linprog_doc, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_scipy$optimize$_linprog_doc,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_scipy$optimize$_linprog_doc, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_scipy$optimize$_linprog_doc,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_scipy$optimize$_linprog_doc, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_scipy$optimize$_linprog_doc,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_scipy$optimize$_linprog_doc);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_scipy$optimize$_linprog_doc, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_scipy$optimize$_linprog_doc, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

#if PYTHON_VERSION >= 0x300
    UPDATE_STRING_DICT0(moduledict_scipy$optimize$_linprog_doc, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);
#endif

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_scipy$optimize$_linprog_doc, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(_spec_from_module, module_scipy$optimize$_linprog_doc);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_scipy$optimize$_linprog_doc, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    struct Nuitka_FrameObject *frame_ac76a030f43280f336f801be8daf3091;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = mod_consts[6];
        UPDATE_STRING_DICT0(moduledict_scipy$optimize$_linprog_doc, (Nuitka_StringObject *)mod_consts[7], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = mod_consts[8];
        UPDATE_STRING_DICT0(moduledict_scipy$optimize$_linprog_doc, (Nuitka_StringObject *)mod_consts[9], tmp_assign_source_2);
    }
    // Frame without reuse.
    frame_ac76a030f43280f336f801be8daf3091 = MAKE_MODULE_FRAME(codeobj_ac76a030f43280f336f801be8daf3091, module_scipy$optimize$_linprog_doc);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack(frame_ac76a030f43280f336f801be8daf3091);
    assert(Py_REFCNT(frame_ac76a030f43280f336f801be8daf3091) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_name_1 = mod_consts[8];
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_scipy$optimize$_linprog_doc, (Nuitka_StringObject *)mod_consts[10]);

        if (unlikely(tmp_assattr_target_1 == NULL)) {
            tmp_assattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
        }

        assert(!(tmp_assattr_target_1 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[11], tmp_assattr_name_1);
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
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_scipy$optimize$_linprog_doc, (Nuitka_StringObject *)mod_consts[10]);

        if (unlikely(tmp_assattr_target_2 == NULL)) {
            tmp_assattr_target_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
        }

        assert(!(tmp_assattr_target_2 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[12], tmp_assattr_name_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
    }

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION(frame_ac76a030f43280f336f801be8daf3091);
#endif
    popFrameStack();

    assertFrameObject(frame_ac76a030f43280f336f801be8daf3091);

    goto frame_no_exception_1;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_ac76a030f43280f336f801be8daf3091);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_ac76a030f43280f336f801be8daf3091, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_ac76a030f43280f336f801be8daf3091->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_ac76a030f43280f336f801be8daf3091, exception_lineno);
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;

    frame_no_exception_1:;
    {
        PyObject *tmp_assign_source_3;
        tmp_assign_source_3 = Py_None;
        UPDATE_STRING_DICT0(moduledict_scipy$optimize$_linprog_doc, (Nuitka_StringObject *)mod_consts[13], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_defaults_1;
        tmp_defaults_1 = mod_consts[14];
        Py_INCREF(tmp_defaults_1);


        tmp_assign_source_4 = MAKE_FUNCTION_scipy$optimize$_linprog_doc$$$function__1__linprog_highs_doc(tmp_defaults_1);

        UPDATE_STRING_DICT1(moduledict_scipy$optimize$_linprog_doc, (Nuitka_StringObject *)mod_consts[15], tmp_assign_source_4);
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_defaults_2;
        tmp_defaults_2 = mod_consts[16];
        Py_INCREF(tmp_defaults_2);


        tmp_assign_source_5 = MAKE_FUNCTION_scipy$optimize$_linprog_doc$$$function__2__linprog_highs_ds_doc(tmp_defaults_2);

        UPDATE_STRING_DICT1(moduledict_scipy$optimize$_linprog_doc, (Nuitka_StringObject *)mod_consts[17], tmp_assign_source_5);
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_defaults_3;
        tmp_defaults_3 = mod_consts[18];
        Py_INCREF(tmp_defaults_3);


        tmp_assign_source_6 = MAKE_FUNCTION_scipy$optimize$_linprog_doc$$$function__3__linprog_highs_ipm_doc(tmp_defaults_3);

        UPDATE_STRING_DICT1(moduledict_scipy$optimize$_linprog_doc, (Nuitka_StringObject *)mod_consts[19], tmp_assign_source_6);
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_defaults_4;
        tmp_defaults_4 = mod_consts[20];
        Py_INCREF(tmp_defaults_4);


        tmp_assign_source_7 = MAKE_FUNCTION_scipy$optimize$_linprog_doc$$$function__4__linprog_ip_doc(tmp_defaults_4);

        UPDATE_STRING_DICT1(moduledict_scipy$optimize$_linprog_doc, (Nuitka_StringObject *)mod_consts[21], tmp_assign_source_7);
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_defaults_5;
        tmp_defaults_5 = mod_consts[22];
        Py_INCREF(tmp_defaults_5);


        tmp_assign_source_8 = MAKE_FUNCTION_scipy$optimize$_linprog_doc$$$function__5__linprog_rs_doc(tmp_defaults_5);

        UPDATE_STRING_DICT1(moduledict_scipy$optimize$_linprog_doc, (Nuitka_StringObject *)mod_consts[23], tmp_assign_source_8);
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_defaults_6;
        tmp_defaults_6 = mod_consts[24];
        Py_INCREF(tmp_defaults_6);


        tmp_assign_source_9 = MAKE_FUNCTION_scipy$optimize$_linprog_doc$$$function__6__linprog_simplex_doc(tmp_defaults_6);

        UPDATE_STRING_DICT1(moduledict_scipy$optimize$_linprog_doc, (Nuitka_StringObject *)mod_consts[25], tmp_assign_source_9);
    }

    return module_scipy$optimize$_linprog_doc;
    module_exception_exit:
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);
    return NULL;
}

