#include "ThreadTest.h"

ThreadTest::ThreadTest()
{
	//�������߳�,detach������߳��з���,����߳�֮�����������
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