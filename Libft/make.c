#include "libft.h"
 
 
 
 void f(char *str)
 {
    int i; 
    i=0;
    while(str[i])
    {
        str[i] -= 32;
        i++;
    }
 }
 int main()
 {
    t_list *head;
   head =ft_lstnew("hhhh");
   head->next = ft_lstnew("kkkk");
   head->next->next = ft_lstnew("sdlfkjsom");
   ft_lstadd_front(&head, ft_lstnew("housssss"));
   ft_lstadd_back(&head, ft_lstnew("jjjjjjjjj"));
   
        printf("The content is : %d\n", ft_lstsize(head));
   
 }
 