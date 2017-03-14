/*
 * %CopyrightBegin%
 * 
 * Copyright Ericsson AB 1998-2009. All Rights Reserved.
 * 
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
 * 
 * %CopyrightEnd%
 */
#include "eidef.h"
#include "eiext.h"
#include "putget.h"

/* add the version identifier to the start of the buffer */
int ei_encode_version(char *buf, int *index)
{
  char *s = buf + *index;
  char *s0 = s;

  if (!buf) s ++;
  else put8(s,(unsigned char)ERL_VERSION_MAGIC);
  *index += s-s0;
  
  return 0;
}

