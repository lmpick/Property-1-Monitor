/* File: "update_state_1613.c". Automatically generated by SBV. Do not edit! */

#include "internal.h"

/* User given declarations: */
/*test 001*/
/*DotBegin
digraph G {
node [shape=box]

0 [label="file: 
?????",color=red, style=filled]
1 [label="stream: 1610",color=crimson, style=filled]
0 -> 1


}

DotEnd*/
/*@
 assigns \nothing;
 ensures \result == (queue_1610[0]);
*/
SBool update_state_1613(const SBool *queue_1610,
                        const SWord32 ptr_1610)
{
  const SBool   s0 = queue_1610[0];
  return s0;
}