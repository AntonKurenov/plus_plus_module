#include "../includes/New.hpp"

New::New() {
}
New::~New() {
}
New::New(New const& src) {
	*this = src;
}
New& New::operator=(New const& src) {
	// TODO
	static_cast<void>(src);
	return *this;
}
