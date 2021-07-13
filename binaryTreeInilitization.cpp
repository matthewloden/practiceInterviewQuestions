
//I foudn this code on technical recipies and do not claim ownership of this code. I am using this for educational purposes and for my own understanding

#include <stdio.h>
 
class Node
{
public:
    Node( int v )
    {
        data = v;
        left = 0;
        right = 0;
    }
 
    int data;
    Node* left;
    Node* right;
};
 
void Add( Node** root, Node* n )
{
    if ( !*root  )
    {
        *root = n;
        return;
    }
 
    if ( (*root)->data < n->data )
    {
        Add( &(*root)->right, n );
    }
    else
    {
        Add( &(*root)->left, n );
    }
}
 
void Print( Node* node )
{
    if ( !node )  return;   
    Print( node->left );
    printf( "value = %i\n", node->data );
    Print( node->right );
}
 
int main()
{
    Node* root = 0;
 
    Add( &root, new Node( 1 ) );
    Add( &root, new Node( 2 ) );
    Add( &root, new Node( -1 ) );
    Add( &root, new Node( 12 ) );
 
    Print( root );
    return 0;
}