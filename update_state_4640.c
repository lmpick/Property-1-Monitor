/* File: "update_state_4640.c". Automatically generated by SBV. Do not edit! */

#include "internal.h"

/* User given declarations: */
/*test 001*/
/*DotBegin
digraph G {
node [shape=box]

0 [label="file: 
?????",color=red, style=filled]
1 [label="stream: 4637",color=crimson, style=filled]
0 -> 1


}

DotEnd*/
/*@
 assigns \nothing;
 ensures \result == (queue_4637[0]);
*/
SBool update_state_4640(const SBool *queue_4637,
                        const SWord32 ptr_4637)
{
  const SBool   s0 = queue_4637[0];
  return s0;
}