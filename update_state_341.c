/* File: "update_state_341.c". Automatically generated by SBV. Do not edit! */

#include "internal.h"

/* User given declarations: */
/*test 001*/
/*DotBegin
digraph G {
node [shape=box]

0 [label="file: 
?????",color=red, style=filled]
1 [label="stream: 338",color=crimson, style=filled]
0 -> 1


}

DotEnd*/
/*@
 assigns \nothing;
 ensures \result == (queue_338[0]);
*/
SBool update_state_341(const SBool *queue_338,
                       const SWord32 ptr_338)
{
  const SBool   s0 = queue_338[0];
  return s0;
}