/* File: "update_state_4493.c". Automatically generated by SBV. Do not edit! */

#include "internal.h"

/* User given declarations: */
/*test 001*/
/*DotBegin
digraph G {
node [shape=box]

0 [label="file: 
?????",color=red, style=filled]
1 [label="stream: 4490",color=crimson, style=filled]
0 -> 1


}

DotEnd*/
/*@
 assigns \nothing;
 ensures \result == (queue_4490[0]);
*/
SBool update_state_4493(const SBool *queue_4490,
                        const SWord32 ptr_4490)
{
  const SBool   s0 = queue_4490[0];
  return s0;
}