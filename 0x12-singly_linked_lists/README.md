# 0x12. C - Singly linked lists
 
*learning objectives.*

- When and why using linked lists vs arrays
- How to build and use linked lists

</br></br>

---
## tasks ##

</br>

- task 0:


```
Write a function that prints all the elements of a list_t list.

- Prototype: size_t print_list(const list_t *h);
- Return: the number of nodes
- Format: see example
- If str is NULL, print [0] (nil)
- You are allowed to use printf
- File: 0-print_list.c
```
</br>

- task 1:

```
Write a function that returns the number of elements in a linked list_t list.

- Prototype: size_t list_len(const list_t *h);
- File: 1-list_len.c
```
</br>

- task 2:



```
Write a function that adds a new node at the beginning of a list_t list.

- Prototype: list_t *add_node(list_t **head, const char *str);
- Return: the address of the new element, or NULL if it failed
- str needs to be duplicated
- You are allowed to use strdup
- File: 2-add_node.c
```

</br>

- task 3:

```
Write a function that adds a new node at the end of a list_t list.

- Prototype: list_t *add_node_end(list_t **head, const char *str);
- Return: the address of the new element, or NULL if it failed
- str needs to be duplicated
- You are allowed to use strdup
- File: 3-add_node_end.c
```

</br>

- task 4:

```
Write a function that frees a list_t list.

- Prototype: void free_list(list_t *head);
- File: 4-free_list.c
```
</br>

---
