# Module2: LinkedList

**Note: this description pertains to the problem set as assigned for composition in Java.**

## Nodes
A SinglyLinkedListNode class is provided to you and will be used to represent the nodes in your
Singly-Linked List. This file should be treated as read-only and should not be modified in any way.
This SinglyLinkedListNode class contains getter and setter methods to access and mutate the
structure of the nodes. Please make sure that you understand how this class works, as interaction
with this class is crucial for this assignment.

## Adding
You will implement two add() methods. One will add to the front and one will add to the back. Be
sure to correctly reassign the head and/or tail pointers when adding an element.

## Removing
You will also implement two remove() methods. One will remove from the front and one will remove
from the back. Be sure to correctly reassign the head and/or tail pointers when removing an element.

## Garbage Collection
Java will automatically mark objects for garbage collection based on whether there is any means of
accessing the object. In other words, if we want to remove a node from the Singly-Linked List, we
must remove all references to that node. What the "next" reference of that node points to does not
particularly matter. As long as no references can reach the node, the node will be garbage collected
eventually.

### Note
This aspect will deviate from the original assignment when reproduced in C. Memory from unreferenced
nodes will be explicitly overwritten with null to prevent information leakage.
