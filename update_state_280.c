/* File: "update_state_280.c". Automatically generated by SBV. Do not edit! */

#include "internal.h"

/* User given declarations: */
/*test 001*/
/*DotBegin
digraph G {
node [shape=box]

0 [label="file: 
?????",color=red, style=filled]
1 [label="stream: 277",color=crimson, style=filled]
0 -> 1


}

DotEnd*/
/*@
 assigns \nothing;
 ensures \result == (queue_277[0]);
*/
SBool update_state_280(const SBool *queue_277,
                       const SWord32 ptr_277)
{
  const SBool   s0 = queue_277[0];
  return s0;
}