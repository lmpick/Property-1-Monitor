/* File: "update_state_4054.c". Automatically generated by SBV. Do not edit! */

#include "internal.h"

/* User given declarations: */
/*test 001*/
/*DotBegin
digraph G {
node [shape=box]

0 [label="file: 
?????",color=red, style=filled]
1 [label="stream: 4051",color=crimson, style=filled]
0 -> 1


}

DotEnd*/
/*@
 assigns \nothing;
 ensures \result == (queue_4051[0]);
*/
SBool update_state_4054(const SBool *queue_4051,
                        const SWord32 ptr_4051)
{
  const SBool   s0 = queue_4051[0];
  return s0;
}