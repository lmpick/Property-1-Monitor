/* File: "update_state_2504.c". Automatically generated by SBV. Do not edit! */

#include "internal.h"

/* User given declarations: */
/*test 001*/
/*DotBegin
digraph G {
node [shape=box]

0 [label="file: 
?????",color=red, style=filled]
1 [label="stream: 2501",color=crimson, style=filled]
0 -> 1


}

DotEnd*/
/*@
 assigns \nothing;
 ensures \result == (queue_2501[0]);
*/
SBool update_state_2504(const SBool *queue_2501,
                        const SWord32 ptr_2501)
{
  const SBool   s0 = queue_2501[0];
  return s0;
}