#include <stdio.h>
#include <stdlib.h>

// Структура для однозв'язного списку
typedef struct s_list
{
    int id;
    char *name;
    struct s_list* next;
} t_list;

// Функція для створення вузла
t_list *create_node(int set_id, char *set_name)
{
    t_list *node = (t_list*)malloc(sizeof(t_list));

    // Задаємо значення
    node->id = set_id;
    node->name = set_name;
    node->next = NULL;  // Це перший елемент, тому next вказує на NULL

    return node;
}

// Функція для додавання вузла в кінець списку
void add_node_to_end(t_list **head, int set_id, char *set_name)
{
    // Створюємо новий вузол
    t_list *new_node = (t_list*)malloc(sizeof(t_list));
    new_node->id = set_id;
    new_node->name = set_name;
    new_node->next = NULL;

    // Якщо список порожній, новий вузол стає першим
    if (*head == NULL)
    {
        *head = new_node;
    }
    else
    {
        // Проходимо до кінця списку
        t_list *temp = *head;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        // Додаємо новий вузол в кінець
        temp->next = new_node;
    }
}
void delete_last_node(t_list **head)
{
    // Якщо список порожній
    if (*head == NULL)
    {
        return;
    }
    // Якщо в списку тільки один вузол
    if ((*head)->next == NULL)
    {
        free(*head);
        *head = NULL;
        return;
    }

    // Знаходимо передостанній вузол
    t_list *temp = *head;
    while (temp->next->next != NULL)
    {
        temp = temp->next;
    }

    // Звільняємо пам'ять останнього вузла
    free(temp->next);
    temp->next = NULL;  // Тепер останній вузол вказує на NULL
}
t_list *find_node_by_id(t_list *head, int id)
{
    t_list *current = head;
    while (current->id != NULL)
    {
        if (current->id == id)
        {
            return current;
        }
        current = current->next;
        
    }
    return NULL;
    
}

int main()
{
    t_list *head = NULL; // Ініціалізація списку

    // Додаємо кілька вузлів у список
    add_node_to_end(&head, 1, "Ivan");
    add_node_to_end(&head, 2, "Maria");
    add_node_to_end(&head, 3, "John");

    // Виводимо список
    t_list *print_data = head;
    while (print_data != NULL)
    {
        printf("id = %d, name = %s\n", print_data->id, print_data->name);
        print_data = print_data->next;
    }

    // Звільняємо пам'ять
    print_data = head;
    t_list *temp;
    while (print_data != NULL)
    {
        temp = print_data;
        print_data = print_data->next;
        free(temp);
    }

    return 0;
}