//Description: Binary Search Tree with array implementation, it has inorder, postorder and pre order traversals.
//Note: it is not advisable to use array in binary search tree because it consumes a lot of memory in the long run
// instead use linked list this is just a reference to understand more about BST. Good luck and Happy coding
// Frank Mendez
#include<iostream>
using namespace std;
public:
    int size;
    int* array;
    void insertElement(int x);
    void searchElement(int x);
    void inOrder(int currentIndex);
    void preOrder(int currentIndex);
    void postOrder(int currentIndex);
    void parent(int x);
    int extendSize(int x);
    BinarySearchTree (int size) {
        this -> size = extendSize(size);
        //cout << this -> size << endl;
        this -> array = new int[this -> size];
        for(int x = 0; x < this -> size; x++){
            array[x] = NULL;
        }
    }
};
int BinarySearchTree::extendSize(int x) {
    int value = 0;
    for(int y = 0; y < x + 1; y++) {
        value = (2 * value) + 2;
    }
    return value;
}
void BinarySearchTree::insertElement(int x) {
    int currentIndex = 0;
    cout << "Adding: " << x;
    while(true) {
        if(array[currentIndex] == NULL){
            array[currentIndex] = x;
            cout << " Inserted at index: " << currentIndex << endl;
            break;
        }else if(array[currentIndex] <= x) {
            if(array[currentIndex] == x){
                cout << "ERROR!-- Repeating element" << endl;
                break;
            }else
            cout << " Right ";
            currentIndex = (2 * currentIndex + 2);
        }else if(array[currentIndex] >= x) {
             if(array[currentIndex] == x){
                cout << "ERROR!-- Repeating element" << endl;
                break;
            }else
            cout << " Left ";
            currentIndex = (2 * currentIndex + 1);
        }
    }
}
void BinarySearchTree::searchElement(int x){
    int currentIndex = 0;
    while (true) {
            if (array[currentIndex] == NULL) {
            cout << "Not Found" << endl;
            break;
            }
            if (array[currentIndex] == x) {
            cout << "Found at index: " << currentIndex << endl;
            break;
            }
            else if(array[currentIndex] < x) {
            currentIndex = (2 * currentIndex + 2);
        }
            else if(array[currentIndex] > x) {
            currentIndex = (2 * currentIndex + 1);
        }
    }
}
void BinarySearchTree::parent(int x){
    while (x != 0) {
        x = (x-1) / 2;
        cout << "---";
    }
}
void BinarySearchTree::inOrder(int currentIndex){
    if(array[currentIndex] != NULL) {
            inOrder(2 * currentIndex + 1);
            parent(currentIndex);
            cout << array[currentIndex] << endl;
            inOrder(2 * currentIndex + 2);
    }
}
void BinarySearchTree::postOrder(int currentIndex) {
    if(array[currentIndex] != NULL){
        postOrder(2 * currentIndex + 1);
        postOrder(2 * currentIndex + 2);
        parent(currentIndex);
        cout << array[currentIndex] << " " << endl;
    }
}
void BinarySearchTree::preOrder(int currentIndex) {
    if(array[currentIndex] != NULL) {
        preOrder(2 * currentIndex + 1);
        parent(currentIndex);
        cout << array[currentIndex] << " " << endl;
        preOrder(2 * currentIndex + 2);
    }
}
int main () {
    BinarySearchTree frank(5);
    frank.insertElement(4);
    frank.insertElement(6);
    frank.insertElement(9);
    frank.insertElement(3);
    frank.insertElement(2);
    frank.searchElement(1);
    frank.inOrder(0);
};
