/*
 * Copyright 2019-2021 Signal Messenger, LLC
 * SPDX-License-Identifier: AGPL-3.0-only
 */

#ifndef RFFI_API_DEFS_H__
#define RFFI_API_DEFS_H__

/**
 * Common definitions used throughout the Rust RFFI API.
 *
 */

// Public interfaces exported to Rust as "extern C".
#define RUSTEXPORT extern "C" __attribute__((visibility("default")))

/* Ice Update Message structure passed between Rust and c++ */
typedef struct {
  const char* sdp_borrowed;
} RustIceCandidate;

#endif /* RFFI_API_DEFS_H__ */
