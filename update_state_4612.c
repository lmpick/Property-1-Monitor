/* File: "update_state_4612.c". Automatically generated by SBV. Do not edit! */

#include "internal.h"

/* User given declarations: */
/*test 001*/
/*DotBegin
digraph G {
node [shape=box]

0 [label="file: 
?????",color=red, style=filled]
1 [label="stream: 4609",color=crimson, style=filled]
0 -> 1


}

DotEnd*/
/*@
 assigns \nothing;
 ensures \result == (queue_4609[0]);
*/
SBool update_state_4612(const SBool *queue_4609,
                        const SWord32 ptr_4609)
{
  const SBool   s0 = queue_4609[0];
  return s0;
}