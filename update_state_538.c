/* File: "update_state_538.c". Automatically generated by SBV. Do not edit! */

#include "internal.h"

/* User given declarations: */
/*test 001*/
/*DotBegin
digraph G {
node [shape=box]

0 [label="file: 
?????",color=red, style=filled]
1 [label="stream: 535",color=crimson, style=filled]
0 -> 1


}

DotEnd*/
/*@
 assigns \nothing;
 ensures \result == (queue_535[0]);
*/
SBool update_state_538(const SBool *queue_535,
                       const SWord32 ptr_535)
{
  const SBool   s0 = queue_535[0];
  return s0;
}