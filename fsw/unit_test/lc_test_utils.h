/*************************************************************************
** File:
**   $Id: lc_test_utils.h 1.2 2017/01/22 17:24:39EST sstrege Exp  $
**
**  Copyright (c) 2007-2020 United States Government as represented by the
**  Administrator of the National Aeronautics and Space Administration.
**  All Other Rights Reserved.
**
**   This software was created at NASA's Goddard Space Flight Center.
**   This software is governed by the NASA Open Source Agreement and may be
**   used, distributed and modified only pursuant to the terms of that
**   agreement.
**
** Purpose:
**   This file contains the function prototypes and global variables for the
*unit test utilities for the LC application.
**
** References:
**   Flight Software Branch C Coding Standard Version 1.2
**   CFS Development Standards Document
**
** Notes:
**
*************************************************************************/

/*
 * Includes
 */

#include <time.h>

#include "lc_app.h"
#include "ut_cfe_es_stubs.h"
#include "ut_cfe_evs_hooks.h"
#include "ut_cfe_evs_stubs.h"
#include "ut_cfe_fs_stubs.h"
#include "ut_cfe_psp_memutils_stubs.h"
#include "ut_cfe_sb_stubs.h"
#include "ut_cfe_tbl_hooks.h"
#include "ut_cfe_tbl_stubs.h"
#include "ut_cfe_time_stubs.h"
#include "ut_osapi_stubs.h"
#include "ut_osfileapi_stubs.h"

/*
 * Function Definitions
 */

void LC_Test_Setup(void);
void LC_Test_TearDown(void);

/************************/
/*  End of File Comment */
/************************/
