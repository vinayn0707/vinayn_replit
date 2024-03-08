#include <iostream>



class Logger
{

   std::string tag;
  FILE *m_file;
public:
 Logger();
~Logger();
 void LoggerWrite(std::string strData);
 void writeTag(std::string tag);

};
Logger::Logger()
{
  
   m_file = fopen("logger.txt","a+");
  std::cout<<" Called constrctor"<<std::endl;
}

Logger::~Logger()
{
  fclose(m_file);
}

void Logger::LoggerWrite(std::string strData)
{
   fprintf(m_file,"%s %s\n",tag.c_str(),strData.c_str());
   fflush(m_file);
}

void Logger::writeTag(std::string stag)
{

  tag = stag;
}
int main()

{
Logger fp ;
  Logger fp1 ;
  fp.writeTag("INFO:");
  std::cout<<" going write into logger"<<std::endl;
  fp.LoggerWrite("starting  logger function ");

  fp1.writeTag("MAJOR:");
  std::cout<<" going write into logger"<<std::endl;
  fp1.LoggerWrite("starting  logger function ");
  
   
  
}