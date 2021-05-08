#ifndef RESTRICTED_h
#define RESTRICTED_h

const char* SSID_LOC = "usuario";
const char* PASSWORD_WIFI = "senha";
const char* AWS_ENDPOINT =  "xxxxxxxxxxxxx-ats.iot.us-east-1.amazonaws.com";

// xxxxxxxxxx-certificate.pem.crt
static const String certificatePemCrt = \
//-----BEGIN CERTIFICATE-----
"MIsdfasdfasdfsdfdffasdfasdfdfdfdafgdfgafgasdfgasdfgdsfgdggggDQEB" \
"CwUAME0xSzBJBgNVBAsMQkFtYXpvbiBXZWIgU2VydmljZXMgTz1BbWF6b24uY29t" \
"IEluYy4gTD1TZWF0dGxlIFNUPVdhc2hpbmd0b24gQz1VUzAeFw0yMTA0MDcxOTI0" \
"MTZaFw00OTEyMzEyMzU5NTlaMB4xHDAaBgNVBAMME0FXUyBJb1QgQ2VydGlmaWNh" \
"dGUwggEiMA0GCSqGSIb3DQEBAQUAA4IBDwAwggEKAoIBAQDKOukWOn9mc/qhnxz/" \
"GqYxAvt7XmllbIwEHCoZTHUT2nN2GuazRPadQZZMXiu0vnK43OnLdfasds9fgVt/" \
"Kou3ELeEYdsixggACHfasdsdfasdfasdfsfffhqgrgrertrtrvqqxMuL+3tdTHwt" \
"Wi7ilFVUijywm89KSKeNQlKmMFN32fDxH3NLKXCvZD9TaCwWUX0nBQhbyc+MEqw8" \
"tZq1SNLveAsRxbyfaED0NN5VdLVjmqktdKZM32+eRarlcCWf7HP/y2/X8b84oOPX" \
"rm+uhDXrqIasdfadfasdfsfasdfasdfasdfasdfsdfdfsdfasdfasdfCV+V5JB8l" \ 
"SLwbAgMBAAGjYDBeMB8GA1UdIwQYMBaAFDlXVhviDH8pO0YgZO0Gw8aSzBAoMB0G" \
"A1UdDgQWBBR7Trj1LTkfo9JukCNDOWUCw6RY8zAMBgNVHRMBAf8EAjAAMA4GA1Ud" \ 
"DwEB/wQEAwIHgDANBgkqhkiG9w0BAQsFAAOCAQEApfRNgQhg4jBkwEfILB5jbd/H" \
"43G/pqwerwervwerqrtqbrtebrtrytyty6y6yu6n6787en7ne78nn8R7D6v5/KjV" \
"kBXwH+de7dmZ7duceNtmgoTCfzDmMathWH98vKunt9/k5PoGBbsGR4iN1fAbE/Ok" \
"kZCOY4J1ZwkNs1Pn8OTac8fZmX2FvbriG4xWC7xU3YT4Sy6RGPXGGh4wqhc7LalV" \
"s1VVu57zFogajJSmYFzWSWYGwZDs9U0bNpBP8tST0VpA+m3p8/vTwlfjokrxrYoV" \
"tw3FmZUYYysISjvOChusjFAkwffpDKZ9ys7RLHitKjesg2WIJZEKcchfeoS6tw=="; 
//-----END CERTIFICATE-----


// xxxxxxxxxx-private.pem.key
 static const String privatePemKey= \
//-----BEGIN RSA PRIVATE KEY-----
"dfsdfasdfasdfsfsdfdfdfctytyrtytrtrttrttttrtrrttBBwqGUx1E9przdhrm" \
"s0T2nUGWTF4rtL5yuNzpy/eiq0P4msVbfyqLtxC3hGHbIsYIAAhy3tL1noKZNMCn" \
"Ivh32gD+vkQvxxoBDwPY0jzLi/t7XUx8LVou4pRVVIo8sJvPSkinjUJSpjBTd9nw" \
"8R9zSylwr2Q/U2gsFlF9JwUIW8nPjBKsPLWatUjS73gLEcW8n2hA9DTeVXS1Y5qp" \
"LXSmTN9vnkWq5XAln+xz/8tv1/G/OKDj165vroQ166iPxkqhpeH1v7+NY597aSX6" \
"fbAE4QxhwJOGlGNq9N4cK3xEglfleSQfJUi8GwIDAQABAoIBAQCL6RfrrgsIOcMz" \
"YB6yi6BhFjwgjSAD8IYqLcYefJwfYSoyksf7TQIFqCOwsBIy2PQL26LQ34GmVb9A" \ 
"bLwertwertertetetretretertertt34t4v4t43tb5tt54r1AROsbK/sO+1i6lje" \
"IpVi1xrK3W7vrzfvw8w1C3EINNNzb420nb1IELz7KSxncy7gcMiqRPsKjvzg4ffM" \
"+w3COHqXW75523cs83gabLyR0fRgcJ2UdSK5pu/rI2afK2CuREWqavQDxB7+kzkQ" \
"nbTg9Qx+dk0lXpKEK4/z7uVNd2gLkUIJeiiV9hjMxuHH2O85BLMSt9H2VU6KhR9S" \
"esYSxg/RAoGBAPhavXBGYjsJ46cecBKWWARbob6B6kG3cz89DV6hfBg9HqzQj8mU" \
"JU0erqwc4e345345qb46qb36q5d6tq34636q3ecdrtccrttvtvrtvettvtrvvti7" \
"Kz0v8rseoWwGVgBigqGCkOL2P0avi9fQPvVct/8pq2oy+h30BInzPbcDAoGBANB0" \
"qynNgIkAHxAttAnwJTQJllAaO5x40C1LEbtQckEJoQRr4BGcAqkvjKl5Ftu2jocX" \
"RT5Z+KSszGAt+WJY4Qy4E3n9k7RYxQfhwjLXmEz1ENSMxmO7fsQGGlu4GVbsaf+r" \
"3VO6uVQ1L0yz9KHgWz+mKzPG5yIM5vx6IT7KQW8JAoGBAJnTGiLAdXc72NVZ9PCO" \
"TlXkq3nj3cR2a9tvZSiHvOUGdklzpJumNrRPBE8ezr3Dehf8tAM1bD3xT7v8x1zI" \
"werwerwefqwederctrvrtetervyyryyyrt4t34545qwetc'2334'p4XsH6UYdfVl" \
"9pjipNRWauWMTX7f9S+8iS0hAoGBAMQxqo9TnXBULuhZO6RG450QkOqfZg+lHboj" \
"d3LnCkHwQB4bMe8g+NgnqqovD7aHIao/2qoOoBjNkiXL33YS1O3Vqm8cnRIWoosC" \
"jnavt+ZmmQqT3H0tkOgKHnDI2wCWzkUWit8tVRTOYdA9ZzecJAXJ7ctzn0LLBfQH" \
"NpcUYXWRAoGAYc2PVKKO6vrRRpn/ebh4Hx2bpNSGHk/kzA8LjXJfTeJU1NvAqiDM" \
"2BlzJkLPvGfgYTLeMu9qUXvmEv0tx+AzeKhZTBVgIQH9RiAMMtijoxk06yhiLPAZ" \
"erwerwerwrwerrrwerwerqwrwerwrwerwerqwerwrwrwerwerqwerwr=";
//-----END RSA PRIVATE KEY-----

 static const String caPemCrt = \
//-----BEGIN CERTIFICATE-----
"8ne65n67n8e567n8e5nt6netynet6ns568s6n8568ns568ns568ns568ns568nn8" \
"ADA5MQswCQYrtvrtvervtertqwerverybyujnukntyqayq56tybbybQDExBBbWF6" \
"b24gUm9vdCBDQSAxMB4XDTE1MDUyNjAwMDAwMFoXDTM4MDExNzAwMDAwMFowOTEL" \
"MAkGA1UEBhMCVVMxDzANBgNVBAoTBkFtYXpvbjEZMBcGA1UEAxMQQW1hem9uIFJv" \
"b3QgQ0EgMetrytytybtyvbtywbyyqb56qtrghtharg5jyjahqrEBALJ4gHHKeNXj" \
"ca9HgFB0fW7Y14h29Jlo91ghYPl0hAEvrAIthtOgQ3pOsqTQNroBvo3bSMgHFzZM" \
"9Os6nst68ns6n8s56n8s56n8s56n8s56n8s56n856n8568568n6n8s56mzU5L/qw" \
"IFAGbHrQgLKm+a/sRxmPUDgH3KKHOVj4utWp+UhnMJbulHheb4mjUcAwhmahRWa6" \
"VOujw5H5SNz/0egwLX0tdHA114gk957EWW67c4cX8jJGKLhD+rcdqsq08p8kDi1L" \
"93FcXmn/6pUCyziKrlA4b9v7LWIbxcceVOF34GfID5yHI9Y/QCB/IIDEgEw+OyQm" \
"jgSubJrIqg0CAwEAAaNCMEAwDwYDVR0TAQH/BAUwAwEB/zAOBgNVHQ8BAf8EBAMC" \
"AYYwHQYDVR0OBBYEFIQYzIU07LwMlJQuCFmcx7IQTgoIMA0GCSqGSIb3DQEBCwUA" \
"A4IBAQwerberyebyrbwe56bw45rtrtrtev4t4tqwv45656wkjUu0yKGX9rbxenDI" \
"U5PMCCjjmCXPI6T53iHTfIUJrU6adTrCC2qJeHZERxhlbI1Bjjt/msv0tadQ1wUs" \
"N+gDS63pYaACbvXy8MWy7Vu33PqUXHeeE6V/Uq2V8viTO96LXFvKWlJbYK8U90vv" \
"o/ufQJVtertervtertvertert4vrtbjycdFyQzR1bldZwgJcJmApzyMZFo6IQ6XU" \
"5M34v4tv34tq34t4vaertvt4vq34t45t4t4ttb56yn6un67hwLnoQdeXeGADbkpy" \
"rqXRfboQnoZsG4q5WTP468SQvvG5";
//-----END CERTIFICATE-----

#endif
