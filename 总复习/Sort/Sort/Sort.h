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
#include "Queue.h"

//交换函数
void Swap(int *x, int *y);

//BubbleSort（冒泡排序）
void BubbleSort(SeqList *psl);
//SelectSort（选择排序）
void SelectSort(SeqList *psl);
//InstertSort（插入排序）
void InstertSort(SeqList *psl);
//ShellSort（希尔排序）
void ShellSort(SeqList *psl);
//MergeSort（归并排序）
void DealMergeSort(SeqList *psl, SeqList *tmp, int start, int end);
void MergeSort(SeqList *psl);
//QuickSort（快速排序）
//寻找基准值下标的方法
//hoare法
int GetIndexHoareWay(SeqList *psl, int left, int right);
//双指针法1
int GetIndexDoublePointWay1(SeqList *psl, int left, int right);
//双指针法2
int GetIndexDoublePointWay2(SeqList *psl, int left, int right);
//挖坑法
int GetIndexDigWay(SeqList *psl, int left, int right);
void DealQuickSort(SeqList *psl, int left, int right);
void QuickSort(SeqList *psl);
//快速排序非递归
void QuickSortNonR(SeqList *psl);
//HeapSort（堆排序）
void HeapAdjustDown(SeqList *psl, int root);
void HeapSort(SeqList *psl);
//CountSort（计数排序）
void CountSort(SeqList *psl);
//BucketSort（桶排序）
void BucketSort(SeqList *psl);
//RadixSort（基数排序）
int GetDigit(SeqList *psl);
void RadixSort(SeqList *psl);

#endif //_SORT_H_