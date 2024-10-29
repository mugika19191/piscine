/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imugica- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 12:29:13 by imugica-          #+#    #+#             */
/*   Updated: 2024/10/29 12:29:17 by imugica-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_strlen(const char *str) {
    int length = 0;

    while (str[length] != '\0') {
        length++;
    }

    return length;
}

void print_chars(unsigned char *addr, unsigned int size) {
    unsigned int i = 0;

    while (i < size) {
        write(1, addr + i, 1);
        i++;
    }
}

void print_hex(unsigned char *addr, unsigned int size) {
    char hex_buffer[48]; // Enough to hold hex values and spaces for 16 bytes
    int index = 0;

    unsigned int i = 0;
    while (i < size) {
        index = i * 3; // Each byte takes 2 hex digits + 1 space
        hex_buffer[index] = "0123456789abcdef"[addr[i] / 16]; // First hex digit
        hex_buffer[index + 1] = "0123456789abcdef"[addr[i] % 16]; // Second hex digit

        if (((i + 1) % 2) == 0 && i > 0) {
            hex_buffer[index + 2] = ' '; // Space
        }

        i++;
    }

    write(1, hex_buffer, size * 3); // Write the hex buffer
    print_chars(addr, size);
    write(1, "\n", 1);
}

void *ft_print_memory(void *addr, unsigned int size) {
    unsigned long address_16th = (unsigned long)addr;
    char addr_buffer[18];

    int size_2 = size; // Total size
    unsigned int bytes_to_print;

    while (size_2 > 0) {
        // Fill addr_buffer with the address
        int i = 0;
        while (i < 16) {
            addr_buffer[i] = "0123456789abcdef"[(address_16th >> (4 * (15 - i))) & 0xF];
            i++;
        }
        addr_buffer[16] = ':'; // Add colon
        addr_buffer[17] = ' '; // Add space
        write(1, addr_buffer, 18); // Write the address

        // Calculate how many bytes to print
        bytes_to_print = size_2 > 16 ? 16 : size_2;
        print_hex((unsigned char *)addr, bytes_to_print);

        addr += 16; // Move the pointer forward
        address_16th += 16; // Increment the address for the next segment
        size_2 -= bytes_to_print; // Decrease the remaining size
    }
    return addr;
}

// Example usage
int main() {
    char *data = "hyybflcgiueflgkehnrtnvhfpeymgqwefozfyigavesmkvftwnotxrhuzbdldoxxdupenndvgegoghphetbffoqzqekrcbldncbtgpab";
    ft_print_memory(data, ft_strlen(data));
    return 0;
}
