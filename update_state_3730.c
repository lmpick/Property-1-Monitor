/* File: "update_state_3730.c". Automatically generated by SBV. Do not edit! */

#include "internal.h"

/* User given declarations: */
/*test 001*/
/*DotBegin
digraph G {
node [shape=box]

0 [label="file: 
?????",color=red, style=filled]
1 [label="stream: 3727",color=crimson, style=filled]
0 -> 1


}

DotEnd*/
/*@
 assigns \nothing;
 ensures \result == (queue_3727[0]);
*/
SBool update_state_3730(const SBool *queue_3727,
                        const SWord32 ptr_3727)
{
  const SBool   s0 = queue_3727[0];
  return s0;
}