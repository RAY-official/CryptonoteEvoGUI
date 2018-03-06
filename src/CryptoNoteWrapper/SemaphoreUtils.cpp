#include <QSemaphore>

#include "SemaphoreUtils.h"

namespace WalletGui {

SemaphoreLocker::SemaphoreLocker(QSemaphore& _semaphore) : m_semaphore(_semaphore) {
  m_semaphore.acquire(1);
}

SemaphoreLocker::~SemaphoreLocker() {
  Q_ASSERT(m_semaphore.available() == 0);
  m_semaphore.release(1);
}

void SemaphoreLocker::wait() {
  m_semaphore.acquire(1);
}

SemaphoreUnlocker::SemaphoreUnlocker(QSemaphore& _semaphore) : m_semaphore(_semaphore) {
  Q_ASSERT(m_semaphore.available() == 0);
}

SemaphoreUnlocker::~SemaphoreUnlocker() {
  Q_ASSERT(m_semaphore.available() == 0);
  m_semaphore.release(1);
}

}
