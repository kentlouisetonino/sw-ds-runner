#ifndef TYPES_H
#define TYPES_H

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
