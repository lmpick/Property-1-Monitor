/* File: "update_state_430.c". Automatically generated by SBV. Do not edit! */

#include "internal.h"

/* User given declarations: */
/*test 001*/
/*DotBegin
digraph G {
node [shape=box]

0 [label="file: 
?????",color=red, style=filled]
1 [label="stream: 427",color=crimson, style=filled]
0 -> 1


}

DotEnd*/
/*@
 assigns \nothing;
 ensures \result == (queue_427[0]);
*/
SBool update_state_430(const SBool *queue_427,
                       const SWord32 ptr_427)
{
  const SBool   s0 = queue_427[0];
  return s0;
}