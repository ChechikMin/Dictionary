# Dictionary
class Dictionary


Необходимореализовать класс контейнера, реализующий интерфейс dictionary и способныйвыбросить исключение, реализующее интерфейс not_found_exception.
Приразработке допускается использовать STL. Кроме этого, внутренняя реализацияничем не ограничена.

template<classKey, class Value>
classdictionary
{
public:
virtual ~dictionary() = default;

virtual const Value& get(const Key& key) const = 0;
virtual void set(const Key& key, const Value& value) = 0;
virtual bool is_set(const Key& key) const = 0;
};

template<classKey>
classnot_found_exception : public std::exception
{
public:
virtual const Key& get_key() const noexcept = 0;
};
