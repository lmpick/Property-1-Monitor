/* File: "update_state_1885.c". Automatically generated by SBV. Do not edit! */

#include "internal.h"

/* User given declarations: */
/*test 001*/
/*DotBegin
digraph G {
node [shape=box]

0 [label="file: 
?????",color=red, style=filled]
1 [label="stream: 1882",color=crimson, style=filled]
0 -> 1


}

DotEnd*/
/*@
 assigns \nothing;
 ensures \result == (queue_1882[0]);
*/
SBool update_state_1885(const SBool *queue_1882,
                        const SWord32 ptr_1882)
{
  const SBool   s0 = queue_1882[0];
  return s0;
}