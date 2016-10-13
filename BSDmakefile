CC = cc

KDF_DIR = crypto/argon2

OFLAGS = -O1

WARNFLAGS = -Wall -Wformat-security

SECFLAGS = -fstack-protector-all -fPIC -fPIE -D_FORTIFY_SOURCE=2 

IFLAGS = -Iinclude

LFLAGS = -pthread

CFLAGS = $(OFLAGS) $(WARNFLAGS) $(SECFLAGS) $(IFLAGS) $(LFLAGS)

SRC = $(KDF_DIR)/argon2.c
SRC += $(KDF_DIR)/core.c $(KDF_DIR)/encoding.c
SRC += $(KDF_DIR)/thread.c $(KDF_DIR)/blake2/blake2b.c

OPTTEST !=	$(CC) -Iinclude -I$(KDF_DIR) $(KDF_DIR)/opt.c -c \
                        -o /dev/null 2>/dev/null; echo $?
.ifdef ! $(OPTTEST)
SRC += $(KDF_DIR)/opt.c
.else
SRC += $(KDF_DIR)/ref.c
.endif

SRC += bsdcompat/explicit_bzero.c bsdcompat/strlcat.c bsdcompat/strlcpy.c
SRC += bsdcompat/strtonum.c bsdcompat/readpassphrase.c
SRC += crypto/tweetnacl.c crypto/randombytes.c
SRC += utils/base64.c utils/utils.c
SRC += encrypt.c decrypt.c newkey.c symops.c sign.c verify.c main.c

jfpg: $(SRC)
		$(CC) $(CFLAGS) $(SRC) -o jfpg
