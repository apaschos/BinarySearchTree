#pragma once
#include <iostream>


template<typename T>
class BST
{
public:
	struct Node
	{
		T data;
		Node* left;
		Node* right;

		Node(const T& val) : data(val), left(nullptr), right(nullptr) {}
	};

	BST() : root(nullptr) {}
	~BST()
	{
		//for (Node* cur = root; ;)
		//{
		//	if (cur->left)
		//	{

		//	}
		//	if (cur->right)
		//	{

		//	}
		//}
	}

	void insert(const T& value)
	{
		if (root == nullptr)
		{
			root = new Node(value);
			return;
		}


		for (Node* current = root; ; )
		{
			if (value < current->data)
			{
				if (current->left == nullptr)
				{
					current->left = new Node(value);
					break;
				}
				current = current->left;
			}
			else
			{
				if (current->right == nullptr)
				{
					current->right = new Node(value);
					break;
				}
				current = current->right;
			}
		}
	}

	void display() {
		inOrderTraversal(root);
		std::cout << std::endl;
	}

private:
	void inOrderTraversal(Node* node)
	{
		if (node == nullptr)
		{
			return;
		}

		inOrderTraversal(node->left);
		std::cout << node->data << " ";
		inOrderTraversal(node->right);
	}

	Node* root;
};
