#pragma once

#include "Mediator.h"

class BaseComponent {
protected:
	Mediator * mediator_;

public:
	BaseComponent(Mediator* mediator = nullptr);
	void set_mediator(Mediator* mediator);
};