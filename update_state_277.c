/* File: "update_state_277.c". Automatically generated by SBV. Do not edit! */

#include "internal.h"

/* User given declarations: */
/*test 001*/
/*DotBegin
digraph G {
node [shape=box]

0 [label="file: 
?????",color=red, style=filled]
1 [label="stream: 274",color=crimson, style=filled]
0 -> 1


}

DotEnd*/
/*@
 assigns \nothing;
 ensures \result == (queue_274[0]);
*/
SBool update_state_277(const SBool *queue_274,
                       const SWord32 ptr_274)
{
  const SBool   s0 = queue_274[0];
  return s0;
}