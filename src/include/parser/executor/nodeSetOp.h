//===----------------------------------------------------------------------===//
//
//                         Peloton
//
// nodeSetOp.h
//
// Identification: src/include/parser/executor/nodeSetOp.h
//
// Copyright (c) 2015-16, Carnegie Mellon University Database Group
//
//===----------------------------------------------------------------------===//


/*-------------------------------------------------------------------------
 *
 * nodeSetOp.h
 *
 *
 *
 * Portions Copyright (c) 1996-2015, PostgreSQL Global Development Group
 * Portions Copyright (c) 1994, Regents of the University of California
 *
 * src/include/executor/nodeSetOp.h
 *
 *-------------------------------------------------------------------------
 */
#ifndef NODESETOP_H
#define NODESETOP_H

#include "parser/nodes/execnodes.h"

extern SetOpState *ExecInitSetOp(SetOp *node, EState *estate, int eflags);
extern TupleTableSlot *ExecSetOp(SetOpState *node);
extern void ExecEndSetOp(SetOpState *node);
extern void ExecReScanSetOp(SetOpState *node);

#endif   /* NODESETOP_H */