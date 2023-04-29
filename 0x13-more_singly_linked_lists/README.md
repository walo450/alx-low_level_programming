0. Print list
Write a function that prints all the elements of a listint_t list.
1.	Prototype: size_t print_listint(const listint_t *h);
2.	Return: the number of nodes
3.	Format: see example
4.	You are allowed to use printf
1. List length
Write a function that returns the number of elements in a linked listint_t list.
1.	Prototype: size_t listint_len(const listint_t *h);
2. Add node
Write a function that adds a new node at the beginning of a listint_t list.
1.	Prototype: listint_t *add_nodeint(listint_t **head, const int n);
2.	Return: the address of the new element, or NULL if it failed
3. Add node at the end
Write a function that adds a new node at the end of a listint_t list.
1.	Prototype: listint_t *add_nodeint_end(listint_t **head, const int n);
2.	Return: the address of the new element, or NULL if it failed
4. Free list
Write a function that frees a listint_t list.
1.	Prototype: void free_listint(listint_t *head);
5. Free
Write a function that frees a listint_t list.
1.	Prototype: void free_listint2(listint_t **head);
2.	The function sets the head to NULL
6. Pop
Write a function that deletes the head node of a listint_t linked list, and returns the head node’s data (n).
1.	Prototype: int pop_listint(listint_t **head);
2.	if the linked list is empty return 0
7. Get node at index
Write a function that returns the nth node of a listint_t linked list.
1.	Prototype: listint_t *get_nodeint_at_index(listint_t *head, unsigned int index);
2.	where index is the index of the node, starting at 0
3.	if the node does not exist, return NULL
8. Sum list
Write a function that returns the sum of all the data (n) of a listint_t linked list.
1.	Prototype: int sum_listint(listint_t *head);
2.	if the list is empty, return 0
9. Insert
Write a function that inserts a new node at a given position.
1.	Prototype: listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n);
2.	where idx is the index of the list where the new node should be added. Index starts at 0
3.	Returns: the address of the new node, or NULL if it failed
4.	if it is not possible to add the new node at index idx, do not add the new node and return NULL
10. Delete at index
Write a function that deletes the node at index index of a listint_t linked list.
1.	Prototype: int delete_nodeint_at_index(listint_t **head, unsigned int index);
2.	where index is the index of the node that should be deleted. Index starts at 0
3.	Returns: 1 if it succeeded, -1 if it failed
11. Reverse list
Write a function that reverses a listint_t linked list.
1.	Prototype: listint_t *reverse_listint(listint_t **head);
2.	Returns: a pointer to the first node of the reversed list
3.	You are not allowed to use more than 1 loop.
4.	You are not allowed to use malloc, free or arrays
5.	You can only declare a maximum of two variables in your function
12. Print (safe version)
Write a function that prints a listint_t linked list.
1.	Prototype: size_t print_listint_safe(const listint_t *head);
2.	Returns: the number of nodes in the list
3.	This function can print lists with a loop
4.	You should go through the list only once
5.	If the function fails, exit the program with status 98
6.	Output format: see example
13. Free (safe version)
Write a function that frees a listint_t list.
1.	Prototype: size_t free_listint_safe(listint_t **h);
2.	This function can free lists with a loop
3.	You should go though the list only once
4.	Returns: the size of the list that was free’d
5.	The function sets the head to NULL
14. Find the loop
Write a function that finds the loop in a linked list.
1.	Prototype: listint_t *find_listint_loop(listint_t *head);
2.	Returns: The address of the node where the loop starts, or NULL if there is no loop
3.	You are not allowed to use malloc, free or arrays
4.	You can only declare a maximum of two variables in your function


