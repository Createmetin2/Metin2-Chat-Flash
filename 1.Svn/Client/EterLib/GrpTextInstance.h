///Add
#include "../EterBase/Timer.h"

//Find
		void SetMax(int iMax);
		
///Add
		void SetBlinking(){ m_isBlinking = CTimer::instance().GetCurrentSecond() + 1.5f; };
		
//Find
		bool m_isCursor;
		
///Add
		float m_isBlinking;
