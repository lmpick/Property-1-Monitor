/* File: "update_state_869.c". Automatically generated by SBV. Do not edit! */

#include "internal.h"

/* User given declarations: */
/*test 001*/
/*DotBegin
digraph G {
node [shape=box]

0 [label="file: 
?????",color=red, style=filled]
1 [label="stream: 866",color=crimson, style=filled]
0 -> 1


}

DotEnd*/
/*@
 assigns \nothing;
 ensures \result == (queue_866[0]);
*/
SBool update_state_869(const SBool *queue_866,
                       const SWord32 ptr_866)
{
  const SBool   s0 = queue_866[0];
  return s0;
}