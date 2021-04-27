#pragma once
class Account {
 public:
  Account(int id, int balance);
  virtual ~Account();

  // Virtual to test.
  virtual int GetBalance() const;
  
  bool operator==(const Account)const{return true;}

  // Virtual to test.
  virtual void ChangeBalance(int diff);

  // Virtual to test.
  virtual void Lock();

  // Virtual to test.
  virtual void Unlock();
  int id() const { return id_; }

 private:
  int id_;
  int balance_;
  bool is_locked_;
};
