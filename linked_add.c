include<stdio.h>
int c = 0, c1 = 0;
struct node1
{
    struct node1 *link;
    int data1;
}*head = NULL, *m = NULL, *np1 = NULL, *ptr = NULL;
struct node
{
     struct node *next; 
     int data;
}*start = NULL, *p = NULL, *np = NULL;
void store(int x)
{
	struct node1 *np1;
	np1->data1 = x;
	np1->link = NULL;
	    if (c == 0)
	    {
                head = np1;
	        m = head;
	        m->link = NULL;
	        c++;
	    }
	    else
	    {
	        m = head;    
                while (m->link != NULL)
	        {
	            m = m->link;
	        }
	        m->link = np1;
	        np1->link = NULL;          
	     }
}
void keep(int x)
{
	    struct node *np;
	    np->data = x;
	    np->next = NULL;
            if (c1 == 0)
	    {
	        start = np;
	        p = start;
                p->next = NULL;
	        c1++;
	    }
	    else
	    {
	        p = start;
	        while (p->next != NULL)
	        {
	            p = p->next;
	        }
	        p->next = np;
	        np->next = NULL;            
	    }
}
void add()
{ 
            int i = 0;
	    struct node1 *t;
	    struct node *v;
	    t = head;
	    v = start;
	    while (t != NULL)
	    {
	        if (v == NULL)
	        {
	         t->link = ptr;
                 t = t->link;
	        }
             t = t->link;
             v = v->next;
            }
 }       
void traverse()
{
	    struct node1 *q;
	    q = head;
	    int c = 0,i = 0;
	    while (q != NULL)
            {
                q = q->link;
	        c++;
	    }
	    q = head;
	    while (i != c)
	    {
	        x[c - i - 1] = q->data1;
	        i++;
	        q = q->link;
	    }
	    printf("Result of addition for two numbers:");
	    for (i = 0; i < c; i++)
	    {
	        printf(“%d\t”,x[i]);
	    }
}
void swap(int *a,int *b)
{
	    int temp;
	    temp = *a;
	    *a = *b;
	    *b = temp;
}
int main()
{
	    int n, x, mod, mod1;
	    Printf(“enter the value of x and n\n”);
	    Scanf(“%d%d”,&x,&n);
	    if (x > n)
	    {
        	swap(&x,&n);
	    }
	    while (n > 0)
	    {
	        mod = n % 10;
	        n = n / 10;
	        store(mod);
	    }
	    while (x > 0)
	    {
	        mod1 = x % 10;
	        x = x / 10;
	        keep(mod1);
	    }	
	 add();
	 traverse();
return 0;
}


