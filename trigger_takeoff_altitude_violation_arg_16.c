/* File: "trigger_takeoff_altitude_violation_arg_16.c". Automatically generated by SBV. Do not edit! */

#include "internal.h"

/* User given declarations: */
/*test 003*/
/*DotBegin
digraph G {
node [shape=box]

0 [label="file: 
?????",color=red, style=filled]
1 [label="stream: 5415",color=crimson, style=filled]
0 -> 1


}

DotEnd*/
/*@
 assigns \nothing;
 ensures \result == (queue_5415[ptr_5415]);
*/
SDouble trigger_takeoff_altitude_violation_arg_16(const SDouble *queue_5415,
                                                  const SWord32 ptr_5415)
{
  const SDouble s0 = queue_5415[0];
  const SDouble s1 = queue_5415[1];
  const SWord32 s2 = ptr_5415;
  const SDouble table0[] = {
      s0, s1
  };
  const SWord32 s4 = (0x00000002UL == 0) ? s2 : (s2 % 0x00000002UL);
  const SDouble s5 = table0[s4];

  return s5;
}