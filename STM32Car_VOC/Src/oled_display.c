
#include "oled_display.h"

//const unsigned char logBmp[] = {\
//0x00,0x00,0x1C,0x3C,0x7E,0xFE,0xFE,0xEE,0xDC,0x9C,0x3C,0x38,0x78,0x70,0xF0,0xE0,
//0xE0,0xC0,0xC0,0x80,0x00,0x00,0x00,0x06,0x06,0x06,0x0E,0x0E,0x0E,0x0E,0x1E,0x1C,
//0x1C,0x3C,0x38,0x78,0xF0,0xE0,0xE0,0xC0,0xE0,0xF0,0xF8,0x7C,0xFC,0xFC,0xF0,0x00,
//0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x03,0x07,0x0F,0x1F,0x3E,0x7C,0xF8,0xF0,0xE0,
//0xC1,0x81,0x03,0x07,0x07,0x0F,0x1E,0x1D,0x3D,0x7B,0xF7,0xE7,0xE7,0xCE,0x8E,0xDE,
//0xFC,0xF8,0xF8,0x7C,0x3E,0x1F,0x0F,0x07,0xC3,0xF1,0xFC,0xFF,0xFF,0xC7,0x00,0x00,
//0x80,0x00,0x00,0x00,0xC0,0x80,0x00,0x00,0x80,0x80,0x80,0xC0,0xE0,0xF8,0x7D,0x3F,
//0x1F,0x0F,0x07,0x00,0xC0,0xE0,0xF0,0x70,0x70,0xF0,0xE0,0xC1,0x03,0x07,0x07,0x07,
//0x03,0x01,0x00,0xC0,0xE0,0xF8,0xFC,0xFF,0x0F,0xFF,0xF9,0x83,0x3F,0xFF,0xFE,0x00,
//0x1F,0x7F,0xFC,0xE0,0x83,0x1F,0xFE,0xF0,0xFF,0x3F,0x1F,0x07,0x03,0x00,0x80,0xC0,
//0xE0,0xE0,0xE0,0xC0,0x83,0x07,0x0F,0x0E,0x0E,0x0F,0x07,0x03,0x00,0xE0,0xF0,0xF8,
//0xFC,0xBE,0x1F,0x07,0x03,0x01,0x01,0x01,0x00,0x00,0x03,0x0F,0x00,0x01,0x01,0x00,
//0x00,0x00,0xE3,0xFF,0xFF,0x3F,0x8F,0xC3,0xE0,0xF0,0xF8,0x7C,0x3E,0x1F,0x1F,0x3F,
//0x7B,0x71,0x73,0xE7,0xE7,0xCF,0xDE,0x9C,0x38,0x78,0xF0,0xE0,0xE0,0xC0,0x81,0x83,
//0x07,0x0F,0x1F,0x3E,0x7C,0xF8,0xF0,0xE0,0xC0,0x80,0x00,0x00,0x00,0x00,0x00,0x00,
//0x00,0x0F,0x3F,0x3F,0x3E,0x1F,0x0F,0x07,0x03,0x07,0x07,0x0F,0x1E,0x1C,0x3C,0x38,
//0x38,0x78,0x70,0x70,0x70,0x70,0x60,0x60,0x60,0x00,0x00,0x00,0x01,0x03,0x03,0x07,
//0x07,0x0F,0x0E,0x1E,0x1C,0x3C,0x39,0x3B,0x77,0x7F,0x7F,0x7E,0x3C,0x38,0x00,0x00/*"C:\Users\Awesome\Desktop\four rounded blades_??.bmp",0*/
///* (48 X 48 )*/
//};

/*  */
const unsigned char consolas_font16_16[][32] = {

{0x00,0x80,0xC0,0xE0,0x30,0x10,0x10,0x10,0x10,0x90,0x90,0xB0,0xE0,0xC0,0x80,0x00,
0x00,0x03,0x0F,0x0F,0x1A,0x12,0x13,0x11,0x11,0x11,0x10,0x18,0x0F,0x07,0x03,0x00},/*"0",0*/
/* (16 X 16 , Consolas )*/

{0x00,0x00,0x20,0x20,0x20,0x20,0x30,0xF0,0xF0,0xF0,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x10,0x10,0x10,0x10,0x10,0x1F,0x1F,0x1F,0x10,0x10,0x10,0x10,0x00,0x00},/*"1",1*/
/* (16 X 16 , Consolas )*/

{0x00,0x00,0x00,0x20,0x10,0x10,0x10,0x10,0x10,0x10,0xB0,0xE0,0xE0,0x00,0x00,0x00,
0x00,0x00,0x10,0x18,0x18,0x1C,0x14,0x16,0x12,0x13,0x11,0x11,0x10,0x10,0x00,0x00},/*"2",2*/
/* (16 X 16 , Consolas )*/

{0x00,0x00,0x00,0x10,0x10,0x10,0x10,0x10,0x10,0x90,0xF0,0xE0,0x60,0x00,0x00,0x00,
0x00,0x00,0x10,0x10,0x10,0x11,0x11,0x11,0x11,0x11,0x19,0x0E,0x0E,0x06,0x00,0x00},/*"3",3*/
/* (16 X 16 , Consolas )*/

{0x00,0x00,0x00,0x00,0x80,0xC0,0x40,0x60,0x30,0x10,0xF0,0xF0,0x00,0x00,0x00,0x00,
0x00,0x06,0x06,0x07,0x05,0x04,0x04,0x04,0x04,0x04,0x1F,0x1F,0x04,0x04,0x04,0x00},/*"4",4*/
/* (16 X 16 , Consolas )*/

{0x00,0x00,0x00,0xF0,0xF0,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x00,0x00,0x00,
0x00,0x00,0x00,0x11,0x11,0x11,0x11,0x11,0x11,0x11,0x19,0x0F,0x0F,0x06,0x00,0x00},/*"5",5*/
/* (16 X 16 , Consolas )*/

{0x00,0x00,0x80,0xC0,0x60,0x20,0x30,0x10,0x90,0x10,0x10,0x10,0x10,0x00,0x00,0x00,
0x00,0x00,0x07,0x0F,0x1D,0x11,0x11,0x11,0x10,0x11,0x11,0x19,0x0F,0x0F,0x00,0x00},/*"6",6*/
/* (16 X 16 , Consolas )*/

{0x00,0x00,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x90,0xD0,0xF0,0x70,0x30,0x00,0x00,
0x00,0x00,0x00,0x00,0x10,0x18,0x1C,0x0E,0x07,0x03,0x01,0x00,0x00,0x00,0x00,0x00},/*"7",7*/
/* (16 X 16 , Consolas )*/

{0x00,0x00,0x60,0xE0,0xF0,0x90,0x90,0x10,0x10,0x90,0x90,0xF0,0xE0,0x60,0x00,0x00,
0x00,0x00,0x0C,0x1E,0x1A,0x13,0x11,0x11,0x11,0x11,0x13,0x1A,0x0E,0x0C,0x00,0x00},/*"8",8*/
/* (16 X 16 , Consolas )*/

{0x00,0x40,0xE0,0xE0,0x30,0x10,0x10,0x10,0x10,0x10,0x30,0x70,0xE0,0xC0,0x00,0x00,
0x00,0x00,0x01,0x11,0x11,0x11,0x12,0x12,0x12,0x19,0x09,0x0D,0x07,0x03,0x00,0x00},/*"9",9*/
/* (16 X 16 , Consolas )*/

{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x18,0x18,0x18,0x18,0x00,0x00,0x00,0x00,0x00,0x00},/*".",10*/
/* (16 X 16 , Consolas )*/
};

/* 24*32 字体 0123456789 */


const unsigned char logBmp[] = {
0x00,0xC6,0xE6,0xF6,0xFE,0x7E,0x7E,0x76,0xF6,0xF6,0xE6,0xE0,0xE0,0xF0,0x70,0x70,
0x70,0x38,0x38,0x38,0x38,0x38,0x38,0x38,0x38,0x38,0x38,0x38,0x38,0x38,0x38,0x70,
0x70,0x70,0xF0,0xE0,0xE0,0xE6,0xF6,0xF6,0x76,0x7E,0x7E,0xFE,0xF6,0xE6,0xC6,0x00,
0x00,0x9F,0xBF,0xBF,0xF8,0xF0,0xF0,0xF8,0xF8,0xBD,0xBD,0x3C,0x38,0x38,0x70,0x70,
0x70,0xF0,0xE0,0xC2,0x87,0x87,0x07,0x07,0x07,0x07,0x87,0x87,0xC2,0xE0,0xF0,0x70,
0x70,0x70,0x38,0x38,0x3C,0xBD,0xBD,0xF8,0xF8,0xF0,0xF0,0xF8,0xBF,0xBF,0x9F,0x00,
0x00,0x01,0x01,0x01,0x03,0x07,0x07,0x01,0x01,0x01,0x01,0x00,0x80,0xC0,0xC0,0xE0,
0xE0,0x70,0x71,0x73,0x3B,0x3B,0x3B,0x3F,0x3F,0x3B,0x3B,0x3B,0x73,0x71,0x70,0xE0,
0xE0,0xC0,0xC0,0x80,0x00,0x01,0x01,0x01,0x01,0x07,0x07,0x03,0x01,0x01,0x01,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0xC0,0xF0,0xF8,0x7E,0x1F,0x0F,0x07,0xC3,0xC1,0xC1,
0xC0,0xF8,0xF8,0xF8,0x38,0x38,0x38,0x38,0x38,0x38,0x38,0x38,0xF8,0xF8,0xF8,0xC0,
0xC1,0xC1,0xC3,0x07,0x0F,0x1F,0x7E,0xF8,0xF0,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x60,0xFF,0xFF,0xEF,0xE1,0xE0,0xE0,0xE0,0xE0,0xFF,0xFF,0x01,
0x01,0x01,0x01,0xF8,0xFC,0xBC,0x1E,0x0E,0x0E,0x1E,0xBC,0xFC,0xF8,0x01,0x01,0x01,
0x01,0xFF,0xFF,0xE0,0xE0,0xE0,0xE0,0xE1,0xEF,0xFF,0xFF,0x60,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x7F,0x7F,0x60,
0x60,0x60,0x60,0x63,0x67,0x67,0x6F,0x6E,0x6E,0x6F,0x67,0x67,0x63,0x60,0x60,0x60,
0x60,0x7F,0x7F,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00/*"C:\Users\Awesome\Desktop\camera_??.bmp",0*/
/* (48 X 48 )*/
};
//const unsigned char logBmp[] = {
//0x00,0xCE,0xEE,0xEE,0xFE,0x7E,0x7E,0xEE,0xEE,0xEE,0xC6,0xE0,0xE0,0xE0,0xE0,0x70,
//0x70,0x70,0x70,0x30,0x38,0x38,0x38,0x70,0x70,0x38,0x38,0x38,0x30,0x70,0x70,0x70,
//0x70,0xE0,0xE0,0xE0,0xE0,0xC6,0xEE,0xEE,0xEE,0x7E,0x7E,0xFE,0xEE,0xEE,0xCE,0x00,
//0x00,0x9F,0xBF,0xFF,0xF8,0xF0,0xF0,0xF0,0xF8,0xF9,0xB9,0x39,0x38,0x70,0x70,0x70,
//0x70,0xE0,0xE0,0xC4,0x8E,0x0E,0x0E,0x0E,0x0E,0x0E,0x0E,0x8E,0xC4,0xE0,0xE0,0x70,
//0x70,0x70,0x70,0x38,0x39,0xB9,0xF9,0xF8,0xF0,0xF0,0xF0,0xF8,0xFF,0xBF,0x9F,0x00,
//0x00,0x03,0x03,0x03,0x07,0x0F,0x07,0x03,0x03,0x03,0x01,0x80,0x80,0xC0,0xC0,0xE0,
//0xE0,0xE1,0xE3,0x73,0x73,0x77,0x77,0x77,0x77,0x77,0x77,0x73,0x73,0xE3,0xE1,0xE0,
//0xE0,0xC0,0xC0,0x80,0x80,0x01,0x03,0x03,0x03,0x07,0x0F,0x07,0x03,0x03,0x03,0x00,
//0x00,0x00,0x00,0x00,0x00,0x00,0x38,0x7C,0xFE,0xEF,0xCF,0xC7,0xE3,0xF3,0xF1,0x79,
//0x38,0xB8,0x9C,0x9C,0xDC,0xDC,0xDC,0xCC,0xCC,0xDC,0xDC,0xDC,0x9C,0x9C,0xB8,0x38,
//0x79,0xF1,0xF3,0xE3,0xC7,0xCF,0xEF,0xFE,0x7C,0x38,0x00,0x00,0x00,0x00,0x00,0x00,
//0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x03,0x03,0x01,0x3C,0x7E,0xFF,
//0xF7,0xE7,0xE3,0xF3,0x71,0xF1,0xF1,0xB1,0xB1,0xF1,0xF1,0x71,0xF3,0xE3,0xE7,0xF7,
//0xFF,0x7E,0x3C,0x09,0x03,0x03,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
//0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
//0x01,0x01,0x01,0x06,0x0F,0x1F,0x3F,0x7B,0x7B,0x3F,0x1F,0x0F,0x06,0x01,0x01,0x01,
//0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00/*"C:\Users\Awesome\Desktop\wireless drone_??.bmp",0*/
///* (48 X 48 )*/
//};

const unsigned char fuhao_8_16[][32] =
{

{0x00,0x00,0x0C,0x12,0x12,0x0C,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},/*上方句号,0*/
/* (16 X 16 , Consolas )*/

{0x06,0x09,0x09,0xE6,0xF8,0x0C,0x04,0x02,0x02,0x02,0x02,0x02,0x04,0x1E,0x00,0x00,
0x00,0x00,0x00,0x07,0x1F,0x30,0x20,0x40,0x40,0x40,0x40,0x40,0x20,0x10,0x00,0x00},/*摄氏度符号,1*/
/* (16 X 16 , Consolas )*/

{0x00,0x00,0x18,0x24,0x24,0x18,0x02,0xFE,0x82,0x82,0x82,0xE2,0x06,0x1E,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x20,0x3F,0x20,0x00,0x00,0x03,0x00,0x00,0x00,0x00},/*华氏度符号,2*/
/* (16 X 16 , Consolas )*/

{0xC0,0x20,0x10,0x10,0x20,0x70,0x00,0x10,0xE0,0x10,0x10,0xE0,0x10,0x10,0xE0,0x00,
0x03,0x04,0x08,0x08,0x08,0x04,0x02,0x00,0x0F,0x00,0x00,0x0F,0x00,0x00,0x0F,0x00},/*cm,3*/
/* (16 X 16 , Consolas )*/

{0x00,0xFF,0x80,0x40,0x20,0x10,0x00,0x10,0xE0,0x10,0x10,0xE0,0x10,0x10,0xE0,0x00,
0x00,0x0F,0x00,0x01,0x02,0x04,0x08,0x00,0x0F,0x00,0x00,0x0F,0x00,0x00,0x0F,0x00},/*km,4*/
/* (16 X 16 , Consolas )*/

};
const unsigned char fuhao_6_8[][6] =
{
{0x1F,0x1B,0x11,0x1B,0x1F,0x00},/*"?????",0*/
/* (6 X 8 )*/

{0x00,0x02,0x7C,0x42,0x42,0x00},/*"?",1*/
/* (6 X 8 , Consolas )*/

};

const unsigned char north_image[] =
{
0x08,0x0C,0x7E,0x4F,0x4F,0x7E,
0x0C,0x08,0x7E,0x7E,0x0C,0x18,
0x30,0x7E,0x7E,0x00   //16*8
};

const unsigned char chinese16_16[][32] = 
{
	/* 空气 chinese[0][]*/
	{0x10,0x0C,0x44,0x24,0x14,0x04,0x05,0x06,0x04,0x04,0x14,0x24,0x44,0x14,0x0C,0x00,
	 0x00,0x40,0x40,0x41,0x41,0x41,0x41,0x7F,0x41,0x41,0x41,0x41,0x40,0x40,0x00,0x00},/*"?",0*/
	/* (16 X 16 , ??? )*/

	{0x20,0x10,0x4C,0x47,0x54,0x54,0x54,0x54,0x54,0x54,0x54,0xD4,0x04,0x04,0x00,0x00,
	 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x0F,0x30,0x40,0xF0,0x00},/*"?",1*/
	/* (16 X 16 , ??? )*/
	
	/* 很好 chinese[2][]*/
	{0x00,0x10,0x88,0xC4,0x33,0x00,0xFE,0x92,0x92,0x92,0x92,0x92,0xFE,0x00,0x00,0x00,
	 0x02,0x01,0x00,0xFF,0x00,0x00,0xFF,0x40,0x20,0x03,0x0C,0x14,0x22,0x41,0x40,0x00},/*"?",0*/
	/* (16 X 16 , ??? )*/

	{0x10,0x10,0xF0,0x1F,0x10,0xF0,0x00,0x80,0x82,0x82,0xE2,0x92,0x8A,0x86,0x80,0x00,
	 0x40,0x22,0x15,0x08,0x16,0x61,0x00,0x00,0x40,0x80,0x7F,0x00,0x00,0x00,0x00,0x00},/*"?",1*/
	/* (16 X 16 , ??? )*/
	
	/* 良好 chinese[4][]*/
	{0x00,0x00,0xFC,0x24,0x24,0x24,0x25,0x26,0x24,0x24,0x24,0xFC,0x00,0x00,0x00,0x00,
	 0x00,0x00,0xFF,0x81,0x41,0x21,0x03,0x05,0x09,0x11,0x29,0x45,0x42,0x80,0x80,0x00},/*"?",0*/
	/* (16 X 16 , ??? )*/

	{0x10,0x10,0xF0,0x1F,0x10,0xF0,0x00,0x80,0x82,0x82,0xE2,0x92,0x8A,0x86,0x80,0x00,
	 0x40,0x22,0x15,0x08,0x16,0x61,0x00,0x00,0x40,0x80,0x7F,0x00,0x00,0x00,0x00,0x00},/*"?",1*/
	/* (16 X 16 , ??? )*/

	/* 较差 chinese[6][]*/
	{0xC8,0xB8,0x8F,0xE8,0x88,0x88,0x80,0x48,0x28,0x09,0x0E,0x08,0x28,0x48,0x88,0x00,
	 0x08,0x18,0x08,0xFF,0x04,0x04,0x80,0x80,0x43,0x2C,0x10,0x2C,0x43,0x80,0x80,0x00},/*"?",0*/
	/* (16 X 16 , ??? )*/

	{0x00,0x04,0x24,0x24,0x25,0x26,0xE4,0x3C,0x24,0x26,0x25,0x24,0x24,0x04,0x00,0x00,
	 0x41,0x21,0x11,0x89,0x85,0x8B,0x89,0x89,0xF9,0x89,0x89,0x89,0x89,0x81,0x01,0x00},/*"?",1*/
	/* (16 X 16 , ??? )*/
	 
	/* 很差 chinese[8][]*/
	{0x00,0x10,0x88,0xC4,0x33,0x00,0xFE,0x92,0x92,0x92,0x92,0x92,0xFE,0x00,0x00,0x00,
	 0x02,0x01,0x00,0xFF,0x00,0x00,0xFF,0x40,0x20,0x03,0x0C,0x14,0x22,0x41,0x40,0x00},/*"?",0*/
/* (16 X 16 , ??? )*/

	{0x00,0x04,0x24,0x24,0x25,0x26,0xE4,0x3C,0x24,0x26,0x25,0x24,0x24,0x04,0x00,0x00,
	 0x41,0x21,0x11,0x89,0x85,0x8B,0x89,0x89,0xF9,0x89,0x89,0x89,0x89,0x81,0x01,0x00},/*"?",1*/
/* (16 X 16 , ??? )*/
};

const unsigned char title16_16[][32] =
{
	/* 空气质量温湿度监测设计人：欧阳蕾 */
	{0x10,0x0C,0x44,0x24,0x14,0x04,0x05,0x06,0x04,0x04,0x14,0x24,0x44,0x14,0x0C,0x00,
	 0x00,0x40,0x40,0x41,0x41,0x41,0x41,0x7F,0x41,0x41,0x41,0x41,0x40,0x40,0x00,0x00},/*"?",0*/
	/* (16 X 16 , ??? )*/

	{0x20,0x10,0x4C,0x47,0x54,0x54,0x54,0x54,0x54,0x54,0x54,0xD4,0x04,0x04,0x00,0x00,
	 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x0F,0x30,0x40,0xF0,0x00},/*"?",1*/
	/* (16 X 16 , ??? )*/

	{0x00,0x00,0xFE,0x12,0x12,0x92,0x92,0x92,0x92,0xFF,0x91,0x91,0x91,0x91,0x10,0x00,
	 0x80,0x60,0x1F,0x80,0x80,0x5F,0x40,0x20,0x10,0x0E,0x10,0x10,0x20,0x5F,0x80,0x00},/*"?",2*/
	/* (16 X 16 , ??? )*/

	{0x20,0x20,0x20,0xBE,0xAA,0xAA,0xAA,0xAA,0xAA,0xAA,0xAA,0xBE,0x20,0x20,0x20,0x00,
	 0x00,0x80,0x80,0xAF,0xAA,0xAA,0xAA,0xFF,0xAA,0xAA,0xAA,0xAF,0x80,0x80,0x00,0x00},/*"?",3*/
	/* (16 X 16 , ??? )*/

	{0x10,0x60,0x02,0x8C,0x00,0x00,0xFE,0x92,0x92,0x92,0x92,0x92,0xFE,0x00,0x00,0x00,
	 0x04,0x04,0x7E,0x01,0x40,0x7E,0x42,0x42,0x7E,0x42,0x7E,0x42,0x42,0x7E,0x40,0x00},/*"?",4*/
	/* (16 X 16 , ??? )*/

	{0x10,0x60,0x02,0x8C,0x00,0xFE,0x92,0x92,0x92,0x92,0x92,0x92,0xFE,0x00,0x00,0x00,
	 0x04,0x04,0x7E,0x01,0x44,0x48,0x50,0x7F,0x40,0x40,0x7F,0x50,0x48,0x44,0x40,0x00},/*"?",5*/
	/* (16 X 16 , ??? )*/

	{0x00,0x00,0xFC,0x24,0x24,0x24,0xFC,0x25,0x26,0x24,0xFC,0x24,0x24,0x24,0x04,0x00,
	 0x40,0x30,0x8F,0x80,0x84,0x4C,0x55,0x25,0x25,0x25,0x55,0x4C,0x80,0x80,0x80,0x00},/*"?",6*/
	/* (16 X 16 , ??? )*/

	{0x00,0x00,0x7E,0x00,0x00,0xFF,0x00,0x40,0x30,0x0F,0x04,0x14,0x64,0x04,0x00,0x00,
	 0x40,0x40,0x7E,0x42,0x42,0x7E,0x42,0x42,0x42,0x7E,0x42,0x42,0x7E,0x40,0x40,0x00},/*"?",7*/
	/* (16 X 16 , ??? )*/

	{0x10,0x60,0x02,0x8C,0x00,0xFE,0x02,0xF2,0x02,0xFE,0x00,0xF8,0x00,0xFF,0x00,0x00,
	 0x04,0x04,0x7E,0x01,0x80,0x47,0x30,0x0F,0x10,0x27,0x00,0x47,0x80,0x7F,0x00,0x00},/*"?",8*/
	/* (16 X 16 , ??? )*/

	{0x40,0x40,0x42,0xCC,0x00,0x40,0xA0,0x9E,0x82,0x82,0x82,0x9E,0xA0,0x20,0x20,0x00,
	 0x00,0x00,0x00,0x3F,0x90,0x88,0x40,0x43,0x2C,0x10,0x28,0x46,0x41,0x80,0x80,0x00},/*"?",9*/
	/* (16 X 16 , ??? )*/

	{0x40,0x40,0x42,0xCC,0x00,0x40,0x40,0x40,0x40,0xFF,0x40,0x40,0x40,0x40,0x40,0x00,
	 0x00,0x00,0x00,0x7F,0x20,0x10,0x00,0x00,0x00,0xFF,0x00,0x00,0x00,0x00,0x00,0x00},/*"?",10*/
	/* (16 X 16 , ??? )*/

	{0x00,0x00,0x00,0x00,0x00,0x00,0xC0,0x3F,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	 0x80,0x40,0x20,0x10,0x0C,0x03,0x00,0x00,0x00,0x03,0x0C,0x10,0x20,0x40,0x80,0x00},/*"?",11*/
	/* (16 X 16 , ??? )*/

	{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	 0x00,0x00,0x36,0x36,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},/*":",12*/
	/* (16 X 16 , ??? )*/

	{0x00,0xFE,0x12,0x22,0xC2,0x3A,0x02,0x40,0x30,0x0F,0xC8,0x08,0x28,0x18,0x00,0x00,
	 0x00,0x3F,0x24,0x23,0x20,0x27,0xA0,0x40,0x30,0x0E,0x01,0x0E,0x30,0x40,0x80,0x00},/*"?",13*/
	/* (16 X 16 , ??? )*/

	{0x00,0xFE,0x02,0x22,0xDA,0x06,0x00,0xFC,0x04,0x04,0x04,0x04,0x04,0xFC,0x00,0x00,
	 0x00,0xFF,0x08,0x10,0x08,0x07,0x00,0xFF,0x41,0x41,0x41,0x41,0x41,0xFF,0x00,0x00},/*"?",14*/
	/* (16 X 16 , ??? )*/

	{0x82,0x62,0x2A,0xAA,0xAF,0xAA,0x2A,0xFA,0x2A,0xAA,0xAF,0xAA,0x2A,0xA2,0x62,0x00,
	 0x00,0x00,0xF8,0xAA,0xAA,0xAA,0xA8,0xFB,0xA8,0xAA,0xAA,0xAA,0xF8,0x00,0x00,0x00},/*"?",15*/
	/* (16 X 16 , ??? )*/
};

/* 显示标题 */
void display_title(void)
{
//	OLED_ShowString(TITLE_X+32,TITLE_Y,TITLE,16);
	unsigned char i = 0;
	for(i=0; i<7; ++i)
	{
		display_chinese_font16_16(i*16,0,(unsigned char*)&title16_16[i][0]);
	}
	display_chinese_font16_16(48,2,(unsigned char*)&title16_16[7][0]);
	display_chinese_font16_16(64,2,(unsigned char*)&title16_16[8][0]);
	for(i=0; i<7; ++i)
	{
		display_chinese_font16_16(i*16,4,(unsigned char*)&title16_16[i+9][0]);
	}
	OLED_ShowString(48,6,"By Awesome",16);
}

/* 显示数据 */
void display_string_Font8_16(unsigned char x, unsigned char y, char* pc)
{
	OLED_ShowString(x,y,(unsigned char*)pc,16);
}

void display_num_font16_16_char(unsigned char x,unsigned char y,unsigned char chr)
{
	unsigned char c=0,i=0;	
	if((chr<'0'&&chr!='.')||(chr>'9'&&chr!='.')) return;
	c= chr-'0';
	if(chr=='.') c=10;

	if(x>Max_Column-1)  //超过最大列
	{
		x=0;
		y=y+2;  //y轴便宜2个点阵
	}
	OLED_Set_Pos(x,y);	
	for(i=0;i<16;i++)
		OLED_WR_Byte(consolas_font16_16[c][i],OLED_DATA);
	
	OLED_Set_Pos(x,y+1);		
	for(i=0;i<16;i++)
		OLED_WR_Byte(consolas_font16_16[c][i+16],OLED_DATA);
}

void display_chinese_font16_16(unsigned char x,unsigned char y,unsigned char* pdata)
{
	unsigned char c=0,i=0;	
	if(0==pdata) return;

	if(x>Max_Column-1)  //超过最大列
	{
		x=0;
		y=y+2;  //y轴便宜2个点阵
	}
	OLED_Set_Pos(x,y);	
	for(i=0;i<16;i++)
		OLED_WR_Byte(*(pdata+i),OLED_DATA);
	
	OLED_Set_Pos(x,y+1);		
	for(i=0;i<16;i++)
		OLED_WR_Byte(*(pdata+16+i),OLED_DATA);
}

void display_string_Font16_16(unsigned char x, unsigned char y, char* pc)
{
	unsigned char j=0;
	while (pc[j]!='\0')
	{		
		display_num_font16_16_char(x,y,pc[j]);
		x+=16;
		if(x>120)
		{
			x=0;
			y+=2;
		}
		j++;
	}
}

/* 显示符号*/
void display_fuhao_Font8_16(unsigned char x, unsigned char y, unsigned char index)
{
	unsigned char i = 0;
	
	OLED_Set_Pos(x,y);	
	for(i=0;i<16;i++)
		OLED_WR_Byte(fuhao_8_16[index][i],OLED_DATA);
		
	OLED_Set_Pos(x,y+1);		
	for(i=0;i<16;i++)
		OLED_WR_Byte(fuhao_8_16[index][i+16],OLED_DATA);
}

/* 显示符号*/
void display_fuhao_Font6_8(unsigned char x, unsigned char y, unsigned char index)
{
	unsigned char i = 0;
	
	OLED_Set_Pos(x,y);	
	for(i=0;i<6;i++)
		OLED_WR_Byte(fuhao_6_8[index][i],OLED_DATA);
}

/* 显示logo */
void display_logo(void)
{
	OLED_DrawBMP(40, 2,48+40, 48/8+2, (unsigned char*)logBmp);
}

/* 显示指北图标 */
void display_north(unsigned char x, unsigned char y)
{
	unsigned char i = 0;
	OLED_Set_Pos(x,y);	
	for(i=0;i<16;i++)
		OLED_WR_Byte(north_image[i],OLED_DATA);
}


void copy_string(char* dest,char *src,unsigned int num) 
{ 
	if(dest!=0&&src!=0)
	{ while(num--&&'\0'!=*src)
		{
			*dest = *src;
			++dest;
			++src;
		} 
	}
} 

/* 整数转换为字符串   
** value为初始值
** buff为转换后的字符缓冲区，缓冲区结束标志位'\0',从高位开始保存
** num为有效数据个数
** 数据转换成功返回1， 不成功返回0
*/
unsigned char int_to_string(int value, char* buff, unsigned int num)
{
	int i = 0;
	char *pc = 0;
	unsigned int pow1 =(unsigned int)pow_int(10, num);
	unsigned char realS = 0;  /* 第一位数据不是0的标志位，1-表示非0 */
	unsigned int temp = 0;
	
	if(0==buff)  return 0;	
	pc = buff;
	
	/* 值为0的时候，有效数据中只有一个0*/
	if(0==value||0==num) 
	{
		*pc = num_to_char(0);
		++pc;
		*pc = '\0';
	}else
	{
		/* 处理符号位，并且将负数转换为正数*/
		if(value<0)
		{
			*pc = '-';
			++pc;
			value = -value;  
		}		
		
		value %= pow1;
		
		for(i=0; i<num; ++i)
		{		
			pow1 = pow1/10;
			temp = (unsigned int)((unsigned int)value/pow1);
			if(0==realS && temp!=0)
			{				
				realS = 1;
			}
			if(1==realS)
			{
				*pc = num_to_char(temp);
				++pc;
				value %= pow1;
			}			
		}
		*pc = '\0';
		return 1;					
	}
}

/* 指定保留位数将浮点数转换为字符串   
** value为初始值
** buff为转换后的字符缓冲区，缓冲区结束标志位'\0'
** num为整数位有效数据个数
** dotNum为小数位有效数据个数
** 数据转换成功返回1， 不成功返回0
*/
unsigned char float_to_string(double value, char* buff, unsigned int num, unsigned int dotNum)
{
	int i = 0;
	char *pc = 0;
	unsigned int pow1 =0;
	unsigned char realS = 0;  /* 第一位数据不是0的标志位，1-表示非0 */
	unsigned int temp = 0;
	unsigned int intValue = 0;
	unsigned int dotValue = 0;
	double value1 = 0.0;
	
	if(0==buff) return 0;

	pc = buff;
	
	/* 指定保留小数部分和整数部分为0，返回为0 */
	if(0==num && 0==dotNum || 0.0000000==value)
	{
		*pc = num_to_char(0);
		++pc;
		if(dotNum!=0)
		{
			*pc = '.';
			++pc;
			for(i=0; i<dotNum; ++i)
			{
				*pc = '0';
				++pc;
			}
		}
		*pc = '\0';
		return 1;
	}else
	{
		value1 = value;
		/* 处理符号位 */
		if(value1<0)
		{
			*pc = '-';
			++pc;
			value1 = -value1;  
		}
		/* 整数个数为0，则为0 */
		if(0==num)
		{
			*pc = num_to_char(0);
			++pc;
		}else
		{
			intValue = (unsigned int)value1;
			
			/* 处理整数部分 */
			pow1 = pow_int(10, num);			
			intValue %= pow1;
		
			for(i=0; i<num; ++i)
			{		
				pow1 = pow1/10;
				temp = (unsigned int)((unsigned int)intValue/pow1);
				if(0==realS && temp!=0)
				{				
					realS = 1;
				}
				if(1==realS)
				{
					*pc = num_to_char(temp);
					++pc;
					intValue %= pow1;
				}			
			}
			if(0==realS)
			{
				*pc = num_to_char(0);
				++pc;
			}
			/* 结束整数部分 */				
		}
		/* 没有小数部分，直接返回字符串 */
		if(0==dotNum)
		{
			*pc = '\0';
			return 1;
		}else /* 处理小数部分 */
		{
			*pc = '.';
			++pc;
			dotValue = (unsigned int)((value1-intValue)*pow_int(10, dotNum));
			pow1 = pow_int(10, dotNum);			
			dotValue %= pow1;
		
			for(i=0; i<dotNum; ++i)
			{		
				pow1 = pow1/10;
				temp = (unsigned int)((unsigned int)dotValue/pow1);
				*pc = num_to_char(temp);
				++pc;
				dotValue %= pow1;		
			}
			*pc = '\0';
			return 1;				
		}	
	}	
}

static int pow_int(int num, int i)
{
	int r = 1;
	int j = 0;
	
	if((0==num&&0==i)||(0==i)) return 1;
	
	for(j=0; j<i; ++j)
	{
		r *= num;
	}
	return r;
}
