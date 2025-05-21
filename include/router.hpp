/* To prevent multiple inclusions in a single compilation
unit that lead to duplicate definition errors, we use include guards, 
could also use "#pragma once" as a modern approach, but this is more portable.
 */
#ifndef ROUTER_HPP 
#define ROUTER_HPP

#include <string>

class Router {
public:
    // Takes a raw HTTP request string and returns a full HTTP response string (temporaryly)
    // This function will be replaced with a more complex routing logic in the future
    std::string routeRequest(const std::string& request);
};

#endif // ROUTER_HPP