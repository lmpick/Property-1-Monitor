/* File: "update_state_931.c". Automatically generated by SBV. Do not edit! */

#include "internal.h"

/* User given declarations: */
/*test 001*/
/*DotBegin
digraph G {
node [shape=box]

0 [label="file: 
?????",color=red, style=filled]
1 [label="stream: 928",color=crimson, style=filled]
0 -> 1


}

DotEnd*/
/*@
 assigns \nothing;
 ensures \result == (queue_928[0]);
*/
SBool update_state_931(const SBool *queue_928,
                       const SWord32 ptr_928)
{
  const SBool   s0 = queue_928[0];
  return s0;
}