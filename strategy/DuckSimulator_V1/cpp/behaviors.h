class FlyBehavior {
public:
	virtual void fly() const = 0;
};

class FlyLow : public FlyBehavior {
public:
	virtual void fly() const;
};

class FlyHigh : public FlyBehavior {
public:
	virtual void fly() const;
};

class FlyFast : public FlyBehavior {
public:
	virtual void fly() const;
};

class QuackBehavior {
public:
	virtual void quack() const = 0;
};

class QuackNoisy : public QuackBehavior {
public:
	virtual void quack() const;
};

class QuackQuietly : public QuackBehavior {
public:
	virtual void quack() const;
};