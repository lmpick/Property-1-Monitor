/* File: "update_state_1375.c". Automatically generated by SBV. Do not edit! */

#include "internal.h"

/* User given declarations: */
/*test 001*/
/*DotBegin
digraph G {
node [shape=box]

0 [label="file: 
?????",color=red, style=filled]
1 [label="stream: 1372",color=crimson, style=filled]
0 -> 1


}

DotEnd*/
/*@
 assigns \nothing;
 ensures \result == (queue_1372[0]);
*/
SBool update_state_1375(const SBool *queue_1372,
                        const SWord32 ptr_1372)
{
  const SBool   s0 = queue_1372[0];
  return s0;
}