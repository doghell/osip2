/*
  The oSIP library implements the Session Initiation Protocol (SIP -rfc2543-)
  Copyright (C) 2001  Aymeric MOIZARD jack@atosc.org
  
  This library is free software; you can redistribute it and/or
  modify it under the terms of the GNU Lesser General Public
  License as published by the Free Software Foundation; either
  version 2.1 of the License, or (at your option) any later version.
  
  This library is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
  Lesser General Public License for more details.
  
  You should have received a copy of the GNU Lesser General Public
  License along with this library; if not, write to the Free Software
  Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
*/


#ifndef _OSIP_ACCEPT_H_
#define _OSIP_ACCEPT_H_

#include <osipparser2/headers/osip_content_type.h>

/**
 * @file osip_accept.h
 * @brief oSIP osip_accept header definition.
 */

/**
 * @defgroup oSIP_TYPES oSIP type definitions
 * @ingroup oSIP
 * @{
 */

/**
 * Structure for accept headers.
 * @defvar osip_accept_t
 */
  typedef osip_content_type_t osip_accept_t;

#ifdef __cplusplus
extern "C"
{
#endif


/**
 * Allocate an Accept element.
 * @param header The element to work on.
 */
#define accept_init(header)     osip_content_type_init(header)
/**
 * Free an Accept element.
 * @param header The element to work on.
 */
#define osip_accept_free(header)     osip_content_type_free(header)
/**
 * Parse an Accept element.
 * @param header The element to work on.
 * @param hvalue The string to parse.
 */
#define osip_accept_parse(header, hvalue) osip_content_type_parse(header, hvalue)
/**
 * Get a string representation of an Accept element.
 * @param header The element to work on.
 * @param dest A pointer on the new allocated string.
 */
#define osip_accept_to_str(header, dest) osip_content_type_to_str(header, dest)
/**
 * Clone an Accept element.
 * @param header The element to work on.
 * @param dest A pointer on the copy of the element.
 */
#define osip_accept_clone(header, dest) osip_content_type_clone(header, dest)

/**
 * Allocate and add a header parameter in an Accept element.
 * @param header The element to work on.
 * @param name The token name.
 * @param value The token value.
 */
#define osip_accept_param_add(header,name,value)  osip_generic_param_add((header)->gen_params,name,value)
/**
 * Find a header parameter in an Accept element.
 * @param header The element to work on.
 * @param name The token name to search.
 * @param dest A pointer on the element found.
 */
#define osip_accept_param_get_byname(header,name,dest) osip_generic_param_get_byname((header)->gen_params,name,dest)


#ifdef __cplusplus
}
#endif

/** @} */

#endif