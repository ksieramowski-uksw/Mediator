#include"IVisitor.h"
class Component {
public:
	virtual ~Component() {}
	virtual void Accept(Visitor *visitor) const = 0;
};
// comment.