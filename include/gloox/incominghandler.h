/*
  Copyright (c) 2005-2023 by Jakob Schröter <js@camaya.net>
  This file is part of the gloox library. http://camaya.net/gloox

  This software is distributed under a license. The full license
  agreement can be found in the file LICENSE in this distribution.
  This software may not be copied, modified, sold or distributed
  other than expressed in the named license agreement.

  This software is distributed without any warranty.
*/


#ifndef INCOMING_HANDLER_H__
#define INCOMING_HANDLER_H__

#include "tag.h"

namespace gloox
{

  /**
   * @brief
   */
  class GLOOX_API IncomingHandler
  {
     public:

       virtual ~IncomingHandler() {}

       virtual void handleIncoming( Tag* tag ) = 0;
  };

}

#endif // INCOMING_HANDLER_H__
