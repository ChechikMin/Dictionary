#pragma once

#include <stdexcept>


template <class Key>
class CommonException : public std::exception
{
public:
	CommonException() : exception("notFoundException") {}
	virtual const Key& get_key() const noexcept = 0;
};

template <class Key>
class notFoundException : public CommonException<Key>{
private:
	Key m_error;
public:
	
	notFoundException(Key err): m_error(err) { };

	virtual const Key& get_key() const noexcept 
			{
			return m_error;
			};
};
