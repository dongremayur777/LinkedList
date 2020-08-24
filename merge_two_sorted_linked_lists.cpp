#include<bits/stdc++.h>
using namespace std;
#define gc getchar_unlocked
#define fo(i,n) for(i=0;i<n;i++)
#define Fo(i,k,n) for(i=k;i<n;i++)
#define foe(i,n) for(i=0;i<=n;i++)
#define Foe(i,k,n) for(i=k;i<=n;i++)
#define ll long long
#define fast ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define all(x) x.begin(),x.end()
#define clr(x) memset(x, 0, sizeof(x))
#define sortall(x) sort(a,a+n)
#define tr(it, a) for(auto it = a.begin(); it != a.end(); it++)
#define PI 3.1415926535897932384626
typedef pair<int, int>	pii;
typedef pair<ll, ll>	pl;
typedef vector<int>	vi;
typedef vector<ll>	vl;
typedef vector<pii>	vpii;
typedef vector<pl>	vpl;

class node{
public:
int data;
node *next;
};

node* SortedMerge(node* a,node* b)
{
node* result=NULL;
if(a==NULL)
return(b);
else if(b==NULL)
return(a);

if(a->data <= b->data)
{
result=a;
result->next=SortedMerge(a->next,b);
}
else
{
result=b;
result->next=SortedMerge(a,b->next);
}
return(result);
}

void push(struct node** head_ref, int new_data) 
{ 
	struct node* new_node = (struct node*) malloc(sizeof(struct node)); 

	new_node->data = new_data; 

	new_node->next = (*head_ref); 

	(*head_ref) = new_node; 
} 
void printlist(node *rada)
{
while(rada!=NULL)
{
cout<<rada->data<<" ";
rada=rada->next;
}
}
void reverse(node* rada,int m)
{

}
int main()
{
int n,m;
cin>>n>>m;
int x[n],y[m];
struct node* res=NULL;
struct node* a=NULL;
struct node* b=NULL;
for(int i=1;i<=n;i++)
{
cin >>x[i];
}
for(int i=n;i>0;i--)
{
push(&a,x[i]);
}
for(int i=1;i<=n;i++)
{
cin >>y[i];
}
for(int i=n;i>0;i--)
{
push(&b,y[i]);
}
res=SortedMerge(a,b);
cout<<"Merged Linked List is:"<<endl;
printlist(res);
return 0;
}


