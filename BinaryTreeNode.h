#pragma once
#include "BinaryTree.h"
namespace xj
{
	template<typename T>
	class BinaryTreeNode
	{
		friend class BinaryTree<T>;
		private:
			T data;
			BinaryTreeNode<T> *left;
			BinaryTreeNode<T> *right;
		public:
			BinaryTreeNode():left(nullptr),right(nullptr){};
			BinaryTreeNode(const T &ele):data(ele), left(nullptr), right(nullptr){};
			BinaryTreeNode(const T &ele, BinaryTreeNode<T> *l, BinaryTreeNode<T> *r):data(ele), left(l), right(r){};
			T getValue() const
			{
				return data;
			};
			BinaryTreeNode<T> &operator=(const BinaryTreeNode<T> &node)
			{
				this = node;
			};
			BinaryTreeNode<T> *getLeftChild() const
			{
				return left; 
			};
			BinaryTreeNode<T> *getRightChild() const
			{
				return right;
			};
			void setLeftChild(BinaryTreeNode<T> *node)
			{
				left = node;
			};
			void setRightChild(BinaryTreeNode<T> *node)
			{
				right = node;
			}
			void setValue(const T& val)
			{
				data = val;
			};
			bool isLeaf()
			{
				return left == nullptr && right == nullptr;
			};
	};
}
