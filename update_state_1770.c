/* File: "update_state_1770.c". Automatically generated by SBV. Do not edit! */

#include "internal.h"

/* User given declarations: */
/*test 001*/
/*DotBegin
digraph G {
node [shape=box]

0 [label="file: 
?????",color=red, style=filled]
1 [label="stream: 1767",color=crimson, style=filled]
0 -> 1


}

DotEnd*/
/*@
 assigns \nothing;
 ensures \result == (queue_1767[0]);
*/
SInt64 update_state_1770(const SInt64 *queue_1767,
                         const SWord32 ptr_1767)
{
  const SInt64  s0 = queue_1767[0];
  return s0;
}