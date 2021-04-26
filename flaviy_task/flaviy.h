
#ifndef FLAVIY
#define FLAVIY
#include <stddef.h>
#include <stdint.h>
uint32_t flaviy(uint32_t victims)
{
    uint32_t a = 1;
    for (; a < victims; a *= 2)
    {
    }
    a /= 2;
    uint32_t l = (victims - a);
    return 2 * l + 1;
}

struct List
{
    int element = 0;
    List *p_next = nullptr;
};
List *generate_list(size_t n)
{
    if (0 == n)
    {
        return nullptr;
    }
    List *head = new List{1, nullptr};
    List *current = head;
    for (int i = 2; i <= n; i++)
    {
        current->p_next = new List{i, nullptr};
        current = current->p_next;
    }
    current->p_next = head;
    return head;
}

List *erase_after(List *element)
{
    auto elementToDelete = element->p_next;
    element->p_next = element->p_next->p_next;
    delete elementToDelete;
    return element->p_next;
}
uint32_t flaviy_list(uint32_t victims)
{
    List *victims_list = generate_list(victims);

    while (victims_list != victims_list->p_next)
    {
        victims_list = erase_after(victims_list);
    }
    return victims_list->element;
}
#endif