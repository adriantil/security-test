int64_t ProcessImage(char* arg1)

{
	void var_a0;
	void* x20 = &var_a0;
	if (*(int32_t*)__asan_option_detect_stack_use_after_return != 0)
	{
		void* x0_1 = __asan_stack_malloc_1(0x80);
		if (x0_1 != 0)
		{
			x20 = x0_1;
		}
	}
	__builtin_memcpy(x20, "\xb3\x8a\xb5A\x00\x00\x00\x00\xe01\x00\x00\x00\x00\x00\x00\xc8 \x00\x00\x00\x00\x00\x00", 0x18);
	uint64_t x22 = (x20 >> 3);
	*(int32_t*)(x22 + 0x1000000000) = 0xf1f1f1f1;
	*(int32_t*)(x22 + 0x1000000004) = 0xf2000000;
	*(int32_t*)(x22 + 0x1000000008) = 0xf2f2f2f2;
	*(int32_t*)(x22 + 0x100000000c) = 0xf3f30200;
	int64_t x1 = *(int64_t*)__stack_chk_guard;
	FILE* x0_5 = fopen(arg1, &data_3220);
	if (x0_5 == 0)
	{
		puts("\nCan't open file or file doesn'…");
		__asan_handle_no_return();
		exit(0);
		/* no return */
	}
	while (true)
	{

		puts("\n\tHeader\twidth\theight\tdata\t…");
		int32_t x1_2 = ((int32_t)*(int8_t*)((((char*)x20 + 0x24) >> 3) + 0x1000000000));
		char x2_2;
		if (x1_2 != 0)
		{
			x2_2 = 1;
		}
		else
		{
			x2_2 = 0;
		}
		char x1_3;
		if (((int32_t)((((char*)x20 + 0x24) & 7) + 3)) >= x1_2)
		{
			x1_3 = 1;
		}
		else
		{
			x1_3 = 0;
		}

		*(int32_t*)((char*)x20 + 0x24);
		int32_t x0_13 = ((int32_t)*(int8_t*)((((char*)x20 + 0x28) >> 3) + 0x1000000000));
		char x2_5;
		if (x0_13 != 0)
		{
			x2_5 = 1;
		}
		else
		{
			x2_5 = 0;
		}
		char x0_14;
		if (x0_13 <= 3)
		{
			x0_14 = 1;
		}
		else
		{
			x0_14 = 0;
		}

		*(int32_t*)((char*)x20 + 0x28);
		printf();
		int32_t x1_11 = ((int32_t)*(int8_t*)((((char*)x20 + 0x24) >> 3) + 0x1000000000));
		char x2_10;
		if (x1_11 != 0)
		{
			x2_10 = 1;
		}
		else
		{
			x2_10 = 0;
		}
		char x1_12;
		if (((int32_t)((((char*)x20 + 0x24) & 7) + 3)) >= x1_11)
		{
			x1_12 = 1;
		}
		else
		{
			x1_12 = 0;
		}

		int32_t x0_26 = *(int32_t*)((char*)x20 + 0x24);
		int32_t x1_19 = ((int32_t)*(int8_t*)((((char*)x20 + 0x28) >> 3) + 0x1000000000));
		char x3_11;
		if (x1_19 != 0)
		{
			x3_11 = 1;
		}
		else
		{
			x3_11 = 0;
		}
		char x1_20;
		if (x1_19 <= 3)
		{
			x1_20 = 1;
		}
		else
		{
			x1_20 = 0;
		}
		uint64_t x1_23 = ((uint64_t)(x3_11 & x1_20));
		if (x1_23 != 0)
		{
			x0_26 = __asan_report_load4(((char*)x20 + 0x28), x1_23);
		}
		int32_t x1_25 = *(int32_t*)((char*)x20 + 0x28);
		int32_t x21_1 = (x0_26 + x1_25);

		int64_t* x0_30 = malloc(((int64_t)x21_1));

		int32_t x1_29 = ((int32_t)*(int8_t*)((x0_30 >> 3) + 0x1000000000));
		char x2_15;
		if (x1_29 != 0)
		{
			x2_15 = 1;
		}
		else
		{
			x2_15 = 0;
		}
		char x1_30;
		if (((int32_t)(x0_30 & 7)) >= x1_29)
		{
			x1_30 = 1;
		}
		else
		{
			x1_30 = 0;
		}
		int32_t x1_34 = ((int32_t)*(int8_t*)((((char*)x0_30 + 9) >> 3) + 0x1000000000));
		char x4_3;
		if (x1_34 != 0)
		{
			x4_3 = 1;
		}
		else
		{
			x4_3 = 0;
		}
		char x1_35;
		if (((int32_t)(((char*)x0_30 + 9) & 7)) >= x1_34)
		{
			x1_35 = 1;
		}
		else
		{
			x1_35 = 0;
		}

		int32_t x1_42 = ((int32_t)*(int8_t*)((((char*)x20 + 0x2c) >> 3) + 0x1000000000));
		char x2_21;
		if (x1_42 != 0)
		{
			x2_21 = 1;
		}
		else
		{
			x2_21 = 0;
		}
		char x1_43;
		if (((int32_t)(((char*)x20 + 0x2c) & 7)) >= x1_42)
		{
			x1_43 = 1;
		}
		else
		{
			x1_43 = 0;
		}
		int32_t x1_47 = ((int32_t)*(int8_t*)((((char*)x20 + 0x35) >> 3) + 0x1000000000));
		char x4_6;
		if (x1_47 != 0)
		{
			x4_6 = 1;
		}
		else
		{
			x4_6 = 0;
		}
		char x1_48;
		if (((int32_t)(((char*)x20 + 0x35) & 7)) >= x1_47)
		{
			x1_48 = 1;
		}
		else
		{
			x1_48 = 0;
		}

		*(int64_t*)x0_30 = *(int64_t*)((char*)x20 + 0x2c);
		x0_30[1] = *(int16_t*)((char*)x20 + 0x34);
		free(x0_30);
		if ((((x21_1 >> 0x1f) + x21_1) >> 1) == 0)
		{
			free(x0_30);
		}
		else if ((((int32_t)((x21_1 * 0x55555556) >> 0x20)) - (x21_1 >> 0x1f)) == 0)
		{

			int32_t x1_60 = ((int32_t)*(int8_t*)((x0_30 >> 3) + 0x1000000000));
			char x2_29;
			if (x1_60 != 0)
			{
				x2_29 = 1;
			}
			else
			{
				x2_29 = 0;
			}
			char x1_61;
			if (((int32_t)(x0_30 & 7)) >= x1_60)
			{
				x1_61 = 1;
			}
			else
			{
				x1_61 = 0;
			}

			*(int8_t*)x0_30 = 0x61;
		}
		int32_t x1_66 = ((int32_t)*(int8_t*)((((char*)x20 + 0x24) >> 3) + 0x1000000000));
		char x2_32;
		if (x1_66 != 0)
		{
			x2_32 = 1;
		}
		else
		{
			x2_32 = 0;
		}
		char x1_67;
		if (((int32_t)((((char*)x20 + 0x24) & 7) + 3)) >= x1_66)
		{
			x1_67 = 1;
		}
		else
		{
			x1_67 = 0;
		}

		int32_t x0_51 = *(int32_t*)((char*)x20 + 0x24);
		int32_t x1_74 = ((int32_t)*(int8_t*)((((char*)x20 + 0x28) >> 3) + 0x1000000000));
		char x3_26;
		if (x1_74 != 0)
		{
			x3_26 = 1;
		}
		else
		{
			x3_26 = 0;
		}
		char x1_75;
		if (x1_74 <= 3)
		{
			x1_75 = 1;
		}
		else
		{
			x1_75 = 0;
		}
		uint64_t x1_78 = ((uint64_t)(x3_26 & x1_75));

		int32_t x1_80 = *(int32_t*)((char*)x20 + 0x28);
		int32_t x21_2 = (x0_51 - x1_80);

		int64_t* x0_57 = malloc(((int64_t)(x21_2 + 0x64)));

		int32_t x1_85 = ((int32_t)*(int8_t*)((x0_57 >> 3) + 0x1000000000));
		char x2_37;
		if (x1_85 != 0)
		{
			x2_37 = 1;
		}
		else
		{
			x2_37 = 0;
		}
		char x1_86;
		if (((int32_t)(x0_57 & 7)) >= x1_85)
		{
			x1_86 = 1;
		}
		else
		{
			x1_86 = 0;
		}
		int32_t x1_90 = ((int32_t)*(int8_t*)((((char*)x0_57 + 9) >> 3) + 0x1000000000));
		char x4_9;
		if (x1_90 != 0)
		{
			x4_9 = 1;
		}
		else
		{
			x4_9 = 0;
		}
		char x1_91;
		if (((int32_t)(((char*)x0_57 + 9) & 7)) >= x1_90)
		{
			x1_91 = 1;
		}
		else
		{
			x1_91 = 0;
		}

		int32_t x1_98 = ((int32_t)*(int8_t*)((((char*)x20 + 0x2c) >> 3) + 0x1000000000));
		char x2_43;
		if (x1_98 != 0)
		{
			x2_43 = 1;
		}
		else
		{
			x2_43 = 0;
		}
		char x1_99;
		if (((int32_t)(((char*)x20 + 0x2c) & 7)) >= x1_98)
		{
			x1_99 = 1;
		}
		else
		{
			x1_99 = 0;
		}
		int32_t x1_103 = ((int32_t)*(int8_t*)((((char*)x20 + 0x35) >> 3) + 0x1000000000));
		char x4_12;
		if (x1_103 != 0)
		{
			x4_12 = 1;
		}
		else
		{
			x4_12 = 0;
		}
		char x1_104;
		if (((int32_t)(((char*)x20 + 0x35) & 7)) >= x1_103)
		{
			x1_104 = 1;
		}
		else
		{
			x1_104 = 0;
		}

		*(int64_t*)x0_57 = *(int64_t*)((char*)x20 + 0x2c);
		x0_57[1] = *(int16_t*)((char*)x20 + 0x34);
		int32_t x21_4 = *(int32_t*)((char*)x20 + 0x28);
		int32_t x23_1 = *(int32_t*)((char*)x20 + 0x24);
		char x0_66;
		if (x21_4 == 0)
		{
			x0_66 = 1;
		}
		else
		{
			x0_66 = 0;
		}
		char x0_67;
		if (x23_1 == 0x80000000)
		{
			x0_67 = 1;
		}
		else
		{
			x0_67 = 0;
		}
		char x0_68;
		if (x21_4 == 0xffffffff)
		{
			x0_68 = 1;
		}
		else
		{
			x0_68 = 0;
		}

		int32_t x0_75 = (x23_1 / x21_4);
		*(int16_t*)((((char*)x20 + 0x60) >> 3) + 0x1000000000) = 0x200;
		int64_t* x0_79 = malloc(((int64_t)x0_75));

		int32_t x1_118 = ((int32_t)*(int8_t*)((x0_79 >> 3) + 0x1000000000));
		char x2_53;
		if (x1_118 != 0)
		{
			x2_53 = 1;
		}
		else
		{
			x2_53 = 0;
		}
		char x1_119;
		if (((int32_t)(x0_79 & 7)) >= x1_118)
		{
			x1_119 = 1;
		}
		else
		{
			x1_119 = 0;
		}
		int32_t x1_123 = ((int32_t)*(int8_t*)((((char*)x0_79 + 9) >> 3) + 0x1000000000));
		char x4_15;
		if (x1_123 != 0)
		{
			x4_15 = 1;
		}
		else
		{
			x4_15 = 0;
		}
		char x1_124;
		if (((int32_t)(((char*)x0_79 + 9) & 7)) >= x1_123)
		{
			x1_124 = 1;
		}
		else
		{
			x1_124 = 0;
		}

		int32_t x1_131 = ((int32_t)*(int8_t*)((((char*)x20 + 0x2c) >> 3) + 0x1000000000));
		char x2_59;
		if (x1_131 != 0)
		{
			x2_59 = 1;
		}
		else
		{
			x2_59 = 0;
		}
		char x1_132;
		if (((int32_t)(((char*)x20 + 0x2c) & 7)) >= x1_131)
		{
			x1_132 = 1;
		}
		else
		{
			x1_132 = 0;
		}
		int32_t x1_136 = ((int32_t)*(int8_t*)((((char*)x20 + 0x35) >> 3) + 0x1000000000));
		char x4_18;
		if (x1_136 != 0)
		{
			x4_18 = 1;
		}
		else
		{
			x4_18 = 0;
		}
		char x1_137;
		if (((int32_t)(((char*)x20 + 0x35) & 7)) >= x1_136)
		{
			x1_137 = 1;
		}
		else
		{
			x1_137 = 0;
		}

		*(int64_t*)x0_79 = *(int64_t*)((char*)x20 + 0x2c);
		x0_79[1] = *(int16_t*)((char*)x20 + 0x34);

		void* x2_67 = (((char*)x20 + 0x60) + ((int64_t)x0_75));

		int64_t x2_68 = ((int64_t)x0_75);
		void* x1_151 = (((char*)x20 + 0x60) + x2_68);

		void* x0_98 = (((char*)x20 + 0x60) + ((int64_t)x0_75));
		int32_t x1_155 = ((int32_t)*(int8_t*)((x0_98 >> 3) + 0x1000000000));
		char x2_74;
		if (x1_155 != 0)
		{
			x2_74 = 1;
		}
		else
		{
			x2_74 = 0;
		}
		char x1_156;
		if (((int32_t)(x0_98 & 7)) >= x1_155)
		{
			x1_156 = 1;
		}
		else
		{
			x1_156 = 0;
		}

		char var_da_1 = *(int8_t*)(((char*)x20 + 0x60) + ((int64_t)x0_75));
		int64_t x21_6 = ((int64_t)x0_75);
		void* x1_161 = ((char*)x0_79 + x21_6);

		void* x21_7 = ((char*)x0_79 + x21_6);

		int32_t x1_164 = ((int32_t)*(int8_t*)((x21_7 >> 3) + 0x1000000000));
		char x2_82;
		if (x1_164 != 0)
		{
			x2_82 = 1;
		}
		else
		{
			x2_82 = 0;
		}
		char x1_165;
		if (((int32_t)(x21_7 & 7)) >= x1_164)
		{
			x1_165 = 1;
		}
		else
		{
			x1_165 = 0;
		}

		char var_d9_1 = *(int8_t*)x21_7;

		void* x2_85 = (((char*)x20 + 0x60) + ((int64_t)x0_75));

		int64_t x2_86 = ((int64_t)x0_75);
		void* x1_175 = (((char*)x20 + 0x60) + x2_86);

		void* x0_117 = (((char*)x20 + 0x60) + ((int64_t)x0_75));
		int32_t x1_179 = ((int32_t)*(int8_t*)((x0_117 >> 3) + 0x1000000000));
		char x2_92;
		if (x1_179 != 0)
		{
			x2_92 = 1;
		}
		else
		{
			x2_92 = 0;
		}
		char x1_180;
		if (((int32_t)(x0_117 & 7)) >= x1_179)
		{
			x1_180 = 1;
		}
		else
		{
			x1_180 = 0;
		}

		*(int8_t*)(((char*)x20 + 0x60) + ((int64_t)x0_75)) = 0x63;
		int64_t x21_9 = ((int64_t)x0_75);
		void* x1_185 = ((char*)x0_79 + x21_9);

		void* x21_10 = ((char*)x0_79 + x21_9);

		int32_t x1_188 = ((int32_t)*(int8_t*)((x21_10 >> 3) + 0x1000000000));
		char x2_100;
		if (x1_188 != 0)
		{
			x2_100 = 1;
		}
		else
		{
			x2_100 = 0;
		}
		char x1_189;
		if (((int32_t)(x21_10 & 7)) >= x1_188)
		{
			x1_189 = 1;
		}
		else
		{
			x1_189 = 0;
		}

		*(int8_t*)x21_10 = 0x63;
		if (x0_75 <= 0xa)
		{
			free(x0_79);
		}
		else
		{
			int64_t var_b0_2 = 0;
		}
		int32_t x1_194 = ((int32_t)*(int8_t*)((((char*)x20 + 0x24) >> 3) + 0x1000000000));
		char x2_103;
		if (x1_194 != 0)
		{
			x2_103 = 1;
		}
		else
		{
			x2_103 = 0;
		}
		char x1_195;
		if (((int32_t)((((char*)x20 + 0x24) & 7) + 3)) >= x1_194)
		{
			x1_195 = 1;
		}
		else
		{
			x1_195 = 0;
		}

		uint64_t x1_199 = ((uint64_t)*(int32_t*)((char*)x20 + 0x24));
		int32_t x0_130 = ((int32_t)*(int8_t*)((((char*)x20 + 0x28) >> 3) + 0x1000000000));
		char x3_53;
		if (x0_130 != 0)
		{
			x3_53 = 1;
		}
		else
		{
			x3_53 = 0;
		}
		char x0_131;
		if (x0_130 <= 3)
		{
			x0_131 = 1;
		}
		else
		{
			x0_131 = 0;
		}

		int32_t x0_137 = *(int32_t*)((char*)x20 + 0x28);
		int64_t x2_106 = (x1_199 * x0_137);
		int64_t x3_55 = (x2_106 >> 0x20);
		int32_t x21_11 = x2_106;

		int64_t x0_143;
		do
		{
			x0_143 = malloc(((int64_t)x21_11));
		} while (x0_143 != 0);
		free(x0_57);
		*(int16_t*)((((char*)x20 + 0x60) >> 3) + 0x1000000000) = 0xf8f8;
	}
	fclose(x0_5);
	if (&var_a0 == x20)
	{
		*(int64_t*)(x22 + 0x1000000000) = 0;
		*(int64_t*)(x22 + 0x1000000008) = 0;
	}
	else
	{
		*(int64_t*)x20 = 0x45e0360e;
		int128_t v0;
		v0 = 0xf5;
		*(int8_t*)((char*)v0)[1] = 0xf5;
		*(int8_t*)((char*)v0)[2] = 0xf5;
		*(int8_t*)((char*)v0)[3] = 0xf5;
		*(int8_t*)((char*)v0)[4] = 0xf5;
		*(int8_t*)((char*)v0)[5] = 0xf5;
		*(int8_t*)((char*)v0)[6] = 0xf5;
		*(int8_t*)((char*)v0)[7] = 0xf5;
		*(int8_t*)((char*)v0)[8] = 0xf5;
		*(int8_t*)((char*)v0)[9] = 0xf5;
		*(int8_t*)((char*)v0)[0xa] = 0xf5;
		*(int8_t*)((char*)v0)[0xb] = 0xf5;
		*(int8_t*)((char*)v0)[0xc] = 0xf5;
		*(int8_t*)((char*)v0)[0xd] = 0xf5;
		*(int8_t*)((char*)v0)[0xe] = 0xf5;
		*(int8_t*)((char*)v0)[0xf] = 0xf5;
		*(int128_t*)(x22 + 0x1000000000) = v0;
	}
	if (x1 == *(int64_t*)__stack_chk_guard)
	{
		return 0;
	}
}
