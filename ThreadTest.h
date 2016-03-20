#ifndef ThreadTest_H
#define ThreadTest_H
#include <cocos2d.h>
USING_NS_CC;
//多线程都文件
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

	//传给thread的两件不同的事情
	void leftHand();
	void rightHand();
};
#endif