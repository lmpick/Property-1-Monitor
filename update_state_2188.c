/* File: "update_state_2188.c". Automatically generated by SBV. Do not edit! */

#include "internal.h"

/* User given declarations: */
/*test 001*/
/*DotBegin
digraph G {
node [shape=box]

0 [label="file: 
?????",color=red, style=filled]
1 [label="stream: 2185",color=crimson, style=filled]
0 -> 1


}

DotEnd*/
/*@
 assigns \nothing;
 ensures \result == (queue_2185[0]);
*/
SBool update_state_2188(const SBool *queue_2185,
                        const SWord32 ptr_2185)
{
  const SBool   s0 = queue_2185[0];
  return s0;
}