#pragma once

class QSemaphore;

namespace WalletGui {

class SemaphoreLocker {
public:
  explicit SemaphoreLocker(QSemaphore& _semaphore);
  ~SemaphoreLocker();

  void wait();

private:
  QSemaphore& m_semaphore;
};

class SemaphoreUnlocker {
public:
  explicit SemaphoreUnlocker(QSemaphore& _semaphore);
  ~SemaphoreUnlocker();

private:
  QSemaphore& m_semaphore;
};

}
