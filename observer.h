#ifndef _OBSERVER_H_
#define _OBSERVER_H_

class Observer {
 public:
  virtual void notify(bool) = 0;
  virtual ~Observer();
};

#endif
