>Algorithm for Insertion in a linked list At the end of list

```js
    Step 1: create a new node
    Step 2: t = start
    Step 3: while(t->next != NULL) { t=t->next }
    Step 4: t->next = newnode
```

>Algorithm for Insertion in a linked list At the given position or after a node

    Step 1: create a new node
    Step 2: read the position of the node given (p)
    Step 3: t = start
    Step 4: traverse the list up to position as
        while(t->next != p->next) { t = t->next }
    Step 5: newnode->next = t->next
    Step 6: t->next = newnode

>Algorithm for Deletion in a linked list From the end of list

    Step 1: t = t1 = start
    Step 2: traverse t upto last node
        While (t->next != null) { t = t->next }
    Step 3: traverse the list up to t node
        While (t1->next != t) { t1 = t1->next } 
    Step 4: t1->next = t->next
    Step 5: delete(t)

>Algorithm for Deletion in a linked list From the given position

    Step 1: p = t1 = start
    Step 2: read the position of the node to be deleted (p)
    Step 3: traverse the list up to p-1 node 
        While ( t1->next != p ) { t1 = t1->next }
    Step 5: t1->next = p->next
    Step 6: delete(p)

- **Left Rotation**
    - If a tree becomes unbalanced, when a node is inserted into the right subtree of the right subtree, then we perform a single left rotation
    
    ![Left Rotation example](../../Images/avl_left_rotation.jpg)
    
    - In our example, node **A** has become unbalanced as a node is inserted in the right subtree of A's right subtree. We perform the left rotation by making **A** the left-subtree of B.
    
    
- **Right Rotation**
    - AVL tree may become unbalanced, if a node is inserted in the left subtree of the left subtree. The tree then needs a right rotation.
    
    ![Right Rotation example](../../Images/avl_right_rotation.jpg)
    
    - In our example, node **C** has become unbalanced as a node is inserted in the left subtree of C's left subtree. We perform the right rotation by making **C** the right-subtree of B.

- **Left-Right Rotation**
    - A left-right rotation is a combination of left rotation followed by right rotation.
    
|**State**|**Action**|
|---|---|
|![Image](../../Images/right_subtree_of_left_subtree.jpg)|A node has been inserted into the right subtree of the left subtree. This makes **C** an unbalanced node. These scenarios cause AVL tree to perform left-right rotation.|
|![Image](../../Images/subtree_left_rotation.jpg)|We first perform the left rotation on the left subtree of **C**. This makes **A**, the left subtree of **B**.|
|![Image](../../Images/left_unbalanced_tree.jpg)|Node **C** is still unbalanced, however now, it is because of the left-subtree of the left-subtree.|
|![Image](../../Images/right_rotation.jpg)|We shall now right-rotate the tree, making **B** the new root node of this subtree. **C** now becomes the right subtree of its own left subtree.|
|![Image](../../Images/balanced_avl_tree.jpg)|The tree is now balanced|

- **Right-Left Rotation**
    - A right-left rotation is a combination of right rotation followed by left rotation.

|**State**|**Action**|
|---|---|
|![Image](../../Images/left_subtree_of_right_subtree.jpg)|A node has been inserted into the left subtree of the right subtree. This makes **A**, an unbalanced node with balance factor 2.|
|![Image](../../Images/subtree_right_rotation.jpg)|First, we perform the right rotation along **C** node, making **C** the right subtree of its own left subtree **B**. Now, **B** becomes the right subtree of **A**.|
|![Image](../../Images/right_unbalanced_tree.jpg)|Node **A** is still unbalanced because of the right subtree of its right subtree and requires a left rotation.|
|![Image](../../Images/left_rotation.jpg)|A left rotation is performed by making **B** the new root node of the subtree. **A** becomes the left subtree of its right subtree **B**.|
|![Image](../../Images/balanced_avl_tree.jpg)|The tree is now balanced|