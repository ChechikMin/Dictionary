#pragma once


template<class Key, class Value>
class AbstractDictionary abstract
{
public:

	virtual const Value& get(const Key& key) const = 0;
	virtual void set(const Key& key, const Value& value) = 0;
	virtual bool is_set(const Key& key) const = 0;

	virtual ~AbstractDictionary() = default;
};

