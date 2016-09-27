#define FILENAME_SIZE   255
#define EXT     ".xsalsa20"
#define SIGNEXT ".signed"
#define PUB     "-pubkey.curve25519"
#define SEC     "-secretkey.curve25519"
#define PUBSIGN "-signing-pubkey.ed25519"
#define SECSIGN "-signing-secretkey.ed25519"

#define	KDF_N		2
#define KDF_MEM		192
#define KDF_P		8
#define MIN_ROUNDS      2
#define MAX_ROUNDS      14
#define	MIN_MEM		56
#define	MAX_MEM		32000
#define IDSIZE  	128
#define B64NAMESIZE     192
#define PUBKEYBYTES     crypto_box_PUBLICKEYBYTES
#define SECKEYBYTES     crypto_box_SECRETKEYBYTES
#define NONCEBYTES      crypto_box_NONCEBYTES
#define ZEROBYTES       crypto_box_ZEROBYTES
#define SIGNSKEYBYTES   crypto_sign_SECRETKEYBYTES
#define SIGNPKEYBYTES   crypto_sign_PUBLICKEYBYTES
