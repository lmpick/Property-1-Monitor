/* File: "update_state_4388.c". Automatically generated by SBV. Do not edit! */

#include "internal.h"

/* User given declarations: */
/*test 001*/
/*DotBegin
digraph G {
node [shape=box]

0 [label="file: 
?????",color=red, style=filled]
1 [label="stream: 4385",color=crimson, style=filled]
0 -> 1


}

DotEnd*/
/*@
 assigns \nothing;
 ensures \result == (queue_4385[0]);
*/
SBool update_state_4388(const SBool *queue_4385,
                        const SWord32 ptr_4385)
{
  const SBool   s0 = queue_4385[0];
  return s0;
}