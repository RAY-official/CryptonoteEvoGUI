#include "GuardExecutor.h"

namespace WalletGui {

GuardExecutor::GuardExecutor(const std::function<void ()>& _initFunction, const std::function<void ()>& _deinitFunction) :
m_deinitFunction(_deinitFunction) {
  if (_initFunction != nullptr) {
    _initFunction();
  }
}

GuardExecutor::~GuardExecutor() {
  if (m_deinitFunction != nullptr) {
    m_deinitFunction();
  }
}

}
