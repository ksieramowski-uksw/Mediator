#include "Component2.h"

void Component2::DoC() {
	std::cout << "Component 2 does C.\n";
	this->mediator_->Notify(this, "C");
}
void Component2::DoD() {
	std::cout << "Component 2 does D.\n";
	this->mediator_->Notify(this, "D");
}