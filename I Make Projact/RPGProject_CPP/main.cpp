#include <iostream>
using namespace std;
#include <list>
#include <vector>

// 오늘의 주제 : list

// vector : 동적 배열
// [               ]


template<typename T>
class Node
{
public:
	Node() : _next(nullptr), _prev(nullptr), _data(T())
	{

	}
	Node(const T& value) : _next(nullptr), _prev(nullptr), _data(value)
	{

	}


public:
	Node*	_next;	// node의 주소값을 넣을것이기에 class node를 사용한다.
	Node*	_prev;
	T		_data;

};

template<typename T>
class Iterator
{
public:

	Iterator() : _node(nullptr)
	{

	}

	Iterator(Node<T>* node) : _node(node)
	{

	}


	Iterator& operator ++ ()
	{
		_node = _node->_next;
		return *this;
	}


	Iterator operator ++ (int)
	{
		Iterator<T> temp = *this;

		_node = _node->_next;
		return temp;
	}

	Iterator& operator -- ()
	{
		_node = _node->_prev;
		return *this;
	}


	Iterator operator -- (int)
	{
		Iterator<T> temp = *this;

		_node = _node->_prev;
		return temp;
	}

	T& operator*()
	{
		return _node->_data;
	}

	bool operator == (const Iterator& right)
	{
		return _node == right._node;
	}

	bool operator != (const Iterator& right)
	{
		return _node != right._node;
	}



public:
	Node<T>* _node;
};


// <-> [ header ] <-> 
// [1] <-> [2] <->  [3] <-> [4] <-> [header] <-> 
template<typename T>
class List
{
public:
	List() : _size(0)	// 아무 값이 없다면.
	{
		_header = new Node<T>();	// 바로 생성
		_header->_next = _header;	// next 자기자신
		_header->_prev = _header;	// prev 자기자신
	}

	~List()
	{
		while (_size > 0)
			pop_back();

		delete _header;
	}

	void push_back(const T& value)
	{
		AddNode(_header, value);
	}

	// [1] <-> [2] <-> [3] <-> [4] <-> [header] <->
	// [1] <-> [2] <-> [3] <->  [header] <->
	void pop_back()
	{
		RemoveNode(_header->_prev);
	}


	// 생성자 시작할 때 해더를 자기자신으로 설정을 해놓으니까 절묘하게 맞아 떨어진다.
	// [node] - [ header ] - 
	// 
	// 
	// [1] <-> [2] <-> [before] <-> [4] <-> [ header ] <->
	// [1] <-> [2] <-> [value] - [before] <-> [4] <-> [ header ]
	Node<T>* AddNode(Node<T>* before, const T& value)
	{
		Node<T>* node = new Node<T>(value);

		Node<T>* prevNode = before->_prev;
		prevNode->_next = node;
		node->_prev = prevNode;

		node->_next = before;
		before->_prev = node;

		_size++;

		return node;
	}



	Node<T>* RemoveNode(Node<T>* node)
	{
		Node<T>* prevNode = node->_prev;
		Node<T>* nextNode = node->_next;

		prevNode->_next = nextNode;
		nextNode->_prev = prevNode;

		delete node;

		_size--;

		return nextNode;
	}

	int size() {return _size;}

public:
	typedef Iterator<T> iterator;

	iterator begin() { return iterator(_header->_next); }
	iterator end() { return iterator(_header); }

	iterator insert(iterator it, const T& value)
	{
		Node<T>* node = AddNode(it._node, value);

		return iterator(node);
	}

	iterator erase(iterator it)
	{
		Node<T>* node = RemoveNode(it._node);

		return iterator(node);
	}



public:
	Node<T>* _header;
	int		_size;
};


int main()
{
	List<int> li;

	List<int>::iterator eraseif;


	for (int i = 0; i < 10; i++)
	{
		if (i == 5)
		{
			eraseif = li.insert(li.end(), i);
		}
		else
		{
			li.push_back(i);
		}
	}

	li.pop_back();

	li.erase(eraseif);

	for (List<int>::iterator it = li.begin(); it != li.end(); ++it)
	{
		cout << (*it) << endl;
	}



	return 0;
}

