/* File: "update_state_829.c". Automatically generated by SBV. Do not edit! */

#include "internal.h"

/* User given declarations: */
/*test 001*/
/*DotBegin
digraph G {
node [shape=box]

0 [label="file: 
?????",color=red, style=filled]
1 [label="stream: 826",color=crimson, style=filled]
0 -> 1


}

DotEnd*/
/*@
 assigns \nothing;
 ensures \result == (queue_826[0]);
*/
SBool update_state_829(const SBool *queue_826,
                       const SWord32 ptr_826)
{
  const SBool   s0 = queue_826[0];
  return s0;
}