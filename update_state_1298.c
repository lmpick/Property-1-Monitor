/* File: "update_state_1298.c". Automatically generated by SBV. Do not edit! */

#include "internal.h"

/* User given declarations: */
/*test 001*/
/*DotBegin
digraph G {
node [shape=box]

0 [label="file: 
?????",color=red, style=filled]
1 [label="stream: 1295",color=crimson, style=filled]
0 -> 1


}

DotEnd*/
/*@
 assigns \nothing;
 ensures \result == (queue_1295[0]);
*/
SBool update_state_1298(const SBool *queue_1295,
                        const SWord32 ptr_1295)
{
  const SBool   s0 = queue_1295[0];
  return s0;
}