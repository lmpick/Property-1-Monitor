/* File: "update_state_4473.c". Automatically generated by SBV. Do not edit! */

#include "internal.h"

/* User given declarations: */
/*test 001*/
/*DotBegin
digraph G {
node [shape=box]

0 [label="file: 
?????",color=red, style=filled]
1 [label="stream: 4470",color=crimson, style=filled]
0 -> 1


}

DotEnd*/
/*@
 assigns \nothing;
 ensures \result == (queue_4470[0]);
*/
SInt64 update_state_4473(const SInt64 *queue_4470,
                         const SWord32 ptr_4470)
{
  const SInt64  s0 = queue_4470[0];
  return s0;
}