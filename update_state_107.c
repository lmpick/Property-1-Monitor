/* File: "update_state_107.c". Automatically generated by SBV. Do not edit! */

#include "internal.h"

/* User given declarations: */
/*test 001*/
/*DotBegin
digraph G {
node [shape=box]

0 [label="file: 
?????",color=red, style=filled]
1 [label="stream: 104",color=crimson, style=filled]
0 -> 1


}

DotEnd*/
/*@
 assigns \nothing;
 ensures \result == (queue_104[0]);
*/
SBool update_state_107(const SBool *queue_104,
                       const SWord32 ptr_104)
{
  const SBool   s0 = queue_104[0];
  return s0;
}