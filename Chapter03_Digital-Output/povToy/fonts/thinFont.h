// A font alphabet  


const uint8_t thinFont[95][5] = {
	//     -- ASCII 32
{ 0b00000000,
  0b00000000,
  0b00000000,
  0b00000000,
  0b00000000,
  },
	//  !  -- ASCII 33
{ 0b00000000,
  0b00000000,
  0b11111011,
  0b00000000,
  0b00000000,
  },
	//  "  -- ASCII 34
{ 0b00000000,
  0b11000000,
  0b00000000,
  0b11000000,
  0b00000000,
  },
	//  #  -- ASCII 35
{ 0b00100100,
  0b11111111,
  0b00100100,
  0b11111111,
  0b00100100,
  },
	//  $  -- ASCII 36
{ 0b00100110,
  0b01001001,
  0b11111111,
  0b01001001,
  0b00110010,
  },
	//  %  -- ASCII 37
{ 0b11000101,
  0b00110010,
  0b01001100,
  0b10100011,
  0b01000000,
  },
	//  &  -- ASCII 38
{ 0b00001001,
  0b01100110,
  0b10011001,
  0b01101001,
  0b00000110,
  },
	//  '  -- ASCII 39
{ 0b00000000,
  0b00000000,
  0b11000000,
  0b00000000,
  0b00000000,
  },
	//  (  -- ASCII 40
{ 0b00000000,
  0b10000001,
  0b01000010,
  0b00111100,
  0b00000000,
  },
	//  )  -- ASCII 41
{ 0b00000000,
  0b00111100,
  0b01000010,
  0b10000001,
  0b00000000,
  },
	//  *  -- ASCII 42
{ 0b00001000,
  0b00101010,
  0b00011100,
  0b00101010,
  0b00001000,
  },
	//  +  -- ASCII 43
{ 0b00001000,
  0b00001000,
  0b00111110,
  0b00001000,
  0b00001000,
  },
	//  ,  -- ASCII 44
{ 0b00000000,
  0b00000000,
  0b00000011,
  0b00000000,
  0b00000000,
  },
	//  -  -- ASCII 45
{ 0b00001000,
  0b00001000,
  0b00001000,
  0b00001000,
  0b00001000,
  },
	//  .  -- ASCII 46
{ 0b00000000,
  0b00000011,
  0b00000011,
  0b00000000,
  0b00000000,
  },
	//  /  -- ASCII 47
{ 0b11000000,
  0b00110000,
  0b00001100,
  0b00000011,
  0b00000000,
  },
	//  0  -- ASCII 48
{ 0b01111110,
  0b10100001,
  0b10010001,
  0b10001001,
  0b01111110,
  },
	//  1  -- ASCII 49
{ 0b00000000,
  0b00000001,
  0b11111111,
  0b01000001,
  0b00000000,
  },
	//  2  -- ASCII 50
{ 0b01100001,
  0b10010001,
  0b10001001,
  0b10000101,
  0b01100011,
  },
	//  3  -- ASCII 51
{ 0b01101110,
  0b10010001,
  0b10010001,
  0b10000001,
  0b01000010,
  },
	//  4  -- ASCII 52
{ 0b11111111,
  0b01000100,
  0b00100100,
  0b00010100,
  0b00001100,
  },
	//  5  -- ASCII 53
{ 0b10001110,
  0b10010001,
  0b10010001,
  0b10010001,
  0b11110010,
  },
	//  6  -- ASCII 54
{ 0b00001110,
  0b10010001,
  0b10010001,
  0b10010001,
  0b01111110,
  },
	//  7  -- ASCII 55
{ 0b11100000,
  0b10011000,
  0b10000111,
  0b10000000,
  0b10000000,
  },
	//  8  -- ASCII 56
{ 0b01101110,
  0b10010001,
  0b10010001,
  0b10010001,
  0b01101110,
  },
	//  9  -- ASCII 57
{ 0b01111110,
  0b10001001,
  0b10001001,
  0b10001001,
  0b01110000,
  },
	//  :  -- ASCII 58
{ 0b00000000,
  0b00000000,
  0b00110011,
  0b00000000,
  0b00000000,
  },
	//  ;  -- ASCII 59
{ 0b00000000,
  0b00010100,
  0b00000010,
  0b00000000,
  0b00000000,
  },
	//  <  -- ASCII 60
{ 0b01000001,
  0b00100010,
  0b00010100,
  0b00001000,
  0b00000000,
  },
	//  =  -- ASCII 61
{ 0b00100100,
  0b00100100,
  0b00100100,
  0b00100100,
  0b00100100,
  },
	//  >  -- ASCII 62
{ 0b00001000,
  0b00010100,
  0b00100010,
  0b01000001,
  0b00000000,
  },
	//  ?  -- ASCII 63
{ 0b01000000,
  0b10100000,
  0b10011101,
  0b10000000,
  0b01000000,
  },
	//  @  -- ASCII 64
{ 0b01111101,
  0b10100101,
  0b10011001,
  0b10000001,
  0b01111110,
  },
	//  A  -- ASCII 65
{ 0b01111111,
  0b10001000,
  0b10001000,
  0b10001000,
  0b01111111,
  },
	//  B  -- ASCII 66
{ 0b01101110,
  0b10010001,
  0b10010001,
  0b10010001,
  0b11111111,
  },
	//  C  -- ASCII 67
{ 0b01000010,
  0b10000001,
  0b10000001,
  0b10000001,
  0b01111110,
  },
	//  D  -- ASCII 68
{ 0b00111100,
  0b01000010,
  0b10000001,
  0b10000001,
  0b11111111,
  },
	//  E  -- ASCII 69
{ 0b10000001,
  0b10010001,
  0b10010001,
  0b10010001,
  0b11111111,
  },
	//  F  -- ASCII 70
{ 0b10000000,
  0b10010000,
  0b10010000,
  0b10010000,
  0b11111111,
  },
	//  G  -- ASCII 71
{ 0b01001110,
  0b10001001,
  0b10001001,
  0b10000001,
  0b01111110,
  },
	//  H  -- ASCII 72
{ 0b11111111,
  0b00010000,
  0b00010000,
  0b00010000,
  0b11111111,
  },
	//  I  -- ASCII 73
{ 0b00000000,
  0b10000001,
  0b11111111,
  0b10000001,
  0b00000000,
  },
	//  J  -- ASCII 74
{ 0b10000000,
  0b11111110,
  0b10000001,
  0b00000001,
  0b00000110,
  },
	//  K  -- ASCII 75
{ 0b10000001,
  0b01000010,
  0b00100100,
  0b00011000,
  0b11111111,
  },
	//  L  -- ASCII 76
{ 0b00000001,
  0b00000001,
  0b00000001,
  0b00000001,
  0b11111111,
  },
	//  M  -- ASCII 77
{ 0b11111111,
  0b01000000,
  0b00100000,
  0b01000000,
  0b11111111,
  },
	//  N  -- ASCII 78
{ 0b11111111,
  0b00001000,
  0b00010000,
  0b00100000,
  0b11111111,
  },
	//  O  -- ASCII 79
{ 0b01111110,
  0b10000001,
  0b10000001,
  0b10000001,
  0b01111110,
  },
	//  P  -- ASCII 80
{ 0b01110000,
  0b10001000,
  0b10001000,
  0b10001000,
  0b11111111,
  },
	//  Q  -- ASCII 81
{ 0b01111110,
  0b10000001,
  0b10000011,
  0b10000001,
  0b01111110,
  },
	//  R  -- ASCII 82
{ 0b01110001,
  0b10001010,
  0b10001100,
  0b10001000,
  0b11111111,
  },
	//  S  -- ASCII 83
{ 0b01001110,
  0b10010001,
  0b10010001,
  0b10010001,
  0b01100010,
  },
	//  T  -- ASCII 84
{ 0b10000000,
  0b10000000,
  0b11111111,
  0b10000000,
  0b10000000,
  },
	//  U  -- ASCII 85
{ 0b11111110,
  0b00000001,
  0b00000001,
  0b00000001,
  0b11111110,
  },
	//  V  -- ASCII 86
{ 0b11100000,
  0b00011100,
  0b00000011,
  0b00011100,
  0b11100000,
  },
	//  W  -- ASCII 87
{ 0b11111111,
  0b00000010,
  0b00000100,
  0b00000010,
  0b11111111,
  },
	//  X  -- ASCII 88
{ 0b11000011,
  0b00100100,
  0b00011000,
  0b00100100,
  0b11000011,
  },
	//  Y  -- ASCII 89
{ 0b11000000,
  0b00110000,
  0b00001111,
  0b00110000,
  0b11000000,
  },
	//  Z  -- ASCII 90
{ 0b11000001,
  0b10100001,
  0b10010001,
  0b10001001,
  0b10000111,
  },
	//  [  -- ASCII 91
{ 0b00000000,
  0b10000001,
  0b10000001,
  0b11111111,
  0b00000000,
  },
	//  \  -- ASCII 92
{ 0b00000011,
  0b00001100,
  0b00110000,
  0b11000000,
  0b00000000,
  },
	//  ]  -- ASCII 93
{ 0b00000000,
  0b11111111,
  0b10000001,
  0b10000001,
  0b00000000,
  },
	//  ^  -- ASCII 94
{ 0b01000000,
  0b10000000,
  0b00000000,
  0b10000000,
  0b01000000,
  },
	//  _  -- ASCII 95
{ 0b00000000,
  0b00000000,
  0b00000000,
  0b00000000,
  0b00000000,
  },
	//  `  -- ASCII 96
{ 0b00000000,
  0b00000000,
  0b00000000,
  0b00000000,
  0b00000000,
  },
	//  a  -- ASCII 97
{ 0b00011111,
  0b00101001,
  0b00101001,
  0b00101001,
  0b00000110,
  },
	//  b  -- ASCII 98
{ 0b00011110,
  0b00100001,
  0b00100001,
  0b00100001,
  0b11111111,
  },
	//  c  -- ASCII 99
{ 0b00010010,
  0b00100001,
  0b00100001,
  0b00100001,
  0b00011110,
  },
	//  d  -- ASCII 100
{ 0b11111111,
  0b00100001,
  0b00100001,
  0b00100001,
  0b00011110,
  },
	//  e  -- ASCII 101
{ 0b00011010,
  0b00101001,
  0b00101001,
  0b00101001,
  0b00011110,
  },
	//  f  -- ASCII 102
{ 0b10000000,
  0b10100000,
  0b01111111,
  0b00100000,
  0b00000000,
  },
	//  g  -- ASCII 103
{ 0b00111111,
  0b00100001,
  0b00100001,
  0b00100001,
  0b00011110,
  },
	//  h  -- ASCII 104
{ 0b00011111,
  0b00100000,
  0b00100000,
  0b00100000,
  0b11111111,
  },
	//  i  -- ASCII 105
{ 0b00000000,
  0b00000001,
  0b10111111,
  0b00100001,
  0b00000000,
  },
	//  j  -- ASCII 106
{ 0b10111111,
  0b00100000,
  0b00000000,
  0b00000000,
  0b00000000,
  },
	//  k  -- ASCII 107
{ 0b00100001,
  0b00010010,
  0b00001100,
  0b11111111,
  0b00000000,
  },
	//  l  -- ASCII 108
{ 0b00000000,
  0b00000001,
  0b11111111,
  0b10000001,
  0b00000000,
  },
	//  m  -- ASCII 109
{ 0b00011111,
  0b00100000,
  0b00111111,
  0b00100000,
  0b00111111,
  },
	//  n  -- ASCII 110
{ 0b00011111,
  0b00100000,
  0b00100000,
  0b00100000,
  0b00111111,
  },
	//  o  -- ASCII 111
{ 0b00011110,
  0b00100001,
  0b00100001,
  0b00100001,
  0b00011110,
  },
	//  p  -- ASCII 112
{ 0b00011110,
  0b00100001,
  0b00100001,
  0b00100001,
  0b00111111,
  },
	//  q  -- ASCII 113
{ 0b00111111,
  0b00100001,
  0b00100001,
  0b00100001,
  0b00011110,
  },
	//  r  -- ASCII 114
{ 0b00100000,
  0b00100000,
  0b00100000,
  0b00010000,
  0b00111111,
  },
	//  s  -- ASCII 115
{ 0b00100110,
  0b00101001,
  0b00101001,
  0b00101001,
  0b00010001,
  },
	//  t  -- ASCII 116
{ 0b00000001,
  0b00100001,
  0b11111110,
  0b00100000,
  0b00000000,
  },
	//  u  -- ASCII 117
{ 0b00111111,
  0b00000001,
  0b00000001,
  0b00000001,
  0b00111110,
  },
	//  v  -- ASCII 118
{ 0b00110000,
  0b00001100,
  0b00000011,
  0b00001100,
  0b00110000,
  },
	//  w  -- ASCII 119
{ 0b00111110,
  0b00000001,
  0b00001111,
  0b00000001,
  0b00111110,
  },
	//  x  -- ASCII 120
{ 0b00100001,
  0b00010010,
  0b00001100,
  0b00010010,
  0b00100001,
  },
	//  y  -- ASCII 121
{ 0b00111111,
  0b00000001,
  0b00000001,
  0b00000001,
  0b00111110,
  },
	//  z  -- ASCII 122
{ 0b00100001,
  0b00110001,
  0b00101001,
  0b00100101,
  0b00100011,
  },
	//  {  -- ASCII 123
{ 0b10000001,
  0b10000001,
  0b01101110,
  0b00010000,
  0b00000000,
  },
	//  |  -- ASCII 124
{ 0b00000000,
  0b00000000,
  0b11111111,
  0b00000000,
  0b00000000,
  },
	//  }  -- ASCII 125
{ 0b00010000,
  0b01101110,
  0b10000001,
  0b10000001,
  0b00000000,
  },
	//  ~  -- ASCII 126
{ 0b10000000,
  0b01000000,
  0b10000000,
  0b00000000,
  0b11000000,
  },
};
