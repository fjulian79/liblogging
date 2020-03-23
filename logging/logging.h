/*
 * liblogging, a minimalistic approach to handle log messages with different 
 * severities. See the README.md for details.
 *
 * Copyright (C) 2020 Julian Friedrich
 * 
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <https://www.gnu.org/licenses/>. 
 *
 * You can file issues at https://github.com/fjulian79/liblogging
 */

#ifndef LOGGING_H_
#define LOGGING_H_

#ifdef __cplusplus
extern "C" {
#endif

#include <stdio.h>
#include "logging_config.h"

#if LOGLEVEL > 0
#define logErr(...)                 logMsg("E", __VA_ARGS__)
#else 
#define logErr(...)
#endif /* LOGLEVEL > 0 */

#if LOGLEVEL > 1
#define logWarn(...)                logMsg("W", __VA_ARGS__)
#else 
#define logWarn(...)                 
#endif /* LOGLEVEL > 1 */

#if LOGLEVEL > 2
#define logInfo(...)                logMsg("I", __VA_ARGS__)
#else 
#define logInfo(...)
#endif /* LOGLEVEL > 5 */

#if LOGLEVEL > 3
#define logDebug(...)               logMsg("D", __VA_ARGS__)
#else 
#define logDebug(...)
#endif /* LOGLEVEL > 5 */

#if LOGLEVEL >= 4
#define logTrace(...)               logMsg("T", __VA_ARGS__)
#else 
#define logTrace(...)
#endif /* LOGLEVEL > 5 */
     
/**
 * Default macro used for logging without arguments.
 */
#define logMsg(_sev, _fmt, ...)                                             \
                                                                            \
    printf(LOGFORMAT(_sev, _fmt), ##__VA_ARGS__)

#ifdef __cplusplus
}
#endif

#endif /* LOGGING_H_ */