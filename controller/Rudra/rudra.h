#ifndef __RUDRA_H__
#define __RUDRA_H__

#include <libgpsmm.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>
#include <iostream>
#include <cmath>
using namespace std;

class Rudra {
    private:
    public:
      Rudra();
      int gpsdintialise();
      void get_latlon(double &latitude,double &longitude);
      int maps(int x, int in_min, int in_max, int out_min, int out_max);
      float get_bearing(float lat1, float lon1, float lat2, float lon2);
      float get_dist(float lat1, float lon1, float lat2, float lon2);
      unsigned char parse(unsigned char *n, int start, int end) ;
      ~Rudra();
};

#endif
