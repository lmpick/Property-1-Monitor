/* File: "update_state_5006.c". Automatically generated by SBV. Do not edit! */

#include "internal.h"

/* User given declarations: */
/*test 001*/
/*DotBegin
digraph G {
node [shape=box]

0 [label="file: 
?????",color=red, style=filled]
1 [label="stream: 5003",color=crimson, style=filled]
0 -> 1


}

DotEnd*/
/*@
 assigns \nothing;
 ensures \result == (queue_5003[0]);
*/
SBool update_state_5006(const SBool *queue_5003,
                        const SWord32 ptr_5003)
{
  const SBool   s0 = queue_5003[0];
  return s0;
}