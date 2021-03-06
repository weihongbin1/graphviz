/*************************************************************************
 * Copyright (c) 2011 AT&T Intellectual Property 
 * All rights reserved. This program and the accompanying materials
 * are made available under the terms of the Eclipse Public License v1.0
 * which accompanies this distribution, and is available at
 * http://www.eclipse.org/legal/epl-v10.html
 *
 * Contributors: Details at https://graphviz.org
 *************************************************************************/

#ifdef __cplusplus
extern "C" {
#endif

#ifndef CONVERT_H
#define CONVERT_H

#include "config.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include <cgraph/cgraph.h>
#include <cgraph/cghdr.h>

    extern void gv_to_gxl(Agraph_t *, FILE *);
#ifdef HAVE_EXPAT
    extern Agraph_t *gxl_to_gv(FILE *);
#endif

#endif

#ifdef __cplusplus
}
#endif
