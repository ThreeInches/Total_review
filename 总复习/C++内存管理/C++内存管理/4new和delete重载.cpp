//#include <iostream>
//
//using namespace std;
//
//operator new和operator delete是系统提供的全局函数。
//new在底层调用operator new全局函数来申请空间
//delete在底层调用operator delete全局函数来释放空间
//
//operator new通过调用malloc来申请空间，当malloc申请空间的成功时直接返回；
//申请空间失败尝试执行空间不足的应对措施，如果改应对措施用户设置了，则继续申请，否则抛出异常
//operator delete最后是通过free来释放空间的
//
//void* _CRTDECL operator new(size_t size) _THROW1(_STD bad_alloc)
//{
//	try to allocate size bytes
//	void *p;
//	while ((p = malloc(size)) == 0)
//	{
//		if (_callnewh(size) == 0)
//		{
//			report no memory
//			申请失败，抛出bad_alloc异常
//			static const bad_alloc nomem;
//			_RAISE(nomem)
//		}
//	}
//	return (p);
//}
//
//operator delete该函数最终是通过free来释放空间的
//void operator delete(void *pUserData)
//{
//	_CrMemblockHeader *pHead;
//
//	RTCCALLBACK(_RTC_Free_hook, (pUserData, 0));
//
//	if (pUserData == NULL)
//	{
//		return;
//	}
//
//	_mlock(_HEAP_LOCK);
//	_TRY
//
//		pHead = pHdr(pUserData);
//
//		_ASSERTE(_BLOCK_TYPE_IS_VALID(pHead->nBlockUse));
//
//		_free_dbg(pUserData, pHead->nBlockUse);
//
//		_FINALLY
//			_munlock(_HEAP_LOCK);
//		_END_TRY_FINALLY
//
//		return;
//}
//
//int main()
//{
//
//	system("pause");
//	return 0;
//}
