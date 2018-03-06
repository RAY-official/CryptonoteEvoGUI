#pragma once

#include <functional>

namespace WalletGui {

class GuardExecutor {
public:
  GuardExecutor(const std::function<void()>& _initFunction, const std::function<void()>& _deinitFunction);

  ~GuardExecutor();

private:
  const std::function<void()> m_deinitFunction;
};

}
