/* File: "update_state_709.c". Automatically generated by SBV. Do not edit! */

#include "internal.h"

/* User given declarations: */
/*test 001*/
/*DotBegin
digraph G {
node [shape=box]

0 [label="file: 
?????",color=red, style=filled]
1 [label="stream: 706",color=crimson, style=filled]
0 -> 1


}

DotEnd*/
/*@
 assigns \nothing;
 ensures \result == (queue_706[0]);
*/
SBool update_state_709(const SBool *queue_706,
                       const SWord32 ptr_706)
{
  const SBool   s0 = queue_706[0];
  return s0;
}