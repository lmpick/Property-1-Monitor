/* File: "update_state_880.c". Automatically generated by SBV. Do not edit! */

#include "internal.h"

/* User given declarations: */
/*test 001*/
/*DotBegin
digraph G {
node [shape=box]

0 [label="file: 
?????",color=red, style=filled]
1 [label="stream: 877",color=crimson, style=filled]
0 -> 1


}

DotEnd*/
/*@
 assigns \nothing;
 ensures \result == (queue_877[0]);
*/
SBool update_state_880(const SBool *queue_877,
                       const SWord32 ptr_877)
{
  const SBool   s0 = queue_877[0];
  return s0;
}