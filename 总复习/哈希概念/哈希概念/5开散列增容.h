#pragma once

void _CheckCapacity()
{
	size_t bucketCount = BucketCount();
	if (_size == bucketCount)
	{
		HashBucket<V, HF> newHt(bucketCount);
		for (size_t bucketIdx = 0; bucketIdx < bucketCount; ++bucketIdx)
		{
			PNode pCur = _ht[bucketIdx];
			while (pCur)
			{
				// 将该节点从原哈希表中拆出来
				_ht[bucketIdx] = pCur->_pNext;
				// 将该节点插入到新哈希表中
				size_t bucketNo = newHt.HashFunc(pCur->_data);
				pCur->_pNext = newHt._ht[bucketNo];
				newHt._ht[bucketNo] = pCur;
				pCur = _ht[bucketIdx];
			}
		}
		newHt._size = _size;
		this->Swap(newHt);
	}
}