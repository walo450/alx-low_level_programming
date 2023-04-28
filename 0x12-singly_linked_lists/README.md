Tasks

0.	Print list

Write a function that prints all the elements of a list_t list.
1.	Prototype: size_t print_list(const list_t *h);
2.	Return: the number of nodes
3.	Format: see example
4.	If str is NULL, print [0] (nil)
5.	You are allowed to use printf

1. List length

Write a function that returns the number of elements in a linked list_t list.
1.	Prototype: size_t list_len(const list_t *h);

2. Add node

Write a function that adds a new node at the beginning of a list_t list.
1.	Prototype: list_t *add_node(list_t **head, const char *str);
2.	Return: the address of the new element, or NULL if it failed
3.	str needs to be duplicated
4.	You are allowed to use strdup

3. Add node at the end

Write a function that adds a new node at the end of a list_t list.
1.	Prototype: list_t *add_node_end(list_t **head, const char *str);
2.	Return: the address of the new element, or NULL if it failed
3.	str needs to be duplicated
4.	You are allowed to use strdup

4. Free list

Write a function that frees a list_t list.
1.	Prototype: void free_list(list_t *head);

5. The Hare and the Tortoise

Write a function that prints You're beat! and yet, you must allow,\nI bore my house upon my back!\n before the main function is executed.
1.	You are allowed to use the printf function

6. Real programmers can write assembly code in any language

Write a 64-bit program in assembly that prints Hello, Holberton, followed by a new line.
1.	You are only allowed to use the printf function
2.	You are not allowed to use interrupts
3.	Your program will be compiled using nasm and gcc

