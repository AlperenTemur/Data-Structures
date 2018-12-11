//Queue in C with Classes
//Implemented as linked list and without recursion
#ifndef QUEUE_CwC
 #define QUEUE_CwC
#endif
#include <stdio.h>
#if DEBUG==1
#include <iostream>
#endif
template<class Keytype>
class QueueNode
{
	public:
	QueueNode* Next;
	Keytype key;
};

template<class Keytype>
class Queue
{
	 QueueNode<Keytype>* root;
	 public:
     
     Queue()
     {
     	root=NULL;
	 }
     int isempty()
     {
     	if(!root)
     	 return 1;
     	else
     	 return 0;
	 }
	 put(Keytype key)
	 {
		QueueNode<Keytype> *New=new QueueNode<Keytype>;
	 	New->key=key;
	 	New->Next=NULL;
	 	if(!root)
	 	{
	 		root=New;
	 		return 1;
		 }
	 	QueueNode<Keytype> *curr=root;
	 	while(curr->Next)
	 	{
	 		curr=curr->Next;
		}
		curr->Next=New;
	 }
	 Keytype read()
	 {
	 	
	 	if(!root)
	 	{
	 		printf("No element at the queue");//assert
	 		return 0;
		}
		else
		{
			return root->key;
		}
	 }
	 Keytype pop()
	 {
	 	if(!root)
	 	{
	 		printf("No element to pop in queue");//assert
	 		return 0;
		}
		else
		{
			Keytype toreturn=root->key;
			QueueNode<Keytype>* Next=root->Next;
			delete root;
			root=Next;
			return toreturn;			
		}
	 }
	 ~Queue()
	 {
	 	QueueNode<Keytype> *curr=root,*currn;
	 	while(curr)
	 	{
	 		currn=curr->Next;
	 		delete curr;
	 		curr=currn;
		}
	 }
	 printint()
	 {
	 	if(!root)
	 	{
	 		printf("EMPTY QUEUE");
	 		return 1;
		 }
	 	QueueNode<Keytype> *curr=root;
	 	while(curr)
	 	{
	 		printf("%d\n",curr->key);
	 		curr=curr->Next;
		}
		
	 }
	 #if DEBUG==1
	 printstr()
	 {
	 	if(!root)
	 	{
	 		printf("EMPTY QUEUE");
	 		return 1;
		 }
	 	QueueNode<Keytype> *curr=root;
	 	while(curr)
	 	{
	 		printf("%s\n",curr->key.c_str());
	 		curr=curr->Next;
		}
		
	 }
	 #endif
};
