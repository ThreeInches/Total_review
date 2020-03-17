#ifndef _SORT_H_
#define _SORT_H_

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>
#include <assert.h>
#include "SeqList.h"

//Ωªªª∫Ø ˝
void Swap(int *x, int *y);

//BubbleSort£®√∞≈›≈≈–Ú£©
void BubbleSort(SeqList *psl);
//SelectSort£®—°‘Ò≈≈–Ú£©
void SelectSort(SeqList *psl);
//InstertSort£®≤Â»Î≈≈–Ú£©
void InstertSort(SeqList *psl);
//ShellSort£®œ£∂˚≈≈–Ú£©
void ShellSort(SeqList *psl);
//MergeSort£®πÈ≤¢≈≈–Ú£©
void DealMergeSort(SeqList *psl, SeqList *tmp, int start, int end);
void MergeSort(SeqList *psl);
//QuickSort£®øÏÀŸ≈≈–Ú£©
void QuickSort(SeqList *psl);
//HeapSort£®∂—≈≈–Ú£©
void HeapAdjustDown(SeqList *psl, int root);
void HeapSort(SeqList *psl);
//CountSort£®º∆ ˝≈≈–Ú£©
void CountSort(SeqList *psl);
//BucketSort£®Õ∞≈≈–Ú£©
void BucketSort(SeqList *psl);
//RadixSort£®ª˘ ˝≈≈–Ú£©
void RadixSort(SeqList *psl);

#endif //_SORT_H_