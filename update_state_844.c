/* File: "update_state_844.c". Automatically generated by SBV. Do not edit! */

#include "internal.h"

/* User given declarations: */
/*test 001*/
/*DotBegin
digraph G {
node [shape=box]

0 [label="file: 
?????",color=red, style=filled]
1 [label="stream: 841",color=crimson, style=filled]
0 -> 1


}

DotEnd*/
/*@
 assigns \nothing;
 ensures \result == (queue_841[0]);
*/
SBool update_state_844(const SBool *queue_841,
                       const SWord32 ptr_841)
{
  const SBool   s0 = queue_841[0];
  return s0;
}