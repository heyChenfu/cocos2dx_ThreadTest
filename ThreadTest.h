#ifndef ThreadTest_H
#define ThreadTest_H
#include <cocos2d.h>
USING_NS_CC;
//���̶߳��ļ�
#if(CC_TARGET_PLATFORM == CC_PLATFORM_WIN32)
	#include <Winsock2.h>
	#include <Wininet.h>
#else
	#include <pthread.h>
	#include <unistd.h>
#endif

class ThreadTest
{
public:
	ThreadTest();
	~ThreadTest();

	//����thread��������ͬ������
	void leftHand();
	void rightHand();
};
#endif