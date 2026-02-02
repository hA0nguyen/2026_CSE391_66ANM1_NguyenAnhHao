#include<iostream>
using namespace std;
struct Node{
	float gt;
	Node *Cleft;
	Node *Ae;
	
};
struct cay{
	Node*root;
};
void KhoiTao(cay &goc){
	goc.root=NULL;
}
void MakeNode(Node *&p ,float value){
	p=new Node;
	p->gt=value;
	p->Cleft=nullptr;
	p->Ae=nullptr;
}
bool Rong(cay &goc){
	return goc.root==NULL;
}
void themNode(Node *&goc,Node *moi){
	if(!goc)
		return;
	if(goc->Cleft==NULL){
		goc->Cleft=moi;
	}
	else{
		Node *p=goc->Cleft;
		while(p->Ae==NULL)
		{
			p=p->Ae;
		}
		p->Ae=moi;
	}
}
void duyet(Node *p){
	cout<<p->gt;
	duyet(p->Cleft);
	duyet(p->Ae);
}
int main(){
	cay goc;
	KhoiTao(goc);
	Node *TreeNode=NULL,*moi=NULL;
	
	MakeNode(TreeNode,5);
	goc.root=TreeNode;
	MakeNode(moi,4);
	themNode(TreeNode,moi);
	duyet(TreeNode);
}
