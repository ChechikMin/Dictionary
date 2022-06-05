#pragma once
#include "AbstractDictionary.h"
#include "NotFoundExeption.h"

template<class Key, class Value>
class Dictionary : public AbstractDictionary<Key, Value>
{
private:
	class Root {

	};

	class Child
	{

	};

	class Tree {
	};

public:
	explicit Dictionary(Key key, Value value) {}

	using keyType = Key;
	using valueType = Key;

	virtual const Value& get(const Key& key) const override  { throw  notFoundException<Key>(key); };
	virtual void set(const Key& key, const Value& value) override {};
	virtual bool is_set(const Key& key) const override { return true; };

	virtual ~Dictionary() = default;

};