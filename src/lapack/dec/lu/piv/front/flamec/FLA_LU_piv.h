/*

    Copyright (C) 2014, The University of Texas at Austin

    This file is part of libflame and is available under the 3-Clause
    BSD license, which can be found in the LICENSE file at the top-level
    directory, or at http://opensource.org/licenses/BSD-3-Clause

*/

#include "FLA_LU_piv_vars.h"

FLA_Error FLA_LU_piv_internal( FLA_Obj A, FLA_Obj p, fla_lu_t* cntl );

FLA_Error FLA_LU_piv_solve( FLA_Obj A, FLA_Obj p, FLA_Obj B, FLA_Obj X );
FLA_Error FLASH_LU_piv_solve( FLA_Obj A, FLA_Obj p, FLA_Obj B, FLA_Obj X );
