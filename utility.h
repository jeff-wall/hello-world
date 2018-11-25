class i_mutex
{
protected :
	std::string m_str_name ;
public :
    virtual bool lock() = 0 ;
    virtual void unlock() = 0 ;
	const std::string & cr_name ;
i_mutex() : cr_name(m_str_name) {}
    virtual ~i_mutex()
{}
}
;


class i_event
{
protected :
	std::string m_str_name ;
public :
    virtual void notify() = 0 ;
    virtual bool wait(UI4 wait_ms = 0) = 0 ;
	const std::string & cr_name ;
	i_event() : cr_name(m_str_name) {}
    virtual ~i_event()
    {}
}
;
