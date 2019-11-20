//Find
	if (m_isCursor)		
///Change

	if (m_isCursor && !(CTimer::instance().GetCurrentSecond() >= m_isBlinking && (ELTimer_GetMSec() / 400) % 2))
	
//Find
	m_isMultiLine = false;
	
///Add
	m_isBlinking = CTimer::instance().GetCurrentSecond();
