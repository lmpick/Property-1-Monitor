/* File: "update_state_5020.c". Automatically generated by SBV. Do not edit! */

#include "internal.h"

/* User given declarations: */
/*test 001*/
/*DotBegin
digraph G {
node [shape=box]

0 [label="file: 
?????",color=red, style=filled]
1 [label="stream: 5017",color=crimson, style=filled]
0 -> 1


}

DotEnd*/
/*@
 assigns \nothing;
 ensures \result == (queue_5017[0]);
*/
SBool update_state_5020(const SBool *queue_5017,
                        const SWord32 ptr_5017)
{
  const SBool   s0 = queue_5017[0];
  return s0;
}