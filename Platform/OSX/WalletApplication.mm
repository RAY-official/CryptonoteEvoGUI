#import <objc/runtime.h>
#import <Cocoa/Cocoa.h>

#include "Application/WalletApplication.h"

namespace WalletGui {

void onDockClicked(id self, SEL _cmd) {
  Q_UNUSED(self)
  Q_UNUSED(_cmd)
  static_cast<WalletApplication*>(qApp)->dockClickHandler();
}

void WalletApplication::installDockHandler() {
    Class cls = [[[NSApplication sharedApplication] delegate] class];
    if (!class_replaceMethod(cls, @selector(applicationShouldHandleReopen:hasVisibleWindows:),
      (IMP) onDockClicked, "v@:")) {
      NSLog(@"WalletApplication::installDockHandler() : class_replaceMethod failed!");
    }
}

}
