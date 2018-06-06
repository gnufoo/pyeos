/**
 *  @file
 *  @copyright defined in eos/LICENSE.txt
 */

#include <eosiolib/print.h>

#include "wasm_api.h"

void prints( const char* cstr ) {
   get_wasm_api()->prints(cstr);
}

void prints_l( const char* cstr, uint32_t len) {
   get_wasm_api()->prints_l( cstr, len);
}

void printi( int64_t value ) {
   get_wasm_api()->printi( value );
}

void printui( uint64_t value ) {
   get_wasm_api()->printui( value );
}

void printi128( const int128_t* value ) {
   get_wasm_api()->printi128(value);
}

void printui128( const uint128_t* value ) {
   get_wasm_api()->printui128(value);
}

void printsf(float value) {
   get_wasm_api()->printsf(value);
}

void printdf(double value) {
   get_wasm_api()->printdf(value);
}

void printqf(const long double* value) {
   get_wasm_api()->printqf(value);
}

void printn( uint64_t name ) {
   get_wasm_api()->printn( name );
}

void printhex( const void* data, uint32_t datalen ) {
   get_wasm_api()->printhex( data, datalen );
}
