#pragma once


template <typename T>
struct tree_node
{
	T val_;
	tree_node* lchild_;
	tree_node* rchild_;

	tree_node()
		: val_()
		, lchild_(nullptr)
		, rchild_(nullptr)
	{}

	tree_node(T const& val)
		: val_(val)
		, lchild_(nullptr)
		, rchild_(nullptr)
	{}

};


template <typename T>
struct binary_search_tree
{
	using node_type = tree_node<T>;
	node_type* head;

	binary_search_tree() = default;

	binary_seach_tree(node_type const T)
		: head_(head)
	{}

	void insert(node_type* new_node) 
	{
		if (!head_) {
			head_ = new_node;
		}

		node_type* leaf_node = nullptr;
		int i = 10000;
		std::tie(leaf_node,i) = traverse_tree(head_, new_node);
	}

	auto traverse_tree(node_type* curr_node, node_type* other_node)
	{
		if (curr_node == ) {

		}
	}


};
