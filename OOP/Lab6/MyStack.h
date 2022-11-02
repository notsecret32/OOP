#pragma once
#include <iostream>
#include <list>
#include <stack>
#include <queue>
using std::cout;
using std::endl;

template<typename T>
class MyStack {
	std::list<T> m_list;
	std::stack<T> m_stack;
	std::queue<T> m_queue;
public:
	MyStack<T>& operator=(const std::list<T>& list);
	MyStack<T>& operator=(const std::stack<T>& stack);
	MyStack<T>& operator=(const std::queue<T>& queue);

	static std::list<T>  CreateList();
	static std::stack<T> CreateStack();
	static std::queue<T> CreateQueue();

	static std::list<T>  CreateListFrom(std::list<T> ref);
	static std::stack<T> CreateStackFrom(std::stack<T> ref);
	static std::queue<T> CreateQueueFrom(std::queue<T> ref);

	void PrintList();
	void PrintStack();
	void PrintQueue();
};

template<typename T>
inline MyStack<T>& MyStack<T>::operator=(const std::list<T>& list)
{
	m_list = list;
	return *this;
}

template<typename T>
inline MyStack<T>& MyStack<T>::operator=(const std::stack<T>& stack)
{
	m_stack = stack;
	return *this;
}

template<typename T>
inline MyStack<T>& MyStack<T>::operator=(const std::queue<T>& queue)
{
	m_queue = queue;
	return *this;
}

template<typename T>
inline std::list<T> MyStack<T>::CreateList()
{
	return std::list<T>();
}

template<typename T>
inline std::stack<T> MyStack<T>::CreateStack()
{
	return std::stack<T>();
}

template<typename T>
inline std::queue<T> MyStack<T>::CreateQueue()
{
	return std::queue<T>();
}

template<typename T>
inline std::list<T> MyStack<T>::CreateListFrom(std::list<T> list)
{
	return std::list<T>(list);
}

template<typename T>
inline std::stack<T> MyStack<T>::CreateStackFrom(std::stack<T> ref)
{
	return std::stack<T>(ref);
}

template<typename T>
inline std::queue<T> MyStack<T>::CreateQueueFrom(std::queue<T> ref)
{
	return std::queue<T>(ref);
}

template<typename T>
inline void MyStack<T>::PrintList()
{
	cout << "void MyStack<" << typeid(T).name() << ">::PrintList() => ";

	for (auto item : this->m_list)	
		cout << item << " ";

	cout << endl;
}

template<typename T>
inline void MyStack<T>::PrintStack()
{
	cout << "void MyStack<" << typeid(T).name() << ">::PrintStack() => ";

	for (std::stack<int> dump = this->m_stack; !dump.empty(); dump.pop())
		std::cout << dump.top() << " ";

	cout << endl;
}

template<typename T>
inline void MyStack<T>::PrintQueue()
{
	cout << "void MyStack<" << typeid(T).name() << ">::PrintQueue() => ";

	while (!this->m_queue.empty())
	{
		std::cout << this->m_queue.front() << " ";
		this->m_queue.pop();
	}
	std::cout << std::endl;
}