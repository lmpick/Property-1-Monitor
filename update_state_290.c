/* File: "update_state_290.c". Automatically generated by SBV. Do not edit! */

#include "internal.h"

/* User given declarations: */
/*test 001*/
/*DotBegin
digraph G {
node [shape=box]

0 [label="file: 
?????",color=red, style=filled]
1 [label="stream: 287",color=crimson, style=filled]
0 -> 1


}

DotEnd*/
/*@
 assigns \nothing;
 ensures \result == (queue_287[0]);
*/
SBool update_state_290(const SBool *queue_287,
                       const SWord32 ptr_287)
{
  const SBool   s0 = queue_287[0];
  return s0;
}