
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_java_net_protocol_ftp_FTPURLConnection$ClosingOutputStream__
#define __gnu_java_net_protocol_ftp_FTPURLConnection$ClosingOutputStream__

#pragma interface

#include <java/io/FilterOutputStream.h>
extern "Java"
{
  namespace gnu
  {
    namespace java
    {
      namespace net
      {
        namespace protocol
        {
          namespace ftp
          {
              class FTPURLConnection;
              class FTPURLConnection$ClosingOutputStream;
          }
        }
      }
    }
  }
}

class gnu::java::net::protocol::ftp::FTPURLConnection$ClosingOutputStream : public ::java::io::FilterOutputStream
{

public: // actually package-private
  FTPURLConnection$ClosingOutputStream(::gnu::java::net::protocol::ftp::FTPURLConnection *, ::java::io::OutputStream *);
public:
  virtual void close();
public: // actually package-private
  ::gnu::java::net::protocol::ftp::FTPURLConnection * __attribute__((aligned(__alignof__( ::java::io::FilterOutputStream)))) this$0;
public:
  static ::java::lang::Class class$;
};

#endif // __gnu_java_net_protocol_ftp_FTPURLConnection$ClosingOutputStream__