#include <bits/stdc++.h>
#include <stdlib.h>
using namespace std;
class node {
  public:
    int data; 
    struct node *next; 
};
void push(struct node** head_ref,int new_data)
{
struct node* new_node=(struct node*)malloc(sizeof(struct node));
new_node->data=new_data;
new_node->next=(*head_ref);
(*head_ref)=new_node;
}

void printlist(struct node *rada)
{
struct node* tmp=rada;
while(tmp!=NULL)
{
cout<<tmp->data<<" ";
tmp=tmp->next;
}
cout<<endl;
}
node* remove(node* rada,int m)
{
 int len = 0; 
    node* tmp = rada; 
    while (tmp != NULL) { 
        len++; 
        tmp = tmp->next;  
    } 
if(len==m)
{
return rada->next;
}
else
{  
        int diff = len - m;           
        node* prev= NULL;        
        node* curr = rada;          
        for(int i = 0;i < diff;i++){ 
            prev = curr;             
            curr = curr->next;       
        } 
        prev->next = curr->next; 
        return rada; 
    } 
}
int main()
{
struct node* rada=NULL;
int n,m;
cin>>n;
cin>>m;
int a[n];
for(int i=0;i<n;i++)
{
cin>>a[i];
}
for(int i=n-1;i>=0;i--)
{
push(&rada,a[i]);
}
rada=remove(rada,m);
printlist(rada);
}




