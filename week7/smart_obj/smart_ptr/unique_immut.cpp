//
// Created by 김혁진 on 14/10/2019.
//

#include "unique_immut.h"

namespace ptr {
unique_immut::unique_immut() {
    _mgr = new mgr();
}

unique_immut::unique_immut(Object *obj) {
    _mgr = new mgr(obj);
}

unique_immut::unique_immut(const unique_immut &immut) {
    if (immut._mgr) {
        int val = immut._mgr->ptr->get();
        _mgr = new mgr(val);
    }
}

unique_immut::~unique_immut() {
    release();
}


Object* unique_immut::get() const {
	if(this->_mgr->ptr == nullptr ) {
		return nullptr;	}
	else 
	      return this->_mgr->ptr;

}


void unique_immut::release() {
	if(this->_mgr->ptr != nullptr) {
           delete(this->_mgr);
	   this->_mgr->ptr = nullptr;
	}
}

unique_immut unique_immut:: operator+(unique_immut &unique) {
	Object a = *(this->_mgr->ptr);
	Object b = *(unique._mgr->ptr);
	release();
	unique.release();
	unique_immut c = unique_immut(new Object(a.get() + b.get()));
	return c;		

}

unique_immut unique_immut:: operator-(unique_immut &unique) {
	Object a = *(this->_mgr->ptr);
        Object b = *(unique._mgr->ptr);
        release();
        unique.release();
        unique_immut c = unique_immut(new Object(a.get() - b.get()));
        return c;
}

unique_immut unique_immut:: operator*(unique_immut &unique) {
	Object a = *(this->_mgr->ptr);
        Object b = *(unique._mgr->ptr);
        release();
        unique.release();
        unique_immut c = unique_immut(new Object(a.get() * b.get()));
        return c;
}

unique_immut unique_immut:: operator/(unique_immut &unique) {
	Object a = *(this->_mgr->ptr);
        Object b = *(unique._mgr->ptr);
        release();
        unique.release();
        unique_immut c = unique_immut(new Object(a.get() / b.get()));
        return c;
}


Object* unique_immut:: operator->() {
	return this->_mgr->ptr;
}


unique_immut& unique_immut:: operator=(unique_immut& r) {
	if( this == &r ) {
	return *this;
      }
	this->release();
	*this = r;
	return *this;
}

} // end of namespace ptr
