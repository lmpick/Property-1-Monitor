/* File: "update_state_1567.c". Automatically generated by SBV. Do not edit! */

#include "internal.h"

/* User given declarations: */
/*test 001*/
/*DotBegin
digraph G {
node [shape=box]

0 [label="file: 
?????",color=red, style=filled]
1 [label="stream: 1564",color=crimson, style=filled]
0 -> 1


}

DotEnd*/
/*@
 assigns \nothing;
 ensures \result == (queue_1564[0]);
*/
SBool update_state_1567(const SBool *queue_1564,
                        const SWord32 ptr_1564)
{
  const SBool   s0 = queue_1564[0];
  return s0;
}