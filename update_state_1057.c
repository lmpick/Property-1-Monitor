/* File: "update_state_1057.c". Automatically generated by SBV. Do not edit! */

#include "internal.h"

/* User given declarations: */
/*test 001*/
/*DotBegin
digraph G {
node [shape=box]

0 [label="file: 
?????",color=red, style=filled]
1 [label="stream: 1054",color=crimson, style=filled]
0 -> 1


}

DotEnd*/
/*@
 assigns \nothing;
 ensures \result == (queue_1054[0]);
*/
SBool update_state_1057(const SBool *queue_1054,
                        const SWord32 ptr_1054)
{
  const SBool   s0 = queue_1054[0];
  return s0;
}