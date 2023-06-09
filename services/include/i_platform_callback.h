/*
 * Copyright (C) 2021 Huawei Device Co., Ltd.
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef SERVICES_INCLUDE_I_PLATFORM_CALLBACK_H
#define SERVICES_INCLUDE_I_PLATFORM_CALLBACK_H

#include <vector>
#include <string>
#include "iremote_broker.h"
#include "ipc_types.h"
#include "global.h"

namespace OHOS {
namespace MiscServices {
    class IPlatformCallback : public IRemoteBroker {
    public:
        enum {
            NOTIFY_EVENT = OHOS::FIRST_CALL_TRANSACTION,
        };

        DECLARE_INTERFACE_DESCRIPTOR(u"ohos.miscservices.inputmethod.IPlatformCallback");

        virtual void notifyEvent(int eventId, int userId, const std::vector<std::u16string>& eventContent) = 0;
    };
} // namespace MiscServices
} // namespace OHOS
#endif // SERVICES_INCLUDE_I_PLATFORM_CALLBACK_H
