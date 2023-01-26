ase 'c':
                                        write(1,&(va_arg(input, char)), 1);
                                        return (++count);
                                case 's':
                                        char str = va_arg(input, char*);

                                        while (str[count])
                                        {
                                                write(1, &str[count], 1);
                                                count++;
                                                if (str[count] == '\n')
                                                        write(1, '\n', 1);
                                        }
                                        return (count);
                                case 'i':
                                        int deci = va_arg(input, int);
                                        write(1, &deci, 4);
                                        return (countnum(deci));
                                case 'd':
                                        signed int dec = va_arg(input, signed int);
                                        write(1, &dec, 4);
                                        return (countnum(dec));
                                case 'b':
                                        int binary = tobinary(va_arg(input, int));
                                        write(1, &binary,4);
                                        return (countnum(binary));
                                case 'u':
                                        unsigned int uns = va_arg(input, unsigned int);
                                        write(1, &uns, 4);
                                        return (countnum(uns));
                                case 'x':
                                        unsigned int hex = va_arg(input, unsigned int);
                                        write(1, &hex, 4);
                                        return (countnum(hex));
                                case 'o':
                                        unsigned int oct = va_arg(input, unsigned int);
                                        write(1, &oct, 4);
                                        return (countnum(oct));
                                case 'X':
                                        unsigned int hexa = va_arg(input, unsigned int);
                                        write(1, &hexa, 4);
                                        return (countnum(hexa));

