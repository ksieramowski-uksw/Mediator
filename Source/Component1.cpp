#include "Component1.h"


void Component1::DoA() {
	std::cout << "Component 1 does A.\n";
	this->mediator_->Notify(this, "A");
}
void Component1::DoB() {
	std::cout << "Component 1 does B.\n";
	this->mediator_->Notify(this, "B");
}
