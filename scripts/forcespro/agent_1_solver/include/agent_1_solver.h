/*
agent_1_solver : A fast customized optimization solver.

Copyright (C) 2013-2020 EMBOTECH AG [info@embotech.com]. All rights reserved.


This software is intended for simulation and testing purposes only. 
Use of this software for any commercial purpose is prohibited.

This program is distributed in the hope that it will be useful.
EMBOTECH makes NO WARRANTIES with respect to the use of the software 
without even the implied warranty of MERCHANTABILITY or FITNESS FOR A 
PARTICULAR PURPOSE. 

EMBOTECH shall not have any liability for any damage arising from the use
of the software.

This Agreement shall exclusively be governed by and interpreted in 
accordance with the laws of Switzerland, excluding its principles
of conflict of laws. The Courts of Zurich-City shall have exclusive 
jurisdiction in case of any dispute.

*/

/* Generated by FORCES PRO v3.1.0 on Tuesday, August 18, 2020 at 2:03:17 PM */

#ifndef SOLVER_STDIO_H
#define SOLVER_STDIO_H
#include <stdio.h>
#endif

#ifndef agent_1_solver_H
#define agent_1_solver_H

/* DATA TYPE ------------------------------------------------------------*/
typedef double agent_1_solver_float;

typedef double agent_1_solverinterface_float;

#ifndef SOLVER_STANDARD_TYPES
#define SOLVER_STANDARD_TYPES

typedef signed char solver_int8_signed;
typedef unsigned char solver_int8_unsigned;
typedef char solver_int8_default;
typedef signed short int solver_int16_signed;
typedef unsigned short int solver_int16_unsigned;
typedef short int solver_int16_default;
typedef signed int solver_int32_signed;
typedef unsigned int solver_int32_unsigned;
typedef int solver_int32_default;
typedef signed long long int solver_int64_signed;
typedef unsigned long long int solver_int64_unsigned;
typedef long long int solver_int64_default;

#endif


/* SOLVER SETTINGS ------------------------------------------------------*/

/* MISRA-C compliance */
#ifndef MISRA_C_agent_1_solver
#define MISRA_C_agent_1_solver (0)
#endif

/* restrict code */
#ifndef RESTRICT_CODE_agent_1_solver
#define RESTRICT_CODE_agent_1_solver (0)
#endif

/* print level */
#ifndef SET_PRINTLEVEL_agent_1_solver
#define SET_PRINTLEVEL_agent_1_solver    (2)
#endif

/* timing */
#ifndef SET_TIMING_agent_1_solver
#define SET_TIMING_agent_1_solver    (1)
#endif

/* Numeric Warnings */
/* #define PRINTNUMERICALWARNINGS */

/* maximum number of iterations  */
#define SET_MAXIT_agent_1_solver			(30)	

/* scaling factor of line search (FTB rule) */
#define SET_FLS_SCALE_agent_1_solver		(agent_1_solver_float)(0.99)      

/* maximum number of supported elements in the filter */
#define MAX_FILTER_SIZE_agent_1_solver	(30) 

/* maximum number of supported elements in the filter */
#define MAX_SOC_IT_agent_1_solver			(4) 

/* desired relative duality gap */
#define SET_ACC_RDGAP_agent_1_solver		(agent_1_solver_float)(0.0001)

/* desired maximum residual on equality constraints */
#define SET_ACC_RESEQ_agent_1_solver		(agent_1_solver_float)(1E-06)

/* desired maximum residual on inequality constraints */
#define SET_ACC_RESINEQ_agent_1_solver	(agent_1_solver_float)(1E-06)

/* desired maximum violation of complementarity */
#define SET_ACC_KKTCOMPL_agent_1_solver	(agent_1_solver_float)(1E-06)


/* RETURN CODES----------------------------------------------------------*/
/* solver has converged within desired accuracy */
#define OPTIMAL_agent_1_solver      (1)

/* maximum number of iterations has been reached */
#define MAXITREACHED_agent_1_solver (0)

/* wrong number of inequalities error */
#define INVALID_NUM_INEQ_ERROR_agent_1_solver  (-4)

/* factorization error */
#define FACTORIZATION_ERROR_agent_1_solver   (-5)

/* NaN encountered in function evaluations */
#define BADFUNCEVAL_agent_1_solver  (-6)

/* no progress in method possible */
#define NOPROGRESS_agent_1_solver   (-7)

/* invalid values in parameters */
#define PARAM_VALUE_ERROR_agent_1_solver   (-11)

/* licensing error - solver not valid on this machine */
#define LICENSE_ERROR_agent_1_solver  (-100)

/* PARAMETERS -----------------------------------------------------------*/
/* fill this with data before calling the solver! */
typedef struct
{
    /* vector of size 420 */
    agent_1_solver_float x0[420];

    /* vector of size 9 */
    agent_1_solver_float xinit[9];

    /* vector of size 595 */
    agent_1_solver_float all_parameters[595];


} agent_1_solver_params;


/* OUTPUTS --------------------------------------------------------------*/
/* the desired variables are put here by the solver */
typedef struct
{
    /* vector of size 12 */
    agent_1_solver_float x01[12];

    /* vector of size 12 */
    agent_1_solver_float x02[12];

    /* vector of size 12 */
    agent_1_solver_float x03[12];

    /* vector of size 12 */
    agent_1_solver_float x04[12];

    /* vector of size 12 */
    agent_1_solver_float x05[12];

    /* vector of size 12 */
    agent_1_solver_float x06[12];

    /* vector of size 12 */
    agent_1_solver_float x07[12];

    /* vector of size 12 */
    agent_1_solver_float x08[12];

    /* vector of size 12 */
    agent_1_solver_float x09[12];

    /* vector of size 12 */
    agent_1_solver_float x10[12];

    /* vector of size 12 */
    agent_1_solver_float x11[12];

    /* vector of size 12 */
    agent_1_solver_float x12[12];

    /* vector of size 12 */
    agent_1_solver_float x13[12];

    /* vector of size 12 */
    agent_1_solver_float x14[12];

    /* vector of size 12 */
    agent_1_solver_float x15[12];

    /* vector of size 12 */
    agent_1_solver_float x16[12];

    /* vector of size 12 */
    agent_1_solver_float x17[12];

    /* vector of size 12 */
    agent_1_solver_float x18[12];

    /* vector of size 12 */
    agent_1_solver_float x19[12];

    /* vector of size 12 */
    agent_1_solver_float x20[12];

    /* vector of size 12 */
    agent_1_solver_float x21[12];

    /* vector of size 12 */
    agent_1_solver_float x22[12];

    /* vector of size 12 */
    agent_1_solver_float x23[12];

    /* vector of size 12 */
    agent_1_solver_float x24[12];

    /* vector of size 12 */
    agent_1_solver_float x25[12];

    /* vector of size 12 */
    agent_1_solver_float x26[12];

    /* vector of size 12 */
    agent_1_solver_float x27[12];

    /* vector of size 12 */
    agent_1_solver_float x28[12];

    /* vector of size 12 */
    agent_1_solver_float x29[12];

    /* vector of size 12 */
    agent_1_solver_float x30[12];

    /* vector of size 12 */
    agent_1_solver_float x31[12];

    /* vector of size 12 */
    agent_1_solver_float x32[12];

    /* vector of size 12 */
    agent_1_solver_float x33[12];

    /* vector of size 12 */
    agent_1_solver_float x34[12];

    /* vector of size 12 */
    agent_1_solver_float x35[12];


} agent_1_solver_output;


/* SOLVER INFO ----------------------------------------------------------*/
/* diagnostic data from last interior point step */
typedef struct
{
    /* iteration number */
    solver_int32_default it;

	/* number of iterations needed to optimality (branch-and-bound) */
	solver_int32_default it2opt;
	
    /* inf-norm of equality constraint residuals */
    agent_1_solver_float res_eq;
	
    /* inf-norm of inequality constraint residuals */
    agent_1_solver_float res_ineq;

	/* norm of stationarity condition */
    agent_1_solver_float rsnorm;

	/* max of all complementarity violations */
    agent_1_solver_float rcompnorm;

    /* primal objective */
    agent_1_solver_float pobj;	
	
    /* dual objective */
    agent_1_solver_float dobj;	

    /* duality gap := pobj - dobj */
    agent_1_solver_float dgap;		
	
    /* relative duality gap := |dgap / pobj | */
    agent_1_solver_float rdgap;		

    /* duality measure */
    agent_1_solver_float mu;

	/* duality measure (after affine step) */
    agent_1_solver_float mu_aff;
	
    /* centering parameter */
    agent_1_solver_float sigma;
	
    /* number of backtracking line search steps (affine direction) */
    solver_int32_default lsit_aff;
    
    /* number of backtracking line search steps (combined direction) */
    solver_int32_default lsit_cc;
    
    /* step size (affine direction) */
    agent_1_solver_float step_aff;
    
    /* step size (combined direction) */
    agent_1_solver_float step_cc;    

	/* solvertime */
	agent_1_solver_float solvetime;   

	/* time spent in function evaluations */
	agent_1_solver_float fevalstime;  

} agent_1_solver_info;







/* SOLVER FUNCTION DEFINITION -------------------------------------------*/
/* Time of Solver Generation: (UTC) Tuesday, August 18, 2020 2:03:19 PM */
/* User License expires on: (UTC) Thursday, January 21, 2021 10:00:00 PM (approx.) (at the time of code generation) */
/* Solver Static License expires on: (UTC) Thursday, January 21, 2021 10:00:00 PM (approx.) */
/* Solver Generation Request Id: d56e1e97-2972-435f-81fd-98256460ba14 */
/* examine exitflag before using the result! */
#ifdef __cplusplus
extern "C" {
#endif		

typedef void (*agent_1_solver_extfunc)(agent_1_solver_float* x, agent_1_solver_float* y, agent_1_solver_float* lambda, agent_1_solver_float* params, agent_1_solver_float* pobj, agent_1_solver_float* g, agent_1_solver_float* c, agent_1_solver_float* Jeq, agent_1_solver_float* h, agent_1_solver_float* Jineq, agent_1_solver_float* H, solver_int32_default stage, solver_int32_default iterations);

extern solver_int32_default agent_1_solver_solve(agent_1_solver_params *params, agent_1_solver_output *output, agent_1_solver_info *info, FILE *fs, agent_1_solver_extfunc evalextfunctions_agent_1_solver);	





#ifdef __cplusplus
}
#endif

#endif
