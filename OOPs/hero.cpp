class Hero
{
    // properties

    char name[100];

private:
    int health;
public:
    char level;

// Getter

    int getHealth()
    {
        return health;
    }

    char getLevel()
    {
        return level;
    }

// Setter

    void setHealth(int h)
    {
        health = h;
    }

    void setLevel(char ch)
    {
        level = ch;
    }
};