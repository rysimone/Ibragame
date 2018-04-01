
class Game;

class Ibra
{
public:
  Ibra();
  int getX() const
  {
    return m_x;
  }
  int getY()
  {
    return m_y;
  }
  void setX(int x)
  {
    m_x = x;
  }
  void setY(int y)
  {
    m_y = y;
  }
  void setSize(int size)
  {
    m_size = size;
  }
private:
  int m_x;
  int m_y;
  int m_size;
  Game * g;
};
