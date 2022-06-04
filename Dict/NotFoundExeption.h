#pragma once

#include <exception>


template<class Key>
class AbstractException abstract : public std::exception
{
public:
	virtual const Key& get_key() const noexcept = 0;
};

template<class Key>
class notFoundException : public AbstractException<Key> {
private:
	const Key m_key;
public:
	explicit notFoundException(Key&& key) : m_key(key) {}
	
	virtual const Key& get_key() const noexcept override
	{
		return m_key;
	};


};