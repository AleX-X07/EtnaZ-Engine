#include "Globals.h"

// Class for create an object
class GameObject
{
public:
	// Variable
	Texture* tex;
    Color color;

	Vector2f pos;
	Vector2f size;
	Vector2f scale;

	RectangleShape rect;
	bool visibility;

public:
	// Constructor/Destructor
	GameObject() = default;
	GameObject(float x, float y);
	GameObject(float x, float y, float w, float h);
	virtual ~GameObject() = default;

	// Method get/set
	Texture* getTexture();
	Vector2f getPos();
	Vector2f getSize();

	void setPos(Vector2f nPos);
	void setSize(Vector2f nSize);
	void setTexture(Texture* tex);
	void setScale(Vector2f scale);

	void setVisibilityTrue();
	void setVisibilityFalse();

	// Method virtual
	virtual void update(float& dt);
	virtual void render(RenderWindow* window);
};