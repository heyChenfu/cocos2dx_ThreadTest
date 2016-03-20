#include "ThreadTest.h"

ThreadTest::ThreadTest()
{
	//创建新线程,detach后从主线程中分离,多个线程之间会轮流运行
	std::thread thread1 = std::thread(&ThreadTest::leftHand, this);
	thread1.detach();

	std::thread thread2 = std::thread(&ThreadTest::rightHand, this);
	thread2.detach();
}

ThreadTest::~ThreadTest()
{
}

void ThreadTest::leftHand(){
	CCLOG("leftHand begin");
	int tmp = 1000;
	while(tmp > 0){
		tmp--;
	}
	CCLOG("leftHand end");
}

void ThreadTest::rightHand(){
	CCLOG("righHand begin");
	int tmp = 0;
	while (tmp < 100){
		tmp++;
	}
	CCLOG("righHand end");
}