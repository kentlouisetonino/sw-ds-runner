#ifndef TYPES_H
#define TYPES_H

/*
 * This structure only accept number as data.
 * */
struct BinaryTreeNode {
  int data;
  BinaryTreeNode *left;
  BinaryTreeNode *right;

  BinaryTreeNode(int input_data) {
    data = input_data;
    left = nullptr;
    right = nullptr;
  }
};

#endif
