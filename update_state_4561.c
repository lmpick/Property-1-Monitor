/* File: "update_state_4561.c". Automatically generated by SBV. Do not edit! */

#include "internal.h"

/* User given declarations: */
/*test 001*/
/*DotBegin
digraph G {
node [shape=box]

0 [label="file: 
?????",color=red, style=filled]
1 [label="stream: 4558",color=crimson, style=filled]
0 -> 1


}

DotEnd*/
/*@
 assigns \nothing;
 ensures \result == (queue_4558[0]);
*/
SBool update_state_4561(const SBool *queue_4558,
                        const SWord32 ptr_4558)
{
  const SBool   s0 = queue_4558[0];
  return s0;
}