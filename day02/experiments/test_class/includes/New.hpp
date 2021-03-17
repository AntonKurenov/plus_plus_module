#ifndef NEW_HPP
#define NEW_HPP

class New {
private:
protected:
public:
	New();
	virtual ~New();
	New& operator=(New const& src);
	New(New const& src);
};

#endif // !NEW_HPP
