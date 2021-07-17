#include <iostream>

class Log
{
  public:
    const int logLevelError = 0;
    const int logLevelWarn = 1;
    const int logLevelInfo = 2;
  private:
    int m_level = logLevelInfo;
  public:
    void setLevel(int level)
    {
      m_level = level;
    }

    void error(const char* msg)
    {
      if (m_level >= logLevelError)
      {
        std::cout << "[ERROR]: " << msg << std::endl;
      }
    }

    void warn(const char* msg)
    {
      if (m_level >= logLevelWarn)
      {
        std::cout << "[WARNING]: " << msg << std::endl;
      }
    }

    void info(const char* msg)
    {
      if (m_level >= logLevelInfo)
      {
        std::cout << "[INFO]: " << msg << std::endl;
      }
    }
};

int main()
{
  Log log;
  log.setLevel(log.logLevelWarn);
  log.warn("Hello");

  std::cin.get();
}
