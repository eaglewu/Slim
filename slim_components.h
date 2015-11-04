//
// Created by eagle on 15/11/5.
//

#ifndef SLIM_COMPONENTS_H
#define SLIM_COMPONENTS_H

#include "slim_app.h"
#include "slim_callable_resolver.h"
#include "slim_callable_resolver_aware_trait.h"
#include "slim_container.h"
#include "slim_middleware_aware_trait.h"
#include "slim_routable.h"
#include "slim_route.h"
#include "slim_route_group.h"
#include "slim_router.h"

#include "exception/slim_exception.h"
#include "exception/slim_not_found_exception.h"

#include "handlers/strategies/slim_request_response.h"
#include "handlers/strategies/slim_request_response_args.h"
#include "handlers/slim_error.h"
#include "handlers/slim_not_allowed.h"
#include "handlers/slim_not_found.h"

#include "http/slim_body.h"
#include "http/slim_collection.h"
#include "http/slim_cookies.h"
#include "http/slim_environment.h"
#include "http/slim_headers.h"
#include "http/slim_message.h"
#include "http/slim_request.h"
#include "http/slim_request_body.h"
#include "http/slim_response.h"
#include "http/slim_stream.h"
#include "http/slim_upload_file.h"
#include "http/slim_uri.h"

#include "interfaces/slim_callable_resolver_interface.h"
#include "interfaces/slim_invocation_strategy_interface.h"
#include "interfaces/slim_route_group_interface.h"
#include "interfaces/slim_route_interface.h"
#include "interfaces/slim_router_interface.h"

#include "interfaces/http/slim_collection_interface.h"
#include "interfaces/http/slim_environment_interface.h"
#include "interfaces/http/slim_headers_interface.h"

#endif //SLIM_COMPONENTS_H
