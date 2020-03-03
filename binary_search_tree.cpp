#include<stdio.h>
int tree[100],n;
void inorder(int cn)
{
    int i;
    if(cn>n) return;
    inorder(2*cn);
    printf("%d\n",tree[cn]);
    inorder(2*cn+1);
}
void preorder(int cn)
{
    int i;
    if(cn>n) return;
    printf("%d\n",tree[cn]);
    preorder(2*cn);
    preorder(2*cn+1);
}
void postorder(int cn)
{
    if(cn>n) return;
    postorder(2*cn);
    postorder(2*cn+1);
    printf("%d\n",tree[cn]);
}
int main()
{
   int  i;
   scanf("%d",&n);
   for(i=1;i<=n;i++) scanf("%d",&tree[i]);
   printf("Inorder\n");
   inorder(1);
   printf("Preorder\n");
   preorder(1);
   printf("postoreder\n");
   postorder(1);
    return 0;

}
