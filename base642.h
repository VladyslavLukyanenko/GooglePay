//
// Created by webdev on 3/11/20.
//

#ifndef C_BASE64_H
#define C_BASE64_H

unsigned int base642_encode(const unsigned char* bytes_to_encode, unsigned int in_len, unsigned char* encoded_buffer, unsigned int& out_len);
unsigned int base642_decode(const unsigned char* encoded_string, unsigned int in_len, unsigned char* decoded_buffer, unsigned int& out_len);

#endif //C_BASE64_H
