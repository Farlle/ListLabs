#include <stdio.h>
#include <iostream>




template <typename T>
struct Node
{
	T inf;
	Node *link;
};


template <typename T>
class List
{
public:

	Node<T> *head = NULL;
	Node<T> *current = head;

private:
};

	template <typename T>
	struct dNode
	{
		T inf;
		dNode *linkNext;
		dNode *linkPrev;
	};

	template<typename T>
	class dList
	{
	public:
		dNode<T> *head = NULL;
		dNode<T> *tail = NULL;
		dNode<T> *current = head;

	private:

	};


	template <typename T>
	struct cSNode
	{
		T inf;
		cSNode *link;
		cSNode *linkPrev;
	};
	template<typename T>
	class cSList
	{
	public:
		cSNode<T> *head = NULL;
		cSNode<T> *tail = NULL;
		cSNode<T> *current = head;

	private:

	};
	template <typename T>
	struct cDNode
	{
		T inf;
		cDNode *link;
		cDNode *linkPrev;
	};
	template<typename T>
	class cDList
	{
	public:
		cDNode<T> *head = NULL;
		cDNode<T> *tail = NULL;
		cDNode<T> *current = head;

	private:

	};