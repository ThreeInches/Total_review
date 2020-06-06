#pragma once

template<class V>
struct HashBucketNode
{
	HashBucketNode(const V& data)
	: _pNext(nullptr), _data(data)
	{}
	HashBucketNode<V>* _pNext;
	V _data;
};
// 本文所实现的哈希桶中key是唯一的
template<class V, class HF = DefHashF<T> >
class HashBucket
{
	typedef HashBucketNode<V> Node;
	typedef Node* PNode;
public:
	HashBucket(size_t capacity = 3) : _size(0)
	{
		_ht.resize(GetNextPrime(capacity), nullptr);
	}
	// 哈希桶中的元素不能重复
		PNode* Insert(const V& data)
	{
			// 确认是否需要扩容。。。
			// _CheckCapacity();
			// 1. 计算元素所在的桶号
			size_t bucketNo = HashFunc(data);
			// 2. 检测该元素是否在桶中
			PNode pCur = _ht[bucketNo];
			while (pCur)
			{
				if (pCur->_data == data)
					return pCur;
				pCur = pCur->_pNext;
			}
			// 3. 插入新元素
			pCur = new Node(data);
			pCur->_pNext = _ht[bucketNo];
			_ht[bucketNo] = pCur;
			_size++;
			return pCur;
		}
	// 删除哈希桶中为data的元素(data不会重复)，返回删除元素的下一个节点
	PNode* Erase(const V& data)
	{
		size_t bucketNo = HashFunc(data);
		PNode pCur = _ht[bucketNo];
		PNode pPrev = nullptr, pRet = nullptr;
		while (pCur)
		{
			if (pCur->_data == data)
			{
				if (pCur == _ht[bucketNo])
					_ht[bucketNo] = pCur->_pNext;
				else
					pPrev->_pNext = pCur->_pNext;
				pRet = pCur->_pNext;
				delete pCur;
				_size--;
				return pRet;
			}
		}
		return nullptr;
	}
		PNode* Find(const V& data);
	size_t Size()const;
	bool Empty()const;
	void Clear();
	bool BucketCount()const;
	void Swap(HashBucket<V, HF>& ht;
	~HashBucket();
private:
	size_t HashFunc(const V& data);
private:
	vector<PNode*> _ht;
	size_t _size; // 哈希表中有效元素的个数
};