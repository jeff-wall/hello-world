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
