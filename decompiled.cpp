
void fun_359e();

/* std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::push_back(char) */
void _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc(void** a1, signed char a2, void** a3);

/* std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::operator+=(char) */
void _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEpLEc(void** a1, void** a2, void** a3, int32_t a4) {
    int32_t v5;
    void** v6;

    fun_359e();
    v5 = reinterpret_cast<signed char>(a2);
    _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc(a1, *reinterpret_cast<signed char*>(&v5), v6);
    goto a1;
}

struct s0 {
    signed char[184] pad184;
    int32_t f184;
};

void fun_22c0(int32_t a1) {
    struct s0* ebx2;

    goto ebx2->f184;
}

struct s1 {
    signed char[144] pad144;
    int32_t f144;
};

void fun_2220(void** a1, void** a2, void** a3, void** a4) {
    struct s1* ebx5;

    goto ebx5->f144;
}

void fun_295c();

int32_t fun_2040(int32_t a1);

/* folderExists(char const*) */
int32_t _Z12folderExistsPKc(int32_t a1, void** a2, void** a3) {
    int32_t eax4;

    fun_295c();
    eax4 = fun_2040(a1);
    if (eax4) {
        fun_22c0(eax4);
    }
    goto a1;
}

struct s2 {
    signed char[80] pad80;
    int32_t f80;
};

int32_t fun_2120(int32_t a1, void** a2, void** a3) {
    struct s2* ebx4;

    goto ebx4->f80;
}

void fun_3d7c();

/* std::__ndk1::__throw_length_error(char const*) */
void _ZNSt6__ndk120__throw_length_errorEPKc(uint32_t a1, void** a2, void** a3, void** a4, int32_t a5, void** a6, int32_t a7);

void fun_3dae();

struct s3 {
    void** f0;
    signed char[3] pad4;
    void** f4;
    signed char[3] pad8;
    void** f8;
};

struct s4 {
    void** f0;
    signed char[3] pad4;
    void** f4;
    signed char[3] pad8;
    void** f8;
};

/* std::__ndk1::__compressed_pair<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::__rep, std::__ndk1::allocator<char> >::first() */
struct s3* _ZNSt6__ndk117__compressed_pairINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE5__repES5_E5firstEv(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6, struct s4* a7);

/* std::__ndk1::__basic_string_common<true>::__throw_length_error() const */
void _ZNKSt6__ndk121__basic_string_commonILb1EE20__throw_length_errorEv(void** a1) {
    int32_t v2;
    void** v3;
    void** v4;
    int32_t ebx5;
    void** ebp6;
    int32_t ebx7;
    int32_t v8;
    void** v9;
    void** v10;
    void** v11;
    void** v12;
    void** v13;
    void** v14;
    struct s4* esi15;
    struct s3* eax16;
    int32_t v17;

    fun_3d7c();
    _ZNSt6__ndk120__throw_length_errorEPKc(v2 + reinterpret_cast<int32_t>("/7PvX59AxxUFBwv8aekDHtI2VNSeTRobF59AxULPyG+JvKL38SQ4vczgSCDHF59DvyC1eP8GgkC/8SQ62ge8nk4M25b3ibygT2AWVe4iIBwQ0ON26+RAoJJ/2iuKYPFcPz+YubufJgB13mkZ2x1ps8vENcTxX4phdK2Z4MrexLzZ/lv5ap6Ei5xlHnReHS1pL9OI+gEpoPw212o385uc1V+58gIrD9OfmBmp3Rh13mmx2x1pg/S8Iva6+JGj2OWwmRepHQqhn9wXZqgElCcDmyYBu50DHGnqVNbSNH5mc0Sn2P30EGHEJeaznBIdnKpEl6E2R+J8gcXpAxxqNlTW0HN/y9h4rvxWpwGOCSPuHRAUFBQU=ITj7vhxv5pX2vTlijEW5z3rXaY8FBQUFBQUFBQUFBQU=1rvNxK5NfWc5LmN7tmgVx/E7c1ZxngMEfX+vtIPo+RHIk1tKtXlsUJ8sw8d301cQvector") + 0xffffb124, v3, v4, a1, ebx5, ebp6, __return_address());
    fun_3dae();
    ebx7 = v8 << 1;
    (&v9)[3] = *reinterpret_cast<void***>(&ebx7);
    eax16 = _ZNSt6__ndk117__compressed_pairINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE5__repES5_E5firstEv(v10, v11, v12, v13, v14, v9, esi15);
    eax16->f0 = (&v9)[3];
    goto v17;
}

/* std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::__set_short_size(unsigned int) */
void _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE16__set_short_sizeEj(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9) {
    uint32_t ebx10;
    void** v11;
    void** v12;
    void** v13;
    struct s4* esi14;
    struct s3* eax15;

    fun_3dae();
    ebx10 = reinterpret_cast<unsigned char>(a2) << 1;
    (&v11)[3] = *reinterpret_cast<void***>(&ebx10);
    eax15 = _ZNSt6__ndk117__compressed_pairINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE5__repES5_E5firstEv(a1, v12, v13, a1, a2, v11, esi14);
    eax15->f0 = (&v11)[3];
    goto a1;
}

void fun_3dfc();

struct s5 {
    signed char[61736] pad61736;
    void** f61736;
};

/* std::__ndk1::pointer_traits<char*>::pointer_to(char&) */
void _ZNSt6__ndk114pointer_traitsIPcE10pointer_toERc(int32_t a1);

/* std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::__get_short_pointer() */
void** _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE19__get_short_pointerEv(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9) {
    void** v10;
    struct s5* v11;
    void** ebx12;
    void** ebp13;
    struct s3* eax14;

    fun_3dfc();
    eax14 = _ZNSt6__ndk117__compressed_pairINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE5__repES5_E5firstEv(a1, v10, a1, reinterpret_cast<int32_t>(v11) + reinterpret_cast<uint32_t>("XHZuKlIaj0+M6ip6JM810QNN7hbAFJUqGJ5NGMcXn0EHrfTbn0DHFtYXs2xWXIBakCVr0d5pGHcdabHagCJGe27ENTiL84YftbiM5TVKhO6ucrfQpOKmyjB4AoSVcFzW/7PvX59AxxUFBwv8aekDHtI2VNSeTRobF59AxULPyG+JvKL38SQ4vczgSCDHF59DvyC1eP8GgkC/8SQ62ge8nk4M25b3ibygT2AWVe4iIBwQ0ON26+RAoJJ/2iuKYPFcPz+YubufJgB13mkZ2x1ps8vENcTxX4phdK2Z4MrexLzZ/lv5ap6Ei5xlHnReHS1pL9OI+gEpoPw212o385uc1V+58gIrD9OfmBmp3Rh13mmx2x1pg/S8Iva6+JGj2OWwmRepHQqhn9wXZqgElCcDmyYBu50DHGnqVNbSNH5mc0Sn2P30EGHEJeaznBIdnKpEl6E2R+J8gcXpAxxqNlTW0HN/y9h4rvxWpwGOCSPuHRAUFBQU=ITj7vhxv5pX2vTlijEW5z3rXaY8FBQUFBQUFBQUFBQU=1rvNxK5NfWc5LmN7tmgVx/E7c1ZxngMEfX+vtIPo+RHIk1tKtXlsUJ8sw8d301cQvector"), ebx12, ebp13, __return_address());
    _ZNSt6__ndk114pointer_traitsIPcE10pointer_toERc(&eax14->pad4);
    goto a1;
}

void fun_419d();

int32_t* fun_2090(int32_t a1);

/* std::length_error::length_error(char const*) */
void _ZNSt12length_errorC2EPKc(int32_t* a1, uint32_t a2);

struct s6 {
    signed char[12] pad12;
    int32_t f12;
};

struct s6* fun_21f0(int32_t* a1);

void fun_22b0(uint32_t a1);

void _Unwind_Resume(struct s6* a1);

void fun_422e();

void fun_2080(int32_t* a1, uint32_t a2);

/* std::__ndk1::__throw_length_error(char const*) */
void _ZNSt6__ndk120__throw_length_errorEPKc(uint32_t a1, void** a2, void** a3, void** a4, int32_t a5, void** a6, int32_t a7) {
    int32_t* eax8;
    int32_t* ecx9;
    int32_t v10;
    uint32_t edx11;
    struct s6* eax12;
    int32_t v13;

    fun_419d();
    eax8 = fun_2090(8);
    _ZNSt12length_errorC2EPKc(eax8, a1);
    ecx9 = *reinterpret_cast<int32_t**>(v10 + reinterpret_cast<int32_t>("oxEj5eX+pPdsOGj1sBGNfhIt4PJ+vmvQtpWNI1nLjSwvqja15eMRI+dl/qT1vDho+EFHlUU0L0f+NR+HnQapxVIbcA2NzZuhqO41BRmsy6l9TFL9Qk7duPWtjtW/NDEW7tpLw0X/rmh8Y5CkMtty3Ygbh5NKQhn15HPMPpp3aUcUMXLKiFEnlx8MvfzN4PJyJ2Iop21+EBGA8nIt4iinZ2NEP67M+lJgUsqEMXaRa66cJihyYiw0PvBXXvlavhaBy8vAmdQk4FiHr8MOimGeEmMSxERAV175Wx2SEMkq2plbjoEfr+1llSuJIGiqKfU12IrdMdTlUbS23w9i+1rbc+e4Jq3zapkuvIGAyzBTYhOwJYK9aXE+rnv6QetEturH1J/WtkeVjRhLNSjcV+UTK8buX5DIaFa98EGiIlbmq0CVwxtFqdevGVs1KNxX5RMrzuXugbZnlrGpvXQE2SramV4HBdgDD86XE6OEeajnftV9zEkLYXS0gJ0nzL9Lh5NIFLSAkXJzlZhA9fvnu2otYRDLPIGAftbOrFmRWw8dLllC8ujW5T3fNYIbFyTLoLl33q5Adc2sRlXbn+yN31GFiaRhG9c6HC4PRgDjJQ+fT+OyLeDyfr5r0LaVjSNcKepK8h3s6KGsERujGYZYvr5gsqeLZmTaC0hS+n0tv1sQbZiCzjRyx9Ex9SsDQvNT/78Ai0hS+g0tv1pwbZiLFhmcg99z325fN/64DvyC1eb8nkpm+WVeset25MrmP1MUDHGnpClEayFSOc0lVWtyAMkfBuekDHGnVQ8YK9c0YR4PShwjJQYA5ZjMAM+7szTOrCjDBGCerbFSOc0oLmQV5Axxp6vsXchK2ODTcu/wjbJiNUX4Ynk0YxxefQZWGe/t4PJyJ2Iop2yC1e7+TORS0H7XEnkD/BoCyh3wvXHZuKlIaj0+M6ip6JM810QNN7hbAFJUqGJ5NGMcXn0EHrfTbn0DHFtYXs2xWXIBakCVr0d5pGHcdabHagCJGe27ENTiL84Y") + 0xc0);
    edx11 = *reinterpret_cast<uint32_t*>(v10 + reinterpret_cast<int32_t>("oxEj5eX+pPdsOGj1sBGNfhIt4PJ+vmvQtpWNI1nLjSwvqja15eMRI+dl/qT1vDho+EFHlUU0L0f+NR+HnQapxVIbcA2NzZuhqO41BRmsy6l9TFL9Qk7duPWtjtW/NDEW7tpLw0X/rmh8Y5CkMtty3Ygbh5NKQhn15HPMPpp3aUcUMXLKiFEnlx8MvfzN4PJyJ2Iop21+EBGA8nIt4iinZ2NEP67M+lJgUsqEMXaRa66cJihyYiw0PvBXXvlavhaBy8vAmdQk4FiHr8MOimGeEmMSxERAV175Wx2SEMkq2plbjoEfr+1llSuJIGiqKfU12IrdMdTlUbS23w9i+1rbc+e4Jq3zapkuvIGAyzBTYhOwJYK9aXE+rnv6QetEturH1J/WtkeVjRhLNSjcV+UTK8buX5DIaFa98EGiIlbmq0CVwxtFqdevGVs1KNxX5RMrzuXugbZnlrGpvXQE2SramV4HBdgDD86XE6OEeajnftV9zEkLYXS0gJ0nzL9Lh5NIFLSAkXJzlZhA9fvnu2otYRDLPIGAftbOrFmRWw8dLllC8ujW5T3fNYIbFyTLoLl33q5Adc2sRlXbn+yN31GFiaRhG9c6HC4PRgDjJQ+fT+OyLeDyfr5r0LaVjSNcKepK8h3s6KGsERujGYZYvr5gsqeLZmTaC0hS+n0tv1sQbZiCzjRyx9Ex9SsDQvNT/78Ai0hS+g0tv1pwbZiLFhmcg99z325fN/64DvyC1eb8nkpm+WVeset25MrmP1MUDHGnpClEayFSOc0lVWtyAMkfBuekDHGnVQ8YK9c0YR4PShwjJQYA5ZjMAM+7szTOrCjDBGCerbFSOc0oLmQV5Axxp6vsXchK2ODTcu/wjbJiNUX4Ynk0YxxefQZWGe/t4PJyJ2Iop2yC1e7+TORS0H7XEnkD/BoCyh3wvXHZuKlIaj0+M6ip6JM810QNN7hbAFJUqGJ5NGMcXn0EHrfTbn0DHFtYXs2xWXIBakCVr0d5pGHcdabHagCJGe27ENTiL84Y") + 0xbc);
    eax12 = fun_21f0(eax8);
    fun_22b0(edx11);
    _Unwind_Resume(eax12);
    fun_422e();
    fun_2080(ecx9, edx11);
    *ecx9 = *reinterpret_cast<int32_t*>(v13 + reinterpret_cast<int32_t>("68KeoyarBpT+jN2ofzc7EYFGwN5O9IVI5xeguZBekDHGvRJ+GYA2CG3uhrc2UkXJ1Q55RwFMOXkpD/BoJC6+iPv2cAbOPtpgQOwS0irTalP+FRJFyf0/jv53g8nIua9C+tY0jVpuNLCnKNrXvoxEj5eX+pPdsOGj1sBGNfhIt4PJ+vmvQtpWNI1nLjSwvqja15eMRI+dl/qT1vDho+EFHlUU0L0f+NR+HnQapxVIbcA2NzZuhqO41BRmsy6l9TFL9Qk7duPWtjtW/NDEW7tpLw0X/rmh8Y5CkMtty3Ygbh5NKQhn15HPMPpp3aUcUMXLKiFEnlx8MvfzN4PJyJ2Iop21+EBGA8nIt4iinZ2NEP67M+lJgUsqEMXaRa66cJihyYiw0PvBXXvlavhaBy8vAmdQk4FiHr8MOimGeEmMSxERAV175Wx2SEMkq2plbjoEfr+1llSuJIGiqKfU12IrdMdTlUbS23w9i+1rbc+e4Jq3zapkuvIGAyzBTYhOwJYK9aXE+rnv6QetEturH1J/WtkeVjRhLNSjcV+UTK8buX5DIaFa98EGiIlbmq0CVwxtFqdevGVs1KNxX5RMrzuXugbZnlrGpvXQE2SramV4HBdgDD86XE6OEeajnftV9zEkLYXS0gJ0nzL9Lh5NIFLSAkXJzlZhA9fvnu2otYRDLPIGAftbOrFmRWw8dLllC8ujW5T3fNYIbFyTLoLl33q5Adc2sRlXbn+yN31GFiaRhG9c6HC4PRgDjJQ+fT+OyLeDyfr5r0LaVjSNcKepK8h3s6KGsERujGYZYvr5gsqeLZmTaC0hS+n0tv1sQbZiCzjRyx9Ex9SsDQvNT/78Ai0hS+g0tv1pwbZiLFhmcg99z325fN/64DvyC1eb8nkpm+WVeset25MrmP1MUDHGnpClEayFSOc0lVWtyAMkfBuekDHGnVQ8YK9c0YR4PShwjJQYA5ZjMAM+7szTOrCjDBGCerbFSOc0oLmQV5Axxp6vsXchK2ODTcu/wjbJiNUX4Ynk") + 0xc4) + 8;
    goto ecx9;
}

void fun_437d();

void fun_2130(uint32_t a1, uint32_t a2, int32_t a3, int32_t a4);

/* std::__ndk1::__libcpp_allocate(unsigned int, unsigned int) */
void _ZNSt6__ndk117__libcpp_allocateEjj(uint32_t a1, int32_t a2, void** a3, void** a4) {
    int32_t esi5;

    fun_437d();
    fun_2130(a1, a1, a2, esi5);
    goto a1;
}

void fun_454c();

/* std::__ndk1::__compressed_pair<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::__rep, std::__ndk1::allocator<char> >::first() const */
struct s4* _ZNKSt6__ndk117__compressed_pairINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE5__repES5_E5firstEv(void** a1, void** a2, void** a3, void** a4, int32_t a5);

/* std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::__get_short_size() const */
void** _ZNKSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE16__get_short_sizeEv(void** a1) {
    void** v2;
    void** v3;
    int32_t ebx4;

    fun_454c();
    _ZNKSt6__ndk117__compressed_pairINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE5__repES5_E5firstEv(a1, v2, v3, a1, ebx4);
    goto a1;
}

void fun_45be();

/* std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::max_size() const */
void** _ZNKSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE8max_sizeEv(void** a1);

/* std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::__get_pointer() */
void** _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE13__get_pointerEv(void** a1, void** a2, void** a3, void** a4);

/* unsigned int const& std::__ndk1::max<unsigned int>(unsigned int const&, unsigned int const&) */
void*** _ZNSt6__ndk13maxIjEERKT_S3_S3_(void** a1, void** a2);

/* std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::__recommend(unsigned int) */
void** _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE11__recommendEj(void** a1, void** a2);

/* std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::__alloc() */
void** _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE7__allocEv(void** a1, void** a2, void** a3);

/* std::__ndk1::allocator_traits<std::__ndk1::allocator<char> >::allocate(std::__ndk1::allocator<char>&, unsigned int) */
void** _ZNSt6__ndk116allocator_traitsINS_9allocatorIcEEE8allocateERS2_j(void** a1, void** a2);

/* std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::__invalidate_all_iterators() */
void** _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE26__invalidate_all_iteratorsEv(void** a1, void** a2);

/* char* std::__ndk1::__to_raw_pointer<char>(char*) */
void** _ZNSt6__ndk116__to_raw_pointerIcEEPT_S2_(void** a1, void** a2, void** a3);

/* std::__ndk1::char_traits<char>::copy(char*, char const*, unsigned int) */
void** _ZNSt6__ndk111char_traitsIcE4copyEPcPKcj(void** a1, void** a2, void** a3);

/* std::__ndk1::allocator_traits<std::__ndk1::allocator<char> >::deallocate(std::__ndk1::allocator<char>&, char*, unsigned int) */
void _ZNSt6__ndk116allocator_traitsINS_9allocatorIcEEE10deallocateERS2_Pcj(void** a1, void** a2, void** a3);

/* std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::__set_long_pointer(char*) */
void _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE18__set_long_pointerEPc(void** a1, void** a2, void** a3);

/* std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::__set_long_cap(unsigned int) */
void _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE14__set_long_capEj(void** a1, void** a2, void** a3);

/* std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::__grow_by(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int) */
void _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9__grow_byEjjjjjj(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7) {
    void* ebp8;
    void** eax9;
    void** v10;
    void** v11;
    void** v12;
    void** eax13;
    void** v14;
    void** v15;
    void*** eax16;
    void** v17;
    void** eax18;
    void** v19;
    void** eax20;
    void** v21;
    void** eax22;
    void** v23;
    void** eax24;
    void** v25;
    void** eax26;
    void** v27;
    void** v28;
    void** eax29;
    void** eax30;
    void** eax31;

    ebp8 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4);
    fun_45be();
    eax9 = _ZNKSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE8max_sizeEv(a1);
    if (reinterpret_cast<unsigned char>(a3) > reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(eax9) - reinterpret_cast<unsigned char>(a2))) {
        _ZNKSt6__ndk121__basic_string_commonILb1EE20__throw_length_errorEv(a1);
    }
    eax13 = _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE13__get_pointerEv(a1, v10, v11, v12);
    if (reinterpret_cast<unsigned char>(a2) >= reinterpret_cast<unsigned char>((reinterpret_cast<unsigned char>(eax9) >> 1) - 16)) {
        v14 = eax9 - 1;
    } else {
        v15 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp8) + 0xffffffe0);
        eax16 = _ZNSt6__ndk13maxIjEERKT_S3_S3_(reinterpret_cast<int32_t>(ebp8) + 0xffffffe4, v15);
        v17 = *eax16;
        eax18 = _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE11__recommendEj(v17, v15);
        v14 = eax18;
    }
    eax20 = _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE7__allocEv(a1, v15, v19);
    v21 = v14 + 1;
    eax22 = _ZNSt6__ndk116allocator_traitsINS_9allocatorIcEEE8allocateERS2_j(eax20, v21);
    _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE26__invalidate_all_iteratorsEv(a1, v21);
    if (a5) {
        eax24 = _ZNSt6__ndk116__to_raw_pointerIcEEPT_S2_(eax22, v21, v23);
        eax26 = _ZNSt6__ndk116__to_raw_pointerIcEEPT_S2_(eax13, v21, v25);
        v21 = eax26;
        v27 = a5;
        _ZNSt6__ndk111char_traitsIcE4copyEPcPKcj(eax24, v21, v27);
    }
    v28 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(a4) - reinterpret_cast<unsigned char>(a6) - reinterpret_cast<unsigned char>(a5));
    if (v28) {
        eax29 = _ZNSt6__ndk116__to_raw_pointerIcEEPT_S2_(eax22, v21, v27);
        eax30 = _ZNSt6__ndk116__to_raw_pointerIcEEPT_S2_(eax13, v21, v27);
        v21 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(eax30) + reinterpret_cast<unsigned char>(a5) + reinterpret_cast<unsigned char>(a6));
        v27 = v28;
        _ZNSt6__ndk111char_traitsIcE4copyEPcPKcj(reinterpret_cast<unsigned char>(eax29) + reinterpret_cast<unsigned char>(a5) + reinterpret_cast<unsigned char>(a7), v21, v27);
    }
    if (a2 + 1 != 11) {
        eax31 = _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE7__allocEv(a1, v21, v27);
        v27 = a2 + 1;
        _ZNSt6__ndk116allocator_traitsINS_9allocatorIcEEE10deallocateERS2_Pcj(eax31, eax13, v27);
    }
    _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE18__set_long_pointerEPc(a1, eax22, v27);
    _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE14__set_long_capEj(a1, v14 + 1, v27);
    goto a1;
}

void fun_36ec();

/* std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::__is_long() const */
unsigned char _ZNKSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9__is_longEv(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11) {
    void** v12;
    void** v13;
    int32_t ebx14;

    fun_36ec();
    _ZNKSt6__ndk117__compressed_pairINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE5__repES5_E5firstEv(a1, v12, v13, a1, ebx14);
    goto a1;
}

void fun_47ec();

struct s7 {
    signed char[59192] pad59192;
    void** f59192;
};

/* std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::__get_long_pointer() */
void** _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE18__get_long_pointerEv(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7);

/* std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::__get_pointer() */
void** _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE13__get_pointerEv(void** a1, void** a2, void** a3, void** a4) {
    struct s7* v5;
    void** ebx6;
    void** ebp7;
    unsigned char al8;

    fun_47ec();
    al8 = _ZNKSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9__is_longEv(a1, a1, a1, reinterpret_cast<int32_t>(v5) + reinterpret_cast<uint32_t>("0gbifXqQhw+lHPAHYwIqDsAgf+g4P7nXvlQU21HtzLKhDF27gX2cmbiphVEkXJxKcwSWOzVcFIt4PJy8Xi0NR6aIt+iynCpu0cP6vbByzL6C0hWTo/H7GWupFlWTPRA5kpdlfcdYbArOo4iw+2LgjO5V6FyyoQ6A57zQnIt4PC+vmvTVpWNLCnLjSXvqjaz5eMRJPdl/qj1vDhlVv/SuvH0eDRZAA1UkXJ1T+O/n0Dyci3r0L6+bSNWlY0sKcuGte+qPxoxGjhgY1yh2gK95GTTA4/0jkD8C7N1KWk3EVUpCqJJwULlPAwC+BAFDFVXW+Q0TodWqnOreebFWqDW4Q5+XQX55xu0oTN+Ci/aIgWdukMg==7ai6NPV2bXGQr0Np5ImWzUjl6PCgPeiZ1htfcSPHk58UeVSEMzf9Yw3NIDiE3kwVE57U+9AmnUmFHEK6IvfKH2TS7CCq/VbM/O9R5SdZDW14bohAkY4uN9Wm/Col7ZLu07gKfimHuWgt8iNKBQUFBQ==XP5rChOX5IfmEBCR8F2EpKo+9bwFBQUFBQUFBQUFBQU=7ai6NPV2bXGQr0Np5ImWzfPuf0Hr5r0LdugZDjgPcx53OC0MEequZmEmbiqxeTMC6+a9C8Za6kXx2RPbCqs0PKTk+lCiiFMtFNPTO23sCWhsq+kTQlhHIuvmvQuiciA3Qet9NkxqmT2+Mm1QZiHFka1Pxw2ohueceTMCsea9C+ta6kXG2RPb8as0PArk+lCkiFMtotPTOxTocQ0gq+kTbPHS5ZSvcHnuc0YRveHgdmAZDnbocx44Dy0MdziuZhHqbiphJvnilyZzRhG94eB2YBkOduiJMAhJAC5rf+wIwBQ4byPjQP9VuPWB9R2Re1YahS+gtH5k6PxFxlrq2/HZEzwKqzRQpOT6LaKIUzsU09NobewJE2yr6eWU8dLmsJHfEb1zRsLg9KFS3d8aDRjCgy1R6aJII5gHc0YRvfShwuDfGlLdwoMNGFVv/SuvH0eDRZAA1UkXJ1T"), ebx6, ebp7, __return_address(), a1, a2, a3, a4);
    if (al8 & 1) {
        _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE18__get_long_pointerEv(a1, a1, a1, reinterpret_cast<int32_t>(v5) + reinterpret_cast<uint32_t>("0gbifXqQhw+lHPAHYwIqDsAgf+g4P7nXvlQU21HtzLKhDF27gX2cmbiphVEkXJxKcwSWOzVcFIt4PJy8Xi0NR6aIt+iynCpu0cP6vbByzL6C0hWTo/H7GWupFlWTPRA5kpdlfcdYbArOo4iw+2LgjO5V6FyyoQ6A57zQnIt4PC+vmvTVpWNLCnLjSXvqjaz5eMRJPdl/qj1vDhlVv/SuvH0eDRZAA1UkXJ1T+O/n0Dyci3r0L6+bSNWlY0sKcuGte+qPxoxGjhgY1yh2gK95GTTA4/0jkD8C7N1KWk3EVUpCqJJwULlPAwC+BAFDFVXW+Q0TodWqnOreebFWqDW4Q5+XQX55xu0oTN+Ci/aIgWdukMg==7ai6NPV2bXGQr0Np5ImWzUjl6PCgPeiZ1htfcSPHk58UeVSEMzf9Yw3NIDiE3kwVE57U+9AmnUmFHEK6IvfKH2TS7CCq/VbM/O9R5SdZDW14bohAkY4uN9Wm/Col7ZLu07gKfimHuWgt8iNKBQUFBQ==XP5rChOX5IfmEBCR8F2EpKo+9bwFBQUFBQUFBQUFBQU=7ai6NPV2bXGQr0Np5ImWzfPuf0Hr5r0LdugZDjgPcx53OC0MEequZmEmbiqxeTMC6+a9C8Za6kXx2RPbCqs0PKTk+lCiiFMtFNPTO23sCWhsq+kTQlhHIuvmvQuiciA3Qet9NkxqmT2+Mm1QZiHFka1Pxw2ohueceTMCsea9C+ta6kXG2RPb8as0PArk+lCkiFMtotPTOxTocQ0gq+kTbPHS5ZSvcHnuc0YRveHgdmAZDnbocx44Dy0MdziuZhHqbiphJvnilyZzRhG94eB2YBkOduiJMAhJAC5rf+wIwBQ4byPjQP9VuPWB9R2Re1YahS+gtH5k6PxFxlrq2/HZEzwKqzRQpOT6LaKIUzsU09NobewJE2yr6eWU8dLmsJHfEb1zRsLg9KFS3d8aDRjCgy1R6aJII5gHc0YRvfShwuDfGlLdwoMNGFVv/SuvH0eDRZAA1UkXJ1T"), ebx6, ebp7, __return_address());
    } else {
        _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE19__get_short_pointerEv(a1, a1, a1, reinterpret_cast<int32_t>(v5) + reinterpret_cast<uint32_t>("0gbifXqQhw+lHPAHYwIqDsAgf+g4P7nXvlQU21HtzLKhDF27gX2cmbiphVEkXJxKcwSWOzVcFIt4PJy8Xi0NR6aIt+iynCpu0cP6vbByzL6C0hWTo/H7GWupFlWTPRA5kpdlfcdYbArOo4iw+2LgjO5V6FyyoQ6A57zQnIt4PC+vmvTVpWNLCnLjSXvqjaz5eMRJPdl/qj1vDhlVv/SuvH0eDRZAA1UkXJ1T+O/n0Dyci3r0L6+bSNWlY0sKcuGte+qPxoxGjhgY1yh2gK95GTTA4/0jkD8C7N1KWk3EVUpCqJJwULlPAwC+BAFDFVXW+Q0TodWqnOreebFWqDW4Q5+XQX55xu0oTN+Ci/aIgWdukMg==7ai6NPV2bXGQr0Np5ImWzUjl6PCgPeiZ1htfcSPHk58UeVSEMzf9Yw3NIDiE3kwVE57U+9AmnUmFHEK6IvfKH2TS7CCq/VbM/O9R5SdZDW14bohAkY4uN9Wm/Col7ZLu07gKfimHuWgt8iNKBQUFBQ==XP5rChOX5IfmEBCR8F2EpKo+9bwFBQUFBQUFBQUFBQU=7ai6NPV2bXGQr0Np5ImWzfPuf0Hr5r0LdugZDjgPcx53OC0MEequZmEmbiqxeTMC6+a9C8Za6kXx2RPbCqs0PKTk+lCiiFMtFNPTO23sCWhsq+kTQlhHIuvmvQuiciA3Qet9NkxqmT2+Mm1QZiHFka1Pxw2ohueceTMCsea9C+ta6kXG2RPb8as0PArk+lCkiFMtotPTOxTocQ0gq+kTbPHS5ZSvcHnuc0YRveHgdmAZDnbocx44Dy0MdziuZhHqbiphJvnilyZzRhG94eB2YBkOduiJMAhJAC5rf+wIwBQ4byPjQP9VuPWB9R2Re1YahS+gtH5k6PxFxlrq2/HZEzwKqzRQpOT6LaKIUzsU09NobewJE2yr6eWU8dLmsJHfEb1zRsLg9KFS3d8aDRjCgy1R6aJII5gHc0YRvfShwuDfGlLdwoMNGFVv/SuvH0eDRZAA1UkXJ1T"), ebx6, ebp7, __return_address(), a1, a2);
    }
    goto a1;
}

void fun_485e();

/* unsigned int const& std::__ndk1::max<unsigned int, std::__ndk1::__less<unsigned int, unsigned int> >(unsigned int const&, unsigned int const&, std::__ndk1::__less<unsigned int, unsigned int>) */
void _ZNSt6__ndk13maxIjNS_6__lessIjjEEEERKT_S5_S5_T0_(void** a1, void** a2);

/* unsigned int const& std::__ndk1::max<unsigned int>(unsigned int const&, unsigned int const&) */
void*** _ZNSt6__ndk13maxIjEERKT_S3_S3_(void** a1, void** a2) {
    fun_485e();
    _ZNSt6__ndk13maxIjNS_6__lessIjjEEEERKT_S5_S5_T0_(a1, a2);
    goto a1;
}

void fun_3e3c();

/* unsigned int std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::__align_it<16u>(unsigned int) */
uint32_t _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE10__align_itILj16EEEjj(void** ecx, void** a2);

/* std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::__recommend(unsigned int) */
void** _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE11__recommendEj(void** a1, void** a2) {
    uint32_t eax3;

    fun_3e3c();
    if (reinterpret_cast<unsigned char>(a1) >= reinterpret_cast<unsigned char>(11)) {
        eax3 = _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE10__align_itILj16EEEjj(a1, a1 + 1);
        if (eax3 - 1 == 11) {
        }
    }
    goto a1;
}

/* char* std::__ndk1::__to_raw_pointer<char>(char*) */
void** _ZNSt6__ndk116__to_raw_pointerIcEEPT_S2_(void** a1, void** a2, void** a3) {
    return a1;
}

void fun_3fed();

int32_t fun_2010(void** a1, void** a2, void** a3);

/* std::__ndk1::char_traits<char>::copy(char*, char const*, unsigned int) */
void** _ZNSt6__ndk111char_traitsIcE4copyEPcPKcj(void** a1, void** a2, void** a3) {
    fun_3fed();
    if (a3) {
        fun_2010(a1, a2, a3);
    }
    goto a1;
}

void fun_377c();

/* std::__ndk1::__compressed_pair<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::__rep, std::__ndk1::allocator<char> >::second() */
void _ZNSt6__ndk117__compressed_pairINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE5__repES5_E6secondEv(void** a1);

/* std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::__alloc() */
void** _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE7__allocEv(void** a1, void** a2, void** a3) {
    fun_377c();
    _ZNSt6__ndk117__compressed_pairINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE5__repES5_E6secondEv(a1);
    goto a1;
}

void fun_372e();

/* std::__ndk1::allocator<char>::deallocate(char*, unsigned int) */
void _ZNSt6__ndk19allocatorIcE10deallocateEPcj(void** a1, void** a2, void** a3, void** a4, void** a5);

/* std::__ndk1::allocator_traits<std::__ndk1::allocator<char> >::deallocate(std::__ndk1::allocator<char>&, char*, unsigned int) */
void _ZNSt6__ndk116allocator_traitsINS_9allocatorIcEEE10deallocateERS2_Pcj(void** a1, void** a2, void** a3) {
    fun_372e();
    _ZNSt6__ndk19allocatorIcE10deallocateEPcj(a1, a2, a1, a2, a3);
    goto a1;
}

void fun_3efe();

/* std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::__set_long_pointer(char*) */
void _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE18__set_long_pointerEPc(void** a1, void** a2, void** a3) {
    void** v4;
    void** v5;
    struct s4* esi6;
    struct s3* eax7;

    fun_3efe();
    eax7 = _ZNSt6__ndk117__compressed_pairINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE5__repES5_E5firstEv(a1, v4, v5, a2, a1, a2, esi6);
    eax7->f8 = a2;
    goto a1;
}

void fun_3f4e();

/* std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::__set_long_cap(unsigned int) */
void _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE14__set_long_capEj(void** a1, void** a2, void** a3) {
    void** v4;
    void** v5;
    void** v6;
    struct s4* esi7;
    struct s3* eax8;

    fun_3f4e();
    v4 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(a2) | 1);
    eax8 = _ZNSt6__ndk117__compressed_pairINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE5__repES5_E5firstEv(a1, v5, v6, v4, a1, a2, esi7);
    eax8->f0 = v4;
    goto a1;
}

void fun_4d5d();

struct s8 {
    signed char[57799] pad57799;
    void** f57799;
};

/* std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::__set_long_size(unsigned int) */
void _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE15__set_long_sizeEj(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, ...);

/* std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::__set_size(unsigned int) */
void _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE10__set_sizeEj(void** a1, void** a2, void** a3) {
    void** v4;
    void** v5;
    struct s8* v6;
    void** esi7;
    void** ebx8;
    void** ebp9;
    unsigned char al10;
    void** v11;
    void** v12;

    fun_4d5d();
    al10 = _ZNKSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9__is_longEv(a1, v4, v5, a1, a1, a2, reinterpret_cast<int32_t>(v6) + reinterpret_cast<uint32_t>("C/fzPTY+0lBYhCTjDoevzhJqYZd9ZgTEG8SRG46BH6/tZZUpVoHhIvbfD2Pc0hEBTqLIyqwpX6IoNmonHEoswnIt4PkYiWpmS74/iXCMDP+MFg9hc2mek1ZaURGnxopNZgTHe8SRFB5hX/WywPjgX+m7Rwfy/jkh+DsAju+g4PBXXvleVIM+xyKEpWlPHS5ULls3LpuAQZaOEf33lBif+xtI/jEAs6LKuDrYxF+Y99AsTdiJt6FzXQ2sefBBnpuCAhtjqQ7695VS2NUFeOd+0fR4OvY9vqYRwYXLgDLF+4U4M2eQs6LBDycRMmTZ3fVMTdiAJHJuEE7r5saTd9ymZFy8WGucsSxWGhPvzwtFlviVe5HuJ+LFgYiH1nf7z0XIZcDBW4ibgc3g8nIua9C+tY0jVpuNLCnKNrXvoxEj5eX+pPdsOGj1to4R/feUGJ/7G0j+MQCzosq4OtjEX5j30CxN2Im3oXNdDax58EGem4JdSLTQ8nIt69C+vm0jVpWNLCnLhrXvqjEj5eMepPdl+Gj1vD9Fx/vAwVhly4HLiJJyLeD4p2diJD+uw0lwbS8Fy4HBhfuAMsNnlTgywQCzoTJvJx31RNnYgCxN3hBEcmbGnuvspmN324eTSBS0gJF3ZJHiDX8P4MY6kbCZu0cP6vbByzL6C0hfWn0tvJMFD9Kyy5juZCRzOgabO5hbON5s/Gp8uR71AmPc0hEARHJuFmZarPNekhTIUvoLTb9afSDanA83D+m7TIqWTfB51z30G0KbSaRh13If+jaPCjxaSXE+rnp7xP4bmOKyxHM+ZCs7mgaY3mhbOny8/GUCaR7yEQPc0m4QRHqs9mZexP+8rfB51ztEG0KXeaRh1oIf+jpPCjxeeXE+qtf/bBm7Rw/u8YJfCfCg87eLVRZlk6ekJcSOEUGFy4HCxfuAODNnlTOiwQC3ETJvKd31RN3YgCxCbhBEe+bGnufcpmN6ZvyeTsNEP6zX6wN59epCF/vPRchlwMFeXo8Eg96JmgG19x1s"), esi7, ebx8, ebp9, __return_address());
    if (al10 & 1) {
        _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE15__set_long_sizeEj(a1, a2, v11, a1, a1, a2, reinterpret_cast<int32_t>(v6) + reinterpret_cast<uint32_t>("C/fzPTY+0lBYhCTjDoevzhJqYZd9ZgTEG8SRG46BH6/tZZUpVoHhIvbfD2Pc0hEBTqLIyqwpX6IoNmonHEoswnIt4PkYiWpmS74/iXCMDP+MFg9hc2mek1ZaURGnxopNZgTHe8SRFB5hX/WywPjgX+m7Rwfy/jkh+DsAju+g4PBXXvleVIM+xyKEpWlPHS5ULls3LpuAQZaOEf33lBif+xtI/jEAs6LKuDrYxF+Y99AsTdiJt6FzXQ2sefBBnpuCAhtjqQ7695VS2NUFeOd+0fR4OvY9vqYRwYXLgDLF+4U4M2eQs6LBDycRMmTZ3fVMTdiAJHJuEE7r5saTd9ymZFy8WGucsSxWGhPvzwtFlviVe5HuJ+LFgYiH1nf7z0XIZcDBW4ibgc3g8nIua9C+tY0jVpuNLCnKNrXvoxEj5eX+pPdsOGj1to4R/feUGJ/7G0j+MQCzosq4OtjEX5j30CxN2Im3oXNdDax58EGem4JdSLTQ8nIt69C+vm0jVpWNLCnLhrXvqjEj5eMepPdl+Gj1vD9Fx/vAwVhly4HLiJJyLeD4p2diJD+uw0lwbS8Fy4HBhfuAMsNnlTgywQCzoTJvJx31RNnYgCxN3hBEcmbGnuvspmN324eTSBS0gJF3ZJHiDX8P4MY6kbCZu0cP6vbByzL6C0hfWn0tvJMFD9Kyy5juZCRzOgabO5hbON5s/Gp8uR71AmPc0hEARHJuFmZarPNekhTIUvoLTb9afSDanA83D+m7TIqWTfB51z30G0KbSaRh13If+jaPCjxaSXE+rnp7xP4bmOKyxHM+ZCs7mgaY3mhbOny8/GUCaR7yEQPc0m4QRHqs9mZexP+8rfB51ztEG0KXeaRh1oIf+jpPCjxeeXE+qtf/bBm7Rw/u8YJfCfCg87eLVRZlk6ekJcSOEUGFy4HCxfuAODNnlTOiwQC3ETJvKd31RN3YgCxCbhBEe+bGnufcpmN6ZvyeTsNEP6zX6wN59epCF/vPRchlwMFeXo8Eg96JmgG19x1s"), esi7, ebx8, ebp9, __return_address());
    } else {
        _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE16__set_short_sizeEj(a1, a2, v12, a1, a1, a2, reinterpret_cast<int32_t>(v6) + reinterpret_cast<uint32_t>("C/fzPTY+0lBYhCTjDoevzhJqYZd9ZgTEG8SRG46BH6/tZZUpVoHhIvbfD2Pc0hEBTqLIyqwpX6IoNmonHEoswnIt4PkYiWpmS74/iXCMDP+MFg9hc2mek1ZaURGnxopNZgTHe8SRFB5hX/WywPjgX+m7Rwfy/jkh+DsAju+g4PBXXvleVIM+xyKEpWlPHS5ULls3LpuAQZaOEf33lBif+xtI/jEAs6LKuDrYxF+Y99AsTdiJt6FzXQ2sefBBnpuCAhtjqQ7695VS2NUFeOd+0fR4OvY9vqYRwYXLgDLF+4U4M2eQs6LBDycRMmTZ3fVMTdiAJHJuEE7r5saTd9ymZFy8WGucsSxWGhPvzwtFlviVe5HuJ+LFgYiH1nf7z0XIZcDBW4ibgc3g8nIua9C+tY0jVpuNLCnKNrXvoxEj5eX+pPdsOGj1to4R/feUGJ/7G0j+MQCzosq4OtjEX5j30CxN2Im3oXNdDax58EGem4JdSLTQ8nIt69C+vm0jVpWNLCnLhrXvqjEj5eMepPdl+Gj1vD9Fx/vAwVhly4HLiJJyLeD4p2diJD+uw0lwbS8Fy4HBhfuAMsNnlTgywQCzoTJvJx31RNnYgCxN3hBEcmbGnuvspmN324eTSBS0gJF3ZJHiDX8P4MY6kbCZu0cP6vbByzL6C0hfWn0tvJMFD9Kyy5juZCRzOgabO5hbON5s/Gp8uR71AmPc0hEARHJuFmZarPNekhTIUvoLTb9afSDanA83D+m7TIqWTfB51z30G0KbSaRh13If+jaPCjxaSXE+rnp7xP4bmOKyxHM+ZCs7mgaY3mhbOny8/GUCaR7yEQPc0m4QRHqs9mZexP+8rfB51ztEG0KXeaRh1oIf+jpPCjxeeXE+qtf/bBm7Rw/u8YJfCfCg87eLVRZlk6ekJcSOEUGFy4HCxfuAODNnlTOiwQC3ETJvKd31RN3YgCxCbhBEe+bGnufcpmN6ZvyeTsNEP6zX6wN59epCF/vPRchlwMFeXo8Eg96JmgG19x1s"), esi7, ebx8);
    }
    goto a1;
}

/* std::__ndk1::char_traits<char>::assign(char&, char const&) */
signed char* _ZNSt6__ndk111char_traitsIcE6assignERcRKc(signed char* a1, signed char* a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, ...) {
    *a1 = *a2;
    return a2;
}

/* void swap<unsigned char>(unsigned char&, unsigned char&) */
signed char* _Z4swapIhEvRT_S1_(signed char* a1, signed char* a2) {
    signed char v3;

    v3 = *a1;
    *a1 = *a2;
    *a2 = v3;
    return a2;
}

/* std::__ndk1::vector<std::__ndk1::vector<unsigned char, std::__ndk1::allocator<unsigned char> >, std::__ndk1::allocator<std::__ndk1::vector<unsigned char, std::__ndk1::allocator<unsigned char> > > >::operator[](unsigned int) */
void*** _ZNSt6__ndk16vectorINS0_IhNS_9allocatorIhEEEENS1_IS3_EEEixEj(void** a1, void* a2) {
    void*** edx3;

    edx3 = reinterpret_cast<void***>(*reinterpret_cast<void***>(a1) + reinterpret_cast<uint32_t>(a2) * 12);
    return edx3;
}

/* std::__ndk1::vector<unsigned char, std::__ndk1::allocator<unsigned char> >::operator[](unsigned int) */
unsigned char* _ZNSt6__ndk16vectorIhNS_9allocatorIhEEEixEj(void*** a1, void*** a2) {
    unsigned char* edx3;

    edx3 = reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(*a1) + reinterpret_cast<uint32_t>(a2));
    return edx3;
}

void fun_50dd();

struct s9 {
    signed char[4812] pad4812;
    void** f4812;
};

/* Cipher::rotWord(unsigned char*) */
void _ZN6Cipher7rotWordEPh(void** ecx, void** a2, void*** a3);

/* Cipher::generateFirstRow(int, unsigned char*) */
void _ZN6Cipher16generateFirstRowEiPh(void* a1, void** a2) {
    void** ecx3;
    void** v4;
    int32_t v5;
    struct s9* v6;
    void* v7;
    void*** eax8;
    void*** v9;
    unsigned char* eax10;
    void* v11;
    void* v12;
    void* edx13;
    void*** eax14;
    void*** v15;
    unsigned char* eax16;
    uint32_t ecx17;
    uint32_t eax18;

    fun_50dd();
    ecx3 = a2;
    v4 = reinterpret_cast<void**>(0);
    v5 = 1;
    v6 = reinterpret_cast<struct s9*>(reinterpret_cast<int32_t>(v7) + 0xde47);
    while (v5 <= 4) {
        eax8 = _ZNSt6__ndk16vectorINS0_IhNS_9allocatorIhEEEENS1_IS3_EEEixEj(&v6->f4812, a1);
        v9 = reinterpret_cast<void***>((v5 << 2) - 1);
        eax10 = _ZNSt6__ndk16vectorIhNS_9allocatorIhEEEixEj(eax8, v9);
        *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(a2) + reinterpret_cast<unsigned char>(v4)) = *eax10;
        ecx3 = v4 + 1;
        v4 = ecx3;
        ++v5;
    }
    _ZN6Cipher7rotWordEPh(ecx3, a2, v9);
    v11 = reinterpret_cast<void*>(0);
    while (reinterpret_cast<int32_t>(v11) < reinterpret_cast<int32_t>(4)) {
        *reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(a2) + reinterpret_cast<uint32_t>(v11)) = *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(v6) + (((reinterpret_cast<uint32_t>(reinterpret_cast<int32_t>(static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(a2) + reinterpret_cast<uint32_t>(v11)))) >> 4) & 15) << 4) + (static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(a2) + reinterpret_cast<uint32_t>(v11))) & 15)) + 0xe0);
        v11 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(v11) + 1);
    }
    v12 = reinterpret_cast<void*>(0);
    while (reinterpret_cast<int32_t>(v12) < reinterpret_cast<int32_t>(4)) {
        edx13 = reinterpret_cast<void*>(static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(a2) + reinterpret_cast<uint32_t>(v12))));
        eax14 = _ZNSt6__ndk16vectorINS0_IhNS_9allocatorIhEEEENS1_IS3_EEEixEj(&v6->f4812, edx13);
        v15 = reinterpret_cast<void***>(reinterpret_cast<uint32_t>(v12) << 2);
        eax16 = _ZNSt6__ndk16vectorIhNS_9allocatorIhEEEixEj(eax14, v15);
        ecx17 = reinterpret_cast<uint32_t>(v15) ^ static_cast<uint32_t>(*eax16);
        *reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(a2) + reinterpret_cast<uint32_t>(v12)) = *reinterpret_cast<signed char*>(&ecx17);
        if (!v12) {
            eax18 = static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(a2) + reinterpret_cast<uint32_t>(v12))) ^ static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(v6) + reinterpret_cast<uint32_t>(a1) + 0x2e0));
            *reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(a2) + reinterpret_cast<uint32_t>(v12)) = *reinterpret_cast<signed char*>(&eax18);
        }
        v12 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(v12) + 1);
    }
    goto a1;
}

void fun_6c7d();

/* std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::operator[](unsigned int) */
void** _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEixEj(void** a1, void** a2) {
    void** esi3;

    fun_6c7d();
    _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE13__get_pointerEv(a1, a1, a2, esi3);
    goto a1;
}

void fun_589d();

/* std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::size() const */
void** _ZNKSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE4sizeEv(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, ...);

/* Cipher::subBytes(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >&, bool) */
void _ZN6Cipher8subBytesERNSt6__ndk112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEb(void** a1, unsigned char a2) {
    void* v3;
    void* v4;
    uint16_t v5;
    void** v6;
    void** v7;
    void** v8;
    void** v9;
    void** v10;
    void** v11;
    void** eax12;
    void** eax13;
    void** eax14;
    void** eax15;
    void** cl16;
    void** eax17;
    uint16_t v18;
    void** v19;
    void** v20;
    void** v21;
    void** v22;
    void** v23;
    void** v24;
    void** eax25;
    void** eax26;
    void** eax27;
    void** eax28;
    void** cl29;
    void** eax30;

    fun_589d();
    v3 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(v4) + 0xd687);
    if (!(reinterpret_cast<unsigned char>(a2 & 1) & 1)) {
        v5 = 0;
        while (v6 = reinterpret_cast<void**>(static_cast<uint32_t>(v5)), eax12 = _ZNKSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE4sizeEv(a1, v7, v8, v9, v6, v10, v11), reinterpret_cast<unsigned char>(v6) < reinterpret_cast<unsigned char>(eax12)) {
            eax13 = _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEixEj(a1, static_cast<uint32_t>(v5));
            eax14 = reinterpret_cast<void**>((reinterpret_cast<uint32_t>(static_cast<int32_t>(reinterpret_cast<signed char>(*reinterpret_cast<void***>(eax13))) >> 4) & 15) << 4);
            v9 = eax14;
            eax15 = _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEixEj(a1, static_cast<uint32_t>(v5));
            cl16 = *reinterpret_cast<void***>(reinterpret_cast<int32_t>(v3) + (reinterpret_cast<unsigned char>(v9) + (reinterpret_cast<uint32_t>(static_cast<int32_t>(reinterpret_cast<signed char>(*reinterpret_cast<void***>(eax15)))) & 15)) + 0x1e0);
            v7 = reinterpret_cast<void**>(static_cast<uint32_t>(v5));
            (&v8)[3] = cl16;
            eax17 = _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEixEj(a1, v7);
            *reinterpret_cast<void***>(eax17) = (&v8)[3];
            v5 = reinterpret_cast<uint16_t>(v5 + 1);
        }
    } else {
        v18 = 0;
        while (eax25 = _ZNKSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE4sizeEv(a1, v19, v20, v21, v22, v23, v24), reinterpret_cast<unsigned char>(static_cast<uint32_t>(v18)) < reinterpret_cast<unsigned char>(eax25)) {
            eax26 = _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEixEj(a1, static_cast<uint32_t>(v18));
            eax27 = reinterpret_cast<void**>((reinterpret_cast<uint32_t>(static_cast<int32_t>(reinterpret_cast<signed char>(*reinterpret_cast<void***>(eax26))) >> 4) & 15) << 4);
            v24 = eax27;
            eax28 = _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEixEj(a1, static_cast<uint32_t>(v18));
            cl29 = *reinterpret_cast<void***>(reinterpret_cast<int32_t>(v3) + (reinterpret_cast<unsigned char>(v24) + (reinterpret_cast<uint32_t>(static_cast<int32_t>(reinterpret_cast<signed char>(*reinterpret_cast<void***>(eax28)))) & 15)) + 0xe0);
            v19 = reinterpret_cast<void**>(static_cast<uint32_t>(v18));
            (&v23)[3] = cl29;
            eax30 = _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEixEj(a1, v19);
            *reinterpret_cast<void***>(eax30) = (&v23)[3];
            v18 = reinterpret_cast<uint16_t>(v18 + 1);
        }
    }
    goto a1;
}

void fun_5a2c();

struct s10 {
    signed char[54520] pad54520;
    void** f54520;
};

/* void swap<char>(char&, char&) */
void** _Z4swapIcEvRT_S1_(void** a1, void** a2);

/* Cipher::shiftRows(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >&, bool) */
void _ZN6Cipher9shiftRowsERNSt6__ndk112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEb(void** a1, unsigned char a2) {
    void** v3;
    struct s10* v4;
    uint16_t v5;
    void** v6;
    void** v7;
    void** v8;
    void** v9;
    void** v10;
    void** eax11;
    int32_t v12;
    int32_t eax13;
    void** eax14;
    void** eax15;
    uint32_t eax16;
    uint16_t v17;
    void** v18;
    void** v19;
    void** v20;
    void** v21;
    void** v22;
    void** eax23;
    int32_t v24;
    int32_t eax25;
    void** v26;
    void** eax27;
    void** eax28;
    uint32_t eax29;

    fun_5a2c();
    v3 = reinterpret_cast<void**>(&v4->f54520);
    if (!(reinterpret_cast<unsigned char>(a2 & 1) & 1)) {
        v5 = 4;
        while (v6 = reinterpret_cast<void**>(static_cast<uint32_t>(v5)), eax11 = _ZNKSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE4sizeEv(a1, v7, v6, v8, v9, v3, v10), reinterpret_cast<unsigned char>(v6) < reinterpret_cast<unsigned char>(eax11)) {
            __asm__("cdq ");
            v12 = reinterpret_cast<int32_t>(static_cast<uint32_t>(v5)) / 4;
            while (eax13 = v12, v12 = eax13 - 1, !!eax13) {
                v10 = reinterpret_cast<void**>(v5 + 3);
                while (reinterpret_cast<signed char>(v10) > reinterpret_cast<signed char>(static_cast<uint32_t>(v5))) {
                    eax14 = _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEixEj(a1, v10);
                    eax15 = _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEixEj(a1, eax14);
                    v7 = eax15;
                    _Z4swapIcEvRT_S1_(eax14, v7);
                    --v10;
                }
            }
            eax16 = v5 + 4;
            v5 = *reinterpret_cast<uint16_t*>(&eax16);
        }
    } else {
        v17 = 4;
        while (v18 = reinterpret_cast<void**>(static_cast<uint32_t>(v17)), eax23 = _ZNKSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE4sizeEv(a1, v19, v20, v21, v18, v3, v22), reinterpret_cast<unsigned char>(v18) < reinterpret_cast<unsigned char>(eax23)) {
            __asm__("cdq ");
            v24 = reinterpret_cast<int32_t>(static_cast<uint32_t>(v17)) / 4;
            while (eax25 = v24, v24 = eax25 - 1, !!eax25) {
                v26 = reinterpret_cast<void**>(static_cast<uint32_t>(v17));
                while (reinterpret_cast<signed char>(v26) < reinterpret_cast<signed char>(v17 + 3)) {
                    eax27 = _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEixEj(a1, v26);
                    v21 = eax27;
                    eax28 = _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEixEj(a1, v26 + 1);
                    v19 = eax28;
                    _Z4swapIcEvRT_S1_(v21, v19);
                    ++v26;
                }
            }
            eax29 = v17 + 4;
            v17 = *reinterpret_cast<uint16_t*>(&eax29);
        }
    }
    goto a1;
}

void fun_5c11();

/* std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */
void _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(void** a1, void** a2);

/* Cipher::GMul(unsigned char, unsigned char) */
unsigned char _ZN6Cipher4GMulEhh(unsigned char a1, unsigned char a2);

/* std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::operator=(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */
void _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(void** a1, void** a2);

/* std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::~basic_string() */
void _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(void** a1, void** a2, void** a3, int32_t a4, void** a5, void** a6);

/* Cipher::mixColumns(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >&, bool) */
void _ZN6Cipher10mixColumnsERNSt6__ndk112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEb(void** a1, unsigned char a2) {
    void* ebp3;
    void** v4;
    uint16_t v5;
    void** v6;
    void** v7;
    void** v8;
    void** v9;
    void** v10;
    void** eax11;
    void** eax12;
    uint32_t v13;
    unsigned char al14;
    void** eax15;
    uint32_t v16;
    unsigned char al17;
    void** eax18;
    uint32_t v19;
    unsigned char al20;
    void** eax21;
    uint32_t v22;
    unsigned char al23;
    uint32_t edx24;
    void** eax25;
    void** eax26;
    uint32_t v27;
    unsigned char al28;
    void** eax29;
    uint32_t v30;
    unsigned char al31;
    void** eax32;
    uint32_t v33;
    unsigned char al34;
    void** eax35;
    uint32_t v36;
    unsigned char al37;
    uint32_t edx38;
    void** eax39;
    void** eax40;
    uint32_t v41;
    unsigned char al42;
    void** eax43;
    uint32_t v44;
    unsigned char al45;
    void** eax46;
    uint32_t v47;
    unsigned char al48;
    void** eax49;
    uint32_t v50;
    unsigned char al51;
    uint32_t edx52;
    void** eax53;
    void** eax54;
    uint32_t v55;
    unsigned char al56;
    void** eax57;
    uint32_t v58;
    unsigned char al59;
    void** eax60;
    uint32_t v61;
    unsigned char al62;
    void** eax63;
    uint32_t v64;
    unsigned char al65;
    uint32_t edx66;
    void** eax67;
    uint32_t eax68;
    uint16_t v69;
    void** v70;
    void** v71;
    void** v72;
    void** v73;
    void** v74;
    void** eax75;
    void** eax76;
    uint32_t v77;
    unsigned char al78;
    void** eax79;
    uint32_t v80;
    unsigned char al81;
    void** eax82;
    uint32_t ecx83;
    void** eax84;
    uint32_t ecx85;
    void** eax86;
    void** eax87;
    uint32_t eax88;
    void** eax89;
    uint32_t v90;
    unsigned char al91;
    void** eax92;
    uint32_t v93;
    unsigned char al94;
    void** eax95;
    uint32_t ecx96;
    void** eax97;
    void** eax98;
    void** cl99;
    void** eax100;
    uint32_t eax101;
    void** eax102;
    uint32_t v103;
    unsigned char al104;
    void** eax105;
    uint32_t v106;
    unsigned char al107;
    uint32_t edx108;
    void** eax109;
    void** eax110;
    uint32_t v111;
    unsigned char al112;
    void** eax113;
    uint32_t ecx114;
    void** eax115;
    uint32_t ecx116;
    void** eax117;
    uint32_t v118;
    unsigned char al119;
    uint32_t edx120;
    void** eax121;
    uint32_t eax122;
    void** v123;
    void** v124;
    int32_t v125;

    ebp3 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4);
    fun_5c11();
    v4 = a1;
    _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(reinterpret_cast<int32_t>(ebp3) + 0xffffffe0, v4);
    if (!(reinterpret_cast<unsigned char>(a2 & 1) & 1)) {
        v5 = 0;
        while (eax11 = _ZNKSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE4sizeEv(a1, v4, v6, v7, v8, v9, v10), reinterpret_cast<unsigned char>(static_cast<uint32_t>(v5)) < reinterpret_cast<unsigned char>(eax11)) {
            eax12 = _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEixEj(a1, static_cast<uint32_t>(v5));
            v13 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax12));
            al14 = _ZN6Cipher4GMulEhh(14, *reinterpret_cast<unsigned char*>(&v13));
            eax15 = _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEixEj(a1, v5 + 1);
            v16 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax15));
            al17 = _ZN6Cipher4GMulEhh(11, *reinterpret_cast<unsigned char*>(&v16));
            eax18 = _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEixEj(a1, v5 + 2);
            v19 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax18));
            al20 = _ZN6Cipher4GMulEhh(13, *reinterpret_cast<unsigned char*>(&v19));
            eax21 = _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEixEj(a1, v5 + 3);
            v22 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax21));
            al23 = _ZN6Cipher4GMulEhh(9, *reinterpret_cast<unsigned char*>(&v22));
            edx24 = static_cast<uint32_t>(al14) ^ static_cast<uint32_t>(al17) ^ static_cast<uint32_t>(al20) ^ static_cast<uint32_t>(al23);
            eax25 = _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEixEj(reinterpret_cast<int32_t>(ebp3) + 0xffffffe0, static_cast<uint32_t>(v5));
            *reinterpret_cast<void***>(eax25) = *reinterpret_cast<void***>(&edx24);
            eax26 = _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEixEj(a1, static_cast<uint32_t>(v5));
            v27 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax26));
            al28 = _ZN6Cipher4GMulEhh(9, *reinterpret_cast<unsigned char*>(&v27));
            eax29 = _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEixEj(a1, v5 + 1);
            v30 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax29));
            al31 = _ZN6Cipher4GMulEhh(14, *reinterpret_cast<unsigned char*>(&v30));
            eax32 = _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEixEj(a1, v5 + 2);
            v33 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax32));
            al34 = _ZN6Cipher4GMulEhh(11, *reinterpret_cast<unsigned char*>(&v33));
            eax35 = _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEixEj(a1, v5 + 3);
            v36 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax35));
            al37 = _ZN6Cipher4GMulEhh(13, *reinterpret_cast<unsigned char*>(&v36));
            edx38 = static_cast<uint32_t>(al28) ^ static_cast<uint32_t>(al31) ^ static_cast<uint32_t>(al34) ^ static_cast<uint32_t>(al37);
            eax39 = _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEixEj(reinterpret_cast<int32_t>(ebp3) + 0xffffffe0, v5 + 1);
            *reinterpret_cast<void***>(eax39) = *reinterpret_cast<void***>(&edx38);
            eax40 = _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEixEj(a1, static_cast<uint32_t>(v5));
            v41 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax40));
            al42 = _ZN6Cipher4GMulEhh(13, *reinterpret_cast<unsigned char*>(&v41));
            eax43 = _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEixEj(a1, v5 + 1);
            v44 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax43));
            al45 = _ZN6Cipher4GMulEhh(9, *reinterpret_cast<unsigned char*>(&v44));
            eax46 = _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEixEj(a1, v5 + 2);
            v47 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax46));
            al48 = _ZN6Cipher4GMulEhh(14, *reinterpret_cast<unsigned char*>(&v47));
            eax49 = _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEixEj(a1, v5 + 3);
            v50 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax49));
            al51 = _ZN6Cipher4GMulEhh(11, *reinterpret_cast<unsigned char*>(&v50));
            edx52 = static_cast<uint32_t>(al42) ^ static_cast<uint32_t>(al45) ^ static_cast<uint32_t>(al48) ^ static_cast<uint32_t>(al51);
            eax53 = _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEixEj(reinterpret_cast<int32_t>(ebp3) + 0xffffffe0, v5 + 2);
            *reinterpret_cast<void***>(eax53) = *reinterpret_cast<void***>(&edx52);
            eax54 = _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEixEj(a1, static_cast<uint32_t>(v5));
            v55 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax54));
            al56 = _ZN6Cipher4GMulEhh(11, *reinterpret_cast<unsigned char*>(&v55));
            eax57 = _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEixEj(a1, v5 + 1);
            v58 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax57));
            al59 = _ZN6Cipher4GMulEhh(13, *reinterpret_cast<unsigned char*>(&v58));
            eax60 = _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEixEj(a1, v5 + 2);
            v61 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax60));
            al62 = _ZN6Cipher4GMulEhh(9, *reinterpret_cast<unsigned char*>(&v61));
            *reinterpret_cast<unsigned char*>(&v10 + 3) = al62;
            v9 = reinterpret_cast<void**>(static_cast<uint32_t>(al56) ^ static_cast<uint32_t>(al59) ^ static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(&v10 + 3)));
            eax63 = _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEixEj(a1, v5 + 3);
            v64 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax63));
            al65 = _ZN6Cipher4GMulEhh(14, *reinterpret_cast<unsigned char*>(&v64));
            *reinterpret_cast<unsigned char*>(&v8 + 3) = al65;
            edx66 = reinterpret_cast<unsigned char>(v9) ^ static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(&v8 + 3));
            v4 = reinterpret_cast<void**>(v5 + 3);
            (&v8)[2] = *reinterpret_cast<void***>(&edx66);
            eax67 = _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEixEj(reinterpret_cast<int32_t>(ebp3) + 0xffffffe0, v4);
            *reinterpret_cast<void***>(eax67) = (&v8)[2];
            eax68 = v5 + 4;
            v5 = *reinterpret_cast<uint16_t*>(&eax68);
        }
    } else {
        v69 = 0;
        while (eax75 = _ZNKSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE4sizeEv(a1, v4, v70, v71, v72, v73, v74), reinterpret_cast<unsigned char>(static_cast<uint32_t>(v69)) < reinterpret_cast<unsigned char>(eax75)) {
            eax76 = _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEixEj(a1, static_cast<uint32_t>(v69));
            v77 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax76));
            al78 = _ZN6Cipher4GMulEhh(2, *reinterpret_cast<unsigned char*>(&v77));
            eax79 = _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEixEj(a1, v69 + 1);
            v80 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax79));
            al81 = _ZN6Cipher4GMulEhh(3, *reinterpret_cast<unsigned char*>(&v80));
            eax82 = _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEixEj(a1, v69 + 2);
            ecx83 = static_cast<uint32_t>(al78) ^ static_cast<uint32_t>(al81) ^ static_cast<uint32_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax82)));
            eax84 = _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEixEj(a1, v69 + 3);
            ecx85 = ecx83 ^ static_cast<uint32_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax84)));
            eax86 = _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEixEj(reinterpret_cast<int32_t>(ebp3) + 0xffffffe0, static_cast<uint32_t>(v69));
            *reinterpret_cast<void***>(eax86) = *reinterpret_cast<void***>(&ecx85);
            eax87 = _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEixEj(a1, static_cast<uint32_t>(v69));
            eax88 = reinterpret_cast<uint32_t>(static_cast<int32_t>(reinterpret_cast<signed char>(*reinterpret_cast<void***>(eax87))));
            eax89 = _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEixEj(a1, v69 + 1);
            v90 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax89));
            al91 = _ZN6Cipher4GMulEhh(2, *reinterpret_cast<unsigned char*>(&v90));
            eax92 = _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEixEj(a1, v69 + 2);
            v93 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax92));
            al94 = _ZN6Cipher4GMulEhh(3, *reinterpret_cast<unsigned char*>(&v93));
            eax95 = _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEixEj(a1, v69 + 3);
            ecx96 = eax88 ^ static_cast<uint32_t>(al91) ^ static_cast<uint32_t>(al94) ^ static_cast<uint32_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax95)));
            eax97 = _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEixEj(reinterpret_cast<int32_t>(ebp3) + 0xffffffe0, v69 + 1);
            *reinterpret_cast<void***>(eax97) = *reinterpret_cast<void***>(&ecx96);
            eax98 = _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEixEj(a1, static_cast<uint32_t>(v69));
            cl99 = *reinterpret_cast<void***>(eax98);
            eax100 = _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEixEj(a1, v69 + 1);
            eax101 = reinterpret_cast<uint32_t>(static_cast<int32_t>(reinterpret_cast<signed char>(reinterpret_cast<unsigned char>(cl99) ^ reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax100)))));
            eax102 = _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEixEj(a1, v69 + 2);
            v103 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax102));
            al104 = _ZN6Cipher4GMulEhh(2, *reinterpret_cast<unsigned char*>(&v103));
            eax105 = _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEixEj(a1, v69 + 3);
            v106 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax105));
            al107 = _ZN6Cipher4GMulEhh(3, *reinterpret_cast<unsigned char*>(&v106));
            edx108 = eax101 ^ static_cast<uint32_t>(al104) ^ static_cast<uint32_t>(al107);
            eax109 = _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEixEj(reinterpret_cast<int32_t>(ebp3) + 0xffffffe0, v69 + 2);
            *reinterpret_cast<void***>(eax109) = *reinterpret_cast<void***>(&edx108);
            eax110 = _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEixEj(a1, static_cast<uint32_t>(v69));
            v111 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax110));
            al112 = _ZN6Cipher4GMulEhh(3, *reinterpret_cast<unsigned char*>(&v111));
            eax113 = _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEixEj(a1, v69 + 1);
            ecx114 = static_cast<uint32_t>(al112) ^ reinterpret_cast<uint32_t>(static_cast<int32_t>(reinterpret_cast<signed char>(*reinterpret_cast<void***>(eax113))));
            eax115 = _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEixEj(a1, v69 + 2);
            ecx116 = ecx114 ^ reinterpret_cast<uint32_t>(static_cast<int32_t>(reinterpret_cast<signed char>(*reinterpret_cast<void***>(eax115))));
            eax117 = _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEixEj(a1, v69 + 3);
            v118 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax117));
            al119 = _ZN6Cipher4GMulEhh(2, *reinterpret_cast<unsigned char*>(&v118));
            edx120 = ecx116 ^ static_cast<uint32_t>(al119);
            v4 = reinterpret_cast<void**>(v69 + 3);
            eax121 = _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEixEj(reinterpret_cast<int32_t>(ebp3) + 0xffffffe0, v4);
            *reinterpret_cast<void***>(eax121) = *reinterpret_cast<void***>(&edx120);
            eax122 = v69 + 4;
            v69 = *reinterpret_cast<uint16_t*>(&eax122);
        }
    }
    v123 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp3) + 0xffffffe0);
    _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(a1, v123);
    _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(reinterpret_cast<int32_t>(ebp3) + 0xffffffe0, v123, v124, v125, v8, v9);
    goto a1;
}

void fun_55bd();

struct s11 {
    signed char[4812] pad4812;
    void** f4812;
};

/* Cipher::addRoundKey(int, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >&) */
void _ZN6Cipher11addRoundKeyEiRNSt6__ndk112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE(void* a1, void** a2) {
    void*** v3;
    struct s11* v4;
    void* v5;
    int32_t v6;
    void** eax7;
    uint32_t eax8;
    void*** eax9;
    unsigned char* eax10;
    uint32_t ecx11;
    void** eax12;

    fun_55bd();
    v3 = reinterpret_cast<void***>(0);
    v4 = reinterpret_cast<struct s11*>(reinterpret_cast<int32_t>(v5) + 0xd967);
    while (reinterpret_cast<int32_t>(v3) < reinterpret_cast<int32_t>(4)) {
        v6 = 0;
        while (v6 < 4) {
            eax7 = _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEixEj(a2, (v6 << 2) + reinterpret_cast<uint32_t>(v3));
            eax8 = reinterpret_cast<uint32_t>(static_cast<int32_t>(reinterpret_cast<signed char>(*reinterpret_cast<void***>(eax7))));
            eax9 = _ZNSt6__ndk16vectorINS0_IhNS_9allocatorIhEEEENS1_IS3_EEEixEj(&v4->f4812, a1);
            eax10 = _ZNSt6__ndk16vectorIhNS_9allocatorIhEEEixEj(eax9, (v6 << 2) + reinterpret_cast<uint32_t>(v3));
            ecx11 = eax8 ^ static_cast<uint32_t>(*eax10);
            eax12 = _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEixEj(a2, (v6 << 2) + reinterpret_cast<uint32_t>(v3));
            *reinterpret_cast<void***>(eax12) = *reinterpret_cast<void***>(&ecx11);
            ++v6;
        }
        ++v3;
    }
    goto a1;
}

void fun_43be();

/* std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::__get_long_cap() const */
void** _ZNKSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE14__get_long_capEv(void** a1);

/* std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::__get_long_size() const */
void** _ZNKSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE15__get_long_sizeEv(void** a1, void** a2, void** a3);

/* std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::push_back(char) */
void _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc(void** a1, signed char a2, void** a3) {
    void* ebp4;
    void** v5;
    void** v6;
    void** v7;
    void** v8;
    void** v9;
    void** v10;
    void** v11;
    void** v12;
    unsigned char al13;
    unsigned char v14;
    void** eax15;
    void** v16;
    void** v17;
    void** v18;
    void** eax19;
    void** v20;
    void** eax21;
    void** v22;
    void** v23;
    void** v24;
    void** v25;
    unsigned char al26;
    void** eax27;
    signed char* v28;
    void** v29;
    void** v30;
    void** eax31;
    void** v32;
    signed char* v33;
    void** v34;
    int32_t v35;
    signed char* v36;
    void** v37;
    int32_t v38;

    ebp4 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4);
    fun_43be();
    al13 = _ZNKSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9__is_longEv(a1, v5, v6, v7, v8, v9, v10, v11, v12, a1, a1);
    v14 = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(al13 ^ 0xff) & 1);
    if (!(v14 & 1)) {
        eax15 = _ZNKSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE14__get_long_capEv(a1);
        v16 = eax15 - 1;
        eax19 = _ZNKSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE15__get_long_sizeEv(a1, v17, v18);
        v20 = eax19;
    } else {
        v16 = reinterpret_cast<void**>(10);
        eax21 = _ZNKSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE16__get_short_sizeEv(a1);
        v20 = eax21;
    }
    if (v20 == v16) {
        v22 = v16;
        v23 = v20;
        v24 = v20;
        _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9__grow_byEjjjjjj(a1, v22, 1, v23, v24, 0, 0);
        al26 = _ZNKSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9__is_longEv(a1, v22, 1, v23, v24, 0, 0, v25, 0, a1, a1);
        v14 = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(al26 ^ 0xff) & 1);
    }
    if (!(v14 & 1)) {
        eax27 = _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE18__get_long_pointerEv(a1, v22, 1, v23, v24, 0, 0);
        v28 = reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(eax27) + reinterpret_cast<unsigned char>(v20));
        _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE15__set_long_sizeEj(a1, v20 + 1, 1, v23, v24, 0, 0, v29, 0, a1, a1);
    } else {
        eax31 = _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE19__get_short_pointerEv(a1, v22, 1, v23, v24, 0, 0, v30, 0);
        v28 = reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(eax31) + reinterpret_cast<unsigned char>(v20));
        _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE16__set_short_sizeEj(a1, v20 + 1, 1, v23, v24, 0, 0, v32, 0);
    }
    v33 = reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(ebp4) + 12);
    _ZNSt6__ndk111char_traitsIcE6assignERcRKc(v28, v33, 1, v23, v24, 0, 0, v34, 0, a1, a1, v28, v33, 1, v23, v24, 0, 0, v35, 0, a1, a1);
    v36 = reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(ebp4) - 29);
    _ZNSt6__ndk111char_traitsIcE6assignERcRKc(v28 + 1, v36, 1, v23, v24, 0, 0, v37, 0, a1, a1, v28 + 1, v36, 1, v23, v24, 0, 0, v38, 0, a1, a1);
    goto a1;
}

void fun_4cec();

struct s12 {
    signed char[57912] pad57912;
    void** f57912;
};

/* std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::size() const */
void** _ZNKSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE4sizeEv(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, ...) {
    struct s12* v8;
    void** ebx9;
    void** ebp10;
    unsigned char al11;

    fun_4cec();
    al11 = _ZNKSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9__is_longEv(a1, a1, a1, reinterpret_cast<int32_t>(v8) + reinterpret_cast<uint32_t>("2mek1ZaURGnxopNZgTHe8SRFB5hX/WywPjgX+m7Rwfy/jkh+DsAju+g4PBXXvleVIM+xyKEpWlPHS5ULls3LpuAQZaOEf33lBif+xtI/jEAs6LKuDrYxF+Y99AsTdiJt6FzXQ2sefBBnpuCAhtjqQ7695VS2NUFeOd+0fR4OvY9vqYRwYXLgDLF+4U4M2eQs6LBDycRMmTZ3fVMTdiAJHJuEE7r5saTd9ymZFy8WGucsSxWGhPvzwtFlviVe5HuJ+LFgYiH1nf7z0XIZcDBW4ibgc3g8nIua9C+tY0jVpuNLCnKNrXvoxEj5eX+pPdsOGj1to4R/feUGJ/7G0j+MQCzosq4OtjEX5j30CxN2Im3oXNdDax58EGem4JdSLTQ8nIt69C+vm0jVpWNLCnLhrXvqjEj5eMepPdl+Gj1vD9Fx/vAwVhly4HLiJJyLeD4p2diJD+uw0lwbS8Fy4HBhfuAMsNnlTgywQCzoTJvJx31RNnYgCxN3hBEcmbGnuvspmN324eTSBS0gJF3ZJHiDX8P4MY6kbCZu0cP6vbByzL6C0hfWn0tvJMFD9Kyy5juZCRzOgabO5hbON5s/Gp8uR71AmPc0hEARHJuFmZarPNekhTIUvoLTb9afSDanA83D+m7TIqWTfB51z30G0KbSaRh13If+jaPCjxaSXE+rnp7xP4bmOKyxHM+ZCs7mgaY3mhbOny8/GUCaR7yEQPc0m4QRHqs9mZexP+8rfB51ztEG0KXeaRh1oIf+jpPCjxeeXE+qtf/bBm7Rw/u8YJfCfCg87eLVRZlk6ekJcSOEUGFy4HCxfuAODNnlTOiwQC3ETJvKd31RN3YgCxCbhBEe+bGnufcpmN6ZvyeTsNEP6zX6wN59epCF/vPRchlwMFeXo8Eg96JmgG19x1seTnyPhH99oQYn/ebSP47ELOiwQg62Mq/mPfUXE3YgCehc1m9rHn9AZ6bgEkTYAe5mgPehx1htfnyPHk3+89FyGXAwVVuxRj3c4LQyDQzHCKyy5juZ"), ebx9, ebp10, __return_address(), a1, a2, a3, a4);
    if (al11 & 1) {
        _ZNKSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE15__get_long_sizeEv(a1, a1, a1);
    } else {
        _ZNKSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE16__get_short_sizeEv(a1);
    }
    goto a1;
}

/* void swap<char>(char&, char&) */
void** _Z4swapIcEvRT_S1_(void** a1, void** a2) {
    void** v3;

    v3 = *reinterpret_cast<void***>(a1);
    *reinterpret_cast<void***>(a1) = *reinterpret_cast<void***>(a2);
    *reinterpret_cast<void***>(a2) = v3;
    return a2;
}

/* Cipher::GMul(unsigned char, unsigned char) */
unsigned char _ZN6Cipher4GMulEhh(unsigned char a1, unsigned char a2) {
    unsigned char v3;
    unsigned char v4;
    uint32_t ecx5;
    uint32_t eax6;
    uint32_t ecx7;
    uint32_t eax8;
    int32_t eax9;
    uint32_t eax10;

    v3 = 0;
    v4 = 0;
    while (reinterpret_cast<int32_t>(static_cast<uint32_t>(v4)) < reinterpret_cast<int32_t>(8)) {
        if (static_cast<uint32_t>(a2) & 1) {
            ecx5 = static_cast<uint32_t>(v3) ^ static_cast<uint32_t>(a1);
            v3 = *reinterpret_cast<unsigned char*>(&ecx5);
        }
        eax6 = static_cast<uint32_t>(a1) & 0x80;
        ecx7 = static_cast<uint32_t>(a1) << 1;
        a1 = *reinterpret_cast<unsigned char*>(&ecx7);
        if (*reinterpret_cast<unsigned char*>(&eax6)) {
            eax8 = static_cast<uint32_t>(a1) ^ 27;
            a1 = *reinterpret_cast<unsigned char*>(&eax8);
        }
        eax9 = reinterpret_cast<int32_t>(static_cast<uint32_t>(a2)) >> 1;
        a2 = *reinterpret_cast<unsigned char*>(&eax9);
        v4 = reinterpret_cast<unsigned char>(v4 + 1);
    }
    eax10 = v3;
    return *reinterpret_cast<unsigned char*>(&eax10);
}

struct s13 {
    void** f0;
    signed char[3] pad4;
    void** f4;
};

/* std::initializer_list<unsigned char>::size() const */
void** _ZNKSt16initializer_listIhE4sizeEv(struct s13* a1, void** a2) {
    void** ecx3;

    ecx3 = a1->f4;
    return ecx3;
}

void fun_6f1e();

/* std::__ndk1::vector<unsigned char, std::__ndk1::allocator<unsigned char> >::max_size() const */
void** _ZNKSt6__ndk16vectorIhNS_9allocatorIhEEE8max_sizeEv(void** a1);

/* std::__ndk1::__vector_base_common<true>::__throw_length_error() const */
void _ZNKSt6__ndk120__vector_base_commonILb1EE20__throw_length_errorEv(void** a1);

/* std::__ndk1::__vector_base<unsigned char, std::__ndk1::allocator<unsigned char> >::__alloc() */
void** _ZNSt6__ndk113__vector_baseIhNS_9allocatorIhEEE7__allocEv(void** ecx, void** a2, void** a3);

/* std::__ndk1::allocator_traits<std::__ndk1::allocator<unsigned char> >::allocate(std::__ndk1::allocator<unsigned char>&, unsigned int) */
void** _ZNSt6__ndk116allocator_traitsINS_9allocatorIhEEE8allocateERS2_j(void** a1, void** a2);

/* std::__ndk1::__vector_base<unsigned char, std::__ndk1::allocator<unsigned char> >::__end_cap() */
void** _ZNSt6__ndk113__vector_baseIhNS_9allocatorIhEEE9__end_capEv(void** a1, void** a2);

/* std::__ndk1::vector<unsigned char, std::__ndk1::allocator<unsigned char> >::__annotate_new(unsigned int) const */
void _ZNKSt6__ndk16vectorIhNS_9allocatorIhEEE14__annotate_newEj(void** a1, int32_t a2);

/* std::__ndk1::vector<unsigned char, std::__ndk1::allocator<unsigned char> >::__vallocate(unsigned int) */
void _ZNSt6__ndk16vectorIhNS_9allocatorIhEEE11__vallocateEj(void** a1, void** a2) {
    void** eax3;
    void** v4;
    void** eax5;
    void** eax6;
    void* eax7;
    void** eax8;

    fun_6f1e();
    eax3 = _ZNKSt6__ndk16vectorIhNS_9allocatorIhEEE8max_sizeEv(a1);
    if (reinterpret_cast<unsigned char>(a2) > reinterpret_cast<unsigned char>(eax3)) {
        _ZNKSt6__ndk120__vector_base_commonILb1EE20__throw_length_errorEv(a1);
    }
    eax5 = _ZNSt6__ndk113__vector_baseIhNS_9allocatorIhEEE7__allocEv(a2, a1, v4);
    eax6 = _ZNSt6__ndk116allocator_traitsINS_9allocatorIhEEE8allocateERS2_j(eax5, a2);
    *reinterpret_cast<void***>(a1 + 4) = eax6;
    *reinterpret_cast<void***>(a1) = eax6;
    eax7 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(a1)) + reinterpret_cast<unsigned char>(a2));
    eax8 = _ZNSt6__ndk113__vector_baseIhNS_9allocatorIhEEE9__end_capEv(a1, a2);
    *eax8 = eax7;
    _ZNKSt6__ndk16vectorIhNS_9allocatorIhEEE14__annotate_newEj(a1, 0);
    goto a1;
}

/* std::__ndk1::vector<std::__ndk1::vector<unsigned char, std::__ndk1::allocator<unsigned char> >, std::__ndk1::allocator<std::__ndk1::vector<unsigned char, std::__ndk1::allocator<unsigned char> > > >::__RAII_IncreaseAnnotator::__RAII_IncreaseAnnotator(std::__ndk1::vector<std::__ndk1::vector<unsigned char, std::__ndk1::allocator<unsigned char> >, std::__ndk1::allocator<std::__ndk1::vector<unsigned char, std::__ndk1::allocator<unsigned char> > > > const&, unsigned int) */
void** _ZNSt6__ndk16vectorINS0_IhNS_9allocatorIhEEEENS1_IS3_EEE24__RAII_IncreaseAnnotatorC2ERKS5_j(void** a1, void** a2, void** a3) {
    return a3;
}

void fun_81bc();

/* std::__ndk1::__compressed_pair<std::__ndk1::vector<unsigned char, std::__ndk1::allocator<unsigned char> >*, std::__ndk1::allocator<std::__ndk1::vector<unsigned char, std::__ndk1::allocator<unsigned char> > > >::second() */
void _ZNSt6__ndk117__compressed_pairIPNS_6vectorIhNS_9allocatorIhEEEENS2_IS4_EEE6secondEv(void** a1);

/* std::__ndk1::__vector_base<std::__ndk1::vector<unsigned char, std::__ndk1::allocator<unsigned char> >, std::__ndk1::allocator<std::__ndk1::vector<unsigned char, std::__ndk1::allocator<unsigned char> > > >::__alloc() */
void** _ZNSt6__ndk113__vector_baseINS_6vectorIhNS_9allocatorIhEEEENS2_IS4_EEE7__allocEv(void** ecx, void** a2, void** a3, void** a4) {
    fun_81bc();
    _ZNSt6__ndk117__compressed_pairIPNS_6vectorIhNS_9allocatorIhEEEENS2_IS4_EEE6secondEv(a2 + 8);
    goto a2;
}

/* std::__ndk1::vector<unsigned char, std::__ndk1::allocator<unsigned char> >* std::__ndk1::__to_raw_pointer<std::__ndk1::vector<unsigned char, std::__ndk1::allocator<unsigned char> > >(std::__ndk1::vector<unsigned char, std::__ndk1::allocator<unsigned char> >*) */
void** _ZNSt6__ndk116__to_raw_pointerINS_6vectorIhNS_9allocatorIhEEEEEEPT_S6_(void** a1, void** a2, void** a3, void** a4, void** a5) {
    return a1;
}

void fun_85ae();

/* std::__ndk1::vector<unsigned char, std::__ndk1::allocator<unsigned char> > const& std::__ndk1::forward<std::__ndk1::vector<unsigned char, std::__ndk1::allocator<unsigned char> > const&>(std::__ndk1::remove_reference<std::__ndk1::vector<unsigned char, std::__ndk1::allocator<unsigned char> > const&>::type&) */
void** _ZNSt6__ndk17forwardIRKNS_6vectorIhNS_9allocatorIhEEEEEEOT_RNS_16remove_referenceIS7_E4typeE(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9);

/* void std::__ndk1::allocator_traits<std::__ndk1::allocator<std::__ndk1::vector<unsigned char, std::__ndk1::allocator<unsigned char> > > >::__construct<std::__ndk1::vector<unsigned char, std::__ndk1::allocator<unsigned char> >, std::__ndk1::vector<unsigned char, std::__ndk1::allocator<unsigned char> > const&>(std::__ndk1::integral_constant<bool, true>, std::__ndk1::allocator<std::__ndk1::vector<unsigned char, std::__ndk1::allocator<unsigned char> > >&, std::__ndk1::vector<unsigned char, std::__ndk1::allocator<unsigned char> >*, std::__ndk1::vector<unsigned char, std::__ndk1::allocator<unsigned char> > const&) */
void _ZNSt6__ndk116allocator_traitsINS_9allocatorINS_6vectorIhNS1_IhEEEEEEE11__constructIS4_JRKS4_EEEvNS_17integral_constantIbLb1EEERS5_PT_DpOT0_(void** a1, void** a2, void** a3);

/* void std::__ndk1::allocator_traits<std::__ndk1::allocator<std::__ndk1::vector<unsigned char, std::__ndk1::allocator<unsigned char> > > >::construct<std::__ndk1::vector<unsigned char, std::__ndk1::allocator<unsigned char> >, std::__ndk1::vector<unsigned char, std::__ndk1::allocator<unsigned char> > const&>(std::__ndk1::allocator<std::__ndk1::vector<unsigned char, std::__ndk1::allocator<unsigned char> > >&, std::__ndk1::vector<unsigned char, std::__ndk1::allocator<unsigned char> >*, std::__ndk1::vector<unsigned char, std::__ndk1::allocator<unsigned char> > const&) */
void _ZNSt6__ndk116allocator_traitsINS_9allocatorINS_6vectorIhNS1_IhEEEEEEE9constructIS4_JRKS4_EEEvRS5_PT_DpOT0_(void** a1, void** a2, void** a3, void** a4) {
    void** v5;
    void** v6;
    void** v7;
    void** v8;
    void** eax9;

    fun_85ae();
    eax9 = _ZNSt6__ndk17forwardIRKNS_6vectorIhNS_9allocatorIhEEEEEEOT_RNS_16remove_referenceIS7_E4typeE(a3, v5, v6, v7, v8, a1, a1, a2, a3);
    _ZNSt6__ndk116allocator_traitsINS_9allocatorINS_6vectorIhNS1_IhEEEEEEE11__constructIS4_JRKS4_EEEvNS_17integral_constantIbLb1EEERS5_PT_DpOT0_(a1, a2, eax9);
    goto a1;
}

/* std::__ndk1::vector<std::__ndk1::vector<unsigned char, std::__ndk1::allocator<unsigned char> >, std::__ndk1::allocator<std::__ndk1::vector<unsigned char, std::__ndk1::allocator<unsigned char> > > >::__RAII_IncreaseAnnotator::__done() */
void* _ZNSt6__ndk16vectorINS0_IhNS_9allocatorIhEEEENS1_IS3_EEE24__RAII_IncreaseAnnotator6__doneEv(void* a1, void** a2, void** a3) {
    return a1;
}

void fun_381c();

/* std::__ndk1::__compressed_pair_elem<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::__rep, 0, false>::__get() const */
void** _ZNKSt6__ndk122__compressed_pair_elemINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE5__repELi0ELb0EE5__getEv(void** a1);

/* std::__ndk1::__compressed_pair<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::__rep, std::__ndk1::allocator<char> >::first() const */
struct s4* _ZNKSt6__ndk117__compressed_pairINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE5__repES5_E5firstEv(void** a1, void** a2, void** a3, void** a4, int32_t a5) {
    fun_381c();
    _ZNKSt6__ndk122__compressed_pair_elemINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE5__repELi0ELb0EE5__getEv(a1);
    goto a1;
}

void fun_3a6c();

/* std::__ndk1::__compressed_pair_elem<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::__rep, 0, false>::__get() */
void** _ZNSt6__ndk122__compressed_pair_elemINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE5__repELi0ELb0EE5__getEv(void** a1);

/* std::__ndk1::__compressed_pair<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::__rep, std::__ndk1::allocator<char> >::first() */
struct s3* _ZNSt6__ndk117__compressed_pairINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE5__repES5_E5firstEv(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6, struct s4* a7) {
    fun_3a6c();
    _ZNSt6__ndk122__compressed_pair_elemINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE5__repELi0ELb0EE5__getEv(a1);
    goto a1;
}

void fun_9bae();

/* std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::__copy_assign_alloc(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&, std::__ndk1::integral_constant<bool, false>) */
void** _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE19__copy_assign_allocERKS5_NS_17integral_constantIbLb0EEE(void** a1, void** a2);

/* std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::__copy_assign_alloc(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */
void _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE19__copy_assign_allocERKS5_(void** a1, void** a2) {
    fun_9bae();
    _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE19__copy_assign_allocERKS5_NS_17integral_constantIbLb0EEE(a1, a2);
    goto a1;
}

void fun_494c();

/* std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::__get_pointer() const */
void** _ZNKSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE13__get_pointerEv(void** a1, void** a2, void** a3, void** a4, int32_t a5);

struct s14 {
    signed char[58840] pad58840;
    void** f58840;
};

/* char const* std::__ndk1::__to_raw_pointer<char const>(char const*) */
void** _ZNSt6__ndk116__to_raw_pointerIKcEEPT_S3_(void** a1, void** a2, void** a3);

/* std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::data() const */
void** _ZNKSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE4dataEv(void** a1, void** a2, void** a3, void** a4, int32_t a5, ...) {
    void** v6;
    struct s14* v7;
    int32_t ebx8;
    void** eax9;
    void** v10;

    fun_494c();
    eax9 = _ZNKSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE13__get_pointerEv(a1, v6, a1, reinterpret_cast<int32_t>(v7) + reinterpret_cast<uint32_t>("P47ELOiwQg62Mq/mPfUXE3YgCehc1m9rHn9AZ6bgEkTYAe5mgPehx1htfnyPHk3+89FyGXAwVVuxRj3c4LQyDQzHCKyy5juZCRzNO/7H7N+JqIqvch9+M6OLmybzqRn+89FyGXAwVzOrq1+rnjJBOOCPSq31tW50PjEC5jissRzPmQrO5oGmN5oWzp8vPxlAmke8hED3NJuEER6rPZmWb+bDpGVfWjmh5s61ncPno/0r9Qlx/vPQVhlwMjPOfLcAU7Agf32jhif95Qb0QTuMsuY4rRqUWQKmS6zYU7AjAf7z0XIZcDBW4ibgc3g8nIn5ryf2OiZ49UemiLSLe20oEGem4yC1e73k0gbifXqQhw+lHPAHYwIqDsAgf+g4P7nXvlQU21HtzLKhDF27gX2cmbiphVEkXJxKcwSWOzVcFIt4PJy8Xi0NR6aIt+iynCpu0cP6vbByzL6C0hWTo/H7GWupFlWTPRA5kpdlfcdYbArOo4iw+2LgjO5V6FyyoQ6A57zQnIt4PC+vmvTVpWNLCnLjSXvqjaz5eMRJPdl/qj1vDhlVv/SuvH0eDRZAA1UkXJ1T+O/n0Dyci3r0L6+bSNWlY0sKcuGte+qPxoxGjhgY1yh2gK95GTTA4/0jkD8C7N1KWk3EVUpCqJJwULlPAwC+BAFDFVXW+Q0TodWqnOreebFWqDW4Q5+XQX55xu0oTN+Ci/aIgWdukMg==7ai6NPV2bXGQr0Np5ImWzUjl6PCgPeiZ1htfcSPHk58UeVSEMzf9Yw3NIDiE3kwVE57U+9AmnUmFHEK6IvfKH2TS7CCq/VbM/O9R5SdZDW14bohAkY4uN9Wm/Col7ZLu07gKfimHuWgt8iNKBQUFBQ==XP5rChOX5IfmEBCR8F2EpKo+9bwFBQUFBQUFBQUFBQU=7ai6NPV2bXGQr0Np5ImWzfPuf0Hr5r0LdugZDjgPcx53OC0MEequZmEmbiqxeTMC6+a9C8Za6kXx2RPbCqs0PKTk+lCiiFMtFNPTO23sCWh"), ebx8);
    _ZNSt6__ndk116__to_raw_pointerIKcEEPT_S3_(eax9, v10, a1);
    goto a1;
}

void fun_9bee();

/* std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::capacity() const */
void** _ZNKSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE8capacityEv(void** a1, void** a2, void** a3, void** a4);

/* std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::__grow_by_and_replace(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, char const*) */
void _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE21__grow_by_and_replaceEjjjjjjPKc(void** a1, void** a2, void* a3, void** a4, void** a5, void** a6, void** a7, void** a8);

/* std::__ndk1::char_traits<char>::move(char*, char const*, unsigned int) */
int32_t _ZNSt6__ndk111char_traitsIcE4moveEPcPKcj(void** a1, void** a2, void** a3);

/* std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::__invalidate_iterators_past(unsigned int) */
void** _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE27__invalidate_iterators_pastEj(void** a1, void** a2, void** a3);

/* std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::assign(char const*, unsigned int) */
void _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6assignEPKcj(void** a1, void** a2, void** a3) {
    void** v4;
    void** v5;
    void** v6;
    void** eax7;
    void** v8;
    void** v9;
    void** v10;
    void** v11;
    void** v12;
    void** v13;
    void** eax14;
    void** v15;
    void** v16;
    void** v17;
    void** eax18;
    void** v19;
    void** v20;
    void** eax21;
    void** v22;
    void** v23;
    void** v24;
    void** v25;
    void** v26;
    void** v27;
    void** v28;
    void** v29;

    fun_9bee();
    eax7 = _ZNKSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE8capacityEv(a1, v4, v5, v6);
    if (reinterpret_cast<unsigned char>(eax7) < reinterpret_cast<unsigned char>(a3)) {
        eax14 = _ZNKSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE4sizeEv(a1, v8, v9, v10, v11, v12, v13);
        _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE21__grow_by_and_replaceEjjjjjjPKc(a1, eax7, reinterpret_cast<unsigned char>(a3) - reinterpret_cast<unsigned char>(eax7), eax14, 0, eax14, a3, a2);
    } else {
        eax18 = _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE13__get_pointerEv(a1, v15, v16, v17);
        eax21 = _ZNSt6__ndk116__to_raw_pointerIcEEPT_S2_(eax18, v19, v20);
        _ZNSt6__ndk111char_traitsIcE4moveEPcPKcj(eax21, a2, a3);
        _ZNSt6__ndk111char_traitsIcE6assignERcRKc(reinterpret_cast<unsigned char>(eax21) + reinterpret_cast<unsigned char>(a3), reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 - 21, a3, v22, v23, v24, v25, v26, v27, v28, v29);
        _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE10__set_sizeEj(a1, a3, a3);
        _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE27__invalidate_iterators_pastEj(a1, a3, a3);
    }
    goto a1;
}

void fun_72ec();

void fun_731e();

/* std::__ndk1::allocator<unsigned char>::allocate(unsigned int, void const*) */
void _ZNSt6__ndk19allocatorIhE8allocateEjPKv(void** a1, void** a2, void** a3, int32_t a4, void** a5, void** a6, int32_t a7);

/* std::__ndk1::__vector_base_common<true>::__throw_length_error() const */
void _ZNKSt6__ndk120__vector_base_commonILb1EE20__throw_length_errorEv(void** a1) {
    int32_t v2;
    void** v3;
    void** v4;
    int32_t ebx5;
    void** ebp6;
    void** v7;
    void** v8;
    void** v9;
    void** v10;
    int32_t esi11;
    int32_t v12;

    fun_72ec();
    _ZNSt6__ndk120__throw_length_errorEPKc(v2 + 0xbc38 + 0xffffc461, v3, v4, a1, ebx5, ebp6, __return_address());
    fun_731e();
    _ZNSt6__ndk19allocatorIhE8allocateEjPKv(v7, v8, 0, 0, v9, v10, esi11);
    goto v12;
}

void fun_736c();

/* std::__ndk1::__compressed_pair<unsigned char*, std::__ndk1::allocator<unsigned char> >::second() */
void _ZNSt6__ndk117__compressed_pairIPhNS_9allocatorIhEEE6secondEv(void** a1);

/* std::__ndk1::__vector_base<unsigned char, std::__ndk1::allocator<unsigned char> >::__alloc() */
void** _ZNSt6__ndk113__vector_baseIhNS_9allocatorIhEEE7__allocEv(void** ecx, void** a2, void** a3) {
    fun_736c();
    _ZNSt6__ndk117__compressed_pairIPhNS_9allocatorIhEEE6secondEv(a2 + 8);
    goto a2;
}

/* std::__ndk1::allocator_traits<std::__ndk1::allocator<unsigned char> >::allocate(std::__ndk1::allocator<unsigned char>&, unsigned int) */
void** _ZNSt6__ndk116allocator_traitsINS_9allocatorIhEEE8allocateERS2_j(void** a1, void** a2) {
    int32_t esi3;

    fun_731e();
    _ZNSt6__ndk19allocatorIhE8allocateEjPKv(a1, a2, 0, 0, a1, a2, esi3);
    goto a1;
}

void fun_739c();

/* std::__ndk1::__compressed_pair<unsigned char*, std::__ndk1::allocator<unsigned char> >::first() */
void _ZNSt6__ndk117__compressed_pairIPhNS_9allocatorIhEEE5firstEv(void** a1);

/* std::__ndk1::__vector_base<unsigned char, std::__ndk1::allocator<unsigned char> >::__end_cap() */
void** _ZNSt6__ndk113__vector_baseIhNS_9allocatorIhEEE9__end_capEv(void** a1, void** a2) {
    fun_739c();
    _ZNSt6__ndk117__compressed_pairIPhNS_9allocatorIhEEE5firstEv(a1 + 8);
    goto a1;
}

void fun_73cd();

/* std::__ndk1::vector<unsigned char, std::__ndk1::allocator<unsigned char> >::data() const */
int32_t _ZNKSt6__ndk16vectorIhNS_9allocatorIhEEE4dataEv(void** a1);

/* std::__ndk1::vector<unsigned char, std::__ndk1::allocator<unsigned char> >::capacity() const */
int32_t _ZNKSt6__ndk16vectorIhNS_9allocatorIhEEE8capacityEv(void** a1);

/* std::__ndk1::vector<unsigned char, std::__ndk1::allocator<unsigned char> >::__annotate_contiguous_container(void const*, void const*, void const*, void const*) const */
int32_t _ZNKSt6__ndk16vectorIhNS_9allocatorIhEEE31__annotate_contiguous_containerEPKvS5_S5_S5_(void** a1, int32_t a2, int32_t a3, uint32_t a4, int32_t a5);

/* std::__ndk1::vector<unsigned char, std::__ndk1::allocator<unsigned char> >::__annotate_new(unsigned int) const */
void _ZNKSt6__ndk16vectorIhNS_9allocatorIhEEE14__annotate_newEj(void** a1, int32_t a2) {
    int32_t eax3;
    int32_t eax4;
    int32_t eax5;
    int32_t eax6;
    int32_t eax7;
    int32_t eax8;

    fun_73cd();
    eax3 = _ZNKSt6__ndk16vectorIhNS_9allocatorIhEEE4dataEv(a1);
    eax4 = _ZNKSt6__ndk16vectorIhNS_9allocatorIhEEE4dataEv(a1);
    eax5 = _ZNKSt6__ndk16vectorIhNS_9allocatorIhEEE8capacityEv(a1);
    eax6 = _ZNKSt6__ndk16vectorIhNS_9allocatorIhEEE4dataEv(a1);
    eax7 = _ZNKSt6__ndk16vectorIhNS_9allocatorIhEEE8capacityEv(a1);
    eax8 = _ZNKSt6__ndk16vectorIhNS_9allocatorIhEEE4dataEv(a1);
    _ZNKSt6__ndk16vectorIhNS_9allocatorIhEEE31__annotate_contiguous_containerEPKvS5_S5_S5_(a1, eax3, eax4 + eax5, eax6 + eax7, eax8 + a2);
    goto a1;
}

void fun_798d();

/* std::__ndk1::__vector_base<unsigned char, std::__ndk1::allocator<unsigned char> >::__destruct_at_end(unsigned char*) */
void _ZNSt6__ndk113__vector_baseIhNS_9allocatorIhEEE17__destruct_at_endEPh(void** a1, void** a2, void** a3, int32_t a4);

/* std::__ndk1::__vector_base<unsigned char, std::__ndk1::allocator<unsigned char> >::clear() */
void _ZNSt6__ndk113__vector_baseIhNS_9allocatorIhEEE5clearEv(void** ecx, void** a2) {
    void** esi3;
    int32_t esi4;

    fun_798d();
    esi3 = *reinterpret_cast<void***>(a2);
    _ZNSt6__ndk113__vector_baseIhNS_9allocatorIhEEE17__destruct_at_endEPh(a2, esi3, a2, esi4);
    goto a2;
}

void fun_783c();

/* std::__ndk1::__vector_base<unsigned char, std::__ndk1::allocator<unsigned char> >::__end_cap() const */
int32_t _ZNKSt6__ndk113__vector_baseIhNS_9allocatorIhEEE9__end_capEv(void** a1);

/* std::__ndk1::__vector_base<unsigned char, std::__ndk1::allocator<unsigned char> >::capacity() const */
int32_t _ZNKSt6__ndk113__vector_baseIhNS_9allocatorIhEEE8capacityEv(void** a1) {
    fun_783c();
    _ZNKSt6__ndk113__vector_baseIhNS_9allocatorIhEEE9__end_capEv(a1);
    goto a1;
}

void fun_79ce();

/* std::__ndk1::allocator<unsigned char>::deallocate(unsigned char*, unsigned int) */
void _ZNSt6__ndk19allocatorIhE10deallocateEPhj(void** a1, void** a2, void** a3, void** a4, int32_t a5);

/* std::__ndk1::allocator_traits<std::__ndk1::allocator<unsigned char> >::deallocate(std::__ndk1::allocator<unsigned char>&, unsigned char*, unsigned int) */
void _ZNSt6__ndk116allocator_traitsINS_9allocatorIhEEE10deallocateERS2_Phj(void** a1, void** a2, int32_t a3) {
    fun_79ce();
    _ZNSt6__ndk19allocatorIhE10deallocateEPhj(a1, a2, a1, a2, a3);
    goto a1;
}

struct s15 {
    signed char[12] pad12;
    int32_t f12;
};

int32_t fun_2010(void** a1, void** a2, void** a3) {
    struct s15* ebx4;

    goto ebx4->f12;
}

/* unsigned char* std::__ndk1::__to_raw_pointer<unsigned char>(unsigned char*) */
void** _ZNSt6__ndk116__to_raw_pointerIhEEPT_S2_(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7) {
    return a1;
}

void fun_7abe();

/* void std::__ndk1::allocator_traits<std::__ndk1::allocator<unsigned char> >::__destroy<unsigned char>(std::__ndk1::integral_constant<bool, true>, std::__ndk1::allocator<unsigned char>&, unsigned char*) */
void _ZNSt6__ndk116allocator_traitsINS_9allocatorIhEEE9__destroyIhEEvNS_17integral_constantIbLb1EEERS2_PT_(void** a1, void** a2, void** a3);

/* void std::__ndk1::allocator_traits<std::__ndk1::allocator<unsigned char> >::destroy<unsigned char>(std::__ndk1::allocator<unsigned char>&, unsigned char*) */
void _ZNSt6__ndk116allocator_traitsINS_9allocatorIhEEE7destroyIhEEvRS2_PT_(void** a1, void** a2) {
    fun_7abe();
    _ZNSt6__ndk116allocator_traitsINS_9allocatorIhEEE9__destroyIhEEvNS_17integral_constantIbLb1EEERS2_PT_(a1, a1, a2);
    goto a1;
}

void fun_812d();

/* std::__ndk1::__vector_base<std::__ndk1::vector<unsigned char, std::__ndk1::allocator<unsigned char> >, std::__ndk1::allocator<std::__ndk1::vector<unsigned char, std::__ndk1::allocator<unsigned char> > > >::__destruct_at_end(std::__ndk1::vector<unsigned char, std::__ndk1::allocator<unsigned char> >*) */
void _ZNSt6__ndk113__vector_baseINS_6vectorIhNS_9allocatorIhEEEENS2_IS4_EEE17__destruct_at_endEPS4_(void** a1, void** a2, void** a3, int32_t a4);

/* std::__ndk1::__vector_base<std::__ndk1::vector<unsigned char, std::__ndk1::allocator<unsigned char> >, std::__ndk1::allocator<std::__ndk1::vector<unsigned char, std::__ndk1::allocator<unsigned char> > > >::clear() */
void _ZNSt6__ndk113__vector_baseINS_6vectorIhNS_9allocatorIhEEEENS2_IS4_EEE5clearEv(void** ecx, void** a2) {
    void** esi3;
    int32_t esi4;

    fun_812d();
    esi3 = *reinterpret_cast<void***>(a2);
    _ZNSt6__ndk113__vector_baseINS_6vectorIhNS_9allocatorIhEEEENS2_IS4_EEE17__destruct_at_endEPS4_(a2, esi3, a2, esi4);
    goto a2;
}

void fun_805d();

/* std::__ndk1::__vector_base<std::__ndk1::vector<unsigned char, std::__ndk1::allocator<unsigned char> >, std::__ndk1::allocator<std::__ndk1::vector<unsigned char, std::__ndk1::allocator<unsigned char> > > >::__end_cap() const */
int32_t _ZNKSt6__ndk113__vector_baseINS_6vectorIhNS_9allocatorIhEEEENS2_IS4_EEE9__end_capEv(void** a1);

/* std::__ndk1::__vector_base<std::__ndk1::vector<unsigned char, std::__ndk1::allocator<unsigned char> >, std::__ndk1::allocator<std::__ndk1::vector<unsigned char, std::__ndk1::allocator<unsigned char> > > >::capacity() const */
int32_t _ZNKSt6__ndk113__vector_baseINS_6vectorIhNS_9allocatorIhEEEENS2_IS4_EEE8capacityEv(void** a1) {
    fun_805d();
    _ZNKSt6__ndk113__vector_baseINS_6vectorIhNS_9allocatorIhEEEENS2_IS4_EEE9__end_capEv(a1);
    __asm__("cdq ");
    goto a1;
}

void fun_816e();

/* std::__ndk1::allocator<std::__ndk1::vector<unsigned char, std::__ndk1::allocator<unsigned char> > >::deallocate(std::__ndk1::vector<unsigned char, std::__ndk1::allocator<unsigned char> >*, unsigned int) */
void _ZNSt6__ndk19allocatorINS_6vectorIhNS0_IhEEEEE10deallocateEPS3_j(void** a1, void** a2, void** a3, void** a4, int32_t a5);

/* std::__ndk1::allocator_traits<std::__ndk1::allocator<std::__ndk1::vector<unsigned char, std::__ndk1::allocator<unsigned char> > > >::deallocate(std::__ndk1::allocator<std::__ndk1::vector<unsigned char, std::__ndk1::allocator<unsigned char> > >&, std::__ndk1::vector<unsigned char, std::__ndk1::allocator<unsigned char> >*, unsigned int) */
void _ZNSt6__ndk116allocator_traitsINS_9allocatorINS_6vectorIhNS1_IhEEEEEEE10deallocateERS5_PS4_j(void** a1, void** a2, int32_t a3) {
    fun_816e();
    _ZNSt6__ndk19allocatorINS_6vectorIhNS0_IhEEEEE10deallocateEPS3_j(a1, a2, a1, a2, a3);
    goto a1;
}

void fun_828e();

/* void std::__ndk1::allocator_traits<std::__ndk1::allocator<std::__ndk1::vector<unsigned char, std::__ndk1::allocator<unsigned char> > > >::__destroy<std::__ndk1::vector<unsigned char, std::__ndk1::allocator<unsigned char> > >(std::__ndk1::integral_constant<bool, true>, std::__ndk1::allocator<std::__ndk1::vector<unsigned char, std::__ndk1::allocator<unsigned char> > >&, std::__ndk1::vector<unsigned char, std::__ndk1::allocator<unsigned char> >*) */
void _ZNSt6__ndk116allocator_traitsINS_9allocatorINS_6vectorIhNS1_IhEEEEEEE9__destroyIS4_EEvNS_17integral_constantIbLb1EEERS5_PT_(void** a1, void** a2, void** a3);

/* void std::__ndk1::allocator_traits<std::__ndk1::allocator<std::__ndk1::vector<unsigned char, std::__ndk1::allocator<unsigned char> > > >::destroy<std::__ndk1::vector<unsigned char, std::__ndk1::allocator<unsigned char> > >(std::__ndk1::allocator<std::__ndk1::vector<unsigned char, std::__ndk1::allocator<unsigned char> > >&, std::__ndk1::vector<unsigned char, std::__ndk1::allocator<unsigned char> >*) */
void _ZNSt6__ndk116allocator_traitsINS_9allocatorINS_6vectorIhNS1_IhEEEEEEE7destroyIS4_EEvRS5_PT_(void** a1, void** a2) {
    fun_828e();
    _ZNSt6__ndk116allocator_traitsINS_9allocatorINS_6vectorIhNS1_IhEEEEEEE9__destroyIS4_EEvNS_17integral_constantIbLb1EEERS5_PT_(a1, a1, a2);
    goto a1;
}

void fun_7fdc();

/* std::__ndk1::vector<std::__ndk1::vector<unsigned char, std::__ndk1::allocator<unsigned char> >, std::__ndk1::allocator<std::__ndk1::vector<unsigned char, std::__ndk1::allocator<unsigned char> > > >::capacity() const */
uint32_t _ZNKSt6__ndk16vectorINS0_IhNS_9allocatorIhEEEENS1_IS3_EEE8capacityEv(void** a1) {
    fun_7fdc();
    _ZNKSt6__ndk113__vector_baseINS_6vectorIhNS_9allocatorIhEEEENS2_IS4_EEE8capacityEv(a1);
    goto a1;
}

void fun_925c();

/* std::__ndk1::__compressed_pair<std::__ndk1::vector<unsigned char, std::__ndk1::allocator<unsigned char> >*, std::__ndk1::allocator<std::__ndk1::vector<unsigned char, std::__ndk1::allocator<unsigned char> > >&>::second() */
void _ZNSt6__ndk117__compressed_pairIPNS_6vectorIhNS_9allocatorIhEEEERNS2_IS4_EEE6secondEv(void** a1);

/* std::__ndk1::__split_buffer<std::__ndk1::vector<unsigned char, std::__ndk1::allocator<unsigned char> >, std::__ndk1::allocator<std::__ndk1::vector<unsigned char, std::__ndk1::allocator<unsigned char> > >&>::__alloc() */
void** _ZNSt6__ndk114__split_bufferINS_6vectorIhNS_9allocatorIhEEEERNS2_IS4_EEE7__allocEv(void** a1, void** a2, void** a3) {
    fun_925c();
    _ZNSt6__ndk117__compressed_pairIPNS_6vectorIhNS_9allocatorIhEEEERNS2_IS4_EEE6secondEv(a1 + 12);
    goto a1;
}

void fun_920e();

/* std::__ndk1::allocator<std::__ndk1::vector<unsigned char, std::__ndk1::allocator<unsigned char> > >::allocate(unsigned int, void const*) */
void _ZNSt6__ndk19allocatorINS_6vectorIhNS0_IhEEEEE8allocateEjPKv(void** a1, void** a2, void** a3, int32_t a4, void** a5, void** a6, int32_t a7);

/* std::__ndk1::allocator_traits<std::__ndk1::allocator<std::__ndk1::vector<unsigned char, std::__ndk1::allocator<unsigned char> > > >::allocate(std::__ndk1::allocator<std::__ndk1::vector<unsigned char, std::__ndk1::allocator<unsigned char> > >&, unsigned int) */
void** _ZNSt6__ndk116allocator_traitsINS_9allocatorINS_6vectorIhNS1_IhEEEEEEE8allocateERS5_j(void** a1, void** a2, void** a3) {
    int32_t esi4;

    fun_920e();
    _ZNSt6__ndk19allocatorINS_6vectorIhNS0_IhEEEEE8allocateEjPKv(a1, a2, 0, 0, a1, a2, esi4);
    goto a1;
}

void fun_98ed();

/* std::__ndk1::__split_buffer<std::__ndk1::vector<unsigned char, std::__ndk1::allocator<unsigned char> >, std::__ndk1::allocator<std::__ndk1::vector<unsigned char, std::__ndk1::allocator<unsigned char> > >&>::__end_cap() const */
int32_t _ZNKSt6__ndk114__split_bufferINS_6vectorIhNS_9allocatorIhEEEERNS2_IS4_EEE9__end_capEv(void** a1);

/* std::__ndk1::__split_buffer<std::__ndk1::vector<unsigned char, std::__ndk1::allocator<unsigned char> >, std::__ndk1::allocator<std::__ndk1::vector<unsigned char, std::__ndk1::allocator<unsigned char> > >&>::capacity() const */
int32_t _ZNKSt6__ndk114__split_bufferINS_6vectorIhNS_9allocatorIhEEEERNS2_IS4_EEE8capacityEv(void** a1) {
    fun_98ed();
    _ZNKSt6__ndk114__split_bufferINS_6vectorIhNS_9allocatorIhEEEERNS2_IS4_EEE9__end_capEv(a1);
    __asm__("cdq ");
    goto a1;
}

void fun_967c();

/* std::__ndk1::remove_reference<std::__ndk1::vector<unsigned char, std::__ndk1::allocator<unsigned char> >&>::type&& std::__ndk1::move<std::__ndk1::vector<unsigned char, std::__ndk1::allocator<unsigned char> >&>(std::__ndk1::vector<unsigned char, std::__ndk1::allocator<unsigned char> >&) */
void** _ZNSt6__ndk14moveIRNS_6vectorIhNS_9allocatorIhEEEEEEONS_16remove_referenceIT_E4typeEOS7_(void** a1);

void** _ZNSt6__ndk116move_if_noexceptINS_6vectorIhNS_9allocatorIhEEEEEENS_11conditionalIXaantsr29is_nothrow_move_constructibleIT_EE5valuesr21is_copy_constructibleIS6_EE5valueERKS6_OS6_E4typeERS6_(void** a1, void** a2, void** a3) {
    fun_967c();
    _ZNSt6__ndk14moveIRNS_6vectorIhNS_9allocatorIhEEEEEEONS_16remove_referenceIT_E4typeEOS7_(a1);
    goto a1;
}

void fun_960e();

/* std::__ndk1::vector<unsigned char, std::__ndk1::allocator<unsigned char> >&& std::__ndk1::forward<std::__ndk1::vector<unsigned char, std::__ndk1::allocator<unsigned char> > >(std::__ndk1::remove_reference<std::__ndk1::vector<unsigned char, std::__ndk1::allocator<unsigned char> > >::type&) */
void** _ZNSt6__ndk17forwardINS_6vectorIhNS_9allocatorIhEEEEEEOT_RNS_16remove_referenceIS5_E4typeE(void** a1);

/* void std::__ndk1::allocator_traits<std::__ndk1::allocator<std::__ndk1::vector<unsigned char, std::__ndk1::allocator<unsigned char> > > >::__construct<std::__ndk1::vector<unsigned char, std::__ndk1::allocator<unsigned char> >, std::__ndk1::vector<unsigned char, std::__ndk1::allocator<unsigned char> > >(std::__ndk1::integral_constant<bool, true>, std::__ndk1::allocator<std::__ndk1::vector<unsigned char, std::__ndk1::allocator<unsigned char> > >&, std::__ndk1::vector<unsigned char, std::__ndk1::allocator<unsigned char> >*, std::__ndk1::vector<unsigned char, std::__ndk1::allocator<unsigned char> >&&) */
void _ZNSt6__ndk116allocator_traitsINS_9allocatorINS_6vectorIhNS1_IhEEEEEEE11__constructIS4_JS4_EEEvNS_17integral_constantIbLb1EEERS5_PT_DpOT0_(void** a1, void** a2, void** a3);

/* void std::__ndk1::allocator_traits<std::__ndk1::allocator<std::__ndk1::vector<unsigned char, std::__ndk1::allocator<unsigned char> > > >::construct<std::__ndk1::vector<unsigned char, std::__ndk1::allocator<unsigned char> >, std::__ndk1::vector<unsigned char, std::__ndk1::allocator<unsigned char> > >(std::__ndk1::allocator<std::__ndk1::vector<unsigned char, std::__ndk1::allocator<unsigned char> > >&, std::__ndk1::vector<unsigned char, std::__ndk1::allocator<unsigned char> >*, std::__ndk1::vector<unsigned char, std::__ndk1::allocator<unsigned char> >&&) */
void _ZNSt6__ndk116allocator_traitsINS_9allocatorINS_6vectorIhNS1_IhEEEEEEE9constructIS4_JS4_EEEvRS5_PT_DpOT0_(void** a1, void** a2, void** a3) {
    void** eax4;

    fun_960e();
    eax4 = _ZNSt6__ndk17forwardINS_6vectorIhNS_9allocatorIhEEEEEEOT_RNS_16remove_referenceIS5_E4typeE(a3);
    _ZNSt6__ndk116allocator_traitsINS_9allocatorINS_6vectorIhNS1_IhEEEEEEE11__constructIS4_JS4_EEEvNS_17integral_constantIbLb1EEERS5_PT_DpOT0_(a1, a2, eax4);
    goto a1;
}

void fun_9d4d();

void fun_20e0(void** a1, void** a2, void** a3);

/* std::__ndk1::char_traits<char>::move(char*, char const*, unsigned int) */
int32_t _ZNSt6__ndk111char_traitsIcE4moveEPcPKcj(void** a1, void** a2, void** a3) {
    fun_9d4d();
    if (a3) {
        fun_20e0(a1, a2, a3);
    }
    goto a1;
}

/* std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::__invalidate_iterators_past(unsigned int) */
void** _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE27__invalidate_iterators_pastEj(void** a1, void** a2, void** a3) {
    return a2;
}

void fun_a47d();

/* std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::operator[](unsigned int) const */
unsigned char* _ZNKSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEixEj(void** a1, void** a2, void** a3, int32_t a4) {
    void** esi5;
    int32_t ebx6;

    fun_a47d();
    _ZNKSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE4dataEv(a1, a1, a2, esi5, ebx6);
    goto a1;
}

void fun_35ec();

struct s16 {
    signed char[63800] pad63800;
    void** f63800;
};

/* std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::~basic_string() */
void _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(void** a1, void** a2, void** a3, int32_t a4, void** a5, void** a6) {
    void** v7;
    void** v8;
    void** v9;
    void** v10;
    struct s16* v11;
    void** ebx12;
    void** ebp13;
    unsigned char al14;
    void** v15;
    void** v16;
    void** eax17;
    void** v18;
    void** v19;
    void** v20;
    void** eax21;
    void** eax22;

    fun_35ec();
    al14 = _ZNKSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9__is_longEv(a1, v7, v8, v9, v10, a1, a1, &v11->f63800, ebx12, ebp13, __return_address());
    if (al14 & 1) {
        eax17 = _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE7__allocEv(a1, v15, v16);
        eax21 = _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE18__get_long_pointerEv(a1, v18, v19, v20, eax17, a1, a1);
        eax22 = _ZNKSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE14__get_long_capEv(a1);
        _ZNSt6__ndk116allocator_traitsINS_9allocatorIcEEE10deallocateERS2_Pcj(eax17, eax21, eax22);
    }
    goto a1;
}

void fun_a3ac();

int32_t fun_2140(uint32_t a1);

/* is_base64(unsigned char) */
unsigned char _ZL9is_base64h(uint32_t a1, void** a2, void** a3, int32_t a4) {
    int32_t eax5;

    fun_a3ac();
    eax5 = fun_2140(static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(&a1)));
    if (!eax5 && static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(&a1)) != 43) {
    }
    goto a1;
}

void fun_a4be();

/* unsigned int std::__ndk1::__str_find<char, unsigned int, std::__ndk1::char_traits<char>, 4294967295u>(char const*, unsigned int, char, unsigned int) */
void _ZNSt6__ndk110__str_findIcjNS_11char_traitsIcEELj4294967295EEET0_PKT_S3_S4_S3_(void** a1, void** a2, signed char a3, void** a4);

/* std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::find(char, unsigned int) const */
signed char _ZNKSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE4findEcj(void** a1, void** a2, void** a3, int32_t a4) {
    void** v5;
    void** v6;
    void** v7;
    int32_t v8;
    void** eax9;
    void** v10;
    void** v11;
    void** v12;
    void** eax13;
    int32_t v14;

    fun_a4be();
    eax9 = _ZNKSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE4dataEv(a1, v5, v6, v7, v8);
    eax13 = _ZNKSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE4sizeEv(a1, v10, v11, v12, eax9, a1, a1);
    v14 = reinterpret_cast<signed char>(a2);
    _ZNSt6__ndk110__str_findIcjNS_11char_traitsIcEELj4294967295EEET0_PKT_S3_S4_S3_(eax9, eax13, *reinterpret_cast<signed char*>(&v14), a3);
    goto a1;
}

void** read_sleb128(void** ecx, void** a2) {
    uint32_t esi3;
    uint32_t* v4;
    uint32_t* edx5;
    uint32_t ecx6;
    void** eax7;
    uint32_t edi8;
    uint32_t edx9;
    uint32_t edx10;

    esi3 = 0;
    v4 = edx5;
    ecx6 = 0;
    do {
        ++eax7;
        edi8 = *reinterpret_cast<unsigned char*>(eax7 + 0xffffffff);
        edx9 = (edi8 & 0x7f) << *reinterpret_cast<unsigned char*>(&ecx6);
        ecx6 = ecx6 + 7;
        esi3 = esi3 | edx9;
        edx10 = edi8;
    } while (*reinterpret_cast<signed char*>(&edx10) < 0);
    if (ecx6 <= 31 && edi8 & 64) {
        esi3 = esi3 | 0xffffffff << *reinterpret_cast<unsigned char*>(&ecx6);
    }
    *v4 = esi3;
    return eax7;
}

struct s17 {
    signed char[128] pad128;
    int32_t f128;
};

void** fun_21e0(void** a1, void** a2, void** a3) {
    struct s17* ebx4;

    goto ebx4->f128;
}

/* __x86.get_pc_thunk.bx */
void** __x86_get_pc_thunk_bx();

void** _Unwind_SetSpColumn(void** ecx, void** a2, int32_t a3, void** a4, void** a5) {
    void** eax6;
    int32_t ebx7;
    void** ebx8;
    void** ebp9;
    void** edx10;

    eax6 = __x86_get_pc_thunk_bx();
    if (*reinterpret_cast<signed char*>(ebx7 + 0x86d1 + 0x12ec) != 4) {
        eax6 = fun_21e0(ecx, ebx8, ebp9);
    } else {
        *reinterpret_cast<void***>(a2) = edx10;
        if (*reinterpret_cast<unsigned char*>(eax6 + 99) & 64) {
            *reinterpret_cast<signed char*>(eax6 + 0x70) = 0;
        }
    }
    *reinterpret_cast<void***>(eax6 + 16) = a2;
    return ecx;
}

struct s18 {
    void** f0;
    signed char[15] pad16;
    int32_t f16;
    signed char[56] pad76;
    void** f76;
    signed char[3] pad80;
    void** f80;
    signed char[3] pad84;
    void** f84;
    signed char[7] pad92;
    void* f92;
    uint32_t f96;
    unsigned char f99;
    signed char[3] pad104;
    void* f104;
};

void** _Unwind_GetGR(struct s18* a1, void* a2, void** a3, void** a4, int32_t a5) {
    void** v6;
    void** ebp7;
    void* edx8;
    void** v9;
    void** esi10;
    struct s18* ecx11;
    void** v12;
    void** ebx13;
    void* ebx14;
    void* ebx15;
    void** eax16;

    v6 = ebp7;
    edx8 = a2;
    v9 = esi10;
    ecx11 = a1;
    v12 = ebx13;
    __x86_get_pc_thunk_bx();
    ebx14 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(ebx15) + 0x8694);
    if (reinterpret_cast<int32_t>(edx8) > reinterpret_cast<int32_t>(17)) 
        goto addr_a89b_2;
    while ((eax16 = *reinterpret_cast<void***>(reinterpret_cast<uint32_t>(ecx11) + reinterpret_cast<uint32_t>(edx8) * 4), (*reinterpret_cast<unsigned char*>(reinterpret_cast<uint32_t>(ecx11) + 99) & 64) == 0) || !*reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(ecx11) + reinterpret_cast<uint32_t>(edx8) + 0x6c)) {
        if (static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(ebx14) + reinterpret_cast<uint32_t>(edx8) + 0x12e8)) == 4) 
            goto addr_a8bd_5;
        addr_a89b_2:
        fun_21e0(v12, v9, v6);
    }
    addr_a8bf_6:
    return eax16;
    addr_a8bd_5:
    eax16 = *reinterpret_cast<void***>(eax16);
    goto addr_a8bf_6;
}

struct s19 {
    signed char[88] pad88;
    int32_t f88;
};

int32_t _Unwind_GetDataRelBase(struct s19* a1) {
    return a1->f88;
}

void** read_uleb128(void** ecx, void** a2, void** a3, void** a4) {
    uint32_t esi5;
    uint32_t* v6;
    uint32_t* edx7;
    int32_t ecx8;
    void** eax9;
    uint32_t edx10;
    uint32_t edi11;

    esi5 = 0;
    v6 = edx7;
    ecx8 = 0;
    do {
        ++eax9;
        *reinterpret_cast<unsigned char*>(&edx10) = *reinterpret_cast<unsigned char*>(eax9 + 0xffffffff);
        edi11 = (edx10 & 0x7f) << *reinterpret_cast<unsigned char*>(&ecx8);
        ecx8 = ecx8 + 7;
        esi5 = esi5 | edi11;
    } while (*reinterpret_cast<signed char*>(&edx10) < reinterpret_cast<signed char>(0));
    *v6 = esi5;
    return eax9;
}

struct s20 {
    signed char[84] pad84;
    int32_t f84;
};

int32_t _Unwind_GetTextRelBase(struct s20* a1);

struct s21 {
    signed char[92] pad92;
    int32_t f92;
};

int32_t _Unwind_GetRegionStart(struct s21* a1);

int32_t base_of_encoded_value(void** ecx, int32_t a2) {
    void** eax3;
    uint32_t eax4;
    struct s20* edx5;
    int32_t eax6;
    struct s21* edx7;
    void** ebx8;
    void** ebp9;
    struct s19* edx10;

    eax3 = __x86_get_pc_thunk_bx();
    if (*reinterpret_cast<signed char*>(&eax3) == -1) 
        goto addr_aae8_2;
    eax4 = reinterpret_cast<unsigned char>(eax3) & 0x70;
    if (*reinterpret_cast<unsigned char*>(&eax4) == 32) {
        eax6 = _Unwind_GetTextRelBase(edx5);
    } else {
        if (*reinterpret_cast<unsigned char*>(&eax4) <= 32) {
            if (*reinterpret_cast<unsigned char*>(&eax4)) {
                if (*reinterpret_cast<unsigned char*>(&eax4) != 16) 
                    goto addr_aae3_8;
                goto addr_aae8_2;
            }
        }
        if (*reinterpret_cast<unsigned char*>(&eax4) == 64) 
            goto addr_aad5_11; else 
            goto addr_aab7_12;
    }
    addr_aade_13:
    addr_aaea_14:
    return eax6;
    addr_aad5_11:
    eax6 = _Unwind_GetRegionStart(edx7);
    goto addr_aade_13;
    addr_aab7_12:
    if (*reinterpret_cast<unsigned char*>(&eax4) == 80) {
        addr_aae8_2:
        eax6 = 0;
        goto addr_aaea_14;
    } else {
        if (*reinterpret_cast<unsigned char*>(&eax4) != 48) {
            addr_aae3_8:
            fun_21e0(ecx, ebx8, ebp9);
            goto addr_aae8_2;
        } else {
            eax6 = _Unwind_GetDataRelBase(edx10);
            goto addr_aade_13;
        }
    }
}

struct s22 {
    void** f0;
    signed char[3] pad4;
    void** f4;
};

void** read_encoded_value_with_base(void** a1, void** a2, struct s18* a3, struct s18* a4, int32_t a5) {
    void** eax6;
    int32_t ebx7;
    int32_t ebx8;
    void** v9;
    uint32_t eax10;
    void** v11;
    void** v12;
    void** v13;
    void** eax14;
    int32_t edx15;
    struct s22* eax16;
    void** edx17;
    uint32_t ecx18;
    uint32_t ecx19;
    void** edi20;
    void* edx21;

    eax6 = __x86_get_pc_thunk_bx();
    ebx7 = ebx8 + 0x87fa;
    v9 = eax6;
    if (*reinterpret_cast<signed char*>(&v9) != 80) {
        *reinterpret_cast<signed char*>(&eax6) = *reinterpret_cast<signed char*>(&v9);
        eax10 = reinterpret_cast<unsigned char>(eax6) & 15;
        if (*reinterpret_cast<unsigned char*>(&eax10) <= 12) {
            goto *reinterpret_cast<int32_t*>(ebx7 + *reinterpret_cast<unsigned char*>(&eax10) * 4 - 0x3b54) + ebx7;
        }
        eax14 = fun_21e0(v11, v12, v13);
        if (edx15) 
            goto addr_a7a6_6;
    } else {
        eax16 = reinterpret_cast<struct s22*>(reinterpret_cast<uint32_t>(a1 + 3) & 0xfffffffc);
        edx17 = eax16->f0;
        eax14 = reinterpret_cast<void**>(&eax16->f4);
    }
    addr_a7bc_8:
    *reinterpret_cast<void***>(a2) = edx17;
    return eax14;
    addr_a7a6_6:
    *reinterpret_cast<signed char*>(&ecx18) = *reinterpret_cast<signed char*>(&v9);
    ecx19 = ecx18 & 0x70;
    if (*reinterpret_cast<signed char*>(&ecx19) == 16) {
        edi20 = a1;
    }
    edx17 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(edx21) + reinterpret_cast<unsigned char>(edi20));
    if (*reinterpret_cast<signed char*>(&v9) < 0) {
        edx17 = *reinterpret_cast<void***>(edx17);
        goto addr_a7bc_8;
    }
}

void* execute_stack_op(struct s18* a1, int32_t a2, void** a3, void** a4, void** a5);

void uw_update_context_1() {
    void** ecx1;
    void* ebp2;
    void** edi3;
    void** eax4;
    int32_t ebx5;
    int32_t ebx6;
    struct s18* esi7;
    void** v8;
    void** v9;
    void** edx10;
    unsigned char v11;
    signed char v12;
    int32_t v13;
    int32_t v14;
    void** v15;
    void** v16;
    void* v17;
    int32_t v18;
    void** eax19;
    void* edi20;
    void** v21;
    void** v22;
    void** eax23;
    void** v24;
    void** v25;
    void** v26;
    void* eax27;
    int32_t eax28;
    uint32_t eax29;
    uint32_t eax30;

    ecx1 = reinterpret_cast<void**>(32);
    ebp2 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4);
    edi3 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp2) + 0xffffff68);
    eax4 = __x86_get_pc_thunk_bx();
    ebx5 = ebx6 + 0x7929;
    while (ecx1) {
        --ecx1;
        edi3 = edi3 + 4;
    }
    esi7 = reinterpret_cast<struct s18*>(reinterpret_cast<int32_t>(ebp2) + 0xffffff68);
    v8 = eax4;
    v9 = edx10;
    if ((!(v11 & 64) || !v12) && !v13) {
        _Unwind_SetSpColumn(ecx1, reinterpret_cast<int32_t>(ebp2) + 0xffffff60, v14, v15, v16);
    }
    if (*reinterpret_cast<unsigned char*>(v8 + 99) & 64) {
        *reinterpret_cast<signed char*>(v8 + 0x70) = 0;
    }
    *reinterpret_cast<void***>(v8 + 16) = reinterpret_cast<void**>(0);
    if (*reinterpret_cast<int32_t*>(v9 + 0xa0) == 1) {
        v17 = *reinterpret_cast<void**>(v9 + 0x98);
        eax19 = _Unwind_GetGR(esi7, v17, edi3, edi3, v18);
        edi20 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax19) + reinterpret_cast<uint32_t>(*reinterpret_cast<void**>(v9 + 0x94)));
    } else {
        if (*reinterpret_cast<int32_t*>(v9 + 0xa0) != 2) {
            eax23 = fun_21e0(v21, v22, v9);
            *reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(v8) + reinterpret_cast<uint32_t>(esi7) + 0x6c) = 1;
            *reinterpret_cast<void***>(v8 + reinterpret_cast<uint32_t>(esi7) * 4) = eax23;
            goto addr_b830_14;
        } else {
            read_uleb128(ecx1, v24, v25, v9);
            eax27 = execute_stack_op(reinterpret_cast<int32_t>(ebp2) + 0xffffff68, 0, ecx1, ecx1, v26);
            edi20 = eax27;
        }
    }
    esi7 = reinterpret_cast<struct s18*>(0);
    *reinterpret_cast<void**>(v8 + 72) = edi20;
    do {
        eax28 = *reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(v9 + reinterpret_cast<uint32_t>(esi7) * 8) + 4);
        eax29 = reinterpret_cast<uint32_t>(eax28 - 1);
        if (eax29 <= 4) 
            break;
        addr_b830_14:
        esi7 = reinterpret_cast<struct s18*>(&esi7->pad16);
    } while (!reinterpret_cast<int1_t>(esi7 == 18));
    goto addr_b83a_18;
    goto *reinterpret_cast<int32_t*>(ebx5 + eax29 * 4 - 0x3a0c) + ebx5;
    addr_b83a_18:
    eax30 = *reinterpret_cast<uint32_t*>(v8 + 96) & 0x7fffffff;
    if (*reinterpret_cast<signed char*>(v9 + 0xbb)) {
        eax30 = *reinterpret_cast<uint32_t*>(v8 + 96) | 0x80000000;
    }
    *reinterpret_cast<uint32_t*>(v8 + 96) = eax30;
    return;
}

void* execute_stack_op(struct s18* a1, int32_t a2, void** a3, void** a4, void** a5) {
    void* ebp6;
    void* edi7;
    void** esi8;
    void** eax9;
    int32_t ebx10;
    int32_t ebx11;
    void** v12;
    void** edx13;
    uint32_t edx14;
    void** v15;
    void** v16;
    void** v17;
    void** ecx18;
    void** edx19;
    void* eax20;
    void** edx21;
    int32_t v22;
    int32_t eax23;
    int32_t v24;
    void** v25;
    int32_t v26;
    void** v27;
    void** v28;
    void** v29;
    void** eax30;
    void** v31;
    void** v32;
    void* v33;
    void* v34;
    int32_t v35;
    void** eax36;
    void** edx37;
    void** v38;
    void** eax39;
    void** v40;
    void** v41;
    void* v42;
    int32_t v43;
    void** eax44;
    void* v45;
    void** v46;
    void** v47;
    void** v48;
    void** v49;
    void** eax50;
    void* v51;
    void** ecx52;
    int32_t v53;
    int32_t v54;
    void** eax55;
    void** v56;
    void** v57;
    void** v58;
    void** v59;
    void** eax60;
    void** v61;
    int1_t zf62;
    void** v63;
    void** v64;
    void** v65;
    void** eax66;
    void* v67;
    void* eax68;
    void* edx69;
    void* eax70;
    void** v71;
    void** eax72;
    void** v73;

    ebp6 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4);
    edi7 = reinterpret_cast<void*>(1);
    esi8 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp6) + 0xfffffedc);
    eax9 = __x86_get_pc_thunk_bx();
    ebx10 = ebx11 + 0x7ebe;
    v12 = edx13;
    goto addr_b088_2;
    addr_b5d4_3:
    return *reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp6) + reinterpret_cast<uint32_t>(edi7) * 4 - 0x11c);
    addr_b512_4:
    goto *reinterpret_cast<int32_t*>(ebx10 + *reinterpret_cast<unsigned char*>(&edx14) * 4 - 0x3a60) + ebx10;
    addr_b5d0_5:
    while (!edi7) {
        do {
            while (1) {
                addr_b5b5_6:
                fun_21e0(v15, v16, v17);
                while (1) {
                    if (reinterpret_cast<uint32_t>(edi7) > 63) 
                        break;
                    *reinterpret_cast<void***>(reinterpret_cast<int32_t>(ebp6) + reinterpret_cast<uint32_t>(edi7) * 4 - 0x118) = ecx18;
                    edi7 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(edi7) + 1);
                    while (1) {
                        eax9 = esi8;
                        addr_b088_2:
                        if (reinterpret_cast<unsigned char>(eax9) >= reinterpret_cast<unsigned char>(v12)) 
                            goto addr_b5d0_5;
                        ecx18 = reinterpret_cast<void**>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax9))));
                        esi8 = eax9 + 1;
                        edx19 = ecx18;
                        if (*reinterpret_cast<unsigned char*>(&ecx18) > 32) {
                            if (*reinterpret_cast<unsigned char*>(&ecx18) > 79) {
                                if (*reinterpret_cast<unsigned char*>(&ecx18) == 0x90) 
                                    break;
                                if (*reinterpret_cast<unsigned char*>(&ecx18) <= 0x90) 
                                    goto addr_b1d4_14;
                                if (*reinterpret_cast<unsigned char*>(&ecx18) == 0x94) 
                                    goto addr_b430_16;
                                if (*reinterpret_cast<unsigned char*>(&ecx18) <= 0x94) 
                                    goto addr_b1f3_18;
                                if (*reinterpret_cast<unsigned char*>(&ecx18) == 0x96) 
                                    continue; else 
                                    goto addr_b22c_20;
                            }
                            if (*reinterpret_cast<unsigned char*>(&ecx18) >= 48) 
                                goto addr_b275_22;
                            if (*reinterpret_cast<unsigned char*>(&ecx18) <= 39) 
                                goto addr_b19b_24;
                            if (*reinterpret_cast<unsigned char*>(&ecx18) <= 46) 
                                goto addr_b1bb_26;
                        } else {
                            if (*reinterpret_cast<unsigned char*>(&ecx18) >= 31) 
                                goto addr_b430_16;
                            if (*reinterpret_cast<unsigned char*>(&ecx18) == 16) 
                                goto addr_b2ab_29;
                            if (*reinterpret_cast<unsigned char*>(&ecx18) <= 16) 
                                goto addr_b0b9_31;
                            if (*reinterpret_cast<unsigned char*>(&ecx18) == 21) 
                                goto addr_b35e_33;
                            if (*reinterpret_cast<unsigned char*>(&ecx18) > 21) 
                                goto addr_b15f_35; else 
                                goto addr_b139_36;
                        }
                        esi8 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(eax9) + static_cast<int32_t>(reinterpret_cast<int16_t>(*reinterpret_cast<void***>(eax9 + 1))) + 3);
                        continue;
                        addr_b1bb_26:
                        if (*reinterpret_cast<unsigned char*>(&ecx18) >= 41) 
                            goto addr_b1c4_38;
                        if (!edi7) 
                            goto addr_b5b5_6;
                        edi7 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(edi7) - 1);
                        esi8 = eax9 + 3;
                        if (!*reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(ebp6) + reinterpret_cast<uint32_t>(edi7) * 4 - 0x118)) 
                            continue;
                        esi8 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(esi8) + static_cast<int32_t>(reinterpret_cast<int16_t>(*reinterpret_cast<void***>(eax9 + 1))));
                        continue;
                        addr_b15f_35:
                        if (*reinterpret_cast<unsigned char*>(&ecx18) == 25) 
                            goto addr_b430_16;
                        if (*reinterpret_cast<unsigned char*>(&ecx18) > 25) 
                            goto addr_b4e6_43;
                        eax20 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(edi7) + 0xffffffff);
                        if (*reinterpret_cast<unsigned char*>(&ecx18) != 22) 
                            goto addr_b17a_45;
                        if (reinterpret_cast<int32_t>(edi7) <= reinterpret_cast<int32_t>(1)) 
                            goto addr_b5b5_6;
                        edx21 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(edi7) + 0xfffffffe);
                        v22 = *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(ebp6) + reinterpret_cast<uint32_t>(eax20) * 4 - 0x118);
                        ecx18 = *reinterpret_cast<void***>(reinterpret_cast<int32_t>(ebp6) + reinterpret_cast<unsigned char>(edx21) * 4 - 0x118);
                        *reinterpret_cast<void***>(reinterpret_cast<int32_t>(ebp6) + reinterpret_cast<uint32_t>(eax20) * 4 - 0x118) = ecx18;
                        eax23 = v22;
                        addr_b424_48:
                        *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(ebp6) + reinterpret_cast<unsigned char>(edx21) * 4 - 0x118) = eax23;
                        continue;
                        addr_b17a_45:
                        if (*reinterpret_cast<unsigned char*>(&ecx18) != 23) 
                            goto addr_b183_49;
                        if (reinterpret_cast<int32_t>(edi7) <= reinterpret_cast<int32_t>(2)) 
                            goto addr_b5b5_6;
                        edx21 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(edi7) + 0xfffffffd);
                        v24 = *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(ebp6) + reinterpret_cast<uint32_t>(eax20) * 4 - 0x118);
                        v25 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(edi7) + 0xfffffffe);
                        v26 = *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(ebp6) + reinterpret_cast<unsigned char>(edx21) * 4 - 0x118);
                        *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(ebp6) + reinterpret_cast<uint32_t>(eax20) * 4 - 0x118) = *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(ebp6) + reinterpret_cast<unsigned char>(v25) * 4 - 0x118);
                        ecx18 = v25;
                        *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(ebp6) + reinterpret_cast<unsigned char>(ecx18) * 4 - 0x118) = v26;
                        eax23 = v24;
                        goto addr_b424_48;
                        addr_b139_36:
                        if (*reinterpret_cast<unsigned char*>(&ecx18) == 18) 
                            goto addr_b33c_52;
                        if (*reinterpret_cast<unsigned char*>(&ecx18) < 18) 
                            goto addr_b2c5_54;
                        if (*reinterpret_cast<unsigned char*>(&ecx18) != 19) 
                            goto addr_b151_56;
                        if (!edi7) 
                            goto addr_b5b5_6;
                        edi7 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(edi7) - 1);
                    }
                    eax30 = read_uleb128(ecx18, v27, v28, v29);
                    v31 = ecx18;
                    esi8 = eax30;
                    v32 = ecx18;
                    v33 = v34;
                    addr_b2f6_60:
                    eax36 = _Unwind_GetGR(a1, v33, v32, v31, v35);
                    addr_b301_61:
                    ecx18 = eax36;
                    continue;
                    addr_b1d4_14:
                    if (*reinterpret_cast<unsigned char*>(&ecx18) > 0x6f) {
                        edx37 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp6) + 0xfffffee0);
                        eax39 = read_sleb128(ecx18, v38);
                        esi8 = eax39;
                        v40 = edx37;
                        v41 = edx37;
                        v42 = reinterpret_cast<void*>(ecx18 + 0xffffff90);
                    } else {
                        v31 = eax9;
                        v32 = eax9;
                        v33 = reinterpret_cast<void*>(ecx18 + 0xffffffb0);
                        goto addr_b2f6_60;
                    }
                    addr_b329_64:
                    eax44 = _Unwind_GetGR(a1, v42, v41, v40, v43);
                    eax36 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(eax44) + reinterpret_cast<uint32_t>(v45));
                    goto addr_b301_61;
                    addr_b1f3_18:
                    if (*reinterpret_cast<unsigned char*>(&ecx18) != 0x92) 
                        break;
                    read_uleb128(ecx18, v46, v47, v48);
                    eax50 = read_sleb128(ecx18, v49);
                    esi8 = eax50;
                    v40 = eax50;
                    v41 = eax50;
                    v42 = v51;
                    goto addr_b329_64;
                    addr_b22c_20:
                    if (*reinterpret_cast<unsigned char*>(&ecx18) != 0xf1) 
                        break;
                    ecx52 = reinterpret_cast<void**>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax9 + 1))));
                    base_of_encoded_value(ecx52, v53);
                    eax55 = read_encoded_value_with_base(eax9 + 2, reinterpret_cast<int32_t>(ebp6) + 0xfffffee4, a1, a1, v54);
                    ecx18 = v56;
                    esi8 = eax55;
                    continue;
                    addr_b275_22:
                    ecx18 = ecx18 - 48;
                    continue;
                    addr_b19b_24:
                    if (*reinterpret_cast<unsigned char*>(&ecx18) >= 36) 
                        goto addr_b4e6_43;
                    if (*reinterpret_cast<unsigned char*>(&ecx18) > 34) 
                        goto addr_b430_16; else 
                        goto addr_b1ad_68;
                    addr_b2ab_29:
                    eax60 = read_uleb128(ecx18, v57, v58, v59);
                    ecx18 = v61;
                    esi8 = eax60;
                    continue;
                    addr_b0b9_31:
                    if (*reinterpret_cast<unsigned char*>(&ecx18) == 10) {
                        ecx18 = reinterpret_cast<void**>(static_cast<uint32_t>(reinterpret_cast<uint16_t>(*reinterpret_cast<void***>(eax9 + 1))));
                    } else {
                        if (*reinterpret_cast<unsigned char*>(&ecx18) > 10) {
                            if (*reinterpret_cast<unsigned char*>(&ecx18) == 13) {
                                addr_b298_72:
                                ecx18 = *reinterpret_cast<void***>(eax9 + 1);
                                esi8 = eax9 + 5;
                                continue;
                            } else {
                                if (*reinterpret_cast<unsigned char*>(&ecx18) > 13) {
                                    esi8 = eax9 + 9;
                                    if (*reinterpret_cast<unsigned char*>(&ecx18) == 14) 
                                        goto addr_b2a3_75;
                                    if (*reinterpret_cast<unsigned char*>(&ecx18) != 15) 
                                        goto addr_b129_77;
                                    addr_b2a3_75:
                                    ecx18 = *reinterpret_cast<void***>(eax9 + 1);
                                    continue;
                                }
                                if (*reinterpret_cast<unsigned char*>(&ecx18) == 11) 
                                    goto addr_b28c_79; else 
                                    goto addr_b106_80;
                            }
                        } else {
                            if (*reinterpret_cast<unsigned char*>(&ecx18) == 6) {
                                addr_b430_16:
                                if (!edi7) 
                                    break; else 
                                    goto addr_b438_82;
                            } else {
                                if (*reinterpret_cast<unsigned char*>(&ecx18) > 6) {
                                    esi8 = eax9 + 2;
                                    if (*reinterpret_cast<unsigned char*>(&ecx18) == 8) {
                                        ecx18 = reinterpret_cast<void**>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax9 + 1))));
                                        continue;
                                    } else {
                                        if (*reinterpret_cast<unsigned char*>(&ecx18) != 9) 
                                            break;
                                        ecx18 = reinterpret_cast<void**>(static_cast<int32_t>(reinterpret_cast<signed char>(*reinterpret_cast<void***>(eax9 + 1))));
                                        continue;
                                    }
                                } else {
                                    zf62 = *reinterpret_cast<unsigned char*>(&ecx18) == 3;
                                    goto addr_b109_89;
                                }
                            }
                        }
                    }
                    addr_b290_90:
                    esi8 = eax9 + 3;
                    continue;
                    addr_b28c_79:
                    ecx18 = reinterpret_cast<void**>(static_cast<int32_t>(reinterpret_cast<int16_t>(*reinterpret_cast<void***>(eax9 + 1))));
                    goto addr_b290_90;
                    addr_b106_80:
                    zf62 = *reinterpret_cast<unsigned char*>(&ecx18) == 12;
                    addr_b109_89:
                    if (zf62) 
                        goto addr_b298_72; else 
                        goto addr_b10f_91;
                    addr_b438_82:
                    edi7 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(edi7) - 1);
                    ecx18 = *reinterpret_cast<void***>(reinterpret_cast<int32_t>(ebp6) + reinterpret_cast<uint32_t>(edi7) * 4 - 0x118);
                    if (*reinterpret_cast<unsigned char*>(&edx19) == 31) {
                        ecx18 = reinterpret_cast<void**>(-reinterpret_cast<unsigned char>(ecx18));
                        continue;
                    } else {
                        if (*reinterpret_cast<unsigned char*>(&edx19) > 31) {
                            if (*reinterpret_cast<unsigned char*>(&edx19) == 35) {
                                eax66 = read_uleb128(ecx18, v63, v64, v65);
                                esi8 = eax66;
                                ecx18 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(ecx18) + reinterpret_cast<uint32_t>(v67));
                                continue;
                            } else {
                                if (*reinterpret_cast<unsigned char*>(&edx19) == 0x94) {
                                    esi8 = eax9 + 2;
                                    if (*reinterpret_cast<void***>(eax9 + 1) == 2) {
                                        ecx18 = reinterpret_cast<void**>(static_cast<uint32_t>(reinterpret_cast<uint16_t>(*reinterpret_cast<void***>(ecx18))));
                                        continue;
                                    } else {
                                        if (reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax9 + 1)) > 2) {
                                            if (*reinterpret_cast<void***>(eax9 + 1) == 4) 
                                                goto addr_b4b2_101;
                                            if (*reinterpret_cast<void***>(eax9 + 1) != 8) 
                                                goto addr_b4a5_103;
                                        } else {
                                            if (*reinterpret_cast<void***>(eax9 + 1) - 1) 
                                                break;
                                            ecx18 = reinterpret_cast<void**>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(ecx18))));
                                            continue;
                                        }
                                    }
                                } else {
                                    if (*reinterpret_cast<unsigned char*>(&edx19) != 32) 
                                        break;
                                    ecx18 = reinterpret_cast<void**>(~reinterpret_cast<unsigned char>(ecx18));
                                    continue;
                                }
                            }
                        } else {
                            if (*reinterpret_cast<unsigned char*>(&edx19) != 6) {
                                if (*reinterpret_cast<unsigned char*>(&edx19) != 25) 
                                    break;
                                eax68 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(ecx18) >> 31);
                                ecx18 = reinterpret_cast<void**>((reinterpret_cast<unsigned char>(ecx18) ^ -reinterpret_cast<uint32_t>(eax68)) + reinterpret_cast<uint32_t>(eax68));
                                continue;
                            }
                        }
                        addr_b4b2_101:
                        ecx18 = *reinterpret_cast<void***>(ecx18);
                        continue;
                    }
                    addr_b35e_33:
                    edx69 = reinterpret_cast<void*>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax9 + 1))));
                    esi8 = eax9 + 2;
                    eax70 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(edi7) + 0xffffffff);
                    v45 = edx69;
                    if (reinterpret_cast<int32_t>(edx69) >= reinterpret_cast<int32_t>(eax70)) 
                        break;
                    ecx18 = *reinterpret_cast<void***>(reinterpret_cast<int32_t>(ebp6) + (reinterpret_cast<uint32_t>(eax70) - reinterpret_cast<uint32_t>(edx69)) * 4 - 0x118);
                    continue;
                    addr_b33c_52:
                    if (!edi7) 
                        break;
                    ecx18 = *reinterpret_cast<void***>(reinterpret_cast<int32_t>(ebp6) + reinterpret_cast<uint32_t>(edi7) * 4 - 0x11c);
                    continue;
                    addr_b2c5_54:
                    eax72 = read_sleb128(ecx18, v71);
                    ecx18 = v73;
                    esi8 = eax72;
                    continue;
                    addr_b151_56:
                    if (*reinterpret_cast<unsigned char*>(&ecx18) != 20) 
                        goto addr_b15a_113;
                    if (reinterpret_cast<int32_t>(edi7) <= reinterpret_cast<int32_t>(1)) 
                        break;
                    ecx18 = *reinterpret_cast<void***>(reinterpret_cast<int32_t>(ebp6) + reinterpret_cast<uint32_t>(edi7) * 4 - 0x120);
                }
            }
            addr_b4a5_103:
            goto addr_b5b5_6;
            addr_b1c4_38:
            continue;
            addr_b1ad_68:
            continue;
            addr_b183_49:
            goto addr_b5b5_6;
            addr_b15a_113:
            goto addr_b5b5_6;
            addr_b129_77:
            goto addr_b5b5_6;
            addr_b10f_91:
            goto addr_b5b5_6;
            addr_b4e6_43:
        } while (reinterpret_cast<int32_t>(edi7) <= reinterpret_cast<int32_t>(1) || (edx14 = reinterpret_cast<uint32_t>(edx19 - 26), edi7 = *reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp6) + reinterpret_cast<uint32_t>(edi7) * 4 - 0x11c), *reinterpret_cast<unsigned char*>(&edx14) > 20));
        goto addr_b512_4;
    }
    goto addr_b5d4_3;
}

struct s23 {
    signed char[180] pad180;
    void* f180;
};

void uw_update_context() {
    void* eax1;
    struct s23* edx2;
    struct s18* eax3;
    void** edx4;
    void** edx5;
    int32_t esi6;
    void** eax7;

    uw_update_context_1();
    eax1 = edx2->f180;
    if (*reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(edx2) + reinterpret_cast<uint32_t>(eax1) * 8 + 4) != 6) {
        eax7 = _Unwind_GetGR(eax3, eax1, edx4, edx5, esi6);
        eax3->f76 = eax7;
    } else {
        eax3->f76 = reinterpret_cast<void**>(0);
    }
    return;
}

struct s24 {
    void** f0;
    signed char[3] pad4;
    int32_t f4;
};

void execute_cfa_program(struct s18* a1, void** a2, void** a3, void** a4) {
    void** eax5;
    int32_t ebx6;
    int32_t ebx7;
    void** v8;
    void** edx9;
    void** v10;
    uint32_t ecx11;
    void* esi12;
    uint32_t edx13;
    void** v14;
    void** ecx15;
    uint32_t edx16;
    void** eax17;
    void** eax18;
    int32_t v19;
    struct s24* edx20;

    eax5 = __x86_get_pc_thunk_bx();
    ebx6 = ebx7 + 0x842a;
    v8 = edx9;
    *reinterpret_cast<int32_t*>(a2 + 0x90) = 0;
    v10 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 + 0xffffffdc);
    while (reinterpret_cast<unsigned char>(eax5) < reinterpret_cast<unsigned char>(v8) && (ecx11 = a1->f96, esi12 = *reinterpret_cast<void**>(a2 + 0xa4), reinterpret_cast<uint32_t>(esi12) < (ecx11 >> 31) + reinterpret_cast<unsigned char>(a1->f76))) {
        edx13 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax5));
        v14 = eax5 + 1;
        *reinterpret_cast<unsigned char*>(&ecx11) = *reinterpret_cast<unsigned char*>(&edx13);
        ecx15 = reinterpret_cast<void**>(ecx11 & 0xffffffc0);
        if (*reinterpret_cast<signed char*>(&ecx15) != 64) {
            if (*reinterpret_cast<signed char*>(&ecx15) != 0x80) {
                if (*reinterpret_cast<signed char*>(&ecx15) != -64) {
                    if (*reinterpret_cast<unsigned char*>(&edx13) <= 47) 
                        goto addr_abe0_7;
                    fun_21e0(v8, 0, v10);
                } else {
                    edx16 = edx13 & 63;
                    if (*reinterpret_cast<unsigned char*>(&edx16) <= 17) {
                        *reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(a2 + *reinterpret_cast<unsigned char*>(&edx16) * 8) + 4) = 0;
                    }
                }
            } else {
                eax17 = read_uleb128(ecx15, v8, 0, v10);
                v14 = eax17;
                eax18 = reinterpret_cast<void**>(v19 * *reinterpret_cast<uint32_t*>(a2 + 0xac));
                if ((edx13 & 63) <= 17) {
                    edx20 = reinterpret_cast<struct s24*>(a2 + (edx13 & 63) * 8);
                    edx20->f4 = 1;
                    edx20->f0 = eax18;
                }
            }
        } else {
            *reinterpret_cast<void**>(a2 + 0xa4) = reinterpret_cast<void*>((edx13 & 63) * *reinterpret_cast<int32_t*>(a2 + 0xb0) + reinterpret_cast<uint32_t>(esi12));
        }
        eax5 = v14;
    }
    return;
    addr_abe0_7:
    goto *reinterpret_cast<int32_t*>(ebx6 + edx13 * 4 - 0x3b20) + ebx6;
}

void** _Unwind_Find_FDE(void** a1, void** a2, void*** a3, void*** a4);

struct s25 {
    signed char[8] pad8;
    unsigned char f8;
    signed char f9;
    signed char f10;
    signed char f11;
};

struct s26 {
    signed char f0;
    signed char f1;
};

void** uw_frame_state_for() {
    int32_t ecx1;
    void* ebp2;
    void*** edi3;
    void*** edx4;
    struct s18* esi5;
    struct s18* eax6;
    void** eax7;
    void** ecx8;
    void** v9;
    void** edx10;
    struct s18* v11;
    void** v12;
    void** eax13;
    void** v14;
    void** eax15;
    uint32_t ecx16;
    struct s25* esi17;
    signed char* v18;
    signed char* edi19;
    void** ecx20;
    struct s26* eax21;
    void** v22;
    void** v23;
    void** v24;
    int32_t v25;
    void** v26;
    void** eax27;
    uint32_t v28;
    void** v29;
    void** v30;
    void** v31;
    void** eax32;
    uint32_t edx33;
    uint32_t v34;
    void** ecx35;
    void** v36;
    void** v37;
    void** v38;
    void* v39;
    void** v40;
    void* v41;
    void** v42;
    void** ecx43;
    int32_t v44;
    int32_t v45;
    int32_t v46;
    void** eax47;
    void* edx48;
    uint32_t eax49;
    uint32_t edi50;
    void** esi51;
    void** v52;
    void** eax53;
    int32_t v54;
    void** eax55;
    void** ecx56;
    int32_t v57;
    int32_t v58;
    void** v59;
    void** v60;

    ecx1 = 48;
    ebp2 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4);
    edi3 = edx4;
    esi5 = eax6;
    eax7 = __x86_get_pc_thunk_bx();
    while (ecx1) {
        --ecx1;
        *edi3 = eax7;
        edi3 = edi3 + 4;
        esi5 = reinterpret_cast<struct s18*>(reinterpret_cast<uint32_t>(esi5) + 4);
    }
    ecx8 = esi5->f76;
    esi5->f104 = reinterpret_cast<void*>(0);
    esi5->f80 = reinterpret_cast<void**>(0);
    if (!ecx8 || (v9 = edx10, v11 = esi5, v12 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(ecx8) + (esi5->f96 >> 31) + 0xffffffff), eax13 = _Unwind_Find_FDE(v12, &esi5->f84, edi3, edi3), v14 = eax13, eax13 == 0)) {
        eax15 = reinterpret_cast<void**>(5);
    } else {
        ecx16 = 0xffffffff;
        *reinterpret_cast<void**>(v9 + 0xa4) = v11->f92;
        esi17 = reinterpret_cast<struct s25*>(reinterpret_cast<uint32_t>(v14 + 4) - reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(v14 + 4)));
        v18 = &esi17->f9;
        edi19 = v18;
        do {
            if (!ecx16) 
                break;
            --ecx16;
            ++edi19;
            esi17 = reinterpret_cast<struct s25*>(reinterpret_cast<uint32_t>(esi17) + 1);
        } while (*edi19);
        ecx20 = reinterpret_cast<void**>(~ecx16);
        eax21 = reinterpret_cast<struct s26*>(reinterpret_cast<uint32_t>(v18) + reinterpret_cast<unsigned char>(ecx20));
        if (esi17->f9 != 0x65) 
            goto addr_b963_10;
        if (esi17->f10 != 0x68) 
            goto addr_b963_10; else 
            goto addr_b94f_12;
    }
    addr_bb87_13:
    return eax15;
    addr_b963_10:
    if (esi17->f8 > 3) {
        if (eax21->f0 != 4) 
            goto addr_bb82_15;
        if (eax21->f1) 
            goto addr_bb82_15;
    }
    read_uleb128(ecx20, v22, v23, v24);
    *reinterpret_cast<int32_t*>(v9 + 0xb0) = v25;
    eax27 = read_sleb128(v9, v26);
    *reinterpret_cast<uint32_t*>(v9 + 0xac) = v28;
    if (esi17->f8 != 1) {
        eax32 = read_uleb128(eax27, v29, v30, v31);
        edx33 = v34;
    } else {
        edx33 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax27));
        eax32 = eax27 + 1;
    }
    ecx35 = reinterpret_cast<void**>(0);
    *reinterpret_cast<uint32_t*>(v9 + 0xb4) = edx33;
    *reinterpret_cast<void***>(v9 + 0xb9) = reinterpret_cast<void**>(0xff);
    if (*v18 == 0x7a) {
        eax32 = read_uleb128(0, v36, v37, v38);
        ++v18;
        ecx35 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(v39) + reinterpret_cast<unsigned char>(eax32));
        *reinterpret_cast<signed char*>(v9 + 0xba) = 1;
    }
    v40 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp2) + 0xffffffe4);
    v41 = reinterpret_cast<void*>(v18 + 1);
    while (*reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(v41) - 1)) {
        if (*reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(v41) - 1) != 76) {
            if (*reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(v41) - 1) != 82) {
                if (*reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(v41) - 1) != 80) {
                    if (*reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(v41) - 1) != 83) 
                        goto addr_ba98_29;
                    *reinterpret_cast<signed char*>(v9 + 0xbb) = 1;
                } else {
                    v42 = ecx35;
                    ecx43 = eax32 + 1;
                    base_of_encoded_value(ecx43, v44);
                    eax32 = read_encoded_value_with_base(ecx43, v40, v11, v11, v45);
                    *reinterpret_cast<int32_t*>(v9 + 0xa8) = v46;
                    ecx35 = v42;
                }
            } else {
                *reinterpret_cast<void***>(v9 + 0xb8) = *reinterpret_cast<void***>(eax32);
                goto addr_ba35_33;
            }
        } else {
            *reinterpret_cast<void***>(v9 + 0xb9) = *reinterpret_cast<void***>(eax32);
            goto addr_ba35_33;
        }
        addr_ba89_35:
        v41 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(v41) + 1);
        continue;
        addr_ba35_33:
        ++eax32;
        goto addr_ba89_35;
    }
    if (ecx35) {
        eax32 = ecx35;
    }
    addr_ba9a_39:
    if (!eax32) {
        addr_bb82_15:
        eax15 = reinterpret_cast<void**>(3);
        goto addr_bb87_13;
    } else {
        execute_cfa_program(v11, v9, ecx35, ecx35);
        eax47 = v9;
        eax47 = *reinterpret_cast<void***>(eax47 + 0xb8);
        if (eax47 == 0xff) {
            addr_baef_41:
            edx48 = reinterpret_cast<void*>(0);
            goto addr_baf8_42;
        } else {
            eax49 = reinterpret_cast<unsigned char>(eax47) & 7;
            if (*reinterpret_cast<unsigned char*>(&eax49) == 2) {
                edx48 = reinterpret_cast<void*>(2);
                goto addr_baf8_42;
            }
            if (*reinterpret_cast<unsigned char*>(&eax49) <= 2) 
                goto addr_bace_46;
        }
    }
    if (*reinterpret_cast<unsigned char*>(&eax49) == 3) {
        addr_baf3_48:
        edx48 = reinterpret_cast<void*>(4);
        goto addr_baf8_42;
    } else {
        edx48 = reinterpret_cast<void*>(8);
        if (*reinterpret_cast<unsigned char*>(&eax49) == 4) {
            addr_baf8_42:
            edi50 = 0;
            esi51 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(edx48) + reinterpret_cast<int32_t>(edx48) + 8 + reinterpret_cast<unsigned char>(v14));
            if (*reinterpret_cast<signed char*>(v9 + 0xba)) {
                eax53 = read_uleb128(ecx35, v52, v42, v40);
                esi51 = eax53;
                edi50 = v54 + reinterpret_cast<unsigned char>(eax53);
            }
        } else {
            goto addr_baea_52;
        }
    }
    eax55 = v9;
    ecx56 = reinterpret_cast<void**>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax55 + 0xb9))));
    if (*reinterpret_cast<signed char*>(&ecx56) != -1) {
        base_of_encoded_value(ecx56, v57);
        read_encoded_value_with_base(esi51, reinterpret_cast<int32_t>(ebp2) + 0xffffffe4, v11, v11, v58);
        eax55 = v59;
        v11->f80 = eax55;
    }
    if (!edi50) {
    }
    execute_cfa_program(v11, v9, eax55, eax55);
    eax15 = reinterpret_cast<void**>(0);
    goto addr_bb87_13;
    addr_baea_52:
    fun_21e0(v60, v42, v40);
    goto addr_baef_41;
    addr_bace_46:
    if (!*reinterpret_cast<unsigned char*>(&eax49)) 
        goto addr_baf3_48;
    goto addr_baea_52;
    addr_ba98_29:
    eax32 = ecx35;
    goto addr_ba9a_39;
    addr_b94f_12:
    eax21 = eax21 + 2;
    *reinterpret_cast<signed char*>(v9 + 0xbc) = eax21->f0;
    v18 = &esi17->f11;
    goto addr_b963_10;
}

/* __x86.get_pc_thunk.cx */
void __x86_get_pc_thunk_cx();

struct s27 {
    signed char[4840] pad4840;
    signed char f4840;
    signed char f4841;
    signed char f4842;
    signed char f4843;
    signed char f4844;
    signed char f4845;
    signed char f4846;
    signed char f4847;
    signed char f4848;
    signed char f4849;
    signed char[1] pad4851;
    signed char f4851;
    signed char f4852;
    signed char f4853;
    signed char f4854;
    signed char f4855;
    signed char f4856;
};

void init_dwarf_reg_size_table(void** ecx) {
    struct s27* ecx2;

    __x86_get_pc_thunk_cx();
    ecx2 = reinterpret_cast<struct s27*>(ecx + 0x8755);
    ecx2->f4840 = 4;
    ecx2->f4842 = 4;
    ecx2->f4841 = 4;
    ecx2->f4843 = 4;
    ecx2->f4846 = 4;
    ecx2->f4847 = 4;
    ecx2->f4845 = 4;
    ecx2->f4844 = 4;
    ecx2->f4851 = 12;
    ecx2->f4852 = 12;
    ecx2->f4853 = 12;
    ecx2->f4854 = 12;
    ecx2->f4855 = 12;
    ecx2->f4856 = 12;
    ecx2->f4849 = 4;
    ecx2->f4848 = 4;
    return;
}

struct s28 {
    int32_t f0;
    int32_t f4;
    signed char[8] pad16;
    uint32_t f16;
};

struct s29 {
    signed char[72] pad72;
    int32_t f72;
    signed char[20] pad96;
    uint32_t f96;
};

int32_t _Unwind_GetCFA(struct s29* a1, struct s29* a2, void** a3, void** a4);

void** _Unwind_RaiseException_Phase2() {
    struct s28* edi1;
    struct s28* eax2;
    struct s29* esi3;
    struct s29* edx4;
    void** eax5;
    void** v6;
    void** ecx7;
    void** v8;
    void** edx9;
    void** v10;
    struct s29* v11;
    int32_t v12;
    int32_t v13;
    void** eax14;
    int32_t eax15;
    void** eax16;
    int32_t eax17;
    uint32_t edx18;
    void** v19;
    void** v20;
    void** v21;

    edi1 = eax2;
    esi3 = edx4;
    __x86_get_pc_thunk_bx();
    goto addr_bc82_2;
    addr_bd0e_3:
    eax5 = reinterpret_cast<void**>(2);
    addr_bd1a_4:
    return eax5;
    addr_bd15_5:
    eax5 = reinterpret_cast<void**>(7);
    goto addr_bd1a_4;
    addr_bcfa_6:
    goto addr_bd0e_3;
    addr_bcce_7:
    while (v6 = ecx7, v8 = edx9, v10 = ecx7, v11 = esi3, ecx7 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(edx9) | 2), v12 = edi1->f4, v13 = edi1->f0, eax15 = reinterpret_cast<int32_t>(eax14(1, ecx7, v13, v12, edi1, v11, v10, v6)), eax15 != 7) {
        edx9 = v8;
        if (eax15 != 8) 
            goto addr_bcfa_6;
        while (!edx9) {
            uw_update_context();
            addr_bc82_2:
            eax16 = uw_frame_state_for();
            v8 = eax16;
            eax17 = _Unwind_GetCFA(esi3, v11, v10, 0xbc8f);
            ecx7 = v8;
            edx18 = 0;
            *reinterpret_cast<unsigned char*>(&edx18) = reinterpret_cast<uint1_t>(eax17 - (esi3->f96 >> 31) == edi1->f16);
            edx9 = reinterpret_cast<void**>(edx18 << 2);
            if (ecx7) 
                goto addr_bd0e_3;
            eax14 = v19;
            if (eax14) 
                goto addr_bcce_7;
        }
        eax14 = fun_21e0(v20, v21, v8);
    }
    goto addr_bd15_5;
}

struct s30 {
    signed char[99] pad99;
    unsigned char f99;
};

struct s31 {
    signed char[112] pad112;
    signed char f112;
};

void* uw_install_context_1(void** ecx) {
    void** eax2;
    void* ebx3;
    void* ebx4;
    void** v5;
    int1_t zf6;
    struct s30* edx7;
    struct s18* v8;
    struct s18* edx9;
    struct s31* edx10;
    int32_t v11;
    void** v12;
    void** v13;
    void** eax14;
    void* eax15;
    unsigned char cl16;
    void** edx17;
    void** v18;
    void** esi19;
    uint32_t ecx20;
    void** edi21;
    void** v22;
    int32_t v23;
    void** eax24;

    eax2 = __x86_get_pc_thunk_bx();
    ebx3 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(ebx4) + 0x8656);
    v5 = eax2;
    zf6 = (edx7->f99 & 64) == 0;
    v8 = edx9;
    if ((zf6 || !edx10->f112) && !v8->f16) {
        _Unwind_SetSpColumn(ecx, reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 + 0xffffffe4, v11, v12, v13);
    }
    eax14 = reinterpret_cast<void**>(0);
    goto addr_a90a_4;
    addr_a9a1_5:
    return eax15;
    while (1) {
        cl16 = reinterpret_cast<uint1_t>(!!edx17);
        if (!*reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(v8) + reinterpret_cast<unsigned char>(eax14) + 0x6c) || !cl16) {
            *reinterpret_cast<unsigned char*>(&v18 + 3) = reinterpret_cast<uint1_t>(!!esi19);
            if (*reinterpret_cast<unsigned char*>(&v18 + 3) & cl16 && esi19 != edx17) {
                ecx20 = *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(eax14) + reinterpret_cast<uint32_t>(ebx3) + 0x12e8);
                edi21 = edx17;
                while (ecx20) {
                    --ecx20;
                    *reinterpret_cast<void***>(edi21) = *reinterpret_cast<void***>(esi19);
                    ++edi21;
                    ++esi19;
                }
            }
        } else {
            if (*reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(eax14) + reinterpret_cast<uint32_t>(ebx3) + 0x12e8) != 4) {
                addr_a920_12:
                eax14 = fun_21e0(v22, v18, v5);
                continue;
            } else {
                *reinterpret_cast<void***>(edx17) = esi19;
            }
        }
        ++eax14;
        if (reinterpret_cast<int1_t>(eax14 == 17)) 
            break;
        addr_a90a_4:
        edx17 = *reinterpret_cast<void***>(v5 + reinterpret_cast<unsigned char>(eax14) * 4);
        esi19 = *reinterpret_cast<void***>(reinterpret_cast<uint32_t>(v8) + reinterpret_cast<unsigned char>(eax14) * 4);
        if (*reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(v5) + reinterpret_cast<unsigned char>(eax14) + 0x6c)) 
            goto addr_a920_12;
    }
    if ((!(*reinterpret_cast<unsigned char*>(v5 + 99) & 64) || (eax15 = reinterpret_cast<void*>(0), !*reinterpret_cast<signed char*>(v5 + 0x70))) && (eax15 = reinterpret_cast<void*>(0), !*reinterpret_cast<void***>(v5 + 16))) {
        eax24 = _Unwind_GetGR(v8, 4, 0, 0, v23);
        eax15 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax24) - reinterpret_cast<uint32_t>(*reinterpret_cast<void**>(v5 + 72)) + reinterpret_cast<int32_t>(v8->f104));
        goto addr_a9a1_5;
    }
}

void _Unwind_DebugHook(int32_t a1, int32_t a2, void* a3, void* a4) {
    return;
}

struct s32 {
    int32_t f0;
    int32_t f4;
    signed char[8] pad16;
    int32_t f16;
};

struct s33 {
    signed char[12] pad12;
    int32_t f12;
};

void** _Unwind_ForcedUnwind_Phase2() {
    int32_t edi1;
    int32_t edx2;
    struct s32* esi3;
    struct s32* eax4;
    int32_t v5;
    struct s33* eax6;
    int32_t v7;
    void** eax8;
    int32_t eax9;
    int32_t v10;
    int32_t v11;
    int32_t eax12;
    void** edx13;
    int32_t v14;
    int32_t v15;
    int32_t v16;
    void** eax17;
    void** eax18;

    edi1 = edx2;
    esi3 = eax4;
    v5 = eax6->f12;
    v7 = esi3->f16;
    while ((eax8 = uw_frame_state_for(), eax8 == 5) || !eax8) {
        eax9 = 26;
        if (!reinterpret_cast<int1_t>(eax8 == 5)) {
            eax9 = 10;
        }
        v10 = esi3->f4;
        v11 = esi3->f0;
        eax12 = reinterpret_cast<int32_t>(v5(1, eax9, v11, v10, esi3, edi1, v7, 10));
        if (eax12) 
            break;
        edx13 = eax8;
        if (edx13 == 5) 
            goto addr_bde4_7;
        if (v14) {
            v15 = esi3->f4;
            v16 = esi3->f0;
            eax17 = reinterpret_cast<void**>(v14(1, 10, v16, v15, esi3, edi1, edx13, edx13));
            edx13 = eax17;
            if (eax17 == 7) 
                goto addr_bde4_7;
            if (eax17 != 8) 
                break;
        }
        uw_update_context();
    }
    eax18 = reinterpret_cast<void**>(2);
    addr_bde6_13:
    return eax18;
    addr_bde4_7:
    eax18 = edx13;
    goto addr_bde6_13;
}

struct s34 {
    void** f0;
    signed char[75] pad76;
    int32_t f76;
    signed char[16] pad96;
    int32_t f96;
};

struct s35 {
    signed char[200] pad200;
    int32_t f200;
    signed char[4636] pad4840;
    signed char f4840;
};

int32_t fun_20f0(int32_t a1, int32_t a2, void** a3, void** a4);

void uw_init_context_1(int32_t a1) {
    int32_t v2;
    void** ecx3;
    void* ebp4;
    struct s34* esi5;
    struct s34* eax6;
    void** eax7;
    struct s35* ebx8;
    void* ebx9;
    struct s34* edi10;
    void** v11;
    void** eax12;
    void** v13;
    void** v14;
    void** v15;
    void** v16;
    int32_t v17;
    int32_t eax18;

    v2 = reinterpret_cast<int32_t>(__return_address());
    ecx3 = reinterpret_cast<void**>(32);
    ebp4 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4);
    esi5 = eax6;
    eax7 = __x86_get_pc_thunk_bx();
    ebx8 = reinterpret_cast<struct s35*>(reinterpret_cast<int32_t>(ebx9) + 0x7381);
    edi10 = esi5;
    while (ecx3) {
        --ecx3;
        edi10->f0 = eax7;
        edi10 = reinterpret_cast<struct s34*>(reinterpret_cast<int32_t>(edi10) + 4);
        esi5 = reinterpret_cast<struct s34*>(reinterpret_cast<int32_t>(esi5) + 4);
    }
    esi5->f96 = 0x40000000;
    esi5->f76 = v2;
    v11 = reinterpret_cast<void**>(0xbbd6);
    eax12 = uw_frame_state_for();
    if (eax12) {
        v11 = reinterpret_cast<void**>(0xbbdf);
        eax12 = fun_21e0(v13, v14, v15);
    }
    if ((!ebx8->f200 || (v11 = eax12, v16 = eax12, v17 = reinterpret_cast<int32_t>(ebx8) - 0x875a, eax18 = fun_20f0(reinterpret_cast<int32_t>(ebx8) + 0x12e4, v17, v16, v11), !!eax18)) && !ebx8->f4840) {
        v11 = reinterpret_cast<void**>(0xbbf6);
        init_dwarf_reg_size_table(ecx3);
    }
    _Unwind_SetSpColumn(ecx3, reinterpret_cast<int32_t>(ebp4) + 0xffffff24, v17, v16, v11);
    uw_update_context_1();
    esi5->f76 = a1;
    return;
}

int32_t read_sleb128(void** ecx, int32_t a2) {
    uint32_t esi3;
    uint32_t* v4;
    uint32_t* edx5;
    uint32_t ecx6;
    int32_t eax7;
    uint32_t edi8;
    uint32_t edx9;
    uint32_t edx10;

    esi3 = 0;
    v4 = edx5;
    ecx6 = 0;
    do {
        ++eax7;
        edi8 = *reinterpret_cast<unsigned char*>(eax7 - 1);
        edx9 = (edi8 & 0x7f) << *reinterpret_cast<unsigned char*>(&ecx6);
        ecx6 = ecx6 + 7;
        esi3 = esi3 | edx9;
        edx10 = edi8;
    } while (*reinterpret_cast<signed char*>(&edx10) < 0);
    if (ecx6 <= 31 && edi8 & 64) {
        esi3 = esi3 | 0xffffffff << *reinterpret_cast<unsigned char*>(&ecx6);
    }
    *v4 = esi3;
    return eax7;
}

void frame_downheap(void** a1, void** a2, void** a3, void** a4) {
    int32_t v5;
    int32_t edx6;
    void** edx7;
    void** edi8;
    int32_t v9;
    int32_t eax10;
    void** esi11;
    void** ecx12;
    void** v13;
    int32_t v14;
    void** eax15;
    void*** ecx16;
    void*** edx17;
    void** v18;
    void** v19;
    int32_t eax20;
    void** v21;

    v5 = edx6;
    edx7 = a2;
    edi8 = a1;
    v9 = eax10;
    esi11 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(edx7) + reinterpret_cast<unsigned char>(edx7) + 1);
    while (reinterpret_cast<signed char>(esi11) < reinterpret_cast<signed char>(a3)) {
        ecx12 = esi11 + 1;
        if (reinterpret_cast<signed char>(ecx12) < reinterpret_cast<signed char>(a3) && (v13 = *reinterpret_cast<void***>(edi8 + reinterpret_cast<unsigned char>(ecx12) * 4), v14 = *reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(edi8 + reinterpret_cast<unsigned char>(ecx12) * 4) - 4), eax15 = reinterpret_cast<void**>(v5(v9, v14, v13, edx7)), edx7 = edx7, reinterpret_cast<signed char>(eax15) < reinterpret_cast<signed char>(0))) {
            esi11 = ecx12;
        }
        ecx16 = reinterpret_cast<void***>(edi8 + reinterpret_cast<unsigned char>(esi11) * 4);
        edx17 = reinterpret_cast<void***>(edi8 + reinterpret_cast<unsigned char>(edx7) * 4);
        v18 = *ecx16;
        v19 = *edx17;
        eax20 = reinterpret_cast<int32_t>(v5(v9, v19, v18, eax15));
        if (eax20 >= 0) 
            break;
        v21 = *edx17;
        *edx17 = *ecx16;
        edx7 = esi11;
        eax15 = v21;
        esi11 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(esi11) + reinterpret_cast<unsigned char>(esi11) + 1);
        *ecx16 = eax15;
    }
    return;
}

struct s36 {
    signed char[8] pad8;
    unsigned char f8;
    signed char f9;
    signed char f10;
};

struct s37 {
    signed char[9] pad9;
    signed char f9;
};

void** read_uleb128(void** ecx, int32_t a2);

void** read_encoded_value_with_base(void** a1, void** a2, void** a3, void** a4);

void** get_cie_encoding(void** ecx) {
    struct s36* edx2;
    struct s36* eax3;
    uint32_t ecx4;
    void* ebp5;
    signed char* esi6;
    struct s37* eax7;
    signed char* edi8;
    void** ecx9;
    void** eax10;
    int32_t v11;
    int32_t v12;
    int32_t v13;
    signed char* edi14;
    int32_t v15;
    void** eax16;
    void** esi17;
    void** edx18;

    edx2 = eax3;
    ecx4 = 0xffffffff;
    ebp5 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4);
    esi6 = &eax7->f9;
    edi8 = esi6;
    do {
        if (!ecx4) 
            break;
        --ecx4;
        ++edi8;
        ++esi6;
    } while (*edi8);
    ecx9 = reinterpret_cast<void**>(~ecx4 + reinterpret_cast<uint32_t>(esi6));
    if (edx2->f8 > 3) {
        eax10 = reinterpret_cast<void**>(0xff);
        if (!reinterpret_cast<int1_t>(*reinterpret_cast<void***>(ecx9) == 4) || *reinterpret_cast<void***>(ecx9 + 1)) {
            addr_c730_6:
            return eax10;
        } else {
            ecx9 = ecx9 + 2;
        }
    }
    if (edx2->f9 == 0x7a) {
        read_uleb128(ecx9, v11);
        read_sleb128(ecx9, v12);
        if (edx2->f8 != 1) {
            read_uleb128(ecx9, v13);
        }
        edi14 = &edx2->f10;
        eax16 = read_uleb128(ecx9, v15);
        esi17 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp5) + 0xffffffec);
        while (*edi14 != 82) {
            if (*edi14 != 80) {
                if (*edi14 != 76) 
                    goto addr_c6c7_16;
                ++eax16;
            } else {
                edx18 = eax16 + 1;
                eax16 = read_encoded_value_with_base(edx18, esi17, ecx9, ecx9);
            }
            ++edi14;
        }
    } else {
        addr_c6c7_16:
        eax10 = reinterpret_cast<void**>(0);
        goto addr_c730_6;
    }
    eax10 = reinterpret_cast<void**>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax16))));
    goto addr_c730_6;
}

struct s38 {
    void** f0;
    signed char[3] pad4;
    void** f4;
};

void** read_encoded_value_with_base(void** a1, void** a2, void** a3, void** a4) {
    void** eax5;
    int32_t ebx6;
    int32_t ebx7;
    void** v8;
    uint32_t eax9;
    void** v10;
    void** v11;
    void** v12;
    void** eax13;
    int32_t edx14;
    struct s38* eax15;
    void** edx16;
    uint32_t ecx17;
    uint32_t ecx18;
    void** edi19;
    void* edx20;

    eax5 = __x86_get_pc_thunk_bx();
    ebx6 = ebx7 + 0x69af;
    v8 = eax5;
    if (*reinterpret_cast<signed char*>(&v8) != 80) {
        *reinterpret_cast<signed char*>(&eax5) = *reinterpret_cast<signed char*>(&v8);
        eax9 = reinterpret_cast<unsigned char>(eax5) & 15;
        if (*reinterpret_cast<unsigned char*>(&eax9) <= 12) {
            goto *reinterpret_cast<int32_t*>(ebx6 + *reinterpret_cast<unsigned char*>(&eax9) * 4 - 0x39f8) + ebx6;
        }
        eax13 = fun_21e0(v10, v11, v12);
        if (edx14) 
            goto addr_c5f1_6;
    } else {
        eax15 = reinterpret_cast<struct s38*>(reinterpret_cast<uint32_t>(a1 + 3) & 0xfffffffc);
        edx16 = eax15->f0;
        eax13 = reinterpret_cast<void**>(&eax15->f4);
    }
    addr_c607_8:
    *reinterpret_cast<void***>(a2) = edx16;
    return eax13;
    addr_c5f1_6:
    *reinterpret_cast<signed char*>(&ecx17) = *reinterpret_cast<signed char*>(&v8);
    ecx18 = ecx17 & 0x70;
    if (*reinterpret_cast<signed char*>(&ecx18) == 16) {
        edi19 = a1;
    }
    edx16 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(edx20) + reinterpret_cast<unsigned char>(edi19));
    if (*reinterpret_cast<signed char*>(&v8) < 0) {
        edx16 = *reinterpret_cast<void***>(edx16);
        goto addr_c607_8;
    }
}

struct s39 {
    signed char[4] pad4;
    void** f4;
};

struct s40 {
    signed char[8] pad8;
    void** f8;
};

void** base_from_object(void** ecx) {
    void** eax2;
    uint32_t eax3;
    void** eax4;
    struct s39* edx5;
    struct s40* edx6;
    int1_t zf7;
    void** ebx8;
    void** ebp9;

    eax2 = __x86_get_pc_thunk_bx();
    if (*reinterpret_cast<signed char*>(&eax2) == -1) 
        goto addr_c522_2;
    eax3 = reinterpret_cast<unsigned char>(eax2) & 0x70;
    if (*reinterpret_cast<unsigned char*>(&eax3) == 32) {
        addr_c518_4:
        eax4 = edx5->f4;
    } else {
        if (*reinterpret_cast<unsigned char*>(&eax3) > 32) {
            if (*reinterpret_cast<unsigned char*>(&eax3) == 48) {
                eax4 = edx6->f8;
            } else {
                zf7 = *reinterpret_cast<unsigned char*>(&eax3) == 80;
                goto addr_c511_9;
            }
        } else {
            if (!*reinterpret_cast<unsigned char*>(&eax3)) 
                goto addr_c522_2;
            zf7 = *reinterpret_cast<unsigned char*>(&eax3) == 16;
            goto addr_c511_9;
        }
    }
    addr_c524_12:
    return eax4;
    addr_c511_9:
    if (zf7) {
        addr_c522_2:
        eax4 = reinterpret_cast<void**>(0);
        goto addr_c524_12;
    } else {
        fun_21e0(ecx, ebx8, ebp9);
        goto addr_c518_4;
    }
}

struct s41 {
    signed char[4] pad4;
    int32_t f4;
};

struct s42 {
    signed char[8] pad8;
    int32_t f8;
};

int32_t base_from_cb_data(void** ecx) {
    void** eax2;
    uint32_t eax3;
    int32_t eax4;
    struct s41* edx5;
    struct s42* edx6;
    int1_t zf7;
    void** ebx8;
    void** ebp9;

    eax2 = __x86_get_pc_thunk_bx();
    if (*reinterpret_cast<signed char*>(&eax2) == -1) 
        goto addr_c564_2;
    eax3 = reinterpret_cast<unsigned char>(eax2) & 0x70;
    if (*reinterpret_cast<unsigned char*>(&eax3) == 32) {
        addr_c55a_4:
        eax4 = edx5->f4;
    } else {
        if (*reinterpret_cast<unsigned char*>(&eax3) > 32) {
            if (*reinterpret_cast<unsigned char*>(&eax3) == 48) {
                eax4 = edx6->f8;
            } else {
                zf7 = *reinterpret_cast<unsigned char*>(&eax3) == 80;
                goto addr_c553_9;
            }
        } else {
            if (!*reinterpret_cast<unsigned char*>(&eax3)) 
                goto addr_c564_2;
            zf7 = *reinterpret_cast<unsigned char*>(&eax3) == 16;
            goto addr_c553_9;
        }
    }
    addr_c566_12:
    return eax4;
    addr_c553_9:
    if (zf7) {
        addr_c564_2:
        eax4 = 0;
        goto addr_c566_12;
    } else {
        fun_21e0(ecx, ebx8, ebp9);
        goto addr_c55a_4;
    }
}

struct s43 {
    signed char[8] pad8;
    unsigned char f8;
    signed char f9;
    signed char f10;
};

struct s44 {
    signed char[4] pad4;
    int32_t f4;
};

void** get_fde_encoding(void** ecx) {
    struct s43* eax2;
    void* eax3;
    struct s44* eax4;
    struct s43* edx5;
    uint32_t ecx6;
    void* ebp7;
    signed char* esi8;
    signed char* edi9;
    void** ecx10;
    void** eax11;
    int32_t v12;
    int32_t v13;
    int32_t v14;
    signed char* edi15;
    int32_t v16;
    void** eax17;
    void** esi18;
    void** edx19;

    eax2 = reinterpret_cast<struct s43*>(reinterpret_cast<int32_t>(eax3) + 4 - eax4->f4);
    edx5 = eax2;
    ecx6 = 0xffffffff;
    ebp7 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 + 4 - 4);
    esi8 = &eax2->f9;
    edi9 = esi8;
    do {
        if (!ecx6) 
            break;
        --ecx6;
        ++edi9;
        ++esi8;
    } while (*edi9);
    ecx10 = reinterpret_cast<void**>(~ecx6 + reinterpret_cast<uint32_t>(esi8));
    if (edx5->f8 > 3) {
        eax11 = reinterpret_cast<void**>(0xff);
        if (!reinterpret_cast<int1_t>(*reinterpret_cast<void***>(ecx10) == 4) || *reinterpret_cast<void***>(ecx10 + 1)) {
            addr_c730_7:
            return eax11;
        } else {
            ecx10 = ecx10 + 2;
        }
    }
    if (edx5->f9 == 0x7a) {
        read_uleb128(ecx10, v12);
        read_sleb128(ecx10, v13);
        if (edx5->f8 != 1) {
            read_uleb128(ecx10, v14);
        }
        edi15 = &edx5->f10;
        eax17 = read_uleb128(ecx10, v16);
        esi18 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp7) + 0xffffffec);
        while (*edi15 != 82) {
            if (*edi15 != 80) {
                if (*edi15 != 76) 
                    goto addr_c6c7_17;
                ++eax17;
            } else {
                edx19 = eax17 + 1;
                eax17 = read_encoded_value_with_base(edx19, esi18, ecx10, ecx10);
            }
            ++edi15;
        }
    } else {
        addr_c6c7_17:
        eax11 = reinterpret_cast<void**>(0);
        goto addr_c730_7;
    }
    eax11 = reinterpret_cast<void**>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax17))));
    goto addr_c730_7;
}

struct s45 {
    uint32_t f0;
    signed char[12] pad16;
    unsigned char f16;
};

struct s46 {
    void* f0;
    uint32_t f4;
    void** f8;
};

void* size_of_encoded_value(void** ecx, void** a2, void** a3, void** a4, void** a5);

void** classify_object_over_fdes() {
    struct s45* edi1;
    struct s45* eax2;
    void** eax3;
    struct s46* esi4;
    struct s46* edx5;
    void** v6;
    void** v7;
    void** v8;
    void** v9;
    void** ecx10;
    void** eax11;
    unsigned char eax12;
    unsigned char edx13;
    void** v14;
    void* eax15;
    uint32_t edx16;
    uint32_t ecx17;
    uint32_t v18;
    uint16_t ax19;
    void** eax20;

    edi1 = eax2;
    eax3 = reinterpret_cast<void**>(0);
    esi4 = edx5;
    v6 = reinterpret_cast<void**>(0);
    v7 = reinterpret_cast<void**>(0);
    v8 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 + 0xfffffff4);
    while (esi4->f0) {
        if (!esi4->f4) {
            v9 = eax3;
        } else {
            ecx10 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(&esi4->f4) - esi4->f4);
            v9 = ecx10;
            if (ecx10 == eax3) {
                v9 = eax3;
                goto addr_ce04_7;
            } else {
                eax11 = get_cie_encoding(ecx10);
                v6 = eax11;
                if (reinterpret_cast<int1_t>(eax11 == 0xff)) 
                    goto addr_cdb5_9;
                base_from_object(ecx10);
                eax12 = edi1->f16;
                edx13 = eax12;
                if ((*reinterpret_cast<uint16_t*>(&edx13) & 0x7f8) != 0x7f8) 
                    goto addr_cdef_11; else 
                    goto addr_cddc_12;
            }
        }
        addr_ce57_13:
        esi4 = reinterpret_cast<struct s46*>(reinterpret_cast<int32_t>(esi4) + reinterpret_cast<int32_t>(esi4->f0) + 4);
        eax3 = v9;
        continue;
        addr_ce04_7:
        v14 = reinterpret_cast<void**>(&esi4->f8);
        read_encoded_value_with_base(v14, v8, eax3, eax3);
        eax15 = size_of_encoded_value(static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(&v6)), v14, v8, eax3, eax3);
        edx16 = 0xffffffff;
        if (reinterpret_cast<uint32_t>(eax15) <= 3) {
            ecx17 = reinterpret_cast<uint32_t>(eax15) * 8;
            edx16 = reinterpret_cast<uint32_t>((1 << *reinterpret_cast<unsigned char*>(&ecx17)) - 1);
        }
        if (edx16 & v18 && (++v7, v18 < edi1->f0)) {
            edi1->f0 = v18;
            goto addr_ce57_13;
        }
        addr_cdef_11:
        ax19 = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&eax12) >> 3);
        eax3 = reinterpret_cast<void**>(static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(&ax19)));
        if (eax3 != v6) {
            edi1->f16 = reinterpret_cast<unsigned char>(edi1->f16 | 4);
            goto addr_ce04_7;
        }
        addr_cddc_12:
        *reinterpret_cast<uint16_t*>(&eax12) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&eax12) & 0xf807);
        eax3 = reinterpret_cast<void**>(eax12 | static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(&v6)) << 3);
        edi1->f16 = *reinterpret_cast<unsigned char*>(&eax3);
        goto addr_ce04_7;
    }
    eax20 = v7;
    addr_ce68_19:
    return eax20;
    addr_cdb5_9:
    eax20 = reinterpret_cast<void**>(0xffffffff);
    goto addr_ce68_19;
}

struct s47 {
    signed char[56] pad56;
    int32_t f56;
};

void** fun_20c0(uint32_t a1) {
    struct s47* ebx2;

    goto ebx2->f56;
}

void frame_heapsort(void** a1, void** a2, void** a3, void** a4) {
    void** v5;
    void** edx6;
    void** esi7;
    void** ecx8;
    void** edi9;
    void** v10;
    void** edx11;
    void** v12;
    void** esi13;
    void** edx14;
    void** eax15;
    void** v16;

    v5 = edx6;
    esi7 = *reinterpret_cast<void***>(a1 + 4);
    ecx8 = a1 + 8;
    edi9 = reinterpret_cast<void**>((reinterpret_cast<unsigned char>(esi7) >> 1) - 1);
    while (edi9 != 0xffffffff) {
        v10 = edx11;
        edx11 = v5;
        v12 = edi9;
        --edi9;
        frame_downheap(ecx8, v12, esi7, v10);
        ecx8 = ecx8;
    }
    esi13 = esi7 - 1;
    while (!(reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(esi13) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(esi13 == 0))) {
        edx14 = *reinterpret_cast<void***>(ecx8 + reinterpret_cast<unsigned char>(esi13) * 4);
        eax15 = *reinterpret_cast<void***>(a1 + 8);
        *reinterpret_cast<void***>(a1 + 8) = edx14;
        *reinterpret_cast<void***>(ecx8 + reinterpret_cast<unsigned char>(esi13) * 4) = eax15;
        v16 = esi13;
        --esi13;
        frame_downheap(ecx8, 0, v16, eax15);
        ecx8 = ecx8;
    }
    return;
}

struct s48 {
    signed char[16] pad16;
    unsigned char f16;
};

struct s49 {
    signed char[16] pad16;
    int32_t f16;
};

void** linear_search_fdes(void** ecx, void** a2, void** a3, void** a4, void** a5) {
    void* ebp6;
    struct s48* edi7;
    struct s48* eax8;
    void** esi9;
    void** edx10;
    int32_t eax11;
    struct s49* eax12;
    uint16_t ax13;
    void** v14;
    void** v15;
    void** eax16;
    void** edx17;
    void** v18;
    void** ecx19;
    void** eax20;
    void** eax21;
    void** v22;
    void* eax23;
    uint32_t edx24;
    uint32_t ecx25;
    int1_t zf26;
    void** v27;
    void** eax28;
    void** edx29;
    void** v30;
    void** eax31;

    ebp6 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4);
    edi7 = eax8;
    esi9 = edx10;
    eax11 = eax12->f16;
    ax13 = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&eax11) >> 3);
    v14 = reinterpret_cast<void**>(static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(&ax13)));
    base_from_object(ecx);
    v15 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp6) + 0xfffffff0);
    eax16 = reinterpret_cast<void**>(0);
    while (*reinterpret_cast<void***>(esi9)) {
        edx17 = *reinterpret_cast<void***>(esi9 + 4);
        v18 = eax16;
        if (edx17) {
            if (edi7->f16 & 4 && (ecx19 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(esi9 + 4) - reinterpret_cast<unsigned char>(edx17)), v18 = ecx19, ecx19 != eax16)) {
                eax20 = get_cie_encoding(ecx19);
                v14 = eax20;
                eax16 = base_from_object(ecx19);
            }
            if (v14) {
                eax21 = read_encoded_value_with_base(esi9 + 8, v15, eax16, eax16);
                v22 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp6) + 0xfffffff4);
                read_encoded_value_with_base(eax21, v22, eax16, eax16);
                eax23 = size_of_encoded_value(reinterpret_cast<unsigned char>(v14) & 15, eax21, v22, eax16, eax16);
                edx24 = 0xffffffff;
                if (reinterpret_cast<uint32_t>(eax23) <= 3) {
                    ecx25 = reinterpret_cast<uint32_t>(eax23) * 8;
                    edx24 = reinterpret_cast<uint32_t>((1 << *reinterpret_cast<unsigned char*>(&ecx25)) - 1);
                }
                zf26 = (reinterpret_cast<unsigned char>(v27) & edx24) == 0;
            } else {
                eax28 = *reinterpret_cast<void***>(esi9 + 8);
                edx29 = *reinterpret_cast<void***>(esi9 + 12);
                v27 = eax28;
                zf26 = eax28 == 0;
                v30 = edx29;
            }
            if (zf26) 
                goto addr_c820_12;
            if (reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(a2) - reinterpret_cast<unsigned char>(v27)) < reinterpret_cast<unsigned char>(v30)) 
                goto addr_c7c5_14;
        }
        addr_c820_12:
        esi9 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(esi9) + reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(esi9)) + 4);
        eax16 = v18;
    }
    eax31 = reinterpret_cast<void**>(0);
    addr_c830_16:
    return eax31;
    addr_c7c5_14:
    eax31 = esi9;
    goto addr_c830_16;
}

struct s50 {
    signed char[16] pad16;
    unsigned char f16;
};

struct s51 {
    signed char[16] pad16;
    int32_t f16;
};

struct s52 {
    signed char[4] pad4;
    int32_t f4;
};

void add_fdes(void** ecx, void** a2) {
    struct s50* edi3;
    struct s50* eax4;
    int32_t eax5;
    struct s51* eax6;
    struct s52** v7;
    struct s52** edx8;
    void** esi9;
    uint16_t ax10;
    void** v11;
    void** v12;
    void** eax13;
    void** edx14;
    void** v15;
    void** ecx16;
    void** eax17;
    void** v18;
    void* eax19;
    uint32_t edx20;
    uint32_t ecx21;
    int1_t zf22;
    uint32_t v23;
    struct s52* eax24;
    int32_t edx25;

    edi3 = eax4;
    eax5 = eax6->f16;
    v7 = edx8;
    esi9 = a2;
    ax10 = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&eax5) >> 3);
    v11 = reinterpret_cast<void**>(static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(&ax10)));
    base_from_object(ecx);
    v12 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 + 0xfffffff4);
    eax13 = reinterpret_cast<void**>(0);
    while (*reinterpret_cast<void***>(esi9)) {
        edx14 = *reinterpret_cast<void***>(esi9 + 4);
        v15 = eax13;
        if (edx14) {
            if (edi3->f16 & 4 && (ecx16 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(esi9 + 4) - reinterpret_cast<unsigned char>(edx14)), v15 = ecx16, ecx16 != eax13)) {
                eax17 = get_cie_encoding(ecx16);
                v11 = eax17;
                eax13 = base_from_object(ecx16);
            }
            if (v11) {
                v18 = esi9 + 8;
                read_encoded_value_with_base(v18, v12, eax13, eax13);
                eax19 = size_of_encoded_value(static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(&v11)), v18, v12, eax13, eax13);
                edx20 = 0xffffffff;
                if (reinterpret_cast<uint32_t>(eax19) <= 3) {
                    ecx21 = reinterpret_cast<uint32_t>(eax19) * 8;
                    edx20 = reinterpret_cast<uint32_t>((1 << *reinterpret_cast<unsigned char*>(&ecx21)) - 1);
                }
                zf22 = (v23 & edx20) == 0;
            } else {
                zf22 = *reinterpret_cast<void***>(esi9 + 8) == 0;
            }
            if (!zf22 && (eax24 = *v7, !!eax24)) {
                edx25 = eax24->f4;
                eax24->f4 = edx25 + 1;
                *reinterpret_cast<void***>(reinterpret_cast<int32_t>(eax24) + edx25 * 4 + 8) = esi9;
            }
        }
        esi9 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(esi9) + reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(esi9)) + 4);
        eax13 = v15;
    }
    return;
}

struct s53 {
    signed char[148] pad148;
    int32_t f148;
};

void fun_2230(int32_t a1) {
    struct s53* ebx2;

    goto ebx2->f148;
}

struct s54 {
    signed char[104] pad104;
    int32_t f104;
};

void** fun_2180(int32_t a1) {
    struct s54* ebx2;

    goto ebx2->f104;
}

void** __register_frame_info_bases(void** a1, void** a2, void** a3, void** a4, void** a5);

void** __register_frame_info(int32_t ecx, void** a2, void** a3) {
    void** eax4;
    void** eax5;

    eax4 = __x86_get_pc_thunk_bx();
    eax5 = __register_frame_info_bases(a2, a3, 0, 0, eax4);
    return eax5;
}

struct s55 {
    signed char[200] pad200;
    int32_t f200;
    signed char[4952] pad5156;
    void** f5156;
};

void** __register_frame_info_table_bases(void** a1, void** a2, void** a3, void** a4, void** a5) {
    struct s55* ebx6;
    void* ebx7;
    int32_t edi8;
    void** eax9;

    __x86_get_pc_thunk_bx();
    ebx6 = reinterpret_cast<struct s55*>(reinterpret_cast<int32_t>(ebx7) + 0x598b);
    edi8 = ebx6->f200;
    *reinterpret_cast<void***>(a2 + 16) = reinterpret_cast<void**>(0);
    *reinterpret_cast<void***>(a2 + 4) = a3;
    *reinterpret_cast<void***>(a2 + 16) = reinterpret_cast<void**>(2);
    *reinterpret_cast<void***>(a2) = reinterpret_cast<void**>(0xffffffff);
    *reinterpret_cast<void***>(a2 + 8) = a4;
    *reinterpret_cast<void***>(a2 + 16) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(a2 + 16)) | 0x7f8);
    *reinterpret_cast<void***>(a2 + 12) = a1;
    if (edi8) {
        fun_2230(reinterpret_cast<int32_t>(ebx6) + 0x141c);
    }
    eax9 = ebx6->f5156;
    ebx6->f5156 = a2;
    *reinterpret_cast<void***>(a2 + 20) = eax9;
    if (edi8) {
        eax9 = fun_2180(reinterpret_cast<int32_t>(ebx6) + 0x141c);
    }
    return eax9;
}

struct s56 {
    signed char[48] pad48;
    int32_t f48;
};

void fun_20a0(void** a1, void** a2, void** a3, void** a4, void** a5) {
    struct s56* ebx6;

    goto ebx6->f48;
}

void** __deregister_frame_info_bases(void** a1);

void** __deregister_frame_info(void** a1) {
    void** eax2;

    __x86_get_pc_thunk_bx();
    eax2 = __deregister_frame_info_bases(a1);
    return eax2;
}

struct s57 {
    signed char[200] pad200;
    int32_t f200;
    signed char[4948] pad5152;
    void** f5152;
    signed char[3] pad5156;
    void** f5156;
};

void** search_object();

int32_t fun_22a0(int32_t a1, void* a2, void** a3, void** a4);

void** _Unwind_Find_FDE(void** a1, void** a2, void*** a3, void*** a4) {
    void* ebp5;
    struct s57* ebx6;
    void* ebx7;
    void** esi8;
    void** eax9;
    void** edi10;
    void*** edx11;
    void** eax12;
    int32_t eax13;
    void** eax14;
    uint16_t ax15;
    void** eax16;
    void** v17;
    void** eax18;

    ebp5 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4);
    __x86_get_pc_thunk_bx();
    ebx6 = reinterpret_cast<struct s57*>(reinterpret_cast<int32_t>(ebx7) + 0x5788);
    if (ebx6->f200) {
        fun_2230(reinterpret_cast<int32_t>(ebx6) + 0x141c);
    }
    esi8 = ebx6->f5152;
    while (esi8) {
        if (reinterpret_cast<unsigned char>(a1) >= reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(esi8))) 
            goto addr_d7d2_6;
        esi8 = *reinterpret_cast<void***>(esi8 + 20);
    }
    do {
        esi8 = ebx6->f5156;
        if (!esi8) 
            break;
        ebx6->f5156 = *reinterpret_cast<void***>(esi8 + 20);
        eax9 = search_object();
        edi10 = eax9;
        edx11 = &ebx6->f5152;
        eax12 = ebx6->f5152;
        while (eax12 && reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax12)) >= reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(esi8))) {
            edx11 = reinterpret_cast<void***>(eax12 + 20);
            eax12 = *reinterpret_cast<void***>(eax12 + 20);
        }
        *reinterpret_cast<void***>(esi8 + 20) = eax12;
        *edx11 = esi8;
        addr_d819_13:
    } while (!edi10);
    goto addr_d81d_14;
    edi10 = reinterpret_cast<void**>(0);
    if (!ebx6->f200) 
        goto addr_d8a9_16;
    fun_2180(reinterpret_cast<int32_t>(ebx6) + 0x141c);
    if (!edi10) {
        addr_d8a9_16:
        edi10 = reinterpret_cast<void**>(0);
        eax13 = fun_22a0(reinterpret_cast<int32_t>(ebx6) - 0x66dc, reinterpret_cast<int32_t>(ebp5) - 48, a1, a1);
        if (eax13 >= 0 && (edi10 = reinterpret_cast<void**>(0), !1)) {
            *reinterpret_cast<void***>(a2) = reinterpret_cast<void**>(0);
            *reinterpret_cast<void***>(a2 + 4) = reinterpret_cast<void**>(0);
            *reinterpret_cast<void***>(a2 + 8) = reinterpret_cast<void**>(0);
        }
    } else {
        addr_d851_19:
        *reinterpret_cast<void***>(a2) = *reinterpret_cast<void***>(esi8 + 4);
        *reinterpret_cast<void***>(a2 + 4) = *reinterpret_cast<void***>(esi8 + 8);
        eax14 = *reinterpret_cast<void***>(esi8 + 16);
        ax15 = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&eax14) >> 3);
        eax16 = reinterpret_cast<void**>(static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(&ax15)));
        if (reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(esi8 + 16)) & 4) {
            eax16 = get_fde_encoding(a2);
            goto addr_d876_21;
        }
    }
    addr_d91c_22:
    return edi10;
    addr_d876_21:
    base_from_object(static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(&eax16)));
    read_encoded_value_with_base(edi10 + 8, reinterpret_cast<int32_t>(ebp5) + 0xffffffd0, esi8, esi8);
    *reinterpret_cast<void***>(a2 + 8) = v17;
    goto addr_d91c_22;
    addr_d81d_14:
    if (!ebx6->f200) {
        goto addr_d851_19;
    }
    addr_d7d2_6:
    eax18 = search_object();
    edi10 = eax18;
    goto addr_d819_13;
}

struct s58 {
    signed char[4892] pad4892;
    void** f4892;
    signed char[3] pad4896;
    void** f4896;
};

void** search_object() {
    void* ebp1;
    void** esi2;
    void** eax3;
    void** eax4;
    struct s58* ebx5;
    void* ebx6;
    void** al7;
    void** v8;
    void** edx9;
    void** ecx10;
    void** v11;
    void** v12;
    void** eax13;
    void** eax14;
    void** edi15;
    void** eax16;
    uint32_t edi17;
    void** eax18;
    void** v19;
    void** eax20;
    void** edx21;
    void** v22;
    void** v23;
    void** edi24;
    void** v25;
    void** esi26;
    void** eax27;
    void** v28;
    void** v29;
    void** eax30;
    void** v31;
    void** eax32;
    void** ecx33;
    void** edx34;
    void** v35;
    void** eax36;
    void** eax37;
    void** edi38;
    void** esi39;
    void** eax40;
    void** v41;
    void** edi42;
    void** v43;
    void** v44;
    void** v45;
    void** v46;
    void** eax47;
    void** v48;
    void** ecx49;
    void** eax50;
    void** v51;
    void** eax52;
    void** eax53;
    void** v54;
    void** v55;
    void** edi56;
    void** v57;
    void** edx58;
    int1_t zf59;
    int32_t v60;
    int1_t zf61;
    void** v62;
    void** eax63;
    void** edi64;
    void** v65;
    void** ecx66;
    void** v67;
    void** eax68;
    void** v69;
    void** v70;
    void** v71;
    int32_t eax72;
    void** v73;
    void** edi74;
    void** v75;
    void** v76;
    void** v77;
    void** v78;
    void** edi79;
    void** v80;
    void** v81;
    void** edx82;
    void** v83;
    void** v84;
    void** v85;
    void** ecx86;
    int32_t eax87;
    void** v88;

    ebp1 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4);
    esi2 = eax3;
    eax4 = __x86_get_pc_thunk_bx();
    ebx5 = reinterpret_cast<struct s58*>(reinterpret_cast<int32_t>(ebx6) + 0x5fbd);
    al7 = *reinterpret_cast<void***>(eax4 + 16);
    v8 = edx9;
    if (reinterpret_cast<unsigned char>(al7) & 1) 
        goto addr_cf7b_2;
    ecx10 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(esi2 + 16)) >> 11);
    v11 = ecx10;
    if (!ecx10) {
        if (!(reinterpret_cast<unsigned char>(al7) & 2)) {
            v12 = reinterpret_cast<void**>(0xcfdc);
            eax13 = classify_object_over_fdes();
            v11 = eax13;
            if (!(eax13 + 1)) {
                addr_cfaf_6:
                *reinterpret_cast<void***>(esi2 + 16) = reinterpret_cast<void**>(0);
                *reinterpret_cast<void***>(esi2 + 16) = reinterpret_cast<void**>(0x7f8);
                *reinterpret_cast<void***>(esi2 + 12) = reinterpret_cast<void**>(&ebx5->f4896);
                goto addr_d139_7;
            } else {
                addr_cfe2_8:
                if (!reinterpret_cast<int1_t>((reinterpret_cast<unsigned char>(v11) & 0x1fffff) == v11)) {
                    eax14 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(esi2 + 16)) & 0x7ff);
                } else {
                    eax14 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(esi2 + 16)) & 0x7ff | reinterpret_cast<unsigned char>(v11) << 11);
                }
            }
            *reinterpret_cast<void***>(esi2 + 16) = eax14;
            if (!v11) 
                goto addr_d139_7;
        } else {
            edi15 = *reinterpret_cast<void***>(esi2 + 12);
            while (*reinterpret_cast<void***>(edi15)) {
                v12 = reinterpret_cast<void**>(0xcfaa);
                eax16 = classify_object_over_fdes();
                if (reinterpret_cast<int1_t>(eax16 == 0xffffffff)) 
                    goto addr_cfaf_6;
                v11 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v11) + reinterpret_cast<unsigned char>(eax16));
                edi15 = edi15 + 4;
            }
            goto addr_cfe2_8;
        }
    }
    edi17 = reinterpret_cast<unsigned char>(v11) * 4 + 8;
    eax18 = fun_20c0(edi17);
    v19 = eax18;
    if (!eax18) {
        addr_d139_7:
        if (reinterpret_cast<unsigned char>(v8) >= reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(esi2))) {
            addr_cf7b_2:
            if (reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(esi2 + 16)) & 1) {
                if (!(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(esi2 + 16)) & 4)) {
                    eax20 = *reinterpret_cast<void***>(esi2 + 16);
                    if (*reinterpret_cast<uint16_t*>(&eax20) & 0x7f8) {
                        edx21 = esi2;
                        v22 = *reinterpret_cast<void***>(esi2 + 12);
                        base_from_object(ecx10);
                        v23 = reinterpret_cast<void**>(0);
                        edi24 = *reinterpret_cast<void***>(v22 + 4);
                        v25 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp1) + 0xffffffdc);
                        while (reinterpret_cast<unsigned char>(v23) < reinterpret_cast<unsigned char>(edi24)) {
                            esi26 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(edi24) + reinterpret_cast<unsigned char>(v23) >> 1);
                            eax27 = *reinterpret_cast<void***>(reinterpret_cast<uint32_t>(v22 + reinterpret_cast<unsigned char>(esi26) * 4) + 8);
                            v28 = edx21;
                            v29 = edx21;
                            eax30 = read_encoded_value_with_base(eax27 + 8, v25, v29, v28);
                            edx21 = reinterpret_cast<void**>(0);
                            read_encoded_value_with_base(eax30, reinterpret_cast<int32_t>(ebp1) + 0xffffffe0, v29, v28);
                            if (reinterpret_cast<unsigned char>(v8) >= reinterpret_cast<unsigned char>(v31)) {
                                if (reinterpret_cast<unsigned char>(v8) < reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(v31) + reinterpret_cast<unsigned char>(v19))) 
                                    goto addr_d2dd_23;
                                eax32 = esi26 + 1;
                                esi26 = edi24;
                                v23 = eax32;
                            }
                            edi24 = esi26;
                        }
                        goto addr_d144_26;
                    } else {
                        ecx33 = reinterpret_cast<void**>(0);
                        edx34 = *reinterpret_cast<void***>(*reinterpret_cast<void***>(esi2 + 12) + 4);
                        v35 = *reinterpret_cast<void***>(esi2 + 12);
                        while (reinterpret_cast<unsigned char>(ecx33) < reinterpret_cast<unsigned char>(edx34)) {
                            eax36 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(edx34) + reinterpret_cast<unsigned char>(ecx33) >> 1);
                            eax37 = *reinterpret_cast<void***>(reinterpret_cast<uint32_t>(v35 + reinterpret_cast<unsigned char>(eax36) * 4) + 8);
                            edi38 = *reinterpret_cast<void***>(eax37 + 8);
                            esi39 = *reinterpret_cast<void***>(eax37 + 12);
                            if (reinterpret_cast<unsigned char>(v8) < reinterpret_cast<unsigned char>(edi38)) {
                                edx34 = eax36;
                            } else {
                                if (reinterpret_cast<unsigned char>(v8) < reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(edi38) + reinterpret_cast<unsigned char>(esi39))) 
                                    goto addr_d49b_32;
                                ecx33 = eax36 + 1;
                            }
                        }
                        goto addr_d144_26;
                    }
                } else {
                    eax40 = *reinterpret_cast<void***>(esi2 + 12);
                    v41 = reinterpret_cast<void**>(0);
                    edi42 = *reinterpret_cast<void***>(eax40 + 4);
                    v43 = eax40;
                    v44 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp1) + 0xffffffdc);
                    while (reinterpret_cast<unsigned char>(v41) < reinterpret_cast<unsigned char>(edi42)) {
                        v45 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v41) + reinterpret_cast<unsigned char>(edi42) >> 1);
                        v46 = *reinterpret_cast<void***>(reinterpret_cast<uint32_t>(v43 + reinterpret_cast<unsigned char>(v45) * 4) + 8);
                        eax47 = get_fde_encoding(v45);
                        v48 = eax47;
                        ecx49 = reinterpret_cast<void**>(static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(&v48)));
                        base_from_object(ecx49);
                        eax50 = read_encoded_value_with_base(v46 + 8, v44, ecx49, ecx49);
                        read_encoded_value_with_base(eax50, reinterpret_cast<int32_t>(ebp1) + 0xffffffe0, ecx49, ecx49);
                        if (reinterpret_cast<unsigned char>(v8) >= reinterpret_cast<unsigned char>(v51)) {
                            if (reinterpret_cast<unsigned char>(v8) < reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(v51) + reinterpret_cast<unsigned char>(v19))) 
                                goto addr_d1ea_38;
                            eax52 = v45;
                            v45 = edi42;
                            v41 = eax52 + 1;
                        }
                        edi42 = v45;
                    }
                    goto addr_d144_26;
                }
            } else {
                if (!(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(esi2 + 16)) & 2)) 
                    goto addr_d317_43; else 
                    goto addr_d2ed_44;
            }
        } else {
            addr_d144_26:
            eax37 = reinterpret_cast<void**>(0);
            goto addr_d49b_32;
        }
    } else {
        *reinterpret_cast<void***>(eax18 + 4) = reinterpret_cast<void**>(0);
        eax53 = fun_20c0(edi17);
        v54 = eax53;
        if (eax53) {
            *reinterpret_cast<void***>(eax53 + 4) = reinterpret_cast<void**>(0);
        }
        if (!(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(esi2 + 16)) & 2)) {
            v55 = *reinterpret_cast<void***>(esi2 + 12);
            add_fdes(ecx10, v55);
        } else {
            edi56 = *reinterpret_cast<void***>(esi2 + 12);
            while (*reinterpret_cast<void***>(edi56)) {
                edi56 = edi56 + 4;
                v57 = *reinterpret_cast<void***>(edi56);
                add_fdes(ecx10, v57);
            }
        }
        edx58 = v19;
        if (!edx58) 
            goto addr_d381_53;
        if (*reinterpret_cast<void***>(edx58 + 4) != v11) 
            goto addr_d37c_55;
        while (1) {
            addr_d381_53:
            zf59 = (reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(esi2 + 16)) & 4) == 0;
            v60 = reinterpret_cast<int32_t>(ebx5) - 0x6243;
            if (zf59 && (zf61 = (reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(esi2 + 16)) & 0x7f8) == 0, v60 = reinterpret_cast<int32_t>(ebx5) - 0x6bb5, !zf61)) {
                v60 = reinterpret_cast<int32_t>(ebx5) - 0x690f;
            }
            v62 = v54;
            if (!v54) 
                goto addr_d488_58;
            eax63 = *reinterpret_cast<void***>(edx58 + 4);
            edi64 = reinterpret_cast<void**>(&ebx5->f4892);
            v65 = edi64;
            ecx66 = reinterpret_cast<void**>(0);
            v67 = eax63;
            eax68 = edx58 + 8;
            v69 = eax68;
            while (ecx66 != v67) {
                while (edi64 != v65 && (v12 = eax68, v70 = *reinterpret_cast<void***>(edi64), v71 = *reinterpret_cast<void***>(v69), eax72 = reinterpret_cast<int32_t>(v60(esi2, v71, v70, v12)), edx58 = edx58, ecx66 = ecx66, eax72 < 0)) {
                    eax68 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v62) - reinterpret_cast<unsigned char>(edx58) + reinterpret_cast<unsigned char>(edi64) + 0xfffffff8);
                    edi64 = *reinterpret_cast<void***>(eax68 + 8);
                    *reinterpret_cast<void***>(eax68 + 8) = reinterpret_cast<void**>(0);
                }
                eax68 = v62;
                *reinterpret_cast<void***>(reinterpret_cast<uint32_t>(eax68 + reinterpret_cast<unsigned char>(ecx66) * 4) + 8) = edi64;
                edi64 = v69;
                v69 = v69 + 4;
                ++ecx66;
            }
            v73 = reinterpret_cast<void**>(0);
            edi74 = reinterpret_cast<void**>(0);
            v75 = reinterpret_cast<void**>(0);
            while (ecx10 = v67, v75 != ecx10) {
                if (!*reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(v62 + reinterpret_cast<unsigned char>(v75) * 4) + 8)) {
                    *reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(v62 + reinterpret_cast<unsigned char>(edi74) * 4) + 8) = *reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(edx58 + reinterpret_cast<unsigned char>(v75) * 4) + 8);
                    ++edi74;
                } else {
                    *reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(edx58 + reinterpret_cast<unsigned char>(v73) * 4) + 8) = *reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(edx58 + reinterpret_cast<unsigned char>(v75) * 4) + 8);
                    ++v73;
                }
                ++v75;
            }
            *reinterpret_cast<void***>(edx58 + 4) = v73;
            edx58 = v54;
            *reinterpret_cast<void***>(v62 + 4) = edi74;
            if (reinterpret_cast<int1_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(v19 + 4)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(edx58 + 4)) == v11)) 
                goto addr_d0ae_71;
            addr_d37c_55:
            v12 = reinterpret_cast<void**>(0xd381);
            fun_21e0(v76, v77, v78);
        }
    }
    addr_d2dd_23:
    eax37 = eax27;
    addr_d49b_32:
    return eax37;
    addr_d1ea_38:
    eax37 = v46;
    goto addr_d49b_32;
    addr_d317_43:
    eax37 = linear_search_fdes(ecx10, v8, v71, v70, v12);
    goto addr_d49b_32;
    addr_d2ed_44:
    edi79 = *reinterpret_cast<void***>(esi2 + 12);
    while (*reinterpret_cast<void***>(edi79)) {
        eax37 = linear_search_fdes(ecx10, v8, v71, v70, v12);
        if (eax37) 
            goto addr_d49b_32;
        edi79 = edi79 + 4;
    }
    goto addr_d144_26;
    addr_d488_58:
    frame_heapsort(edx58, v71, v70, v12);
    addr_d127_75:
    *reinterpret_cast<void***>(v19) = *reinterpret_cast<void***>(esi2 + 12);
    *reinterpret_cast<void***>(esi2 + 12) = v19;
    *reinterpret_cast<void***>(esi2 + 16) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(esi2 + 16)) | 1);
    goto addr_d139_7;
    addr_d0ae_71:
    frame_heapsort(edx58, v71, v70, v12);
    v80 = v54;
    v81 = v19;
    edx82 = *reinterpret_cast<void***>(v80 + 4);
    if (edx82) {
        v83 = *reinterpret_cast<void***>(v81 + 4);
        v84 = v81 + reinterpret_cast<unsigned char>(edx82) * 4;
        do {
            --edx82;
            v85 = *reinterpret_cast<void***>(reinterpret_cast<uint32_t>(v80 + reinterpret_cast<unsigned char>(edx82) * 4) + 8);
            while (v83 && (v12 = edi74, ecx86 = v83 + 0xffffffff, v70 = v85, v71 = *reinterpret_cast<void***>(reinterpret_cast<uint32_t>(v81 + reinterpret_cast<unsigned char>(ecx86) * 4) + 8), eax87 = reinterpret_cast<int32_t>(v60(esi2, v71, v70, v12)), edx82 = edx82, !(reinterpret_cast<uint1_t>(eax87 < 0) | reinterpret_cast<uint1_t>(eax87 == 0)))) {
                edi74 = v84;
                v83 = ecx86;
                *reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(edi74 + reinterpret_cast<unsigned char>(ecx86) * 4) + 8) = *reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(v81 + reinterpret_cast<unsigned char>(ecx86) * 4) + 8);
            }
            v84 = v84 - 4;
            edi74 = v85;
            ecx10 = v81;
            *reinterpret_cast<void***>(reinterpret_cast<uint32_t>(ecx10 + (reinterpret_cast<unsigned char>(v83) + reinterpret_cast<unsigned char>(edx82)) * 4) + 8) = edi74;
        } while (edx82);
        *reinterpret_cast<void***>(ecx10 + 4) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(ecx10 + 4)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(v80 + 4)));
    }
    fun_20a0(v54, v71, v70, v12, v88);
    goto addr_d127_75;
}

void fun_2200(uint32_t a1, void** a2, uint32_t a3, int32_t a4);

void fun_2529() {
    int32_t ebx1;
    void** v2;
    int32_t v3;

    ebx1 = reinterpret_cast<int32_t>(__return_address()) + 0x109fb;
    fun_2200(ebx1 - 0x10a24, v2, ebx1 + 0x31c, __return_address());
    goto v3;
}

struct s59 {
    signed char[12] pad12;
    signed char f12;
};

struct s60 {
    signed char[8] pad8;
    int32_t f8;
};

struct s61 {
    signed char[8] pad8;
    void** f8;
};

struct s62 {
    signed char[12] pad12;
    signed char f12;
};

void fun_359e() {
    signed char cl1;
    struct s59* ebp2;
    int32_t edx3;
    struct s60* ebp4;
    void** esi5;
    struct s61* ebp6;
    int32_t v7;
    struct s62* ebp8;
    int32_t ebp9;
    int32_t ebp10;
    int32_t ebp11;
    void** v12;
    int32_t v13;

    cl1 = ebp2->f12;
    edx3 = ebp4->f8;
    esi5 = ebp6->f8;
    v7 = ebp8->f12;
    *reinterpret_cast<signed char*>(ebp9 - 13) = cl1;
    *reinterpret_cast<int32_t*>(ebp10 - 20) = edx3;
    *reinterpret_cast<void***>(ebp11 - 24) = esi5;
    _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc(esi5, *reinterpret_cast<signed char*>(&v7), v12);
    goto v13;
}

void fun_29c0();

void** fun_2190(void** a1, void** a2);

int32_t fun_2280(void** a1, void** a2, void** a3, void** a4);

int32_t fun_2060(void** a1, void** a2, void** a3, void** a4);

/* parse_output(char const*) */
void _Z12parse_outputPKc(void** a1, void** a2, void** a3) {
    void* ebp4;
    void* eax5;
    void* v6;
    void** v7;
    void* v8;
    void** v9;
    void** eax10;
    void** v11;
    int32_t eax12;
    int32_t eax13;
    void** v14;

    ebp4 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4);
    fun_29c0();
    eax5 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(v6) + 0x10564);
    v7 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(eax5) + 0xffffc466);
    v8 = eax5;
    v9 = a1;
    eax10 = fun_2190(a1, v7);
    v11 = eax10;
    if (eax10) {
        while (eax12 = fun_2280(reinterpret_cast<int32_t>(ebp4) + 0xfffffdf4, "5594570", v11, v9), !!eax12) {
            fun_2220(reinterpret_cast<int32_t>(ebp4) + 0xfffffdf4, "5594570", v11, v9);
        }
        eax13 = fun_2060(v11, "5594570", v11, v9);
        if (eax13) 
            goto addr_2a88_7;
    } else {
        fun_2220(reinterpret_cast<int32_t>(v8) + 0xffffb0dc, v7, v14, v9);
        goto addr_2ab1_9;
    }
    addr_2ab1_9:
    goto a1;
    addr_2a88_7:
    fun_2220(reinterpret_cast<int32_t>(v8) + 0xffffb0f1, "5594570", v11, v9);
    goto addr_2ab1_9;
}

struct s63 {
    signed char[168] pad168;
    int32_t f168;
};

int32_t fun_2280(void** a1, void** a2, void** a3, void** a4) {
    struct s63* ebx5;

    goto ebx5->f168;
}

struct s64 {
    signed char[32] pad32;
    int32_t f32;
};

int32_t fun_2060(void** a1, void** a2, void** a3, void** a4) {
    struct s64* ebx5;

    goto ebx5->f32;
}

struct s65 {
    signed char[112] pad112;
    int32_t f112;
};

int32_t fun_21a0(int32_t a1, int32_t a2, void** a3) {
    struct s65* ebx4;

    goto ebx4->f112;
}

void fun_25ae();

struct s66 {
    void* f0;
    void** f4;
    signed char[3] pad8;
    void** f8;
};

struct s67 {
    int32_t f0;
    void** f4;
    signed char[3] pad8;
    void** f8;
    signed char[3] pad12;
    void** f12;
};

struct s68 {
    void* f0;
    int32_t f4;
};

struct s69 {
    int32_t f0;
    void** f4;
    signed char[3] pad8;
    void** f8;
    signed char[3] pad12;
    void** f12;
    signed char[3] pad16;
    int32_t f16;
};

/* std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(char const*) */
void _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2EPKc(void** a1, void** a2, void** a3, int32_t a4);

struct s70 {
    void* f0;
    void* f4;
};

struct s71 {
    int32_t f0;
    void** f4;
    signed char[3] pad8;
    void** f8;
    signed char[3] pad12;
    void** f12;
    signed char[3] pad16;
    int32_t f16;
};

/* base64_decode(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */
void _Z13base64_decodeRKNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEE(void** a1, void** a2);

struct s72 {
    int32_t f0;
    void** f4;
};

/* Cipher::decrypt(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >&) */
void _ZN6Cipher7decryptERNSt6__ndk112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE(void** a1);

struct s73 {
    int32_t f0;
    void** f4;
    signed char[3] pad8;
    void** f8;
    signed char[3] pad12;
    void** f12;
    signed char[3] pad16;
    int32_t f16;
    void** f20;
    signed char[3] pad24;
    void** f24;
};

/* decrypt(unsigned char*, int) */
void* _Z7decryptPhi(void* a1, void** a2, void** a3) {
    void* esp4;
    void* ebp5;
    void* v6;
    void* eax7;
    void* v8;
    struct s66* esp9;
    void* v10;
    struct s67* esp11;
    struct s68* esp12;
    int32_t v13;
    struct s69* esp14;
    void* esp15;
    void** v16;
    struct s70* esp17;
    struct s71* esp18;
    struct s70* esp19;
    struct s71* esp20;
    void** esp21;
    struct s72* esp22;
    void* esp23;
    void** esp24;
    struct s73* esp25;
    void** esp26;
    struct s73* esp27;

    esp4 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4);
    ebp5 = esp4;
    fun_25ae();
    v6 = a1;
    eax7 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp4) - 4 - 4 - 4 - 92 - 4 + 4 + 4 + 4 - (reinterpret_cast<uint32_t>(a3 + 16) & 0xfffffff0));
    v8 = eax7;
    esp9 = reinterpret_cast<struct s66*>(reinterpret_cast<uint32_t>(eax7) - 16);
    esp9->f0 = v8;
    esp9->f4 = a2;
    esp9->f8 = a3;
    v10 = a1;
    esp11 = reinterpret_cast<struct s67*>(reinterpret_cast<uint32_t>(esp9) - 4);
    esp11->f0 = 0x262c;
    fun_2010(esp11->f4, esp11->f8, esp11->f12);
    *reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(v8) + reinterpret_cast<unsigned char>(a3) + 1) = 0;
    esp12 = reinterpret_cast<struct s68*>(&esp11->f4 + 16 - 16);
    esp12->f0 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(ebp5) - 32);
    esp12->f4 = v13 + reinterpret_cast<int32_t>("\r") - 0x4f10;
    esp14 = reinterpret_cast<struct s69*>(reinterpret_cast<uint32_t>(esp12) - 4);
    esp14->f0 = 0x2652;
    _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2EPKc(esp14->f4, esp14->f8, esp14->f12, esp14->f16);
    esp15 = reinterpret_cast<void*>(&esp14->f4 + 16);
    v16 = reinterpret_cast<void**>(0);
    while (reinterpret_cast<signed char>(v16) < reinterpret_cast<signed char>(a3)) {
        esp17 = reinterpret_cast<struct s70*>(reinterpret_cast<uint32_t>(esp15) - 16);
        esp17->f4 = reinterpret_cast<void*>(static_cast<int32_t>(*reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(v8) + reinterpret_cast<unsigned char>(v16))));
        esp17->f0 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(ebp5) - 32);
        esp18 = reinterpret_cast<struct s71*>(reinterpret_cast<uint32_t>(esp17) - 4);
        esp18->f0 = 0x2687;
        _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEpLEc(esp18->f4, esp18->f8, esp18->f12, esp18->f16);
        esp15 = reinterpret_cast<void*>(&esp18->f4 + 16);
        ++v16;
    }
    esp19 = reinterpret_cast<struct s70*>(reinterpret_cast<uint32_t>(esp15) - 16);
    esp19->f4 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(ebp5) - 32);
    esp19->f0 = v6;
    esp20 = reinterpret_cast<struct s71*>(reinterpret_cast<uint32_t>(esp19) - 4);
    esp20->f0 = 0x26c9;
    _Z13base64_decodeRKNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEE(esp20->f4, esp20->f8);
    esp21 = reinterpret_cast<void**>(&esp20->f4 + 4 + 12 - 16);
    *esp21 = v6;
    esp22 = reinterpret_cast<struct s72*>(esp21 - 1);
    esp22->f0 = 0x26e3;
    _ZN6Cipher7decryptERNSt6__ndk112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE(esp22->f4);
    esp23 = reinterpret_cast<void*>(&esp22->f4 + 16);
    if (!1) {
        esp24 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(esp23) - 16);
        *esp24 = v6;
        esp25 = reinterpret_cast<struct s73*>(esp24 - 1);
        esp25->f0 = 0x272e;
        _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(esp25->f4, esp25->f8, esp25->f12, esp25->f16, esp25->f20, esp25->f24);
        esp23 = reinterpret_cast<void*>(&esp25->f4 + 16);
    }
    esp26 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(esp23) - 16);
    *esp26 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(ebp5) - 32);
    esp27 = reinterpret_cast<struct s73*>(esp26 - 1);
    esp27->f0 = 0x2742;
    _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(esp27->f4, esp27->f8, esp27->f12, esp27->f16, esp27->f20, esp27->f24);
    return v10;
}

void fun_367c();

/* std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::c_str() const */
void** _ZNKSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE5c_strEv(void** a1, void** a2, void** a3) {
    void** v4;
    void** v5;
    int32_t ebx6;

    fun_367c();
    _ZNKSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE4dataEv(a1, v4, v5, a1, ebx6);
    goto a1;
}

struct s74 {
    signed char[8] pad8;
    int32_t f8;
};

struct s75 {
    signed char[8] pad8;
    int32_t f8;
};

void fun_295c() {
    int32_t ecx1;
    struct s74* ebp2;
    int32_t v3;
    struct s75* ebp4;
    int32_t ebp5;
    int32_t ebp6;
    int32_t eax7;
    int32_t ebp8;
    int32_t ebp9;
    int32_t ebp10;
    int32_t v11;
    int32_t ebp12;
    int32_t ebp13;
    int32_t v14;

    ecx1 = ebp2->f8;
    v3 = ebp4->f8;
    *reinterpret_cast<int32_t*>(ebp5 - 16) = reinterpret_cast<int32_t>(__return_address()) + 0x105c8;
    *reinterpret_cast<int32_t*>(ebp6 - 20) = ecx1;
    eax7 = fun_2040(v3);
    *reinterpret_cast<int32_t*>(ebp8 - 12) = eax7;
    if (!*reinterpret_cast<int32_t*>(ebp9 - 12)) {
        *reinterpret_cast<int32_t*>(ebp10 - 8) = -1;
    } else {
        v11 = *reinterpret_cast<int32_t*>(ebp12 - 12);
        fun_22c0(v11);
        *reinterpret_cast<int32_t*>(ebp13 - 8) = 1;
    }
    goto v14;
}

void fun_352d();

/* std::__ndk1::__compressed_pair<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::__rep, std::__ndk1::allocator<char> >::__compressed_pair<true, void>() */
void _ZNSt6__ndk117__compressed_pairINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE5__repES5_EC2ILb1EvEEv(void** a1);

/* std::__ndk1::char_traits<char>::length(char const*) */
void** _ZNSt6__ndk111char_traitsIcE6lengthEPKc(void** a1);

/* std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::__init(char const*, unsigned int) */
void _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6__initEPKcj(void** a1, void** a2, void** a3);

/* std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(char const*) */
void _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2EPKc(void** a1, void** a2, void** a3, int32_t a4) {
    void** eax5;

    fun_352d();
    _ZNSt6__ndk117__compressed_pairINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE5__repES5_EC2ILb1EvEEv(a1);
    eax5 = _ZNSt6__ndk111char_traitsIcE6lengthEPKc(a2);
    _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6__initEPKcj(a1, a2, eax5);
    goto a1;
}

void fun_37ac();

/* std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::__get_long_pointer() */
void** _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE18__get_long_pointerEv(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7) {
    void** v8;
    void** v9;
    void** ebx10;
    void** ebp11;

    fun_37ac();
    _ZNSt6__ndk117__compressed_pairINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE5__repES5_E5firstEv(a1, v8, v9, a1, ebx10, ebp11, __return_address());
    goto a1;
}

void fun_37dc();

/* std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::__get_long_cap() const */
void** _ZNKSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE14__get_long_capEv(void** a1) {
    void** v2;
    void** v3;
    int32_t ebx4;

    fun_37dc();
    _ZNKSt6__ndk117__compressed_pairINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE5__repES5_E5firstEv(a1, v2, v3, a1, ebx4);
    goto a1;
}

struct s76 {
    signed char[8] pad8;
    int32_t f8;
};

void fun_3d7c() {
    int32_t ecx1;
    struct s76* ebp2;
    int32_t ebp3;
    void** v4;
    void** v5;
    void** v6;
    int32_t v7;
    void** v8;
    int32_t v9;
    int32_t ebx10;
    int32_t v11;
    void** v12;
    void** v13;
    void** v14;
    void** v15;
    void** v16;
    void** v17;
    struct s4* esi18;
    struct s3* eax19;
    int32_t v20;

    ecx1 = ebp2->f8;
    *reinterpret_cast<int32_t*>(ebp3 - 8) = ecx1;
    _ZNSt6__ndk120__throw_length_errorEPKc(reinterpret_cast<int32_t>(__return_address()) + reinterpret_cast<int32_t>("/7PvX59AxxUFBwv8aekDHtI2VNSeTRobF59AxULPyG+JvKL38SQ4vczgSCDHF59DvyC1eP8GgkC/8SQ62ge8nk4M25b3ibygT2AWVe4iIBwQ0ON26+RAoJJ/2iuKYPFcPz+YubufJgB13mkZ2x1ps8vENcTxX4phdK2Z4MrexLzZ/lv5ap6Ei5xlHnReHS1pL9OI+gEpoPw212o385uc1V+58gIrD9OfmBmp3Rh13mmx2x1pg/S8Iva6+JGj2OWwmRepHQqhn9wXZqgElCcDmyYBu50DHGnqVNbSNH5mc0Sn2P30EGHEJeaznBIdnKpEl6E2R+J8gcXpAxxqNlTW0HN/y9h4rvxWpwGOCSPuHRAUFBQU=ITj7vhxv5pX2vTlijEW5z3rXaY8FBQUFBQUFBQUFBQU=1rvNxK5NfWc5LmN7tmgVx/E7c1ZxngMEfX+vtIPo+RHIk1tKtXlsUJ8sw8d301cQvector") + 0xffffb124, v4, v5, v6, v7, v8, v9);
    fun_3dae();
    ebx10 = v11 << 1;
    (&v12)[3] = *reinterpret_cast<void***>(&ebx10);
    eax19 = _ZNSt6__ndk117__compressed_pairINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE5__repES5_E5firstEv(v13, v14, v15, v16, v17, v12, esi18);
    eax19->f0 = (&v12)[3];
    goto v20;
}

void fun_3eae();

/* std::__ndk1::allocator<char>::allocate(unsigned int, void const*) */
void _ZNSt6__ndk19allocatorIcE8allocateEjPKv(void** a1, void** a2, void** a3, int32_t a4, void** a5, void** a6, int32_t a7);

/* std::__ndk1::allocator_traits<std::__ndk1::allocator<char> >::allocate(std::__ndk1::allocator<char>&, unsigned int) */
void** _ZNSt6__ndk116allocator_traitsINS_9allocatorIcEEE8allocateERS2_j(void** a1, void** a2) {
    int32_t esi3;

    fun_3eae();
    _ZNSt6__ndk19allocatorIcE8allocateEjPKv(a1, a2, 0, 0, a1, a2, esi3);
    goto a1;
}

void fun_3f9e();

/* std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::__set_long_size(unsigned int) */
void _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE15__set_long_sizeEj(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, ...) {
    void** v12;
    void** v13;
    struct s4* esi14;
    struct s3* eax15;

    fun_3f9e();
    eax15 = _ZNSt6__ndk117__compressed_pairINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE5__repES5_E5firstEv(a1, v12, v13, a2, a1, a2, esi14);
    eax15->f4 = a2;
    goto a1;
}

struct s77 {
    signed char[12] pad12;
    int32_t f12;
};

struct s78 {
    signed char[8] pad8;
    int32_t f8;
};

struct s79 {
    signed char[12] pad12;
    int32_t f12;
};

struct s80 {
    signed char[8] pad8;
    void** f8;
};

void fun_3dae() {
    int32_t ecx1;
    struct s77* ebp2;
    int32_t edx3;
    struct s78* ebp4;
    int32_t ebx5;
    struct s79* ebp6;
    void** v7;
    struct s80* ebp8;
    int32_t ebp9;
    int32_t ebp10;
    int32_t ebp11;
    void** v12;
    void** v13;
    void** v14;
    void** v15;
    void** v16;
    struct s4* v17;
    struct s3* eax18;
    int32_t ebp19;
    int32_t v20;

    ecx1 = ebp2->f12;
    edx3 = ebp4->f8;
    ebx5 = ebp6->f12 << 1;
    v7 = ebp8->f8;
    *reinterpret_cast<signed char*>(ebp9 - 13) = *reinterpret_cast<signed char*>(&ebx5);
    *reinterpret_cast<int32_t*>(ebp10 - 20) = ecx1;
    *reinterpret_cast<int32_t*>(ebp11 - 24) = edx3;
    eax18 = _ZNSt6__ndk117__compressed_pairINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE5__repES5_E5firstEv(v7, v12, v13, v14, v15, v16, v17);
    eax18->f0 = *reinterpret_cast<void***>(ebp19 - 13);
    goto v20;
}

struct s81 {
    signed char[8] pad8;
    int32_t f8;
};

struct s82 {
    signed char[8] pad8;
    void** f8;
};

void fun_3dfc() {
    int32_t ecx1;
    struct s81* ebp2;
    void** v3;
    struct s82* ebp4;
    int32_t ebp5;
    int32_t ebp6;
    void** v7;
    void** v8;
    void** v9;
    void** v10;
    void** v11;
    struct s4* v12;
    struct s3* eax13;
    int32_t v14;

    ecx1 = ebp2->f8;
    v3 = ebp4->f8;
    *reinterpret_cast<int32_t*>(ebp5 - 8) = reinterpret_cast<int32_t>(__return_address()) + reinterpret_cast<int32_t>("XHZuKlIaj0+M6ip6JM810QNN7hbAFJUqGJ5NGMcXn0EHrfTbn0DHFtYXs2xWXIBakCVr0d5pGHcdabHagCJGe27ENTiL84YftbiM5TVKhO6ucrfQpOKmyjB4AoSVcFzW/7PvX59AxxUFBwv8aekDHtI2VNSeTRobF59AxULPyG+JvKL38SQ4vczgSCDHF59DvyC1eP8GgkC/8SQ62ge8nk4M25b3ibygT2AWVe4iIBwQ0ON26+RAoJJ/2iuKYPFcPz+YubufJgB13mkZ2x1ps8vENcTxX4phdK2Z4MrexLzZ/lv5ap6Ei5xlHnReHS1pL9OI+gEpoPw212o385uc1V+58gIrD9OfmBmp3Rh13mmx2x1pg/S8Iva6+JGj2OWwmRepHQqhn9wXZqgElCcDmyYBu50DHGnqVNbSNH5mc0Sn2P30EGHEJeaznBIdnKpEl6E2R+J8gcXpAxxqNlTW0HN/y9h4rvxWpwGOCSPuHRAUFBQU=ITj7vhxv5pX2vTlijEW5z3rXaY8FBQUFBQUFBQUFBQU=1rvNxK5NfWc5LmN7tmgVx/E7c1ZxngMEfX+vtIPo+RHIk1tKtXlsUJ8sw8d301cQvector");
    *reinterpret_cast<int32_t*>(ebp6 - 12) = ecx1;
    eax13 = _ZNSt6__ndk117__compressed_pairINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE5__repES5_E5firstEv(v3, v7, v8, v9, v10, v11, v12);
    _ZNSt6__ndk114pointer_traitsIPcE10pointer_toERc(&eax13->pad4);
    goto v14;
}

/* unsigned int std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::__align_it<16u>(unsigned int) */
uint32_t _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE10__align_itILj16EEEjj(void** ecx, void** a2) {
    return reinterpret_cast<uint32_t>(a2 + 15) & 0xfffffff0;
}

struct s83 {
    signed char[8] pad8;
    int32_t f8;
};

struct s84 {
    signed char[8] pad8;
    uint32_t f8;
};

struct s85 {
    signed char[188] pad188;
    uint32_t f188;
    int32_t* f192;
};

void fun_419d() {
    int32_t ecx1;
    struct s83* ebp2;
    int32_t ebp3;
    int32_t ebp4;
    int32_t* eax5;
    uint32_t v6;
    struct s84* ebp7;
    int32_t ebp8;
    int32_t* ecx9;
    int32_t ebp10;
    uint32_t edx11;
    int32_t* v12;
    int32_t ebp13;
    struct s6* eax14;
    int32_t ebp15;
    int32_t ebp16;
    uint32_t v17;
    int32_t ebp18;
    struct s6* v19;
    int32_t ebp20;
    int32_t v21;

    ecx1 = ebp2->f8;
    *reinterpret_cast<int32_t*>(ebp3 - 20) = reinterpret_cast<int32_t>(__return_address()) + reinterpret_cast<int32_t>("oxEj5eX+pPdsOGj1sBGNfhIt4PJ+vmvQtpWNI1nLjSwvqja15eMRI+dl/qT1vDho+EFHlUU0L0f+NR+HnQapxVIbcA2NzZuhqO41BRmsy6l9TFL9Qk7duPWtjtW/NDEW7tpLw0X/rmh8Y5CkMtty3Ygbh5NKQhn15HPMPpp3aUcUMXLKiFEnlx8MvfzN4PJyJ2Iop21+EBGA8nIt4iinZ2NEP67M+lJgUsqEMXaRa66cJihyYiw0PvBXXvlavhaBy8vAmdQk4FiHr8MOimGeEmMSxERAV175Wx2SEMkq2plbjoEfr+1llSuJIGiqKfU12IrdMdTlUbS23w9i+1rbc+e4Jq3zapkuvIGAyzBTYhOwJYK9aXE+rnv6QetEturH1J/WtkeVjRhLNSjcV+UTK8buX5DIaFa98EGiIlbmq0CVwxtFqdevGVs1KNxX5RMrzuXugbZnlrGpvXQE2SramV4HBdgDD86XE6OEeajnftV9zEkLYXS0gJ0nzL9Lh5NIFLSAkXJzlZhA9fvnu2otYRDLPIGAftbOrFmRWw8dLllC8ujW5T3fNYIbFyTLoLl33q5Adc2sRlXbn+yN31GFiaRhG9c6HC4PRgDjJQ+fT+OyLeDyfr5r0LaVjSNcKepK8h3s6KGsERujGYZYvr5gsqeLZmTaC0hS+n0tv1sQbZiCzjRyx9Ex9SsDQvNT/78Ai0hS+g0tv1pwbZiLFhmcg99z325fN/64DvyC1eb8nkpm+WVeset25MrmP1MUDHGnpClEayFSOc0lVWtyAMkfBuekDHGnVQ8YK9c0YR4PShwjJQYA5ZjMAM+7szTOrCjDBGCerbFSOc0oLmQV5Axxp6vsXchK2ODTcu/wjbJiNUX4Ynk0YxxefQZWGe/t4PJyJ2Iop2yC1e7+TORS0H7XEnkD/BoCyh3wvXHZuKlIaj0+M6ip6JM810QNN7hbAFJUqGJ5NGMcXn0EHrfTbn0DHFtYXs2xWXIBakCVr0d5pGHcdabHagCJGe27ENTiL84Y");
    *reinterpret_cast<int32_t*>(ebp4 - 24) = ecx1;
    eax5 = fun_2090(8);
    v6 = ebp7->f8;
    *reinterpret_cast<int32_t**>(ebp8 - 28) = eax5;
    _ZNSt12length_errorC2EPKc(eax5, v6);
    ecx9 = (*reinterpret_cast<struct s85**>(ebp10 - 20))->f192;
    edx11 = (*reinterpret_cast<struct s85**>(ebp10 - 20))->f188;
    v12 = *reinterpret_cast<int32_t**>(ebp13 - 28);
    eax14 = fun_21f0(v12);
    *reinterpret_cast<struct s6**>(ebp15 - 12) = eax14;
    *reinterpret_cast<uint32_t*>(ebp16 - 16) = edx11;
    v17 = *reinterpret_cast<uint32_t*>(ebp18 - 28);
    fun_22b0(v17);
    v19 = *reinterpret_cast<struct s6**>(ebp20 - 12);
    _Unwind_Resume(v19);
    fun_422e();
    fun_2080(ecx9, edx11);
    *ecx9 = *reinterpret_cast<int32_t*>(v21 + reinterpret_cast<int32_t>("68KeoyarBpT+jN2ofzc7EYFGwN5O9IVI5xeguZBekDHGvRJ+GYA2CG3uhrc2UkXJ1Q55RwFMOXkpD/BoJC6+iPv2cAbOPtpgQOwS0irTalP+FRJFyf0/jv53g8nIua9C+tY0jVpuNLCnKNrXvoxEj5eX+pPdsOGj1sBGNfhIt4PJ+vmvQtpWNI1nLjSwvqja15eMRI+dl/qT1vDho+EFHlUU0L0f+NR+HnQapxVIbcA2NzZuhqO41BRmsy6l9TFL9Qk7duPWtjtW/NDEW7tpLw0X/rmh8Y5CkMtty3Ygbh5NKQhn15HPMPpp3aUcUMXLKiFEnlx8MvfzN4PJyJ2Iop21+EBGA8nIt4iinZ2NEP67M+lJgUsqEMXaRa66cJihyYiw0PvBXXvlavhaBy8vAmdQk4FiHr8MOimGeEmMSxERAV175Wx2SEMkq2plbjoEfr+1llSuJIGiqKfU12IrdMdTlUbS23w9i+1rbc+e4Jq3zapkuvIGAyzBTYhOwJYK9aXE+rnv6QetEturH1J/WtkeVjRhLNSjcV+UTK8buX5DIaFa98EGiIlbmq0CVwxtFqdevGVs1KNxX5RMrzuXugbZnlrGpvXQE2SramV4HBdgDD86XE6OEeajnftV9zEkLYXS0gJ0nzL9Lh5NIFLSAkXJzlZhA9fvnu2otYRDLPIGAftbOrFmRWw8dLllC8ujW5T3fNYIbFyTLoLl33q5Adc2sRlXbn+yN31GFiaRhG9c6HC4PRgDjJQ+fT+OyLeDyfr5r0LaVjSNcKepK8h3s6KGsERujGYZYvr5gsqeLZmTaC0hS+n0tv1sQbZiCzjRyx9Ex9SsDQvNT/78Ai0hS+g0tv1pwbZiLFhmcg99z325fN/64DvyC1eb8nkpm+WVeset25MrmP1MUDHGnpClEayFSOc0lVWtyAMkfBuekDHGnVQ8YK9c0YR4PShwjJQYA5ZjMAM+7szTOrCjDBGCerbFSOc0oLmQV5Axxp6vsXchK2ODTcu/wjbJiNUX4Ynk") + 0xc4) + 8;
    goto ecx9;
}

struct s86 {
    signed char[12] pad12;
    int32_t f12;
};

struct s87 {
    signed char[8] pad8;
    int32_t f8;
};

struct s88 {
    signed char[8] pad8;
    uint32_t f8;
};

void fun_437d() {
    int32_t ecx1;
    struct s86* ebp2;
    int32_t edx3;
    struct s87* ebp4;
    uint32_t v5;
    struct s88* ebp6;
    int32_t ebp7;
    int32_t ebp8;
    uint32_t v9;
    int32_t v10;
    int32_t v11;
    int32_t v12;

    ecx1 = ebp2->f12;
    edx3 = ebp4->f8;
    v5 = ebp6->f8;
    *reinterpret_cast<int32_t*>(ebp7 - 12) = ecx1;
    *reinterpret_cast<int32_t*>(ebp8 - 16) = edx3;
    fun_2130(v5, v9, v10, v11);
    goto v12;
}

struct s89 {
    signed char[8] pad8;
    int32_t f8;
};

struct s90 {
    signed char[8] pad8;
    void** f8;
};

void fun_454c() {
    int32_t ecx1;
    struct s89* ebp2;
    void** v3;
    struct s90* ebp4;
    int32_t ebp5;
    void** v6;
    void** v7;
    void** v8;
    int32_t v9;
    int32_t v10;

    ecx1 = ebp2->f8;
    v3 = ebp4->f8;
    *reinterpret_cast<int32_t*>(ebp5 - 8) = ecx1;
    _ZNKSt6__ndk117__compressed_pairINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE5__repES5_E5firstEv(v3, v6, v7, v8, v9);
    goto v10;
}

void fun_458c();

/* std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::__get_long_size() const */
void** _ZNKSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE15__get_long_sizeEv(void** a1, void** a2, void** a3) {
    void** v4;
    void** v5;
    int32_t ebx6;

    fun_458c();
    _ZNKSt6__ndk117__compressed_pairINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE5__repES5_E5firstEv(a1, v4, v5, a1, ebx6);
    goto a1;
}

struct s91 {
    signed char[32] pad32;
    int32_t f32;
};

struct s92 {
    signed char[28] pad28;
    int32_t f28;
};

struct s93 {
    signed char[24] pad24;
    int32_t f24;
};

struct s94 {
    signed char[20] pad20;
    int32_t f20;
};

struct s95 {
    signed char[16] pad16;
    int32_t f16;
};

struct s96 {
    signed char[12] pad12;
    int32_t f12;
};

struct s97 {
    signed char[8] pad8;
    int32_t f8;
};

struct s98 {
    signed char[8] pad8;
    void** f8;
};

struct s99 {
    signed char[16] pad16;
    uint32_t f16;
};

struct s100 {
    signed char[12] pad12;
    int32_t f12;
};

struct s101 {
    signed char[12] pad12;
    uint32_t f12;
};

struct s102 {
    signed char[12] pad12;
    int32_t f12;
};

struct s103 {
    signed char[16] pad16;
    int32_t f16;
};

struct s104 {
    signed char[12] pad12;
    int32_t f12;
};

struct s105 {
    signed char[1] pad1;
    void** f1;
};

struct s106 {
    signed char[24] pad24;
    int32_t f24;
};

struct s107 {
    signed char[24] pad24;
    void** f24;
};

struct s108 {
    signed char[20] pad20;
    int32_t f20;
};

struct s109 {
    signed char[28] pad28;
    int32_t f28;
};

struct s110 {
    signed char[24] pad24;
    int32_t f24;
};

struct s111 {
    signed char[24] pad24;
    uint32_t f24;
};

struct s112 {
    signed char[32] pad32;
    int32_t f32;
};

struct s113 {
    signed char[24] pad24;
    void* f24;
};

struct s114 {
    signed char[28] pad28;
    void* f28;
};

struct s115 {
    signed char[12] pad12;
    int32_t f12;
};

struct s117 {
    signed char[1] pad1;
    void** f1;
};

struct s116 {
    signed char[12] pad12;
    struct s117* f12;
};

struct s118 {
    signed char[1] pad1;
    void** f1;
};

void fun_45be() {
    int32_t ecx1;
    struct s91* ebp2;
    int32_t edx3;
    struct s92* ebp4;
    int32_t esi5;
    struct s93* ebp6;
    int32_t edi7;
    struct s94* ebp8;
    int32_t ebx9;
    struct s95* ebp10;
    int32_t ebp11;
    int32_t ebp12;
    struct s96* ebp13;
    int32_t ebp14;
    struct s97* ebp15;
    void** eax16;
    struct s98* ebp17;
    int32_t ebp18;
    int32_t ebp19;
    int32_t ebp20;
    int32_t ebp21;
    int32_t ebp22;
    int32_t ebp23;
    void** eax24;
    int32_t ebp25;
    struct s99* ebp26;
    int32_t ebp27;
    struct s100* ebp28;
    void** v29;
    int32_t ebp30;
    void** v31;
    int32_t ebp32;
    void** v33;
    void** v34;
    void** v35;
    void** eax36;
    int32_t ebp37;
    struct s101* ebp38;
    int32_t ebp39;
    int32_t ebp40;
    int32_t ebp41;
    int32_t ebp42;
    struct s102* ebp43;
    struct s103* ebp44;
    int32_t ebp45;
    struct s104* ebp46;
    void** v47;
    void* ebp48;
    void* ebp49;
    void*** eax50;
    void** v51;
    void** eax52;
    int32_t ebp53;
    int32_t ebp54;
    int32_t ebp55;
    void** v56;
    int32_t ebp57;
    void** v58;
    void** eax59;
    void** ecx60;
    int32_t ebp61;
    void** v62;
    void** eax63;
    int32_t ebp64;
    void** v65;
    int32_t ebp66;
    struct s106* ebp67;
    void** v68;
    int32_t ebp69;
    void** v70;
    void** eax71;
    void** v72;
    int32_t ebp73;
    int32_t ebp74;
    void** v75;
    void** eax76;
    void** ecx77;
    struct s107* ebp78;
    void** v79;
    int32_t ebp80;
    void** v81;
    int32_t ebp82;
    struct s108* ebp83;
    struct s109* ebp84;
    struct s110* ebp85;
    int32_t ebp86;
    void** v87;
    int32_t ebp88;
    void** eax89;
    uint32_t eax90;
    struct s111* ebp91;
    struct s112* ebp92;
    void** v93;
    int32_t ebp94;
    int32_t ebp95;
    void** eax96;
    void** eax97;
    struct s113* ebp98;
    struct s114* ebp99;
    void** ecx100;
    int32_t ebp101;
    void** v102;
    int32_t ebp103;
    struct s115* ebp104;
    void** v105;
    int32_t ebp106;
    void** eax107;
    void** ecx108;
    int32_t ebp109;
    void** edx110;
    struct s116* ebp111;
    void** eax112;
    int32_t ebp113;
    void** v114;
    int32_t ebp115;
    void** eax116;
    int32_t ebp117;
    void** v118;
    int32_t ebp119;
    int32_t v120;

    ecx1 = ebp2->f32;
    edx3 = ebp4->f28;
    esi5 = ebp6->f24;
    edi7 = ebp8->f20;
    ebx9 = ebp10->f16;
    *reinterpret_cast<int32_t*>(ebp11 - 44) = reinterpret_cast<int32_t>(__return_address()) + reinterpret_cast<int32_t>("QUFBQU=7ai6NPV2bXGQr0Np5ImWzfPuf0Hr5r0LdugZDjgPcx53OC0MEequZmEmbiqxeTMC6+a9C8Za6kXx2RPbCqs0PKTk+lCiiFMtFNPTO23sCWhsq+kTQlhHIuvmvQuiciA3Qet9NkxqmT2+Mm1QZiHFka1Pxw2ohueceTMCsea9C+ta6kXG2RPb8as0PArk+lCkiFMtotPTOxTocQ0gq+kTbPHS5ZSvcHnuc0YRveHgdmAZDnbocx44Dy0MdziuZhHqbiphJvnilyZzRhG94eB2YBkOduiJMAhJAC5rf+wIwBQ4byPjQP9VuPWB9R2Re1YahS+gtH5k6PxFxlrq2/HZEzwKqzRQpOT6LaKIUzsU09NobewJE2yr6eWU8dLmsJHfEb1zRsLg9KFS3d8aDRjCgy1R6aJII5gHc0YRvfShwuDfGlLdwoMNGFVv/SuvH0eDRZAA1UkXJ1TXEm87VUSvIRPO5XI0Q/rstOLrvJquj4huxmXgjouieFPrizMA2CG3uhrc2UkXJ1SUuwnRLv8I29eRTdHF59Ax7DRD+ry04us/TlPh4G7GZc5FLeTtcScHP8GgkKNoIf9RZni1ekJZOtK4CdtFLeTOcScH7cGgkD9oIf+jZni1UUJZOnoeOfFmJZXb00MXLKj/rLlSS0irsKlP+E1JFydUhoxshOiZoD1fcdYbk58jxzFTjVXomaA9X3HWG5OfI8dUhBR5f1NC9CxLIIIlI1OMkPyqbb1zRhFg4eB26BkOdmGe/mUPJyLevQvr5hYA/SNl4G7GyeSmb0P67DSwN81+pCGfXjF2/ZxCtLhkIbcA2Cci3g/TEAF0NgyVGGcYiH2QTZ8zQGIvAKp7E3Hkpm/J1TScKKzcvYuVAyRBC+vmvUXGWurye1PTW9kRP3o1V68KeoyarBpT+jN2ofzc7EYFGwN5O9IVI5xeguZBekDHGvRJ+GYA2CG3uhrc2UkXJ1Q55RwFMOXkpD/BoJC6+iPv2cAbOPtpgQOwS0irTalP+FRJF");
    *reinterpret_cast<int32_t*>(ebp12 - 48) = ebp13->f12;
    *reinterpret_cast<int32_t*>(ebp14 - 52) = ebp15->f8;
    eax16 = ebp17->f8;
    *reinterpret_cast<int32_t*>(ebp18 - 56) = ebx9;
    *reinterpret_cast<int32_t*>(ebp19 - 60) = ecx1;
    *reinterpret_cast<int32_t*>(ebp20 - 64) = edx3;
    *reinterpret_cast<int32_t*>(ebp21 - 68) = esi5;
    *reinterpret_cast<int32_t*>(ebp22 - 72) = edi7;
    *reinterpret_cast<void***>(ebp23 - 76) = eax16;
    eax24 = _ZNKSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE8max_sizeEv(eax16);
    *reinterpret_cast<void***>(ebp25 - 16) = eax24;
    if (ebp26->f16 > reinterpret_cast<uint32_t>(*reinterpret_cast<int32_t*>(ebp27 - 16) - ebp28->f12)) {
        v29 = *reinterpret_cast<void***>(ebp30 - 76);
        _ZNKSt6__ndk121__basic_string_commonILb1EE20__throw_length_errorEv(v29);
    }
    v31 = *reinterpret_cast<void***>(ebp32 - 76);
    eax36 = _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE13__get_pointerEv(v31, v33, v34, v35);
    *reinterpret_cast<void***>(ebp37 - 20) = eax36;
    if (ebp38->f12 >= (*reinterpret_cast<uint32_t*>(ebp39 - 16) >> 1) - 16) {
        *reinterpret_cast<int32_t*>(ebp40 - 80) = *reinterpret_cast<int32_t*>(ebp41 - 16) - 1;
    } else {
        *reinterpret_cast<int32_t*>(ebp42 - 28) = ebp43->f12 + ebp44->f16;
        *reinterpret_cast<int32_t*>(ebp45 - 32) = ebp46->f12 << 1;
        v47 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp48) + 0xffffffe0);
        eax50 = _ZNSt6__ndk13maxIjEERKT_S3_S3_(reinterpret_cast<int32_t>(ebp49) + 0xffffffe4, v47);
        v51 = *eax50;
        eax52 = _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE11__recommendEj(v51, v47);
        *reinterpret_cast<void***>(ebp53 - 80) = eax52;
    }
    *reinterpret_cast<int32_t*>(ebp54 - 24) = *reinterpret_cast<int32_t*>(ebp55 - 80);
    v56 = *reinterpret_cast<void***>(ebp57 - 76);
    eax59 = _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE7__allocEv(v56, v47, v58);
    ecx60 = reinterpret_cast<void**>(&(*reinterpret_cast<struct s105**>(ebp61 - 24))->f1);
    v62 = ecx60;
    eax63 = _ZNSt6__ndk116allocator_traitsINS_9allocatorIcEEE8allocateERS2_j(eax59, v62);
    *reinterpret_cast<void***>(ebp64 - 36) = eax63;
    v65 = *reinterpret_cast<void***>(ebp66 - 76);
    _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE26__invalidate_all_iteratorsEv(v65, v62);
    if (ebp67->f24) {
        v68 = *reinterpret_cast<void***>(ebp69 - 36);
        eax71 = _ZNSt6__ndk116__to_raw_pointerIcEEPT_S2_(v68, v62, v70);
        v72 = *reinterpret_cast<void***>(ebp73 - 20);
        *reinterpret_cast<void***>(ebp74 - 84) = eax71;
        eax76 = _ZNSt6__ndk116__to_raw_pointerIcEEPT_S2_(v72, v62, v75);
        ecx77 = ebp78->f24;
        v79 = *reinterpret_cast<void***>(ebp80 - 84);
        v62 = eax76;
        v81 = ecx77;
        _ZNSt6__ndk111char_traitsIcE4copyEPcPKcj(v79, v62, v81);
    }
    *reinterpret_cast<int32_t*>(ebp82 - 40) = ebp83->f20 - ebp84->f28 - ebp85->f24;
    if (*reinterpret_cast<int32_t*>(ebp86 - 40)) {
        v87 = *reinterpret_cast<void***>(ebp88 - 36);
        eax89 = _ZNSt6__ndk116__to_raw_pointerIcEEPT_S2_(v87, v62, v81);
        eax90 = reinterpret_cast<unsigned char>(eax89) + ebp91->f24 + ebp92->f32;
        v93 = *reinterpret_cast<void***>(ebp94 - 20);
        *reinterpret_cast<uint32_t*>(ebp95 - 88) = eax90;
        eax96 = _ZNSt6__ndk116__to_raw_pointerIcEEPT_S2_(v93, v62, v81);
        eax97 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(eax96) + reinterpret_cast<uint32_t>(ebp98->f24) + reinterpret_cast<uint32_t>(ebp99->f28));
        ecx100 = *reinterpret_cast<void***>(ebp101 - 40);
        v102 = *reinterpret_cast<void***>(ebp103 - 88);
        v62 = eax97;
        v81 = ecx100;
        _ZNSt6__ndk111char_traitsIcE4copyEPcPKcj(v102, v62, v81);
    }
    if (ebp104->f12 + 1 != 11) {
        v105 = *reinterpret_cast<void***>(ebp106 - 76);
        eax107 = _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE7__allocEv(v105, v62, v81);
        ecx108 = *reinterpret_cast<void***>(ebp109 - 20);
        edx110 = reinterpret_cast<void**>(&ebp111->f12->f1);
        v81 = edx110;
        _ZNSt6__ndk116allocator_traitsINS_9allocatorIcEEE10deallocateERS2_Pcj(eax107, ecx108, v81);
    }
    eax112 = *reinterpret_cast<void***>(ebp113 - 36);
    v114 = *reinterpret_cast<void***>(ebp115 - 76);
    _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE18__set_long_pointerEPc(v114, eax112, v81);
    eax116 = reinterpret_cast<void**>(&(*reinterpret_cast<struct s118**>(ebp117 - 24))->f1);
    v118 = *reinterpret_cast<void***>(ebp119 - 76);
    _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE14__set_long_capEj(v118, eax116, v81);
    goto v120;
}

struct s119 {
    signed char[8] pad8;
    int32_t f8;
};

struct s120 {
    signed char[8] pad8;
    void** f8;
};

void fun_36ec() {
    int32_t ecx1;
    struct s119* ebp2;
    void** v3;
    struct s120* ebp4;
    int32_t ebp5;
    void** v6;
    void** v7;
    void** v8;
    int32_t v9;
    int32_t v10;

    ecx1 = ebp2->f8;
    v3 = ebp4->f8;
    *reinterpret_cast<int32_t*>(ebp5 - 8) = ecx1;
    _ZNKSt6__ndk117__compressed_pairINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE5__repES5_E5firstEv(v3, v6, v7, v8, v9);
    goto v10;
}

struct s121 {
    signed char[8] pad8;
    int32_t f8;
};

struct s122 {
    signed char[8] pad8;
    void** f8;
};

void fun_47ec() {
    int32_t ecx1;
    struct s121* ebp2;
    void** edx3;
    struct s122* ebp4;
    int32_t ebp5;
    int32_t ebp6;
    int32_t ebp7;
    void** v8;
    void** v9;
    void** v10;
    void** v11;
    void** v12;
    void** v13;
    void** v14;
    void** v15;
    void** v16;
    void** v17;
    unsigned char al18;
    void** v19;
    int32_t ebp20;
    void** v21;
    void** v22;
    void** v23;
    void** v24;
    void** v25;
    void** v26;
    void** eax27;
    int32_t ebp28;
    void** v29;
    int32_t ebp30;
    void** v31;
    void** v32;
    void** v33;
    void** v34;
    void** v35;
    void** v36;
    void** v37;
    void** v38;
    void** eax39;
    int32_t ebp40;
    int32_t v41;

    ecx1 = ebp2->f8;
    edx3 = ebp4->f8;
    *reinterpret_cast<int32_t*>(ebp5 - 8) = reinterpret_cast<int32_t>(__return_address()) + reinterpret_cast<int32_t>("0gbifXqQhw+lHPAHYwIqDsAgf+g4P7nXvlQU21HtzLKhDF27gX2cmbiphVEkXJxKcwSWOzVcFIt4PJy8Xi0NR6aIt+iynCpu0cP6vbByzL6C0hWTo/H7GWupFlWTPRA5kpdlfcdYbArOo4iw+2LgjO5V6FyyoQ6A57zQnIt4PC+vmvTVpWNLCnLjSXvqjaz5eMRJPdl/qj1vDhlVv/SuvH0eDRZAA1UkXJ1T+O/n0Dyci3r0L6+bSNWlY0sKcuGte+qPxoxGjhgY1yh2gK95GTTA4/0jkD8C7N1KWk3EVUpCqJJwULlPAwC+BAFDFVXW+Q0TodWqnOreebFWqDW4Q5+XQX55xu0oTN+Ci/aIgWdukMg==7ai6NPV2bXGQr0Np5ImWzUjl6PCgPeiZ1htfcSPHk58UeVSEMzf9Yw3NIDiE3kwVE57U+9AmnUmFHEK6IvfKH2TS7CCq/VbM/O9R5SdZDW14bohAkY4uN9Wm/Col7ZLu07gKfimHuWgt8iNKBQUFBQ==XP5rChOX5IfmEBCR8F2EpKo+9bwFBQUFBQUFBQUFBQU=7ai6NPV2bXGQr0Np5ImWzfPuf0Hr5r0LdugZDjgPcx53OC0MEequZmEmbiqxeTMC6+a9C8Za6kXx2RPbCqs0PKTk+lCiiFMtFNPTO23sCWhsq+kTQlhHIuvmvQuiciA3Qet9NkxqmT2+Mm1QZiHFka1Pxw2ohueceTMCsea9C+ta6kXG2RPb8as0PArk+lCkiFMtotPTOxTocQ0gq+kTbPHS5ZSvcHnuc0YRveHgdmAZDnbocx44Dy0MdziuZhHqbiphJvnilyZzRhG94eB2YBkOduiJMAhJAC5rf+wIwBQ4byPjQP9VuPWB9R2Re1YahS+gtH5k6PxFxlrq2/HZEzwKqzRQpOT6LaKIUzsU09NobewJE2yr6eWU8dLmsJHfEb1zRsLg9KFS3d8aDRjCgy1R6aJII5gHc0YRvfShwuDfGlLdwoMNGFVv/SuvH0eDRZAA1UkXJ1T");
    *reinterpret_cast<int32_t*>(ebp6 - 12) = ecx1;
    *reinterpret_cast<void***>(ebp7 - 16) = edx3;
    al18 = _ZNKSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9__is_longEv(edx3, v8, v9, v10, v11, v12, v13, v14, v15, v16, v17);
    if (al18 & 1) {
        v19 = *reinterpret_cast<void***>(ebp20 - 16);
        eax27 = _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE18__get_long_pointerEv(v19, v21, v22, v23, v24, v25, v26);
        *reinterpret_cast<void***>(ebp28 - 20) = eax27;
    } else {
        v29 = *reinterpret_cast<void***>(ebp30 - 16);
        eax39 = _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE19__get_short_pointerEv(v29, v31, v32, v33, v34, v35, v36, v37, v38);
        *reinterpret_cast<void***>(ebp40 - 20) = eax39;
    }
    goto v41;
}

struct s123 {
    signed char[12] pad12;
    int32_t f12;
};

struct s124 {
    signed char[8] pad8;
    int32_t f8;
};

struct s125 {
    signed char[12] pad12;
    void** f12;
};

struct s126 {
    signed char[8] pad8;
    void** f8;
};

void fun_485e() {
    int32_t ecx1;
    struct s123* ebp2;
    int32_t edx3;
    struct s124* ebp4;
    void** edi5;
    struct s125* ebp6;
    void** v7;
    struct s126* ebp8;
    int32_t ebp9;
    int32_t ebp10;
    int32_t v11;

    ecx1 = ebp2->f12;
    edx3 = ebp4->f8;
    edi5 = ebp6->f12;
    v7 = ebp8->f8;
    *reinterpret_cast<int32_t*>(ebp9 - 20) = ecx1;
    *reinterpret_cast<int32_t*>(ebp10 - 24) = edx3;
    _ZNSt6__ndk13maxIjNS_6__lessIjjEEEERKT_S5_S5_T0_(v7, edi5);
    goto v11;
}

struct s127 {
    signed char[8] pad8;
    void** f8;
};

struct s128 {
    signed char[8] pad8;
    uint32_t f8;
};

struct s130 {
    signed char[1] pad1;
    void** f1;
};

struct s129 {
    signed char[8] pad8;
    struct s130* f8;
};

void fun_3e3c() {
    void** ecx1;
    struct s127* ebp2;
    int1_t cf3;
    struct s128* ebp4;
    int32_t ebp5;
    void** v6;
    struct s129* ebp7;
    uint32_t eax8;
    int32_t ebp9;
    int32_t ebp10;
    int32_t ebp11;
    int32_t ebp12;
    int32_t ebp13;
    int32_t ebp14;
    int32_t ebp15;
    int32_t v16;

    ecx1 = ebp2->f8;
    cf3 = ebp4->f8 < 11;
    *reinterpret_cast<int32_t*>(ebp5 - 16) = reinterpret_cast<int32_t>(__return_address()) + reinterpret_cast<int32_t>("u/wjbJiNUX4Ynk0YxxefQZWGe/t4PJyJ2Iop2yC1e7+TORS0H7XEnkD/BoCyh3wvXHZuKlIaj0+M6ip6JM810QNN7hbAFJUqGJ5NGMcXn0EHrfTbn0DHFtYXs2xWXIBakCVr0d5pGHcdabHagCJGe27ENTiL84YftbiM5TVKhO6ucrfQpOKmyjB4AoSVcFzW/7PvX59AxxUFBwv8aekDHtI2VNSeTRobF59AxULPyG+JvKL38SQ4vczgSCDHF59DvyC1eP8GgkC/8SQ62ge8nk4M25b3ibygT2AWVe4iIBwQ0ON26+RAoJJ/2iuKYPFcPz+YubufJgB13mkZ2x1ps8vENcTxX4phdK2Z4MrexLzZ/lv5ap6Ei5xlHnReHS1pL9OI+gEpoPw212o385uc1V+58gIrD9OfmBmp3Rh13mmx2x1pg/S8Iva6+JGj2OWwmRepHQqhn9wXZqgElCcDmyYBu50DHGnqVNbSNH5mc0Sn2P30EGHEJeaznBIdnKpEl6E2R+J8gcXpAxxqNlTW0HN/y9h4rvxWpwGOCSPuHRAUFBQU=ITj7vhxv5pX2vTlijEW5z3rXaY8FBQUFBQUFBQUFBQU=1rvNxK5NfWc5LmN7tmgVx/E7c1ZxngMEfX+vtIPo+RHIk1tKtXlsUJ8sw8d301cQvector");
    if (!cf3) {
        v6 = reinterpret_cast<void**>(&ebp7->f8->f1);
        eax8 = _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE10__align_itILj16EEEjj(ecx1, v6);
        *reinterpret_cast<uint32_t*>(ebp9 - 12) = eax8 - 1;
        if (*reinterpret_cast<int32_t*>(ebp10 - 12) == 11) {
            *reinterpret_cast<int32_t*>(ebp11 - 12) = *reinterpret_cast<int32_t*>(ebp12 - 12) + 1;
        }
        *reinterpret_cast<int32_t*>(ebp13 - 8) = *reinterpret_cast<int32_t*>(ebp14 - 12);
    } else {
        *reinterpret_cast<int32_t*>(ebp15 - 8) = 10;
    }
    goto v16;
}

/* std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::__invalidate_all_iterators() */
void** _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE26__invalidate_all_iteratorsEv(void** a1, void** a2) {
    return a1;
}

struct s131 {
    signed char[16] pad16;
    int32_t f16;
};

struct s132 {
    signed char[8] pad8;
    void** f8;
};

struct s133 {
    signed char[12] pad12;
    void** f12;
};

struct s134 {
    signed char[16] pad16;
    void** f16;
};

struct s135 {
    signed char[8] pad8;
    int32_t f8;
};

void fun_3fed() {
    int1_t zf1;
    struct s131* ebp2;
    int32_t ebp3;
    void** eax4;
    struct s132* ebp5;
    void** ecx6;
    struct s133* ebp7;
    void** edx8;
    struct s134* ebp9;
    int32_t ebp10;
    int32_t ebp11;
    int32_t ebp12;
    int32_t ebp13;
    struct s135* ebp14;
    int32_t v15;

    zf1 = ebp2->f16 == 0;
    *reinterpret_cast<int32_t*>(ebp3 - 12) = reinterpret_cast<int32_t>(__return_address()) + reinterpret_cast<int32_t>("qdevGVs1KNxX5RMrzuXugbZnlrGpvXQE2SramV4HBdgDD86XE6OEeajnftV9zEkLYXS0gJ0nzL9Lh5NIFLSAkXJzlZhA9fvnu2otYRDLPIGAftbOrFmRWw8dLllC8ujW5T3fNYIbFyTLoLl33q5Adc2sRlXbn+yN31GFiaRhG9c6HC4PRgDjJQ+fT+OyLeDyfr5r0LaVjSNcKepK8h3s6KGsERujGYZYvr5gsqeLZmTaC0hS+n0tv1sQbZiCzjRyx9Ex9SsDQvNT/78Ai0hS+g0tv1pwbZiLFhmcg99z325fN/64DvyC1eb8nkpm+WVeset25MrmP1MUDHGnpClEayFSOc0lVWtyAMkfBuekDHGnVQ8YK9c0YR4PShwjJQYA5ZjMAM+7szTOrCjDBGCerbFSOc0oLmQV5Axxp6vsXchK2ODTcu/wjbJiNUX4Ynk0YxxefQZWGe/t4PJyJ2Iop2yC1e7+TORS0H7XEnkD/BoCyh3wvXHZuKlIaj0+M6ip6JM810QNN7hbAFJUqGJ5NGMcXn0EHrfTbn0DHFtYXs2xWXIBakCVr0d5pGHcdabHagCJGe27ENTiL84YftbiM5TVKhO6ucrfQpOKmyjB4AoSVcFzW/7PvX59AxxUFBwv8aekDHtI2VNSeTRobF59AxULPyG+JvKL38SQ4vczgSCDHF59DvyC1eP8GgkC/8SQ62ge8nk4M25b3ibygT2AWVe4iIBwQ0ON26+RAoJJ/2iuKYPFcPz+YubufJgB13mkZ2x1ps8vENcTxX4phdK2Z4MrexLzZ/lv5ap6Ei5xlHnReHS1pL9OI+gEpoPw212o385uc1V+58gIrD9OfmBmp3Rh13mmx2x1pg/S8Iva6+JGj2OWwmRepHQqhn9wXZqgElCcDmyYBu50DHGnqVNbSNH5mc0Sn2P30EGHEJeaznBIdnKpEl6E2R+J8gcXpAxxqNlTW0HN/y9h4rvxWpwGOCSPuHRAUFBQU=ITj7vhxv5pX2vTlijEW5z3rXaY8FBQ");
    if (!zf1) {
        eax4 = ebp5->f8;
        ecx6 = ebp7->f12;
        edx8 = ebp9->f16;
        *reinterpret_cast<void***>(ebp10 - 20) = eax4;
        fun_2010(eax4, ecx6, edx8);
        *reinterpret_cast<int32_t*>(ebp11 - 16) = *reinterpret_cast<int32_t*>(ebp12 - 20);
    } else {
        *reinterpret_cast<int32_t*>(ebp13 - 16) = ebp14->f8;
    }
    goto v15;
}

struct s136 {
    signed char[8] pad8;
    int32_t f8;
};

struct s137 {
    signed char[8] pad8;
    void** f8;
};

void fun_377c() {
    int32_t ecx1;
    struct s136* ebp2;
    void** v3;
    struct s137* ebp4;
    int32_t ebp5;
    int32_t v6;

    ecx1 = ebp2->f8;
    v3 = ebp4->f8;
    *reinterpret_cast<int32_t*>(ebp5 - 8) = ecx1;
    _ZNSt6__ndk117__compressed_pairINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE5__repES5_E6secondEv(v3);
    goto v6;
}

struct s138 {
    signed char[16] pad16;
    int32_t f16;
};

struct s139 {
    signed char[12] pad12;
    int32_t f12;
};

struct s140 {
    signed char[8] pad8;
    int32_t f8;
};

struct s141 {
    signed char[8] pad8;
    void** f8;
};

struct s142 {
    signed char[12] pad12;
    void** f12;
};

struct s143 {
    signed char[16] pad16;
    void** f16;
};

void fun_372e() {
    int32_t ecx1;
    struct s138* ebp2;
    int32_t edx3;
    struct s139* ebp4;
    int32_t esi5;
    struct s140* ebp6;
    void** edi7;
    struct s141* ebp8;
    void** ebx9;
    struct s142* ebp10;
    int32_t ebp11;
    void** eax12;
    struct s143* ebp13;
    int32_t ebp14;
    int32_t ebp15;
    int32_t ebp16;
    void** v17;
    void** v18;
    int32_t v19;

    ecx1 = ebp2->f16;
    edx3 = ebp4->f12;
    esi5 = ebp6->f8;
    edi7 = ebp8->f8;
    ebx9 = ebp10->f12;
    *reinterpret_cast<int32_t*>(ebp11 - 16) = reinterpret_cast<int32_t>(__return_address()) + 0xf7f6;
    eax12 = ebp13->f16;
    *reinterpret_cast<int32_t*>(ebp14 - 20) = ecx1;
    *reinterpret_cast<int32_t*>(ebp15 - 24) = edx3;
    *reinterpret_cast<int32_t*>(ebp16 - 28) = esi5;
    _ZNSt6__ndk19allocatorIcE10deallocateEPcj(edi7, ebx9, eax12, v17, v18);
    goto v19;
}

struct s144 {
    signed char[12] pad12;
    int32_t f12;
};

struct s145 {
    signed char[8] pad8;
    int32_t f8;
};

struct s146 {
    signed char[12] pad12;
    int32_t f12;
};

struct s147 {
    signed char[8] pad8;
    void** f8;
};

void fun_3efe() {
    int32_t ecx1;
    struct s144* ebp2;
    int32_t edx3;
    struct s145* ebp4;
    int32_t edi5;
    struct s146* ebp6;
    void** v7;
    struct s147* ebp8;
    int32_t ebp9;
    int32_t ebp10;
    int32_t ebp11;
    void** v12;
    void** v13;
    void** v14;
    void** v15;
    void** v16;
    struct s4* v17;
    struct s3* eax18;
    int32_t ebp19;
    int32_t v20;

    ecx1 = ebp2->f12;
    edx3 = ebp4->f8;
    edi5 = ebp6->f12;
    v7 = ebp8->f8;
    *reinterpret_cast<int32_t*>(ebp9 - 16) = ecx1;
    *reinterpret_cast<int32_t*>(ebp10 - 20) = edx3;
    *reinterpret_cast<int32_t*>(ebp11 - 24) = edi5;
    eax18 = _ZNSt6__ndk117__compressed_pairINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE5__repES5_E5firstEv(v7, v12, v13, v14, v15, v16, v17);
    eax18->f8 = *reinterpret_cast<void***>(ebp19 - 24);
    goto v20;
}

struct s148 {
    signed char[12] pad12;
    int32_t f12;
};

struct s149 {
    signed char[8] pad8;
    int32_t f8;
};

struct s150 {
    signed char[12] pad12;
    uint32_t f12;
};

struct s151 {
    signed char[8] pad8;
    void** f8;
};

void fun_3f4e() {
    int32_t ecx1;
    struct s148* ebp2;
    int32_t edx3;
    struct s149* ebp4;
    uint32_t edi5;
    struct s150* ebp6;
    void** v7;
    struct s151* ebp8;
    int32_t ebp9;
    int32_t ebp10;
    int32_t ebp11;
    void** v12;
    void** v13;
    void** v14;
    void** v15;
    void** v16;
    struct s4* v17;
    struct s3* eax18;
    int32_t ebp19;
    int32_t v20;

    ecx1 = ebp2->f12;
    edx3 = ebp4->f8;
    edi5 = ebp6->f12 | 1;
    v7 = ebp8->f8;
    *reinterpret_cast<int32_t*>(ebp9 - 16) = ecx1;
    *reinterpret_cast<int32_t*>(ebp10 - 20) = edx3;
    *reinterpret_cast<uint32_t*>(ebp11 - 24) = edi5;
    eax18 = _ZNSt6__ndk117__compressed_pairINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE5__repES5_E5firstEv(v7, v12, v13, v14, v15, v16, v17);
    eax18->f0 = *reinterpret_cast<void***>(ebp19 - 24);
    goto v20;
}

void fun_4a4c();

struct s152 {
    signed char[58584] pad58584;
    void** f58584;
};

/* std::__ndk1::pointer_traits<char const*>::pointer_to(char const&) */
void _ZNSt6__ndk114pointer_traitsIPKcE10pointer_toERS1_(int32_t a1);

/* std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::__get_short_pointer() const */
int32_t _ZNKSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE19__get_short_pointerEv(void** a1) {
    void** v2;
    struct s152* v3;
    int32_t ebx4;
    struct s4* eax5;

    fun_4a4c();
    eax5 = _ZNKSt6__ndk117__compressed_pairINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE5__repES5_E5firstEv(a1, v2, a1, reinterpret_cast<int32_t>(v3) + reinterpret_cast<uint32_t>("jxaSXE+rnp7xP4bmOKyxHM+ZCs7mgaY3mhbOny8/GUCaR7yEQPc0m4QRHqs9mZexP+8rfB51ztEG0KXeaRh1oIf+jpPCjxeeXE+qtf/bBm7Rw/u8YJfCfCg87eLVRZlk6ekJcSOEUGFy4HCxfuAODNnlTOiwQC3ETJvKd31RN3YgCxCbhBEe+bGnufcpmN6ZvyeTsNEP6zX6wN59epCF/vPRchlwMFeXo8Eg96JmgG19x1seTnyPhH99oQYn/ebSP47ELOiwQg62Mq/mPfUXE3YgCehc1m9rHn9AZ6bgEkTYAe5mgPehx1htfnyPHk3+89FyGXAwVVuxRj3c4LQyDQzHCKyy5juZCRzNO/7H7N+JqIqvch9+M6OLmybzqRn+89FyGXAwVzOrq1+rnjJBOOCPSq31tW50PjEC5jissRzPmQrO5oGmN5oWzp8vPxlAmke8hED3NJuEER6rPZmWb+bDpGVfWjmh5s61ncPno/0r9Qlx/vPQVhlwMjPOfLcAU7Agf32jhif95Qb0QTuMsuY4rRqUWQKmS6zYU7AjAf7z0XIZcDBW4ibgc3g8nIn5ryf2OiZ49UemiLSLe20oEGem4yC1e73k0gbifXqQhw+lHPAHYwIqDsAgf+g4P7nXvlQU21HtzLKhDF27gX2cmbiphVEkXJxKcwSWOzVcFIt4PJy8Xi0NR6aIt+iynCpu0cP6vbByzL6C0hWTo/H7GWupFlWTPRA5kpdlfcdYbArOo4iw+2LgjO5V6FyyoQ6A57zQnIt4PC+vmvTVpWNLCnLjSXvqjaz5eMRJPdl/qj1vDhlVv/SuvH0eDRZAA1UkXJ1T+O/n0Dyci3r0L6+bSNWlY0sKcuGte+qPxoxGjhgY1yh2gK95GTTA4/0jkD8C7N1KWk3EVUpCqJJwULlPAwC+BAFDFVXW+Q0TodWqnOreebFWqDW4Q5+XQX55xu0oTN+Ci/aIgWdukMg==7ai6NPV2bXGQr0Np5ImWzUjl6PCgPeiZ1htfcSPHk58UeVS"), ebx4);
    _ZNSt6__ndk114pointer_traitsIPKcE10pointer_toERS1_(&eax5->pad4);
    goto a1;
}

void fun_4a1c();

/* std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::__get_long_pointer() const */
void** _ZNKSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE18__get_long_pointerEv(void** a1, void** a2, void** a3) {
    void** v4;
    void** v5;
    int32_t ebx6;

    fun_4a1c();
    _ZNKSt6__ndk117__compressed_pairINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE5__repES5_E5firstEv(a1, v4, v5, a1, ebx6);
    goto a1;
}

struct s153 {
    signed char[12] pad12;
    int32_t f12;
};

struct s154 {
    signed char[8] pad8;
    int32_t f8;
};

struct s155 {
    signed char[8] pad8;
    void** f8;
};

struct s156 {
    signed char[12] pad12;
    void** f12;
};

struct s157 {
    signed char[12] pad12;
    void** f12;
};

void fun_4d5d() {
    int32_t ecx1;
    struct s153* ebp2;
    int32_t edx3;
    struct s154* ebp4;
    void** esi5;
    struct s155* ebp6;
    int32_t ebp7;
    int32_t ebp8;
    int32_t ebp9;
    int32_t ebp10;
    void** v11;
    void** v12;
    void** v13;
    void** v14;
    void** v15;
    void** v16;
    void** v17;
    void** v18;
    void** v19;
    void** v20;
    unsigned char al21;
    void** eax22;
    struct s156* ebp23;
    void** v24;
    int32_t ebp25;
    void** v26;
    void** v27;
    void** v28;
    void** v29;
    void** v30;
    void** v31;
    void** v32;
    void** v33;
    void** v34;
    void** eax35;
    struct s157* ebp36;
    void** v37;
    int32_t ebp38;
    void** v39;
    void** v40;
    void** v41;
    void** v42;
    void** v43;
    void** v44;
    void** v45;
    int32_t v46;

    ecx1 = ebp2->f12;
    edx3 = ebp4->f8;
    esi5 = ebp6->f8;
    *reinterpret_cast<int32_t*>(ebp7 - 12) = reinterpret_cast<int32_t>(__return_address()) + reinterpret_cast<int32_t>("C/fzPTY+0lBYhCTjDoevzhJqYZd9ZgTEG8SRG46BH6/tZZUpVoHhIvbfD2Pc0hEBTqLIyqwpX6IoNmonHEoswnIt4PkYiWpmS74/iXCMDP+MFg9hc2mek1ZaURGnxopNZgTHe8SRFB5hX/WywPjgX+m7Rwfy/jkh+DsAju+g4PBXXvleVIM+xyKEpWlPHS5ULls3LpuAQZaOEf33lBif+xtI/jEAs6LKuDrYxF+Y99AsTdiJt6FzXQ2sefBBnpuCAhtjqQ7695VS2NUFeOd+0fR4OvY9vqYRwYXLgDLF+4U4M2eQs6LBDycRMmTZ3fVMTdiAJHJuEE7r5saTd9ymZFy8WGucsSxWGhPvzwtFlviVe5HuJ+LFgYiH1nf7z0XIZcDBW4ibgc3g8nIua9C+tY0jVpuNLCnKNrXvoxEj5eX+pPdsOGj1to4R/feUGJ/7G0j+MQCzosq4OtjEX5j30CxN2Im3oXNdDax58EGem4JdSLTQ8nIt69C+vm0jVpWNLCnLhrXvqjEj5eMepPdl+Gj1vD9Fx/vAwVhly4HLiJJyLeD4p2diJD+uw0lwbS8Fy4HBhfuAMsNnlTgywQCzoTJvJx31RNnYgCxN3hBEcmbGnuvspmN324eTSBS0gJF3ZJHiDX8P4MY6kbCZu0cP6vbByzL6C0hfWn0tvJMFD9Kyy5juZCRzOgabO5hbON5s/Gp8uR71AmPc0hEARHJuFmZarPNekhTIUvoLTb9afSDanA83D+m7TIqWTfB51z30G0KbSaRh13If+jaPCjxaSXE+rnp7xP4bmOKyxHM+ZCs7mgaY3mhbOny8/GUCaR7yEQPc0m4QRHqs9mZexP+8rfB51ztEG0KXeaRh1oIf+jpPCjxeeXE+qtf/bBm7Rw/u8YJfCfCg87eLVRZlk6ekJcSOEUGFy4HCxfuAODNnlTOiwQC3ETJvKd31RN3YgCxCbhBEe+bGnufcpmN6ZvyeTsNEP6zX6wN59epCF/vPRchlwMFeXo8Eg96JmgG19x1s");
    *reinterpret_cast<int32_t*>(ebp8 - 16) = ecx1;
    *reinterpret_cast<int32_t*>(ebp9 - 20) = edx3;
    *reinterpret_cast<void***>(ebp10 - 24) = esi5;
    al21 = _ZNKSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9__is_longEv(esi5, v11, v12, v13, v14, v15, v16, v17, v18, v19, v20);
    if (al21 & 1) {
        eax22 = ebp23->f12;
        v24 = *reinterpret_cast<void***>(ebp25 - 24);
        _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE15__set_long_sizeEj(v24, eax22, v26, v27, v28, v29, v30, v31, v32, v33, v34);
    } else {
        eax35 = ebp36->f12;
        v37 = *reinterpret_cast<void***>(ebp38 - 24);
        _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE16__set_short_sizeEj(v37, eax35, v39, v40, v41, v42, v43, v44, v45);
    }
    goto v46;
}

void fun_507c();

/* Cipher::rotWord(unsigned char*) */
void _ZN6Cipher7rotWordEPh(void** ecx, void** a2, void*** a3) {
    void* v4;

    fun_507c();
    v4 = reinterpret_cast<void*>(0);
    while (reinterpret_cast<int32_t>(v4) < reinterpret_cast<int32_t>(3)) {
        _Z4swapIhEvRT_S1_(reinterpret_cast<unsigned char>(a2) + reinterpret_cast<uint32_t>(v4), reinterpret_cast<unsigned char>(a2) + (reinterpret_cast<uint32_t>(v4) + 1));
        v4 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(v4) + 1);
    }
    goto a2;
}

struct s158 {
    signed char[12] pad12;
    void** f12;
};

struct s159 {
    signed char[8] pad8;
    void* f8;
};

struct s160 {
    signed char[4812] pad4812;
    void** f4812;
};

struct s161 {
    signed char[12] pad12;
    int32_t f12;
};

struct s162 {
    signed char[1] pad1;
    void** f1;
};

struct s163 {
    signed char[12] pad12;
    void** f12;
};

struct s164 {
    signed char[12] pad12;
    int32_t f12;
};

struct s165 {
    signed char[12] pad12;
    int32_t f12;
};

struct s166 {
    signed char[12] pad12;
    int32_t f12;
};

struct s167 {
    signed char[12] pad12;
    int32_t f12;
};

struct s168 {
    signed char[8] pad8;
    void* f8;
};

struct s169 {
    signed char[4812] pad4812;
    void** f4812;
};

struct s170 {
    signed char[12] pad12;
    int32_t f12;
};

struct s171 {
    signed char[12] pad12;
    int32_t f12;
};

struct s172 {
    signed char[8] pad8;
    int32_t f8;
};

struct s173 {
    signed char[12] pad12;
    int32_t f12;
};

void fun_50dd() {
    void** ecx1;
    struct s158* ebp2;
    int32_t ebp3;
    int32_t ebp4;
    int32_t ebp5;
    int32_t ebp6;
    void* edx7;
    struct s159* ebp8;
    void** v9;
    int32_t ebp10;
    void*** eax11;
    void*** ecx12;
    int32_t ebp13;
    void*** v14;
    unsigned char* eax15;
    struct s161* ebp16;
    int32_t ebp17;
    int32_t ebp18;
    int32_t ebp19;
    int32_t ebp20;
    int32_t ebp21;
    void** v22;
    struct s163* ebp23;
    int32_t ebp24;
    int32_t ebp25;
    struct s164* ebp26;
    int32_t ebp27;
    int32_t ebp28;
    struct s165* ebp29;
    int32_t ebp30;
    struct s166* ebp31;
    int32_t ebp32;
    int32_t ebp33;
    int32_t ebp34;
    int32_t ebp35;
    int32_t ebp36;
    uint32_t edx37;
    struct s167* ebp38;
    int32_t ebp39;
    void* esi40;
    struct s168* ebp41;
    void** v42;
    int32_t ebp43;
    int32_t ebp44;
    void*** eax45;
    void*** ecx46;
    int32_t ebp47;
    unsigned char* eax48;
    uint32_t ecx49;
    int32_t ebp50;
    struct s170* ebp51;
    int32_t ebp52;
    int32_t ebp53;
    uint32_t eax54;
    struct s171* ebp55;
    int32_t ebp56;
    int32_t ebp57;
    struct s172* ebp58;
    struct s173* ebp59;
    int32_t ebp60;
    int32_t ebp61;
    int32_t ebp62;
    int32_t v63;

    ecx1 = ebp2->f12;
    *reinterpret_cast<int32_t*>(ebp3 - 12) = 0;
    *reinterpret_cast<int32_t*>(ebp4 - 16) = 1;
    *reinterpret_cast<int32_t*>(ebp5 - 28) = reinterpret_cast<int32_t>(__return_address()) + 0xde47;
    while (*reinterpret_cast<int32_t*>(ebp6 - 16) <= 4) {
        edx7 = ebp8->f8;
        v9 = reinterpret_cast<void**>(&(*reinterpret_cast<struct s160**>(ebp10 - 28))->f4812);
        eax11 = _ZNSt6__ndk16vectorINS0_IhNS_9allocatorIhEEEENS1_IS3_EEEixEj(v9, edx7);
        ecx12 = reinterpret_cast<void***>((*reinterpret_cast<int32_t*>(ebp13 - 16) << 2) - 1);
        v14 = ecx12;
        eax15 = _ZNSt6__ndk16vectorIhNS_9allocatorIhEEEixEj(eax11, v14);
        *reinterpret_cast<unsigned char*>(ebp16->f12 + *reinterpret_cast<int32_t*>(ebp17 - 12)) = *eax15;
        ecx1 = reinterpret_cast<void**>(&(*reinterpret_cast<struct s162**>(ebp18 - 12))->f1);
        *reinterpret_cast<void***>(ebp19 - 12) = ecx1;
        *reinterpret_cast<int32_t*>(ebp20 - 16) = *reinterpret_cast<int32_t*>(ebp21 - 16) + 1;
    }
    v22 = ebp23->f12;
    _ZN6Cipher7rotWordEPh(ecx1, v22, v14);
    *reinterpret_cast<int32_t*>(ebp24 - 20) = 0;
    while (*reinterpret_cast<int32_t*>(ebp25 - 20) < 4) {
        *reinterpret_cast<signed char*>(ebp26->f12 + *reinterpret_cast<int32_t*>(ebp27 - 20)) = *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(*reinterpret_cast<void**>(ebp28 - 28)) + (((reinterpret_cast<uint32_t>(reinterpret_cast<int32_t>(static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(ebp29->f12 + *reinterpret_cast<int32_t*>(ebp30 - 20)))) >> 4) & 15) << 4) + (static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(ebp31->f12 + *reinterpret_cast<int32_t*>(ebp32 - 20))) & 15)) + 0xe0);
        *reinterpret_cast<int32_t*>(ebp33 - 20) = *reinterpret_cast<int32_t*>(ebp34 - 20) + 1;
    }
    *reinterpret_cast<int32_t*>(ebp35 - 24) = 0;
    while (*reinterpret_cast<int32_t*>(ebp36 - 24) < 4) {
        edx37 = *reinterpret_cast<unsigned char*>(ebp38->f12 + *reinterpret_cast<int32_t*>(ebp39 - 24));
        esi40 = ebp41->f8;
        v42 = reinterpret_cast<void**>(&(*reinterpret_cast<struct s169**>(ebp43 - 28))->f4812);
        *reinterpret_cast<uint32_t*>(ebp44 - 32) = edx37;
        eax45 = _ZNSt6__ndk16vectorINS0_IhNS_9allocatorIhEEEENS1_IS3_EEEixEj(v42, esi40);
        ecx46 = reinterpret_cast<void***>(*reinterpret_cast<uint32_t*>(ebp47 - 24) << 2);
        eax48 = _ZNSt6__ndk16vectorIhNS_9allocatorIhEEEixEj(eax45, ecx46);
        ecx49 = *reinterpret_cast<uint32_t*>(ebp50 - 32) ^ static_cast<uint32_t>(*eax48);
        *reinterpret_cast<signed char*>(ebp51->f12 + *reinterpret_cast<int32_t*>(ebp52 - 24)) = *reinterpret_cast<signed char*>(&ecx49);
        if (!*reinterpret_cast<int32_t*>(ebp53 - 24)) {
            eax54 = static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(ebp55->f12 + *reinterpret_cast<int32_t*>(ebp56 - 24))) ^ static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(*reinterpret_cast<int32_t*>(ebp57 - 28) + ebp58->f8 + 0x2e0));
            *reinterpret_cast<signed char*>(ebp59->f12 + *reinterpret_cast<int32_t*>(ebp60 - 24)) = *reinterpret_cast<signed char*>(&eax54);
        }
        *reinterpret_cast<int32_t*>(ebp61 - 24) = *reinterpret_cast<int32_t*>(ebp62 - 24) + 1;
    }
    goto v63;
}

struct s174 {
    signed char[12] pad12;
    int32_t f12;
};

struct s175 {
    signed char[8] pad8;
    int32_t f8;
};

struct s176 {
    signed char[8] pad8;
    void** f8;
};

void fun_6c7d() {
    int32_t ecx1;
    struct s174* ebp2;
    int32_t edx3;
    struct s175* ebp4;
    void** v5;
    struct s176* ebp6;
    int32_t ebp7;
    int32_t ebp8;
    void** v9;
    void** v10;
    void** v11;
    int32_t v12;

    ecx1 = ebp2->f12;
    edx3 = ebp4->f8;
    v5 = ebp6->f8;
    *reinterpret_cast<int32_t*>(ebp7 - 12) = ecx1;
    *reinterpret_cast<int32_t*>(ebp8 - 16) = edx3;
    _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE13__get_pointerEv(v5, v9, v10, v11);
    goto v12;
}

struct s177 {
    signed char[12] pad12;
    unsigned char f12;
};

struct s178 {
    signed char[8] pad8;
    void** f8;
};

struct s179 {
    signed char[8] pad8;
    void** f8;
};

struct s180 {
    signed char[8] pad8;
    void** f8;
};

struct s181 {
    signed char[8] pad8;
    void** f8;
};

struct s182 {
    signed char[8] pad8;
    void** f8;
};

struct s183 {
    signed char[8] pad8;
    void** f8;
};

struct s184 {
    signed char[8] pad8;
    void** f8;
};

struct s185 {
    signed char[8] pad8;
    void** f8;
};

void fun_589d() {
    int32_t ebp1;
    struct s177* ebp2;
    int1_t zf3;
    int32_t ebp4;
    int32_t ebp5;
    int32_t ebp6;
    uint32_t eax7;
    int32_t ebp8;
    void** v9;
    struct s178* ebp10;
    int32_t ebp11;
    void** v12;
    void** v13;
    void** v14;
    void** v15;
    void** v16;
    void** v17;
    void** eax18;
    int32_t ebp19;
    void** ecx20;
    int32_t ebp21;
    void** v22;
    struct s179* ebp23;
    void** eax24;
    uint32_t eax25;
    void** edx26;
    int32_t ebp27;
    void** v28;
    struct s180* ebp29;
    int32_t ebp30;
    void** eax31;
    signed char cl32;
    int32_t ebp33;
    int32_t ebp34;
    void** esi35;
    int32_t ebp36;
    void** v37;
    struct s181* ebp38;
    int32_t ebp39;
    void** eax40;
    int32_t ebp41;
    int32_t ebp42;
    int32_t ebp43;
    int32_t ebp44;
    uint32_t eax45;
    int32_t ebp46;
    void** v47;
    struct s182* ebp48;
    int32_t ebp49;
    void** v50;
    void** v51;
    void** v52;
    void** v53;
    void** v54;
    void** v55;
    void** eax56;
    int32_t ebp57;
    void** ecx58;
    int32_t ebp59;
    void** v60;
    struct s183* ebp61;
    void** eax62;
    uint32_t eax63;
    void** edx64;
    int32_t ebp65;
    void** v66;
    struct s184* ebp67;
    int32_t ebp68;
    void** eax69;
    signed char cl70;
    int32_t ebp71;
    int32_t ebp72;
    void** esi73;
    int32_t ebp74;
    void** v75;
    struct s185* ebp76;
    int32_t ebp77;
    void** eax78;
    int32_t ebp79;
    int32_t ebp80;
    int32_t ebp81;
    int32_t v82;

    *reinterpret_cast<unsigned char*>(ebp1 - 9) = reinterpret_cast<unsigned char>(ebp2->f12 & 1);
    zf3 = (*reinterpret_cast<unsigned char*>(ebp4 - 9) & 1) == 0;
    *reinterpret_cast<int32_t*>(ebp5 - 20) = reinterpret_cast<int32_t>(__return_address()) + 0xd687;
    if (zf3) {
        *reinterpret_cast<int16_t*>(ebp6 - 14) = 0;
        while (eax7 = *reinterpret_cast<uint16_t*>(ebp8 - 14), v9 = ebp10->f8, *reinterpret_cast<uint32_t*>(ebp11 - 36) = eax7, eax18 = _ZNKSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE4sizeEv(v9, v12, v13, v14, v15, v16, v17), reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(ebp19 - 36)) < reinterpret_cast<unsigned char>(eax18)) {
            ecx20 = reinterpret_cast<void**>(static_cast<uint32_t>(*reinterpret_cast<uint16_t*>(ebp21 - 14)));
            v22 = ebp23->f8;
            eax24 = _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEixEj(v22, ecx20);
            eax25 = (reinterpret_cast<uint32_t>(static_cast<int32_t>(reinterpret_cast<signed char>(*reinterpret_cast<void***>(eax24))) >> 4) & 15) << 4;
            edx26 = reinterpret_cast<void**>(static_cast<uint32_t>(*reinterpret_cast<uint16_t*>(ebp27 - 14)));
            v28 = ebp29->f8;
            *reinterpret_cast<uint32_t*>(ebp30 - 40) = eax25;
            eax31 = _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEixEj(v28, edx26);
            cl32 = *reinterpret_cast<signed char*>(*reinterpret_cast<int32_t*>(ebp33 - 20) + (*reinterpret_cast<int32_t*>(ebp34 - 40) + (reinterpret_cast<uint32_t>(static_cast<int32_t>(reinterpret_cast<signed char>(*reinterpret_cast<void***>(eax31)))) & 15)) + 0x1e0);
            esi35 = reinterpret_cast<void**>(static_cast<uint32_t>(*reinterpret_cast<uint16_t*>(ebp36 - 14)));
            v37 = ebp38->f8;
            v12 = esi35;
            *reinterpret_cast<signed char*>(ebp39 - 41) = cl32;
            eax40 = _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEixEj(v37, v12);
            *reinterpret_cast<void***>(eax40) = *reinterpret_cast<void***>(ebp41 - 41);
            *reinterpret_cast<int16_t*>(ebp42 - 14) = reinterpret_cast<int16_t>(*reinterpret_cast<int16_t*>(ebp43 - 14) + 1);
        }
    } else {
        *reinterpret_cast<int16_t*>(ebp44 - 12) = 0;
        while (eax45 = *reinterpret_cast<uint16_t*>(ebp46 - 12), v47 = ebp48->f8, *reinterpret_cast<uint32_t*>(ebp49 - 24) = eax45, eax56 = _ZNKSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE4sizeEv(v47, v50, v51, v52, v53, v54, v55), reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(ebp57 - 24)) < reinterpret_cast<unsigned char>(eax56)) {
            ecx58 = reinterpret_cast<void**>(static_cast<uint32_t>(*reinterpret_cast<uint16_t*>(ebp59 - 12)));
            v60 = ebp61->f8;
            eax62 = _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEixEj(v60, ecx58);
            eax63 = (reinterpret_cast<uint32_t>(static_cast<int32_t>(reinterpret_cast<signed char>(*reinterpret_cast<void***>(eax62))) >> 4) & 15) << 4;
            edx64 = reinterpret_cast<void**>(static_cast<uint32_t>(*reinterpret_cast<uint16_t*>(ebp65 - 12)));
            v66 = ebp67->f8;
            *reinterpret_cast<uint32_t*>(ebp68 - 28) = eax63;
            eax69 = _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEixEj(v66, edx64);
            cl70 = *reinterpret_cast<signed char*>(*reinterpret_cast<int32_t*>(ebp71 - 20) + (*reinterpret_cast<int32_t*>(ebp72 - 28) + (reinterpret_cast<uint32_t>(static_cast<int32_t>(reinterpret_cast<signed char>(*reinterpret_cast<void***>(eax69)))) & 15)) + 0xe0);
            esi73 = reinterpret_cast<void**>(static_cast<uint32_t>(*reinterpret_cast<uint16_t*>(ebp74 - 12)));
            v75 = ebp76->f8;
            v50 = esi73;
            *reinterpret_cast<signed char*>(ebp77 - 29) = cl70;
            eax78 = _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEixEj(v75, v50);
            *reinterpret_cast<void***>(eax78) = *reinterpret_cast<void***>(ebp79 - 29);
            *reinterpret_cast<int16_t*>(ebp80 - 12) = reinterpret_cast<int16_t>(*reinterpret_cast<int16_t*>(ebp81 - 12) + 1);
        }
    }
    goto v82;
}

struct s186 {
    signed char[12] pad12;
    unsigned char f12;
};

struct s187 {
    signed char[8] pad8;
    void** f8;
};

struct s188 {
    signed char[8] pad8;
    void** f8;
};

struct s189 {
    signed char[8] pad8;
    void** f8;
};

struct s190 {
    signed char[8] pad8;
    void** f8;
};

struct s191 {
    signed char[8] pad8;
    void** f8;
};

struct s192 {
    signed char[1] pad1;
    void** f1;
};

struct s193 {
    signed char[8] pad8;
    void** f8;
};

void fun_5a2c() {
    int32_t ebp1;
    struct s186* ebp2;
    int32_t ebp3;
    int1_t zf4;
    int32_t ebp5;
    int32_t ebp6;
    int32_t ebp7;
    uint32_t eax8;
    int32_t ebp9;
    void** v10;
    struct s187* ebp11;
    int32_t ebp12;
    void** v13;
    void** v14;
    void** v15;
    void** v16;
    void** v17;
    void** v18;
    void** eax19;
    int32_t ebp20;
    int32_t ebp21;
    int32_t ebp22;
    int32_t eax23;
    int32_t ebp24;
    int32_t ebp25;
    int32_t ebp26;
    int32_t ebp27;
    int32_t ebp28;
    int32_t ebp29;
    void** ecx30;
    int32_t ebp31;
    void** v32;
    struct s188* ebp33;
    void** eax34;
    void** edx35;
    int32_t ebp36;
    void** v37;
    struct s189* ebp38;
    int32_t ebp39;
    void** eax40;
    void** v41;
    int32_t ebp42;
    int32_t ebp43;
    int32_t ebp44;
    uint32_t eax45;
    int32_t ebp46;
    int32_t ebp47;
    int32_t ebp48;
    uint32_t eax49;
    int32_t ebp50;
    void** v51;
    struct s190* ebp52;
    int32_t ebp53;
    void** v54;
    void** v55;
    void** v56;
    void** v57;
    void** v58;
    void** v59;
    void** eax60;
    int32_t ebp61;
    int32_t ebp62;
    int32_t ebp63;
    int32_t eax64;
    int32_t ebp65;
    int32_t ebp66;
    int32_t ebp67;
    int32_t ebp68;
    int32_t ebp69;
    int32_t ebp70;
    void** ecx71;
    int32_t ebp72;
    void** v73;
    struct s191* ebp74;
    void** eax75;
    void** edx76;
    int32_t ebp77;
    void** v78;
    struct s193* ebp79;
    int32_t ebp80;
    void** eax81;
    void** v82;
    int32_t ebp83;
    int32_t ebp84;
    int32_t ebp85;
    uint32_t eax86;
    int32_t ebp87;
    int32_t ebp88;
    int32_t v89;

    *reinterpret_cast<unsigned char*>(ebp1 - 5) = reinterpret_cast<unsigned char>(ebp2->f12 & 1);
    *reinterpret_cast<int32_t*>(ebp3 - 12) = 0;
    zf4 = (*reinterpret_cast<unsigned char*>(ebp5 - 5) & 1) == 0;
    *reinterpret_cast<int32_t*>(ebp6 - 32) = reinterpret_cast<int32_t>(__return_address()) + 0xd4f8;
    if (zf4) {
        *reinterpret_cast<int16_t*>(ebp7 - 22) = 4;
        while (eax8 = *reinterpret_cast<uint16_t*>(ebp9 - 22), v10 = ebp11->f8, *reinterpret_cast<uint32_t*>(ebp12 - 44) = eax8, eax19 = _ZNKSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE4sizeEv(v10, v13, v14, v15, v16, v17, v18), reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(ebp20 - 44)) < reinterpret_cast<unsigned char>(eax19)) {
            __asm__("cdq ");
            *reinterpret_cast<int32_t*>(ebp21 - 12) = reinterpret_cast<int32_t>(static_cast<uint32_t>(*reinterpret_cast<uint16_t*>(ebp22 - 22))) / 4;
            while (eax23 = *reinterpret_cast<int32_t*>(ebp24 - 12), *reinterpret_cast<int32_t*>(ebp25 - 12) = eax23 - 1, !!eax23) {
                *reinterpret_cast<uint32_t*>(ebp26 - 28) = *reinterpret_cast<uint16_t*>(ebp27 - 22) + 3;
                while (*reinterpret_cast<int32_t*>(ebp28 - 28) > reinterpret_cast<int32_t>(static_cast<uint32_t>(*reinterpret_cast<uint16_t*>(ebp29 - 22)))) {
                    ecx30 = *reinterpret_cast<void***>(ebp31 - 28);
                    v32 = ebp33->f8;
                    eax34 = _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEixEj(v32, ecx30);
                    edx35 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(*reinterpret_cast<void**>(ebp36 - 28)) - 1);
                    v37 = ebp38->f8;
                    *reinterpret_cast<void***>(ebp39 - 48) = eax34;
                    eax40 = _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEixEj(v37, edx35);
                    v41 = *reinterpret_cast<void***>(ebp42 - 48);
                    v13 = eax40;
                    _Z4swapIcEvRT_S1_(v41, v13);
                    *reinterpret_cast<int32_t*>(ebp43 - 28) = *reinterpret_cast<int32_t*>(ebp44 - 28) - 1;
                }
            }
            eax45 = *reinterpret_cast<uint16_t*>(ebp46 - 22) + 4;
            *reinterpret_cast<int16_t*>(ebp47 - 22) = *reinterpret_cast<int16_t*>(&eax45);
        }
    } else {
        *reinterpret_cast<int16_t*>(ebp48 - 14) = 4;
        while (eax49 = *reinterpret_cast<uint16_t*>(ebp50 - 14), v51 = ebp52->f8, *reinterpret_cast<uint32_t*>(ebp53 - 36) = eax49, eax60 = _ZNKSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE4sizeEv(v51, v54, v55, v56, v57, v58, v59), reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(ebp61 - 36)) < reinterpret_cast<unsigned char>(eax60)) {
            __asm__("cdq ");
            *reinterpret_cast<int32_t*>(ebp62 - 12) = reinterpret_cast<int32_t>(static_cast<uint32_t>(*reinterpret_cast<uint16_t*>(ebp63 - 14))) / 4;
            while (eax64 = *reinterpret_cast<int32_t*>(ebp65 - 12), *reinterpret_cast<int32_t*>(ebp66 - 12) = eax64 - 1, !!eax64) {
                *reinterpret_cast<uint32_t*>(ebp67 - 20) = *reinterpret_cast<uint16_t*>(ebp68 - 14);
                while (*reinterpret_cast<int32_t*>(ebp69 - 20) < reinterpret_cast<int32_t>(*reinterpret_cast<uint16_t*>(ebp70 - 14) + 3)) {
                    ecx71 = *reinterpret_cast<void***>(ebp72 - 20);
                    v73 = ebp74->f8;
                    eax75 = _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEixEj(v73, ecx71);
                    edx76 = reinterpret_cast<void**>(&(*reinterpret_cast<struct s192**>(ebp77 - 20))->f1);
                    v78 = ebp79->f8;
                    *reinterpret_cast<void***>(ebp80 - 40) = eax75;
                    eax81 = _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEixEj(v78, edx76);
                    v82 = *reinterpret_cast<void***>(ebp83 - 40);
                    v54 = eax81;
                    _Z4swapIcEvRT_S1_(v82, v54);
                    *reinterpret_cast<int32_t*>(ebp84 - 20) = *reinterpret_cast<int32_t*>(ebp85 - 20) + 1;
                }
            }
            eax86 = *reinterpret_cast<uint16_t*>(ebp87 - 14) + 4;
            *reinterpret_cast<int16_t*>(ebp88 - 14) = *reinterpret_cast<int16_t*>(&eax86);
        }
    }
    goto v89;
}

struct s194 {
    signed char[8] pad8;
    int32_t f8;
};

struct s195 {
    signed char[12] pad12;
    unsigned char f12;
};

struct s196 {
    signed char[8] pad8;
    void** f8;
};

struct s197 {
    signed char[8] pad8;
    void** f8;
};

struct s198 {
    signed char[8] pad8;
    void** f8;
};

struct s199 {
    signed char[8] pad8;
    void** f8;
};

struct s200 {
    signed char[8] pad8;
    void** f8;
};

struct s201 {
    signed char[8] pad8;
    void** f8;
};

struct s202 {
    signed char[8] pad8;
    void** f8;
};

struct s203 {
    signed char[8] pad8;
    void** f8;
};

struct s204 {
    signed char[8] pad8;
    void** f8;
};

struct s205 {
    signed char[8] pad8;
    void** f8;
};

struct s206 {
    signed char[8] pad8;
    void** f8;
};

struct s207 {
    signed char[8] pad8;
    void** f8;
};

struct s208 {
    signed char[8] pad8;
    void** f8;
};

struct s209 {
    signed char[8] pad8;
    void** f8;
};

struct s210 {
    signed char[8] pad8;
    void** f8;
};

struct s211 {
    signed char[8] pad8;
    void** f8;
};

struct s212 {
    signed char[8] pad8;
    void** f8;
};

struct s213 {
    signed char[8] pad8;
    void** f8;
};

struct s214 {
    signed char[8] pad8;
    void** f8;
};

struct s215 {
    signed char[8] pad8;
    void** f8;
};

struct s216 {
    signed char[8] pad8;
    void** f8;
};

struct s217 {
    signed char[8] pad8;
    void** f8;
};

struct s218 {
    signed char[8] pad8;
    void** f8;
};

struct s219 {
    signed char[8] pad8;
    void** f8;
};

struct s220 {
    signed char[8] pad8;
    void** f8;
};

struct s221 {
    signed char[8] pad8;
    void** f8;
};

struct s222 {
    signed char[8] pad8;
    void** f8;
};

struct s223 {
    signed char[8] pad8;
    void** f8;
};

struct s224 {
    signed char[8] pad8;
    void** f8;
};

struct s225 {
    signed char[8] pad8;
    void** f8;
};

struct s226 {
    signed char[8] pad8;
    void** f8;
};

struct s227 {
    signed char[8] pad8;
    void** f8;
};

struct s228 {
    signed char[8] pad8;
    void** f8;
};

struct s229 {
    signed char[8] pad8;
    void** f8;
};

struct s230 {
    signed char[8] pad8;
    void** f8;
};

struct s231 {
    signed char[8] pad8;
    void** f8;
};

void fun_5c11() {
    int32_t edx1;
    struct s194* ebp2;
    int32_t ebp3;
    struct s195* ebp4;
    void** esi5;
    struct s196* ebp6;
    void** v7;
    int32_t ebp8;
    int32_t ebp9;
    void* ebp10;
    int32_t ebp11;
    int32_t ebp12;
    uint32_t eax13;
    int32_t ebp14;
    void** v15;
    struct s197* ebp16;
    int32_t ebp17;
    void** v18;
    void** v19;
    void** v20;
    void** v21;
    void** v22;
    void** eax23;
    int32_t ebp24;
    void** eax25;
    struct s198* ebp26;
    void** v27;
    int32_t ebp28;
    void** eax29;
    uint32_t v30;
    unsigned char al31;
    int32_t ebp32;
    uint32_t ecx33;
    int32_t ebp34;
    void** edx35;
    struct s199* ebp36;
    void** v37;
    int32_t ebp38;
    int32_t ebp39;
    void** eax40;
    uint32_t v41;
    unsigned char al42;
    int32_t ebp43;
    uint32_t edx44;
    int32_t ebp45;
    int32_t ebp46;
    void** ecx47;
    struct s200* ebp48;
    void** v49;
    int32_t ebp50;
    int32_t ebp51;
    void** eax52;
    uint32_t v53;
    unsigned char al54;
    int32_t ebp55;
    uint32_t edx56;
    int32_t ebp57;
    int32_t ebp58;
    void** ecx59;
    struct s201* ebp60;
    void** v61;
    int32_t ebp62;
    int32_t ebp63;
    void** eax64;
    uint32_t v65;
    unsigned char al66;
    int32_t ebp67;
    uint32_t edx68;
    int32_t ebp69;
    int32_t ebp70;
    void** v71;
    int32_t ebp72;
    int32_t ebp73;
    void* ebp74;
    void** eax75;
    int32_t ebp76;
    void** eax77;
    struct s202* ebp78;
    void** v79;
    int32_t ebp80;
    void** eax81;
    uint32_t v82;
    unsigned char al83;
    int32_t ebp84;
    uint32_t ecx85;
    int32_t ebp86;
    void** edx87;
    struct s203* ebp88;
    void** v89;
    int32_t ebp90;
    int32_t ebp91;
    void** eax92;
    uint32_t v93;
    unsigned char al94;
    int32_t ebp95;
    uint32_t edx96;
    int32_t ebp97;
    int32_t ebp98;
    void** ecx99;
    struct s204* ebp100;
    void** v101;
    int32_t ebp102;
    int32_t ebp103;
    void** eax104;
    uint32_t v105;
    unsigned char al106;
    int32_t ebp107;
    uint32_t edx108;
    int32_t ebp109;
    int32_t ebp110;
    void** ecx111;
    struct s205* ebp112;
    void** v113;
    int32_t ebp114;
    int32_t ebp115;
    void** eax116;
    uint32_t v117;
    unsigned char al118;
    int32_t ebp119;
    uint32_t edx120;
    int32_t ebp121;
    int32_t ebp122;
    void** v123;
    int32_t ebp124;
    int32_t ebp125;
    void* ebp126;
    void** eax127;
    int32_t ebp128;
    void** eax129;
    struct s206* ebp130;
    void** v131;
    int32_t ebp132;
    void** eax133;
    uint32_t v134;
    unsigned char al135;
    int32_t ebp136;
    uint32_t ecx137;
    int32_t ebp138;
    void** edx139;
    struct s207* ebp140;
    void** v141;
    int32_t ebp142;
    int32_t ebp143;
    void** eax144;
    uint32_t v145;
    unsigned char al146;
    int32_t ebp147;
    uint32_t edx148;
    int32_t ebp149;
    int32_t ebp150;
    void** ecx151;
    struct s208* ebp152;
    void** v153;
    int32_t ebp154;
    int32_t ebp155;
    void** eax156;
    uint32_t v157;
    unsigned char al158;
    int32_t ebp159;
    uint32_t edx160;
    int32_t ebp161;
    int32_t ebp162;
    void** ecx163;
    struct s209* ebp164;
    void** v165;
    int32_t ebp166;
    int32_t ebp167;
    void** eax168;
    uint32_t v169;
    unsigned char al170;
    int32_t ebp171;
    uint32_t edx172;
    int32_t ebp173;
    int32_t ebp174;
    void** v175;
    int32_t ebp176;
    int32_t ebp177;
    void* ebp178;
    void** eax179;
    int32_t ebp180;
    void** eax181;
    struct s210* ebp182;
    void** v183;
    int32_t ebp184;
    void** eax185;
    uint32_t v186;
    unsigned char al187;
    int32_t ebp188;
    uint32_t ecx189;
    int32_t ebp190;
    void** edx191;
    struct s211* ebp192;
    void** v193;
    int32_t ebp194;
    int32_t ebp195;
    void** eax196;
    uint32_t v197;
    unsigned char al198;
    int32_t ebp199;
    uint32_t edx200;
    int32_t ebp201;
    int32_t ebp202;
    void** ecx203;
    struct s212* ebp204;
    void** v205;
    int32_t ebp206;
    int32_t ebp207;
    void** eax208;
    uint32_t v209;
    unsigned char al210;
    int32_t ebp211;
    uint32_t edx212;
    int32_t ebp213;
    int32_t ebp214;
    void** ecx215;
    struct s213* ebp216;
    void** v217;
    int32_t ebp218;
    int32_t ebp219;
    void** eax220;
    uint32_t v221;
    unsigned char al222;
    int32_t ebp223;
    uint32_t edx224;
    int32_t ebp225;
    int32_t ebp226;
    void** ecx227;
    int32_t ebp228;
    int32_t ebp229;
    void* ebp230;
    void** eax231;
    int32_t ebp232;
    uint32_t eax233;
    int32_t ebp234;
    int32_t ebp235;
    int32_t ebp236;
    uint32_t eax237;
    int32_t ebp238;
    void** v239;
    struct s214* ebp240;
    int32_t ebp241;
    void** v242;
    void** v243;
    void** v244;
    void** v245;
    void** v246;
    void** eax247;
    int32_t ebp248;
    void** eax249;
    struct s215* ebp250;
    void** v251;
    int32_t ebp252;
    void** eax253;
    uint32_t v254;
    unsigned char al255;
    int32_t ebp256;
    uint32_t ecx257;
    int32_t ebp258;
    void** edx259;
    struct s216* ebp260;
    void** v261;
    int32_t ebp262;
    int32_t ebp263;
    void** eax264;
    uint32_t v265;
    unsigned char al266;
    int32_t ebp267;
    uint32_t edx268;
    int32_t ebp269;
    int32_t ebp270;
    void** ecx271;
    struct s217* ebp272;
    void** v273;
    int32_t ebp274;
    int32_t ebp275;
    void** eax276;
    uint32_t ecx277;
    int32_t ebp278;
    void** eax279;
    struct s218* ebp280;
    void** v281;
    int32_t ebp282;
    int32_t ebp283;
    void** eax284;
    uint32_t ecx285;
    int32_t ebp286;
    void** v287;
    int32_t ebp288;
    int32_t ebp289;
    void* ebp290;
    void** eax291;
    int32_t ebp292;
    void** eax293;
    struct s219* ebp294;
    void** v295;
    int32_t ebp296;
    void** eax297;
    int32_t eax298;
    void** edx299;
    struct s220* ebp300;
    void** v301;
    int32_t ebp302;
    int32_t ebp303;
    void** eax304;
    uint32_t v305;
    unsigned char al306;
    int32_t ebp307;
    uint32_t edx308;
    int32_t ebp309;
    int32_t ebp310;
    void** ecx311;
    struct s221* ebp312;
    void** v313;
    int32_t ebp314;
    int32_t ebp315;
    void** eax316;
    uint32_t v317;
    unsigned char al318;
    int32_t ebp319;
    uint32_t edx320;
    int32_t ebp321;
    int32_t ebp322;
    void** ecx323;
    struct s222* ebp324;
    void** v325;
    int32_t ebp326;
    int32_t ebp327;
    void** eax328;
    uint32_t ecx329;
    int32_t ebp330;
    void** v331;
    int32_t ebp332;
    int32_t ebp333;
    void* ebp334;
    void** eax335;
    int32_t ebp336;
    void** eax337;
    struct s223* ebp338;
    void** v339;
    int32_t ebp340;
    void** eax341;
    void** cl342;
    void** eax343;
    struct s224* ebp344;
    void** v345;
    int32_t ebp346;
    int32_t ebp347;
    void** eax348;
    int32_t eax349;
    int32_t ebp350;
    void** edx351;
    struct s225* ebp352;
    void** v353;
    int32_t ebp354;
    int32_t ebp355;
    void** eax356;
    uint32_t v357;
    unsigned char al358;
    int32_t ebp359;
    uint32_t edx360;
    int32_t ebp361;
    int32_t ebp362;
    void** ecx363;
    struct s226* ebp364;
    void** v365;
    int32_t ebp366;
    int32_t ebp367;
    void** eax368;
    uint32_t v369;
    unsigned char al370;
    int32_t ebp371;
    uint32_t edx372;
    int32_t ebp373;
    int32_t ebp374;
    void** v375;
    int32_t ebp376;
    int32_t ebp377;
    void* ebp378;
    void** eax379;
    int32_t ebp380;
    void** eax381;
    struct s227* ebp382;
    void** v383;
    int32_t ebp384;
    void** eax385;
    uint32_t v386;
    unsigned char al387;
    int32_t ebp388;
    uint32_t ecx389;
    int32_t ebp390;
    void** edx391;
    struct s228* ebp392;
    void** v393;
    int32_t ebp394;
    int32_t ebp395;
    void** eax396;
    uint32_t ecx397;
    int32_t ebp398;
    void** eax399;
    struct s229* ebp400;
    void** v401;
    int32_t ebp402;
    int32_t ebp403;
    void** eax404;
    uint32_t ecx405;
    int32_t ebp406;
    void** eax407;
    struct s230* ebp408;
    void** v409;
    int32_t ebp410;
    int32_t ebp411;
    void** eax412;
    uint32_t v413;
    unsigned char al414;
    int32_t ebp415;
    uint32_t edx416;
    int32_t ebp417;
    int32_t ebp418;
    void** ecx419;
    int32_t ebp420;
    int32_t ebp421;
    void* ebp422;
    void** eax423;
    int32_t ebp424;
    uint32_t eax425;
    int32_t ebp426;
    int32_t ebp427;
    void** eax428;
    struct s231* ebp429;
    void** v430;
    void* ebp431;
    void* ebp432;
    void** v433;
    int32_t v434;
    void** v435;
    void** v436;
    int32_t v437;

    edx1 = ebp2->f8;
    *reinterpret_cast<unsigned char*>(ebp3 - 13) = reinterpret_cast<unsigned char>(ebp4->f12 & 1);
    esi5 = ebp6->f8;
    v7 = esi5;
    *reinterpret_cast<int32_t*>(ebp8 - 52) = reinterpret_cast<int32_t>(__return_address()) + 0xd313;
    *reinterpret_cast<int32_t*>(ebp9 - 56) = edx1;
    _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(reinterpret_cast<int32_t>(ebp10) + 0xffffffe0, v7);
    if (!(*reinterpret_cast<unsigned char*>(ebp11 - 13) & 1)) {
        *reinterpret_cast<int16_t*>(ebp12 - 46) = 0;
        while (eax13 = *reinterpret_cast<uint16_t*>(ebp14 - 46), v15 = ebp16->f8, *reinterpret_cast<uint32_t*>(ebp17 - 0x90) = eax13, eax23 = _ZNKSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE4sizeEv(v15, v7, v18, v19, v20, v21, v22), reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(ebp24 - 0x90)) < reinterpret_cast<unsigned char>(eax23)) {
            eax25 = ebp26->f8;
            v27 = reinterpret_cast<void**>(static_cast<uint32_t>(*reinterpret_cast<uint16_t*>(ebp28 - 46)));
            eax29 = _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEixEj(eax25, v27);
            v30 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax29));
            al31 = _ZN6Cipher4GMulEhh(14, *reinterpret_cast<unsigned char*>(&v30));
            *reinterpret_cast<unsigned char*>(ebp32 - 0x91) = al31;
            ecx33 = *reinterpret_cast<unsigned char*>(ebp34 - 0x91);
            edx35 = ebp36->f8;
            v37 = reinterpret_cast<void**>(*reinterpret_cast<uint16_t*>(ebp38 - 46) + 1);
            *reinterpret_cast<uint32_t*>(ebp39 - 0x98) = ecx33;
            eax40 = _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEixEj(edx35, v37);
            v41 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax40));
            al42 = _ZN6Cipher4GMulEhh(11, *reinterpret_cast<unsigned char*>(&v41));
            *reinterpret_cast<unsigned char*>(ebp43 - 0x99) = al42;
            edx44 = *reinterpret_cast<uint32_t*>(ebp45 - 0x98) ^ static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(ebp46 - 0x99));
            ecx47 = ebp48->f8;
            v49 = reinterpret_cast<void**>(*reinterpret_cast<uint16_t*>(ebp50 - 46) + 2);
            *reinterpret_cast<uint32_t*>(ebp51 - 0xa0) = edx44;
            eax52 = _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEixEj(ecx47, v49);
            v53 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax52));
            al54 = _ZN6Cipher4GMulEhh(13, *reinterpret_cast<unsigned char*>(&v53));
            *reinterpret_cast<unsigned char*>(ebp55 - 0xa1) = al54;
            edx56 = *reinterpret_cast<uint32_t*>(ebp57 - 0xa0) ^ static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(ebp58 - 0xa1));
            ecx59 = ebp60->f8;
            v61 = reinterpret_cast<void**>(*reinterpret_cast<uint16_t*>(ebp62 - 46) + 3);
            *reinterpret_cast<uint32_t*>(ebp63 - 0xa8) = edx56;
            eax64 = _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEixEj(ecx59, v61);
            v65 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax64));
            al66 = _ZN6Cipher4GMulEhh(9, *reinterpret_cast<unsigned char*>(&v65));
            *reinterpret_cast<unsigned char*>(ebp67 - 0xa9) = al66;
            edx68 = *reinterpret_cast<uint32_t*>(ebp69 - 0xa8) ^ static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(ebp70 - 0xa9));
            v71 = reinterpret_cast<void**>(static_cast<uint32_t>(*reinterpret_cast<uint16_t*>(ebp72 - 46)));
            *reinterpret_cast<signed char*>(ebp73 - 0xaa) = *reinterpret_cast<signed char*>(&edx68);
            eax75 = _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEixEj(reinterpret_cast<int32_t>(ebp74) + 0xffffffe0, v71);
            *reinterpret_cast<void***>(eax75) = *reinterpret_cast<void***>(ebp76 - 0xaa);
            eax77 = ebp78->f8;
            v79 = reinterpret_cast<void**>(static_cast<uint32_t>(*reinterpret_cast<uint16_t*>(ebp80 - 46)));
            eax81 = _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEixEj(eax77, v79);
            v82 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax81));
            al83 = _ZN6Cipher4GMulEhh(9, *reinterpret_cast<unsigned char*>(&v82));
            *reinterpret_cast<unsigned char*>(ebp84 - 0xab) = al83;
            ecx85 = *reinterpret_cast<unsigned char*>(ebp86 - 0xab);
            edx87 = ebp88->f8;
            v89 = reinterpret_cast<void**>(*reinterpret_cast<uint16_t*>(ebp90 - 46) + 1);
            *reinterpret_cast<uint32_t*>(ebp91 - 0xb0) = ecx85;
            eax92 = _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEixEj(edx87, v89);
            v93 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax92));
            al94 = _ZN6Cipher4GMulEhh(14, *reinterpret_cast<unsigned char*>(&v93));
            *reinterpret_cast<unsigned char*>(ebp95 - 0xb1) = al94;
            edx96 = *reinterpret_cast<uint32_t*>(ebp97 - 0xb0) ^ static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(ebp98 - 0xb1));
            ecx99 = ebp100->f8;
            v101 = reinterpret_cast<void**>(*reinterpret_cast<uint16_t*>(ebp102 - 46) + 2);
            *reinterpret_cast<uint32_t*>(ebp103 - 0xb8) = edx96;
            eax104 = _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEixEj(ecx99, v101);
            v105 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax104));
            al106 = _ZN6Cipher4GMulEhh(11, *reinterpret_cast<unsigned char*>(&v105));
            *reinterpret_cast<unsigned char*>(ebp107 - 0xb9) = al106;
            edx108 = *reinterpret_cast<uint32_t*>(ebp109 - 0xb8) ^ static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(ebp110 - 0xb9));
            ecx111 = ebp112->f8;
            v113 = reinterpret_cast<void**>(*reinterpret_cast<uint16_t*>(ebp114 - 46) + 3);
            *reinterpret_cast<uint32_t*>(ebp115 - 0xc0) = edx108;
            eax116 = _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEixEj(ecx111, v113);
            v117 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax116));
            al118 = _ZN6Cipher4GMulEhh(13, *reinterpret_cast<unsigned char*>(&v117));
            *reinterpret_cast<unsigned char*>(ebp119 - 0xc1) = al118;
            edx120 = *reinterpret_cast<uint32_t*>(ebp121 - 0xc0) ^ static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(ebp122 - 0xc1));
            v123 = reinterpret_cast<void**>(*reinterpret_cast<uint16_t*>(ebp124 - 46) + 1);
            *reinterpret_cast<signed char*>(ebp125 - 0xc2) = *reinterpret_cast<signed char*>(&edx120);
            eax127 = _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEixEj(reinterpret_cast<int32_t>(ebp126) + 0xffffffe0, v123);
            *reinterpret_cast<void***>(eax127) = *reinterpret_cast<void***>(ebp128 - 0xc2);
            eax129 = ebp130->f8;
            v131 = reinterpret_cast<void**>(static_cast<uint32_t>(*reinterpret_cast<uint16_t*>(ebp132 - 46)));
            eax133 = _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEixEj(eax129, v131);
            v134 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax133));
            al135 = _ZN6Cipher4GMulEhh(13, *reinterpret_cast<unsigned char*>(&v134));
            *reinterpret_cast<unsigned char*>(ebp136 - 0xc3) = al135;
            ecx137 = *reinterpret_cast<unsigned char*>(ebp138 - 0xc3);
            edx139 = ebp140->f8;
            v141 = reinterpret_cast<void**>(*reinterpret_cast<uint16_t*>(ebp142 - 46) + 1);
            *reinterpret_cast<uint32_t*>(ebp143 - 0xc8) = ecx137;
            eax144 = _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEixEj(edx139, v141);
            v145 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax144));
            al146 = _ZN6Cipher4GMulEhh(9, *reinterpret_cast<unsigned char*>(&v145));
            *reinterpret_cast<unsigned char*>(ebp147 - 0xc9) = al146;
            edx148 = *reinterpret_cast<uint32_t*>(ebp149 - 0xc8) ^ static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(ebp150 - 0xc9));
            ecx151 = ebp152->f8;
            v153 = reinterpret_cast<void**>(*reinterpret_cast<uint16_t*>(ebp154 - 46) + 2);
            *reinterpret_cast<uint32_t*>(ebp155 - 0xd0) = edx148;
            eax156 = _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEixEj(ecx151, v153);
            v157 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax156));
            al158 = _ZN6Cipher4GMulEhh(14, *reinterpret_cast<unsigned char*>(&v157));
            *reinterpret_cast<unsigned char*>(ebp159 - 0xd1) = al158;
            edx160 = *reinterpret_cast<uint32_t*>(ebp161 - 0xd0) ^ static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(ebp162 - 0xd1));
            ecx163 = ebp164->f8;
            v165 = reinterpret_cast<void**>(*reinterpret_cast<uint16_t*>(ebp166 - 46) + 3);
            *reinterpret_cast<uint32_t*>(ebp167 - 0xd8) = edx160;
            eax168 = _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEixEj(ecx163, v165);
            v169 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax168));
            al170 = _ZN6Cipher4GMulEhh(11, *reinterpret_cast<unsigned char*>(&v169));
            *reinterpret_cast<unsigned char*>(ebp171 - 0xd9) = al170;
            edx172 = *reinterpret_cast<uint32_t*>(ebp173 - 0xd8) ^ static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(ebp174 - 0xd9));
            v175 = reinterpret_cast<void**>(*reinterpret_cast<uint16_t*>(ebp176 - 46) + 2);
            *reinterpret_cast<signed char*>(ebp177 - 0xda) = *reinterpret_cast<signed char*>(&edx172);
            eax179 = _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEixEj(reinterpret_cast<int32_t>(ebp178) + 0xffffffe0, v175);
            *reinterpret_cast<void***>(eax179) = *reinterpret_cast<void***>(ebp180 - 0xda);
            eax181 = ebp182->f8;
            v183 = reinterpret_cast<void**>(static_cast<uint32_t>(*reinterpret_cast<uint16_t*>(ebp184 - 46)));
            eax185 = _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEixEj(eax181, v183);
            v186 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax185));
            al187 = _ZN6Cipher4GMulEhh(11, *reinterpret_cast<unsigned char*>(&v186));
            *reinterpret_cast<unsigned char*>(ebp188 - 0xdb) = al187;
            ecx189 = *reinterpret_cast<unsigned char*>(ebp190 - 0xdb);
            edx191 = ebp192->f8;
            v193 = reinterpret_cast<void**>(*reinterpret_cast<uint16_t*>(ebp194 - 46) + 1);
            *reinterpret_cast<uint32_t*>(ebp195 - 0xe0) = ecx189;
            eax196 = _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEixEj(edx191, v193);
            v197 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax196));
            al198 = _ZN6Cipher4GMulEhh(13, *reinterpret_cast<unsigned char*>(&v197));
            *reinterpret_cast<unsigned char*>(ebp199 - 0xe1) = al198;
            edx200 = *reinterpret_cast<uint32_t*>(ebp201 - 0xe0) ^ static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(ebp202 - 0xe1));
            ecx203 = ebp204->f8;
            v205 = reinterpret_cast<void**>(*reinterpret_cast<uint16_t*>(ebp206 - 46) + 2);
            *reinterpret_cast<uint32_t*>(ebp207 - 0xe8) = edx200;
            eax208 = _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEixEj(ecx203, v205);
            v209 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax208));
            al210 = _ZN6Cipher4GMulEhh(9, *reinterpret_cast<unsigned char*>(&v209));
            *reinterpret_cast<unsigned char*>(ebp211 - 0xe9) = al210;
            edx212 = *reinterpret_cast<uint32_t*>(ebp213 - 0xe8) ^ static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(ebp214 - 0xe9));
            ecx215 = ebp216->f8;
            v217 = reinterpret_cast<void**>(*reinterpret_cast<uint16_t*>(ebp218 - 46) + 3);
            *reinterpret_cast<uint32_t*>(ebp219 - 0xf0) = edx212;
            eax220 = _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEixEj(ecx215, v217);
            v221 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax220));
            al222 = _ZN6Cipher4GMulEhh(14, *reinterpret_cast<unsigned char*>(&v221));
            *reinterpret_cast<unsigned char*>(ebp223 - 0xf1) = al222;
            edx224 = *reinterpret_cast<uint32_t*>(ebp225 - 0xf0) ^ static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(ebp226 - 0xf1));
            ecx227 = reinterpret_cast<void**>(*reinterpret_cast<uint16_t*>(ebp228 - 46) + 3);
            v7 = ecx227;
            *reinterpret_cast<signed char*>(ebp229 - 0xf2) = *reinterpret_cast<signed char*>(&edx224);
            eax231 = _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEixEj(reinterpret_cast<int32_t>(ebp230) + 0xffffffe0, v7);
            *reinterpret_cast<void***>(eax231) = *reinterpret_cast<void***>(ebp232 - 0xf2);
            eax233 = *reinterpret_cast<uint16_t*>(ebp234 - 46) + 4;
            *reinterpret_cast<int16_t*>(ebp235 - 46) = *reinterpret_cast<int16_t*>(&eax233);
        }
    } else {
        *reinterpret_cast<int16_t*>(ebp236 - 34) = 0;
        while (eax237 = *reinterpret_cast<uint16_t*>(ebp238 - 34), v239 = ebp240->f8, *reinterpret_cast<uint32_t*>(ebp241 - 60) = eax237, eax247 = _ZNKSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE4sizeEv(v239, v7, v242, v243, v244, v245, v246), reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(ebp248 - 60)) < reinterpret_cast<unsigned char>(eax247)) {
            eax249 = ebp250->f8;
            v251 = reinterpret_cast<void**>(static_cast<uint32_t>(*reinterpret_cast<uint16_t*>(ebp252 - 34)));
            eax253 = _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEixEj(eax249, v251);
            v254 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax253));
            al255 = _ZN6Cipher4GMulEhh(2, *reinterpret_cast<unsigned char*>(&v254));
            *reinterpret_cast<unsigned char*>(ebp256 - 61) = al255;
            ecx257 = *reinterpret_cast<unsigned char*>(ebp258 - 61);
            edx259 = ebp260->f8;
            v261 = reinterpret_cast<void**>(*reinterpret_cast<uint16_t*>(ebp262 - 34) + 1);
            *reinterpret_cast<uint32_t*>(ebp263 - 68) = ecx257;
            eax264 = _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEixEj(edx259, v261);
            v265 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax264));
            al266 = _ZN6Cipher4GMulEhh(3, *reinterpret_cast<unsigned char*>(&v265));
            *reinterpret_cast<unsigned char*>(ebp267 - 69) = al266;
            edx268 = *reinterpret_cast<uint32_t*>(ebp269 - 68) ^ static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(ebp270 - 69));
            ecx271 = ebp272->f8;
            v273 = reinterpret_cast<void**>(*reinterpret_cast<uint16_t*>(ebp274 - 34) + 2);
            *reinterpret_cast<uint32_t*>(ebp275 - 76) = edx268;
            eax276 = _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEixEj(ecx271, v273);
            ecx277 = *reinterpret_cast<uint32_t*>(ebp278 - 76) ^ static_cast<uint32_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax276)));
            eax279 = ebp280->f8;
            v281 = reinterpret_cast<void**>(*reinterpret_cast<uint16_t*>(ebp282 - 34) + 3);
            *reinterpret_cast<uint32_t*>(ebp283 - 80) = ecx277;
            eax284 = _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEixEj(eax279, v281);
            ecx285 = *reinterpret_cast<uint32_t*>(ebp286 - 80) ^ static_cast<uint32_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax284)));
            v287 = reinterpret_cast<void**>(static_cast<uint32_t>(*reinterpret_cast<uint16_t*>(ebp288 - 34)));
            *reinterpret_cast<signed char*>(ebp289 - 81) = *reinterpret_cast<signed char*>(&ecx285);
            eax291 = _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEixEj(reinterpret_cast<int32_t>(ebp290) + 0xffffffe0, v287);
            *reinterpret_cast<void***>(eax291) = *reinterpret_cast<void***>(ebp292 - 81);
            eax293 = ebp294->f8;
            v295 = reinterpret_cast<void**>(static_cast<uint32_t>(*reinterpret_cast<uint16_t*>(ebp296 - 34)));
            eax297 = _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEixEj(eax293, v295);
            eax298 = reinterpret_cast<signed char>(*reinterpret_cast<void***>(eax297));
            edx299 = ebp300->f8;
            v301 = reinterpret_cast<void**>(*reinterpret_cast<uint16_t*>(ebp302 - 34) + 1);
            *reinterpret_cast<int32_t*>(ebp303 - 88) = eax298;
            eax304 = _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEixEj(edx299, v301);
            v305 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax304));
            al306 = _ZN6Cipher4GMulEhh(2, *reinterpret_cast<unsigned char*>(&v305));
            *reinterpret_cast<unsigned char*>(ebp307 - 89) = al306;
            edx308 = *reinterpret_cast<uint32_t*>(ebp309 - 88) ^ static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(ebp310 - 89));
            ecx311 = ebp312->f8;
            v313 = reinterpret_cast<void**>(*reinterpret_cast<uint16_t*>(ebp314 - 34) + 2);
            *reinterpret_cast<uint32_t*>(ebp315 - 96) = edx308;
            eax316 = _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEixEj(ecx311, v313);
            v317 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax316));
            al318 = _ZN6Cipher4GMulEhh(3, *reinterpret_cast<unsigned char*>(&v317));
            *reinterpret_cast<unsigned char*>(ebp319 - 97) = al318;
            edx320 = *reinterpret_cast<uint32_t*>(ebp321 - 96) ^ static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(ebp322 - 97));
            ecx323 = ebp324->f8;
            v325 = reinterpret_cast<void**>(*reinterpret_cast<uint16_t*>(ebp326 - 34) + 3);
            *reinterpret_cast<uint32_t*>(ebp327 - 0x68) = edx320;
            eax328 = _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEixEj(ecx323, v325);
            ecx329 = *reinterpret_cast<uint32_t*>(ebp330 - 0x68) ^ static_cast<uint32_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax328)));
            v331 = reinterpret_cast<void**>(*reinterpret_cast<uint16_t*>(ebp332 - 34) + 1);
            *reinterpret_cast<signed char*>(ebp333 - 0x69) = *reinterpret_cast<signed char*>(&ecx329);
            eax335 = _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEixEj(reinterpret_cast<int32_t>(ebp334) + 0xffffffe0, v331);
            *reinterpret_cast<void***>(eax335) = *reinterpret_cast<void***>(ebp336 - 0x69);
            eax337 = ebp338->f8;
            v339 = reinterpret_cast<void**>(static_cast<uint32_t>(*reinterpret_cast<uint16_t*>(ebp340 - 34)));
            eax341 = _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEixEj(eax337, v339);
            cl342 = *reinterpret_cast<void***>(eax341);
            eax343 = ebp344->f8;
            v345 = reinterpret_cast<void**>(*reinterpret_cast<uint16_t*>(ebp346 - 34) + 1);
            *reinterpret_cast<void***>(ebp347 - 0x6a) = cl342;
            eax348 = _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEixEj(eax343, v345);
            eax349 = reinterpret_cast<signed char>(*reinterpret_cast<unsigned char*>(ebp350 - 0x6a) ^ reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax348)));
            edx351 = ebp352->f8;
            v353 = reinterpret_cast<void**>(*reinterpret_cast<uint16_t*>(ebp354 - 34) + 2);
            *reinterpret_cast<int32_t*>(ebp355 - 0x70) = eax349;
            eax356 = _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEixEj(edx351, v353);
            v357 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax356));
            al358 = _ZN6Cipher4GMulEhh(2, *reinterpret_cast<unsigned char*>(&v357));
            *reinterpret_cast<unsigned char*>(ebp359 - 0x71) = al358;
            edx360 = *reinterpret_cast<uint32_t*>(ebp361 - 0x70) ^ static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(ebp362 - 0x71));
            ecx363 = ebp364->f8;
            v365 = reinterpret_cast<void**>(*reinterpret_cast<uint16_t*>(ebp366 - 34) + 3);
            *reinterpret_cast<uint32_t*>(ebp367 - 0x78) = edx360;
            eax368 = _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEixEj(ecx363, v365);
            v369 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax368));
            al370 = _ZN6Cipher4GMulEhh(3, *reinterpret_cast<unsigned char*>(&v369));
            *reinterpret_cast<unsigned char*>(ebp371 - 0x79) = al370;
            edx372 = *reinterpret_cast<uint32_t*>(ebp373 - 0x78) ^ static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(ebp374 - 0x79));
            v375 = reinterpret_cast<void**>(*reinterpret_cast<uint16_t*>(ebp376 - 34) + 2);
            *reinterpret_cast<signed char*>(ebp377 - 0x7a) = *reinterpret_cast<signed char*>(&edx372);
            eax379 = _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEixEj(reinterpret_cast<int32_t>(ebp378) + 0xffffffe0, v375);
            *reinterpret_cast<void***>(eax379) = *reinterpret_cast<void***>(ebp380 - 0x7a);
            eax381 = ebp382->f8;
            v383 = reinterpret_cast<void**>(static_cast<uint32_t>(*reinterpret_cast<uint16_t*>(ebp384 - 34)));
            eax385 = _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEixEj(eax381, v383);
            v386 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax385));
            al387 = _ZN6Cipher4GMulEhh(3, *reinterpret_cast<unsigned char*>(&v386));
            *reinterpret_cast<unsigned char*>(ebp388 - 0x7b) = al387;
            ecx389 = *reinterpret_cast<unsigned char*>(ebp390 - 0x7b);
            edx391 = ebp392->f8;
            v393 = reinterpret_cast<void**>(*reinterpret_cast<uint16_t*>(ebp394 - 34) + 1);
            *reinterpret_cast<uint32_t*>(ebp395 - 0x80) = ecx389;
            eax396 = _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEixEj(edx391, v393);
            ecx397 = *reinterpret_cast<uint32_t*>(ebp398 - 0x80) ^ reinterpret_cast<uint32_t>(static_cast<int32_t>(reinterpret_cast<signed char>(*reinterpret_cast<void***>(eax396))));
            eax399 = ebp400->f8;
            v401 = reinterpret_cast<void**>(*reinterpret_cast<uint16_t*>(ebp402 - 34) + 2);
            *reinterpret_cast<uint32_t*>(ebp403 - 0x84) = ecx397;
            eax404 = _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEixEj(eax399, v401);
            ecx405 = *reinterpret_cast<uint32_t*>(ebp406 - 0x84) ^ reinterpret_cast<uint32_t>(static_cast<int32_t>(reinterpret_cast<signed char>(*reinterpret_cast<void***>(eax404))));
            eax407 = ebp408->f8;
            v409 = reinterpret_cast<void**>(*reinterpret_cast<uint16_t*>(ebp410 - 34) + 3);
            *reinterpret_cast<uint32_t*>(ebp411 - 0x88) = ecx405;
            eax412 = _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEixEj(eax407, v409);
            v413 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax412));
            al414 = _ZN6Cipher4GMulEhh(2, *reinterpret_cast<unsigned char*>(&v413));
            *reinterpret_cast<unsigned char*>(ebp415 - 0x89) = al414;
            edx416 = *reinterpret_cast<uint32_t*>(ebp417 - 0x88) ^ static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(ebp418 - 0x89));
            ecx419 = reinterpret_cast<void**>(*reinterpret_cast<uint16_t*>(ebp420 - 34) + 3);
            v7 = ecx419;
            *reinterpret_cast<signed char*>(ebp421 - 0x8a) = *reinterpret_cast<signed char*>(&edx416);
            eax423 = _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEixEj(reinterpret_cast<int32_t>(ebp422) + 0xffffffe0, v7);
            *reinterpret_cast<void***>(eax423) = *reinterpret_cast<void***>(ebp424 - 0x8a);
            eax425 = *reinterpret_cast<uint16_t*>(ebp426 - 34) + 4;
            *reinterpret_cast<int16_t*>(ebp427 - 34) = *reinterpret_cast<int16_t*>(&eax425);
        }
    }
    eax428 = ebp429->f8;
    v430 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp431) + 0xffffffe0);
    _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(eax428, v430);
    _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(reinterpret_cast<int32_t>(ebp432) + 0xffffffe0, v430, v433, v434, v435, v436);
    goto v437;
}

struct s232 {
    signed char[12] pad12;
    void** f12;
};

struct s233 {
    signed char[8] pad8;
    void* f8;
};

struct s234 {
    signed char[4812] pad4812;
    void** f4812;
};

struct s235 {
    signed char[12] pad12;
    void** f12;
};

void fun_55bd() {
    int32_t ebp1;
    int32_t ebp2;
    int32_t ebp3;
    int32_t ebp4;
    int32_t ebp5;
    void** ecx6;
    int32_t ebp7;
    int32_t ebp8;
    void** v9;
    struct s232* ebp10;
    void** eax11;
    int32_t eax12;
    void* esi13;
    struct s233* ebp14;
    void** v15;
    int32_t ebp16;
    int32_t ebp17;
    void*** eax18;
    void*** ecx19;
    int32_t ebp20;
    int32_t ebp21;
    unsigned char* eax22;
    uint32_t ecx23;
    int32_t ebp24;
    void** edx25;
    int32_t ebp26;
    int32_t ebp27;
    void** v28;
    struct s235* ebp29;
    int32_t ebp30;
    void** eax31;
    int32_t ebp32;
    int32_t ebp33;
    int32_t ebp34;
    int32_t ebp35;
    int32_t ebp36;
    int32_t v37;

    *reinterpret_cast<int32_t*>(ebp1 - 12) = 0;
    *reinterpret_cast<int32_t*>(ebp2 - 20) = reinterpret_cast<int32_t>(__return_address()) + 0xd967;
    while (*reinterpret_cast<int32_t*>(ebp3 - 12) < 4) {
        *reinterpret_cast<int32_t*>(ebp4 - 16) = 0;
        while (*reinterpret_cast<int32_t*>(ebp5 - 16) < 4) {
            ecx6 = reinterpret_cast<void**>((*reinterpret_cast<int32_t*>(ebp7 - 16) << 2) + reinterpret_cast<uint32_t>(*reinterpret_cast<void****>(ebp8 - 12)));
            v9 = ebp10->f12;
            eax11 = _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEixEj(v9, ecx6);
            eax12 = reinterpret_cast<signed char>(*reinterpret_cast<void***>(eax11));
            esi13 = ebp14->f8;
            v15 = reinterpret_cast<void**>(&(*reinterpret_cast<struct s234**>(ebp16 - 20))->f4812);
            *reinterpret_cast<int32_t*>(ebp17 - 24) = eax12;
            eax18 = _ZNSt6__ndk16vectorINS0_IhNS_9allocatorIhEEEENS1_IS3_EEEixEj(v15, esi13);
            ecx19 = reinterpret_cast<void***>((*reinterpret_cast<int32_t*>(ebp20 - 16) << 2) + reinterpret_cast<uint32_t>(*reinterpret_cast<void****>(ebp21 - 12)));
            eax22 = _ZNSt6__ndk16vectorIhNS_9allocatorIhEEEixEj(eax18, ecx19);
            ecx23 = *reinterpret_cast<uint32_t*>(ebp24 - 24) ^ static_cast<uint32_t>(*eax22);
            edx25 = reinterpret_cast<void**>((*reinterpret_cast<int32_t*>(ebp26 - 16) << 2) + reinterpret_cast<uint32_t>(*reinterpret_cast<void****>(ebp27 - 12)));
            v28 = ebp29->f12;
            *reinterpret_cast<signed char*>(ebp30 - 25) = *reinterpret_cast<signed char*>(&ecx23);
            eax31 = _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEixEj(v28, edx25);
            *reinterpret_cast<void***>(eax31) = *reinterpret_cast<void***>(ebp32 - 25);
            *reinterpret_cast<int32_t*>(ebp33 - 16) = *reinterpret_cast<int32_t*>(ebp34 - 16) + 1;
        }
        *reinterpret_cast<int32_t*>(ebp35 - 12) = *reinterpret_cast<int32_t*>(ebp36 - 12) + 1;
    }
    goto v37;
}

struct s236 {
    signed char[12] pad12;
    signed char f12;
};

struct s237 {
    signed char[8] pad8;
    int32_t f8;
};

struct s238 {
    signed char[8] pad8;
    void** f8;
};

struct s239 {
    signed char[1] pad1;
    void** f1;
};

struct s240 {
    signed char[1] pad1;
    void** f1;
};

struct s241 {
    signed char[12] pad12;
    signed char f12;
};

struct s242 {
    signed char[1] pad1;
    signed char f1;
};

void fun_43be() {
    signed char cl1;
    struct s236* ebp2;
    int32_t edx3;
    struct s237* ebp4;
    void** esi5;
    struct s238* ebp6;
    int32_t ebp7;
    int32_t ebp8;
    int32_t ebp9;
    int32_t ebp10;
    void** v11;
    void** v12;
    void** v13;
    void** v14;
    void** v15;
    void** v16;
    void** v17;
    void** v18;
    void** v19;
    void** v20;
    unsigned char al21;
    int32_t ebp22;
    int32_t ebp23;
    void** v24;
    int32_t ebp25;
    void** eax26;
    int32_t ebp27;
    void** v28;
    int32_t ebp29;
    void** v30;
    void** v31;
    void** eax32;
    int32_t ebp33;
    int32_t ebp34;
    void** v35;
    int32_t ebp36;
    void** eax37;
    int32_t ebp38;
    int32_t ebp39;
    int32_t ebp40;
    void** ecx41;
    int32_t ebp42;
    void** edx43;
    int32_t ebp44;
    void** esi45;
    int32_t ebp46;
    void** v47;
    int32_t ebp48;
    void** v49;
    void** v50;
    void** v51;
    int32_t ebp52;
    void** v53;
    int32_t ebp54;
    void** v55;
    void** v56;
    void** v57;
    void** v58;
    unsigned char al59;
    int32_t ebp60;
    int32_t ebp61;
    void** v62;
    int32_t ebp63;
    void** eax64;
    int32_t ebp65;
    int32_t ebp66;
    void** eax67;
    int32_t ebp68;
    void** v69;
    int32_t ebp70;
    void** v71;
    void** v72;
    void** v73;
    void** v74;
    void** v75;
    int32_t ebp76;
    void** v77;
    void** v78;
    void** eax79;
    int32_t ebp80;
    int32_t ebp81;
    void** eax82;
    int32_t ebp83;
    void** v84;
    int32_t ebp85;
    void** v86;
    void** v87;
    signed char* v88;
    int32_t ebp89;
    struct s241* ebp90;
    void** v91;
    void** v92;
    void** v93;
    void** v94;
    signed char* eax95;
    int32_t ebp96;
    int32_t ebp97;
    int32_t ebp98;
    void* ebp99;
    void** v100;
    void** v101;
    void** v102;
    void** v103;
    int32_t v104;

    cl1 = ebp2->f12;
    edx3 = ebp4->f8;
    esi5 = ebp6->f8;
    *reinterpret_cast<int32_t*>(ebp7 - 36) = reinterpret_cast<int32_t>(__return_address()) + reinterpret_cast<int32_t>("zMA2CG3uhrc2UkXJ1SUuwnRLv8I29eRTdHF59Ax7DRD+ry04us/TlPh4G7GZc5FLeTtcScHP8GgkKNoIf9RZni1ekJZOtK4CdtFLeTOcScH7cGgkD9oIf+jZni1UUJZOnoeOfFmJZXb00MXLKj/rLlSS0irsKlP+E1JFydUhoxshOiZoD1fcdYbk58jxzFTjVXomaA9X3HWG5OfI8dUhBR5f1NC9CxLIIIlI1OMkPyqbb1zRhFg4eB26BkOdmGe/mUPJyLevQvr5hYA/SNl4G7GyeSmb0P67DSwN81+pCGfXjF2/ZxCtLhkIbcA2Cci3g/TEAF0NgyVGGcYiH2QTZ8zQGIvAKp7E3Hkpm/J1TScKKzcvYuVAyRBC+vmvUXGWurye1PTW9kRP3o1V68KeoyarBpT+jN2ofzc7EYFGwN5O9IVI5xeguZBekDHGvRJ+GYA2CG3uhrc2UkXJ1Q55RwFMOXkpD/BoJC6+iPv2cAbOPtpgQOwS0irTalP+FRJFyf0/jv53g8nIua9C+tY0jVpuNLCnKNrXvoxEj5eX+pPdsOGj1sBGNfhIt4PJ+vmvQtpWNI1nLjSwvqja15eMRI+dl/qT1vDho+EFHlUU0L0f+NR+HnQapxVIbcA2NzZuhqO41BRmsy6l9TFL9Qk7duPWtjtW/NDEW7tpLw0X/rmh8Y5CkMtty3Ygbh5NKQhn15HPMPpp3aUcUMXLKiFEnlx8MvfzN4PJyJ2Iop21+EBGA8nIt4iinZ2NEP67M+lJgUsqEMXaRa66cJihyYiw0PvBXXvlavhaBy8vAmdQk4FiHr8MOimGeEmMSxERAV175Wx2SEMkq2plbjoEfr+1llSuJIGiqKfU12IrdMdTlUbS23w9i+1rbc+e4Jq3zapkuvIGAyzBTYhOwJYK9aXE+rnv6QetEturH1J/WtkeVjRhLNSjcV+UTK8buX5DIaFa98EGiIlbmq0CVwxtFqdevGVs1KNxX5RMrzuXugbZnlrGpvXQE2SramV4HBdgDD86");
    *reinterpret_cast<signed char*>(ebp8 - 37) = cl1;
    *reinterpret_cast<int32_t*>(ebp9 - 44) = edx3;
    *reinterpret_cast<void***>(ebp10 - 48) = esi5;
    al21 = _ZNKSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9__is_longEv(esi5, v11, v12, v13, v14, v15, v16, v17, v18, v19, v20);
    *reinterpret_cast<unsigned char*>(ebp22 - 13) = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(al21 ^ 0xff) & 1);
    if (!(*reinterpret_cast<unsigned char*>(ebp23 - 13) & 1)) {
        v24 = *reinterpret_cast<void***>(ebp25 - 48);
        eax26 = _ZNKSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE14__get_long_capEv(v24);
        *reinterpret_cast<void***>(ebp27 - 20) = eax26 - 1;
        v28 = *reinterpret_cast<void***>(ebp29 - 48);
        eax32 = _ZNKSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE15__get_long_sizeEv(v28, v30, v31);
        *reinterpret_cast<void***>(ebp33 - 24) = eax32;
    } else {
        *reinterpret_cast<int32_t*>(ebp34 - 20) = 10;
        v35 = *reinterpret_cast<void***>(ebp36 - 48);
        eax37 = _ZNKSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE16__get_short_sizeEv(v35);
        *reinterpret_cast<void***>(ebp38 - 24) = eax37;
    }
    if (*reinterpret_cast<int32_t*>(ebp39 - 24) == *reinterpret_cast<int32_t*>(ebp40 - 20)) {
        ecx41 = *reinterpret_cast<void***>(ebp42 - 20);
        edx43 = *reinterpret_cast<void***>(ebp44 - 24);
        esi45 = *reinterpret_cast<void***>(ebp46 - 24);
        v47 = *reinterpret_cast<void***>(ebp48 - 48);
        v49 = ecx41;
        v50 = edx43;
        v51 = esi45;
        *reinterpret_cast<int32_t*>(ebp52 - 52) = 0;
        _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9__grow_byEjjjjjj(v47, v49, 1, v50, v51, 0, 0);
        v53 = *reinterpret_cast<void***>(ebp54 - 48);
        al59 = _ZNKSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9__is_longEv(v53, v49, 1, v50, v51, 0, 0, v55, v56, v57, v58);
        *reinterpret_cast<unsigned char*>(ebp60 - 13) = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(al59 ^ 0xff) & 1);
    }
    if (!(*reinterpret_cast<unsigned char*>(ebp61 - 13) & 1)) {
        v62 = *reinterpret_cast<void***>(ebp63 - 48);
        eax64 = _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE18__get_long_pointerEv(v62, v49, 1, v50, v51, 0, 0);
        *reinterpret_cast<uint32_t*>(ebp65 - 28) = reinterpret_cast<unsigned char>(eax64) + *reinterpret_cast<uint32_t*>(ebp66 - 24);
        eax67 = reinterpret_cast<void**>(&(*reinterpret_cast<struct s239**>(ebp68 - 24))->f1);
        v69 = *reinterpret_cast<void***>(ebp70 - 48);
        _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE15__set_long_sizeEj(v69, eax67, 1, v50, v51, 0, 0, v71, v72, v73, v74);
    } else {
        v75 = *reinterpret_cast<void***>(ebp76 - 48);
        eax79 = _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE19__get_short_pointerEv(v75, v49, 1, v50, v51, 0, 0, v77, v78);
        *reinterpret_cast<uint32_t*>(ebp80 - 28) = reinterpret_cast<unsigned char>(eax79) + *reinterpret_cast<uint32_t*>(ebp81 - 24);
        eax82 = reinterpret_cast<void**>(&(*reinterpret_cast<struct s240**>(ebp83 - 24))->f1);
        v84 = *reinterpret_cast<void***>(ebp85 - 48);
        _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE16__set_short_sizeEj(v84, eax82, 1, v50, v51, 0, 0, v86, v87);
    }
    v88 = *reinterpret_cast<signed char**>(ebp89 - 28);
    _ZNSt6__ndk111char_traitsIcE6assignERcRKc(v88, &ebp90->f12, 1, v50, v51, 0, 0, v91, v92, v93, v94);
    eax95 = &(*reinterpret_cast<struct s242**>(ebp96 - 28))->f1;
    *reinterpret_cast<signed char**>(ebp97 - 28) = eax95;
    *reinterpret_cast<signed char*>(ebp98 - 29) = 0;
    _ZNSt6__ndk111char_traitsIcE6assignERcRKc(eax95, reinterpret_cast<int32_t>(ebp99) - 29, 1, v50, v51, 0, 0, v100, v101, v102, v103);
    goto v104;
}

struct s243 {
    signed char[8] pad8;
    int32_t f8;
};

struct s244 {
    signed char[8] pad8;
    void** f8;
};

void fun_4cec() {
    int32_t ecx1;
    struct s243* ebp2;
    void** edx3;
    struct s244* ebp4;
    int32_t ebp5;
    int32_t ebp6;
    int32_t ebp7;
    void** v8;
    void** v9;
    void** v10;
    void** v11;
    void** v12;
    void** v13;
    void** v14;
    void** v15;
    void** v16;
    void** v17;
    unsigned char al18;
    void** v19;
    int32_t ebp20;
    void** v21;
    void** v22;
    void** eax23;
    int32_t ebp24;
    void** v25;
    int32_t ebp26;
    void** eax27;
    int32_t ebp28;
    int32_t v29;

    ecx1 = ebp2->f8;
    edx3 = ebp4->f8;
    *reinterpret_cast<int32_t*>(ebp5 - 8) = reinterpret_cast<int32_t>(__return_address()) + reinterpret_cast<int32_t>("2mek1ZaURGnxopNZgTHe8SRFB5hX/WywPjgX+m7Rwfy/jkh+DsAju+g4PBXXvleVIM+xyKEpWlPHS5ULls3LpuAQZaOEf33lBif+xtI/jEAs6LKuDrYxF+Y99AsTdiJt6FzXQ2sefBBnpuCAhtjqQ7695VS2NUFeOd+0fR4OvY9vqYRwYXLgDLF+4U4M2eQs6LBDycRMmTZ3fVMTdiAJHJuEE7r5saTd9ymZFy8WGucsSxWGhPvzwtFlviVe5HuJ+LFgYiH1nf7z0XIZcDBW4ibgc3g8nIua9C+tY0jVpuNLCnKNrXvoxEj5eX+pPdsOGj1to4R/feUGJ/7G0j+MQCzosq4OtjEX5j30CxN2Im3oXNdDax58EGem4JdSLTQ8nIt69C+vm0jVpWNLCnLhrXvqjEj5eMepPdl+Gj1vD9Fx/vAwVhly4HLiJJyLeD4p2diJD+uw0lwbS8Fy4HBhfuAMsNnlTgywQCzoTJvJx31RNnYgCxN3hBEcmbGnuvspmN324eTSBS0gJF3ZJHiDX8P4MY6kbCZu0cP6vbByzL6C0hfWn0tvJMFD9Kyy5juZCRzOgabO5hbON5s/Gp8uR71AmPc0hEARHJuFmZarPNekhTIUvoLTb9afSDanA83D+m7TIqWTfB51z30G0KbSaRh13If+jaPCjxaSXE+rnp7xP4bmOKyxHM+ZCs7mgaY3mhbOny8/GUCaR7yEQPc0m4QRHqs9mZexP+8rfB51ztEG0KXeaRh1oIf+jpPCjxeeXE+qtf/bBm7Rw/u8YJfCfCg87eLVRZlk6ekJcSOEUGFy4HCxfuAODNnlTOiwQC3ETJvKd31RN3YgCxCbhBEe+bGnufcpmN6ZvyeTsNEP6zX6wN59epCF/vPRchlwMFeXo8Eg96JmgG19x1seTnyPhH99oQYn/ebSP47ELOiwQg62Mq/mPfUXE3YgCehc1m9rHn9AZ6bgEkTYAe5mgPehx1htfnyPHk3+89FyGXAwVVuxRj3c4LQyDQzHCKyy5juZ");
    *reinterpret_cast<int32_t*>(ebp6 - 12) = ecx1;
    *reinterpret_cast<void***>(ebp7 - 16) = edx3;
    al18 = _ZNKSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9__is_longEv(edx3, v8, v9, v10, v11, v12, v13, v14, v15, v16, v17);
    if (al18 & 1) {
        v19 = *reinterpret_cast<void***>(ebp20 - 16);
        eax23 = _ZNKSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE15__get_long_sizeEv(v19, v21, v22);
        *reinterpret_cast<void***>(ebp24 - 20) = eax23;
    } else {
        v25 = *reinterpret_cast<void***>(ebp26 - 16);
        eax27 = _ZNKSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE16__get_short_sizeEv(v25);
        *reinterpret_cast<void***>(ebp28 - 20) = eax27;
    }
    goto v29;
}

struct s245 {
    signed char[12] pad12;
    int32_t f12;
};

struct s246 {
    signed char[8] pad8;
    int32_t f8;
};

struct s247 {
    signed char[8] pad8;
    void** f8;
};

struct s248 {
    signed char[12] pad12;
    int32_t f12;
};

struct s249 {
    signed char[12] pad12;
    void** f12;
};

struct s250 {
    signed char[12] pad12;
    uint32_t f12;
};

void fun_6f1e() {
    int32_t ecx1;
    struct s245* ebp2;
    int32_t edx3;
    struct s246* ebp4;
    void** esi5;
    struct s247* ebp6;
    int32_t edi7;
    struct s248* ebp8;
    int32_t ebp9;
    int32_t ebp10;
    int32_t ebp11;
    int32_t ebp12;
    int32_t ebp13;
    void** eax14;
    void** ecx15;
    int32_t ebp16;
    void** v17;
    int32_t ebp18;
    void** v19;
    int32_t ebp20;
    void** v21;
    void** eax22;
    void** ecx23;
    struct s249* ebp24;
    void** eax25;
    void** ecx26;
    int32_t ebp27;
    uint32_t eax28;
    struct s250* ebp29;
    int32_t ebp30;
    void** eax31;
    int32_t ebp32;
    void** v33;
    int32_t ebp34;
    int32_t ebp35;
    int32_t v36;

    ecx1 = ebp2->f12;
    edx3 = ebp4->f8;
    esi5 = ebp6->f8;
    edi7 = ebp8->f12;
    *reinterpret_cast<int32_t*>(ebp9 - 16) = reinterpret_cast<int32_t>(__return_address()) + 0xc006;
    *reinterpret_cast<int32_t*>(ebp10 - 20) = ecx1;
    *reinterpret_cast<int32_t*>(ebp11 - 24) = edx3;
    *reinterpret_cast<void***>(ebp12 - 28) = esi5;
    *reinterpret_cast<int32_t*>(ebp13 - 32) = edi7;
    eax14 = _ZNKSt6__ndk16vectorIhNS_9allocatorIhEEE8max_sizeEv(esi5);
    ecx15 = *reinterpret_cast<void***>(ebp16 - 32);
    if (reinterpret_cast<unsigned char>(ecx15) > reinterpret_cast<unsigned char>(eax14)) {
        v17 = *reinterpret_cast<void***>(ebp18 - 28);
        _ZNKSt6__ndk120__vector_base_commonILb1EE20__throw_length_errorEv(v17);
    }
    v19 = *reinterpret_cast<void***>(ebp20 - 28);
    eax22 = _ZNSt6__ndk113__vector_baseIhNS_9allocatorIhEEE7__allocEv(ecx15, v19, v21);
    ecx23 = ebp24->f12;
    eax25 = _ZNSt6__ndk116allocator_traitsINS_9allocatorIhEEE8allocateERS2_j(eax22, ecx23);
    ecx26 = *reinterpret_cast<void***>(ebp27 - 28);
    *reinterpret_cast<void***>(ecx26 + 4) = eax25;
    *reinterpret_cast<void***>(ecx26) = eax25;
    eax28 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(ecx26)) + ebp29->f12;
    *reinterpret_cast<uint32_t*>(ebp30 - 36) = eax28;
    eax31 = _ZNSt6__ndk113__vector_baseIhNS_9allocatorIhEEE9__end_capEv(ecx26, ecx23);
    *eax31 = *reinterpret_cast<void**>(ebp32 - 36);
    v33 = *reinterpret_cast<void***>(ebp34 - 28);
    *reinterpret_cast<int32_t*>(ebp35 - 40) = 0;
    _ZNKSt6__ndk16vectorIhNS_9allocatorIhEEE14__annotate_newEj(v33, 0);
    goto v36;
}

/* std::initializer_list<unsigned char>::begin() const */
void** _ZNKSt16initializer_listIhE5beginEv(struct s13* a1, void** a2) {
    void** ecx3;

    ecx3 = a1->f0;
    return ecx3;
}

/* std::initializer_list<unsigned char>::end() const */
void** _ZNKSt16initializer_listIhE3endEv(struct s13* a1, void** a2) {
    void** edx3;

    edx3 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(a1->f0) + reinterpret_cast<unsigned char>(a1->f4));
    return edx3;
}

void fun_6fde();

/* std::__ndk1::vector<unsigned char, std::__ndk1::allocator<unsigned char> >::__RAII_IncreaseAnnotator::__RAII_IncreaseAnnotator(std::__ndk1::vector<unsigned char, std::__ndk1::allocator<unsigned char> > const&, unsigned int) */
void** _ZNSt6__ndk16vectorIhNS_9allocatorIhEEE24__RAII_IncreaseAnnotatorC2ERKS3_j(void* a1, void** a2, void** a3);

void _ZNSt6__ndk116allocator_traitsINS_9allocatorIhEEE25__construct_range_forwardIKhhhhEENS_9enable_ifIXaaaasr31is_trivially_move_constructibleIT0_EE5valuesr7is_sameIT1_T2_EE5valueooL_ZNS_17integral_constantIbLb1EE5valueEEntsr15__has_constructIS2_PS7_RT_EE5valueEvE4typeERS2_PSD_SI_RSC_(void** a1, void** a2, void** a3, void** a4);

/* std::__ndk1::vector<unsigned char, std::__ndk1::allocator<unsigned char> >::__RAII_IncreaseAnnotator::__done() */
void* _ZNSt6__ndk16vectorIhNS_9allocatorIhEEE24__RAII_IncreaseAnnotator6__doneEv(void* a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9);

void _ZNSt6__ndk16vectorIhNS_9allocatorIhEEE18__construct_at_endIPKhEENS_9enable_ifIXsr21__is_forward_iteratorIT_EE5valueEvE4typeES8_S8_j(void** a1, void** a2, void** a3, void** a4) {
    void* ebp5;
    void** v6;
    void** eax7;
    void** v8;

    ebp5 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4);
    fun_6fde();
    eax7 = _ZNSt6__ndk113__vector_baseIhNS_9allocatorIhEEE7__allocEv(a4, a1, v6);
    _ZNSt6__ndk16vectorIhNS_9allocatorIhEEE24__RAII_IncreaseAnnotatorC2ERKS3_j(reinterpret_cast<int32_t>(ebp5) - 24, a1, a4);
    _ZNSt6__ndk116allocator_traitsINS_9allocatorIhEEE25__construct_range_forwardIKhhhhEENS_9enable_ifIXaaaasr31is_trivially_move_constructibleIT0_EE5valuesr7is_sameIT1_T2_EE5valueooL_ZNS_17integral_constantIbLb1EE5valueEEntsr15__has_constructIS2_PS7_RT_EE5valueEvE4typeERS2_PSD_SI_RSC_(eax7, a2, a3, a1 + 4);
    _ZNSt6__ndk16vectorIhNS_9allocatorIhEEE24__RAII_IncreaseAnnotator6__doneEv(reinterpret_cast<int32_t>(ebp5) - 24, a2, a3, a1 + 4, v8, a1, a2, a3, a4);
    goto a1;
}

void fun_840e();

struct s251 {
    signed char[43798] pad43798;
    void** f43798;
};

/* void std::__ndk1::allocator_traits<std::__ndk1::allocator<unsigned char> >::construct<unsigned char>(std::__ndk1::allocator<unsigned char>&, unsigned char*) */
void _ZNSt6__ndk116allocator_traitsINS_9allocatorIhEEE9constructIhJEEEvRS2_PT_DpOT0_(void** a1, void** a2, void** a3);

/* std::__ndk1::vector<unsigned char, std::__ndk1::allocator<unsigned char> >::__construct_at_end(unsigned int) */
void _ZNSt6__ndk16vectorIhNS_9allocatorIhEEE18__construct_at_endEj(void** a1, void** a2) {
    void* ebp3;
    void** v4;
    struct s251* v5;
    void** v6;
    void** v7;
    void** v8;
    void** v9;
    void** eax10;
    void** v11;
    void** v12;
    void** eax13;
    void** v14;
    void** v15;

    ebp3 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4);
    fun_840e();
    v4 = reinterpret_cast<void**>(&v5->f43798);
    v6 = a2;
    v7 = a1;
    v8 = a1;
    eax10 = _ZNSt6__ndk113__vector_baseIhNS_9allocatorIhEEE7__allocEv(a2, a1, v9);
    v11 = eax10;
    do {
        _ZNSt6__ndk16vectorIhNS_9allocatorIhEEE24__RAII_IncreaseAnnotatorC2ERKS3_j(reinterpret_cast<int32_t>(ebp3) - 24, v8, 1);
        v12 = *reinterpret_cast<void***>(v8 + 4);
        eax13 = _ZNSt6__ndk116__to_raw_pointerIhEEPT_S2_(v12, v8, v11, v8, v7, v6, v4);
        _ZNSt6__ndk116allocator_traitsINS_9allocatorIhEEE9constructIhJEEEvRS2_PT_DpOT0_(v11, eax13, v11);
        *reinterpret_cast<void***>(v8 + 4) = *reinterpret_cast<void***>(v8 + 4) + 1;
        --a2;
        _ZNSt6__ndk16vectorIhNS_9allocatorIhEEE24__RAII_IncreaseAnnotator6__doneEv(reinterpret_cast<int32_t>(ebp3) - 24, eax13, v11, v8, v7, v6, v4, v14, v15);
    } while (reinterpret_cast<unsigned char>(a2) > reinterpret_cast<unsigned char>(0));
    goto a1;
}

struct s252 {
    signed char[8] pad8;
    int32_t f8;
};

struct s254 {
    signed char[8] pad8;
    void** f8;
};

struct s253 {
    signed char[8] pad8;
    struct s254* f8;
};

void fun_81bc() {
    int32_t ecx1;
    struct s252* ebp2;
    void** v3;
    struct s253* ebp4;
    int32_t ebp5;
    int32_t v6;

    ecx1 = ebp2->f8;
    v3 = reinterpret_cast<void**>(&ebp4->f8->f8);
    *reinterpret_cast<int32_t*>(ebp5 - 8) = ecx1;
    _ZNSt6__ndk117__compressed_pairIPNS_6vectorIhNS_9allocatorIhEEEENS2_IS4_EEE6secondEv(v3);
    goto v6;
}

struct s255 {
    signed char[16] pad16;
    int32_t f16;
};

struct s256 {
    signed char[12] pad12;
    int32_t f12;
};

struct s257 {
    signed char[8] pad8;
    int32_t f8;
};

struct s258 {
    signed char[8] pad8;
    int32_t f8;
};

struct s259 {
    signed char[12] pad12;
    int32_t f12;
};

struct s260 {
    signed char[16] pad16;
    void** f16;
};

void fun_85ae() {
    int32_t ecx1;
    struct s255* ebp2;
    int32_t edx3;
    struct s256* ebp4;
    int32_t esi5;
    struct s257* ebp6;
    int32_t edi7;
    struct s258* ebp8;
    int32_t ebx9;
    struct s259* ebp10;
    int32_t ebp11;
    void** v12;
    struct s260* ebp13;
    int32_t ebp14;
    int32_t ebp15;
    int32_t ebp16;
    int32_t ebp17;
    int32_t ebp18;
    void** v19;
    void** v20;
    void** v21;
    void** v22;
    void** v23;
    void** v24;
    void** v25;
    void** v26;
    void** eax27;
    void** v28;
    int32_t ebp29;
    void** v30;
    int32_t ebp31;
    int32_t v32;

    ecx1 = ebp2->f16;
    edx3 = ebp4->f12;
    esi5 = ebp6->f8;
    edi7 = ebp8->f8;
    ebx9 = ebp10->f12;
    *reinterpret_cast<int32_t*>(ebp11 - 28) = reinterpret_cast<int32_t>(__return_address()) + reinterpret_cast<int32_t>("~p");
    v12 = ebp13->f16;
    *reinterpret_cast<int32_t*>(ebp14 - 32) = ebx9;
    *reinterpret_cast<int32_t*>(ebp15 - 36) = ecx1;
    *reinterpret_cast<int32_t*>(ebp16 - 40) = edx3;
    *reinterpret_cast<int32_t*>(ebp17 - 44) = esi5;
    *reinterpret_cast<int32_t*>(ebp18 - 48) = edi7;
    eax27 = _ZNSt6__ndk17forwardIRKNS_6vectorIhNS_9allocatorIhEEEEEEOT_RNS_16remove_referenceIS7_E4typeE(v12, v19, v20, v21, v22, v23, v24, v25, v26);
    v28 = *reinterpret_cast<void***>(ebp29 - 48);
    v30 = *reinterpret_cast<void***>(ebp31 - 32);
    _ZNSt6__ndk116allocator_traitsINS_9allocatorINS_6vectorIhNS1_IhEEEEEEE11__constructIS4_JRKS4_EEEvNS_17integral_constantIbLb1EEERS5_PT_DpOT0_(v28, v30, eax27);
    goto v32;
}

void fun_862e();

/* std::__ndk1::vector<std::__ndk1::vector<unsigned char, std::__ndk1::allocator<unsigned char> >, std::__ndk1::allocator<std::__ndk1::vector<unsigned char, std::__ndk1::allocator<unsigned char> > > >::size() const */
void** _ZNKSt6__ndk16vectorINS0_IhNS_9allocatorIhEEEENS1_IS3_EEE4sizeEv(void** a1, void** a2, void** a3, void*** a4);

/* std::__ndk1::vector<std::__ndk1::vector<unsigned char, std::__ndk1::allocator<unsigned char> >, std::__ndk1::allocator<std::__ndk1::vector<unsigned char, std::__ndk1::allocator<unsigned char> > > >::__recommend(unsigned int) const */
void** _ZNKSt6__ndk16vectorINS0_IhNS_9allocatorIhEEEENS1_IS3_EEE11__recommendEj(void** a1, void** a2);

/* std::__ndk1::__split_buffer<std::__ndk1::vector<unsigned char, std::__ndk1::allocator<unsigned char> >, std::__ndk1::allocator<std::__ndk1::vector<unsigned char, std::__ndk1::allocator<unsigned char> > >&>::__split_buffer(unsigned int, unsigned int, std::__ndk1::allocator<std::__ndk1::vector<unsigned char, std::__ndk1::allocator<unsigned char> > >&) */
void _ZNSt6__ndk114__split_bufferINS_6vectorIhNS_9allocatorIhEEEERNS2_IS4_EEEC2EjjS6_(void** a1, void** a2, void** a3, void** a4);

/* std::__ndk1::vector<std::__ndk1::vector<unsigned char, std::__ndk1::allocator<unsigned char> >, std::__ndk1::allocator<std::__ndk1::vector<unsigned char, std::__ndk1::allocator<unsigned char> > > >::__swap_out_circular_buffer(std::__ndk1::__split_buffer<std::__ndk1::vector<unsigned char, std::__ndk1::allocator<unsigned char> >, std::__ndk1::allocator<std::__ndk1::vector<unsigned char, std::__ndk1::allocator<unsigned char> > >&>&) */
void _ZNSt6__ndk16vectorINS0_IhNS_9allocatorIhEEEENS1_IS3_EEE26__swap_out_circular_bufferERNS_14__split_bufferIS3_RS4_EE(void** a1, void** a2, void** a3, void** a4);

/* std::__ndk1::__split_buffer<std::__ndk1::vector<unsigned char, std::__ndk1::allocator<unsigned char> >, std::__ndk1::allocator<std::__ndk1::vector<unsigned char, std::__ndk1::allocator<unsigned char> > >&>::~__split_buffer() */
void _ZNSt6__ndk114__split_bufferINS_6vectorIhNS_9allocatorIhEEEERNS2_IS4_EEED2Ev(void** a1, void** a2, void** a3, void** a4);

/* void std::__ndk1::vector<std::__ndk1::vector<unsigned char, std::__ndk1::allocator<unsigned char> >, std::__ndk1::allocator<std::__ndk1::vector<unsigned char, std::__ndk1::allocator<unsigned char> > > >::__push_back_slow_path<std::__ndk1::vector<unsigned char, std::__ndk1::allocator<unsigned char> > const&>(std::__ndk1::vector<unsigned char, std::__ndk1::allocator<unsigned char> > const&) */
void _ZNSt6__ndk16vectorINS0_IhNS_9allocatorIhEEEENS1_IS3_EEE21__push_back_slow_pathIRKS3_EEvOT_(void** a1, void** a2) {
    void* ebp3;
    void** v4;
    void** v5;
    void** eax6;
    void** v7;
    void** v8;
    void*** v9;
    void** eax10;
    void** v11;
    void** eax12;
    void** v13;
    void*** v14;
    void** eax15;
    void** v16;
    void** v17;
    void** eax18;
    void** v19;
    void** v20;
    void** eax21;
    void** v22;

    ebp3 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4);
    fun_862e();
    eax6 = _ZNSt6__ndk113__vector_baseINS_6vectorIhNS_9allocatorIhEEEENS2_IS4_EEE7__allocEv(a2, a1, v4, v5);
    eax10 = _ZNKSt6__ndk16vectorINS0_IhNS_9allocatorIhEEEENS1_IS3_EEE4sizeEv(a1, v7, v8, v9);
    v11 = eax10 + 1;
    eax12 = _ZNKSt6__ndk16vectorINS0_IhNS_9allocatorIhEEEENS1_IS3_EEE11__recommendEj(a1, v11);
    eax15 = _ZNKSt6__ndk16vectorINS0_IhNS_9allocatorIhEEEENS1_IS3_EEE4sizeEv(a1, v11, v13, v14);
    _ZNSt6__ndk114__split_bufferINS_6vectorIhNS_9allocatorIhEEEERNS2_IS4_EEEC2EjjS6_(reinterpret_cast<int32_t>(ebp3) + 0xffffffd8, eax12, eax15, eax6);
    eax18 = _ZNSt6__ndk116__to_raw_pointerINS_6vectorIhNS_9allocatorIhEEEEEEPT_S6_(v16, eax12, eax15, eax6, v17);
    eax21 = _ZNSt6__ndk17forwardIRKNS_6vectorIhNS_9allocatorIhEEEEEEOT_RNS_16remove_referenceIS7_E4typeE(a2, eax12, eax15, eax6, v19, v20, eax18, eax6, eax12);
    _ZNSt6__ndk116allocator_traitsINS_9allocatorINS_6vectorIhNS1_IhEEEEEEE9constructIS4_JRKS4_EEEvRS5_PT_DpOT0_(eax6, eax18, eax21, eax6);
    v22 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp3) + 0xffffffd8);
    _ZNSt6__ndk16vectorINS0_IhNS_9allocatorIhEEEENS1_IS3_EEE26__swap_out_circular_bufferERNS_14__split_bufferIS3_RS4_EE(a1, v22, eax21, eax6);
    _ZNSt6__ndk114__split_bufferINS_6vectorIhNS_9allocatorIhEEEERNS2_IS4_EEED2Ev(reinterpret_cast<int32_t>(ebp3) + 0xffffffd8, v22, eax21, eax6);
    goto a1;
}

struct s261 {
    signed char[8] pad8;
    int32_t f8;
};

struct s262 {
    signed char[8] pad8;
    void** f8;
};

void fun_381c() {
    int32_t ecx1;
    struct s261* ebp2;
    void** v3;
    struct s262* ebp4;
    int32_t ebp5;
    int32_t v6;

    ecx1 = ebp2->f8;
    v3 = ebp4->f8;
    *reinterpret_cast<int32_t*>(ebp5 - 8) = ecx1;
    _ZNKSt6__ndk122__compressed_pair_elemINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE5__repELi0ELb0EE5__getEv(v3);
    goto v6;
}

struct s263 {
    signed char[8] pad8;
    int32_t f8;
};

struct s264 {
    signed char[8] pad8;
    void** f8;
};

void fun_3a6c() {
    int32_t ecx1;
    struct s263* ebp2;
    void** v3;
    struct s264* ebp4;
    int32_t ebp5;
    int32_t v6;

    ecx1 = ebp2->f8;
    v3 = ebp4->f8;
    *reinterpret_cast<int32_t*>(ebp5 - 8) = ecx1;
    _ZNSt6__ndk122__compressed_pair_elemINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE5__repELi0ELb0EE5__getEv(v3);
    goto v6;
}

/* char const* std::__ndk1::__to_raw_pointer<char const>(char const*) */
void** _ZNSt6__ndk116__to_raw_pointerIKcEEPT_S3_(void** a1, void** a2, void** a3) {
    return a1;
}

void fun_3b0e();

struct s265 {
    signed char[62486] pad62486;
    void** f62486;
};

/* std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::__init(char const*, unsigned int) */
void _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6__initEPKcj(void** a1, void** a2, void** a3) {
    void** eax4;
    void** v5;
    void** eax6;
    void** v7;
    void** v8;
    void** eax9;
    void** eax10;
    void** v11;
    void** v12;
    void** v13;
    void** v14;
    void** v15;
    void** v16;
    void** v17;
    struct s265* v18;
    void** v19;
    void** v20;
    void** v21;
    void** v22;
    void** v23;
    void** v24;
    void** eax25;
    void** v26;
    void** eax27;
    void** eax28;
    void** v29;

    fun_3b0e();
    eax4 = _ZNKSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE8max_sizeEv(a1);
    if (reinterpret_cast<unsigned char>(a3) > reinterpret_cast<unsigned char>(eax4)) {
        _ZNKSt6__ndk121__basic_string_commonILb1EE20__throw_length_errorEv(a1);
    }
    if (reinterpret_cast<unsigned char>(a3) >= reinterpret_cast<unsigned char>(11)) {
        eax6 = _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE11__recommendEj(a3, v5);
        eax9 = _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE7__allocEv(a1, v7, v8);
        eax10 = _ZNSt6__ndk116allocator_traitsINS_9allocatorIcEEE8allocateERS2_j(eax9, eax6 + 1);
        v11 = eax10;
        _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE18__set_long_pointerEPc(a1, v11, v12);
        _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE14__set_long_capEj(a1, eax6 + 1, v13);
        v14 = a3;
        _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE15__set_long_sizeEj(a1, v14, v15, v16, v17, a1, a1, a2, a3, &v18->f62486, a3);
    } else {
        v14 = a3;
        _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE16__set_short_sizeEj(a1, v14, v19, v20, v21, a1, a1, a2, a3);
        eax25 = _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE19__get_short_pointerEv(a1, v14, v22, v23, v24, a1, a1, a2, a3);
        v11 = eax25;
    }
    eax27 = _ZNSt6__ndk116__to_raw_pointerIcEEPT_S2_(v11, v14, v26);
    eax28 = _ZNSt6__ndk111char_traitsIcE4copyEPcPKcj(eax27, a2, a3);
    _ZNSt6__ndk111char_traitsIcE6assignERcRKc(reinterpret_cast<unsigned char>(v11) + reinterpret_cast<unsigned char>(a3), reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 - 21, a3, v29, eax28, a1, a1, a2, a3, &v18->f62486, a3);
    goto a1;
}

struct s266 {
    signed char[12] pad12;
    int32_t f12;
};

struct s267 {
    signed char[8] pad8;
    int32_t f8;
};

struct s268 {
    signed char[12] pad12;
    void** f12;
};

struct s269 {
    signed char[8] pad8;
    void** f8;
};

void fun_9bae() {
    int32_t ecx1;
    struct s266* ebp2;
    int32_t edx3;
    struct s267* ebp4;
    void** edi5;
    struct s268* ebp6;
    void** v7;
    struct s269* ebp8;
    int32_t ebp9;
    int32_t ebp10;
    int32_t v11;

    ecx1 = ebp2->f12;
    edx3 = ebp4->f8;
    edi5 = ebp6->f12;
    v7 = ebp8->f8;
    *reinterpret_cast<int32_t*>(ebp9 - 20) = ecx1;
    *reinterpret_cast<int32_t*>(ebp10 - 24) = edx3;
    _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE19__copy_assign_allocERKS5_NS_17integral_constantIbLb0EEE(v7, edi5);
    goto v11;
}

struct s270 {
    signed char[8] pad8;
    int32_t f8;
};

struct s271 {
    signed char[8] pad8;
    void** f8;
};

void fun_494c() {
    int32_t ecx1;
    struct s270* ebp2;
    void** v3;
    struct s271* ebp4;
    int32_t ebp5;
    int32_t ebp6;
    void** v7;
    void** v8;
    void** v9;
    int32_t v10;
    void** eax11;
    void** v12;
    void** v13;
    int32_t v14;

    ecx1 = ebp2->f8;
    v3 = ebp4->f8;
    *reinterpret_cast<int32_t*>(ebp5 - 8) = reinterpret_cast<int32_t>(__return_address()) + reinterpret_cast<int32_t>("P47ELOiwQg62Mq/mPfUXE3YgCehc1m9rHn9AZ6bgEkTYAe5mgPehx1htfnyPHk3+89FyGXAwVVuxRj3c4LQyDQzHCKyy5juZCRzNO/7H7N+JqIqvch9+M6OLmybzqRn+89FyGXAwVzOrq1+rnjJBOOCPSq31tW50PjEC5jissRzPmQrO5oGmN5oWzp8vPxlAmke8hED3NJuEER6rPZmWb+bDpGVfWjmh5s61ncPno/0r9Qlx/vPQVhlwMjPOfLcAU7Agf32jhif95Qb0QTuMsuY4rRqUWQKmS6zYU7AjAf7z0XIZcDBW4ibgc3g8nIn5ryf2OiZ49UemiLSLe20oEGem4yC1e73k0gbifXqQhw+lHPAHYwIqDsAgf+g4P7nXvlQU21HtzLKhDF27gX2cmbiphVEkXJxKcwSWOzVcFIt4PJy8Xi0NR6aIt+iynCpu0cP6vbByzL6C0hWTo/H7GWupFlWTPRA5kpdlfcdYbArOo4iw+2LgjO5V6FyyoQ6A57zQnIt4PC+vmvTVpWNLCnLjSXvqjaz5eMRJPdl/qj1vDhlVv/SuvH0eDRZAA1UkXJ1T+O/n0Dyci3r0L6+bSNWlY0sKcuGte+qPxoxGjhgY1yh2gK95GTTA4/0jkD8C7N1KWk3EVUpCqJJwULlPAwC+BAFDFVXW+Q0TodWqnOreebFWqDW4Q5+XQX55xu0oTN+Ci/aIgWdukMg==7ai6NPV2bXGQr0Np5ImWzUjl6PCgPeiZ1htfcSPHk58UeVSEMzf9Yw3NIDiE3kwVE57U+9AmnUmFHEK6IvfKH2TS7CCq/VbM/O9R5SdZDW14bohAkY4uN9Wm/Col7ZLu07gKfimHuWgt8iNKBQUFBQ==XP5rChOX5IfmEBCR8F2EpKo+9bwFBQUFBQUFBQUFBQU=7ai6NPV2bXGQr0Np5ImWzfPuf0Hr5r0LdugZDjgPcx53OC0MEequZmEmbiqxeTMC6+a9C8Za6kXx2RPbCqs0PKTk+lCiiFMtFNPTO23sCWh");
    *reinterpret_cast<int32_t*>(ebp6 - 12) = ecx1;
    eax11 = _ZNKSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE13__get_pointerEv(v3, v7, v8, v9, v10);
    _ZNSt6__ndk116__to_raw_pointerIKcEEPT_S3_(eax11, v12, v13);
    goto v14;
}

struct s272 {
    signed char[16] pad16;
    int32_t f16;
};

struct s273 {
    signed char[12] pad12;
    int32_t f12;
};

struct s274 {
    signed char[8] pad8;
    int32_t f8;
};

struct s275 {
    signed char[8] pad8;
    void** f8;
};

struct s276 {
    signed char[16] pad16;
    uint32_t f16;
};

struct s277 {
    signed char[16] pad16;
    void* f16;
};

struct s278 {
    signed char[16] pad16;
    void** f16;
};

struct s279 {
    signed char[12] pad12;
    int32_t f12;
};

struct s280 {
    signed char[12] pad12;
    void** f12;
};

struct s281 {
    signed char[16] pad16;
    void** f16;
};

struct s282 {
    signed char[16] pad16;
    void* f16;
};

struct s283 {
    signed char[16] pad16;
    void** f16;
};

struct s284 {
    signed char[16] pad16;
    void** f16;
};

void fun_9bee() {
    int32_t ecx1;
    struct s272* ebp2;
    int32_t edx3;
    struct s273* ebp4;
    int32_t esi5;
    struct s274* ebp6;
    void** edi7;
    struct s275* ebp8;
    int32_t ebp9;
    int32_t ebp10;
    int32_t ebp11;
    int32_t ebp12;
    int32_t ebp13;
    void** v14;
    void** v15;
    void** v16;
    void** eax17;
    int32_t ebp18;
    int32_t ebp19;
    struct s276* ebp20;
    void** v21;
    int32_t ebp22;
    void** v23;
    void** v24;
    void** v25;
    void** v26;
    void** v27;
    void** v28;
    void** eax29;
    int32_t ebp30;
    void* edx31;
    struct s277* ebp32;
    int32_t ebp33;
    void** esi34;
    int32_t ebp35;
    void** edi36;
    int32_t ebp37;
    void** ebx38;
    struct s278* ebp39;
    int32_t ebp40;
    int32_t ebp41;
    int32_t ebp42;
    struct s279* ebp43;
    void** v44;
    int32_t ebp45;
    void** v46;
    int32_t ebp47;
    void** v48;
    int32_t ebp49;
    int32_t ebp50;
    void** v51;
    int32_t ebp52;
    void** v53;
    void** v54;
    void** v55;
    void** eax56;
    void** v57;
    void** v58;
    void** eax59;
    int32_t ebp60;
    void** ecx61;
    struct s280* ebp62;
    void** edx63;
    struct s281* ebp64;
    void** v65;
    int32_t ebp66;
    int32_t eax67;
    signed char* ecx68;
    int32_t ebp69;
    struct s282* ebp70;
    int32_t ebp71;
    int32_t ebp72;
    void* ebp73;
    void** v74;
    void** v75;
    void** v76;
    void** v77;
    void** v78;
    void** v79;
    void** v80;
    void** v81;
    void** eax82;
    struct s283* ebp83;
    void** v84;
    int32_t ebp85;
    void** eax86;
    struct s284* ebp87;
    void** v88;
    int32_t ebp89;
    int32_t v90;

    ecx1 = ebp2->f16;
    edx3 = ebp4->f12;
    esi5 = ebp6->f8;
    edi7 = ebp8->f8;
    *reinterpret_cast<int32_t*>(ebp9 - 32) = reinterpret_cast<int32_t>(__return_address()) + 0x9336;
    *reinterpret_cast<int32_t*>(ebp10 - 36) = ecx1;
    *reinterpret_cast<int32_t*>(ebp11 - 40) = edx3;
    *reinterpret_cast<int32_t*>(ebp12 - 44) = esi5;
    *reinterpret_cast<void***>(ebp13 - 48) = edi7;
    eax17 = _ZNKSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE8capacityEv(edi7, v14, v15, v16);
    *reinterpret_cast<void***>(ebp18 - 16) = eax17;
    if (*reinterpret_cast<uint32_t*>(ebp19 - 16) < ebp20->f16) {
        v21 = *reinterpret_cast<void***>(ebp22 - 48);
        eax29 = _ZNKSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE4sizeEv(v21, v23, v24, v25, v26, v27, v28);
        *reinterpret_cast<void***>(ebp30 - 28) = eax29;
        edx31 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(ebp32->f16) - *reinterpret_cast<uint32_t*>(ebp33 - 16));
        esi34 = *reinterpret_cast<void***>(ebp35 - 28);
        edi36 = *reinterpret_cast<void***>(ebp37 - 28);
        ebx38 = ebp39->f16;
        *reinterpret_cast<int32_t*>(ebp40 - 56) = *reinterpret_cast<int32_t*>(ebp41 - 16);
        *reinterpret_cast<int32_t*>(ebp42 - 60) = ebp43->f12;
        v44 = *reinterpret_cast<void***>(ebp45 - 48);
        v46 = *reinterpret_cast<void***>(ebp47 - 56);
        v48 = *reinterpret_cast<void***>(ebp49 - 60);
        *reinterpret_cast<int32_t*>(ebp50 - 64) = 0;
        _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE21__grow_by_and_replaceEjjjjjjPKc(v44, v46, edx31, esi34, 0, edi36, ebx38, v48);
    } else {
        v51 = *reinterpret_cast<void***>(ebp52 - 48);
        eax56 = _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE13__get_pointerEv(v51, v53, v54, v55);
        eax59 = _ZNSt6__ndk116__to_raw_pointerIcEEPT_S2_(eax56, v57, v58);
        *reinterpret_cast<void***>(ebp60 - 20) = eax59;
        ecx61 = ebp62->f12;
        edx63 = ebp64->f16;
        v65 = *reinterpret_cast<void***>(ebp66 - 20);
        eax67 = _ZNSt6__ndk111char_traitsIcE4moveEPcPKcj(v65, ecx61, edx63);
        ecx68 = reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(*reinterpret_cast<void**>(ebp69 - 20)) + reinterpret_cast<uint32_t>(ebp70->f16));
        *reinterpret_cast<signed char*>(ebp71 - 21) = 0;
        *reinterpret_cast<int32_t*>(ebp72 - 52) = eax67;
        _ZNSt6__ndk111char_traitsIcE6assignERcRKc(ecx68, reinterpret_cast<int32_t>(ebp73) - 21, edx63, v74, v75, v76, v77, v78, v79, v80, v81);
        eax82 = ebp83->f16;
        v84 = *reinterpret_cast<void***>(ebp85 - 48);
        _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE10__set_sizeEj(v84, eax82, edx63);
        eax86 = ebp87->f16;
        v88 = *reinterpret_cast<void***>(ebp89 - 48);
        _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE27__invalidate_iterators_pastEj(v88, eax86, edx63);
    }
    goto v90;
}

struct s285 {
    signed char[8] pad8;
    int32_t f8;
};

struct s286 {
    signed char[8] pad8;
    void** f8;
};

/* std::__ndk1::__vector_base_common<true>::__vector_base_common() */
void** _ZNSt6__ndk120__vector_base_commonILb1EEC2Ev(void** a1);

struct s287 {
    int32_t f0;
    int32_t f4;
    void** f8;
};

/* std::__ndk1::__compressed_pair<unsigned char*, std::__ndk1::allocator<unsigned char> >::__compressed_pair<decltype(nullptr), true>(decltype(nullptr)&&) */
void _ZNSt6__ndk117__compressed_pairIPhNS_9allocatorIhEEEC2IDnLb1EEEOT_(void** a1, void** a2);

void fun_6e7d() {
    int32_t ecx1;
    struct s285* ebp2;
    void** edx3;
    struct s286* ebp4;
    int32_t ebp5;
    int32_t ebp6;
    int32_t ebp7;
    struct s287* eax8;
    int32_t ebp9;
    int32_t ebp10;
    void* ebp11;
    int32_t v12;

    ecx1 = ebp2->f8;
    edx3 = ebp4->f8;
    *reinterpret_cast<int32_t*>(ebp5 - 16) = reinterpret_cast<int32_t>(__return_address()) + 0xc0a7;
    *reinterpret_cast<int32_t*>(ebp6 - 20) = ecx1;
    *reinterpret_cast<void***>(ebp7 - 24) = edx3;
    _ZNSt6__ndk120__vector_base_commonILb1EEC2Ev(edx3);
    eax8 = *reinterpret_cast<struct s287**>(ebp9 - 24);
    eax8->f0 = 0;
    eax8->f4 = 0;
    *reinterpret_cast<int32_t*>(ebp10 - 12) = 0;
    _ZNSt6__ndk117__compressed_pairIPhNS_9allocatorIhEEEC2IDnLb1EEEOT_(&eax8->f8, reinterpret_cast<int32_t>(ebp11) + 0xfffffff4);
    goto v12;
}

struct s288 {
    signed char[8] pad8;
    int32_t f8;
};

void fun_72ec() {
    int32_t ecx1;
    struct s288* ebp2;
    int32_t ebp3;
    void** v4;
    void** v5;
    void** v6;
    int32_t v7;
    void** v8;
    int32_t v9;
    void** v10;
    void** v11;
    void** v12;
    void** v13;
    int32_t esi14;
    int32_t v15;

    ecx1 = ebp2->f8;
    *reinterpret_cast<int32_t*>(ebp3 - 8) = ecx1;
    _ZNSt6__ndk120__throw_length_errorEPKc(reinterpret_cast<int32_t>(__return_address()) + 0xbc38 + 0xffffc461, v4, v5, v6, v7, v8, v9);
    fun_731e();
    _ZNSt6__ndk19allocatorIhE8allocateEjPKv(v10, v11, 0, 0, v12, v13, esi14);
    goto v15;
}

struct s289 {
    signed char[8] pad8;
    int32_t f8;
};

struct s291 {
    signed char[8] pad8;
    void** f8;
};

struct s290 {
    signed char[8] pad8;
    struct s291* f8;
};

void fun_736c() {
    int32_t ecx1;
    struct s289* ebp2;
    void** v3;
    struct s290* ebp4;
    int32_t ebp5;
    int32_t v6;

    ecx1 = ebp2->f8;
    v3 = reinterpret_cast<void**>(&ebp4->f8->f8);
    *reinterpret_cast<int32_t*>(ebp5 - 8) = ecx1;
    _ZNSt6__ndk117__compressed_pairIPhNS_9allocatorIhEEE6secondEv(v3);
    goto v6;
}

struct s292 {
    signed char[12] pad12;
    int32_t f12;
};

struct s293 {
    signed char[8] pad8;
    int32_t f8;
};

struct s294 {
    signed char[12] pad12;
    void** f12;
};

struct s295 {
    signed char[8] pad8;
    void** f8;
};

void fun_731e() {
    int32_t ecx1;
    struct s292* ebp2;
    int32_t edx3;
    struct s293* ebp4;
    void** ebx5;
    struct s294* ebp6;
    void** v7;
    struct s295* ebp8;
    int32_t ebp9;
    int32_t ebp10;
    int32_t ebp11;
    int32_t v12;
    void** v13;
    void** v14;
    int32_t v15;
    int32_t v16;

    ecx1 = ebp2->f12;
    edx3 = ebp4->f8;
    ebx5 = ebp6->f12;
    v7 = ebp8->f8;
    *reinterpret_cast<int32_t*>(ebp9 - 16) = ecx1;
    *reinterpret_cast<int32_t*>(ebp10 - 20) = edx3;
    *reinterpret_cast<int32_t*>(ebp11 - 24) = 0;
    _ZNSt6__ndk19allocatorIhE8allocateEjPKv(v7, ebx5, 0, v12, v13, v14, v15);
    goto v16;
}

struct s296 {
    signed char[8] pad8;
    int32_t f8;
};

struct s298 {
    signed char[8] pad8;
    void** f8;
};

struct s297 {
    signed char[8] pad8;
    struct s298* f8;
};

void fun_739c() {
    int32_t ecx1;
    struct s296* ebp2;
    void** v3;
    struct s297* ebp4;
    int32_t ebp5;
    int32_t v6;

    ecx1 = ebp2->f8;
    v3 = reinterpret_cast<void**>(&ebp4->f8->f8);
    *reinterpret_cast<int32_t*>(ebp5 - 8) = ecx1;
    _ZNSt6__ndk117__compressed_pairIPhNS_9allocatorIhEEE5firstEv(v3);
    goto v6;
}

struct s299 {
    signed char[12] pad12;
    int32_t f12;
};

struct s300 {
    signed char[8] pad8;
    int32_t f8;
};

struct s301 {
    signed char[8] pad8;
    void** f8;
};

struct s302 {
    signed char[12] pad12;
    int32_t f12;
};

void fun_73cd() {
    int32_t ecx1;
    struct s299* ebp2;
    int32_t edx3;
    struct s300* ebp4;
    void** esi5;
    struct s301* ebp6;
    int32_t ebp7;
    int32_t ebp8;
    int32_t ebp9;
    int32_t ebp10;
    int32_t eax11;
    void** v12;
    int32_t ebp13;
    int32_t ebp14;
    int32_t eax15;
    void** v16;
    int32_t ebp17;
    int32_t ebp18;
    int32_t eax19;
    int32_t ecx20;
    int32_t ebp21;
    void** v22;
    int32_t ebp23;
    int32_t ebp24;
    int32_t eax25;
    void** v26;
    int32_t ebp27;
    int32_t ebp28;
    int32_t eax29;
    int32_t ecx30;
    int32_t ebp31;
    void** v32;
    int32_t ebp33;
    int32_t ebp34;
    int32_t eax35;
    int32_t eax36;
    struct s302* ebp37;
    void** v38;
    int32_t ebp39;
    int32_t v40;
    int32_t ebp41;
    int32_t v42;
    int32_t ebp43;
    uint32_t v44;
    int32_t ebp45;
    int32_t v46;

    ecx1 = ebp2->f12;
    edx3 = ebp4->f8;
    esi5 = ebp6->f8;
    *reinterpret_cast<int32_t*>(ebp7 - 12) = reinterpret_cast<int32_t>(__return_address()) + 0xbb57;
    *reinterpret_cast<int32_t*>(ebp8 - 16) = ecx1;
    *reinterpret_cast<int32_t*>(ebp9 - 20) = edx3;
    *reinterpret_cast<void***>(ebp10 - 24) = esi5;
    eax11 = _ZNKSt6__ndk16vectorIhNS_9allocatorIhEEE4dataEv(esi5);
    v12 = *reinterpret_cast<void***>(ebp13 - 24);
    *reinterpret_cast<int32_t*>(ebp14 - 28) = eax11;
    eax15 = _ZNKSt6__ndk16vectorIhNS_9allocatorIhEEE4dataEv(v12);
    v16 = *reinterpret_cast<void***>(ebp17 - 24);
    *reinterpret_cast<int32_t*>(ebp18 - 32) = eax15;
    eax19 = _ZNKSt6__ndk16vectorIhNS_9allocatorIhEEE8capacityEv(v16);
    ecx20 = *reinterpret_cast<int32_t*>(ebp21 - 32) + eax19;
    v22 = *reinterpret_cast<void***>(ebp23 - 24);
    *reinterpret_cast<int32_t*>(ebp24 - 36) = ecx20;
    eax25 = _ZNKSt6__ndk16vectorIhNS_9allocatorIhEEE4dataEv(v22);
    v26 = *reinterpret_cast<void***>(ebp27 - 24);
    *reinterpret_cast<int32_t*>(ebp28 - 40) = eax25;
    eax29 = _ZNKSt6__ndk16vectorIhNS_9allocatorIhEEE8capacityEv(v26);
    ecx30 = *reinterpret_cast<int32_t*>(ebp31 - 40) + eax29;
    v32 = *reinterpret_cast<void***>(ebp33 - 24);
    *reinterpret_cast<int32_t*>(ebp34 - 44) = ecx30;
    eax35 = _ZNKSt6__ndk16vectorIhNS_9allocatorIhEEE4dataEv(v32);
    eax36 = eax35 + ebp37->f12;
    v38 = *reinterpret_cast<void***>(ebp39 - 24);
    v40 = *reinterpret_cast<int32_t*>(ebp41 - 28);
    v42 = *reinterpret_cast<int32_t*>(ebp43 - 36);
    v44 = *reinterpret_cast<uint32_t*>(ebp45 - 44);
    _ZNKSt6__ndk16vectorIhNS_9allocatorIhEEE31__annotate_contiguous_containerEPKvS5_S5_S5_(v38, v40, v42, v44, eax36);
    goto v46;
}

struct s303 {
    signed char[8] pad8;
    int32_t f8;
};

struct s304 {
    signed char[8] pad8;
    void** f8;
};

void fun_798d() {
    int32_t ecx1;
    struct s303* ebp2;
    void** esi3;
    struct s304* ebp4;
    void** v5;
    int32_t ebp6;
    void** v7;
    int32_t v8;
    int32_t v9;

    ecx1 = ebp2->f8;
    esi3 = *reinterpret_cast<void***>(ebp4->f8);
    v5 = ebp4->f8;
    *reinterpret_cast<int32_t*>(ebp6 - 12) = ecx1;
    _ZNSt6__ndk113__vector_baseIhNS_9allocatorIhEEE17__destruct_at_endEPh(v5, esi3, v7, v8);
    goto v9;
}

struct s305 {
    signed char[8] pad8;
    int32_t f8;
};

struct s306 {
    signed char[8] pad8;
    void** f8;
};

void fun_783c() {
    int32_t ecx1;
    struct s305* ebp2;
    void** edx3;
    struct s306* ebp4;
    int32_t ebp5;
    int32_t ebp6;
    int32_t v7;

    ecx1 = ebp2->f8;
    edx3 = ebp4->f8;
    *reinterpret_cast<int32_t*>(ebp5 - 8) = ecx1;
    *reinterpret_cast<void***>(ebp6 - 12) = edx3;
    _ZNKSt6__ndk113__vector_baseIhNS_9allocatorIhEEE9__end_capEv(edx3);
    goto v7;
}

struct s307 {
    signed char[16] pad16;
    int32_t f16;
};

struct s308 {
    signed char[12] pad12;
    int32_t f12;
};

struct s309 {
    signed char[8] pad8;
    int32_t f8;
};

struct s310 {
    signed char[8] pad8;
    void** f8;
};

struct s311 {
    signed char[12] pad12;
    void** f12;
};

struct s312 {
    signed char[16] pad16;
    void** f16;
};

void fun_79ce() {
    int32_t ecx1;
    struct s307* ebp2;
    int32_t edx3;
    struct s308* ebp4;
    int32_t esi5;
    struct s309* ebp6;
    void** edi7;
    struct s310* ebp8;
    void** ebx9;
    struct s311* ebp10;
    int32_t ebp11;
    void** eax12;
    struct s312* ebp13;
    int32_t ebp14;
    int32_t ebp15;
    int32_t ebp16;
    void** v17;
    int32_t v18;
    int32_t v19;

    ecx1 = ebp2->f16;
    edx3 = ebp4->f12;
    esi5 = ebp6->f8;
    edi7 = ebp8->f8;
    ebx9 = ebp10->f12;
    *reinterpret_cast<int32_t*>(ebp11 - 16) = reinterpret_cast<int32_t>(__return_address()) + 0xb556;
    eax12 = ebp13->f16;
    *reinterpret_cast<int32_t*>(ebp14 - 20) = ecx1;
    *reinterpret_cast<int32_t*>(ebp15 - 24) = edx3;
    *reinterpret_cast<int32_t*>(ebp16 - 28) = esi5;
    _ZNSt6__ndk19allocatorIhE10deallocateEPhj(edi7, ebx9, eax12, v17, v18);
    goto v19;
}

struct s313 {
    signed char[8] pad8;
    int32_t f8;
};

struct s314 {
    signed char[8] pad8;
    void** f8;
};

/* std::__ndk1::__compressed_pair_elem<std::__ndk1::allocator<unsigned char>, 1, true>::__get() */
void** _ZNSt6__ndk122__compressed_pair_elemINS_9allocatorIhEELi1ELb1EE5__getEv(void** a1);

void fun_76fc() {
    int32_t ecx1;
    struct s313* ebp2;
    void** v3;
    struct s314* ebp4;
    int32_t ebp5;
    int32_t v6;

    ecx1 = ebp2->f8;
    v3 = ebp4->f8;
    *reinterpret_cast<int32_t*>(ebp5 - 8) = ecx1;
    _ZNSt6__ndk122__compressed_pair_elemINS_9allocatorIhEELi1ELb1EE5__getEv(v3);
    goto v6;
}

struct s315 {
    signed char[12] pad12;
    int32_t f12;
};

struct s316 {
    signed char[8] pad8;
    int32_t f8;
};

struct s317 {
    signed char[12] pad12;
    void** f12;
};

struct s318 {
    signed char[8] pad8;
    void** f8;
};

void fun_7abe() {
    int32_t ecx1;
    struct s315* ebp2;
    int32_t edx3;
    struct s316* ebp4;
    void** edi5;
    struct s317* ebp6;
    void** v7;
    struct s318* ebp8;
    int32_t ebp9;
    int32_t ebp10;
    void** v11;
    int32_t v12;

    ecx1 = ebp2->f12;
    edx3 = ebp4->f8;
    edi5 = ebp6->f12;
    v7 = ebp8->f8;
    *reinterpret_cast<int32_t*>(ebp9 - 28) = ecx1;
    *reinterpret_cast<int32_t*>(ebp10 - 32) = edx3;
    _ZNSt6__ndk116allocator_traitsINS_9allocatorIhEEE9__destroyIhEEvNS_17integral_constantIbLb1EEERS2_PT_(v7, edi5, v11);
    goto v12;
}

struct s319 {
    signed char[8] pad8;
    int32_t f8;
};

struct s320 {
    signed char[8] pad8;
    void** f8;
};

void fun_812d() {
    int32_t ecx1;
    struct s319* ebp2;
    void** esi3;
    struct s320* ebp4;
    void** v5;
    int32_t ebp6;
    void** v7;
    int32_t v8;
    int32_t v9;

    ecx1 = ebp2->f8;
    esi3 = *reinterpret_cast<void***>(ebp4->f8);
    v5 = ebp4->f8;
    *reinterpret_cast<int32_t*>(ebp6 - 12) = ecx1;
    _ZNSt6__ndk113__vector_baseINS_6vectorIhNS_9allocatorIhEEEENS2_IS4_EEE17__destruct_at_endEPS4_(v5, esi3, v7, v8);
    goto v9;
}

struct s321 {
    signed char[8] pad8;
    int32_t f8;
};

struct s322 {
    signed char[8] pad8;
    void** f8;
};

void fun_805d() {
    int32_t ecx1;
    struct s321* ebp2;
    void** edx3;
    struct s322* ebp4;
    int32_t ebp5;
    int32_t ebp6;
    int32_t v7;

    ecx1 = ebp2->f8;
    edx3 = ebp4->f8;
    *reinterpret_cast<int32_t*>(ebp5 - 12) = ecx1;
    *reinterpret_cast<void***>(ebp6 - 16) = edx3;
    _ZNKSt6__ndk113__vector_baseINS_6vectorIhNS_9allocatorIhEEEENS2_IS4_EEE9__end_capEv(edx3);
    __asm__("cdq ");
    goto v7;
}

struct s323 {
    signed char[16] pad16;
    int32_t f16;
};

struct s324 {
    signed char[12] pad12;
    int32_t f12;
};

struct s325 {
    signed char[8] pad8;
    int32_t f8;
};

struct s326 {
    signed char[8] pad8;
    void** f8;
};

struct s327 {
    signed char[12] pad12;
    void** f12;
};

struct s328 {
    signed char[16] pad16;
    void** f16;
};

void fun_816e() {
    int32_t ecx1;
    struct s323* ebp2;
    int32_t edx3;
    struct s324* ebp4;
    int32_t esi5;
    struct s325* ebp6;
    void** edi7;
    struct s326* ebp8;
    void** ebx9;
    struct s327* ebp10;
    int32_t ebp11;
    void** eax12;
    struct s328* ebp13;
    int32_t ebp14;
    int32_t ebp15;
    int32_t ebp16;
    void** v17;
    int32_t v18;
    int32_t v19;

    ecx1 = ebp2->f16;
    edx3 = ebp4->f12;
    esi5 = ebp6->f8;
    edi7 = ebp8->f8;
    ebx9 = ebp10->f12;
    *reinterpret_cast<int32_t*>(ebp11 - 16) = reinterpret_cast<int32_t>(__return_address()) + 0xadb6;
    eax12 = ebp13->f16;
    *reinterpret_cast<int32_t*>(ebp14 - 20) = ecx1;
    *reinterpret_cast<int32_t*>(ebp15 - 24) = edx3;
    *reinterpret_cast<int32_t*>(ebp16 - 28) = esi5;
    _ZNSt6__ndk19allocatorINS_6vectorIhNS0_IhEEEEE10deallocateEPS3_j(edi7, ebx9, eax12, v17, v18);
    goto v19;
}

struct s329 {
    signed char[12] pad12;
    int32_t f12;
};

struct s330 {
    signed char[8] pad8;
    int32_t f8;
};

struct s331 {
    signed char[12] pad12;
    void** f12;
};

struct s332 {
    signed char[8] pad8;
    void** f8;
};

void fun_828e() {
    int32_t ecx1;
    struct s329* ebp2;
    int32_t edx3;
    struct s330* ebp4;
    void** edi5;
    struct s331* ebp6;
    void** v7;
    struct s332* ebp8;
    int32_t ebp9;
    int32_t ebp10;
    void** v11;
    int32_t v12;

    ecx1 = ebp2->f12;
    edx3 = ebp4->f8;
    edi5 = ebp6->f12;
    v7 = ebp8->f8;
    *reinterpret_cast<int32_t*>(ebp9 - 28) = ecx1;
    *reinterpret_cast<int32_t*>(ebp10 - 32) = edx3;
    _ZNSt6__ndk116allocator_traitsINS_9allocatorINS_6vectorIhNS1_IhEEEEEEE9__destroyIS4_EEvNS_17integral_constantIbLb1EEERS5_PT_(v7, edi5, v11);
    goto v12;
}

struct s333 {
    signed char[12] pad12;
    int32_t f12;
};

struct s334 {
    signed char[8] pad8;
    int32_t f8;
};

struct s335 {
    signed char[12] pad12;
    void** f12;
};

struct s336 {
    signed char[8] pad8;
    void** f8;
};

/* void std::__ndk1::allocator_traits<std::__ndk1::allocator<unsigned char> >::__construct<unsigned char>(std::__ndk1::integral_constant<bool, true>, std::__ndk1::allocator<unsigned char>&, unsigned char*) */
void _ZNSt6__ndk116allocator_traitsINS_9allocatorIhEEE11__constructIhJEEEvNS_17integral_constantIbLb1EEERS2_PT_DpOT0_(void** a1, void** a2, void** a3);

void fun_84ce() {
    int32_t ecx1;
    struct s333* ebp2;
    int32_t edx3;
    struct s334* ebp4;
    void** edi5;
    struct s335* ebp6;
    void** v7;
    struct s336* ebp8;
    int32_t ebp9;
    int32_t ebp10;
    void** v11;
    int32_t v12;

    ecx1 = ebp2->f12;
    edx3 = ebp4->f8;
    edi5 = ebp6->f12;
    v7 = ebp8->f8;
    *reinterpret_cast<int32_t*>(ebp9 - 28) = ecx1;
    *reinterpret_cast<int32_t*>(ebp10 - 32) = edx3;
    _ZNSt6__ndk116allocator_traitsINS_9allocatorIhEEE11__constructIhJEEEvNS_17integral_constantIbLb1EEERS2_PT_DpOT0_(v7, edi5, v11);
    goto v12;
}

void fun_8a8e();

void _ZNSt6__ndk116allocator_traitsINS_9allocatorIhEEE25__construct_range_forwardIhhhhEENS_9enable_ifIXaaaasr31is_trivially_move_constructibleIT0_EE5valuesr7is_sameIT1_T2_EE5valueooL_ZNS_17integral_constantIbLb1EE5valueEEntsr15__has_constructIS2_PS6_RT_EE5valueEvE4typeERS2_PSC_SH_RSB_(void** a1, void** a2, void** a3, void** a4);

void _ZNSt6__ndk16vectorIhNS_9allocatorIhEEE18__construct_at_endIPhEENS_9enable_ifIXsr21__is_forward_iteratorIT_EE5valueEvE4typeES7_S7_j(void** a1, void** a2, void** a3, void** a4) {
    void* ebp5;
    void** v6;
    void** eax7;
    void** v8;

    ebp5 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4);
    fun_8a8e();
    eax7 = _ZNSt6__ndk113__vector_baseIhNS_9allocatorIhEEE7__allocEv(a4, a1, v6);
    _ZNSt6__ndk16vectorIhNS_9allocatorIhEEE24__RAII_IncreaseAnnotatorC2ERKS3_j(reinterpret_cast<int32_t>(ebp5) - 24, a1, a4);
    _ZNSt6__ndk116allocator_traitsINS_9allocatorIhEEE25__construct_range_forwardIhhhhEENS_9enable_ifIXaaaasr31is_trivially_move_constructibleIT0_EE5valuesr7is_sameIT1_T2_EE5valueooL_ZNS_17integral_constantIbLb1EE5valueEEntsr15__has_constructIS2_PS6_RT_EE5valueEvE4typeERS2_PSC_SH_RSB_(eax7, a2, a3, a1 + 4);
    _ZNSt6__ndk16vectorIhNS_9allocatorIhEEE24__RAII_IncreaseAnnotator6__doneEv(reinterpret_cast<int32_t>(ebp5) - 24, a2, a3, a1 + 4, v8, a1, a2, a3, a4);
    goto a1;
}

struct s337 {
    signed char[12] pad12;
    int32_t f12;
};

struct s338 {
    signed char[8] pad8;
    int32_t f8;
};

struct s339 {
    signed char[8] pad8;
    void** f8;
};

/* std::__ndk1::vector<std::__ndk1::vector<unsigned char, std::__ndk1::allocator<unsigned char> >, std::__ndk1::allocator<std::__ndk1::vector<unsigned char, std::__ndk1::allocator<unsigned char> > > >::max_size() const */
void** _ZNKSt6__ndk16vectorINS0_IhNS_9allocatorIhEEEENS1_IS3_EEE8max_sizeEv(void** a1);

struct s340 {
    signed char[12] pad12;
    uint32_t f12;
};

struct s341 {
    signed char[12] pad12;
    void** f12;
};

void fun_8ccd() {
    int32_t ecx1;
    struct s337* ebp2;
    int32_t edx3;
    struct s338* ebp4;
    void** esi5;
    struct s339* ebp6;
    int32_t ebp7;
    int32_t ebp8;
    int32_t ebp9;
    int32_t ebp10;
    void** eax11;
    int32_t ebp12;
    struct s340* ebp13;
    int32_t ebp14;
    void** v15;
    int32_t ebp16;
    void** v17;
    int32_t ebp18;
    uint32_t eax19;
    int32_t ebp20;
    int32_t ebp21;
    int32_t ebp22;
    int32_t ebp23;
    int32_t ebp24;
    void* ebp25;
    struct s341* ebp26;
    void*** eax27;
    int32_t ebp28;
    int32_t ebp29;
    int32_t ebp30;
    int32_t v31;

    ecx1 = ebp2->f12;
    edx3 = ebp4->f8;
    esi5 = ebp6->f8;
    *reinterpret_cast<int32_t*>(ebp7 - 28) = reinterpret_cast<int32_t>(__return_address()) + 0xa257;
    *reinterpret_cast<int32_t*>(ebp8 - 32) = ecx1;
    *reinterpret_cast<int32_t*>(ebp9 - 36) = edx3;
    *reinterpret_cast<void***>(ebp10 - 40) = esi5;
    eax11 = _ZNKSt6__ndk16vectorINS0_IhNS_9allocatorIhEEEENS1_IS3_EEE8max_sizeEv(esi5);
    *reinterpret_cast<void***>(ebp12 - 16) = eax11;
    if (ebp13->f12 > *reinterpret_cast<uint32_t*>(ebp14 - 16)) {
        v15 = *reinterpret_cast<void***>(ebp16 - 40);
        _ZNKSt6__ndk120__vector_base_commonILb1EE20__throw_length_errorEv(v15);
    }
    v17 = *reinterpret_cast<void***>(ebp18 - 40);
    eax19 = _ZNKSt6__ndk16vectorINS0_IhNS_9allocatorIhEEEENS1_IS3_EEE8capacityEv(v17);
    *reinterpret_cast<uint32_t*>(ebp20 - 20) = eax19;
    if (*reinterpret_cast<uint32_t*>(ebp21 - 20) < *reinterpret_cast<uint32_t*>(ebp22 - 16) >> 1) {
        *reinterpret_cast<int32_t*>(ebp23 - 24) = *reinterpret_cast<int32_t*>(ebp24 - 20) << 1;
        eax27 = _ZNSt6__ndk13maxIjEERKT_S3_S3_(reinterpret_cast<int32_t>(ebp25) + 0xffffffe8, &ebp26->f12);
        *reinterpret_cast<void***>(ebp28 - 12) = *eax27;
    } else {
        *reinterpret_cast<int32_t*>(ebp29 - 12) = *reinterpret_cast<int32_t*>(ebp30 - 16);
    }
    goto v31;
}

struct s342 {
    signed char[8] pad8;
    int32_t f8;
};

struct s343 {
    signed char[8] pad8;
    void** f8;
};

void fun_7fdc() {
    int32_t ecx1;
    struct s342* ebp2;
    void** v3;
    struct s343* ebp4;
    int32_t ebp5;
    int32_t v6;

    ecx1 = ebp2->f8;
    v3 = ebp4->f8;
    *reinterpret_cast<int32_t*>(ebp5 - 8) = ecx1;
    _ZNKSt6__ndk113__vector_baseINS_6vectorIhNS_9allocatorIhEEEENS2_IS4_EEE8capacityEv(v3);
    goto v6;
}

struct s344 {
    signed char[8] pad8;
    int32_t f8;
};

struct s346 {
    signed char[12] pad12;
    void** f12;
};

struct s345 {
    signed char[8] pad8;
    struct s346* f8;
};

void fun_925c() {
    int32_t ecx1;
    struct s344* ebp2;
    void** v3;
    struct s345* ebp4;
    int32_t ebp5;
    int32_t v6;

    ecx1 = ebp2->f8;
    v3 = reinterpret_cast<void**>(&ebp4->f8->f12);
    *reinterpret_cast<int32_t*>(ebp5 - 8) = ecx1;
    _ZNSt6__ndk117__compressed_pairIPNS_6vectorIhNS_9allocatorIhEEEERNS2_IS4_EEE6secondEv(v3);
    goto v6;
}

struct s347 {
    signed char[12] pad12;
    int32_t f12;
};

struct s348 {
    signed char[8] pad8;
    int32_t f8;
};

struct s349 {
    signed char[12] pad12;
    void** f12;
};

struct s350 {
    signed char[8] pad8;
    void** f8;
};

void fun_920e() {
    int32_t ecx1;
    struct s347* ebp2;
    int32_t edx3;
    struct s348* ebp4;
    void** ebx5;
    struct s349* ebp6;
    void** v7;
    struct s350* ebp8;
    int32_t ebp9;
    int32_t ebp10;
    int32_t ebp11;
    int32_t v12;
    void** v13;
    void** v14;
    int32_t v15;
    int32_t v16;

    ecx1 = ebp2->f12;
    edx3 = ebp4->f8;
    ebx5 = ebp6->f12;
    v7 = ebp8->f8;
    *reinterpret_cast<int32_t*>(ebp9 - 16) = ecx1;
    *reinterpret_cast<int32_t*>(ebp10 - 20) = edx3;
    *reinterpret_cast<int32_t*>(ebp11 - 24) = 0;
    _ZNSt6__ndk19allocatorINS_6vectorIhNS0_IhEEEEE8allocateEjPKv(v7, ebx5, 0, v12, v13, v14, v15);
    goto v16;
}

void fun_928c();

/* std::__ndk1::__compressed_pair<std::__ndk1::vector<unsigned char, std::__ndk1::allocator<unsigned char> >*, std::__ndk1::allocator<std::__ndk1::vector<unsigned char, std::__ndk1::allocator<unsigned char> > >&>::first() */
void _ZNSt6__ndk117__compressed_pairIPNS_6vectorIhNS_9allocatorIhEEEERNS2_IS4_EEE5firstEv(void** a1);

/* std::__ndk1::__split_buffer<std::__ndk1::vector<unsigned char, std::__ndk1::allocator<unsigned char> >, std::__ndk1::allocator<std::__ndk1::vector<unsigned char, std::__ndk1::allocator<unsigned char> > >&>::__end_cap() */
void** _ZNSt6__ndk114__split_bufferINS_6vectorIhNS_9allocatorIhEEEERNS2_IS4_EEE9__end_capEv(void** a1, void** a2, void** a3, void*** a4) {
    fun_928c();
    _ZNSt6__ndk117__compressed_pairIPNS_6vectorIhNS_9allocatorIhEEEERNS2_IS4_EEE5firstEv(a1 + 12);
    goto a1;
}

struct s351 {
    signed char[8] pad8;
    int32_t f8;
};

struct s352 {
    signed char[8] pad8;
    void** f8;
};

void fun_98ed() {
    int32_t ecx1;
    struct s351* ebp2;
    void** edx3;
    struct s352* ebp4;
    int32_t ebp5;
    int32_t ebp6;
    int32_t v7;

    ecx1 = ebp2->f8;
    edx3 = ebp4->f8;
    *reinterpret_cast<int32_t*>(ebp5 - 12) = ecx1;
    *reinterpret_cast<void***>(ebp6 - 16) = edx3;
    _ZNKSt6__ndk114__split_bufferINS_6vectorIhNS_9allocatorIhEEEERNS2_IS4_EEE9__end_capEv(edx3);
    __asm__("cdq ");
    goto v7;
}

struct s353 {
    signed char[8] pad8;
    int32_t f8;
};

struct s355 {
    signed char[4] pad4;
    void** f4;
};

struct s354 {
    signed char[8] pad8;
    struct s355* f8;
};

/* std::__ndk1::__compressed_pair_elem<std::__ndk1::allocator<std::__ndk1::vector<unsigned char, std::__ndk1::allocator<unsigned char> > >&, 1, false>::__get() */
void** _ZNSt6__ndk122__compressed_pair_elemIRNS_9allocatorINS_6vectorIhNS1_IhEEEEEELi1ELb0EE5__getEv(void*** a1);

void fun_93ac() {
    int32_t ecx1;
    struct s353* ebp2;
    void*** v3;
    struct s354* ebp4;
    int32_t ebp5;
    int32_t v6;

    ecx1 = ebp2->f8;
    v3 = &ebp4->f8->f4;
    *reinterpret_cast<int32_t*>(ebp5 - 8) = ecx1;
    _ZNSt6__ndk122__compressed_pair_elemIRNS_9allocatorINS_6vectorIhNS1_IhEEEEEELi1ELb0EE5__getEv(v3);
    goto v6;
}

struct s356 {
    signed char[8] pad8;
    int32_t f8;
};

struct s357 {
    signed char[8] pad8;
    void** f8;
};

void fun_967c() {
    int32_t ecx1;
    struct s356* ebp2;
    void** v3;
    struct s357* ebp4;
    int32_t ebp5;
    int32_t v6;

    ecx1 = ebp2->f8;
    v3 = ebp4->f8;
    *reinterpret_cast<int32_t*>(ebp5 - 8) = ecx1;
    _ZNSt6__ndk14moveIRNS_6vectorIhNS_9allocatorIhEEEEEEONS_16remove_referenceIT_E4typeEOS7_(v3);
    goto v6;
}

struct s358 {
    signed char[16] pad16;
    int32_t f16;
};

struct s359 {
    signed char[12] pad12;
    int32_t f12;
};

struct s360 {
    signed char[8] pad8;
    int32_t f8;
};

struct s361 {
    signed char[8] pad8;
    int32_t f8;
};

struct s362 {
    signed char[12] pad12;
    int32_t f12;
};

struct s363 {
    signed char[16] pad16;
    void** f16;
};

void fun_960e() {
    int32_t ecx1;
    struct s358* ebp2;
    int32_t edx3;
    struct s359* ebp4;
    int32_t esi5;
    struct s360* ebp6;
    int32_t edi7;
    struct s361* ebp8;
    int32_t ebx9;
    struct s362* ebp10;
    int32_t ebp11;
    void** v12;
    struct s363* ebp13;
    int32_t ebp14;
    int32_t ebp15;
    int32_t ebp16;
    int32_t ebp17;
    int32_t ebp18;
    void** eax19;
    void** v20;
    int32_t ebp21;
    void** v22;
    int32_t ebp23;
    int32_t v24;

    ecx1 = ebp2->f16;
    edx3 = ebp4->f12;
    esi5 = ebp6->f8;
    edi7 = ebp8->f8;
    ebx9 = ebp10->f12;
    *reinterpret_cast<int32_t*>(ebp11 - 28) = reinterpret_cast<int32_t>(__return_address()) + 0x9916;
    v12 = ebp13->f16;
    *reinterpret_cast<int32_t*>(ebp14 - 32) = ebx9;
    *reinterpret_cast<int32_t*>(ebp15 - 36) = ecx1;
    *reinterpret_cast<int32_t*>(ebp16 - 40) = edx3;
    *reinterpret_cast<int32_t*>(ebp17 - 44) = esi5;
    *reinterpret_cast<int32_t*>(ebp18 - 48) = edi7;
    eax19 = _ZNSt6__ndk17forwardINS_6vectorIhNS_9allocatorIhEEEEEEOT_RNS_16remove_referenceIS5_E4typeE(v12);
    v20 = *reinterpret_cast<void***>(ebp21 - 48);
    v22 = *reinterpret_cast<void***>(ebp23 - 32);
    _ZNSt6__ndk116allocator_traitsINS_9allocatorINS_6vectorIhNS1_IhEEEEEEE11__constructIS4_JS4_EEEvNS_17integral_constantIbLb1EEERS5_PT_DpOT0_(v20, v22, eax19);
    goto v24;
}

void fun_94bd();

/* std::__ndk1::remove_reference<std::__ndk1::vector<unsigned char, std::__ndk1::allocator<unsigned char> >*&>::type&& std::__ndk1::move<std::__ndk1::vector<unsigned char, std::__ndk1::allocator<unsigned char> >*&>(std::__ndk1::vector<unsigned char, std::__ndk1::allocator<unsigned char> >*&) */
void** _ZNSt6__ndk14moveIRPNS_6vectorIhNS_9allocatorIhEEEEEEONS_16remove_referenceIT_E4typeEOS8_(void** a1);

void _ZNSt6__ndk14swapIPNS_6vectorIhNS_9allocatorIhEEEEEENS_9enable_ifIXaasr21is_move_constructibleIT_EE5valuesr18is_move_assignableIS7_EE5valueEvE4typeERS7_SA_(void** a1, void** a2, void** a3, void*** a4) {
    void** eax5;
    void** eax6;

    fun_94bd();
    _ZNSt6__ndk14moveIRPNS_6vectorIhNS_9allocatorIhEEEEEEONS_16remove_referenceIT_E4typeEOS8_(a1);
    eax5 = _ZNSt6__ndk14moveIRPNS_6vectorIhNS_9allocatorIhEEEEEEONS_16remove_referenceIT_E4typeEOS8_(a2);
    *reinterpret_cast<void***>(a1) = *reinterpret_cast<void***>(eax5);
    eax6 = _ZNSt6__ndk14moveIRPNS_6vectorIhNS_9allocatorIhEEEEEEONS_16remove_referenceIT_E4typeEOS8_(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 + 0xfffffff4);
    *reinterpret_cast<void***>(a2) = *reinterpret_cast<void***>(eax6);
    goto a1;
}

struct s364 {
    signed char[16] pad16;
    int32_t f16;
};

struct s365 {
    signed char[8] pad8;
    void** f8;
};

struct s366 {
    signed char[12] pad12;
    void** f12;
};

struct s367 {
    signed char[16] pad16;
    void** f16;
};

struct s368 {
    signed char[8] pad8;
    int32_t f8;
};

void fun_9d4d() {
    int1_t zf1;
    struct s364* ebp2;
    int32_t ebp3;
    void** eax4;
    struct s365* ebp5;
    void** ecx6;
    struct s366* ebp7;
    void** v8;
    struct s367* ebp9;
    int32_t ebp10;
    int32_t ebp11;
    int32_t ebp12;
    int32_t ebp13;
    struct s368* ebp14;
    int32_t v15;

    zf1 = ebp2->f16 == 0;
    *reinterpret_cast<int32_t*>(ebp3 - 12) = reinterpret_cast<int32_t>(__return_address()) + 0x91d7;
    if (!zf1) {
        eax4 = ebp5->f8;
        ecx6 = ebp7->f12;
        v8 = ebp9->f16;
        *reinterpret_cast<void***>(ebp10 - 20) = eax4;
        fun_20e0(eax4, ecx6, v8);
        *reinterpret_cast<int32_t*>(ebp11 - 16) = *reinterpret_cast<int32_t*>(ebp12 - 20);
    } else {
        *reinterpret_cast<int32_t*>(ebp13 - 16) = ebp14->f8;
    }
    goto v15;
}

void fun_4dde();

/* std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::__grow_by_and_replace(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, char const*) */
void _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE21__grow_by_and_replaceEjjjjjjPKc(void** a1, void** a2, void* a3, void** a4, void** a5, void** a6, void** a7, void** a8) {
    void* ebp9;
    void** eax10;
    void** v11;
    void** v12;
    void** v13;
    void** eax14;
    void** v15;
    void** v16;
    void*** eax17;
    void** v18;
    void** eax19;
    void** v20;
    void** eax21;
    void** v22;
    void** eax23;
    void** v24;
    void** eax25;
    void** v26;
    void** v27;
    void** eax28;
    void** v29;
    void** eax30;
    void** v31;
    void** eax32;
    void** v33;
    void** eax34;
    void** eax35;
    void** v36;
    void** v37;
    int32_t v38;
    int32_t v39;
    signed char* v40;
    void** v41;
    void** v42;
    int32_t v43;
    int32_t v44;

    ebp9 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4);
    fun_4dde();
    eax10 = _ZNKSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE8max_sizeEv(a1);
    if (reinterpret_cast<uint32_t>(a3) > reinterpret_cast<unsigned char>(eax10) - reinterpret_cast<unsigned char>(a2) - 1) {
        _ZNKSt6__ndk121__basic_string_commonILb1EE20__throw_length_errorEv(a1);
    }
    eax14 = _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE13__get_pointerEv(a1, v11, v12, v13);
    if (reinterpret_cast<unsigned char>(a2) >= reinterpret_cast<unsigned char>((reinterpret_cast<unsigned char>(eax10) >> 1) - 16)) {
        v15 = eax10 - 1;
    } else {
        v16 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp9) + 0xffffffe0);
        eax17 = _ZNSt6__ndk13maxIjEERKT_S3_S3_(reinterpret_cast<int32_t>(ebp9) + 0xffffffe4, v16);
        v18 = *eax17;
        eax19 = _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE11__recommendEj(v18, v16);
        v15 = eax19;
    }
    eax21 = _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE7__allocEv(a1, v16, v20);
    v22 = v15 + 1;
    eax23 = _ZNSt6__ndk116allocator_traitsINS_9allocatorIcEEE8allocateERS2_j(eax21, v22);
    _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE26__invalidate_all_iteratorsEv(a1, v22);
    if (a5) {
        eax25 = _ZNSt6__ndk116__to_raw_pointerIcEEPT_S2_(eax23, v22, v24);
        v26 = eax25;
        eax28 = _ZNSt6__ndk116__to_raw_pointerIcEEPT_S2_(eax14, v22, v27);
        v22 = eax28;
        v29 = a5;
        _ZNSt6__ndk111char_traitsIcE4copyEPcPKcj(v26, v22, v29);
    }
    if (a7) {
        eax30 = _ZNSt6__ndk116__to_raw_pointerIcEEPT_S2_(eax23, v22, v29);
        v22 = a8;
        v29 = a7;
        _ZNSt6__ndk111char_traitsIcE4copyEPcPKcj(reinterpret_cast<unsigned char>(eax30) + reinterpret_cast<unsigned char>(a5), v22, v29);
    }
    v31 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(a4) - reinterpret_cast<unsigned char>(a6) - reinterpret_cast<unsigned char>(a5));
    if (v31) {
        eax32 = _ZNSt6__ndk116__to_raw_pointerIcEEPT_S2_(eax23, v22, v29);
        v33 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(eax32) + reinterpret_cast<unsigned char>(a5) + reinterpret_cast<unsigned char>(a7));
        eax34 = _ZNSt6__ndk116__to_raw_pointerIcEEPT_S2_(eax14, v22, v29);
        v22 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(eax34) + reinterpret_cast<unsigned char>(a5) + reinterpret_cast<unsigned char>(a6));
        v29 = v31;
        _ZNSt6__ndk111char_traitsIcE4copyEPcPKcj(v33, v22, v29);
    }
    if (a2 + 1 != 11) {
        eax35 = _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE7__allocEv(a1, v22, v29);
        v29 = a2 + 1;
        _ZNSt6__ndk116allocator_traitsINS_9allocatorIcEEE10deallocateERS2_Pcj(eax35, eax14, v29);
    }
    _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE18__set_long_pointerEPc(a1, eax23, v29);
    _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE14__set_long_capEj(a1, v15 + 1, v29);
    _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE15__set_long_sizeEj(a1, reinterpret_cast<unsigned char>(a5) + reinterpret_cast<unsigned char>(a7) + reinterpret_cast<unsigned char>(v31), v29, v36, v37, v33, v26, v15, a1, a5, a6, a1, reinterpret_cast<unsigned char>(a5) + reinterpret_cast<unsigned char>(a7) + reinterpret_cast<unsigned char>(v31), v29, v38, v39, v33, v26, v15, a1, a5, a6);
    v40 = reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(ebp9) - 41);
    _ZNSt6__ndk111char_traitsIcE6assignERcRKc(reinterpret_cast<unsigned char>(eax23) + reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(a5) + reinterpret_cast<unsigned char>(a7) + reinterpret_cast<unsigned char>(v31)), v40, v29, v41, v42, v33, v26, v15, a1, a5, a6, reinterpret_cast<unsigned char>(eax23) + reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(a5) + reinterpret_cast<unsigned char>(a7) + reinterpret_cast<unsigned char>(v31)), v40, v29, v43, v44, v33, v26, v15, a1, a5, a6);
    goto a1;
}

struct s369 {
    signed char[64] pad64;
    int32_t f64;
};

void fun_20e0(void** a1, void** a2, void** a3) {
    struct s369* ebx4;

    goto ebx4->f64;
}

struct s370 {
    signed char[12] pad12;
    int32_t f12;
};

struct s371 {
    signed char[8] pad8;
    int32_t f8;
};

struct s372 {
    signed char[8] pad8;
    void** f8;
};

void fun_a47d() {
    int32_t ecx1;
    struct s370* ebp2;
    int32_t edx3;
    struct s371* ebp4;
    void** v5;
    struct s372* ebp6;
    int32_t ebp7;
    int32_t ebp8;
    void** v9;
    void** v10;
    void** v11;
    int32_t v12;
    int32_t v13;

    ecx1 = ebp2->f12;
    edx3 = ebp4->f8;
    v5 = ebp6->f8;
    *reinterpret_cast<int32_t*>(ebp7 - 12) = ecx1;
    *reinterpret_cast<int32_t*>(ebp8 - 16) = edx3;
    _ZNKSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE4dataEv(v5, v9, v10, v11, v12);
    goto v13;
}

struct s373 {
    signed char[8] pad8;
    int32_t f8;
};

struct s374 {
    signed char[8] pad8;
    void** f8;
};

void fun_35ec() {
    int32_t ecx1;
    struct s373* ebp2;
    void** edx3;
    struct s374* ebp4;
    int32_t ebp5;
    int32_t ebp6;
    int32_t ebp7;
    void** v8;
    void** v9;
    void** v10;
    void** v11;
    void** v12;
    void** v13;
    void** v14;
    void** v15;
    void** v16;
    void** v17;
    unsigned char al18;
    void** v19;
    int32_t ebp20;
    void** v21;
    void** v22;
    void** eax23;
    void** v24;
    int32_t ebp25;
    int32_t ebp26;
    void** v27;
    void** v28;
    void** v29;
    void** v30;
    void** v31;
    void** v32;
    void** eax33;
    void** v34;
    int32_t ebp35;
    int32_t ebp36;
    void** eax37;
    void** v38;
    int32_t ebp39;
    void** v40;
    int32_t ebp41;
    int32_t v42;

    ecx1 = ebp2->f8;
    edx3 = ebp4->f8;
    *reinterpret_cast<int32_t*>(ebp5 - 8) = reinterpret_cast<int32_t>(__return_address()) + 0xf938;
    *reinterpret_cast<int32_t*>(ebp6 - 12) = ecx1;
    *reinterpret_cast<void***>(ebp7 - 16) = edx3;
    al18 = _ZNKSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9__is_longEv(edx3, v8, v9, v10, v11, v12, v13, v14, v15, v16, v17);
    if (al18 & 1) {
        v19 = *reinterpret_cast<void***>(ebp20 - 16);
        eax23 = _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE7__allocEv(v19, v21, v22);
        v24 = *reinterpret_cast<void***>(ebp25 - 16);
        *reinterpret_cast<void***>(ebp26 - 20) = eax23;
        eax33 = _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE18__get_long_pointerEv(v24, v27, v28, v29, v30, v31, v32);
        v34 = *reinterpret_cast<void***>(ebp35 - 16);
        *reinterpret_cast<void***>(ebp36 - 24) = eax33;
        eax37 = _ZNKSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE14__get_long_capEv(v34);
        v38 = *reinterpret_cast<void***>(ebp39 - 20);
        v40 = *reinterpret_cast<void***>(ebp41 - 24);
        _ZNSt6__ndk116allocator_traitsINS_9allocatorIcEEE10deallocateERS2_Pcj(v38, v40, eax37);
    }
    goto v42;
}

void _Unwind_Resume(struct s6* a1) {
    void* ebp2;
    void** ecx3;
    int1_t zf4;
    void** eax5;
    void** v6;
    void** v7;
    void** v8;
    void* eax9;
    int32_t v10;
    int32_t v11;

    ebp2 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4);
    __x86_get_pc_thunk_bx();
    uw_init_context_1(__return_address());
    ecx3 = reinterpret_cast<void**>(32);
    zf4 = a1->f12 == 0;
    while (ecx3) {
        --ecx3;
    }
    if (!zf4) {
        eax5 = _Unwind_ForcedUnwind_Phase2();
    } else {
        eax5 = _Unwind_RaiseException_Phase2();
    }
    if (eax5 != 7) {
        fun_21e0(v6, v7, v8);
    }
    eax9 = uw_install_context_1(ecx3);
    _Unwind_DebugHook(v10, v11, eax9, eax9);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(ebp2) + reinterpret_cast<uint32_t>(eax9) + 4) = v11;
    goto *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(ebp2) + reinterpret_cast<uint32_t>(eax9) + 4);
}

struct s375 {
    signed char[8] pad8;
    int32_t f8;
};

struct s376 {
    signed char[12] pad12;
    int32_t f12;
};

struct s377 {
    signed char[12] pad12;
    void** f12;
};

/* std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string() */
void _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2Ev(void** a1);

struct s378 {
    signed char[12] pad12;
    void** f12;
};

struct s379 {
    signed char[12] pad12;
    void** f12;
};

struct s380 {
    signed char[12] pad12;
    void** f12;
};

struct s381 {
    signed char[4824] pad4824;
    void** f4824;
};

struct s382 {
    signed char[4824] pad4824;
    void** f4824;
};

void fun_a07e() {
    int32_t ecx1;
    struct s375* ebp2;
    int32_t esi3;
    struct s376* ebp4;
    void** v5;
    struct s377* ebp6;
    int32_t ebp7;
    int32_t ebp8;
    int32_t ebp9;
    int32_t ebp10;
    void** v11;
    void** v12;
    void** v13;
    void** v14;
    void** v15;
    void** v16;
    void** eax17;
    int32_t ebp18;
    int32_t ebp19;
    int32_t ebp20;
    int32_t ebp21;
    int32_t ebp22;
    void** v23;
    int32_t ebp24;
    int32_t ecx25;
    int32_t ebp26;
    int32_t ebp27;
    int32_t ebp28;
    void** ecx29;
    int32_t ebp30;
    void** v31;
    struct s378* ebp32;
    void** v33;
    int32_t v34;
    unsigned char* eax35;
    int1_t zf36;
    int32_t ebp37;
    void** eax38;
    struct s379* ebp39;
    int32_t ebp40;
    int32_t v41;
    unsigned char* eax42;
    uint32_t v43;
    int32_t v44;
    unsigned char al45;
    int32_t ebp46;
    int32_t ebp47;
    int32_t ebp48;
    int32_t ebp49;
    void** ecx50;
    int32_t ebp51;
    void** v52;
    struct s380* ebp53;
    int32_t v54;
    unsigned char* eax55;
    unsigned char dl56;
    int32_t eax57;
    int32_t ebp58;
    int32_t ebp59;
    int32_t ebp60;
    int32_t ebp61;
    int32_t ebp62;
    int32_t ebp63;
    int32_t ebp64;
    int32_t ebp65;
    int32_t esi66;
    int32_t ebp67;
    void** v68;
    int32_t ebp69;
    int32_t ebp70;
    int32_t ebp71;
    int32_t v72;
    signed char al73;
    int32_t ebp74;
    int32_t ebp75;
    int32_t ebp76;
    int32_t ebp77;
    uint32_t eax78;
    int32_t ebp79;
    int32_t ebp80;
    int32_t ebp81;
    uint32_t ecx82;
    int32_t ebp83;
    int32_t ebp84;
    int32_t ebp85;
    uint32_t edx86;
    int32_t ebp87;
    int32_t ebp88;
    int32_t ebp89;
    int32_t ebp90;
    int32_t ebp91;
    int32_t ebp92;
    int32_t ebp93;
    void** v94;
    int32_t ebp95;
    int32_t v96;
    int32_t ebp97;
    int32_t ebp98;
    int32_t ebp99;
    int32_t ebp100;
    int32_t ebp101;
    int32_t ebp102;
    int32_t ebp103;
    int32_t esi104;
    int32_t ebp105;
    void** v106;
    int32_t ebp107;
    int32_t ebp108;
    int32_t ebp109;
    int32_t v110;
    signed char al111;
    int32_t ebp112;
    int32_t ebp113;
    int32_t ebp114;
    int32_t ebp115;
    uint32_t eax116;
    int32_t ebp117;
    int32_t ebp118;
    int32_t ebp119;
    uint32_t ecx120;
    int32_t ebp121;
    int32_t ebp122;
    int32_t ebp123;
    int32_t ebp124;
    int32_t ebp125;
    int32_t ebp126;
    int32_t ebp127;
    int32_t ebp128;
    void** v129;
    int32_t ebp130;
    int32_t v131;
    int32_t ebp132;
    int32_t ebp133;
    int32_t ebp134;
    int32_t ebp135;
    void** v136;
    int32_t ebp137;
    int32_t v138;
    void** v139;
    void** v140;
    int32_t v141;

    ecx1 = ebp2->f8;
    esi3 = ebp4->f12;
    v5 = ebp6->f12;
    *reinterpret_cast<int32_t*>(ebp7 - 48) = reinterpret_cast<int32_t>(__return_address()) + 0x8ea6;
    *reinterpret_cast<int32_t*>(ebp8 - 52) = ecx1;
    *reinterpret_cast<int32_t*>(ebp9 - 56) = ecx1;
    *reinterpret_cast<int32_t*>(ebp10 - 60) = esi3;
    eax17 = _ZNKSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE4sizeEv(v5, v11, v12, v13, v14, v15, v16);
    *reinterpret_cast<void***>(ebp18 - 16) = eax17;
    *reinterpret_cast<int32_t*>(ebp19 - 20) = 0;
    *reinterpret_cast<int32_t*>(ebp20 - 24) = 0;
    *reinterpret_cast<int32_t*>(ebp21 - 28) = 0;
    *reinterpret_cast<signed char*>(ebp22 - 36) = 0;
    v23 = *reinterpret_cast<void***>(ebp24 - 52);
    _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2Ev(v23);
    while (1) {
        ecx25 = *reinterpret_cast<int32_t*>(ebp26 - 16);
        *reinterpret_cast<int32_t*>(ebp27 - 16) = ecx25 - 1;
        *reinterpret_cast<signed char*>(ebp28 - 61) = 0;
        if (ecx25 && (ecx29 = *reinterpret_cast<void***>(ebp30 - 28), v31 = ebp32->f12, v33 = ecx29, eax35 = _ZNKSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEixEj(v31, v33, 0, v34), zf36 = static_cast<int32_t>(reinterpret_cast<signed char>(*eax35)) == 61, *reinterpret_cast<signed char*>(ebp37 - 61) = 0, !zf36)) {
            eax38 = ebp39->f12;
            v33 = *reinterpret_cast<void***>(ebp40 - 28);
            eax42 = _ZNKSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEixEj(eax38, v33, 0, v41);
            v43 = *eax42;
            al45 = _ZL9is_base64h(v43, v33, 0, v44);
            *reinterpret_cast<unsigned char*>(ebp46 - 62) = al45;
            *reinterpret_cast<signed char*>(ebp47 - 61) = *reinterpret_cast<signed char*>(ebp48 - 62);
        }
        if (!(*reinterpret_cast<unsigned char*>(ebp49 - 61) & 1)) 
            break;
        ecx50 = *reinterpret_cast<void***>(ebp51 - 28);
        v52 = ebp53->f12;
        v33 = ecx50;
        eax55 = _ZNKSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEixEj(v52, v33, 0, v54);
        dl56 = *eax55;
        eax57 = *reinterpret_cast<int32_t*>(ebp58 - 20);
        *reinterpret_cast<int32_t*>(ebp59 - 20) = eax57 + 1;
        *reinterpret_cast<unsigned char*>(ebp60 + eax57 - 32) = dl56;
        *reinterpret_cast<int32_t*>(ebp61 - 28) = *reinterpret_cast<int32_t*>(ebp62 - 28) + 1;
        if (*reinterpret_cast<int32_t*>(ebp63 - 20) == 4) {
            *reinterpret_cast<int32_t*>(ebp64 - 20) = 0;
            while (*reinterpret_cast<int32_t*>(ebp65 - 20) < 4) {
                esi66 = *reinterpret_cast<int32_t*>(ebp67 - 20);
                v68 = reinterpret_cast<void**>(&(*reinterpret_cast<struct s381**>(ebp69 - 48))->f4824);
                v33 = reinterpret_cast<void**>(static_cast<int32_t>(*reinterpret_cast<signed char*>(ebp70 + esi66 - 32)));
                *reinterpret_cast<int32_t*>(ebp71 - 68) = 0;
                al73 = _ZNKSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE4findEcj(v68, v33, 0, v72);
                *reinterpret_cast<signed char*>(ebp74 + *reinterpret_cast<int32_t*>(ebp75 - 20) - 32) = al73;
                *reinterpret_cast<int32_t*>(ebp76 - 20) = *reinterpret_cast<int32_t*>(ebp77 - 20) + 1;
            }
            eax78 = (static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(ebp79 - 32)) << 2) + (reinterpret_cast<int32_t>(static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(ebp80 - 31)) & 48) >> 4);
            *reinterpret_cast<signed char*>(ebp81 - 35) = *reinterpret_cast<signed char*>(&eax78);
            ecx82 = ((static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(ebp83 - 31)) & 15) << 4) + (reinterpret_cast<int32_t>(static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(ebp84 - 30)) & 60) >> 2);
            *reinterpret_cast<signed char*>(ebp85 - 34) = *reinterpret_cast<signed char*>(&ecx82);
            edx86 = ((static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(ebp87 - 30)) & 3) << 6) + *reinterpret_cast<unsigned char*>(ebp88 - 29);
            *reinterpret_cast<signed char*>(ebp89 - 33) = *reinterpret_cast<signed char*>(&edx86);
            *reinterpret_cast<int32_t*>(ebp90 - 20) = 0;
            while (*reinterpret_cast<int32_t*>(ebp91 - 20) < 3) {
                v33 = reinterpret_cast<void**>(static_cast<int32_t>(*reinterpret_cast<signed char*>(ebp92 + *reinterpret_cast<int32_t*>(ebp93 - 20) - 35)));
                v94 = *reinterpret_cast<void***>(ebp95 - 52);
                _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEpLEc(v94, v33, 0, v96);
                *reinterpret_cast<int32_t*>(ebp97 - 20) = *reinterpret_cast<int32_t*>(ebp98 - 20) + 1;
            }
            *reinterpret_cast<int32_t*>(ebp99 - 20) = 0;
        }
    }
    if (*reinterpret_cast<int32_t*>(ebp100 - 20)) {
        *reinterpret_cast<int32_t*>(ebp101 - 24) = 0;
        while (*reinterpret_cast<int32_t*>(ebp102 - 24) < *reinterpret_cast<int32_t*>(ebp103 - 20)) {
            esi104 = *reinterpret_cast<int32_t*>(ebp105 - 24);
            v106 = reinterpret_cast<void**>(&(*reinterpret_cast<struct s382**>(ebp107 - 48))->f4824);
            v33 = reinterpret_cast<void**>(static_cast<int32_t>(*reinterpret_cast<signed char*>(ebp108 + esi104 - 32)));
            *reinterpret_cast<int32_t*>(ebp109 - 72) = 0;
            al111 = _ZNKSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE4findEcj(v106, v33, 0, v110);
            *reinterpret_cast<signed char*>(ebp112 + *reinterpret_cast<int32_t*>(ebp113 - 24) - 32) = al111;
            *reinterpret_cast<int32_t*>(ebp114 - 24) = *reinterpret_cast<int32_t*>(ebp115 - 24) + 1;
        }
        eax116 = (static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(ebp117 - 32)) << 2) + (reinterpret_cast<int32_t>(static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(ebp118 - 31)) & 48) >> 4);
        *reinterpret_cast<signed char*>(ebp119 - 35) = *reinterpret_cast<signed char*>(&eax116);
        ecx120 = ((static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(ebp121 - 31)) & 15) << 4) + (reinterpret_cast<int32_t>(static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(ebp122 - 30)) & 60) >> 2);
        *reinterpret_cast<signed char*>(ebp123 - 34) = *reinterpret_cast<signed char*>(&ecx120);
        *reinterpret_cast<int32_t*>(ebp124 - 24) = 0;
        while (*reinterpret_cast<int32_t*>(ebp125 - 24) < *reinterpret_cast<int32_t*>(ebp126 - 20) - 1) {
            v33 = reinterpret_cast<void**>(static_cast<int32_t>(*reinterpret_cast<signed char*>(ebp127 + *reinterpret_cast<int32_t*>(ebp128 - 24) - 35)));
            v129 = *reinterpret_cast<void***>(ebp130 - 52);
            _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEpLEc(v129, v33, 0, v131);
            *reinterpret_cast<int32_t*>(ebp132 - 24) = *reinterpret_cast<int32_t*>(ebp133 - 24) + 1;
        }
    }
    *reinterpret_cast<signed char*>(ebp134 - 36) = 1;
    if (!(*reinterpret_cast<unsigned char*>(ebp135 - 36) & 1)) {
        v136 = *reinterpret_cast<void***>(ebp137 - 52);
        _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(v136, v33, 0, v138, v139, v140);
    }
    goto v141;
}

struct s383 {
    signed char[8] pad8;
    signed char f8;
};

struct s384 {
    signed char[8] pad8;
    unsigned char f8;
};

struct s385 {
    signed char[8] pad8;
    unsigned char f8;
};

struct s386 {
    signed char[8] pad8;
    unsigned char f8;
};

void fun_a3ac() {
    signed char cl1;
    struct s383* ebp2;
    uint32_t v3;
    struct s384* ebp4;
    int32_t ebp5;
    int32_t eax6;
    int32_t ebp7;
    int1_t zf8;
    struct s385* ebp9;
    int32_t ebp10;
    int32_t ebp11;
    struct s386* ebp12;
    int32_t v13;

    cl1 = ebp2->f8;
    v3 = ebp4->f8;
    *reinterpret_cast<signed char*>(ebp5 - 5) = cl1;
    eax6 = fun_2140(v3);
    *reinterpret_cast<signed char*>(ebp7 - 6) = 1;
    if (!eax6 && (zf8 = static_cast<uint32_t>(ebp9->f8) == 43, *reinterpret_cast<signed char*>(ebp10 - 6) = 1, !zf8)) {
        *reinterpret_cast<unsigned char*>(ebp11 - 6) = reinterpret_cast<uint1_t>(static_cast<uint32_t>(ebp12->f8) == 47);
    }
    goto v13;
}

struct s387 {
    signed char[16] pad16;
    int32_t f16;
};

struct s388 {
    signed char[12] pad12;
    signed char f12;
};

struct s389 {
    signed char[8] pad8;
    int32_t f8;
};

struct s390 {
    signed char[8] pad8;
    void** f8;
};

struct s391 {
    signed char[12] pad12;
    signed char f12;
};

struct s392 {
    signed char[16] pad16;
    void** f16;
};

void fun_a4be() {
    int32_t ecx1;
    struct s387* ebp2;
    signed char dl3;
    struct s388* ebp4;
    int32_t esi5;
    struct s389* ebp6;
    void** edi7;
    struct s390* ebp8;
    int32_t ebp9;
    int32_t ebp10;
    int32_t ebp11;
    int32_t ebp12;
    int32_t ebp13;
    void** v14;
    void** v15;
    void** v16;
    int32_t v17;
    void** eax18;
    void** v19;
    int32_t ebp20;
    int32_t ebp21;
    void** v22;
    void** v23;
    void** v24;
    void** v25;
    void** v26;
    void** v27;
    void** eax28;
    signed char dl29;
    struct s391* ebp30;
    void** ecx31;
    struct s392* ebp32;
    void** v33;
    int32_t ebp34;
    int32_t v35;
    int32_t v36;

    ecx1 = ebp2->f16;
    dl3 = ebp4->f12;
    esi5 = ebp6->f8;
    edi7 = ebp8->f8;
    *reinterpret_cast<int32_t*>(ebp9 - 16) = reinterpret_cast<int32_t>(__return_address()) + 0x8a66;
    *reinterpret_cast<int32_t*>(ebp10 - 20) = ecx1;
    *reinterpret_cast<signed char*>(ebp11 - 21) = dl3;
    *reinterpret_cast<int32_t*>(ebp12 - 28) = esi5;
    *reinterpret_cast<void***>(ebp13 - 32) = edi7;
    eax18 = _ZNKSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE4dataEv(edi7, v14, v15, v16, v17);
    v19 = *reinterpret_cast<void***>(ebp20 - 32);
    *reinterpret_cast<void***>(ebp21 - 36) = eax18;
    eax28 = _ZNKSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE4sizeEv(v19, v22, v23, v24, v25, v26, v27);
    dl29 = ebp30->f12;
    ecx31 = ebp32->f16;
    v33 = *reinterpret_cast<void***>(ebp34 - 36);
    v35 = dl29;
    _ZNSt6__ndk110__str_findIcjNS_11char_traitsIcEELj4294967295EEET0_PKT_S3_S4_S3_(v33, eax28, *reinterpret_cast<signed char*>(&v35), ecx31);
    goto v36;
}

void fun_a62d();

/* std::__ndk1::char_traits<char>::to_int_type(char) */
uint32_t _ZNSt6__ndk111char_traitsIcE11to_int_typeEc(unsigned char a1);

int32_t fun_2030(void* a1, uint32_t a2, void* a3);

/* std::__ndk1::char_traits<char>::find(char const*, unsigned int, char const&) */
int32_t _ZNSt6__ndk111char_traitsIcE4findEPKcjRS2_(void* a1, void* a2, signed char* a3) {
    int32_t v4;
    uint32_t eax5;

    fun_a62d();
    if (a2) {
        v4 = *a3;
        eax5 = _ZNSt6__ndk111char_traitsIcE11to_int_typeEc(*reinterpret_cast<unsigned char*>(&v4));
        fun_2030(a1, eax5, a2);
    }
    goto a1;
}

/* std::__ndk1::char_traits<char>::to_int_type(char) */
uint32_t _ZNSt6__ndk111char_traitsIcE11to_int_typeEc(unsigned char a1) {
    return static_cast<uint32_t>(a1);
}

struct s393 {
    signed char[20] pad20;
    int32_t f20;
};

int32_t fun_2030(void* a1, uint32_t a2, void* a3) {
    struct s393* ebx4;

    goto ebx4->f20;
}

/* __x86.get_pc_thunk.bx */
void** __x86_get_pc_thunk_bx() {
    void** eax1;

    return eax1;
}

int32_t _Unwind_GetCFA(struct s29* a1, struct s29* a2, void** a3, void** a4) {
    return a1->f72;
}

int32_t _Unwind_GetTextRelBase(struct s20* a1) {
    return a1->f84;
}

/* __x86.get_pc_thunk.cx */
void __x86_get_pc_thunk_cx() {
    return;
}

struct s394 {
    signed char[68] pad68;
    int32_t f68;
};

int32_t fun_20f0(int32_t a1, int32_t a2, void** a3, void** a4) {
    struct s394* ebx5;

    goto ebx5->f68;
}

struct s395 {
    int32_t f0;
    int32_t f4;
    signed char[4] pad12;
    int32_t f12;
    uint32_t f16;
};

void** _Unwind_RaiseException(struct s395* a1) {
    void* ebp2;
    int32_t ecx3;
    void** esi4;
    struct s29* v5;
    void** eax6;
    int32_t v7;
    int32_t v8;
    int32_t v9;
    int32_t eax10;
    void** eax11;
    int32_t eax12;
    void** ecx13;
    uint32_t v14;
    void* eax15;
    int32_t v16;
    int32_t v17;

    ebp2 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4);
    __x86_get_pc_thunk_bx();
    uw_init_context_1(__return_address());
    ecx3 = 32;
    while (ecx3) {
        --ecx3;
    }
    esi4 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp2) + 0xffffff28);
    while (v5 = reinterpret_cast<struct s29*>(reinterpret_cast<int32_t>(ebp2) - 0x158), eax6 = uw_frame_state_for(), eax6 != 5) {
        if (eax6) 
            goto addr_bf3a_7;
        if (v7) {
            v8 = a1->f4;
            v9 = a1->f0;
            eax10 = reinterpret_cast<int32_t>(v7(1, 1, v9, v8, a1, v5, esi4, esi4));
            if (eax10 == 6) 
                goto addr_bf8c_10;
            if (eax10 != 8) 
                goto addr_bf80_12;
        }
        uw_update_context();
    }
    eax11 = reinterpret_cast<void**>(5);
    addr_c027_15:
    return eax11;
    addr_bf3a_7:
    eax11 = reinterpret_cast<void**>(3);
    goto addr_c027_15;
    addr_bf8c_10:
    a1->f12 = 0;
    eax12 = _Unwind_GetCFA(v5, v5, esi4, esi4);
    ecx13 = reinterpret_cast<void**>(32);
    a1->f16 = eax12 - (v14 >> 31);
    while (ecx13) {
        --ecx13;
    }
    eax11 = _Unwind_RaiseException_Phase2();
    if (reinterpret_cast<int1_t>(eax11 == 7)) {
        eax15 = uw_install_context_1(ecx13);
        _Unwind_DebugHook(v16, v17, eax15, eax15);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(ebp2) + reinterpret_cast<uint32_t>(eax15) + 4) = v17;
        goto *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(ebp2) + reinterpret_cast<uint32_t>(eax15) + 4);
    }
    addr_bf80_12:
    goto addr_bf3a_7;
}

void* size_of_encoded_value(void** ecx, void** a2, void** a3, void** a4, void** a5) {
    void** eax6;
    void* eax7;
    uint32_t edx8;
    uint32_t edx9;
    void** ebx10;
    void** ebp11;

    eax6 = __x86_get_pc_thunk_bx();
    if (*reinterpret_cast<signed char*>(&eax6) == -1) {
        addr_c4d9_2:
        eax7 = reinterpret_cast<void*>(0);
        goto addr_c4e2_3;
    } else {
        *reinterpret_cast<signed char*>(&edx8) = *reinterpret_cast<signed char*>(&eax6);
        edx9 = edx8 & 7;
        if (*reinterpret_cast<unsigned char*>(&edx9) == 2) {
            eax7 = reinterpret_cast<void*>(2);
            goto addr_c4e2_3;
        }
        if (*reinterpret_cast<unsigned char*>(&edx9) <= 2) 
            goto addr_c4b6_7;
    }
    if (*reinterpret_cast<unsigned char*>(&edx9) == 3) {
        addr_c4dd_9:
        eax7 = reinterpret_cast<void*>(4);
        goto addr_c4e2_3;
    } else {
        eax7 = reinterpret_cast<void*>(8);
        if (*reinterpret_cast<unsigned char*>(&edx9) == 4) {
            addr_c4e2_3:
            return eax7;
        }
    }
    addr_c4d4_12:
    fun_21e0(ecx, ebx10, ebp11);
    goto addr_c4d9_2;
    addr_c4b6_7:
    if (!*reinterpret_cast<unsigned char*>(&edx9)) 
        goto addr_c4dd_9;
    goto addr_c4d4_12;
}

void** read_uleb128(void** ecx, int32_t a2) {
    uint32_t esi3;
    uint32_t* v4;
    uint32_t* edx5;
    int32_t ecx6;
    void** eax7;
    uint32_t edx8;
    uint32_t edi9;

    esi3 = 0;
    v4 = edx5;
    ecx6 = 0;
    do {
        ++eax7;
        *reinterpret_cast<unsigned char*>(&edx8) = *reinterpret_cast<unsigned char*>(eax7 + 0xffffffff);
        edi9 = (edx8 & 0x7f) << *reinterpret_cast<unsigned char*>(&ecx6);
        ecx6 = ecx6 + 7;
        esi3 = esi3 | edi9;
    } while (*reinterpret_cast<signed char*>(&edx8) < reinterpret_cast<signed char>(0));
    *v4 = esi3;
    return eax7;
}

struct s396 {
    signed char[200] pad200;
    int32_t f200;
    signed char[4952] pad5156;
    void** f5156;
};

void** __register_frame_info_bases(void** a1, void** a2, void** a3, void** a4, void** a5) {
    struct s396* ebx6;
    void* ebx7;
    void** eax8;
    int32_t edi9;

    __x86_get_pc_thunk_bx();
    ebx6 = reinterpret_cast<struct s396*>(reinterpret_cast<int32_t>(ebx7) + 0x5a76);
    eax8 = a1;
    if (eax8 && *reinterpret_cast<void***>(eax8)) {
        edi9 = ebx6->f200;
        *reinterpret_cast<void***>(a2 + 16) = reinterpret_cast<void**>(0);
        *reinterpret_cast<void***>(a2 + 4) = a3;
        *reinterpret_cast<void***>(a2) = reinterpret_cast<void**>(0xffffffff);
        *reinterpret_cast<void***>(a2 + 12) = eax8;
        *reinterpret_cast<void***>(a2 + 8) = a4;
        *reinterpret_cast<void***>(a2 + 16) = reinterpret_cast<void**>(0x7f8);
        if (edi9) {
            fun_2230(reinterpret_cast<int32_t>(ebx6) + 0x141c);
        }
        eax8 = ebx6->f5156;
        ebx6->f5156 = a2;
        *reinterpret_cast<void***>(a2 + 20) = eax8;
        if (edi9) {
            eax8 = fun_2180(reinterpret_cast<int32_t>(ebx6) + 0x141c);
        }
    }
    return eax8;
}

void** __register_frame_info_table(int32_t ecx, void** a2, void** a3) {
    void** eax4;
    void** eax5;

    eax4 = __x86_get_pc_thunk_bx();
    eax5 = __register_frame_info_table_bases(a2, a3, 0, 0, eax4);
    return eax5;
}

struct s397 {
    signed char[200] pad200;
    int32_t f200;
    signed char[4948] pad5152;
    void** f5152;
    signed char[3] pad5156;
    void** f5156;
};

void** __deregister_frame_info_bases(void** a1) {
    struct s397* ebx2;
    void* ebx3;
    void** edx4;
    void** esi5;
    int32_t edi6;
    void*** eax7;
    void** v8;
    void** v9;
    void** v10;
    void** v11;
    void** v12;
    void** v13;
    void** v14;
    void** v15;

    __x86_get_pc_thunk_bx();
    ebx2 = reinterpret_cast<struct s397*>(reinterpret_cast<int32_t>(ebx3) + 0x58ad);
    edx4 = a1;
    if (!edx4 || !*reinterpret_cast<void***>(edx4)) {
        esi5 = reinterpret_cast<void**>(0);
    } else {
        edi6 = ebx2->f200;
        if (edi6) {
            fun_2230(reinterpret_cast<int32_t>(ebx2) + 0x141c);
            edx4 = edx4;
        }
        esi5 = ebx2->f5156;
        eax7 = &ebx2->f5156;
        while (esi5) {
            if (*reinterpret_cast<void***>(esi5 + 12) == edx4) 
                goto addr_d6ec_8;
            eax7 = reinterpret_cast<void***>(esi5 + 20);
            esi5 = *reinterpret_cast<void***>(esi5 + 20);
        }
        goto addr_d6d0_10;
    }
    addr_d736_11:
    return esi5;
    addr_d6d0_10:
    eax7 = &ebx2->f5152;
    while (esi5 = *eax7, !!esi5) {
        if (reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(esi5 + 16)) & 1) {
            if (*reinterpret_cast<void***>(*reinterpret_cast<void***>(esi5 + 12)) == edx4) 
                goto addr_d6fa_15;
        } else {
            if (*reinterpret_cast<void***>(esi5 + 12) == edx4) 
                goto addr_d6ec_8;
        }
        eax7 = reinterpret_cast<void***>(esi5 + 20);
    }
    if (edi6) 
        goto addr_d717_19;
    do {
        fun_21e0(v8, v9, v10);
        addr_d732_21:
        if (!edi6) 
            goto addr_d736_11;
        addr_d717_19:
        fun_2180(reinterpret_cast<int32_t>(ebx2) + 0x141c);
    } while (!esi5);
    goto addr_d736_11;
    addr_d6fa_15:
    *eax7 = *reinterpret_cast<void***>(esi5 + 20);
    v11 = *reinterpret_cast<void***>(esi5 + 12);
    fun_20a0(v11, v12, v13, v14, v15);
    goto addr_d732_21;
    addr_d6ec_8:
    *eax7 = *reinterpret_cast<void***>(esi5 + 20);
    goto addr_d732_21;
}

struct s398 {
    signed char[176] pad176;
    int32_t f176;
};

int32_t fun_22a0(int32_t a1, void* a2, void** a3, void** a4) {
    struct s398* ebx5;

    goto ebx5->f176;
}

struct s399 {
    signed char[136] pad136;
    int32_t f136;
};

void fun_2200(uint32_t a1, void** a2, uint32_t a3, int32_t a4) {
    struct s399* ebx5;

    goto ebx5->f136;
}

struct s400 {
    signed char[8] pad8;
    int32_t f8;
};

void fun_21b0(void** a1, void** a2, void** a3);

int32_t fun_2050(int32_t a1, void** a2, void** a3);

void fun_2170(int32_t a1, void** a2, void** a3);

void fun_2790() {
    void* eax1;
    int32_t ecx2;
    struct s400* ebp3;
    void** edx4;
    void* ebp5;
    int32_t ebp6;
    int32_t ebp7;
    int32_t ebp8;
    int32_t eax9;
    void** v10;
    int32_t ebp11;
    void* esi12;
    int32_t ebp13;
    int32_t ebp14;
    int32_t ebp15;
    void** v16;
    int32_t ebp17;
    void** eax18;
    void* ebp19;
    int32_t v20;
    void** v21;
    void** v22;
    int32_t eax23;
    void** v24;
    int32_t ebp25;
    void** edx26;
    void* ebp27;
    int32_t ebp28;
    int32_t ebp29;
    int32_t eax30;
    void** v31;
    int32_t ebp32;
    void* esi33;
    int32_t ebp34;
    int32_t ebp35;
    int32_t ebp36;
    void** v37;
    int32_t ebp38;
    void** eax39;
    void* ebp40;
    int32_t v41;
    void** v42;
    void** v43;
    int32_t v44;
    int32_t ebp45;
    int32_t v46;

    eax1 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__return_address()) + 0x10794);
    ecx2 = ebp3->f8;
    edx4 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp5) + 0xffffffcc);
    *reinterpret_cast<void**>(ebp6 - 0x84) = eax1;
    *reinterpret_cast<int32_t*>(ebp7 - 0x88) = ecx2;
    *reinterpret_cast<void***>(ebp8 - 0x8c) = edx4;
    eax9 = fun_2010(edx4, reinterpret_cast<int32_t>(eax1) + 0xffffb175, 44);
    v10 = *reinterpret_cast<void***>(ebp11 - 0x8c);
    esi12 = reinterpret_cast<void*>(ebp13 - 64);
    *reinterpret_cast<int32_t*>(ebp14 - 0x90) = eax9;
    *reinterpret_cast<void**>(ebp15 - 0x94) = esi12;
    _Z7decryptPhi(esi12, v10, 44);
    v16 = *reinterpret_cast<void***>(ebp17 - 0x94);
    eax18 = _ZNKSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE5c_strEv(v16, v10, 44);
    fun_21b0(eax18, v10, 44);
    _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(reinterpret_cast<int32_t>(ebp19) + 0xffffffc0, v10, 44, v20, v21, v22);
    eax23 = fun_2050(0x4c4b40, v10, 44);
    v24 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(*reinterpret_cast<void**>(ebp25 - 0x84)) + 0xffffb1a1);
    edx26 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp27) + 0xffffff8c);
    *reinterpret_cast<int32_t*>(ebp28 - 0x98) = eax23;
    *reinterpret_cast<void***>(ebp29 - 0x9c) = edx26;
    eax30 = fun_2010(edx26, v24, 44);
    v31 = *reinterpret_cast<void***>(ebp32 - 0x9c);
    esi33 = reinterpret_cast<void*>(ebp34 - 0x80);
    *reinterpret_cast<int32_t*>(ebp35 - 0xa0) = eax30;
    *reinterpret_cast<void**>(ebp36 - 0xa4) = esi33;
    _Z7decryptPhi(esi33, v31, 44);
    v37 = *reinterpret_cast<void***>(ebp38 - 0xa4);
    eax39 = _ZNKSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE5c_strEv(v37, v31, 44);
    fun_21b0(eax39, v31, 44);
    _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(reinterpret_cast<int32_t>(ebp40) + 0xffffff80, v31, 44, v41, v42, v43);
    v44 = *reinterpret_cast<int32_t*>(ebp45 - 0x84) + reinterpret_cast<int32_t>("=");
    fun_2170(v44, v31, 44);
    goto v46;
}

void fun_22dd();

struct s401 {
    signed char[4800] pad4800;
    void** f4800;
};

/* std::__ndk1::vector<unsigned char, std::__ndk1::allocator<unsigned char> >::vector(std::initializer_list<unsigned char>) */
void _ZNSt6__ndk16vectorIhNS_9allocatorIhEEEC2ESt16initializer_listIhE(void** a1, void* a2, int32_t a3);

void __cxx_global_var_init(int32_t a1) {
    struct s401* eax2;
    void* v3;
    int32_t v4;

    fun_22dd();
    eax2 = reinterpret_cast<struct s401*>(reinterpret_cast<int32_t>(v3) + 0x10c47);
    _ZNSt6__ndk16vectorIhNS_9allocatorIhEEEC2ESt16initializer_listIhE(&eax2->f4800, reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 - 32, 16);
    fun_2200(reinterpret_cast<int32_t>(eax2) + 0xffff3a2c, &eax2->f4800, reinterpret_cast<int32_t>(eax2) + 0x31c, v4);
    goto a1;
}

struct s402 {
    signed char[8] pad8;
    int32_t f8;
};

struct s403 {
    signed char[8] pad8;
    void** f8;
};

void fun_29c0() {
    void* eax1;
    int32_t ecx2;
    struct s402* ebp3;
    void** v4;
    struct s403* ebp5;
    void** v6;
    int32_t ebp7;
    int32_t ebp8;
    void** eax9;
    int32_t ebp10;
    void** ecx11;
    int32_t ebp12;
    void* ebp13;
    void** v14;
    int32_t eax15;
    void* ebp16;
    void** v17;
    void** v18;
    int32_t ebp19;
    void** v20;
    int32_t eax21;
    void** v22;
    int32_t ebp23;
    void** v24;
    void** v25;
    int32_t ebp26;
    int32_t ebp27;
    int32_t v28;
    void** v29;
    int32_t ebp30;
    void** v31;
    int32_t ebp32;

    eax1 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__return_address()) + 0x10564);
    ecx2 = ebp3->f8;
    v4 = ebp5->f8;
    v6 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(eax1) + 0xffffc466);
    *reinterpret_cast<void**>(ebp7 - 0x214) = eax1;
    *reinterpret_cast<int32_t*>(ebp8 - 0x218) = ecx2;
    eax9 = fun_2190(v4, v6);
    *reinterpret_cast<void***>(ebp10 - 0x210) = eax9;
    if (eax9) {
        while (ecx11 = *reinterpret_cast<void***>(ebp12 - 0x210), eax15 = fun_2280(reinterpret_cast<int32_t>(ebp13) + 0xfffffdf4, "5594570", ecx11, v14), !!eax15) {
            fun_2220(reinterpret_cast<int32_t>(ebp16) + 0xfffffdf4, "5594570", ecx11, v17);
        }
        v18 = *reinterpret_cast<void***>(ebp19 - 0x210);
        eax21 = fun_2060(v18, "5594570", ecx11, v20);
        if (eax21) 
            goto addr_2a88_6;
    } else {
        v22 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(*reinterpret_cast<void**>(ebp23 - 0x214)) + 0xffffb0dc);
        fun_2220(v22, v6, v24, v25);
        *reinterpret_cast<int32_t*>(ebp26 - 12) = -1;
        goto addr_2ab1_8;
    }
    *reinterpret_cast<int32_t*>(ebp27 - 12) = 0;
    addr_2ab1_8:
    goto v28;
    addr_2a88_6:
    v29 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(*reinterpret_cast<void**>(ebp30 - 0x214)) + 0xffffb0f1);
    fun_2220(v29, "5594570", ecx11, v31);
    *reinterpret_cast<int32_t*>(ebp32 - 12) = -1;
    goto addr_2ab1_8;
}

struct s404 {
    signed char[8] pad8;
    int32_t f8;
};

int32_t fun_2260(int32_t a1, void** a2, void** a3);

void fun_2160(int32_t a1, void** a2, void** a3);

uint32_t fun_20d0(int32_t a1, void** a2, void** a3);

void fun_2210(int32_t a1, void** a2, void** a3);

int32_t fun_2020(int32_t a1, void** a2, void** a3);

int32_t fun_2150(int32_t a1, void** a2, void** a3);

struct s406 {
    signed char[4] pad4;
    void** f4;
};

struct s405 {
    signed char[12] pad12;
    struct s406* f12;
};

struct s408 {
    signed char[8] pad8;
    void** f8;
};

struct s407 {
    signed char[12] pad12;
    struct s408* f12;
};

struct s410 {
    signed char[12] pad12;
    void** f12;
};

struct s409 {
    signed char[12] pad12;
    struct s410* f12;
};

struct s411 {
    signed char[800] pad800;
    void** f800;
};

/* std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::operator+=(char const*) */
void _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEpLEPKc(void** a1, void** a2, void** a3);

void fun_2100(int32_t a1, void** a2, void** a3);

void fun_2240(int32_t a1, void** a2, void** a3);

void fun_2ad1() {
    int32_t ebp1;
    int1_t zf2;
    struct s404* ebp3;
    int32_t ebp4;
    int32_t edx5;
    int32_t ebp6;
    int32_t esi7;
    int32_t edi8;
    int32_t v9;
    int32_t v10;
    int32_t ebp11;
    int32_t ebp12;
    int32_t ebp13;
    int32_t ebp14;
    int32_t ebp15;
    int32_t ebp16;
    void** v17;
    int32_t eax18;
    void** v19;
    int32_t ebp20;
    void** v21;
    int32_t ebp22;
    int32_t ebp23;
    void** v24;
    int32_t ebp25;
    void* ebp26;
    void** v27;
    int32_t ebp28;
    void* ebp29;
    void** v30;
    int32_t ebp31;
    int32_t ebp32;
    void* ebp33;
    void** eax34;
    int32_t ebp35;
    void* ebp36;
    int32_t v37;
    void** v38;
    void** v39;
    void** v40;
    void* ebp41;
    int32_t ebp42;
    void* ebp43;
    void** eax44;
    int32_t ebp45;
    void* ebp46;
    int32_t v47;
    void** v48;
    void** v49;
    void** v50;
    void* ebp51;
    int32_t ebp52;
    void* ebp53;
    void** eax54;
    int32_t ebp55;
    void* ebp56;
    int32_t v57;
    void** v58;
    void** v59;
    int32_t ebp60;
    int32_t ebp61;
    int32_t v62;
    int32_t ebp63;
    int32_t ebp64;
    int32_t eax65;
    int32_t ebp66;
    int32_t ebp67;
    int32_t ebp68;
    int32_t eax69;
    uint32_t eax70;
    int32_t ebp71;
    int32_t ebp72;
    int32_t ebp73;
    int32_t ebp74;
    int32_t ebp75;
    int32_t ebp76;
    int32_t ebp77;
    int32_t v78;
    int32_t ebp79;
    int32_t ebp80;
    int32_t edx81;
    int32_t ebp82;
    int32_t ebp83;
    int32_t eax84;
    void** v85;
    void* ebp86;
    void* edx87;
    int32_t ebp88;
    int32_t ebp89;
    int32_t ebp90;
    void** v91;
    int32_t ebp92;
    void** eax93;
    int32_t v94;
    int32_t ebp95;
    void* ebp96;
    int32_t v97;
    void** v98;
    void** v99;
    void** v100;
    int32_t ebp101;
    void** ecx102;
    void* ebp103;
    int32_t ebp104;
    int32_t eax105;
    void** v106;
    int32_t ebp107;
    int32_t ebp108;
    void* ebp109;
    int32_t eax110;
    void** v111;
    int32_t ebp112;
    int32_t ebp113;
    void* ebp114;
    int32_t eax115;
    void** v116;
    int32_t ebp117;
    int32_t ebp118;
    void* ebp119;
    int32_t eax120;
    void* ecx121;
    int32_t ebp122;
    void** v123;
    int32_t edx124;
    int32_t ebp125;
    int32_t ebp126;
    int32_t eax127;
    int32_t eax128;
    void** v129;
    int32_t ebp130;
    int32_t v131;
    int32_t ebp132;
    int32_t ebp133;
    int32_t eax134;
    int32_t ebp135;
    int32_t eax136;
    int32_t ebp137;
    void** v138;
    int32_t ebp139;
    void* esi140;
    int32_t ebp141;
    int32_t ebp142;
    int32_t ebp143;
    void** v144;
    int32_t ebp145;
    void** eax146;
    int32_t v147;
    int32_t ebp148;
    void* ebp149;
    int32_t v150;
    void** v151;
    void** v152;
    int32_t eax153;
    int32_t ebp154;
    void** v155;
    struct s405* ebp156;
    int32_t eax157;
    int32_t ecx158;
    int32_t ebp159;
    void** v160;
    void* ebp161;
    void* esi162;
    int32_t ebp163;
    int32_t ebp164;
    int32_t ebp165;
    int32_t ebp166;
    void** v167;
    int32_t ebp168;
    void** eax169;
    int32_t v170;
    int32_t ebp171;
    void* ebp172;
    int32_t v173;
    void** v174;
    void** v175;
    int32_t eax176;
    int32_t ebp177;
    void** v178;
    struct s407* ebp179;
    int32_t eax180;
    int32_t ecx181;
    int32_t ebp182;
    void** v183;
    void* ebp184;
    void* esi185;
    int32_t ebp186;
    int32_t ebp187;
    int32_t ebp188;
    int32_t ebp189;
    void** v190;
    int32_t ebp191;
    void** eax192;
    int32_t v193;
    int32_t ebp194;
    void* ebp195;
    int32_t v196;
    void** v197;
    void** v198;
    int32_t eax199;
    int32_t ebp200;
    void** v201;
    struct s409* ebp202;
    int32_t eax203;
    int32_t ecx204;
    int32_t ebp205;
    void** v206;
    void* ebp207;
    void* esi208;
    int32_t ebp209;
    int32_t ebp210;
    int32_t ebp211;
    int32_t ebp212;
    void** v213;
    int32_t ebp214;
    void** eax215;
    int32_t v216;
    int32_t ebp217;
    void* ebp218;
    int32_t v219;
    void** v220;
    void** v221;
    int32_t ebp222;
    void** v223;
    int32_t ebp224;
    void** ecx225;
    void* ebp226;
    int32_t ebp227;
    int32_t eax228;
    void** v229;
    int32_t ebp230;
    void* esi231;
    int32_t ebp232;
    int32_t ebp233;
    int32_t ebp234;
    void** v235;
    int32_t ebp236;
    void** eax237;
    void** v238;
    void* ebp239;
    int32_t v240;
    void** v241;
    void** v242;
    int32_t v243;
    int32_t ebp244;
    void** v245;
    int32_t ebp246;
    void** ecx247;
    void* ebp248;
    int32_t ebp249;
    int32_t eax250;
    void** v251;
    int32_t ebp252;
    void* esi253;
    int32_t ebp254;
    int32_t ebp255;
    int32_t ebp256;
    void** v257;
    int32_t ebp258;
    void** eax259;
    void* ebp260;
    int32_t v261;
    void* ebp262;
    int32_t v263;
    void** v264;
    void** v265;
    void** v266;
    int32_t ebp267;
    void* ebp268;
    void** v269;
    int32_t ebp270;
    void* ebp271;
    void** eax272;
    int32_t ebp273;
    void* ebp274;
    int32_t v275;
    void** v276;
    void** v277;
    int32_t v278;
    int32_t ebp279;

    *reinterpret_cast<int32_t*>(ebp1 - 16) = 0;
    zf2 = ebp3->f8 == 4;
    *reinterpret_cast<int32_t*>(ebp4 - 0x136c) = reinterpret_cast<int32_t>(__return_address()) + 0x10453;
    if (zf2) {
        edx5 = *reinterpret_cast<int32_t*>(ebp6 - 0x136c) - 0x4e03;
        esi7 = *reinterpret_cast<int32_t*>(ebp6 - 0x136c) - 0x4e1b;
        edi8 = *reinterpret_cast<int32_t*>(ebp6 - 0x136c) - 0x4e33;
        v9 = *reinterpret_cast<int32_t*>(ebp6 - 0x136c) - 0x4f10;
        v10 = *reinterpret_cast<int32_t*>(ebp11 - 0x136c) + reinterpret_cast<int32_t>("=");
        *reinterpret_cast<int32_t*>(ebp12 - 0x1370) = ebp13 - 40;
        *reinterpret_cast<int32_t*>(ebp14 - 0x1374) = edx5;
        *reinterpret_cast<int32_t*>(ebp15 - 0x1378) = esi7;
        *reinterpret_cast<int32_t*>(ebp16 - 0x137c) = edi8;
        eax18 = fun_21a0(v10, v9, v17);
        v19 = *reinterpret_cast<void***>(ebp20 - 0x1370);
        v21 = *reinterpret_cast<void***>(ebp22 - 0x137c);
        *reinterpret_cast<int32_t*>(ebp23 - 0x1380) = eax18;
        fun_2010(v19, v21, 24);
        v24 = *reinterpret_cast<void***>(ebp25 - 0x1378);
        fun_2010(reinterpret_cast<int32_t>(ebp26) + 0xffffffc0, v24, 24);
        v27 = *reinterpret_cast<void***>(ebp28 - 0x1374);
        fun_2010(reinterpret_cast<int32_t>(ebp29) + 0xffffffa8, v27, 24);
        v30 = *reinterpret_cast<void***>(ebp31 - 0x1370);
        _Z7decryptPhi(ebp32 - 0x70, v30, 24);
        eax34 = _ZNKSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE5c_strEv(reinterpret_cast<int32_t>(ebp33) + 0xffffff90, v30, 24);
        *reinterpret_cast<void***>(ebp35 - 100) = eax34;
        _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(reinterpret_cast<int32_t>(ebp36) + 0xffffff90, v30, 24, v37, v38, v39);
        v40 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp41) + 0xffffffc0);
        _Z7decryptPhi(ebp42 - 0x80, v40, 24);
        eax44 = _ZNKSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE5c_strEv(reinterpret_cast<int32_t>(ebp43) + 0xffffff80, v40, 24);
        *reinterpret_cast<void***>(ebp45 - 96) = eax44;
        _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(reinterpret_cast<int32_t>(ebp46) + 0xffffff80, v40, 24, v47, v48, v49);
        v50 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp51) + 0xffffffa8);
        _Z7decryptPhi(ebp52 - 0x90, v50, 24);
        eax54 = _ZNKSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE5c_strEv(reinterpret_cast<int32_t>(ebp53) + 0xffffff70, v50, 24);
        *reinterpret_cast<void***>(ebp55 - 92) = eax54;
        _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(reinterpret_cast<int32_t>(ebp56) + 0xffffff70, v50, 24, v57, v58, v59);
        *reinterpret_cast<int32_t*>(ebp60 - 0x94) = 0;
        while (*reinterpret_cast<int32_t*>(ebp61 - 0x94) < 3) {
            v62 = *reinterpret_cast<int32_t*>(ebp63 + *reinterpret_cast<int32_t*>(ebp64 - 0x94) * 4 - 100);
            eax65 = _Z12folderExistsPKc(v62, v50, 24);
            if (eax65 < 0) 
                goto addr_2ce6_5;
            *reinterpret_cast<int32_t*>(ebp66 - 0x94) = *reinterpret_cast<int32_t*>(ebp67 - 0x94) + 1;
        }
    } else {
        *reinterpret_cast<int32_t*>(ebp68 - 16) = -1;
        goto addr_34f9_9;
    }
    eax69 = fun_2260(0, v50, 24);
    fun_2160(eax69, v50, 24);
    eax70 = fun_20d0(eax69, v50, 24);
    *reinterpret_cast<uint32_t*>(ebp71 - 0x98) = eax70 - (eax70 + (eax70 >> 31) & 0xfffffffe);
    *reinterpret_cast<int32_t*>(ebp72 - 0x9c) = 0x3d3d6762;
    *reinterpret_cast<int32_t*>(ebp73 - 0xa0) = 0x59426175;
    *reinterpret_cast<int32_t*>(ebp74 - 0xa4) = 0x33797751;
    *reinterpret_cast<int32_t*>(ebp75 - 0xa8) = 0x434d662f;
    *reinterpret_cast<int32_t*>(ebp76 - 0xac) = 0x5a755a6b;
    *reinterpret_cast<int32_t*>(ebp77 - 0xb0) = 0x2f747744;
    v78 = *reinterpret_cast<int32_t*>(ebp79 + *reinterpret_cast<int32_t*>(ebp80 - 0x98) * 4 - 100);
    edx81 = *reinterpret_cast<int32_t*>(ebp82 - 0x136c) + reinterpret_cast<int32_t>("=");
    *reinterpret_cast<int32_t*>(ebp83 - 0x1384) = edx81;
    eax84 = fun_21a0(edx81, v78, 24);
    v85 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp86) + 0xffffff50);
    edx87 = reinterpret_cast<void*>(ebp88 - 0xc0);
    *reinterpret_cast<int32_t*>(ebp89 - 0x1388) = eax84;
    *reinterpret_cast<void**>(ebp90 - 0x138c) = edx87;
    _Z7decryptPhi(edx87, v85, 24);
    v91 = *reinterpret_cast<void***>(ebp92 - 0x138c);
    eax93 = _ZNKSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE5c_strEv(v91, v85, 24);
    v94 = *reinterpret_cast<int32_t*>(ebp95 - 0x1384);
    fun_2210(v94, eax93, 24);
    _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(reinterpret_cast<int32_t>(ebp96) + 0xffffff40, eax93, 24, v97, v98, v99);
    v100 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(*reinterpret_cast<void**>(ebp101 - 0x136c)) + 0xffffb22d);
    ecx102 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp103) + 0xfffff7dc);
    *reinterpret_cast<void***>(ebp104 - 0x1390) = ecx102;
    eax105 = fun_2010(ecx102, v100, 0x758);
    v106 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(*reinterpret_cast<void**>(ebp107 - 0x136c)) + 0xffffb985);
    *reinterpret_cast<int32_t*>(ebp108 - 0x1394) = eax105;
    eax110 = fun_2010(reinterpret_cast<int32_t>(ebp109) + 0xfffff744, v106, 0x98);
    v111 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(*reinterpret_cast<void**>(ebp112 - 0x136c)) + 0xffffba1d);
    *reinterpret_cast<int32_t*>(ebp113 - 0x1398) = eax110;
    eax115 = fun_2010(reinterpret_cast<int32_t>(ebp114) + 0xfffff718, v111, 44);
    v116 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(*reinterpret_cast<void**>(ebp117 - 0x136c)) + 0xffffba49);
    *reinterpret_cast<int32_t*>(ebp118 - 0x139c) = eax115;
    eax120 = fun_2010(reinterpret_cast<int32_t>(ebp119) + 0xffffed6c, v116, "_cxa_allocate_exception");
    ecx121 = *reinterpret_cast<void**>(ebp122 - 0x136c);
    v123 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ecx121) + 0xffffb120);
    edx124 = reinterpret_cast<int32_t>(ecx121) + reinterpret_cast<int32_t>("=");
    *reinterpret_cast<int32_t*>(ebp125 - 0x13a0) = eax120;
    *reinterpret_cast<int32_t*>(ebp126 - 0x13a4) = edx124;
    eax127 = fun_2020(edx124, v123, "_cxa_allocate_exception");
    eax128 = fun_2120(eax127, v123, "_cxa_allocate_exception");
    v129 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(*reinterpret_cast<void**>(ebp130 - 0x136c)) + 0xffffb122);
    v131 = *reinterpret_cast<int32_t*>(ebp132 - 0x13a4);
    *reinterpret_cast<int32_t*>(ebp133 - 0x13a8) = eax128;
    eax134 = fun_2020(v131, v129, "_cxa_allocate_exception");
    *reinterpret_cast<int32_t*>(ebp135 - 0xcc) = eax134;
    eax136 = *reinterpret_cast<int32_t*>(ebp137 - 0xcc);
    v138 = *reinterpret_cast<void***>(ebp139 - 0x1390);
    esi140 = reinterpret_cast<void*>(ebp141 - 0x12a0);
    *reinterpret_cast<int32_t*>(ebp142 - 0x13ac) = eax136;
    *reinterpret_cast<void**>(ebp143 - 0x13b0) = esi140;
    _Z7decryptPhi(esi140, v138, 0x758);
    v144 = *reinterpret_cast<void***>(ebp145 - 0x13b0);
    eax146 = _ZNKSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE5c_strEv(v144, v138, 0x758);
    v147 = *reinterpret_cast<int32_t*>(ebp148 - 0x13ac);
    fun_2150(v147, eax146, 0x758);
    _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(reinterpret_cast<int32_t>(ebp149) + 0xffffed60, eax146, 0x758, v150, v151, v152);
    eax153 = *reinterpret_cast<int32_t*>(ebp154 - 0xcc);
    v155 = ebp156->f12->f4;
    eax157 = fun_2150(eax153, v155, 0x758);
    ecx158 = *reinterpret_cast<int32_t*>(ebp159 - 0xcc);
    v160 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp161) + 0xfffff744);
    esi162 = reinterpret_cast<void*>(ebp163 - 0x12b0);
    *reinterpret_cast<int32_t*>(ebp164 - 0x13b4) = eax157;
    *reinterpret_cast<int32_t*>(ebp165 - 0x13b8) = ecx158;
    *reinterpret_cast<void**>(ebp166 - 0x13bc) = esi162;
    _Z7decryptPhi(esi162, v160, 0x98);
    v167 = *reinterpret_cast<void***>(ebp168 - 0x13bc);
    eax169 = _ZNKSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE5c_strEv(v167, v160, 0x98);
    v170 = *reinterpret_cast<int32_t*>(ebp171 - 0x13b8);
    fun_2150(v170, eax169, 0x98);
    _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(reinterpret_cast<int32_t>(ebp172) + 0xffffed50, eax169, 0x98, v173, v174, v175);
    eax176 = *reinterpret_cast<int32_t*>(ebp177 - 0xcc);
    v178 = ebp179->f12->f8;
    eax180 = fun_2150(eax176, v178, 0x98);
    ecx181 = *reinterpret_cast<int32_t*>(ebp182 - 0xcc);
    v183 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp184) + 0xfffff718);
    esi185 = reinterpret_cast<void*>(ebp186 - 0x12c0);
    *reinterpret_cast<int32_t*>(ebp187 - 0x13c0) = eax180;
    *reinterpret_cast<int32_t*>(ebp188 - 0x13c4) = ecx181;
    *reinterpret_cast<void**>(ebp189 - 0x13c8) = esi185;
    _Z7decryptPhi(esi185, v183, 44);
    v190 = *reinterpret_cast<void***>(ebp191 - 0x13c8);
    eax192 = _ZNKSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE5c_strEv(v190, v183, 44);
    v193 = *reinterpret_cast<int32_t*>(ebp194 - 0x13c4);
    fun_2150(v193, eax192, 44);
    _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(reinterpret_cast<int32_t>(ebp195) + 0xffffed40, eax192, 44, v196, v197, v198);
    eax199 = *reinterpret_cast<int32_t*>(ebp200 - 0xcc);
    v201 = ebp202->f12->f12;
    eax203 = fun_2150(eax199, v201, 44);
    ecx204 = *reinterpret_cast<int32_t*>(ebp205 - 0xcc);
    v206 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp207) + 0xffffed6c);
    esi208 = reinterpret_cast<void*>(ebp209 - 0x12d0);
    *reinterpret_cast<int32_t*>(ebp210 - 0x13cc) = eax203;
    *reinterpret_cast<int32_t*>(ebp211 - 0x13d0) = ecx204;
    *reinterpret_cast<void**>(ebp212 - 0x13d4) = esi208;
    _Z7decryptPhi(esi208, v206, "_cxa_allocate_exception");
    v213 = *reinterpret_cast<void***>(ebp214 - 0x13d4);
    eax215 = _ZNKSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE5c_strEv(v213, v206, "_cxa_allocate_exception");
    v216 = *reinterpret_cast<int32_t*>(ebp217 - 0x13d0);
    fun_2150(v216, eax215, "_cxa_allocate_exception");
    _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(reinterpret_cast<int32_t>(ebp218) + 0xffffed30, eax215, "_cxa_allocate_exception", v219, v220, v221);
    if (!*reinterpret_cast<int32_t*>(ebp222 - 0xcc)) {
        v223 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(*reinterpret_cast<void**>(ebp224 - 0x136c)) + 0xffffc3f5);
        ecx225 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp226) + 0xffffed04);
        *reinterpret_cast<void***>(ebp227 - 0x13d8) = ecx225;
        eax228 = fun_2010(ecx225, v223, 44);
        v229 = *reinterpret_cast<void***>(ebp230 - 0x13d8);
        esi231 = reinterpret_cast<void*>(ebp232 - 0x1308);
        *reinterpret_cast<int32_t*>(ebp233 - 0x13dc) = eax228;
        *reinterpret_cast<void**>(ebp234 - 0x13e0) = esi231;
        _Z7decryptPhi(esi231, v229, 44);
        v235 = *reinterpret_cast<void***>(ebp236 - 0x13e0);
        eax237 = _ZNKSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE5c_strEv(v235, v229, 44);
        fun_2220(eax237, v229, 44, v238);
        _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(reinterpret_cast<int32_t>(ebp239) + 0xffffecf8, v229, 44, v240, v241, v242);
    } else {
        v243 = *reinterpret_cast<int32_t*>(ebp244 - 0xcc);
        fun_2120(v243, eax215, "_cxa_allocate_exception");
    }
    v245 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(*reinterpret_cast<void**>(ebp246 - 0x136c)) + 0xffffc421);
    ecx247 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp248) + 0xffffecb8);
    *reinterpret_cast<void***>(ebp249 - 0x13e4) = ecx247;
    eax250 = fun_2010(ecx247, v245, 64);
    v251 = *reinterpret_cast<void***>(ebp252 - 0x13e4);
    esi253 = reinterpret_cast<void*>(ebp254 - 0x1368);
    *reinterpret_cast<int32_t*>(ebp255 - 0x13e8) = eax250;
    *reinterpret_cast<void**>(ebp256 - 0x13ec) = esi253;
    _Z7decryptPhi(esi253, v251, 64);
    v257 = *reinterpret_cast<void***>(ebp258 - 0x13ec);
    eax259 = _ZNKSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE5c_strEv(v257, v251, 64);
    _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2EPKc(reinterpret_cast<int32_t>(ebp260) + 0xffffeca8, eax259, 64, v261);
    _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(reinterpret_cast<int32_t>(ebp262) + 0xffffec98, eax259, 64, v263, v264, v265);
    v266 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(*reinterpret_cast<struct s411**>(ebp267 - 0x136c)) + reinterpret_cast<uint32_t>("="));
    _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEpLEPKc(reinterpret_cast<int32_t>(ebp268) + 0xffffeca8, v266, 64);
    v269 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(*reinterpret_cast<void**>(ebp270 - 0x136c)) + 0xfffef85c);
    fun_2100(14, v269, 64);
    fun_2240(10, v269, 64);
    eax272 = _ZNKSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE5c_strEv(reinterpret_cast<int32_t>(ebp271) + 0xffffeca8, v269, 64);
    _Z12parse_outputPKc(eax272, v269, 64);
    *reinterpret_cast<int32_t*>(ebp273 - 16) = 0;
    _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(reinterpret_cast<int32_t>(ebp274) + 0xffffeca8, v269, 64, v275, v276, v277);
    addr_34f9_9:
    goto v278;
    addr_2ce6_5:
    *reinterpret_cast<int32_t*>(ebp279 - 16) = -99;
    goto addr_34f9_9;
}

struct s412 {
    signed char[8] pad8;
    int32_t f8;
};

struct s413 {
    signed char[16] pad16;
    int32_t f16;
};

struct s414 {
    signed char[12] pad12;
    int32_t f12;
};

struct s415 {
    signed char[16] pad16;
    int32_t f16;
};

struct s416 {
    signed char[12] pad12;
    int32_t f12;
};

struct s417 {
    int32_t f0;
    int32_t f4;
    int32_t f8;
};

struct s418 {
    signed char[16] pad16;
    int32_t f16;
};

struct s419 {
    int32_t f0;
    void** f4;
    signed char[3] pad8;
    void** f8;
    signed char[3] pad12;
    void** f12;
};

struct s420 {
    signed char[16] pad16;
    int32_t f16;
};

struct s421 {
    int32_t f0;
    int32_t f4;
};

struct s422 {
    int32_t f0;
    void** f4;
    signed char[3] pad8;
    void** f8;
    signed char[3] pad12;
    void** f12;
    signed char[3] pad16;
    int32_t f16;
};

struct s423 {
    signed char[16] pad16;
    int32_t f16;
};

struct s424 {
    int32_t f0;
    int32_t f4;
};

struct s425 {
    int32_t f0;
    void** f4;
    signed char[3] pad8;
    void** f8;
    signed char[3] pad12;
    void** f12;
    signed char[3] pad16;
    int32_t f16;
};

struct s426 {
    int32_t f0;
    void** f4;
};

struct s427 {
    int32_t f0;
    void** f4;
    signed char[3] pad8;
    void** f8;
    signed char[3] pad12;
    void** f12;
    signed char[3] pad16;
    int32_t f16;
    void** f20;
    signed char[3] pad24;
    void** f24;
};

void fun_25ae() {
    void* esp1;
    int32_t eax2;
    int32_t ecx3;
    struct s412* ebp4;
    int32_t esi5;
    struct s413* ebp6;
    int32_t edi7;
    struct s414* ebp8;
    int32_t ebp9;
    int32_t eax10;
    struct s415* ebp11;
    int32_t ebp12;
    int32_t ebp13;
    int32_t ebp14;
    int32_t ebp15;
    int32_t ebp16;
    int32_t ebp17;
    void* eax18;
    int32_t ebp19;
    int32_t ebp20;
    int32_t ebp21;
    int32_t ecx22;
    struct s416* ebp23;
    int32_t ebp24;
    struct s417* esp25;
    int32_t ebp26;
    struct s418* ebp27;
    int32_t ebp28;
    int32_t ebp29;
    int32_t ebp30;
    int32_t ebp31;
    int32_t ebp32;
    int32_t ebp33;
    struct s419* esp34;
    int32_t ebp35;
    struct s420* ebp36;
    struct s421* esp37;
    int32_t ebp38;
    int32_t ebp39;
    struct s422* esp40;
    void* esp41;
    int32_t ebp42;
    int32_t ebp43;
    struct s423* ebp44;
    struct s424* esp45;
    int32_t ebp46;
    int32_t ebp47;
    int32_t ebp48;
    struct s425* esp49;
    int32_t ebp50;
    int32_t ebp51;
    int32_t ebp52;
    struct s424* esp53;
    int32_t ebp54;
    int32_t ebp55;
    struct s425* esp56;
    int32_t* esp57;
    int32_t ebp58;
    struct s426* esp59;
    void* esp60;
    int32_t ebp61;
    int32_t ebp62;
    int32_t* esp63;
    int32_t ebp64;
    struct s427* esp65;
    int32_t* esp66;
    int32_t ebp67;
    struct s427* esp68;
    int32_t ebp69;

    esp1 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) + 4);
    eax2 = reinterpret_cast<int32_t>(__return_address()) + reinterpret_cast<int32_t>("\r");
    ecx3 = ebp4->f8;
    esi5 = ebp6->f16;
    edi7 = ebp8->f12;
    *reinterpret_cast<int32_t*>(ebp9 - 52) = eax2;
    eax10 = ebp11->f16;
    *reinterpret_cast<int32_t*>(ebp12 - 56) = eax10;
    *reinterpret_cast<int32_t*>(ebp13 - 60) = eax10 + 1;
    *reinterpret_cast<void**>(ebp14 - 16) = esp1;
    *reinterpret_cast<uint32_t*>(ebp15 - 64) = reinterpret_cast<uint32_t>(*reinterpret_cast<int32_t*>(ebp16 - 56) + 16) & 0xfffffff0;
    *reinterpret_cast<int32_t*>(ebp17 - 68) = ecx3;
    eax18 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp1) - *reinterpret_cast<int32_t*>(ebp19 - 64));
    *reinterpret_cast<int32_t*>(ebp20 - 20) = *reinterpret_cast<int32_t*>(ebp21 - 60);
    ecx22 = ebp23->f12;
    *reinterpret_cast<void**>(ebp24 - 72) = eax18;
    esp25 = reinterpret_cast<struct s417*>(reinterpret_cast<int32_t>(eax18) - 16);
    *reinterpret_cast<int32_t*>(ebp26 - 76) = ebp27->f16;
    esp25->f0 = *reinterpret_cast<int32_t*>(ebp28 - 72);
    esp25->f4 = ecx22;
    esp25->f8 = *reinterpret_cast<int32_t*>(ebp29 - 76);
    *reinterpret_cast<int32_t*>(ebp30 - 80) = eax2 - 0x4f10;
    *reinterpret_cast<int32_t*>(ebp31 - 84) = ecx3;
    *reinterpret_cast<int32_t*>(ebp32 - 88) = esi5;
    *reinterpret_cast<int32_t*>(ebp33 - 92) = edi7;
    esp34 = reinterpret_cast<struct s419*>(reinterpret_cast<int32_t>(esp25) - 4);
    esp34->f0 = 0x262c;
    fun_2010(esp34->f4, esp34->f8, esp34->f12);
    *reinterpret_cast<signed char*>(*reinterpret_cast<int32_t*>(ebp35 - 72) + ebp36->f16 + 1) = 0;
    esp37 = reinterpret_cast<struct s421*>(&esp34->f4 + 16 - 16);
    esp37->f0 = ebp38 - 32;
    esp37->f4 = *reinterpret_cast<int32_t*>(ebp39 - 80);
    esp40 = reinterpret_cast<struct s422*>(reinterpret_cast<int32_t>(esp37) - 4);
    esp40->f0 = 0x2652;
    _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2EPKc(esp40->f4, esp40->f8, esp40->f12, esp40->f16);
    esp41 = reinterpret_cast<void*>(&esp40->f4 + 16);
    *reinterpret_cast<int32_t*>(ebp42 - 36) = 0;
    while (*reinterpret_cast<int32_t*>(ebp43 - 36) < ebp44->f16) {
        esp45 = reinterpret_cast<struct s424*>(reinterpret_cast<int32_t>(esp41) - 16);
        esp45->f4 = *reinterpret_cast<signed char*>(*reinterpret_cast<int32_t*>(ebp46 - 72) + *reinterpret_cast<int32_t*>(ebp47 - 36));
        esp45->f0 = ebp48 - 32;
        esp49 = reinterpret_cast<struct s425*>(reinterpret_cast<int32_t>(esp45) - 4);
        esp49->f0 = 0x2687;
        _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEpLEc(esp49->f4, esp49->f8, esp49->f12, esp49->f16);
        esp41 = reinterpret_cast<void*>(&esp49->f4 + 16);
        *reinterpret_cast<int32_t*>(ebp50 - 36) = *reinterpret_cast<int32_t*>(ebp51 - 36) + 1;
    }
    *reinterpret_cast<signed char*>(ebp52 - 45) = 0;
    esp53 = reinterpret_cast<struct s424*>(reinterpret_cast<int32_t>(esp41) - 16);
    esp53->f4 = ebp54 - 32;
    esp53->f0 = *reinterpret_cast<int32_t*>(ebp55 - 68);
    esp56 = reinterpret_cast<struct s425*>(reinterpret_cast<int32_t>(esp53) - 4);
    esp56->f0 = 0x26c9;
    _Z13base64_decodeRKNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEE(esp56->f4, esp56->f8);
    esp57 = reinterpret_cast<int32_t*>(&esp56->f4 + 4 + 12 - 16);
    *esp57 = *reinterpret_cast<int32_t*>(ebp58 - 68);
    esp59 = reinterpret_cast<struct s426*>(esp57 - 1);
    esp59->f0 = 0x26e3;
    _ZN6Cipher7decryptERNSt6__ndk112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE(esp59->f4);
    esp60 = reinterpret_cast<void*>(&esp59->f4 + 16);
    *reinterpret_cast<signed char*>(ebp61 - 45) = 1;
    if (!(*reinterpret_cast<unsigned char*>(ebp62 - 45) & 1)) {
        esp63 = reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(esp60) - 16);
        *esp63 = *reinterpret_cast<int32_t*>(ebp64 - 68);
        esp65 = reinterpret_cast<struct s427*>(esp63 - 1);
        esp65->f0 = 0x272e;
        _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(esp65->f4, esp65->f8, esp65->f12, esp65->f16, esp65->f20, esp65->f24);
        esp60 = reinterpret_cast<void*>(&esp65->f4 + 16);
    }
    esp66 = reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(esp60) - 16);
    *esp66 = ebp67 - 32;
    esp68 = reinterpret_cast<struct s427*>(esp66 - 1);
    esp68->f0 = 0x2742;
    _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(esp68->f4, esp68->f8, esp68->f12, esp68->f16, esp68->f20, esp68->f24);
    goto *reinterpret_cast<int32_t*>(ebp69 - 12 + 4 + 4 + 4 + 4);
}

struct s428 {
    signed char[8] pad8;
    int32_t f8;
};

struct s429 {
    signed char[8] pad8;
    void** f8;
};

void fun_367c() {
    int32_t ecx1;
    struct s428* ebp2;
    void** v3;
    struct s429* ebp4;
    int32_t ebp5;
    void** v6;
    void** v7;
    void** v8;
    int32_t v9;
    int32_t v10;

    ecx1 = ebp2->f8;
    v3 = ebp4->f8;
    *reinterpret_cast<int32_t*>(ebp5 - 8) = ecx1;
    _ZNKSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE4dataEv(v3, v6, v7, v8, v9);
    goto v10;
}

struct s430 {
    signed char[160] pad160;
    int32_t f160;
};

int32_t fun_2260(int32_t a1, void** a2, void** a3) {
    struct s430* ebx4;

    goto ebx4->f160;
}

struct s431 {
    signed char[96] pad96;
    int32_t f96;
};

void fun_2160(int32_t a1, void** a2, void** a3) {
    struct s431* ebx4;

    goto ebx4->f96;
}

struct s432 {
    signed char[60] pad60;
    int32_t f60;
};

uint32_t fun_20d0(int32_t a1, void** a2, void** a3) {
    struct s432* ebx4;

    goto ebx4->f60;
}

struct s433 {
    signed char[140] pad140;
    int32_t f140;
};

void fun_2210(int32_t a1, void** a2, void** a3) {
    struct s433* ebx4;

    goto ebx4->f140;
}

struct s434 {
    signed char[24] pad24;
    int32_t f24;
};

int32_t fun_2040(int32_t a1) {
    struct s434* ebx2;

    goto ebx2->f24;
}

struct s435 {
    signed char[84] pad84;
    int32_t f84;
};

void fun_2130(uint32_t a1, uint32_t a2, int32_t a3, int32_t a4) {
    struct s435* ebx5;

    goto ebx5->f84;
}

struct s436 {
    signed char[12] pad12;
    int32_t f12;
};

struct s437 {
    signed char[8] pad8;
    int32_t f8;
};

struct s438 {
    signed char[8] pad8;
    void** f8;
};

struct s439 {
    signed char[12] pad12;
    int32_t f12;
};

struct s440 {
    signed char[12] pad12;
    void** f12;
};

void fun_352d() {
    int32_t ecx1;
    struct s436* ebp2;
    int32_t edx3;
    struct s437* ebp4;
    void** esi5;
    struct s438* ebp6;
    int32_t ebp7;
    int32_t ebp8;
    int32_t ebp9;
    int32_t ebp10;
    int32_t eax11;
    struct s439* ebp12;
    void** v13;
    struct s440* ebp14;
    int32_t ebp15;
    void** eax16;
    void** v17;
    int32_t ebp18;
    void** v19;
    int32_t ebp20;
    int32_t v21;

    ecx1 = ebp2->f12;
    edx3 = ebp4->f8;
    esi5 = ebp6->f8;
    *reinterpret_cast<int32_t*>(ebp7 - 12) = reinterpret_cast<int32_t>(__return_address()) + 0xf9f7;
    *reinterpret_cast<int32_t*>(ebp8 - 16) = ecx1;
    *reinterpret_cast<int32_t*>(ebp9 - 20) = edx3;
    *reinterpret_cast<void***>(ebp10 - 24) = esi5;
    _ZNSt6__ndk117__compressed_pairINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE5__repES5_EC2ILb1EvEEv(esi5);
    eax11 = ebp12->f12;
    v13 = ebp14->f12;
    *reinterpret_cast<int32_t*>(ebp15 - 28) = eax11;
    eax16 = _ZNSt6__ndk111char_traitsIcE6lengthEPKc(v13);
    v17 = *reinterpret_cast<void***>(ebp18 - 24);
    v19 = *reinterpret_cast<void***>(ebp20 - 28);
    _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6__initEPKcj(v17, v19, eax16);
    goto v21;
}

void fun_36ae();

/* std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::append(char const*) */
void _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKc(void** a1, void** a2);

/* std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::operator+=(char const*) */
void _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEpLEPKc(void** a1, void** a2, void** a3) {
    fun_36ae();
    _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKc(a1, a2);
    goto a1;
}

struct s441 {
    signed char[8] pad8;
    int32_t f8;
};

struct s442 {
    signed char[8] pad8;
    void** f8;
};

void fun_37ac() {
    int32_t ecx1;
    struct s441* ebp2;
    void** v3;
    struct s442* ebp4;
    int32_t ebp5;
    void** v6;
    void** v7;
    void** v8;
    void** v9;
    void** v10;
    struct s4* v11;
    int32_t v12;

    ecx1 = ebp2->f8;
    v3 = ebp4->f8;
    *reinterpret_cast<int32_t*>(ebp5 - 8) = ecx1;
    _ZNSt6__ndk117__compressed_pairINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE5__repES5_E5firstEv(v3, v6, v7, v8, v9, v10, v11);
    goto v12;
}

struct s443 {
    signed char[8] pad8;
    int32_t f8;
};

struct s444 {
    signed char[8] pad8;
    void** f8;
};

void fun_37dc() {
    int32_t ecx1;
    struct s443* ebp2;
    void** v3;
    struct s444* ebp4;
    int32_t ebp5;
    void** v6;
    void** v7;
    void** v8;
    int32_t v9;
    int32_t v10;

    ecx1 = ebp2->f8;
    v3 = ebp4->f8;
    *reinterpret_cast<int32_t*>(ebp5 - 8) = ecx1;
    _ZNKSt6__ndk117__compressed_pairINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE5__repES5_E5firstEv(v3, v6, v7, v8, v9);
    goto v10;
}

struct s445 {
    signed char[12] pad12;
    int32_t f12;
};

struct s446 {
    signed char[8] pad8;
    int32_t f8;
};

struct s447 {
    signed char[12] pad12;
    void** f12;
};

struct s448 {
    signed char[8] pad8;
    void** f8;
};

void fun_3eae() {
    int32_t ecx1;
    struct s445* ebp2;
    int32_t edx3;
    struct s446* ebp4;
    void** ebx5;
    struct s447* ebp6;
    void** v7;
    struct s448* ebp8;
    int32_t ebp9;
    int32_t ebp10;
    int32_t ebp11;
    int32_t v12;
    void** v13;
    void** v14;
    int32_t v15;
    int32_t v16;

    ecx1 = ebp2->f12;
    edx3 = ebp4->f8;
    ebx5 = ebp6->f12;
    v7 = ebp8->f8;
    *reinterpret_cast<int32_t*>(ebp9 - 16) = ecx1;
    *reinterpret_cast<int32_t*>(ebp10 - 20) = edx3;
    *reinterpret_cast<int32_t*>(ebp11 - 24) = 0;
    _ZNSt6__ndk19allocatorIcE8allocateEjPKv(v7, ebx5, 0, v12, v13, v14, v15);
    goto v16;
}

struct s449 {
    signed char[12] pad12;
    int32_t f12;
};

struct s450 {
    signed char[8] pad8;
    int32_t f8;
};

struct s451 {
    signed char[12] pad12;
    int32_t f12;
};

struct s452 {
    signed char[8] pad8;
    void** f8;
};

void fun_3f9e() {
    int32_t ecx1;
    struct s449* ebp2;
    int32_t edx3;
    struct s450* ebp4;
    int32_t edi5;
    struct s451* ebp6;
    void** v7;
    struct s452* ebp8;
    int32_t ebp9;
    int32_t ebp10;
    int32_t ebp11;
    void** v12;
    void** v13;
    void** v14;
    void** v15;
    void** v16;
    struct s4* v17;
    struct s3* eax18;
    int32_t ebp19;
    int32_t v20;

    ecx1 = ebp2->f12;
    edx3 = ebp4->f8;
    edi5 = ebp6->f12;
    v7 = ebp8->f8;
    *reinterpret_cast<int32_t*>(ebp9 - 16) = ecx1;
    *reinterpret_cast<int32_t*>(ebp10 - 20) = edx3;
    *reinterpret_cast<int32_t*>(ebp11 - 24) = edi5;
    eax18 = _ZNSt6__ndk117__compressed_pairINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE5__repES5_E5firstEv(v7, v12, v13, v14, v15, v16, v17);
    eax18->f4 = *reinterpret_cast<void***>(ebp19 - 24);
    goto v20;
}

void fun_428c();

/* char* std::__ndk1::addressof<char>(char&) */
int32_t _ZNSt6__ndk19addressofIcEEPT_RS1_(int32_t a1);

/* std::__ndk1::pointer_traits<char*>::pointer_to(char&) */
void _ZNSt6__ndk114pointer_traitsIPcE10pointer_toERc(int32_t a1) {
    fun_428c();
    _ZNSt6__ndk19addressofIcEEPT_RS1_(a1);
    goto a1;
}

struct s453 {
    signed char[8] pad8;
    int32_t f8;
};

struct s454 {
    signed char[8] pad8;
    void** f8;
};

void fun_2110(void** a1);

void fun_3c6d() {
    int32_t ecx1;
    struct s453* ebp2;
    void** v3;
    struct s454* ebp4;
    int32_t ebp5;
    int32_t v6;

    ecx1 = ebp2->f8;
    v3 = ebp4->f8;
    *reinterpret_cast<int32_t*>(ebp5 - 12) = ecx1;
    fun_2110(v3);
    goto v6;
}

struct s455 {
    signed char[44] pad44;
    int32_t f44;
};

int32_t* fun_2090(int32_t a1) {
    struct s455* ebx2;

    goto ebx2->f44;
}

/* std::length_error::length_error(char const*) */
void _ZNSt12length_errorC2EPKc(int32_t* a1, uint32_t a2) {
    int32_t v3;

    fun_422e();
    fun_2080(a1, a2);
    *a1 = *reinterpret_cast<int32_t*>(v3 + reinterpret_cast<int32_t>("68KeoyarBpT+jN2ofzc7EYFGwN5O9IVI5xeguZBekDHGvRJ+GYA2CG3uhrc2UkXJ1Q55RwFMOXkpD/BoJC6+iPv2cAbOPtpgQOwS0irTalP+FRJFyf0/jv53g8nIua9C+tY0jVpuNLCnKNrXvoxEj5eX+pPdsOGj1sBGNfhIt4PJ+vmvQtpWNI1nLjSwvqja15eMRI+dl/qT1vDho+EFHlUU0L0f+NR+HnQapxVIbcA2NzZuhqO41BRmsy6l9TFL9Qk7duPWtjtW/NDEW7tpLw0X/rmh8Y5CkMtty3Ygbh5NKQhn15HPMPpp3aUcUMXLKiFEnlx8MvfzN4PJyJ2Iop21+EBGA8nIt4iinZ2NEP67M+lJgUsqEMXaRa66cJihyYiw0PvBXXvlavhaBy8vAmdQk4FiHr8MOimGeEmMSxERAV175Wx2SEMkq2plbjoEfr+1llSuJIGiqKfU12IrdMdTlUbS23w9i+1rbc+e4Jq3zapkuvIGAyzBTYhOwJYK9aXE+rnv6QetEturH1J/WtkeVjRhLNSjcV+UTK8buX5DIaFa98EGiIlbmq0CVwxtFqdevGVs1KNxX5RMrzuXugbZnlrGpvXQE2SramV4HBdgDD86XE6OEeajnftV9zEkLYXS0gJ0nzL9Lh5NIFLSAkXJzlZhA9fvnu2otYRDLPIGAftbOrFmRWw8dLllC8ujW5T3fNYIbFyTLoLl33q5Adc2sRlXbn+yN31GFiaRhG9c6HC4PRgDjJQ+fT+OyLeDyfr5r0LaVjSNcKepK8h3s6KGsERujGYZYvr5gsqeLZmTaC0hS+n0tv1sQbZiCzjRyx9Ex9SsDQvNT/78Ai0hS+g0tv1pwbZiLFhmcg99z325fN/64DvyC1eb8nkpm+WVeset25MrmP1MUDHGnpClEayFSOc0lVWtyAMkfBuekDHGnVQ8YK9c0YR4PShwjJQYA5ZjMAM+7szTOrCjDBGCerbFSOc0oLmQV5Axxp6vsXchK2ODTcu/wjbJiNUX4Ynk") + 0xc4) + 8;
    goto a1;
}

struct s456 {
    signed char[8] pad8;
    int32_t f8;
};

struct s457 {
    signed char[8] pad8;
    void** f8;
};

void fun_458c() {
    int32_t ecx1;
    struct s456* ebp2;
    void** v3;
    struct s457* ebp4;
    int32_t ebp5;
    void** v6;
    void** v7;
    void** v8;
    int32_t v9;
    int32_t v10;

    ecx1 = ebp2->f8;
    v3 = ebp4->f8;
    *reinterpret_cast<int32_t*>(ebp5 - 8) = ecx1;
    _ZNKSt6__ndk117__compressed_pairINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE5__repES5_E5firstEv(v3, v6, v7, v8, v9);
    goto v10;
}

void fun_3d2c();

/* std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::__alloc() const */
void** _ZNKSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE7__allocEv(void** a1, void** a2);

/* std::__ndk1::allocator_traits<std::__ndk1::allocator<char> >::max_size(std::__ndk1::allocator<char> const&) */
int32_t _ZNSt6__ndk116allocator_traitsINS_9allocatorIcEEE8max_sizeERKS2_(void** a1, void** a2);

/* std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::max_size() const */
void** _ZNKSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE8max_sizeEv(void** a1) {
    void** eax2;

    fun_3d2c();
    eax2 = _ZNKSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE7__allocEv(a1, a1);
    _ZNSt6__ndk116allocator_traitsINS_9allocatorIcEEE8max_sizeERKS2_(eax2, a1);
    goto a1;
}

void fun_48ae();

/* std::__ndk1::__less<unsigned int, unsigned int>::operator()(unsigned int const&, unsigned int const&) const */
unsigned char _ZNKSt6__ndk16__lessIjjEclERKjS3_(void* a1, void** a2, void** a3, void** a4, void** a5);

/* unsigned int const& std::__ndk1::max<unsigned int, std::__ndk1::__less<unsigned int, unsigned int> >(unsigned int const&, unsigned int const&, std::__ndk1::__less<unsigned int, unsigned int>) */
void _ZNSt6__ndk13maxIjNS_6__lessIjjEEEERKT_S5_S5_T0_(void** a1, void** a2) {
    unsigned char al3;

    fun_48ae();
    al3 = _ZNKSt6__ndk16__lessIjjEclERKjS3_(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 - 16, a1, a2, a1, a2);
    if (al3 & 1) {
    }
    goto a1;
}

void fun_3a1c();

/* std::__ndk1::__compressed_pair_elem<std::__ndk1::allocator<char>, 1, true>::__get() */
void** _ZNSt6__ndk122__compressed_pair_elemINS_9allocatorIcEELi1ELb1EE5__getEv(void** a1);

/* std::__ndk1::__compressed_pair<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::__rep, std::__ndk1::allocator<char> >::second() */
void _ZNSt6__ndk117__compressed_pairINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE5__repES5_E6secondEv(void** a1) {
    fun_3a1c();
    _ZNSt6__ndk122__compressed_pair_elemINS_9allocatorIcEELi1ELb1EE5__getEv(a1);
    goto a1;
}

void fun_386e();

/* std::__ndk1::__libcpp_deallocate(void*, unsigned int, unsigned int) */
void _ZNSt6__ndk119__libcpp_deallocateEPvjj(void** a1, void** a2, int32_t a3);

/* std::__ndk1::allocator<char>::deallocate(char*, unsigned int) */
void _ZNSt6__ndk19allocatorIcE10deallocateEPcj(void** a1, void** a2, void** a3, void** a4, void** a5) {
    fun_386e();
    _ZNSt6__ndk119__libcpp_deallocateEPvjj(a2, a3, 1);
    goto a1;
}

struct s458 {
    signed char[8] pad8;
    int32_t f8;
};

struct s459 {
    signed char[8] pad8;
    void** f8;
};

void fun_4a4c() {
    int32_t ecx1;
    struct s458* ebp2;
    void** v3;
    struct s459* ebp4;
    int32_t ebp5;
    int32_t ebp6;
    void** v7;
    void** v8;
    void** v9;
    int32_t v10;
    struct s4* eax11;
    int32_t v12;

    ecx1 = ebp2->f8;
    v3 = ebp4->f8;
    *reinterpret_cast<int32_t*>(ebp5 - 8) = reinterpret_cast<int32_t>(__return_address()) + reinterpret_cast<int32_t>("jxaSXE+rnp7xP4bmOKyxHM+ZCs7mgaY3mhbOny8/GUCaR7yEQPc0m4QRHqs9mZexP+8rfB51ztEG0KXeaRh1oIf+jpPCjxeeXE+qtf/bBm7Rw/u8YJfCfCg87eLVRZlk6ekJcSOEUGFy4HCxfuAODNnlTOiwQC3ETJvKd31RN3YgCxCbhBEe+bGnufcpmN6ZvyeTsNEP6zX6wN59epCF/vPRchlwMFeXo8Eg96JmgG19x1seTnyPhH99oQYn/ebSP47ELOiwQg62Mq/mPfUXE3YgCehc1m9rHn9AZ6bgEkTYAe5mgPehx1htfnyPHk3+89FyGXAwVVuxRj3c4LQyDQzHCKyy5juZCRzNO/7H7N+JqIqvch9+M6OLmybzqRn+89FyGXAwVzOrq1+rnjJBOOCPSq31tW50PjEC5jissRzPmQrO5oGmN5oWzp8vPxlAmke8hED3NJuEER6rPZmWb+bDpGVfWjmh5s61ncPno/0r9Qlx/vPQVhlwMjPOfLcAU7Agf32jhif95Qb0QTuMsuY4rRqUWQKmS6zYU7AjAf7z0XIZcDBW4ibgc3g8nIn5ryf2OiZ49UemiLSLe20oEGem4yC1e73k0gbifXqQhw+lHPAHYwIqDsAgf+g4P7nXvlQU21HtzLKhDF27gX2cmbiphVEkXJxKcwSWOzVcFIt4PJy8Xi0NR6aIt+iynCpu0cP6vbByzL6C0hWTo/H7GWupFlWTPRA5kpdlfcdYbArOo4iw+2LgjO5V6FyyoQ6A57zQnIt4PC+vmvTVpWNLCnLjSXvqjaz5eMRJPdl/qj1vDhlVv/SuvH0eDRZAA1UkXJ1T+O/n0Dyci3r0L6+bSNWlY0sKcuGte+qPxoxGjhgY1yh2gK95GTTA4/0jkD8C7N1KWk3EVUpCqJJwULlPAwC+BAFDFVXW+Q0TodWqnOreebFWqDW4Q5+XQX55xu0oTN+Ci/aIgWdukMg==7ai6NPV2bXGQr0Np5ImWzUjl6PCgPeiZ1htfcSPHk58UeVS");
    *reinterpret_cast<int32_t*>(ebp6 - 12) = ecx1;
    eax11 = _ZNKSt6__ndk117__compressed_pairINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE5__repES5_E5firstEv(v3, v7, v8, v9, v10);
    _ZNSt6__ndk114pointer_traitsIPKcE10pointer_toERS1_(&eax11->pad4);
    goto v12;
}

struct s460 {
    signed char[8] pad8;
    int32_t f8;
};

struct s461 {
    signed char[8] pad8;
    void** f8;
};

void fun_4a1c() {
    int32_t ecx1;
    struct s460* ebp2;
    void** v3;
    struct s461* ebp4;
    int32_t ebp5;
    void** v6;
    void** v7;
    void** v8;
    int32_t v9;
    int32_t v10;

    ecx1 = ebp2->f8;
    v3 = ebp4->f8;
    *reinterpret_cast<int32_t*>(ebp5 - 8) = ecx1;
    _ZNKSt6__ndk117__compressed_pairINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE5__repES5_E5firstEv(v3, v6, v7, v8, v9);
    goto v10;
}

void fun_4c7c();

struct s462 {
    signed char[58024] pad58024;
    void** f58024;
};

/* std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::capacity() const */
void** _ZNKSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE8capacityEv(void** a1, void** a2, void** a3, void** a4) {
    struct s462* v5;
    void** ebx6;
    void** ebp7;
    unsigned char al8;

    fun_4c7c();
    al8 = _ZNKSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9__is_longEv(a1, a1, a1, reinterpret_cast<int32_t>(v5) + reinterpret_cast<uint32_t>("DrYxF+Y99AsTdiJt6FzXQ2sefBBnpuCAhtjqQ7695VS2NUFeOd+0fR4OvY9vqYRwYXLgDLF+4U4M2eQs6LBDycRMmTZ3fVMTdiAJHJuEE7r5saTd9ymZFy8WGucsSxWGhPvzwtFlviVe5HuJ+LFgYiH1nf7z0XIZcDBW4ibgc3g8nIua9C+tY0jVpuNLCnKNrXvoxEj5eX+pPdsOGj1to4R/feUGJ/7G0j+MQCzosq4OtjEX5j30CxN2Im3oXNdDax58EGem4JdSLTQ8nIt69C+vm0jVpWNLCnLhrXvqjEj5eMepPdl+Gj1vD9Fx/vAwVhly4HLiJJyLeD4p2diJD+uw0lwbS8Fy4HBhfuAMsNnlTgywQCzoTJvJx31RNnYgCxN3hBEcmbGnuvspmN324eTSBS0gJF3ZJHiDX8P4MY6kbCZu0cP6vbByzL6C0hfWn0tvJMFD9Kyy5juZCRzOgabO5hbON5s/Gp8uR71AmPc0hEARHJuFmZarPNekhTIUvoLTb9afSDanA83D+m7TIqWTfB51z30G0KbSaRh13If+jaPCjxaSXE+rnp7xP4bmOKyxHM+ZCs7mgaY3mhbOny8/GUCaR7yEQPc0m4QRHqs9mZexP+8rfB51ztEG0KXeaRh1oIf+jpPCjxeeXE+qtf/bBm7Rw/u8YJfCfCg87eLVRZlk6ekJcSOEUGFy4HCxfuAODNnlTOiwQC3ETJvKd31RN3YgCxCbhBEe+bGnufcpmN6ZvyeTsNEP6zX6wN59epCF/vPRchlwMFeXo8Eg96JmgG19x1seTnyPhH99oQYn/ebSP47ELOiwQg62Mq/mPfUXE3YgCehc1m9rHn9AZ6bgEkTYAe5mgPehx1htfnyPHk3+89FyGXAwVVuxRj3c4LQyDQzHCKyy5juZCRzNO/7H7N+JqIqvch9+M6OLmybzqRn+89FyGXAwVzOrq1+rnjJBOOCPSq31tW50PjEC5jissRzPmQrO5oGmN5oWzp8vPxlAmke8hED3NJuEER6r"), ebx6, ebp7, __return_address(), a1, a2, a3, a4);
    if (al8 & 1) {
        _ZNKSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE14__get_long_capEv(a1);
    }
    goto a1;
}

struct s463 {
    signed char[8] pad8;
    int32_t f8;
};

struct s464 {
    signed char[8] pad8;
    void** f8;
};

/* std::__ndk1::allocator_traits<std::__ndk1::allocator<char> >::__max_size(std::__ndk1::integral_constant<bool, true>, std::__ndk1::allocator<char> const&) */
void _ZNSt6__ndk116allocator_traitsINS_9allocatorIcEEE10__max_sizeENS_17integral_constantIbLb1EEERKS2_(void** a1);

void fun_409c() {
    int32_t ecx1;
    struct s463* ebp2;
    void** v3;
    struct s464* ebp4;
    int32_t ebp5;
    int32_t v6;

    ecx1 = ebp2->f8;
    v3 = ebp4->f8;
    *reinterpret_cast<int32_t*>(ebp5 - 20) = ecx1;
    _ZNSt6__ndk116allocator_traitsINS_9allocatorIcEEE10__max_sizeENS_17integral_constantIbLb1EEERKS2_(v3);
    goto v6;
}

struct s465 {
    signed char[12] pad12;
    int32_t f12;
};

struct s466 {
    signed char[8] pad8;
    int32_t f8;
};

struct s467 {
    signed char[8] pad8;
    void** f8;
};

/* std::__ndk1::__vector_base<unsigned char, std::__ndk1::allocator<unsigned char> >::__vector_base() */
void _ZNSt6__ndk113__vector_baseIhNS_9allocatorIhEEEC2Ev(void** a1);

struct s468 {
    signed char[12] pad12;
    uint32_t f12;
};

struct s469 {
    signed char[12] pad12;
    void** f12;
};

struct s470 {
    signed char[12] pad12;
    void** f12;
};

void fun_6aee() {
    int32_t ecx1;
    struct s465* ebp2;
    int32_t edx3;
    struct s466* ebp4;
    void** esi5;
    struct s467* ebp6;
    int32_t ebp7;
    int32_t ebp8;
    int32_t ebp9;
    int32_t ebp10;
    struct s468* ebp11;
    void** v12;
    struct s469* ebp13;
    void** v14;
    int32_t ebp15;
    void** v16;
    struct s470* ebp17;
    void** v18;
    int32_t ebp19;
    int32_t v20;

    ecx1 = ebp2->f12;
    edx3 = ebp4->f8;
    esi5 = ebp6->f8;
    *reinterpret_cast<int32_t*>(ebp7 - 24) = reinterpret_cast<int32_t>(__return_address()) + 0xc436;
    *reinterpret_cast<int32_t*>(ebp8 - 28) = ecx1;
    *reinterpret_cast<int32_t*>(ebp9 - 32) = edx3;
    *reinterpret_cast<void***>(ebp10 - 36) = esi5;
    _ZNSt6__ndk113__vector_baseIhNS_9allocatorIhEEEC2Ev(esi5);
    if (ebp11->f12 > 0) {
        v12 = ebp13->f12;
        v14 = *reinterpret_cast<void***>(ebp15 - 36);
        _ZNSt6__ndk16vectorIhNS_9allocatorIhEEE11__vallocateEj(v14, v12);
        v16 = ebp17->f12;
        v18 = *reinterpret_cast<void***>(ebp19 - 36);
        _ZNSt6__ndk16vectorIhNS_9allocatorIhEEE18__construct_at_endEj(v18, v16);
    }
    goto v20;
}

struct s471 {
    signed char[8] pad8;
    void* f8;
};

struct s472 {
    signed char[8] pad8;
    void* f8;
};

void fun_507c() {
    int32_t ebp1;
    int32_t ebp2;
    int32_t ebp3;
    signed char* ecx4;
    struct s471* ebp5;
    int32_t ebp6;
    signed char* v7;
    struct s472* ebp8;
    int32_t ebp9;
    int32_t ebp10;
    int32_t ebp11;
    int32_t v12;

    *reinterpret_cast<int32_t*>(ebp1 - 8) = 0;
    *reinterpret_cast<int32_t*>(ebp2 - 12) = reinterpret_cast<int32_t>(__return_address()) + 0xdea8;
    while (*reinterpret_cast<int32_t*>(ebp3 - 8) < 3) {
        ecx4 = reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(ebp5->f8) + (reinterpret_cast<int32_t>(*reinterpret_cast<void**>(ebp6 - 8)) + 1));
        v7 = reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(ebp8->f8) + reinterpret_cast<uint32_t>(*reinterpret_cast<void**>(ebp9 - 8)));
        _Z4swapIhEvRT_S1_(v7, ecx4);
        *reinterpret_cast<int32_t*>(ebp10 - 8) = *reinterpret_cast<int32_t*>(ebp11 - 8) + 1;
    }
    goto v12;
}

void fun_5271();

struct s473 {
    signed char[4812] pad4812;
    void** f4812;
};

/* std::__ndk1::vector<unsigned char, std::__ndk1::allocator<unsigned char> >::vector(unsigned int) */
void _ZNSt6__ndk16vectorIhNS_9allocatorIhEEEC2Ej(void** a1, void** a2);

/* std::__ndk1::vector<std::__ndk1::vector<unsigned char, std::__ndk1::allocator<unsigned char> >, std::__ndk1::allocator<std::__ndk1::vector<unsigned char, std::__ndk1::allocator<unsigned char> > > >::push_back(std::__ndk1::vector<unsigned char, std::__ndk1::allocator<unsigned char> > const&) */
void _ZNSt6__ndk16vectorINS0_IhNS_9allocatorIhEEEENS1_IS3_EEE9push_backERKS3_(void** a1, void** a2);

/* std::__ndk1::vector<unsigned char, std::__ndk1::allocator<unsigned char> >::~vector() */
void _ZNSt6__ndk16vectorIhNS_9allocatorIhEEED2Ev(void** a1, void** a2, void** a3, unsigned char* a4);

/* Cipher::keySchedule() */
void _ZN6Cipher11keyScheduleEv(void** a1, void** a2) {
    void* ebp3;
    void** v4;
    struct s473* v5;
    void* v6;
    void* v7;
    void* v8;
    unsigned char cl9;
    unsigned char* eax10;
    uint32_t v11;
    void*** eax12;
    unsigned char* eax13;
    uint32_t ecx14;
    unsigned char* eax15;
    uint32_t edx16;
    unsigned char* eax17;
    void*** eax18;
    unsigned char* eax19;
    uint32_t ecx20;
    unsigned char* eax21;
    uint32_t edx22;
    unsigned char* eax23;
    void*** eax24;
    unsigned char* eax25;
    uint32_t ecx26;
    unsigned char* eax27;
    uint32_t edx28;
    unsigned char* eax29;
    unsigned char* v30;
    void** v31;

    ebp3 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4);
    fun_5271();
    v4 = reinterpret_cast<void**>(16);
    v5 = reinterpret_cast<struct s473*>(reinterpret_cast<int32_t>(v6) + 0xdcb3);
    _ZNSt6__ndk16vectorIhNS_9allocatorIhEEEC2Ej(reinterpret_cast<int32_t>(ebp3) + 0xffffffe0, 16);
    v7 = reinterpret_cast<void*>(0);
    while (reinterpret_cast<int32_t>(v7) < reinterpret_cast<int32_t>(10)) {
        _ZN6Cipher16generateFirstRowEiPh(v7, reinterpret_cast<int32_t>(ebp3) + 0xfffffff0);
        v8 = reinterpret_cast<void*>(0);
        while (reinterpret_cast<int32_t>(v8) < reinterpret_cast<int32_t>(4)) {
            cl9 = *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(ebp3) + reinterpret_cast<uint32_t>(v8) + 0xfffffff0);
            eax10 = _ZNSt6__ndk16vectorIhNS_9allocatorIhEEEixEj(reinterpret_cast<int32_t>(ebp3) + 0xffffffe0, reinterpret_cast<uint32_t>(v8) << 2);
            *eax10 = cl9;
            v8 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(v8) + 1);
        }
        v11 = 0;
        while (reinterpret_cast<int32_t>(v11) < reinterpret_cast<int32_t>(4)) {
            eax12 = _ZNSt6__ndk16vectorINS0_IhNS_9allocatorIhEEEENS1_IS3_EEEixEj(&v5->f4812, v7);
            eax13 = _ZNSt6__ndk16vectorIhNS_9allocatorIhEEEixEj(eax12, v11 * 4 + 1);
            ecx14 = *eax13;
            eax15 = _ZNSt6__ndk16vectorIhNS_9allocatorIhEEEixEj(reinterpret_cast<int32_t>(ebp3) + 0xffffffe0, v11 << 2);
            edx16 = ecx14 ^ static_cast<uint32_t>(*eax15);
            eax17 = _ZNSt6__ndk16vectorIhNS_9allocatorIhEEEixEj(reinterpret_cast<int32_t>(ebp3) + 0xffffffe0, v11 * 4 + 1);
            *eax17 = *reinterpret_cast<unsigned char*>(&edx16);
            eax18 = _ZNSt6__ndk16vectorINS0_IhNS_9allocatorIhEEEENS1_IS3_EEEixEj(&v5->f4812, v7);
            eax19 = _ZNSt6__ndk16vectorIhNS_9allocatorIhEEEixEj(eax18, v11 * 4 + 2);
            ecx20 = *eax19;
            eax21 = _ZNSt6__ndk16vectorIhNS_9allocatorIhEEEixEj(reinterpret_cast<int32_t>(ebp3) + 0xffffffe0, v11 * 4 + 1);
            edx22 = ecx20 ^ static_cast<uint32_t>(*eax21);
            eax23 = _ZNSt6__ndk16vectorIhNS_9allocatorIhEEEixEj(reinterpret_cast<int32_t>(ebp3) + 0xffffffe0, v11 * 4 + 2);
            *eax23 = *reinterpret_cast<unsigned char*>(&edx22);
            eax24 = _ZNSt6__ndk16vectorINS0_IhNS_9allocatorIhEEEENS1_IS3_EEEixEj(&v5->f4812, v7);
            eax25 = _ZNSt6__ndk16vectorIhNS_9allocatorIhEEEixEj(eax24, v11 * 4 + 3);
            ecx26 = *eax25;
            eax27 = _ZNSt6__ndk16vectorIhNS_9allocatorIhEEEixEj(reinterpret_cast<int32_t>(ebp3) + 0xffffffe0, v11 * 4 + 2);
            edx28 = ecx26 ^ static_cast<uint32_t>(*eax27);
            eax29 = _ZNSt6__ndk16vectorIhNS_9allocatorIhEEEixEj(reinterpret_cast<int32_t>(ebp3) + 0xffffffe0, v11 * 4 + 3);
            v30 = eax29;
            *v30 = *reinterpret_cast<unsigned char*>(&edx28);
            ++v11;
        }
        v4 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp3) + 0xffffffe0);
        _ZNSt6__ndk16vectorINS0_IhNS_9allocatorIhEEEENS1_IS3_EEE9push_backERKS3_(&v5->f4812, v4);
        v7 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(v7) + 1);
    }
    _ZNSt6__ndk16vectorIhNS_9allocatorIhEEED2Ev(reinterpret_cast<int32_t>(ebp3) + 0xffffffe0, v4, v31, v30);
    goto a1;
}

void fun_695d();

/* std::__ndk1::vector<unsigned char, std::__ndk1::allocator<unsigned char> >::__annotate_delete() const */
void _ZNKSt6__ndk16vectorIhNS_9allocatorIhEEE17__annotate_deleteEv(void** a1);

/* std::__ndk1::__vector_base<unsigned char, std::__ndk1::allocator<unsigned char> >::~__vector_base() */
void _ZNSt6__ndk113__vector_baseIhNS_9allocatorIhEEED2Ev(void** a1);

/* std::__ndk1::vector<unsigned char, std::__ndk1::allocator<unsigned char> >::~vector() */
void _ZNSt6__ndk16vectorIhNS_9allocatorIhEEED2Ev(void** a1, void** a2, void** a3, unsigned char* a4) {
    fun_695d();
    _ZNKSt6__ndk16vectorIhNS_9allocatorIhEEE17__annotate_deleteEv(a1);
    _ZNSt6__ndk113__vector_baseIhNS_9allocatorIhEEED2Ev(a1);
    goto a1;
}

void fun_6cee();

/* std::__ndk1::allocator_traits<std::__ndk1::allocator<char> >::select_on_container_copy_construction(std::__ndk1::allocator<char> const&) */
void _ZNSt6__ndk116allocator_traitsINS_9allocatorIcEEE37select_on_container_copy_constructionERKS2_(void* a1, void** a2);

/* std::__ndk1::__compressed_pair<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::__rep, std::__ndk1::allocator<char> >::__compressed_pair<std::__ndk1::allocator<char> >(std::__ndk1::__second_tag, std::__ndk1::allocator<char>&&) */
void _ZNSt6__ndk117__compressed_pairINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE5__repES5_EC2IS5_EENS_12__second_tagEOT_(void** a1, void** a2);

struct s474 {
    signed char[49718] pad49718;
    void** f49718;
};

/* std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */
void _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(void** a1, void** a2) {
    void* ebp3;
    void** v4;
    void** eax5;
    void** v6;
    void** v7;
    void** v8;
    void** v9;
    void** v10;
    void** v11;
    struct s474* v12;
    unsigned char al13;
    void** v14;
    void** eax15;
    void** v16;
    void** eax17;
    void** v18;
    void** eax19;
    void** v20;
    void** v21;
    int32_t v22;
    struct s4* eax23;
    void** v24;
    void** v25;
    void** v26;
    void** v27;
    struct s3* eax28;

    ebp3 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4);
    fun_6cee();
    eax5 = _ZNKSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE7__allocEv(a2, v4);
    _ZNSt6__ndk116allocator_traitsINS_9allocatorIcEEE37select_on_container_copy_constructionERKS2_(reinterpret_cast<int32_t>(ebp3) - 24, eax5);
    v6 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp3) + 0xffffffe8);
    _ZNSt6__ndk117__compressed_pairINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE5__repES5_EC2IS5_EENS_12__second_tagEOT_(a1, v6);
    al13 = _ZNKSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9__is_longEv(a2, v6, v7, v8, v9, v10, v11, a1, a1, a2, &v12->f49718);
    if (al13 & 1) {
        eax15 = _ZNKSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE18__get_long_pointerEv(a2, v6, v14);
        eax17 = _ZNSt6__ndk116__to_raw_pointerIKcEEPT_S3_(eax15, v6, v16);
        eax19 = _ZNKSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE15__get_long_sizeEv(a2, v6, v18);
        _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6__initEPKcj(a1, eax17, eax19);
    } else {
        eax23 = _ZNKSt6__ndk117__compressed_pairINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE5__repES5_E5firstEv(a2, v6, v20, v21, v22);
        eax28 = _ZNSt6__ndk117__compressed_pairINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE5__repES5_E5firstEv(a1, v6, v24, v25, v26, v27, eax23);
        eax28->f0 = eax23->f0;
        eax28->f4 = eax23->f4;
        eax28->f8 = eax23->f8;
    }
    goto a1;
}

struct s475 {
    signed char[8] pad8;
    int32_t f8;
};

struct s476 {
    signed char[8] pad8;
    void** f8;
};

struct s477 {
    signed char[8] pad8;
    void** f8;
};

struct s478 {
    signed char[8] pad8;
    void** f8;
};

void fun_581c() {
    int32_t ecx1;
    struct s475* ebp2;
    void** v3;
    struct s476* ebp4;
    int32_t ebp5;
    int32_t ebp6;
    void** v7;
    void** v8;
    void** v9;
    void** v10;
    void** v11;
    void** v12;
    void** eax13;
    void** v14;
    struct s477* ebp15;
    void** v16;
    void** v17;
    void** v18;
    void** v19;
    void** v20;
    void** eax21;
    void** v22;
    struct s478* ebp23;
    int32_t ebp24;
    void** v25;
    int32_t v26;

    ecx1 = ebp2->f8;
    v3 = ebp4->f8;
    *reinterpret_cast<int32_t*>(ebp5 - 8) = reinterpret_cast<int32_t>(__return_address()) + 0xd708;
    *reinterpret_cast<int32_t*>(ebp6 - 12) = ecx1;
    eax13 = _ZNKSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE4sizeEv(v3, v7, v8, v9, v10, v11, v12);
    if (reinterpret_cast<unsigned char>(eax13) & 15) {
        while (v14 = ebp15->f8, eax21 = _ZNKSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE4sizeEv(v14, 0, v16, v17, v18, v19, v20), !!(reinterpret_cast<unsigned char>(eax21) & 15)) {
            v22 = ebp23->f8;
            *reinterpret_cast<int32_t*>(ebp24 - 16) = 0;
            _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc(v22, 0, v25);
        }
    }
    goto v26;
}

void fun_6ded();

struct s479 {
    signed char[49463] pad49463;
    void** f49463;
};

/* std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::operator=(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */
void _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(void** a1, void** a2) {
    void** v3;
    void** v4;
    int32_t v5;
    int32_t v6;
    int32_t v7;
    int32_t v8;
    void** eax9;
    void** v10;
    void** v11;
    struct s479* v12;
    int32_t v13;
    int32_t v14;
    void** eax15;

    fun_6ded();
    if (a1 != a2) {
        _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE19__copy_assign_allocERKS5_(a1, a2);
        eax9 = _ZNKSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE4dataEv(a2, a2, v3, v4, v5, a2, a2, v6, v7, v8);
        eax15 = _ZNKSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE4sizeEv(a2, a2, v10, v11, eax9, a1, &v12->f49463, a2, a2, v13, v14, eax9, a1, &v12->f49463);
        _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6assignEPKcj(a1, eax9, eax15);
    }
    goto a1;
}

struct s480 {
    signed char[8] pad8;
    int32_t f8;
};

struct s481 {
    signed char[8] pad8;
    void** f8;
};

void fun_685e() {
    int32_t edx1;
    struct s480* ebp2;
    void** esi3;
    struct s481* ebp4;
    int32_t ebp5;
    int32_t ebp6;
    int32_t ebp7;
    int32_t ebp8;
    int32_t ebp9;
    struct s13* v10;
    int32_t ebp11;
    void** v12;
    void** eax13;
    struct s13* v14;
    int32_t ebp15;
    void** v16;
    void** eax17;
    void** v18;
    int32_t ebp19;
    struct s13* v20;
    int32_t ebp21;
    void** eax22;
    struct s13* v23;
    int32_t ebp24;
    int32_t ebp25;
    void** eax26;
    struct s13* v27;
    int32_t ebp28;
    int32_t ebp29;
    void** eax30;
    void** v31;
    int32_t ebp32;
    void** v33;
    int32_t ebp34;
    void** v35;
    int32_t ebp36;
    int32_t v37;

    edx1 = ebp2->f8;
    esi3 = ebp4->f8;
    *reinterpret_cast<int32_t*>(ebp5 - 24) = reinterpret_cast<int32_t>(__return_address()) + 0xc6c6;
    *reinterpret_cast<int32_t*>(ebp6 - 28) = ebp7 + 12;
    *reinterpret_cast<int32_t*>(ebp8 - 32) = edx1;
    *reinterpret_cast<void***>(ebp9 - 36) = esi3;
    _ZNSt6__ndk113__vector_baseIhNS_9allocatorIhEEEC2Ev(esi3);
    v10 = *reinterpret_cast<struct s13**>(ebp11 - 28);
    eax13 = _ZNKSt16initializer_listIhE4sizeEv(v10, v12);
    if (reinterpret_cast<unsigned char>(eax13) > reinterpret_cast<unsigned char>(0)) {
        v14 = *reinterpret_cast<struct s13**>(ebp15 - 28);
        eax17 = _ZNKSt16initializer_listIhE4sizeEv(v14, v16);
        v18 = *reinterpret_cast<void***>(ebp19 - 36);
        _ZNSt6__ndk16vectorIhNS_9allocatorIhEEE11__vallocateEj(v18, eax17);
        v20 = *reinterpret_cast<struct s13**>(ebp21 - 28);
        eax22 = _ZNKSt16initializer_listIhE5beginEv(v20, eax17);
        v23 = *reinterpret_cast<struct s13**>(ebp24 - 28);
        *reinterpret_cast<void***>(ebp25 - 40) = eax22;
        eax26 = _ZNKSt16initializer_listIhE3endEv(v23, eax17);
        v27 = *reinterpret_cast<struct s13**>(ebp28 - 28);
        *reinterpret_cast<void***>(ebp29 - 44) = eax26;
        eax30 = _ZNKSt16initializer_listIhE4sizeEv(v27, eax17);
        v31 = *reinterpret_cast<void***>(ebp32 - 44);
        v33 = *reinterpret_cast<void***>(ebp34 - 40);
        v35 = *reinterpret_cast<void***>(ebp36 - 36);
        _ZNSt6__ndk16vectorIhNS_9allocatorIhEEE18__construct_at_endIPKhEENS_9enable_ifIXsr21__is_forward_iteratorIT_EE5valueEvE4typeES8_S8_j(v35, v33, v31, eax30);
    }
    goto v37;
}

void fun_726d();

/* std::__ndk1::__vector_base<unsigned char, std::__ndk1::allocator<unsigned char> >::__alloc() const */
void** _ZNKSt6__ndk113__vector_baseIhNS_9allocatorIhEEE7__allocEv(void** a1);

/* std::__ndk1::allocator_traits<std::__ndk1::allocator<unsigned char> >::max_size(std::__ndk1::allocator<unsigned char> const&) */
int32_t _ZNSt6__ndk116allocator_traitsINS_9allocatorIhEEE8max_sizeERKS2_(void** a1);

/* std::__ndk1::numeric_limits<int>::max() */
int32_t _ZNSt6__ndk114numeric_limitsIiE3maxEv(void** a1);

/* unsigned int const& std::__ndk1::min<unsigned int>(unsigned int const&, unsigned int const&) */
int32_t _ZNSt6__ndk13minIjEERKT_S3_S3_(void** a1, void** a2);

/* std::__ndk1::vector<unsigned char, std::__ndk1::allocator<unsigned char> >::max_size() const */
void** _ZNKSt6__ndk16vectorIhNS_9allocatorIhEEE8max_sizeEv(void** a1) {
    void* ebp2;
    void** eax3;

    ebp2 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4);
    fun_726d();
    eax3 = _ZNKSt6__ndk113__vector_baseIhNS_9allocatorIhEEE7__allocEv(a1);
    _ZNSt6__ndk116allocator_traitsINS_9allocatorIhEEE8max_sizeERKS2_(eax3);
    _ZNSt6__ndk114numeric_limitsIiE3maxEv(eax3);
    _ZNSt6__ndk13minIjEERKT_S3_S3_(reinterpret_cast<int32_t>(ebp2) + 0xfffffff4, reinterpret_cast<int32_t>(ebp2) + 0xfffffff0);
    goto a1;
}

struct s482 {
    signed char[20] pad20;
    void** f20;
};

struct s483 {
    signed char[16] pad16;
    int32_t f16;
};

struct s484 {
    signed char[12] pad12;
    int32_t f12;
};

struct s485 {
    signed char[8] pad8;
    int32_t f8;
};

struct s486 {
    signed char[8] pad8;
    void** f8;
};

struct s487 {
    signed char[20] pad20;
    void** f20;
};

struct s488 {
    signed char[12] pad12;
    void** f12;
};

struct s489 {
    signed char[16] pad16;
    void** f16;
};

struct s490 {
    signed char[4] pad4;
    void** f4;
};

void fun_6fde() {
    void** ecx1;
    struct s482* ebp2;
    int32_t edx3;
    struct s483* ebp4;
    int32_t esi5;
    struct s484* ebp6;
    int32_t edi7;
    struct s485* ebp8;
    void** ebx9;
    struct s486* ebp10;
    int32_t ebp11;
    int32_t ebp12;
    int32_t ebp13;
    int32_t ebp14;
    int32_t ebp15;
    int32_t ebp16;
    void** v17;
    void** eax18;
    int32_t ebp19;
    void** eax20;
    struct s487* ebp21;
    void** v22;
    int32_t ebp23;
    int32_t ebp24;
    void** ecx25;
    struct s488* ebp26;
    void** edx27;
    struct s489* ebp28;
    void** esi29;
    int32_t ebp30;
    void** v31;
    int32_t ebp32;
    int32_t ebp33;
    void** v34;
    void** v35;
    void** v36;
    void** v37;
    void** v38;
    int32_t v39;

    ecx1 = ebp2->f20;
    edx3 = ebp4->f16;
    esi5 = ebp6->f12;
    edi7 = ebp8->f8;
    ebx9 = ebp10->f8;
    *reinterpret_cast<void***>(ebp11 - 28) = ebx9;
    *reinterpret_cast<int32_t*>(ebp12 - 32) = reinterpret_cast<int32_t>(__return_address()) + 0xbf46;
    *reinterpret_cast<void***>(ebp13 - 36) = ecx1;
    *reinterpret_cast<int32_t*>(ebp14 - 40) = edx3;
    *reinterpret_cast<int32_t*>(ebp15 - 44) = esi5;
    *reinterpret_cast<int32_t*>(ebp16 - 48) = edi7;
    eax18 = _ZNSt6__ndk113__vector_baseIhNS_9allocatorIhEEE7__allocEv(ecx1, ebx9, v17);
    *reinterpret_cast<void***>(ebp19 - 16) = eax18;
    eax20 = ebp21->f20;
    v22 = *reinterpret_cast<void***>(ebp23 - 28);
    _ZNSt6__ndk16vectorIhNS_9allocatorIhEEE24__RAII_IncreaseAnnotatorC2ERKS3_j(ebp24 - 24, v22, eax20);
    ecx25 = ebp26->f12;
    edx27 = ebp28->f16;
    esi29 = reinterpret_cast<void**>(&(*reinterpret_cast<struct s490**>(ebp30 - 28))->f4);
    v31 = *reinterpret_cast<void***>(ebp32 - 16);
    _ZNSt6__ndk116allocator_traitsINS_9allocatorIhEEE25__construct_range_forwardIKhhhhEENS_9enable_ifIXaaaasr31is_trivially_move_constructibleIT0_EE5valuesr7is_sameIT1_T2_EE5valueooL_ZNS_17integral_constantIbLb1EE5valueEEntsr15__has_constructIS2_PS7_RT_EE5valueEvE4typeERS2_PSD_SI_RSC_(v31, ecx25, edx27, esi29);
    _ZNSt6__ndk16vectorIhNS_9allocatorIhEEE24__RAII_IncreaseAnnotator6__doneEv(ebp33 - 24, ecx25, edx27, esi29, v34, v35, v36, v37, v38);
    goto v39;
}

struct s491 {
    signed char[12] pad12;
    void** f12;
};

struct s492 {
    signed char[8] pad8;
    int32_t f8;
};

struct s493 {
    signed char[8] pad8;
    void** f8;
};

struct s494 {
    signed char[4] pad4;
    void** f4;
};

struct s495 {
    signed char[4] pad4;
    int32_t f4;
};

struct s496 {
    signed char[12] pad12;
    int32_t f12;
};

struct s497 {
    signed char[12] pad12;
    int32_t f12;
};

struct s498 {
    signed char[12] pad12;
    uint32_t f12;
};

void fun_840e() {
    void** ecx1;
    struct s491* ebp2;
    int32_t edx3;
    struct s492* ebp4;
    void** esi5;
    struct s493* ebp6;
    int32_t ebp7;
    int32_t ebp8;
    int32_t ebp9;
    int32_t ebp10;
    void** v11;
    void** eax12;
    int32_t ebp13;
    void** v14;
    int32_t ebp15;
    int32_t ebp16;
    int32_t eax17;
    int32_t ebp18;
    void** v19;
    int32_t ebp20;
    int32_t ebp21;
    void** v22;
    void** v23;
    void** v24;
    void** v25;
    void** eax26;
    void** v27;
    int32_t ebp28;
    int32_t ebp29;
    struct s496* ebp30;
    struct s497* ebp31;
    int32_t ebp32;
    void** v33;
    void** v34;
    void** v35;
    void** v36;
    void** v37;
    void** v38;
    struct s498* ebp39;
    int32_t v40;

    ecx1 = ebp2->f12;
    edx3 = ebp4->f8;
    esi5 = ebp6->f8;
    *reinterpret_cast<int32_t*>(ebp7 - 28) = reinterpret_cast<int32_t>(__return_address()) + 0xab16;
    *reinterpret_cast<void***>(ebp8 - 32) = ecx1;
    *reinterpret_cast<int32_t*>(ebp9 - 36) = edx3;
    *reinterpret_cast<void***>(ebp10 - 40) = esi5;
    eax12 = _ZNSt6__ndk113__vector_baseIhNS_9allocatorIhEEE7__allocEv(ecx1, esi5, v11);
    *reinterpret_cast<void***>(ebp13 - 16) = eax12;
    do {
        v14 = *reinterpret_cast<void***>(ebp15 - 40);
        _ZNSt6__ndk16vectorIhNS_9allocatorIhEEE24__RAII_IncreaseAnnotatorC2ERKS3_j(ebp16 - 24, v14, 1);
        eax17 = *reinterpret_cast<int32_t*>(ebp18 - 16);
        v19 = (*reinterpret_cast<struct s494**>(ebp20 - 40))->f4;
        *reinterpret_cast<int32_t*>(ebp21 - 44) = eax17;
        eax26 = _ZNSt6__ndk116__to_raw_pointerIhEEPT_S2_(v19, v14, 1, v22, v23, v24, v25);
        v27 = *reinterpret_cast<void***>(ebp28 - 44);
        _ZNSt6__ndk116allocator_traitsINS_9allocatorIhEEE9constructIhJEEEvRS2_PT_DpOT0_(v27, eax26, 1);
        (*reinterpret_cast<struct s495**>(ebp29 - 40))->f4 = (*reinterpret_cast<struct s495**>(ebp29 - 40))->f4 + 1;
        ebp30->f12 = ebp31->f12 - 1;
        _ZNSt6__ndk16vectorIhNS_9allocatorIhEEE24__RAII_IncreaseAnnotator6__doneEv(ebp32 - 24, eax26, 1, v33, v34, v35, v36, v37, v38);
    } while (ebp39->f12 > 0);
    goto v40;
}

void fun_83bc();

/* std::__ndk1::__compressed_pair_elem<std::__ndk1::allocator<std::__ndk1::vector<unsigned char, std::__ndk1::allocator<unsigned char> > >, 1, true>::__get() */
void** _ZNSt6__ndk122__compressed_pair_elemINS_9allocatorINS_6vectorIhNS1_IhEEEEEELi1ELb1EE5__getEv(void** a1);

/* std::__ndk1::__compressed_pair<std::__ndk1::vector<unsigned char, std::__ndk1::allocator<unsigned char> >*, std::__ndk1::allocator<std::__ndk1::vector<unsigned char, std::__ndk1::allocator<unsigned char> > > >::second() */
void _ZNSt6__ndk117__compressed_pairIPNS_6vectorIhNS_9allocatorIhEEEENS2_IS4_EEE6secondEv(void** a1) {
    fun_83bc();
    _ZNSt6__ndk122__compressed_pair_elemINS_9allocatorINS_6vectorIhNS1_IhEEEEEELi1ELb1EE5__getEv(a1);
    goto a1;
}

/* std::__ndk1::vector<unsigned char, std::__ndk1::allocator<unsigned char> > const& std::__ndk1::forward<std::__ndk1::vector<unsigned char, std::__ndk1::allocator<unsigned char> > const&>(std::__ndk1::remove_reference<std::__ndk1::vector<unsigned char, std::__ndk1::allocator<unsigned char> > const&>::type&) */
void** _ZNSt6__ndk17forwardIRKNS_6vectorIhNS_9allocatorIhEEEEEEOT_RNS_16remove_referenceIS7_E4typeE(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9) {
    return a1;
}

void fun_87ae();

struct s499 {
    signed char[42870] pad42870;
    void** f42870;
};

/* void std::__ndk1::allocator<std::__ndk1::vector<unsigned char, std::__ndk1::allocator<unsigned char> > >::construct<std::__ndk1::vector<unsigned char, std::__ndk1::allocator<unsigned char> >, std::__ndk1::vector<unsigned char, std::__ndk1::allocator<unsigned char> > const&>(std::__ndk1::vector<unsigned char, std::__ndk1::allocator<unsigned char> >*, std::__ndk1::vector<unsigned char, std::__ndk1::allocator<unsigned char> > const&) */
void _ZNSt6__ndk19allocatorINS_6vectorIhNS0_IhEEEEE9constructIS3_JRKS3_EEEvPT_DpOT0_(void** a1, void** a2, void** a3);

/* void std::__ndk1::allocator_traits<std::__ndk1::allocator<std::__ndk1::vector<unsigned char, std::__ndk1::allocator<unsigned char> > > >::__construct<std::__ndk1::vector<unsigned char, std::__ndk1::allocator<unsigned char> >, std::__ndk1::vector<unsigned char, std::__ndk1::allocator<unsigned char> > const&>(std::__ndk1::integral_constant<bool, true>, std::__ndk1::allocator<std::__ndk1::vector<unsigned char, std::__ndk1::allocator<unsigned char> > >&, std::__ndk1::vector<unsigned char, std::__ndk1::allocator<unsigned char> >*, std::__ndk1::vector<unsigned char, std::__ndk1::allocator<unsigned char> > const&) */
void _ZNSt6__ndk116allocator_traitsINS_9allocatorINS_6vectorIhNS1_IhEEEEEEE11__constructIS4_JRKS4_EEEvNS_17integral_constantIbLb1EEERS5_PT_DpOT0_(void** a1, void** a2, void** a3) {
    void** v4;
    void** v5;
    struct s499* v6;
    void** eax7;

    fun_87ae();
    eax7 = _ZNSt6__ndk17forwardIRKNS_6vectorIhNS_9allocatorIhEEEEEEOT_RNS_16remove_referenceIS7_E4typeE(a3, v4, v5, a1, a1, a2, a3, a2, &v6->f42870);
    _ZNSt6__ndk19allocatorINS_6vectorIhNS0_IhEEEEE9constructIS3_JRKS3_EEEvPT_DpOT0_(a1, a2, eax7);
    goto a1;
}

struct s500 {
    signed char[12] pad12;
    void** f12;
};

struct s501 {
    signed char[8] pad8;
    int32_t f8;
};

struct s502 {
    signed char[8] pad8;
    void** f8;
};

struct s503 {
    signed char[12] pad12;
    void** f12;
};

void fun_862e() {
    void** ecx1;
    struct s500* ebp2;
    int32_t edx3;
    struct s501* ebp4;
    void** esi5;
    struct s502* ebp6;
    int32_t ebp7;
    int32_t ebp8;
    int32_t ebp9;
    int32_t ebp10;
    void** v11;
    void** v12;
    void** eax13;
    int32_t ebp14;
    void** v15;
    int32_t ebp16;
    void** v17;
    void** v18;
    void*** v19;
    void** eax20;
    void** v21;
    void** v22;
    int32_t ebp23;
    void** eax24;
    void** v25;
    int32_t ebp26;
    int32_t ebp27;
    void** v28;
    void*** v29;
    void** eax30;
    void** v31;
    int32_t ebp32;
    void** v33;
    int32_t ebp34;
    void* ebp35;
    int32_t eax36;
    int32_t ebp37;
    void** v38;
    int32_t ebp39;
    int32_t ebp40;
    void** v41;
    void** eax42;
    void** v43;
    struct s503* ebp44;
    int32_t ebp45;
    void** v46;
    void** v47;
    void** v48;
    void** v49;
    void** v50;
    void** eax51;
    void** v52;
    int32_t ebp53;
    void** v54;
    int32_t ebp55;
    int32_t ebp56;
    int32_t ebp57;
    void** v58;
    void* ebp59;
    void** v60;
    int32_t ebp61;
    void* ebp62;
    int32_t v63;

    ecx1 = ebp2->f12;
    edx3 = ebp4->f8;
    esi5 = ebp6->f8;
    *reinterpret_cast<int32_t*>(ebp7 - 52) = reinterpret_cast<int32_t>(__return_address()) + 0xa8f6;
    *reinterpret_cast<void***>(ebp8 - 56) = ecx1;
    *reinterpret_cast<int32_t*>(ebp9 - 60) = edx3;
    *reinterpret_cast<void***>(ebp10 - 64) = esi5;
    eax13 = _ZNSt6__ndk113__vector_baseINS_6vectorIhNS_9allocatorIhEEEENS2_IS4_EEE7__allocEv(ecx1, esi5, v11, v12);
    *reinterpret_cast<void***>(ebp14 - 16) = eax13;
    v15 = *reinterpret_cast<void***>(ebp16 - 64);
    eax20 = _ZNKSt6__ndk16vectorINS0_IhNS_9allocatorIhEEEENS1_IS3_EEE4sizeEv(v15, v17, v18, v19);
    v21 = eax20 + 1;
    v22 = *reinterpret_cast<void***>(ebp23 - 64);
    eax24 = _ZNKSt6__ndk16vectorINS0_IhNS_9allocatorIhEEEENS1_IS3_EEE11__recommendEj(v22, v21);
    v25 = *reinterpret_cast<void***>(ebp26 - 64);
    *reinterpret_cast<void***>(ebp27 - 68) = eax24;
    eax30 = _ZNKSt6__ndk16vectorINS0_IhNS_9allocatorIhEEEENS1_IS3_EEE4sizeEv(v25, v21, v28, v29);
    v31 = *reinterpret_cast<void***>(ebp32 - 16);
    v33 = *reinterpret_cast<void***>(ebp34 - 68);
    _ZNSt6__ndk114__split_bufferINS_6vectorIhNS_9allocatorIhEEEERNS2_IS4_EEEC2EjjS6_(reinterpret_cast<int32_t>(ebp35) + 0xffffffd8, v33, eax30, v31);
    eax36 = *reinterpret_cast<int32_t*>(ebp37 - 16);
    v38 = *reinterpret_cast<void***>(ebp39 - 32);
    *reinterpret_cast<int32_t*>(ebp40 - 72) = eax36;
    eax42 = _ZNSt6__ndk116__to_raw_pointerINS_6vectorIhNS_9allocatorIhEEEEEEPT_S6_(v38, v33, eax30, v31, v41);
    v43 = ebp44->f12;
    *reinterpret_cast<void***>(ebp45 - 76) = eax42;
    eax51 = _ZNSt6__ndk17forwardIRKNS_6vectorIhNS_9allocatorIhEEEEEEOT_RNS_16remove_referenceIS7_E4typeE(v43, v33, eax30, v31, v46, v47, v48, v49, v50);
    v52 = *reinterpret_cast<void***>(ebp53 - 76);
    v54 = *reinterpret_cast<void***>(ebp55 - 72);
    _ZNSt6__ndk116allocator_traitsINS_9allocatorINS_6vectorIhNS1_IhEEEEEEE9constructIS4_JRKS4_EEEvRS5_PT_DpOT0_(v54, v52, eax51, v31);
    *reinterpret_cast<int32_t*>(ebp56 - 32) = *reinterpret_cast<int32_t*>(ebp57 - 32) + 12;
    v58 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp59) + 0xffffffd8);
    v60 = *reinterpret_cast<void***>(ebp61 - 64);
    _ZNSt6__ndk16vectorINS0_IhNS_9allocatorIhEEEENS1_IS3_EEE26__swap_out_circular_bufferERNS_14__split_bufferIS3_RS4_EE(v60, v58, eax51, v31);
    _ZNSt6__ndk114__split_bufferINS_6vectorIhNS_9allocatorIhEEEERNS2_IS4_EEED2Ev(reinterpret_cast<int32_t>(ebp62) + 0xffffffd8, v58, eax51, v31);
    goto v63;
}

/* std::__ndk1::__compressed_pair_elem<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::__rep, 0, false>::__get() const */
void** _ZNKSt6__ndk122__compressed_pair_elemINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE5__repELi0ELb0EE5__getEv(void** a1) {
    return a1;
}

/* std::__ndk1::__compressed_pair_elem<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::__rep, 0, false>::__get() */
void** _ZNSt6__ndk122__compressed_pair_elemINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE5__repELi0ELb0EE5__getEv(void** a1) {
    return a1;
}

struct s504 {
    signed char[16] pad16;
    int32_t f16;
};

struct s505 {
    signed char[12] pad12;
    int32_t f12;
};

struct s506 {
    signed char[8] pad8;
    int32_t f8;
};

struct s507 {
    signed char[8] pad8;
    void** f8;
};

struct s508 {
    signed char[16] pad16;
    int32_t f16;
};

struct s509 {
    signed char[16] pad16;
    uint32_t f16;
};

struct s510 {
    signed char[16] pad16;
    void** f16;
};

struct s511 {
    signed char[1] pad1;
    void** f1;
};

struct s512 {
    signed char[1] pad1;
    void** f1;
};

struct s513 {
    signed char[16] pad16;
    void** f16;
};

struct s514 {
    signed char[16] pad16;
    void** f16;
};

struct s515 {
    signed char[12] pad12;
    void** f12;
};

struct s516 {
    signed char[16] pad16;
    void** f16;
};

struct s517 {
    signed char[16] pad16;
    void* f16;
};

void fun_3b0e() {
    int32_t ecx1;
    struct s504* ebp2;
    int32_t edx3;
    struct s505* ebp4;
    int32_t esi5;
    struct s506* ebp6;
    void** edi7;
    struct s507* ebp8;
    int32_t ebx9;
    struct s508* ebp10;
    int32_t ebp11;
    int32_t ebp12;
    int32_t ebp13;
    int32_t ebp14;
    int32_t ebp15;
    int32_t ebp16;
    void** eax17;
    int32_t ebp18;
    void** v19;
    int32_t ebp20;
    struct s509* ebp21;
    void** v22;
    struct s510* ebp23;
    void** v24;
    void** eax25;
    int32_t ebp26;
    void** v27;
    int32_t ebp28;
    void** v29;
    void** v30;
    void** eax31;
    void** ecx32;
    int32_t ebp33;
    void** eax34;
    int32_t ebp35;
    void** eax36;
    int32_t ebp37;
    void** v38;
    int32_t ebp39;
    void** v40;
    void** eax41;
    int32_t ebp42;
    void** v43;
    int32_t ebp44;
    void** v45;
    void** eax46;
    struct s513* ebp47;
    void** v48;
    int32_t ebp49;
    void** v50;
    void** v51;
    void** v52;
    void** v53;
    void** v54;
    void** v55;
    void** v56;
    void** v57;
    void** v58;
    void** v59;
    void** eax60;
    struct s514* ebp61;
    void** v62;
    int32_t ebp63;
    void** v64;
    void** v65;
    void** v66;
    void** v67;
    void** v68;
    void** v69;
    void** v70;
    void** v71;
    int32_t ebp72;
    void** v73;
    void** v74;
    void** v75;
    void** v76;
    void** v77;
    void** v78;
    void** v79;
    void** eax80;
    int32_t ebp81;
    void** v82;
    int32_t ebp83;
    void** v84;
    void** eax85;
    void** ecx86;
    struct s515* ebp87;
    void** edx88;
    struct s516* ebp89;
    void** eax90;
    signed char* ecx91;
    int32_t ebp92;
    struct s517* ebp93;
    int32_t ebp94;
    int32_t ebp95;
    void* ebp96;
    void** v97;
    void** v98;
    void** v99;
    void** v100;
    void** v101;
    void** v102;
    void** v103;
    void** v104;
    int32_t v105;

    ecx1 = ebp2->f16;
    edx3 = ebp4->f12;
    esi5 = ebp6->f8;
    edi7 = ebp8->f8;
    ebx9 = ebp10->f16;
    *reinterpret_cast<int32_t*>(ebp11 - 28) = ebx9;
    *reinterpret_cast<int32_t*>(ebp12 - 32) = reinterpret_cast<int32_t>(__return_address()) + 0xf416;
    *reinterpret_cast<int32_t*>(ebp13 - 36) = ecx1;
    *reinterpret_cast<int32_t*>(ebp14 - 40) = edx3;
    *reinterpret_cast<int32_t*>(ebp15 - 44) = esi5;
    *reinterpret_cast<void***>(ebp16 - 48) = edi7;
    eax17 = _ZNKSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE8max_sizeEv(edi7);
    if (reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(ebp18 - 28)) > reinterpret_cast<unsigned char>(eax17)) {
        v19 = *reinterpret_cast<void***>(ebp20 - 48);
        _ZNKSt6__ndk121__basic_string_commonILb1EE20__throw_length_errorEv(v19);
    }
    if (ebp21->f16 >= 11) {
        v22 = ebp23->f16;
        eax25 = _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE11__recommendEj(v22, v24);
        *reinterpret_cast<void***>(ebp26 - 20) = eax25;
        v27 = *reinterpret_cast<void***>(ebp28 - 48);
        eax31 = _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE7__allocEv(v27, v29, v30);
        ecx32 = reinterpret_cast<void**>(&(*reinterpret_cast<struct s511**>(ebp33 - 20))->f1);
        eax34 = _ZNSt6__ndk116allocator_traitsINS_9allocatorIcEEE8allocateERS2_j(eax31, ecx32);
        *reinterpret_cast<void***>(ebp35 - 16) = eax34;
        eax36 = *reinterpret_cast<void***>(ebp37 - 16);
        v38 = *reinterpret_cast<void***>(ebp39 - 48);
        _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE18__set_long_pointerEPc(v38, eax36, v40);
        eax41 = reinterpret_cast<void**>(&(*reinterpret_cast<struct s512**>(ebp42 - 20))->f1);
        v43 = *reinterpret_cast<void***>(ebp44 - 48);
        _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE14__set_long_capEj(v43, eax41, v45);
        eax46 = ebp47->f16;
        v48 = *reinterpret_cast<void***>(ebp49 - 48);
        v50 = eax46;
        _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE15__set_long_sizeEj(v48, v50, v51, v52, v53, v54, v55, v56, v57, v58, v59);
    } else {
        eax60 = ebp61->f16;
        v62 = *reinterpret_cast<void***>(ebp63 - 48);
        v50 = eax60;
        _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE16__set_short_sizeEj(v62, v50, v64, v65, v66, v67, v68, v69, v70);
        v71 = *reinterpret_cast<void***>(ebp72 - 48);
        eax80 = _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE19__get_short_pointerEv(v71, v50, v73, v74, v75, v76, v77, v78, v79);
        *reinterpret_cast<void***>(ebp81 - 16) = eax80;
    }
    v82 = *reinterpret_cast<void***>(ebp83 - 16);
    eax85 = _ZNSt6__ndk116__to_raw_pointerIcEEPT_S2_(v82, v50, v84);
    ecx86 = ebp87->f12;
    edx88 = ebp89->f16;
    eax90 = _ZNSt6__ndk111char_traitsIcE4copyEPcPKcj(eax85, ecx86, edx88);
    ecx91 = reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(*reinterpret_cast<void**>(ebp92 - 16)) + reinterpret_cast<uint32_t>(ebp93->f16));
    *reinterpret_cast<signed char*>(ebp94 - 21) = 0;
    *reinterpret_cast<void***>(ebp95 - 52) = eax90;
    _ZNSt6__ndk111char_traitsIcE6assignERcRKc(ecx91, reinterpret_cast<int32_t>(ebp96) - 21, edx88, v97, v98, v99, v100, v101, v102, v103, v104);
    goto v105;
}

/* std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::__copy_assign_alloc(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&, std::__ndk1::integral_constant<bool, false>) */
void** _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE19__copy_assign_allocERKS5_NS_17integral_constantIbLb0EEE(void** a1, void** a2) {
    return a2;
}

void fun_49ac();

struct s518 {
    signed char[58744] pad58744;
    void** f58744;
};

/* std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::__get_pointer() const */
void** _ZNKSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE13__get_pointerEv(void** a1, void** a2, void** a3, void** a4, int32_t a5) {
    struct s518* v6;
    void** ebx7;
    void** ebp8;
    unsigned char al9;

    fun_49ac();
    al9 = _ZNKSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9__is_longEv(a1, a1, a1, reinterpret_cast<int32_t>(v6) + reinterpret_cast<uint32_t>("TJvKd31RN3YgCxCbhBEe+bGnufcpmN6ZvyeTsNEP6zX6wN59epCF/vPRchlwMFeXo8Eg96JmgG19x1seTnyPhH99oQYn/ebSP47ELOiwQg62Mq/mPfUXE3YgCehc1m9rHn9AZ6bgEkTYAe5mgPehx1htfnyPHk3+89FyGXAwVVuxRj3c4LQyDQzHCKyy5juZCRzNO/7H7N+JqIqvch9+M6OLmybzqRn+89FyGXAwVzOrq1+rnjJBOOCPSq31tW50PjEC5jissRzPmQrO5oGmN5oWzp8vPxlAmke8hED3NJuEER6rPZmWb+bDpGVfWjmh5s61ncPno/0r9Qlx/vPQVhlwMjPOfLcAU7Agf32jhif95Qb0QTuMsuY4rRqUWQKmS6zYU7AjAf7z0XIZcDBW4ibgc3g8nIn5ryf2OiZ49UemiLSLe20oEGem4yC1e73k0gbifXqQhw+lHPAHYwIqDsAgf+g4P7nXvlQU21HtzLKhDF27gX2cmbiphVEkXJxKcwSWOzVcFIt4PJy8Xi0NR6aIt+iynCpu0cP6vbByzL6C0hWTo/H7GWupFlWTPRA5kpdlfcdYbArOo4iw+2LgjO5V6FyyoQ6A57zQnIt4PC+vmvTVpWNLCnLjSXvqjaz5eMRJPdl/qj1vDhlVv/SuvH0eDRZAA1UkXJ1T+O/n0Dyci3r0L6+bSNWlY0sKcuGte+qPxoxGjhgY1yh2gK95GTTA4/0jkD8C7N1KWk3EVUpCqJJwULlPAwC+BAFDFVXW+Q0TodWqnOreebFWqDW4Q5+XQX55xu0oTN+Ci/aIgWdukMg==7ai6NPV2bXGQr0Np5ImWzUjl6PCgPeiZ1htfcSPHk58UeVSEMzf9Yw3NIDiE3kwVE57U+9AmnUmFHEK6IvfKH2TS7CCq/VbM/O9R5SdZDW14bohAkY4uN9Wm/Col7ZLu07gKfimHuWgt8iNKBQUFBQ==XP5rChOX5IfmEBCR8F2EpKo+9bwFBQUFBQUFBQUFBQU=7ai6NPV2bXG"), ebx7, ebp8, __return_address(), a1, a2, a3, a4);
    if (al9 & 1) {
        _ZNKSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE18__get_long_pointerEv(a1, a1, a1);
    } else {
        _ZNKSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE19__get_short_pointerEv(a1);
    }
    goto a1;
}

/* std::__ndk1::__vector_base_common<true>::__vector_base_common() */
void** _ZNSt6__ndk120__vector_base_commonILb1EEC2Ev(void** a1) {
    return a1;
}

/* std::__ndk1::__compressed_pair<unsigned char*, std::__ndk1::allocator<unsigned char> >::second() */
void _ZNSt6__ndk117__compressed_pairIPhNS_9allocatorIhEEE6secondEv(void** a1) {
    fun_76fc();
    _ZNSt6__ndk122__compressed_pair_elemINS_9allocatorIhEELi1ELb1EE5__getEv(a1);
    goto a1;
}

void fun_767e();

/* std::__ndk1::allocator<unsigned char>::max_size() const */
void** _ZNKSt6__ndk19allocatorIhE8max_sizeEv(void** a1, void** a2, void** a3, void** a4, int32_t a5);

/* std::__ndk1::allocator<unsigned char>::allocate(unsigned int, void const*) */
void _ZNSt6__ndk19allocatorIhE8allocateEjPKv(void** a1, void** a2, void** a3, int32_t a4, void** a5, void** a6, int32_t a7) {
    int32_t v8;
    void** eax9;
    int32_t esi10;

    fun_767e();
    eax9 = _ZNKSt6__ndk19allocatorIhE8max_sizeEv(a1, a1, a2, a3, v8 + 0xb8a6);
    if (reinterpret_cast<unsigned char>(a2) > reinterpret_cast<unsigned char>(eax9)) {
        _ZNSt6__ndk120__throw_length_errorEPKc(v8 + 0xb8a6 + 0xffffb131, a1, a2, a3, v8 + 0xb8a6, a2, esi10);
    }
    _ZNSt6__ndk117__libcpp_allocateEjj(static_cast<uint32_t>(reinterpret_cast<unsigned char>(a2)), 1, a2, a3);
    goto a1;
}

void fun_774c();

/* std::__ndk1::__compressed_pair_elem<unsigned char*, 0, false>::__get() */
void** _ZNSt6__ndk122__compressed_pair_elemIPhLi0ELb0EE5__getEv(void** a1);

/* std::__ndk1::__compressed_pair<unsigned char*, std::__ndk1::allocator<unsigned char> >::first() */
void _ZNSt6__ndk117__compressed_pairIPhNS_9allocatorIhEEE5firstEv(void** a1) {
    fun_774c();
    _ZNSt6__ndk122__compressed_pair_elemIPhLi0ELb0EE5__getEv(a1);
    goto a1;
}

void fun_77bc();

/* std::__ndk1::vector<unsigned char, std::__ndk1::allocator<unsigned char> >::data() const */
int32_t _ZNKSt6__ndk16vectorIhNS_9allocatorIhEEE4dataEv(void** a1) {
    void** v2;
    void** v3;
    void** v4;
    void** ebx5;
    void** ebp6;

    fun_77bc();
    v2 = *reinterpret_cast<void***>(a1);
    _ZNSt6__ndk116__to_raw_pointerIhEEPT_S2_(v2, v3, v4, a1, ebx5, ebp6, __return_address());
    goto a1;
}

void fun_77ec();

/* std::__ndk1::vector<unsigned char, std::__ndk1::allocator<unsigned char> >::capacity() const */
int32_t _ZNKSt6__ndk16vectorIhNS_9allocatorIhEEE8capacityEv(void** a1) {
    fun_77ec();
    _ZNKSt6__ndk113__vector_baseIhNS_9allocatorIhEEE8capacityEv(a1);
    goto a1;
}

/* std::__ndk1::vector<unsigned char, std::__ndk1::allocator<unsigned char> >::__annotate_contiguous_container(void const*, void const*, void const*, void const*) const */
int32_t _ZNKSt6__ndk16vectorIhNS_9allocatorIhEEE31__annotate_contiguous_containerEPKvS5_S5_S5_(void** a1, int32_t a2, int32_t a3, uint32_t a4, int32_t a5) {
    return a5;
}

void fun_7a1e();

struct s519 {
    signed char[46342] pad46342;
    void** f46342;
};

/* std::__ndk1::__vector_base<unsigned char, std::__ndk1::allocator<unsigned char> >::__destruct_at_end(unsigned char*) */
void _ZNSt6__ndk113__vector_baseIhNS_9allocatorIhEEE17__destruct_at_endEPh(void** a1, void** a2, void** a3, int32_t a4) {
    void** v5;
    void** esi6;
    void** v7;
    void** v8;
    struct s519* v9;
    void** v10;
    void** v11;
    void** eax12;
    void** ecx13;
    void** eax14;

    v5 = esi6;
    fun_7a1e();
    v7 = *reinterpret_cast<void***>(a1 + 4);
    v8 = reinterpret_cast<void**>(&v9->f46342);
    v10 = a1;
    while (a2 != v7) {
        eax12 = _ZNSt6__ndk113__vector_baseIhNS_9allocatorIhEEE7__allocEv(v10, v10, v11);
        ecx13 = v7 - 1;
        v7 = ecx13;
        eax14 = _ZNSt6__ndk116__to_raw_pointerIhEEPT_S2_(ecx13, v11, eax12, v10, v8, v7, v5);
        v11 = eax14;
        _ZNSt6__ndk116allocator_traitsINS_9allocatorIhEEE7destroyIhEEvRS2_PT_(eax12, v11);
    }
    *reinterpret_cast<void***>(v10 + 4) = a2;
    goto a1;
}

void fun_787c();

/* std::__ndk1::__compressed_pair<unsigned char*, std::__ndk1::allocator<unsigned char> >::first() const */
void _ZNKSt6__ndk117__compressed_pairIPhNS_9allocatorIhEEE5firstEv(void** a1);

/* std::__ndk1::__vector_base<unsigned char, std::__ndk1::allocator<unsigned char> >::__end_cap() const */
int32_t _ZNKSt6__ndk113__vector_baseIhNS_9allocatorIhEEE9__end_capEv(void** a1) {
    fun_787c();
    _ZNKSt6__ndk117__compressed_pairIPhNS_9allocatorIhEEE5firstEv(a1 + 8);
    goto a1;
}

void fun_7b4e();

/* std::__ndk1::allocator<unsigned char>::deallocate(unsigned char*, unsigned int) */
void _ZNSt6__ndk19allocatorIhE10deallocateEPhj(void** a1, void** a2, void** a3, void** a4, int32_t a5) {
    fun_7b4e();
    _ZNSt6__ndk119__libcpp_deallocateEPvjj(a2, a3, 1);
    goto a1;
}

struct s520 {
    signed char[12] pad12;
    int32_t f12;
};

struct s521 {
    signed char[8] pad8;
    int32_t f8;
};

struct s522 {
    signed char[8] pad8;
    int32_t f8;
};

struct s523 {
    signed char[12] pad12;
    void** f12;
};

/* decltype(nullptr)&& std::__ndk1::forward<decltype(nullptr)>(std::__ndk1::remove_reference<decltype(nullptr)>::type&) */
void** _ZNSt6__ndk17forwardIDnEEOT_RNS_16remove_referenceIS1_E4typeE(void** a1);

/* std::__ndk1::__compressed_pair_elem<unsigned char*, 0, false>::__compressed_pair_elem<decltype(nullptr), void>(decltype(nullptr)&&) */
void _ZNSt6__ndk122__compressed_pair_elemIPhLi0ELb0EEC2IDnvEEOT_(void** a1, void** a2);

/* std::__ndk1::__compressed_pair_elem<std::__ndk1::allocator<unsigned char>, 1, true>::__compressed_pair_elem() */
void _ZNSt6__ndk122__compressed_pair_elemINS_9allocatorIhEELi1ELb1EEC2Ev(void** a1, void** a2);

void fun_714e() {
    int32_t ecx1;
    struct s520* ebp2;
    int32_t edx3;
    struct s521* ebp4;
    int32_t esi5;
    struct s522* ebp6;
    void** v7;
    struct s523* ebp8;
    int32_t ebp9;
    int32_t ebp10;
    int32_t ebp11;
    int32_t ebp12;
    int32_t ebp13;
    void** eax14;
    void** v15;
    int32_t ebp16;
    void** v17;
    int32_t ebp18;
    int32_t v19;

    ecx1 = ebp2->f12;
    edx3 = ebp4->f8;
    esi5 = ebp6->f8;
    v7 = ebp8->f12;
    *reinterpret_cast<int32_t*>(ebp9 - 16) = reinterpret_cast<int32_t>(__return_address()) + 0xbdd6;
    *reinterpret_cast<int32_t*>(ebp10 - 20) = ecx1;
    *reinterpret_cast<int32_t*>(ebp11 - 24) = edx3;
    *reinterpret_cast<int32_t*>(ebp12 - 28) = esi5;
    *reinterpret_cast<int32_t*>(ebp13 - 32) = esi5;
    eax14 = _ZNSt6__ndk17forwardIDnEEOT_RNS_16remove_referenceIS1_E4typeE(v7);
    v15 = *reinterpret_cast<void***>(ebp16 - 32);
    _ZNSt6__ndk122__compressed_pair_elemIPhLi0ELb0EEC2IDnvEEOT_(v15, eax14);
    v17 = *reinterpret_cast<void***>(ebp18 - 28);
    _ZNSt6__ndk122__compressed_pair_elemINS_9allocatorIhEELi1ELb1EEC2Ev(v17, eax14);
    goto v19;
}

struct s524 {
    signed char[8] pad8;
    int32_t f8;
};

struct s525 {
    signed char[8] pad8;
    void** f8;
};

void fun_75cc() {
    int32_t ecx1;
    struct s524* ebp2;
    void** v3;
    struct s525* ebp4;
    int32_t ebp5;
    void** v6;
    void** v7;
    void** v8;
    int32_t v9;
    int32_t v10;

    ecx1 = ebp2->f8;
    v3 = ebp4->f8;
    *reinterpret_cast<int32_t*>(ebp5 - 12) = ecx1;
    _ZNKSt6__ndk19allocatorIhE8max_sizeEv(v3, v6, v7, v8, v9);
    goto v10;
}

/* std::__ndk1::__compressed_pair_elem<std::__ndk1::allocator<unsigned char>, 1, true>::__get() */
void** _ZNSt6__ndk122__compressed_pair_elemINS_9allocatorIhEELi1ELb1EE5__getEv(void** a1) {
    return a1;
}

struct s526 {
    signed char[16] pad16;
    int32_t f16;
};

int32_t fun_2020(int32_t a1, void** a2, void** a3) {
    struct s526* ebx4;

    goto ebx4->f16;
}

void fun_7afe();

/* std::__ndk1::allocator<unsigned char>::destroy(unsigned char*) */
void** _ZNSt6__ndk19allocatorIhE7destroyEPh(void** a1, void** a2);

/* void std::__ndk1::allocator_traits<std::__ndk1::allocator<unsigned char> >::__destroy<unsigned char>(std::__ndk1::integral_constant<bool, true>, std::__ndk1::allocator<unsigned char>&, unsigned char*) */
void _ZNSt6__ndk116allocator_traitsINS_9allocatorIhEEE9__destroyIhEEvNS_17integral_constantIbLb1EEERS2_PT_(void** a1, void** a2, void** a3) {
    fun_7afe();
    _ZNSt6__ndk19allocatorIhE7destroyEPh(a1, a2);
    goto a1;
}

void fun_81ee();

struct s527 {
    signed char[44342] pad44342;
    void** f44342;
};

/* std::__ndk1::__vector_base<std::__ndk1::vector<unsigned char, std::__ndk1::allocator<unsigned char> >, std::__ndk1::allocator<std::__ndk1::vector<unsigned char, std::__ndk1::allocator<unsigned char> > > >::__destruct_at_end(std::__ndk1::vector<unsigned char, std::__ndk1::allocator<unsigned char> >*) */
void _ZNSt6__ndk113__vector_baseINS_6vectorIhNS_9allocatorIhEEEENS2_IS4_EEE17__destruct_at_endEPS4_(void** a1, void** a2, void** a3, int32_t a4) {
    void** v5;
    void** v6;
    struct s527* v7;
    void** v8;
    void** v9;
    void** v10;
    void** eax11;
    void** ecx12;
    void** eax13;

    fun_81ee();
    v5 = *reinterpret_cast<void***>(a1 + 4);
    v6 = reinterpret_cast<void**>(&v7->f44342);
    v8 = a1;
    while (a2 != v5) {
        eax11 = _ZNSt6__ndk113__vector_baseINS_6vectorIhNS_9allocatorIhEEEENS2_IS4_EEE7__allocEv(v8, v8, v9, v10);
        ecx12 = v5 + 0xfffffff4;
        v5 = ecx12;
        v10 = eax11;
        eax13 = _ZNSt6__ndk116__to_raw_pointerINS_6vectorIhNS_9allocatorIhEEEEEEPT_S6_(ecx12, v9, v10, v8, v6);
        v9 = eax13;
        _ZNSt6__ndk116allocator_traitsINS_9allocatorINS_6vectorIhNS1_IhEEEEEEE7destroyIS4_EEvRS5_PT_(v10, v9);
    }
    *reinterpret_cast<void***>(v8 + 4) = a2;
    goto a1;
}

void fun_80ac();

/* std::__ndk1::__compressed_pair<std::__ndk1::vector<unsigned char, std::__ndk1::allocator<unsigned char> >*, std::__ndk1::allocator<std::__ndk1::vector<unsigned char, std::__ndk1::allocator<unsigned char> > > >::first() const */
void _ZNKSt6__ndk117__compressed_pairIPNS_6vectorIhNS_9allocatorIhEEEENS2_IS4_EEE5firstEv(void** a1);

/* std::__ndk1::__vector_base<std::__ndk1::vector<unsigned char, std::__ndk1::allocator<unsigned char> >, std::__ndk1::allocator<std::__ndk1::vector<unsigned char, std::__ndk1::allocator<unsigned char> > > >::__end_cap() const */
int32_t _ZNKSt6__ndk113__vector_baseINS_6vectorIhNS_9allocatorIhEEEENS2_IS4_EEE9__end_capEv(void** a1) {
    fun_80ac();
    _ZNKSt6__ndk117__compressed_pairIPNS_6vectorIhNS_9allocatorIhEEEENS2_IS4_EEE5firstEv(a1 + 8);
    goto a1;
}

void fun_834e();

/* std::__ndk1::allocator<std::__ndk1::vector<unsigned char, std::__ndk1::allocator<unsigned char> > >::deallocate(std::__ndk1::vector<unsigned char, std::__ndk1::allocator<unsigned char> >*, unsigned int) */
void _ZNSt6__ndk19allocatorINS_6vectorIhNS0_IhEEEEE10deallocateEPS3_j(void** a1, void** a2, void** a3, void** a4, int32_t a5) {
    void*** ebx6;

    fun_834e();
    ebx6 = reinterpret_cast<void***>(reinterpret_cast<unsigned char>(a3) << 2);
    _ZNSt6__ndk119__libcpp_deallocateEPvjj(a2, ebx6 + reinterpret_cast<uint32_t>(ebx6) * 2, 4);
    goto a1;
}

struct s528 {
    signed char[8] pad8;
    int32_t f8;
};

struct s529 {
    signed char[8] pad8;
    void*** f8;
};

void fun_7fac() {
    int32_t ecx1;
    struct s528* ebp2;
    void** v3;
    struct s529* ebp4;
    int32_t ebp5;
    void** v6;
    void** v7;
    void** v8;
    void** v9;
    int32_t v10;

    ecx1 = ebp2->f8;
    v3 = *ebp4->f8;
    *reinterpret_cast<int32_t*>(ebp5 - 8) = ecx1;
    _ZNSt6__ndk116__to_raw_pointerINS_6vectorIhNS_9allocatorIhEEEEEEPT_S6_(v3, v6, v7, v8, v9);
    goto v10;
}

void fun_82ce();

/* std::__ndk1::allocator<std::__ndk1::vector<unsigned char, std::__ndk1::allocator<unsigned char> > >::destroy(std::__ndk1::vector<unsigned char, std::__ndk1::allocator<unsigned char> >*) */
void _ZNSt6__ndk19allocatorINS_6vectorIhNS0_IhEEEEE7destroyEPS3_(void** a1, void** a2);

/* void std::__ndk1::allocator_traits<std::__ndk1::allocator<std::__ndk1::vector<unsigned char, std::__ndk1::allocator<unsigned char> > > >::__destroy<std::__ndk1::vector<unsigned char, std::__ndk1::allocator<unsigned char> > >(std::__ndk1::integral_constant<bool, true>, std::__ndk1::allocator<std::__ndk1::vector<unsigned char, std::__ndk1::allocator<unsigned char> > >&, std::__ndk1::vector<unsigned char, std::__ndk1::allocator<unsigned char> >*) */
void _ZNSt6__ndk116allocator_traitsINS_9allocatorINS_6vectorIhNS1_IhEEEEEEE9__destroyIS4_EEvNS_17integral_constantIbLb1EEERS5_PT_(void** a1, void** a2, void** a3) {
    fun_82ce();
    _ZNSt6__ndk19allocatorINS_6vectorIhNS0_IhEEEEE7destroyEPS3_(a1, a2);
    goto a1;
}

void fun_850e();

/* void std::__ndk1::allocator<unsigned char>::construct<unsigned char>(unsigned char*) */
void** _ZNSt6__ndk19allocatorIhE9constructIhJEEEvPT_DpOT0_(void** a1, void** a2);

/* void std::__ndk1::allocator_traits<std::__ndk1::allocator<unsigned char> >::__construct<unsigned char>(std::__ndk1::integral_constant<bool, true>, std::__ndk1::allocator<unsigned char>&, unsigned char*) */
void _ZNSt6__ndk116allocator_traitsINS_9allocatorIhEEE11__constructIhJEEEvNS_17integral_constantIbLb1EEERS2_PT_DpOT0_(void** a1, void** a2, void** a3) {
    fun_850e();
    _ZNSt6__ndk19allocatorIhE9constructIhJEEEvPT_DpOT0_(a1, a2);
    goto a1;
}

struct s530 {
    signed char[20] pad20;
    void** f20;
};

struct s531 {
    signed char[16] pad16;
    int32_t f16;
};

struct s532 {
    signed char[12] pad12;
    int32_t f12;
};

struct s533 {
    signed char[8] pad8;
    int32_t f8;
};

struct s534 {
    signed char[8] pad8;
    void** f8;
};

struct s535 {
    signed char[20] pad20;
    void** f20;
};

struct s536 {
    signed char[12] pad12;
    void** f12;
};

struct s537 {
    signed char[16] pad16;
    void** f16;
};

struct s538 {
    signed char[4] pad4;
    void** f4;
};

void fun_8a8e() {
    void** ecx1;
    struct s530* ebp2;
    int32_t edx3;
    struct s531* ebp4;
    int32_t esi5;
    struct s532* ebp6;
    int32_t edi7;
    struct s533* ebp8;
    void** ebx9;
    struct s534* ebp10;
    int32_t ebp11;
    int32_t ebp12;
    int32_t ebp13;
    int32_t ebp14;
    int32_t ebp15;
    int32_t ebp16;
    void** v17;
    void** eax18;
    int32_t ebp19;
    void** eax20;
    struct s535* ebp21;
    void** v22;
    int32_t ebp23;
    int32_t ebp24;
    void** ecx25;
    struct s536* ebp26;
    void** edx27;
    struct s537* ebp28;
    void** esi29;
    int32_t ebp30;
    void** v31;
    int32_t ebp32;
    int32_t ebp33;
    void** v34;
    void** v35;
    void** v36;
    void** v37;
    void** v38;
    int32_t v39;

    ecx1 = ebp2->f20;
    edx3 = ebp4->f16;
    esi5 = ebp6->f12;
    edi7 = ebp8->f8;
    ebx9 = ebp10->f8;
    *reinterpret_cast<void***>(ebp11 - 28) = ebx9;
    *reinterpret_cast<int32_t*>(ebp12 - 32) = reinterpret_cast<int32_t>(__return_address()) + 0xa496;
    *reinterpret_cast<void***>(ebp13 - 36) = ecx1;
    *reinterpret_cast<int32_t*>(ebp14 - 40) = edx3;
    *reinterpret_cast<int32_t*>(ebp15 - 44) = esi5;
    *reinterpret_cast<int32_t*>(ebp16 - 48) = edi7;
    eax18 = _ZNSt6__ndk113__vector_baseIhNS_9allocatorIhEEE7__allocEv(ecx1, ebx9, v17);
    *reinterpret_cast<void***>(ebp19 - 16) = eax18;
    eax20 = ebp21->f20;
    v22 = *reinterpret_cast<void***>(ebp23 - 28);
    _ZNSt6__ndk16vectorIhNS_9allocatorIhEEE24__RAII_IncreaseAnnotatorC2ERKS3_j(ebp24 - 24, v22, eax20);
    ecx25 = ebp26->f12;
    edx27 = ebp28->f16;
    esi29 = reinterpret_cast<void**>(&(*reinterpret_cast<struct s538**>(ebp30 - 28))->f4);
    v31 = *reinterpret_cast<void***>(ebp32 - 16);
    _ZNSt6__ndk116allocator_traitsINS_9allocatorIhEEE25__construct_range_forwardIhhhhEENS_9enable_ifIXaaaasr31is_trivially_move_constructibleIT0_EE5valuesr7is_sameIT1_T2_EE5valueooL_ZNS_17integral_constantIbLb1EE5valueEEntsr15__has_constructIS2_PS6_RT_EE5valueEvE4typeERS2_PSC_SH_RSB_(v31, ecx25, edx27, esi29);
    _ZNSt6__ndk16vectorIhNS_9allocatorIhEEE24__RAII_IncreaseAnnotator6__doneEv(ebp33 - 24, ecx25, edx27, esi29, v34, v35, v36, v37, v38);
    goto v39;
}

void fun_8ffd();

/* std::__ndk1::__vector_base<std::__ndk1::vector<unsigned char, std::__ndk1::allocator<unsigned char> >, std::__ndk1::allocator<std::__ndk1::vector<unsigned char, std::__ndk1::allocator<unsigned char> > > >::__alloc() const */
void** _ZNKSt6__ndk113__vector_baseINS_6vectorIhNS_9allocatorIhEEEENS2_IS4_EEE7__allocEv(void** a1);

/* std::__ndk1::allocator_traits<std::__ndk1::allocator<std::__ndk1::vector<unsigned char, std::__ndk1::allocator<unsigned char> > > >::max_size(std::__ndk1::allocator<std::__ndk1::vector<unsigned char, std::__ndk1::allocator<unsigned char> > > const&) */
int32_t _ZNSt6__ndk116allocator_traitsINS_9allocatorINS_6vectorIhNS1_IhEEEEEEE8max_sizeERKS5_(void** a1);

/* std::__ndk1::vector<std::__ndk1::vector<unsigned char, std::__ndk1::allocator<unsigned char> >, std::__ndk1::allocator<std::__ndk1::vector<unsigned char, std::__ndk1::allocator<unsigned char> > > >::max_size() const */
void** _ZNKSt6__ndk16vectorINS0_IhNS_9allocatorIhEEEENS1_IS3_EEE8max_sizeEv(void** a1) {
    void* ebp2;
    void** eax3;

    ebp2 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4);
    fun_8ffd();
    eax3 = _ZNKSt6__ndk113__vector_baseINS_6vectorIhNS_9allocatorIhEEEENS2_IS4_EEE7__allocEv(a1);
    _ZNSt6__ndk116allocator_traitsINS_9allocatorINS_6vectorIhNS1_IhEEEEEEE8max_sizeERKS5_(eax3);
    _ZNSt6__ndk114numeric_limitsIiE3maxEv(eax3);
    _ZNSt6__ndk13minIjEERKT_S3_S3_(reinterpret_cast<int32_t>(ebp2) + 0xfffffff4, reinterpret_cast<int32_t>(ebp2) + 0xfffffff0);
    goto a1;
}

struct s539 {
    signed char[20] pad20;
    int32_t f20;
};

struct s540 {
    signed char[16] pad16;
    int32_t f16;
};

struct s541 {
    signed char[12] pad12;
    int32_t f12;
};

struct s542 {
    signed char[8] pad8;
    int32_t f8;
};

struct s543 {
    signed char[12] pad12;
    void** f12;
};

struct s544 {
    signed char[8] pad8;
    struct s543* f8;
};

struct s545 {
    signed char[20] pad20;
    void** f20;
};

/* std::__ndk1::__compressed_pair<std::__ndk1::vector<unsigned char, std::__ndk1::allocator<unsigned char> >*, std::__ndk1::allocator<std::__ndk1::vector<unsigned char, std::__ndk1::allocator<unsigned char> > >&>::__compressed_pair<decltype(nullptr), std::__ndk1::allocator<std::__ndk1::vector<unsigned char, std::__ndk1::allocator<unsigned char> > >&>(decltype(nullptr)&&, std::__ndk1::allocator<std::__ndk1::vector<unsigned char, std::__ndk1::allocator<unsigned char> > >&) */
void _ZNSt6__ndk117__compressed_pairIPNS_6vectorIhNS_9allocatorIhEEEERNS2_IS4_EEEC2IDnS7_EEOT_OT0_(void** a1, void** a2, void** a3);

struct s546 {
    signed char[12] pad12;
    int32_t f12;
};

struct s547 {
    signed char[12] pad12;
    void** f12;
};

struct s548 {
    signed char[16] pad16;
    int32_t f16;
};

struct s549 {
    signed char[12] pad12;
    int32_t f12;
};

void fun_8d7e() {
    int32_t ecx1;
    struct s539* ebp2;
    int32_t edx3;
    struct s540* ebp4;
    int32_t esi5;
    struct s541* ebp6;
    int32_t edi7;
    struct s542* ebp8;
    struct s543* ebx9;
    struct s544* ebp10;
    int32_t ebp11;
    int32_t ebp12;
    int32_t ebp13;
    void** eax14;
    struct s545* ebp15;
    void** v16;
    void* ebp17;
    int32_t ebp18;
    int32_t ebp19;
    int32_t ebp20;
    int32_t ebp21;
    struct s546* ebp22;
    int32_t ebp23;
    void** v24;
    int32_t ebp25;
    void** eax26;
    void** ecx27;
    struct s547* ebp28;
    void** eax29;
    int32_t ebp30;
    void** ecx31;
    int32_t ebp32;
    int32_t ebp33;
    void** eax34;
    struct s548* ebp35;
    void*** eax36;
    struct s549* ebp37;
    int32_t ebp38;
    void*** v39;
    void** eax40;
    int32_t ebp41;
    int32_t v42;

    ecx1 = ebp2->f20;
    edx3 = ebp4->f16;
    esi5 = ebp6->f12;
    edi7 = ebp8->f8;
    ebx9 = ebp10->f8;
    *reinterpret_cast<struct s543**>(ebp11 - 20) = ebx9;
    *reinterpret_cast<int32_t*>(ebp12 - 16) = 0;
    *reinterpret_cast<int32_t*>(ebp13 - 24) = reinterpret_cast<int32_t>(__return_address()) + 0xa1a6;
    eax14 = ebp15->f20;
    v16 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp17) + 0xfffffff0);
    *reinterpret_cast<int32_t*>(ebp18 - 28) = ecx1;
    *reinterpret_cast<int32_t*>(ebp19 - 32) = edx3;
    *reinterpret_cast<int32_t*>(ebp20 - 36) = esi5;
    *reinterpret_cast<int32_t*>(ebp21 - 40) = edi7;
    _ZNSt6__ndk117__compressed_pairIPNS_6vectorIhNS_9allocatorIhEEEERNS2_IS4_EEEC2IDnS7_EEOT_OT0_(&ebx9->f12, v16, eax14);
    if (!ebp22->f12) {
        *reinterpret_cast<int32_t*>(ebp23 - 44) = 0;
    } else {
        v24 = *reinterpret_cast<void***>(ebp25 - 20);
        eax26 = _ZNSt6__ndk114__split_bufferINS_6vectorIhNS_9allocatorIhEEEERNS2_IS4_EEE7__allocEv(v24, v16, eax14);
        ecx27 = ebp28->f12;
        v16 = ecx27;
        eax29 = _ZNSt6__ndk116allocator_traitsINS_9allocatorINS_6vectorIhNS1_IhEEEEEEE8allocateERS5_j(eax26, v16, eax14);
        *reinterpret_cast<void***>(ebp30 - 44) = eax29;
    }
    ecx31 = *reinterpret_cast<void***>(ebp32 - 20);
    *reinterpret_cast<void***>(ecx31) = *reinterpret_cast<void***>(ebp33 - 44);
    eax34 = *reinterpret_cast<void***>(ecx31) + ebp35->f16 * 12;
    *reinterpret_cast<void***>(ecx31 + 8) = eax34;
    *reinterpret_cast<void***>(ecx31 + 4) = eax34;
    eax36 = reinterpret_cast<void***>(*reinterpret_cast<void***>(ecx31) + ebp37->f12 * 12);
    *reinterpret_cast<void****>(ebp38 - 48) = eax36;
    eax40 = _ZNSt6__ndk114__split_bufferINS_6vectorIhNS_9allocatorIhEEEERNS2_IS4_EEE9__end_capEv(ecx31, v16, eax14, v39);
    *reinterpret_cast<void***>(eax40) = *reinterpret_cast<void***>(ebp41 - 48);
    goto v42;
}

/* std::__ndk1::__compressed_pair<std::__ndk1::vector<unsigned char, std::__ndk1::allocator<unsigned char> >*, std::__ndk1::allocator<std::__ndk1::vector<unsigned char, std::__ndk1::allocator<unsigned char> > >&>::second() */
void _ZNSt6__ndk117__compressed_pairIPNS_6vectorIhNS_9allocatorIhEEEERNS2_IS4_EEE6secondEv(void** a1) {
    fun_93ac();
    _ZNSt6__ndk122__compressed_pair_elemIRNS_9allocatorINS_6vectorIhNS1_IhEEEEEELi1ELb0EE5__getEv(a1 + 4);
    goto a1;
}

void fun_932e();

/* std::__ndk1::allocator<std::__ndk1::vector<unsigned char, std::__ndk1::allocator<unsigned char> > >::max_size() const */
void** _ZNKSt6__ndk19allocatorINS_6vectorIhNS0_IhEEEEE8max_sizeEv(void** a1, void** a2, void** a3, void** a4, int32_t a5);

/* std::__ndk1::allocator<std::__ndk1::vector<unsigned char, std::__ndk1::allocator<unsigned char> > >::allocate(unsigned int, void const*) */
void _ZNSt6__ndk19allocatorINS_6vectorIhNS0_IhEEEEE8allocateEjPKv(void** a1, void** a2, void** a3, int32_t a4, void** a5, void** a6, int32_t a7) {
    int32_t v8;
    void** eax9;
    int32_t esi10;

    fun_932e();
    eax9 = _ZNKSt6__ndk19allocatorINS_6vectorIhNS0_IhEEEEE8max_sizeEv(a1, a1, a2, a3, v8 + 0x9bf6);
    if (reinterpret_cast<unsigned char>(a2) > reinterpret_cast<unsigned char>(eax9)) {
        _ZNSt6__ndk120__throw_length_errorEPKc(v8 + 0x9bf6 + 0xffffb131, a1, a2, a3, v8 + 0x9bf6, a2, esi10);
    }
    _ZNSt6__ndk117__libcpp_allocateEjj(reinterpret_cast<unsigned char>(a2) * 12, 4, a2, a3);
    goto a1;
}

struct s550 {
    signed char[8] pad8;
    int32_t f8;
};

struct s552 {
    signed char[12] pad12;
    void** f12;
};

struct s551 {
    signed char[8] pad8;
    struct s552* f8;
};

void fun_928c() {
    int32_t ecx1;
    struct s550* ebp2;
    void** v3;
    struct s551* ebp4;
    int32_t ebp5;
    int32_t v6;

    ecx1 = ebp2->f8;
    v3 = reinterpret_cast<void**>(&ebp4->f8->f12);
    *reinterpret_cast<int32_t*>(ebp5 - 8) = ecx1;
    _ZNSt6__ndk117__compressed_pairIPNS_6vectorIhNS_9allocatorIhEEEERNS2_IS4_EEE5firstEv(v3);
    goto v6;
}

struct s553 {
    signed char[12] pad12;
    void** f12;
};

struct s554 {
    signed char[8] pad8;
    int32_t f8;
};

struct s555 {
    signed char[8] pad8;
    void** f8;
};

/* std::__ndk1::vector<std::__ndk1::vector<unsigned char, std::__ndk1::allocator<unsigned char> >, std::__ndk1::allocator<std::__ndk1::vector<unsigned char, std::__ndk1::allocator<unsigned char> > > >::__annotate_delete() const */
void _ZNKSt6__ndk16vectorINS0_IhNS_9allocatorIhEEEENS1_IS3_EEE17__annotate_deleteEv(void** a1);

struct s556 {
    void** f0;
    signed char[3] pad4;
    void** f4;
};

struct s558 {
    signed char[4] pad4;
    void** f4;
};

struct s557 {
    signed char[12] pad12;
    struct s558* f12;
};

/* void std::__ndk1::allocator_traits<std::__ndk1::allocator<std::__ndk1::vector<unsigned char, std::__ndk1::allocator<unsigned char> > > >::__construct_backward<std::__ndk1::vector<unsigned char, std::__ndk1::allocator<unsigned char> >*>(std::__ndk1::allocator<std::__ndk1::vector<unsigned char, std::__ndk1::allocator<unsigned char> > >&, std::__ndk1::vector<unsigned char, std::__ndk1::allocator<unsigned char> >*, std::__ndk1::vector<unsigned char, std::__ndk1::allocator<unsigned char> >*, std::__ndk1::vector<unsigned char, std::__ndk1::allocator<unsigned char> >*&) */
void _ZNSt6__ndk116allocator_traitsINS_9allocatorINS_6vectorIhNS1_IhEEEEEEE20__construct_backwardIPS4_EEvRS5_T_SA_RSA_(void** a1, void** a2, void** a3, void*** a4);

struct s560 {
    signed char[4] pad4;
    void** f4;
};

struct s559 {
    signed char[12] pad12;
    struct s560* f12;
};

struct s562 {
    signed char[8] pad8;
    void** f8;
};

struct s561 {
    signed char[12] pad12;
    struct s562* f12;
};

struct s563 {
    signed char[4] pad4;
    void** f4;
};

/* std::__ndk1::__vector_base<std::__ndk1::vector<unsigned char, std::__ndk1::allocator<unsigned char> >, std::__ndk1::allocator<std::__ndk1::vector<unsigned char, std::__ndk1::allocator<unsigned char> > > >::__end_cap() */
void** _ZNSt6__ndk113__vector_baseINS_6vectorIhNS_9allocatorIhEEEENS2_IS4_EEE9__end_capEv(void** a1, void** a2, void** a3, void*** a4);

struct s564 {
    signed char[12] pad12;
    void** f12;
};

struct s565 {
    signed char[12] pad12;
    int32_t* f12;
};

struct s567 {
    signed char[4] pad4;
    int32_t f4;
};

struct s566 {
    signed char[12] pad12;
    struct s567* f12;
};

/* std::__ndk1::vector<std::__ndk1::vector<unsigned char, std::__ndk1::allocator<unsigned char> >, std::__ndk1::allocator<std::__ndk1::vector<unsigned char, std::__ndk1::allocator<unsigned char> > > >::__annotate_new(unsigned int) const */
void _ZNKSt6__ndk16vectorINS0_IhNS_9allocatorIhEEEENS1_IS3_EEE14__annotate_newEj(void** a1, void** a2, void** a3, void*** a4);

/* std::__ndk1::vector<std::__ndk1::vector<unsigned char, std::__ndk1::allocator<unsigned char> >, std::__ndk1::allocator<std::__ndk1::vector<unsigned char, std::__ndk1::allocator<unsigned char> > > >::__invalidate_all_iterators() */
void** _ZNSt6__ndk16vectorINS0_IhNS_9allocatorIhEEEENS1_IS3_EEE26__invalidate_all_iteratorsEv(void** a1, void** a2, void** a3, void*** a4);

void fun_8e4e() {
    void** ecx1;
    struct s553* ebp2;
    int32_t edx3;
    struct s554* ebp4;
    void** esi5;
    struct s555* ebp6;
    int32_t ebp7;
    int32_t ebp8;
    int32_t ebp9;
    int32_t ebp10;
    void** v11;
    int32_t ebp12;
    void** v13;
    void** v14;
    void** eax15;
    void** edx16;
    int32_t ebp17;
    void** esi18;
    void*** edi19;
    struct s557* ebp20;
    void** ecx21;
    struct s559* ebp22;
    void** v23;
    int32_t ebp24;
    void** ecx25;
    struct s561* ebp26;
    void** v27;
    int32_t ebp28;
    void** v29;
    int32_t ebp30;
    void** eax31;
    void** v32;
    struct s564* ebp33;
    int32_t ebp34;
    void** eax35;
    void** v36;
    int32_t ebp37;
    struct s565* ebp38;
    struct s566* ebp39;
    void** v40;
    int32_t ebp41;
    void** eax42;
    void** v43;
    int32_t ebp44;
    void** v45;
    int32_t ebp46;
    int32_t v47;

    ecx1 = ebp2->f12;
    edx3 = ebp4->f8;
    esi5 = ebp6->f8;
    *reinterpret_cast<int32_t*>(ebp7 - 16) = reinterpret_cast<int32_t>(__return_address()) + 0xa0d6;
    *reinterpret_cast<void***>(ebp8 - 20) = ecx1;
    *reinterpret_cast<int32_t*>(ebp9 - 24) = edx3;
    *reinterpret_cast<void***>(ebp10 - 28) = esi5;
    _ZNKSt6__ndk16vectorINS0_IhNS_9allocatorIhEEEENS1_IS3_EEE17__annotate_deleteEv(esi5);
    v11 = *reinterpret_cast<void***>(ebp12 - 28);
    eax15 = _ZNSt6__ndk113__vector_baseINS_6vectorIhNS_9allocatorIhEEEENS2_IS4_EEE7__allocEv(ecx1, v11, v13, v14);
    edx16 = (*reinterpret_cast<struct s556**>(ebp17 - 28))->f0;
    esi18 = (*reinterpret_cast<struct s556**>(ebp17 - 28))->f4;
    edi19 = &ebp20->f12->f4;
    _ZNSt6__ndk116allocator_traitsINS_9allocatorINS_6vectorIhNS1_IhEEEEEEE20__construct_backwardIPS4_EEvRS5_T_SA_RSA_(eax15, edx16, esi18, edi19);
    ecx21 = reinterpret_cast<void**>(&ebp22->f12->f4);
    v23 = *reinterpret_cast<void***>(ebp24 - 28);
    _ZNSt6__ndk14swapIPNS_6vectorIhNS_9allocatorIhEEEEEENS_9enable_ifIXaasr21is_move_constructibleIT_EE5valuesr18is_move_assignableIS7_EE5valueEvE4typeERS7_SA_(v23, ecx21, esi18, edi19);
    ecx25 = reinterpret_cast<void**>(&ebp26->f12->f8);
    v27 = reinterpret_cast<void**>(&(*reinterpret_cast<struct s563**>(ebp28 - 28))->f4);
    _ZNSt6__ndk14swapIPNS_6vectorIhNS_9allocatorIhEEEEEENS_9enable_ifIXaasr21is_move_constructibleIT_EE5valuesr18is_move_assignableIS7_EE5valueEvE4typeERS7_SA_(v27, ecx25, esi18, edi19);
    v29 = *reinterpret_cast<void***>(ebp30 - 28);
    eax31 = _ZNSt6__ndk113__vector_baseINS_6vectorIhNS_9allocatorIhEEEENS2_IS4_EEE9__end_capEv(v29, ecx25, esi18, edi19);
    v32 = ebp33->f12;
    *reinterpret_cast<void***>(ebp34 - 32) = eax31;
    eax35 = _ZNSt6__ndk114__split_bufferINS_6vectorIhNS_9allocatorIhEEEERNS2_IS4_EEE9__end_capEv(v32, ecx25, esi18, edi19);
    v36 = *reinterpret_cast<void***>(ebp37 - 32);
    _ZNSt6__ndk14swapIPNS_6vectorIhNS_9allocatorIhEEEEEENS_9enable_ifIXaasr21is_move_constructibleIT_EE5valuesr18is_move_assignableIS7_EE5valueEvE4typeERS7_SA_(v36, eax35, esi18, edi19);
    *ebp38->f12 = ebp39->f12->f4;
    v40 = *reinterpret_cast<void***>(ebp41 - 28);
    eax42 = _ZNKSt6__ndk16vectorINS0_IhNS_9allocatorIhEEEENS1_IS3_EEE4sizeEv(v40, eax35, esi18, edi19);
    v43 = *reinterpret_cast<void***>(ebp44 - 28);
    _ZNKSt6__ndk16vectorINS0_IhNS_9allocatorIhEEEENS1_IS3_EEE14__annotate_newEj(v43, eax42, esi18, edi19);
    v45 = *reinterpret_cast<void***>(ebp46 - 28);
    _ZNSt6__ndk16vectorINS0_IhNS_9allocatorIhEEEENS1_IS3_EEE26__invalidate_all_iteratorsEv(v45, eax42, esi18, edi19);
    goto v47;
}

void fun_9a0c();

/* std::__ndk1::__compressed_pair<std::__ndk1::vector<unsigned char, std::__ndk1::allocator<unsigned char> >*, std::__ndk1::allocator<std::__ndk1::vector<unsigned char, std::__ndk1::allocator<unsigned char> > >&>::first() const */
void _ZNKSt6__ndk117__compressed_pairIPNS_6vectorIhNS_9allocatorIhEEEERNS2_IS4_EEE5firstEv(void** a1);

/* std::__ndk1::__split_buffer<std::__ndk1::vector<unsigned char, std::__ndk1::allocator<unsigned char> >, std::__ndk1::allocator<std::__ndk1::vector<unsigned char, std::__ndk1::allocator<unsigned char> > >&>::__end_cap() const */
int32_t _ZNKSt6__ndk114__split_bufferINS_6vectorIhNS_9allocatorIhEEEERNS2_IS4_EEE9__end_capEv(void** a1) {
    fun_9a0c();
    _ZNKSt6__ndk117__compressed_pairIPNS_6vectorIhNS_9allocatorIhEEEERNS2_IS4_EEE5firstEv(a1 + 12);
    goto a1;
}

void fun_3929();

int32_t fun_21d0();

void fun_2290();

void fun_395e();

/* std::__ndk1::_DeallocateCaller::__do_deallocate_handle_size(void*, unsigned int) */
void _ZNSt6__ndk117_DeallocateCaller27__do_deallocate_handle_sizeEPvj(void** a1, void** a2);

void __clang_call_terminate(int32_t a1, int32_t a2) {
    void** v3;
    void** v4;
    int32_t v5;

    fun_3929();
    fun_21d0();
    fun_2290();
    fun_395e();
    _ZNSt6__ndk117_DeallocateCaller27__do_deallocate_handle_sizeEPvj(v3, v4);
    goto v5;
}

/* std::__ndk1::__compressed_pair_elem<std::__ndk1::allocator<std::__ndk1::vector<unsigned char, std::__ndk1::allocator<unsigned char> > >&, 1, false>::__get() */
void** _ZNSt6__ndk122__compressed_pair_elemIRNS_9allocatorINS_6vectorIhNS1_IhEEEEEELi1ELb0EE5__getEv(void*** a1) {
    void** ecx2;

    ecx2 = *a1;
    return ecx2;
}

/* std::__ndk1::remove_reference<std::__ndk1::vector<unsigned char, std::__ndk1::allocator<unsigned char> >&>::type&& std::__ndk1::move<std::__ndk1::vector<unsigned char, std::__ndk1::allocator<unsigned char> >&>(std::__ndk1::vector<unsigned char, std::__ndk1::allocator<unsigned char> >&) */
void** _ZNSt6__ndk14moveIRNS_6vectorIhNS_9allocatorIhEEEEEEONS_16remove_referenceIT_E4typeEOS7_(void** a1) {
    return a1;
}

/* std::__ndk1::vector<unsigned char, std::__ndk1::allocator<unsigned char> >&& std::__ndk1::forward<std::__ndk1::vector<unsigned char, std::__ndk1::allocator<unsigned char> > >(std::__ndk1::remove_reference<std::__ndk1::vector<unsigned char, std::__ndk1::allocator<unsigned char> > >::type&) */
void** _ZNSt6__ndk17forwardINS_6vectorIhNS_9allocatorIhEEEEEEOT_RNS_16remove_referenceIS5_E4typeE(void** a1) {
    return a1;
}

void fun_96ae();

/* void std::__ndk1::allocator<std::__ndk1::vector<unsigned char, std::__ndk1::allocator<unsigned char> > >::construct<std::__ndk1::vector<unsigned char, std::__ndk1::allocator<unsigned char> >, std::__ndk1::vector<unsigned char, std::__ndk1::allocator<unsigned char> > >(std::__ndk1::vector<unsigned char, std::__ndk1::allocator<unsigned char> >*, std::__ndk1::vector<unsigned char, std::__ndk1::allocator<unsigned char> >&&) */
void _ZNSt6__ndk19allocatorINS_6vectorIhNS0_IhEEEEE9constructIS3_JS3_EEEvPT_DpOT0_(void** a1, void** a2, void** a3);

/* void std::__ndk1::allocator_traits<std::__ndk1::allocator<std::__ndk1::vector<unsigned char, std::__ndk1::allocator<unsigned char> > > >::__construct<std::__ndk1::vector<unsigned char, std::__ndk1::allocator<unsigned char> >, std::__ndk1::vector<unsigned char, std::__ndk1::allocator<unsigned char> > >(std::__ndk1::integral_constant<bool, true>, std::__ndk1::allocator<std::__ndk1::vector<unsigned char, std::__ndk1::allocator<unsigned char> > >&, std::__ndk1::vector<unsigned char, std::__ndk1::allocator<unsigned char> >*, std::__ndk1::vector<unsigned char, std::__ndk1::allocator<unsigned char> >&&) */
void _ZNSt6__ndk116allocator_traitsINS_9allocatorINS_6vectorIhNS1_IhEEEEEEE11__constructIS4_JS4_EEEvNS_17integral_constantIbLb1EEERS5_PT_DpOT0_(void** a1, void** a2, void** a3) {
    void** eax4;

    fun_96ae();
    eax4 = _ZNSt6__ndk17forwardINS_6vectorIhNS_9allocatorIhEEEEEEOT_RNS_16remove_referenceIS5_E4typeE(a3);
    _ZNSt6__ndk19allocatorINS_6vectorIhNS0_IhEEEEE9constructIS3_JS3_EEEvPT_DpOT0_(a1, a2, eax4);
    goto a1;
}

struct s568 {
    signed char[12] pad12;
    int32_t f12;
};

struct s569 {
    signed char[8] pad8;
    int32_t f8;
};

struct s570 {
    signed char[8] pad8;
    void** f8;
};

struct s571 {
    signed char[12] pad12;
    void** f12;
};

struct s572 {
    signed char[8] pad8;
    void*** f8;
};

struct s573 {
    signed char[12] pad12;
    void*** f12;
};

void fun_94bd() {
    int32_t ecx1;
    struct s568* ebp2;
    int32_t edx3;
    struct s569* ebp4;
    void** v5;
    struct s570* ebp6;
    int32_t ebp7;
    int32_t ebp8;
    int32_t ebp9;
    void** eax10;
    int32_t ebp11;
    void** v12;
    struct s571* ebp13;
    void** eax14;
    struct s572* ebp15;
    void* ebp16;
    void** eax17;
    struct s573* ebp18;
    int32_t v19;

    ecx1 = ebp2->f12;
    edx3 = ebp4->f8;
    v5 = ebp6->f8;
    *reinterpret_cast<int32_t*>(ebp7 - 16) = reinterpret_cast<int32_t>(__return_address()) + 0x9a67;
    *reinterpret_cast<int32_t*>(ebp8 - 20) = ecx1;
    *reinterpret_cast<int32_t*>(ebp9 - 24) = edx3;
    eax10 = _ZNSt6__ndk14moveIRPNS_6vectorIhNS_9allocatorIhEEEEEEONS_16remove_referenceIT_E4typeEOS8_(v5);
    *reinterpret_cast<void***>(ebp11 - 12) = *reinterpret_cast<void***>(eax10);
    v12 = ebp13->f12;
    eax14 = _ZNSt6__ndk14moveIRPNS_6vectorIhNS_9allocatorIhEEEEEEONS_16remove_referenceIT_E4typeEOS8_(v12);
    *ebp15->f8 = *reinterpret_cast<void***>(eax14);
    eax17 = _ZNSt6__ndk14moveIRPNS_6vectorIhNS_9allocatorIhEEEEEEONS_16remove_referenceIT_E4typeEOS8_(reinterpret_cast<int32_t>(ebp16) + 0xfffffff4);
    *ebp18->f12 = *reinterpret_cast<void***>(eax17);
    goto v19;
}

struct s574 {
    signed char[8] pad8;
    void** f8;
};

struct s575 {
    signed char[16] pad16;
    int32_t f16;
};

struct s576 {
    signed char[12] pad12;
    int32_t f12;
};

struct s577 {
    signed char[16] pad16;
    int32_t f16;
};

struct s578 {
    signed char[16] pad16;
    int32_t f16;
};

struct s579 {
    signed char[12] pad12;
    signed char* f12;
};

struct s580 {
    signed char[12] pad12;
    int32_t f12;
};

struct s581 {
    signed char[4824] pad4824;
    void** f4824;
};

struct s582 {
    signed char[4824] pad4824;
    void** f4824;
};

void fun_9dce() {
    void** ecx1;
    struct s574* ebp2;
    int32_t esi3;
    struct s575* ebp4;
    int32_t edi5;
    struct s576* ebp6;
    int32_t ebp7;
    int32_t ebp8;
    int32_t ebp9;
    int32_t ebp10;
    int32_t ebp11;
    int32_t ebp12;
    int32_t ebp13;
    int32_t ebp14;
    int32_t eax15;
    struct s577* ebp16;
    struct s578* ebp17;
    signed char* eax18;
    struct s579* ebp19;
    struct s580* ebp20;
    signed char dl21;
    int32_t eax22;
    int32_t ebp23;
    int32_t ebp24;
    int32_t ebp25;
    int32_t ebp26;
    int32_t eax27;
    int32_t ebp28;
    int32_t ebp29;
    uint32_t ecx30;
    int32_t ebp31;
    int32_t ebp32;
    int32_t ebp33;
    uint32_t edx34;
    int32_t ebp35;
    int32_t ebp36;
    int32_t ebp37;
    uint32_t ebx38;
    int32_t ebp39;
    int32_t ebp40;
    int32_t ebp41;
    int32_t ebp42;
    void** v43;
    int32_t ebp44;
    int32_t ebp45;
    void** v46;
    int32_t ebp47;
    void** v48;
    int32_t v49;
    unsigned char* eax50;
    void** v51;
    void** v52;
    int32_t ebp53;
    void** v54;
    int32_t v55;
    int32_t ebp56;
    int32_t ebp57;
    int32_t ebp58;
    int32_t ebp59;
    int32_t ebp60;
    int32_t ebp61;
    int32_t ebp62;
    int32_t ebp63;
    int32_t ebp64;
    int32_t ebp65;
    int32_t ebp66;
    int32_t eax67;
    int32_t ebp68;
    int32_t ebp69;
    uint32_t ecx70;
    int32_t ebp71;
    int32_t ebp72;
    int32_t ebp73;
    uint32_t edx74;
    int32_t ebp75;
    int32_t ebp76;
    int32_t ebp77;
    int32_t ebp78;
    int32_t ebp79;
    int32_t ebp80;
    void** v81;
    int32_t ebp82;
    int32_t ebp83;
    void** v84;
    int32_t ebp85;
    void** v86;
    int32_t v87;
    unsigned char* eax88;
    void** v89;
    int32_t ebp90;
    void** v91;
    int32_t v92;
    int32_t ebp93;
    int32_t ebp94;
    int32_t eax95;
    int32_t ebp96;
    int32_t ebp97;
    void** v98;
    int32_t ebp99;
    void** v100;
    int32_t v101;
    int32_t ebp102;
    int32_t ebp103;
    void** v104;
    int32_t ebp105;
    void** v106;
    int32_t v107;
    void** v108;
    void** v109;
    int32_t v110;

    ecx1 = ebp2->f8;
    esi3 = ebp4->f16;
    edi5 = ebp6->f12;
    *reinterpret_cast<signed char*>(ebp7 - 13) = 0;
    *reinterpret_cast<int32_t*>(ebp8 - 44) = reinterpret_cast<int32_t>(__return_address()) + 0x9156;
    *reinterpret_cast<void***>(ebp9 - 48) = ecx1;
    *reinterpret_cast<void***>(ebp10 - 52) = ecx1;
    *reinterpret_cast<int32_t*>(ebp11 - 56) = esi3;
    *reinterpret_cast<int32_t*>(ebp12 - 60) = edi5;
    _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2Ev(ecx1);
    *reinterpret_cast<int32_t*>(ebp13 - 20) = 0;
    *reinterpret_cast<int32_t*>(ebp14 - 24) = 0;
    while (eax15 = ebp16->f16, ebp17->f16 = eax15 - 1, !!eax15) {
        eax18 = ebp19->f12;
        ebp20->f12 = reinterpret_cast<int32_t>(eax18 + 1);
        dl21 = *eax18;
        eax22 = *reinterpret_cast<int32_t*>(ebp23 - 20);
        *reinterpret_cast<int32_t*>(ebp24 - 20) = eax22 + 1;
        *reinterpret_cast<signed char*>(ebp25 + eax22 - 27) = dl21;
        if (*reinterpret_cast<int32_t*>(ebp26 - 20) == 3) {
            eax27 = reinterpret_cast<int32_t>(static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(ebp28 - 27)) & 0xfc) >> 2;
            *reinterpret_cast<signed char*>(ebp29 - 31) = *reinterpret_cast<signed char*>(&eax27);
            ecx30 = ((static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(ebp31 - 27)) & 3) << 4) + (reinterpret_cast<int32_t>(static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(ebp32 - 26)) & 0xf0) >> 4);
            *reinterpret_cast<signed char*>(ebp33 - 30) = *reinterpret_cast<signed char*>(&ecx30);
            edx34 = ((static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(ebp35 - 26)) & 15) << 2) + (reinterpret_cast<int32_t>(static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(ebp36 - 25)) & 0xc0) >> 6);
            *reinterpret_cast<signed char*>(ebp37 - 29) = *reinterpret_cast<signed char*>(&edx34);
            ebx38 = static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(ebp39 - 25)) & 63;
            *reinterpret_cast<signed char*>(ebp40 - 28) = *reinterpret_cast<signed char*>(&ebx38);
            *reinterpret_cast<int32_t*>(ebp41 - 20) = 0;
            while (*reinterpret_cast<int32_t*>(ebp42 - 20) < 4) {
                v43 = reinterpret_cast<void**>(static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(ebp44 + *reinterpret_cast<int32_t*>(ebp45 - 20) - 31)));
                v46 = reinterpret_cast<void**>(&(*reinterpret_cast<struct s581**>(ebp47 - 44))->f4824);
                eax50 = _ZNKSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEixEj(v46, v43, v48, v49);
                v51 = reinterpret_cast<void**>(static_cast<int32_t>(reinterpret_cast<signed char>(*eax50)));
                v52 = *reinterpret_cast<void***>(ebp53 - 48);
                _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEpLEc(v52, v51, v54, v55);
                *reinterpret_cast<int32_t*>(ebp56 - 20) = *reinterpret_cast<int32_t*>(ebp57 - 20) + 1;
            }
            *reinterpret_cast<int32_t*>(ebp58 - 20) = 0;
        }
    }
    if (*reinterpret_cast<int32_t*>(ebp59 - 20)) {
        *reinterpret_cast<int32_t*>(ebp60 - 24) = *reinterpret_cast<int32_t*>(ebp61 - 20);
        while (*reinterpret_cast<int32_t*>(ebp62 - 24) < 3) {
            *reinterpret_cast<signed char*>(ebp63 + *reinterpret_cast<int32_t*>(ebp64 - 24) - 27) = 0;
            *reinterpret_cast<int32_t*>(ebp65 - 24) = *reinterpret_cast<int32_t*>(ebp66 - 24) + 1;
        }
        eax67 = reinterpret_cast<int32_t>(static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(ebp68 - 27)) & 0xfc) >> 2;
        *reinterpret_cast<signed char*>(ebp69 - 31) = *reinterpret_cast<signed char*>(&eax67);
        ecx70 = ((static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(ebp71 - 27)) & 3) << 4) + (reinterpret_cast<int32_t>(static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(ebp72 - 26)) & 0xf0) >> 4);
        *reinterpret_cast<signed char*>(ebp73 - 30) = *reinterpret_cast<signed char*>(&ecx70);
        edx74 = ((static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(ebp75 - 26)) & 15) << 2) + (reinterpret_cast<int32_t>(static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(ebp76 - 25)) & 0xc0) >> 6);
        *reinterpret_cast<signed char*>(ebp77 - 29) = *reinterpret_cast<signed char*>(&edx74);
        *reinterpret_cast<int32_t*>(ebp78 - 24) = 0;
        while (*reinterpret_cast<int32_t*>(ebp79 - 24) < *reinterpret_cast<int32_t*>(ebp80 - 20) + 1) {
            v81 = reinterpret_cast<void**>(static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(ebp82 + *reinterpret_cast<int32_t*>(ebp83 - 24) - 31)));
            v84 = reinterpret_cast<void**>(&(*reinterpret_cast<struct s582**>(ebp85 - 44))->f4824);
            eax88 = _ZNKSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEixEj(v84, v81, v86, v87);
            v51 = reinterpret_cast<void**>(static_cast<int32_t>(reinterpret_cast<signed char>(*eax88)));
            v89 = *reinterpret_cast<void***>(ebp90 - 48);
            _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEpLEc(v89, v51, v91, v92);
            *reinterpret_cast<int32_t*>(ebp93 - 24) = *reinterpret_cast<int32_t*>(ebp94 - 24) + 1;
        }
        while (eax95 = *reinterpret_cast<int32_t*>(ebp96 - 20), *reinterpret_cast<int32_t*>(ebp97 - 20) = eax95 + 1, eax95 < 3) {
            v98 = *reinterpret_cast<void***>(ebp99 - 48);
            v51 = reinterpret_cast<void**>(61);
            _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEpLEc(v98, 61, v100, v101);
        }
    }
    *reinterpret_cast<signed char*>(ebp102 - 13) = 1;
    if (!(*reinterpret_cast<unsigned char*>(ebp103 - 13) & 1)) {
        v104 = *reinterpret_cast<void***>(ebp105 - 48);
        _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(v104, v51, v106, v107, v108, v109);
    }
    goto v110;
}

struct s583 {
    signed char[36] pad36;
    int32_t f36;
};

struct s584 {
    signed char[32] pad32;
    int32_t f32;
};

struct s585 {
    signed char[28] pad28;
    int32_t f28;
};

struct s586 {
    signed char[24] pad24;
    int32_t f24;
};

struct s587 {
    signed char[20] pad20;
    int32_t f20;
};

struct s588 {
    signed char[16] pad16;
    int32_t f16;
};

struct s589 {
    signed char[12] pad12;
    int32_t f12;
};

struct s590 {
    signed char[8] pad8;
    int32_t f8;
};

struct s591 {
    signed char[8] pad8;
    void** f8;
};

struct s592 {
    signed char[16] pad16;
    uint32_t f16;
};

struct s593 {
    signed char[12] pad12;
    int32_t f12;
};

struct s594 {
    signed char[12] pad12;
    uint32_t f12;
};

struct s595 {
    signed char[12] pad12;
    int32_t f12;
};

struct s596 {
    signed char[16] pad16;
    int32_t f16;
};

struct s597 {
    signed char[12] pad12;
    int32_t f12;
};

struct s598 {
    signed char[1] pad1;
    void** f1;
};

struct s599 {
    signed char[24] pad24;
    int32_t f24;
};

struct s600 {
    signed char[24] pad24;
    void** f24;
};

struct s601 {
    signed char[32] pad32;
    int32_t f32;
};

struct s602 {
    signed char[36] pad36;
    void** f36;
};

struct s603 {
    signed char[32] pad32;
    void** f32;
};

struct s604 {
    signed char[24] pad24;
    void* f24;
};

struct s605 {
    signed char[20] pad20;
    int32_t f20;
};

struct s606 {
    signed char[28] pad28;
    int32_t f28;
};

struct s607 {
    signed char[24] pad24;
    int32_t f24;
};

struct s608 {
    signed char[24] pad24;
    uint32_t f24;
};

struct s609 {
    signed char[32] pad32;
    int32_t f32;
};

struct s610 {
    signed char[24] pad24;
    void* f24;
};

struct s611 {
    signed char[28] pad28;
    void* f28;
};

struct s612 {
    signed char[12] pad12;
    int32_t f12;
};

struct s614 {
    signed char[1] pad1;
    void** f1;
};

struct s613 {
    signed char[12] pad12;
    struct s614* f12;
};

struct s615 {
    signed char[1] pad1;
    void** f1;
};

struct s616 {
    signed char[20] pad20;
    int32_t f20;
};

struct s617 {
    signed char[24] pad24;
    int32_t f24;
};

struct s618 {
    signed char[32] pad32;
    int32_t f32;
};

struct s619 {
    signed char[20] pad20;
    void** f20;
};

struct s620 {
    signed char[20] pad20;
    void* f20;
};

void fun_4dde() {
    int32_t ecx1;
    struct s583* ebp2;
    int32_t edx3;
    struct s584* ebp4;
    int32_t esi5;
    struct s585* ebp6;
    int32_t edi7;
    struct s586* ebp8;
    int32_t ebx9;
    struct s587* ebp10;
    int32_t ebp11;
    int32_t ebp12;
    struct s588* ebp13;
    int32_t ebp14;
    struct s589* ebp15;
    int32_t ebp16;
    struct s590* ebp17;
    void** eax18;
    struct s591* ebp19;
    int32_t ebp20;
    int32_t ebp21;
    int32_t ebp22;
    int32_t ebp23;
    int32_t ebp24;
    int32_t ebp25;
    void** eax26;
    int32_t ebp27;
    struct s592* ebp28;
    int32_t ebp29;
    struct s593* ebp30;
    void** v31;
    int32_t ebp32;
    void** v33;
    int32_t ebp34;
    void** v35;
    void** v36;
    void** v37;
    void** eax38;
    int32_t ebp39;
    struct s594* ebp40;
    int32_t ebp41;
    int32_t ebp42;
    int32_t ebp43;
    int32_t ebp44;
    struct s595* ebp45;
    struct s596* ebp46;
    int32_t ebp47;
    struct s597* ebp48;
    void** v49;
    void* ebp50;
    void* ebp51;
    void*** eax52;
    void** v53;
    void** eax54;
    int32_t ebp55;
    int32_t ebp56;
    int32_t ebp57;
    void** v58;
    int32_t ebp59;
    void** v60;
    void** eax61;
    void** ecx62;
    int32_t ebp63;
    void** v64;
    void** eax65;
    int32_t ebp66;
    void** v67;
    int32_t ebp68;
    struct s599* ebp69;
    void** v70;
    int32_t ebp71;
    void** v72;
    void** eax73;
    void** v74;
    int32_t ebp75;
    int32_t ebp76;
    void** v77;
    void** eax78;
    void** ecx79;
    struct s600* ebp80;
    void** v81;
    int32_t ebp82;
    void** v83;
    struct s601* ebp84;
    void** v85;
    int32_t ebp86;
    void** eax87;
    void** ecx88;
    struct s602* ebp89;
    void** edx90;
    struct s603* ebp91;
    void** v92;
    struct s604* ebp93;
    int32_t ebp94;
    struct s605* ebp95;
    struct s606* ebp96;
    struct s607* ebp97;
    int32_t ebp98;
    void** v99;
    int32_t ebp100;
    void** eax101;
    uint32_t eax102;
    struct s608* ebp103;
    struct s609* ebp104;
    void** v105;
    int32_t ebp106;
    int32_t ebp107;
    void** eax108;
    void** eax109;
    struct s610* ebp110;
    struct s611* ebp111;
    void** ecx112;
    int32_t ebp113;
    void** v114;
    int32_t ebp115;
    struct s612* ebp116;
    void** v117;
    int32_t ebp118;
    void** eax119;
    void** ecx120;
    int32_t ebp121;
    void** edx122;
    struct s613* ebp123;
    void** eax124;
    int32_t ebp125;
    void** v126;
    int32_t ebp127;
    void** eax128;
    int32_t ebp129;
    void** v130;
    int32_t ebp131;
    struct s616* ebp132;
    struct s617* ebp133;
    struct s618* ebp134;
    int32_t ebp135;
    void** eax136;
    struct s619* ebp137;
    void** v138;
    int32_t ebp139;
    void** v140;
    void** v141;
    void** v142;
    void** v143;
    void** v144;
    void** v145;
    void** v146;
    void** v147;
    signed char* eax148;
    int32_t ebp149;
    struct s620* ebp150;
    int32_t ebp151;
    void* ebp152;
    void** v153;
    void** v154;
    void** v155;
    void** v156;
    void** v157;
    void** v158;
    void** v159;
    void** v160;
    int32_t v161;

    ecx1 = ebp2->f36;
    edx3 = ebp4->f32;
    esi5 = ebp6->f28;
    edi7 = ebp8->f24;
    ebx9 = ebp10->f20;
    *reinterpret_cast<int32_t*>(ebp11 - 48) = reinterpret_cast<int32_t>(__return_address()) + reinterpret_cast<int32_t>("wy3uaBYbg==8uKJitgQ7l9Q1zez62DfNIVA03vL7e1P5ZTx0i56+zZ0KBMAde+VBYIktwiOKyy5M+ZCR7mgabNCLl+ThrFQ83QyY55dvSO1Wd0wIeh8LS7FYs0fLs8v7GC/fzPTY+0lBYhCTjDoevzhJqYZd9ZgTEG8SRG46BH6/tZZUpVoHhIvbfD2Pc0hEBTqLIyqwpX6IoNmonHEoswnIt4PkYiWpmS74/iXCMDP+MFg9hc2mek1ZaURGnxopNZgTHe8SRFB5hX/WywPjgX+m7Rwfy/jkh+DsAju+g4PBXXvleVIM+xyKEpWlPHS5ULls3LpuAQZaOEf33lBif+xtI/jEAs6LKuDrYxF+Y99AsTdiJt6FzXQ2sefBBnpuCAhtjqQ7695VS2NUFeOd+0fR4OvY9vqYRwYXLgDLF+4U4M2eQs6LBDycRMmTZ3fVMTdiAJHJuEE7r5saTd9ymZFy8WGucsSxWGhPvzwtFlviVe5HuJ+LFgYiH1nf7z0XIZcDBW4ibgc3g8nIua9C+tY0jVpuNLCnKNrXvoxEj5eX+pPdsOGj1to4R/feUGJ/7G0j+MQCzosq4OtjEX5j30CxN2Im3oXNdDax58EGem4JdSLTQ8nIt69C+vm0jVpWNLCnLhrXvqjEj5eMepPdl+Gj1vD9Fx/vAwVhly4HLiJJyLeD4p2diJD+uw0lwbS8Fy4HBhfuAMsNnlTgywQCzoTJvJx31RNnYgCxN3hBEcmbGnuvspmN324eTSBS0gJF3ZJHiDX8P4MY6kbCZu0cP6vbByzL6C0hfWn0tvJMFD9Kyy5juZCRzOgabO5hbON5s/Gp8uR71AmPc0hEARHJuFmZarPNekhTIUvoLTb9afSDanA83D+m7TIqWTfB51z30G0KbSaRh13If+jaPCjxaSXE+rnp7xP4bmOKyxHM+ZCs7mgaY3mhbOny8/GUCaR7yEQPc0m4QRHqs9mZexP+8rfB51ztEG0KXeaRh1oIf+jpPCjxeeXE+qtf/bBm7Rw/");
    *reinterpret_cast<int32_t*>(ebp12 - 52) = ebp13->f16;
    *reinterpret_cast<int32_t*>(ebp14 - 56) = ebp15->f12;
    *reinterpret_cast<int32_t*>(ebp16 - 60) = ebp17->f8;
    eax18 = ebp19->f8;
    *reinterpret_cast<int32_t*>(ebp20 - 64) = ebx9;
    *reinterpret_cast<int32_t*>(ebp21 - 68) = ecx1;
    *reinterpret_cast<int32_t*>(ebp22 - 72) = edx3;
    *reinterpret_cast<int32_t*>(ebp23 - 76) = esi5;
    *reinterpret_cast<int32_t*>(ebp24 - 80) = edi7;
    *reinterpret_cast<void***>(ebp25 - 84) = eax18;
    eax26 = _ZNKSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE8max_sizeEv(eax18);
    *reinterpret_cast<void***>(ebp27 - 16) = eax26;
    if (ebp28->f16 > reinterpret_cast<uint32_t>(*reinterpret_cast<int32_t*>(ebp29 - 16) - ebp30->f12 - 1)) {
        v31 = *reinterpret_cast<void***>(ebp32 - 84);
        _ZNKSt6__ndk121__basic_string_commonILb1EE20__throw_length_errorEv(v31);
    }
    v33 = *reinterpret_cast<void***>(ebp34 - 84);
    eax38 = _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE13__get_pointerEv(v33, v35, v36, v37);
    *reinterpret_cast<void***>(ebp39 - 20) = eax38;
    if (ebp40->f12 >= (*reinterpret_cast<uint32_t*>(ebp41 - 16) >> 1) - 16) {
        *reinterpret_cast<int32_t*>(ebp42 - 88) = *reinterpret_cast<int32_t*>(ebp43 - 16) - 1;
    } else {
        *reinterpret_cast<int32_t*>(ebp44 - 28) = ebp45->f12 + ebp46->f16;
        *reinterpret_cast<int32_t*>(ebp47 - 32) = ebp48->f12 << 1;
        v49 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp50) + 0xffffffe0);
        eax52 = _ZNSt6__ndk13maxIjEERKT_S3_S3_(reinterpret_cast<int32_t>(ebp51) + 0xffffffe4, v49);
        v53 = *eax52;
        eax54 = _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE11__recommendEj(v53, v49);
        *reinterpret_cast<void***>(ebp55 - 88) = eax54;
    }
    *reinterpret_cast<int32_t*>(ebp56 - 24) = *reinterpret_cast<int32_t*>(ebp57 - 88);
    v58 = *reinterpret_cast<void***>(ebp59 - 84);
    eax61 = _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE7__allocEv(v58, v49, v60);
    ecx62 = reinterpret_cast<void**>(&(*reinterpret_cast<struct s598**>(ebp63 - 24))->f1);
    v64 = ecx62;
    eax65 = _ZNSt6__ndk116allocator_traitsINS_9allocatorIcEEE8allocateERS2_j(eax61, v64);
    *reinterpret_cast<void***>(ebp66 - 36) = eax65;
    v67 = *reinterpret_cast<void***>(ebp68 - 84);
    _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE26__invalidate_all_iteratorsEv(v67, v64);
    if (ebp69->f24) {
        v70 = *reinterpret_cast<void***>(ebp71 - 36);
        eax73 = _ZNSt6__ndk116__to_raw_pointerIcEEPT_S2_(v70, v64, v72);
        v74 = *reinterpret_cast<void***>(ebp75 - 20);
        *reinterpret_cast<void***>(ebp76 - 92) = eax73;
        eax78 = _ZNSt6__ndk116__to_raw_pointerIcEEPT_S2_(v74, v64, v77);
        ecx79 = ebp80->f24;
        v81 = *reinterpret_cast<void***>(ebp82 - 92);
        v64 = eax78;
        v83 = ecx79;
        _ZNSt6__ndk111char_traitsIcE4copyEPcPKcj(v81, v64, v83);
    }
    if (ebp84->f32) {
        v85 = *reinterpret_cast<void***>(ebp86 - 36);
        eax87 = _ZNSt6__ndk116__to_raw_pointerIcEEPT_S2_(v85, v64, v83);
        ecx88 = ebp89->f36;
        edx90 = ebp91->f32;
        v92 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(eax87) + reinterpret_cast<uint32_t>(ebp93->f24));
        v64 = ecx88;
        v83 = edx90;
        _ZNSt6__ndk111char_traitsIcE4copyEPcPKcj(v92, v64, v83);
    }
    *reinterpret_cast<int32_t*>(ebp94 - 40) = ebp95->f20 - ebp96->f28 - ebp97->f24;
    if (*reinterpret_cast<int32_t*>(ebp98 - 40)) {
        v99 = *reinterpret_cast<void***>(ebp100 - 36);
        eax101 = _ZNSt6__ndk116__to_raw_pointerIcEEPT_S2_(v99, v64, v83);
        eax102 = reinterpret_cast<unsigned char>(eax101) + ebp103->f24 + ebp104->f32;
        v105 = *reinterpret_cast<void***>(ebp106 - 20);
        *reinterpret_cast<uint32_t*>(ebp107 - 96) = eax102;
        eax108 = _ZNSt6__ndk116__to_raw_pointerIcEEPT_S2_(v105, v64, v83);
        eax109 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(eax108) + reinterpret_cast<uint32_t>(ebp110->f24) + reinterpret_cast<uint32_t>(ebp111->f28));
        ecx112 = *reinterpret_cast<void***>(ebp113 - 40);
        v114 = *reinterpret_cast<void***>(ebp115 - 96);
        v64 = eax109;
        v83 = ecx112;
        _ZNSt6__ndk111char_traitsIcE4copyEPcPKcj(v114, v64, v83);
    }
    if (ebp116->f12 + 1 != 11) {
        v117 = *reinterpret_cast<void***>(ebp118 - 84);
        eax119 = _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE7__allocEv(v117, v64, v83);
        ecx120 = *reinterpret_cast<void***>(ebp121 - 20);
        edx122 = reinterpret_cast<void**>(&ebp123->f12->f1);
        v83 = edx122;
        _ZNSt6__ndk116allocator_traitsINS_9allocatorIcEEE10deallocateERS2_Pcj(eax119, ecx120, v83);
    }
    eax124 = *reinterpret_cast<void***>(ebp125 - 36);
    v126 = *reinterpret_cast<void***>(ebp127 - 84);
    _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE18__set_long_pointerEPc(v126, eax124, v83);
    eax128 = reinterpret_cast<void**>(&(*reinterpret_cast<struct s615**>(ebp129 - 24))->f1);
    v130 = *reinterpret_cast<void***>(ebp131 - 84);
    _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE14__set_long_capEj(v130, eax128, v83);
    ebp132->f20 = ebp133->f24 + ebp134->f32 + *reinterpret_cast<int32_t*>(ebp135 - 40);
    eax136 = ebp137->f20;
    v138 = *reinterpret_cast<void***>(ebp139 - 84);
    _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE15__set_long_sizeEj(v138, eax136, v83, v140, v141, v142, v143, v144, v145, v146, v147);
    eax148 = reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(*reinterpret_cast<void**>(ebp149 - 36)) + reinterpret_cast<uint32_t>(ebp150->f20));
    *reinterpret_cast<signed char*>(ebp151 - 41) = 0;
    _ZNSt6__ndk111char_traitsIcE6assignERcRKc(eax148, reinterpret_cast<int32_t>(ebp152) - 41, v83, v153, v154, v155, v156, v157, v158, v159, v160);
    goto v161;
}

void fun_a41d();

/* std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::__zero() */
void _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6__zeroEv(void** a1);

/* std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string() */
void _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2Ev(void** a1) {
    fun_a41d();
    _ZNSt6__ndk117__compressed_pairINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE5__repES5_EC2ILb1EvEEv(a1);
    _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6__zeroEv(a1);
    goto a1;
}

struct s621 {
    signed char[88] pad88;
    int32_t f88;
};

int32_t fun_2140(uint32_t a1) {
    struct s621* ebx2;

    goto ebx2->f88;
}

void fun_a59e();

/* unsigned int std::__ndk1::__str_find<char, unsigned int, std::__ndk1::char_traits<char>, 4294967295u>(char const*, unsigned int, char, unsigned int) */
void _ZNSt6__ndk110__str_findIcjNS_11char_traitsIcEELj4294967295EEET0_PKT_S3_S4_S3_(void** a1, void** a2, signed char a3, void** a4) {
    int32_t eax5;

    fun_a59e();
    if (reinterpret_cast<unsigned char>(a4) < reinterpret_cast<unsigned char>(a2)) {
        eax5 = _ZNSt6__ndk111char_traitsIcE4findEPKcjRS2_(reinterpret_cast<unsigned char>(a1) + reinterpret_cast<unsigned char>(a4), reinterpret_cast<unsigned char>(a2) - reinterpret_cast<unsigned char>(a4), reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 + 16);
        if (eax5) {
        }
    }
    goto a1;
}

struct s622 {
    signed char[12] pad12;
    int32_t f12;
};

struct s623 {
    signed char[8] pad8;
    int32_t f8;
};

struct s624 {
    signed char[16] pad16;
    signed char* f16;
};

struct s625 {
    signed char[12] pad12;
    void* f12;
};

void fun_a62d() {
    int1_t zf1;
    struct s622* ebp2;
    int32_t ebp3;
    int32_t eax4;
    struct s623* ebp5;
    int32_t v6;
    struct s624* ebp7;
    int32_t ebp8;
    uint32_t eax9;
    void* v10;
    struct s625* ebp11;
    void* v12;
    int32_t ebp13;
    int32_t eax14;
    int32_t ebp15;
    int32_t ebp16;
    int32_t v17;

    zf1 = ebp2->f12 == 0;
    *reinterpret_cast<int32_t*>(ebp3 - 16) = reinterpret_cast<int32_t>(__return_address()) + 0x88f7;
    if (!zf1) {
        eax4 = ebp5->f8;
        v6 = *ebp7->f16;
        *reinterpret_cast<int32_t*>(ebp8 - 20) = eax4;
        eax9 = _ZNSt6__ndk111char_traitsIcE11to_int_typeEc(*reinterpret_cast<unsigned char*>(&v6));
        v10 = ebp11->f12;
        v12 = *reinterpret_cast<void**>(ebp13 - 20);
        eax14 = fun_2030(v12, eax9, v10);
        *reinterpret_cast<int32_t*>(ebp15 - 12) = eax14;
    } else {
        *reinterpret_cast<int32_t*>(ebp16 - 12) = 0;
    }
    goto v17;
}

struct s626 {
    signed char[132] pad132;
    int32_t f132;
};

struct s6* fun_21f0(int32_t* a1) {
    struct s626* ebx2;

    goto ebx2->f132;
}

int32_t _Unwind_GetRegionStart(struct s21* a1) {
    return a1->f92;
}

struct s627 {
    signed char[152] pad152;
    int32_t f152;
};

void fun_2240(int32_t a1, void** a2, void** a3) {
    struct s627* ebx4;

    goto ebx4->f152;
}

struct s628 {
    signed char[108] pad108;
    int32_t f108;
};

void** fun_2190(void** a1, void** a2) {
    struct s628* ebx3;

    goto ebx3->f108;
}

struct s629 {
    signed char[52] pad52;
    int32_t f52;
};

void fun_20b0() {
    struct s629* ebx1;

    goto ebx1->f52;
}

void fun_2250(int32_t a1, int32_t a2, int32_t a3, int32_t a4);

void fun_2559() {
    int32_t v1;
    int32_t v2;
    int32_t v3;
    int32_t v4;

    fun_2250(v1, v2, v3, reinterpret_cast<int32_t>(__return_address()) + 0x109cb + 0x31c);
    goto v4;
}

struct s630 {
    signed char[116] pad116;
    int32_t f116;
};

void fun_21b0(void** a1, void** a2, void** a3) {
    struct s630* ebx4;

    goto ebx4->f116;
}

struct s631 {
    signed char[4800] pad4800;
    void** f4800;
};

struct s632 {
    void* f0;
    int32_t f4;
};

struct s633 {
    signed char[4800] pad4800;
    void** f4800;
};

void fun_22dd() {
    struct s631* eax1;
    int32_t ebp2;
    int32_t ebp3;
    int32_t ebp4;
    int32_t ebp5;
    int32_t ebp6;
    int32_t ebp7;
    int32_t ebp8;
    int32_t ebp9;
    int32_t ebp10;
    int32_t ebp11;
    int32_t ebp12;
    int32_t ebp13;
    int32_t ebp14;
    int32_t ebp15;
    int32_t ebp16;
    int32_t ebp17;
    int32_t ebp18;
    int32_t ebp19;
    int32_t ebp20;
    struct s632* ecx21;
    int32_t ebp22;
    void* v23;
    int32_t v24;
    int32_t ebp25;
    void** edx26;
    int32_t ebp27;
    uint32_t esi28;
    uint32_t v29;
    int32_t v30;
    int32_t v31;

    eax1 = reinterpret_cast<struct s631*>(reinterpret_cast<int32_t>(__return_address()) + 0x10c47);
    *reinterpret_cast<signed char*>(ebp2 - 32) = 55;
    *reinterpret_cast<signed char*>(ebp3 - 31) = 52;
    *reinterpret_cast<signed char*>(ebp4 - 30) = 51;
    *reinterpret_cast<signed char*>(ebp5 - 29) = 51;
    *reinterpret_cast<signed char*>(ebp6 - 28) = 52;
    *reinterpret_cast<signed char*>(ebp7 - 27) = 48;
    *reinterpret_cast<signed char*>(ebp8 - 26) = 53;
    *reinterpret_cast<signed char*>(ebp9 - 25) = 49;
    *reinterpret_cast<signed char*>(ebp10 - 24) = 56;
    *reinterpret_cast<signed char*>(ebp11 - 23) = 48;
    *reinterpret_cast<signed char*>(ebp12 - 22) = 48;
    *reinterpret_cast<signed char*>(ebp13 - 21) = 49;
    *reinterpret_cast<signed char*>(ebp14 - 20) = 52;
    *reinterpret_cast<signed char*>(ebp15 - 19) = 50;
    *reinterpret_cast<signed char*>(ebp16 - 18) = 53;
    *reinterpret_cast<signed char*>(ebp17 - 17) = 54;
    *reinterpret_cast<int32_t*>(ebp18 - 16) = ebp19 - 32;
    *reinterpret_cast<int32_t*>(ebp20 - 12) = 16;
    ecx21 = reinterpret_cast<struct s632*>(ebp22 - 16);
    v23 = ecx21->f0;
    v24 = ecx21->f4;
    *reinterpret_cast<struct s631**>(ebp25 - 36) = eax1;
    _ZNSt6__ndk16vectorIhNS_9allocatorIhEEEC2ESt16initializer_listIhE(&eax1->f4800, v23, v24);
    edx26 = reinterpret_cast<void**>(&(*reinterpret_cast<struct s633**>(ebp27 - 36))->f4800);
    esi28 = reinterpret_cast<int32_t>(*reinterpret_cast<struct s633**>(ebp27 - 36)) + 0x31c;
    v29 = reinterpret_cast<int32_t>(*reinterpret_cast<struct s633**>(ebp27 - 36)) + 0xffff3a2c;
    fun_2200(v29, edx26, esi28, v30);
    goto v31;
}

struct s634 {
    signed char[172] pad172;
    int32_t f172;
};

void fun_2290() {
    struct s634* ebx1;

    goto ebx1->f172;
}

struct s635 {
    signed char[36] pad36;
    int32_t f36;
};

void fun_2070(void** a1) {
    struct s635* ebx2;

    goto ebx2->f36;
}

struct s636 {
    signed char[92] pad92;
    int32_t f92;
};

int32_t fun_2150(int32_t a1, void** a2, void** a3) {
    struct s636* ebx4;

    goto ebx4->f92;
}

void fun_3abd();

/* std::__ndk1::__compressed_pair_elem<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::__rep, 0, false>::__compressed_pair_elem() */
void _ZNSt6__ndk122__compressed_pair_elemINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE5__repELi0ELb0EEC2Ev(void** a1, void** a2);

/* std::__ndk1::__compressed_pair_elem<std::__ndk1::allocator<char>, 1, true>::__compressed_pair_elem() */
void _ZNSt6__ndk122__compressed_pair_elemINS_9allocatorIcEELi1ELb1EEC2Ev(void** a1, void** a2);

/* std::__ndk1::__compressed_pair<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::__rep, std::__ndk1::allocator<char> >::__compressed_pair<true, void>() */
void _ZNSt6__ndk117__compressed_pairINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE5__repES5_EC2ILb1EvEEv(void** a1) {
    fun_3abd();
    _ZNSt6__ndk122__compressed_pair_elemINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE5__repELi0ELb0EEC2Ev(a1, a1);
    _ZNSt6__ndk122__compressed_pair_elemINS_9allocatorIcEELi1ELb1EEC2Ev(a1, a1);
    goto a1;
}

/* std::__ndk1::char_traits<char>::length(char const*) */
void** _ZNSt6__ndk111char_traitsIcE6lengthEPKc(void** a1) {
    fun_3c6d();
    fun_2110(a1);
    goto a1;
}

struct s637 {
    signed char[12] pad12;
    int32_t f12;
};

struct s638 {
    signed char[8] pad8;
    int32_t f8;
};

struct s639 {
    signed char[12] pad12;
    void** f12;
};

struct s640 {
    signed char[8] pad8;
    void** f8;
};

void fun_36ae() {
    int32_t ecx1;
    struct s637* ebp2;
    int32_t edx3;
    struct s638* ebp4;
    void** edi5;
    struct s639* ebp6;
    void** v7;
    struct s640* ebp8;
    int32_t ebp9;
    int32_t ebp10;
    int32_t v11;

    ecx1 = ebp2->f12;
    edx3 = ebp4->f8;
    edi5 = ebp6->f12;
    v7 = ebp8->f8;
    *reinterpret_cast<int32_t*>(ebp9 - 16) = ecx1;
    *reinterpret_cast<int32_t*>(ebp10 - 20) = edx3;
    _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKc(v7, edi5);
    goto v11;
}

struct s641 {
    signed char[72] pad72;
    int32_t f72;
};

void fun_2100(int32_t a1, void** a2, void** a3) {
    struct s641* ebx4;

    goto ebx4->f72;
}

void fun_42fe();

/* std::__ndk1::allocator<char>::max_size() const */
void** _ZNKSt6__ndk19allocatorIcE8max_sizeEv(void** a1, void** a2, void** a3, void** a4, int32_t a5);

/* std::__ndk1::allocator<char>::allocate(unsigned int, void const*) */
void _ZNSt6__ndk19allocatorIcE8allocateEjPKv(void** a1, void** a2, void** a3, int32_t a4, void** a5, void** a6, int32_t a7) {
    int32_t v8;
    void** eax9;
    int32_t esi10;

    fun_42fe();
    eax9 = _ZNKSt6__ndk19allocatorIcE8max_sizeEv(a1, a1, a2, a3, v8 + reinterpret_cast<int32_t>("VXomaA9X3HWG5OfI8dUhBR5f1NC9CxLIIIlI1OMkPyqbb1zRhFg4eB26BkOdmGe/mUPJyLevQvr5hYA/SNl4G7GyeSmb0P67DSwN81+pCGfXjF2/ZxCtLhkIbcA2Cci3g/TEAF0NgyVGGcYiH2QTZ8zQGIvAKp7E3Hkpm/J1TScKKzcvYuVAyRBC+vmvUXGWurye1PTW9kRP3o1V68KeoyarBpT+jN2ofzc7EYFGwN5O9IVI5xeguZBekDHGvRJ+GYA2CG3uhrc2UkXJ1Q55RwFMOXkpD/BoJC6+iPv2cAbOPtpgQOwS0irTalP+FRJFyf0/jv53g8nIua9C+tY0jVpuNLCnKNrXvoxEj5eX+pPdsOGj1sBGNfhIt4PJ+vmvQtpWNI1nLjSwvqja15eMRI+dl/qT1vDho+EFHlUU0L0f+NR+HnQapxVIbcA2NzZuhqO41BRmsy6l9TFL9Qk7duPWtjtW/NDEW7tpLw0X/rmh8Y5CkMtty3Ygbh5NKQhn15HPMPpp3aUcUMXLKiFEnlx8MvfzN4PJyJ2Iop21+EBGA8nIt4iinZ2NEP67M+lJgUsqEMXaRa66cJihyYiw0PvBXXvlavhaBy8vAmdQk4FiHr8MOimGeEmMSxERAV175Wx2SEMkq2plbjoEfr+1llSuJIGiqKfU12IrdMdTlUbS23w9i+1rbc+e4Jq3zapkuvIGAyzBTYhOwJYK9aXE+rnv6QetEturH1J/WtkeVjRhLNSjcV+UTK8buX5DIaFa98EGiIlbmq0CVwxtFqdevGVs1KNxX5RMrzuXugbZnlrGpvXQE2SramV4HBdgDD86XE6OEeajnftV9zEkLYXS0gJ0nzL9Lh5NIFLSAkXJzlZhA9fvnu2otYRDLPIGAftbOrFmRWw8dLllC8ujW5T3fNYIbFyTLoLl33q5Adc2sRlXbn+yN31GFiaRhG9c6HC4PRgDjJQ+fT+OyLeDyfr5r0LaVjSNcKepK8h3s6KGsERujGYZYvr5gsqeLZmTaC0h"));
    if (reinterpret_cast<unsigned char>(a2) > reinterpret_cast<unsigned char>(eax9)) {
        _ZNSt6__ndk120__throw_length_errorEPKc(v8 + reinterpret_cast<int32_t>("VXomaA9X3HWG5OfI8dUhBR5f1NC9CxLIIIlI1OMkPyqbb1zRhFg4eB26BkOdmGe/mUPJyLevQvr5hYA/SNl4G7GyeSmb0P67DSwN81+pCGfXjF2/ZxCtLhkIbcA2Cci3g/TEAF0NgyVGGcYiH2QTZ8zQGIvAKp7E3Hkpm/J1TScKKzcvYuVAyRBC+vmvUXGWurye1PTW9kRP3o1V68KeoyarBpT+jN2ofzc7EYFGwN5O9IVI5xeguZBekDHGvRJ+GYA2CG3uhrc2UkXJ1Q55RwFMOXkpD/BoJC6+iPv2cAbOPtpgQOwS0irTalP+FRJFyf0/jv53g8nIua9C+tY0jVpuNLCnKNrXvoxEj5eX+pPdsOGj1sBGNfhIt4PJ+vmvQtpWNI1nLjSwvqja15eMRI+dl/qT1vDho+EFHlUU0L0f+NR+HnQapxVIbcA2NzZuhqO41BRmsy6l9TFL9Qk7duPWtjtW/NDEW7tpLw0X/rmh8Y5CkMtty3Ygbh5NKQhn15HPMPpp3aUcUMXLKiFEnlx8MvfzN4PJyJ2Iop21+EBGA8nIt4iinZ2NEP67M+lJgUsqEMXaRa66cJihyYiw0PvBXXvlavhaBy8vAmdQk4FiHr8MOimGeEmMSxERAV175Wx2SEMkq2plbjoEfr+1llSuJIGiqKfU12IrdMdTlUbS23w9i+1rbc+e4Jq3zapkuvIGAyzBTYhOwJYK9aXE+rnv6QetEturH1J/WtkeVjRhLNSjcV+UTK8buX5DIaFa98EGiIlbmq0CVwxtFqdevGVs1KNxX5RMrzuXugbZnlrGpvXQE2SramV4HBdgDD86XE6OEeajnftV9zEkLYXS0gJ0nzL9Lh5NIFLSAkXJzlZhA9fvnu2otYRDLPIGAftbOrFmRWw8dLllC8ujW5T3fNYIbFyTLoLl33q5Adc2sRlXbn+yN31GFiaRhG9c6HC4PRgDjJQ+fT+OyLeDyfr5r0LaVjSNcKepK8h3s6KGsERujGYZYvr5gsqeLZmTaC0h") + 0xffffb131, a1, a2, a3, v8 + reinterpret_cast<int32_t>("VXomaA9X3HWG5OfI8dUhBR5f1NC9CxLIIIlI1OMkPyqbb1zRhFg4eB26BkOdmGe/mUPJyLevQvr5hYA/SNl4G7GyeSmb0P67DSwN81+pCGfXjF2/ZxCtLhkIbcA2Cci3g/TEAF0NgyVGGcYiH2QTZ8zQGIvAKp7E3Hkpm/J1TScKKzcvYuVAyRBC+vmvUXGWurye1PTW9kRP3o1V68KeoyarBpT+jN2ofzc7EYFGwN5O9IVI5xeguZBekDHGvRJ+GYA2CG3uhrc2UkXJ1Q55RwFMOXkpD/BoJC6+iPv2cAbOPtpgQOwS0irTalP+FRJFyf0/jv53g8nIua9C+tY0jVpuNLCnKNrXvoxEj5eX+pPdsOGj1sBGNfhIt4PJ+vmvQtpWNI1nLjSwvqja15eMRI+dl/qT1vDho+EFHlUU0L0f+NR+HnQapxVIbcA2NzZuhqO41BRmsy6l9TFL9Qk7duPWtjtW/NDEW7tpLw0X/rmh8Y5CkMtty3Ygbh5NKQhn15HPMPpp3aUcUMXLKiFEnlx8MvfzN4PJyJ2Iop21+EBGA8nIt4iinZ2NEP67M+lJgUsqEMXaRa66cJihyYiw0PvBXXvlavhaBy8vAmdQk4FiHr8MOimGeEmMSxERAV175Wx2SEMkq2plbjoEfr+1llSuJIGiqKfU12IrdMdTlUbS23w9i+1rbc+e4Jq3zapkuvIGAyzBTYhOwJYK9aXE+rnv6QetEturH1J/WtkeVjRhLNSjcV+UTK8buX5DIaFa98EGiIlbmq0CVwxtFqdevGVs1KNxX5RMrzuXugbZnlrGpvXQE2SramV4HBdgDD86XE6OEeajnftV9zEkLYXS0gJ0nzL9Lh5NIFLSAkXJzlZhA9fvnu2otYRDLPIGAftbOrFmRWw8dLllC8ujW5T3fNYIbFyTLoLl33q5Adc2sRlXbn+yN31GFiaRhG9c6HC4PRgDjJQ+fT+OyLeDyfr5r0LaVjSNcKepK8h3s6KGsERujGYZYvr5gsqeLZmTaC0h"), a2, esi10);
    }
    _ZNSt6__ndk117__libcpp_allocateEjj(static_cast<uint32_t>(reinterpret_cast<unsigned char>(a2)), 1, a2, a3);
    goto a1;
}

struct s642 {
    signed char[8] pad8;
    int32_t f8;
};

struct s643 {
    signed char[8] pad8;
    int32_t f8;
};

void fun_428c() {
    int32_t ecx1;
    struct s642* ebp2;
    int32_t v3;
    struct s643* ebp4;
    int32_t ebp5;
    int32_t v6;

    ecx1 = ebp2->f8;
    v3 = ebp4->f8;
    *reinterpret_cast<int32_t*>(ebp5 - 8) = ecx1;
    _ZNSt6__ndk19addressofIcEEPT_RS1_(v3);
    goto v6;
}

struct s644 {
    signed char[76] pad76;
    int32_t f76;
};

void fun_2110(void** a1) {
    struct s644* ebx2;

    goto ebx2->f76;
}

struct s645 {
    signed char[12] pad12;
    int32_t f12;
};

struct s646 {
    signed char[8] pad8;
    int32_t f8;
};

struct s647 {
    signed char[8] pad8;
    int32_t* f8;
};

struct s648 {
    signed char[12] pad12;
    uint32_t f12;
};

struct s649 {
    signed char[196] pad196;
    int32_t f196;
};

void fun_422e() {
    int32_t ecx1;
    struct s645* ebp2;
    int32_t edx3;
    struct s646* ebp4;
    int32_t* esi5;
    struct s647* ebp6;
    uint32_t ebx7;
    struct s648* ebp8;
    int32_t ebp9;
    int32_t ebp10;
    int32_t ebp11;
    int32_t ebp12;
    int32_t ebp13;
    int32_t ebp14;
    int32_t v15;

    ecx1 = ebp2->f12;
    edx3 = ebp4->f8;
    esi5 = ebp6->f8;
    ebx7 = ebp8->f12;
    *reinterpret_cast<int32_t*>(ebp9 - 16) = reinterpret_cast<int32_t>(__return_address()) + reinterpret_cast<int32_t>("68KeoyarBpT+jN2ofzc7EYFGwN5O9IVI5xeguZBekDHGvRJ+GYA2CG3uhrc2UkXJ1Q55RwFMOXkpD/BoJC6+iPv2cAbOPtpgQOwS0irTalP+FRJFyf0/jv53g8nIua9C+tY0jVpuNLCnKNrXvoxEj5eX+pPdsOGj1sBGNfhIt4PJ+vmvQtpWNI1nLjSwvqja15eMRI+dl/qT1vDho+EFHlUU0L0f+NR+HnQapxVIbcA2NzZuhqO41BRmsy6l9TFL9Qk7duPWtjtW/NDEW7tpLw0X/rmh8Y5CkMtty3Ygbh5NKQhn15HPMPpp3aUcUMXLKiFEnlx8MvfzN4PJyJ2Iop21+EBGA8nIt4iinZ2NEP67M+lJgUsqEMXaRa66cJihyYiw0PvBXXvlavhaBy8vAmdQk4FiHr8MOimGeEmMSxERAV175Wx2SEMkq2plbjoEfr+1llSuJIGiqKfU12IrdMdTlUbS23w9i+1rbc+e4Jq3zapkuvIGAyzBTYhOwJYK9aXE+rnv6QetEturH1J/WtkeVjRhLNSjcV+UTK8buX5DIaFa98EGiIlbmq0CVwxtFqdevGVs1KNxX5RMrzuXugbZnlrGpvXQE2SramV4HBdgDD86XE6OEeajnftV9zEkLYXS0gJ0nzL9Lh5NIFLSAkXJzlZhA9fvnu2otYRDLPIGAftbOrFmRWw8dLllC8ujW5T3fNYIbFyTLoLl33q5Adc2sRlXbn+yN31GFiaRhG9c6HC4PRgDjJQ+fT+OyLeDyfr5r0LaVjSNcKepK8h3s6KGsERujGYZYvr5gsqeLZmTaC0hS+n0tv1sQbZiCzjRyx9Ex9SsDQvNT/78Ai0hS+g0tv1pwbZiLFhmcg99z325fN/64DvyC1eb8nkpm+WVeset25MrmP1MUDHGnpClEayFSOc0lVWtyAMkfBuekDHGnVQ8YK9c0YR4PShwjJQYA5ZjMAM+7szTOrCjDBGCerbFSOc0oLmQV5Axxp6vsXchK2ODTcu/wjbJiNUX4Ynk");
    *reinterpret_cast<int32_t*>(ebp10 - 20) = ecx1;
    *reinterpret_cast<int32_t*>(ebp11 - 24) = edx3;
    *reinterpret_cast<int32_t**>(ebp12 - 28) = esi5;
    fun_2080(esi5, ebx7);
    **reinterpret_cast<int32_t**>(ebp13 - 28) = (*reinterpret_cast<struct s649**>(ebp14 - 16))->f196 + 8;
    goto v15;
}

struct s650 {
    signed char[180] pad180;
    int32_t f180;
};

void fun_22b0(uint32_t a1) {
    struct s650* ebx2;

    goto ebx2->f180;
}

struct s651 {
    signed char[8] pad8;
    int32_t f8;
};

struct s652 {
    signed char[8] pad8;
    void** f8;
};

void fun_3d2c() {
    int32_t ecx1;
    struct s651* ebp2;
    void** v3;
    struct s652* ebp4;
    int32_t ebp5;
    int32_t ebp6;
    void** v7;
    void** eax8;
    void** v9;
    int32_t eax10;
    int32_t ebp11;
    int32_t v12;

    ecx1 = ebp2->f8;
    v3 = ebp4->f8;
    *reinterpret_cast<int32_t*>(ebp5 - 12) = reinterpret_cast<int32_t>(__return_address()) + reinterpret_cast<int32_t>("2ge8nk4M25b3ibygT2AWVe4iIBwQ0ON26+RAoJJ/2iuKYPFcPz+YubufJgB13mkZ2x1ps8vENcTxX4phdK2Z4MrexLzZ/lv5ap6Ei5xlHnReHS1pL9OI+gEpoPw212o385uc1V+58gIrD9OfmBmp3Rh13mmx2x1pg/S8Iva6+JGj2OWwmRepHQqhn9wXZqgElCcDmyYBu50DHGnqVNbSNH5mc0Sn2P30EGHEJeaznBIdnKpEl6E2R+J8gcXpAxxqNlTW0HN/y9h4rvxWpwGOCSPuHRAUFBQU=ITj7vhxv5pX2vTlijEW5z3rXaY8FBQUFBQUFBQUFBQU=1rvNxK5NfWc5LmN7tmgVx/E7c1ZxngMEfX+vtIPo+RHIk1tKtXlsUJ8sw8d301cQvector");
    *reinterpret_cast<int32_t*>(ebp6 - 16) = ecx1;
    eax8 = _ZNKSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE7__allocEv(v3, v7);
    eax10 = _ZNSt6__ndk116allocator_traitsINS_9allocatorIcEEE8max_sizeERKS2_(eax8, v9);
    *reinterpret_cast<int32_t*>(ebp11 - 8) = eax10;
    goto v12;
}

struct s653 {
    signed char[12] pad12;
    int32_t f12;
};

struct s654 {
    signed char[8] pad8;
    int32_t f8;
};

struct s655 {
    signed char[8] pad8;
    void** f8;
};

struct s656 {
    signed char[12] pad12;
    void** f12;
};

struct s657 {
    signed char[12] pad12;
    int32_t f12;
};

struct s658 {
    signed char[8] pad8;
    int32_t f8;
};

void fun_48ae() {
    int32_t ecx1;
    struct s653* ebp2;
    int32_t edx3;
    struct s654* ebp4;
    void** esi5;
    struct s655* ebp6;
    void** edi7;
    struct s656* ebp8;
    int32_t ebp9;
    int32_t ebp10;
    int32_t ebp11;
    void** v12;
    void** v13;
    unsigned char al14;
    int32_t ebp15;
    struct s657* ebp16;
    int32_t ebp17;
    struct s658* ebp18;
    int32_t v19;

    ecx1 = ebp2->f12;
    edx3 = ebp4->f8;
    esi5 = ebp6->f8;
    edi7 = ebp8->f12;
    *reinterpret_cast<int32_t*>(ebp9 - 20) = ecx1;
    *reinterpret_cast<int32_t*>(ebp10 - 24) = edx3;
    al14 = _ZNKSt6__ndk16__lessIjjEclERKjS3_(ebp11 - 16, esi5, edi7, v12, v13);
    if (al14 & 1) {
        *reinterpret_cast<int32_t*>(ebp15 - 28) = ebp16->f12;
    } else {
        *reinterpret_cast<int32_t*>(ebp17 - 28) = ebp18->f8;
    }
    goto v19;
}

struct s659 {
    signed char[8] pad8;
    int32_t f8;
};

struct s660 {
    signed char[8] pad8;
    void** f8;
};

void fun_3a1c() {
    int32_t ecx1;
    struct s659* ebp2;
    void** v3;
    struct s660* ebp4;
    int32_t ebp5;
    int32_t v6;

    ecx1 = ebp2->f8;
    v3 = ebp4->f8;
    *reinterpret_cast<int32_t*>(ebp5 - 8) = ecx1;
    _ZNSt6__ndk122__compressed_pair_elemINS_9allocatorIcEELi1ELb1EE5__getEv(v3);
    goto v6;
}

struct s661 {
    signed char[16] pad16;
    int32_t f16;
};

struct s662 {
    signed char[12] pad12;
    int32_t f12;
};

struct s663 {
    signed char[8] pad8;
    int32_t f8;
};

struct s664 {
    signed char[12] pad12;
    void** f12;
};

struct s665 {
    signed char[16] pad16;
    void** f16;
};

void fun_386e() {
    int32_t ecx1;
    struct s661* ebp2;
    int32_t edx3;
    struct s662* ebp4;
    int32_t esi5;
    struct s663* ebp6;
    void** edi7;
    struct s664* ebp8;
    void** ebx9;
    struct s665* ebp10;
    int32_t ebp11;
    int32_t ebp12;
    int32_t ebp13;
    int32_t ebp14;
    int32_t v15;

    ecx1 = ebp2->f16;
    edx3 = ebp4->f12;
    esi5 = ebp6->f8;
    edi7 = ebp8->f12;
    ebx9 = ebp10->f16;
    *reinterpret_cast<int32_t*>(ebp11 - 16) = reinterpret_cast<int32_t>(__return_address()) + 0xf6b6;
    *reinterpret_cast<int32_t*>(ebp12 - 20) = ecx1;
    *reinterpret_cast<int32_t*>(ebp13 - 24) = edx3;
    *reinterpret_cast<int32_t*>(ebp14 - 28) = esi5;
    _ZNSt6__ndk119__libcpp_deallocateEPvjj(edi7, ebx9, 1);
    goto v15;
}

void fun_4a8c();

/* char const* std::__ndk1::addressof<char const>(char const&) */
int32_t _ZNSt6__ndk19addressofIKcEEPT_RS2_(int32_t a1);

/* std::__ndk1::pointer_traits<char const*>::pointer_to(char const&) */
void _ZNSt6__ndk114pointer_traitsIPKcE10pointer_toERS1_(int32_t a1) {
    fun_4a8c();
    _ZNSt6__ndk19addressofIKcEEPT_RS2_(a1);
    goto a1;
}

struct s666 {
    signed char[8] pad8;
    int32_t f8;
};

struct s667 {
    signed char[8] pad8;
    void** f8;
};

void fun_4c7c() {
    int32_t ecx1;
    struct s666* ebp2;
    void** edx3;
    struct s667* ebp4;
    int32_t ebp5;
    int32_t ebp6;
    int32_t ebp7;
    void** v8;
    void** v9;
    void** v10;
    void** v11;
    void** v12;
    void** v13;
    void** v14;
    void** v15;
    void** v16;
    void** v17;
    unsigned char al18;
    void** v19;
    int32_t ebp20;
    void** eax21;
    int32_t ebp22;
    int32_t ebp23;
    int32_t v24;

    ecx1 = ebp2->f8;
    edx3 = ebp4->f8;
    *reinterpret_cast<int32_t*>(ebp5 - 8) = reinterpret_cast<int32_t>(__return_address()) + reinterpret_cast<int32_t>("DrYxF+Y99AsTdiJt6FzXQ2sefBBnpuCAhtjqQ7695VS2NUFeOd+0fR4OvY9vqYRwYXLgDLF+4U4M2eQs6LBDycRMmTZ3fVMTdiAJHJuEE7r5saTd9ymZFy8WGucsSxWGhPvzwtFlviVe5HuJ+LFgYiH1nf7z0XIZcDBW4ibgc3g8nIua9C+tY0jVpuNLCnKNrXvoxEj5eX+pPdsOGj1to4R/feUGJ/7G0j+MQCzosq4OtjEX5j30CxN2Im3oXNdDax58EGem4JdSLTQ8nIt69C+vm0jVpWNLCnLhrXvqjEj5eMepPdl+Gj1vD9Fx/vAwVhly4HLiJJyLeD4p2diJD+uw0lwbS8Fy4HBhfuAMsNnlTgywQCzoTJvJx31RNnYgCxN3hBEcmbGnuvspmN324eTSBS0gJF3ZJHiDX8P4MY6kbCZu0cP6vbByzL6C0hfWn0tvJMFD9Kyy5juZCRzOgabO5hbON5s/Gp8uR71AmPc0hEARHJuFmZarPNekhTIUvoLTb9afSDanA83D+m7TIqWTfB51z30G0KbSaRh13If+jaPCjxaSXE+rnp7xP4bmOKyxHM+ZCs7mgaY3mhbOny8/GUCaR7yEQPc0m4QRHqs9mZexP+8rfB51ztEG0KXeaRh1oIf+jpPCjxeeXE+qtf/bBm7Rw/u8YJfCfCg87eLVRZlk6ekJcSOEUGFy4HCxfuAODNnlTOiwQC3ETJvKd31RN3YgCxCbhBEe+bGnufcpmN6ZvyeTsNEP6zX6wN59epCF/vPRchlwMFeXo8Eg96JmgG19x1seTnyPhH99oQYn/ebSP47ELOiwQg62Mq/mPfUXE3YgCehc1m9rHn9AZ6bgEkTYAe5mgPehx1htfnyPHk3+89FyGXAwVVuxRj3c4LQyDQzHCKyy5juZCRzNO/7H7N+JqIqvch9+M6OLmybzqRn+89FyGXAwVzOrq1+rnjJBOOCPSq31tW50PjEC5jissRzPmQrO5oGmN5oWzp8vPxlAmke8hED3NJuEER6r");
    *reinterpret_cast<int32_t*>(ebp6 - 12) = ecx1;
    *reinterpret_cast<void***>(ebp7 - 16) = edx3;
    al18 = _ZNKSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9__is_longEv(edx3, v8, v9, v10, v11, v12, v13, v14, v15, v16, v17);
    if (al18 & 1) {
        v19 = *reinterpret_cast<void***>(ebp20 - 16);
        eax21 = _ZNKSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE14__get_long_capEv(v19);
        *reinterpret_cast<void***>(ebp22 - 20) = eax21;
    } else {
        *reinterpret_cast<int32_t*>(ebp23 - 20) = 11;
    }
    goto v24;
}

void fun_40fc();

/* std::__ndk1::allocator_traits<std::__ndk1::allocator<char> >::__max_size(std::__ndk1::integral_constant<bool, true>, std::__ndk1::allocator<char> const&) */
void _ZNSt6__ndk116allocator_traitsINS_9allocatorIcEEE10__max_sizeENS_17integral_constantIbLb1EEERKS2_(void** a1) {
    void** v2;
    void** v3;
    int32_t ebx4;

    fun_40fc();
    _ZNKSt6__ndk19allocatorIcE8max_sizeEv(a1, v2, a1, v3, ebx4);
    goto a1;
}

/* std::__ndk1::__vector_base<unsigned char, std::__ndk1::allocator<unsigned char> >::__vector_base() */
void _ZNSt6__ndk113__vector_baseIhNS_9allocatorIhEEEC2Ev(void** a1) {
    fun_6e7d();
    _ZNSt6__ndk120__vector_base_commonILb1EEC2Ev(a1);
    *reinterpret_cast<void***>(a1) = reinterpret_cast<void**>(0);
    *reinterpret_cast<void***>(a1 + 4) = reinterpret_cast<void**>(0);
    _ZNSt6__ndk117__compressed_pairIPhNS_9allocatorIhEEEC2IDnLb1EEEOT_(a1 + 8, reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 + 0xfffffff4);
    goto a1;
}

struct s668 {
    signed char[4812] pad4812;
    void** f4812;
};

struct s669 {
    signed char[4812] pad4812;
    void** f4812;
};

struct s670 {
    signed char[4812] pad4812;
    void** f4812;
};

struct s671 {
    signed char[4812] pad4812;
    void** f4812;
};

void fun_5271() {
    void** v1;
    int32_t ebp2;
    void* ebp3;
    int32_t ebp4;
    int32_t ebp5;
    void* eax6;
    int32_t ebp7;
    void* ebp8;
    int32_t ebp9;
    int32_t ebp10;
    signed char cl11;
    int32_t ebp12;
    int32_t ebp13;
    void*** v14;
    int32_t ebp15;
    void* ebp16;
    unsigned char* eax17;
    int32_t ebp18;
    int32_t ebp19;
    int32_t ebp20;
    int32_t ebp21;
    int32_t ebp22;
    int32_t ebp23;
    int32_t ebp24;
    void* v25;
    int32_t ebp26;
    void** v27;
    int32_t ebp28;
    void*** eax29;
    int32_t ebp30;
    void*** v31;
    int32_t ebp32;
    void*** v33;
    int32_t ebp34;
    unsigned char* eax35;
    int32_t ebp36;
    uint32_t ecx37;
    int32_t ebp38;
    void*** v39;
    int32_t ebp40;
    int32_t ebp41;
    void* ebp42;
    unsigned char* eax43;
    int32_t ebp44;
    uint32_t edx45;
    int32_t ebp46;
    int32_t ebp47;
    void*** v48;
    int32_t ebp49;
    int32_t ebp50;
    void* ebp51;
    unsigned char* eax52;
    int32_t ebp53;
    int32_t ebp54;
    int32_t ebp55;
    void* v56;
    int32_t ebp57;
    void** v58;
    int32_t ebp59;
    void*** eax60;
    int32_t ebp61;
    void*** v62;
    int32_t ebp63;
    void*** v64;
    int32_t ebp65;
    unsigned char* eax66;
    int32_t ebp67;
    uint32_t ecx68;
    int32_t ebp69;
    void*** v70;
    int32_t ebp71;
    int32_t ebp72;
    void* ebp73;
    unsigned char* eax74;
    int32_t ebp75;
    uint32_t edx76;
    int32_t ebp77;
    int32_t ebp78;
    void*** v79;
    int32_t ebp80;
    int32_t ebp81;
    void* ebp82;
    unsigned char* eax83;
    int32_t ebp84;
    int32_t ebp85;
    int32_t ebp86;
    void* v87;
    int32_t ebp88;
    void** v89;
    int32_t ebp90;
    void*** eax91;
    int32_t ebp92;
    void*** v93;
    int32_t ebp94;
    void*** v95;
    int32_t ebp96;
    unsigned char* eax97;
    int32_t ebp98;
    uint32_t ecx99;
    int32_t ebp100;
    void*** v101;
    int32_t ebp102;
    int32_t ebp103;
    void* ebp104;
    unsigned char* eax105;
    int32_t ebp106;
    uint32_t edx107;
    int32_t ebp108;
    int32_t ebp109;
    void*** v110;
    int32_t ebp111;
    int32_t ebp112;
    void* ebp113;
    unsigned char* eax114;
    int32_t ebp115;
    int32_t ebp116;
    int32_t ebp117;
    int32_t ebp118;
    int32_t ebp119;
    void* ebp120;
    void** v121;
    int32_t ebp122;
    int32_t ebp123;
    int32_t ebp124;
    void* ebp125;
    void** v126;
    unsigned char* v127;
    int32_t v128;

    v1 = reinterpret_cast<void**>(16);
    *reinterpret_cast<int32_t*>(ebp2 - 56) = reinterpret_cast<int32_t>(__return_address()) + 0xdcb3;
    _ZNSt6__ndk16vectorIhNS_9allocatorIhEEEC2Ej(reinterpret_cast<int32_t>(ebp3) + 0xffffffe0, 16);
    *reinterpret_cast<int32_t*>(ebp4 - 36) = 0;
    while (*reinterpret_cast<int32_t*>(ebp5 - 36) < 10) {
        eax6 = *reinterpret_cast<void**>(ebp7 - 36);
        _ZN6Cipher16generateFirstRowEiPh(eax6, reinterpret_cast<int32_t>(ebp8) + 0xfffffff0);
        *reinterpret_cast<int32_t*>(ebp9 - 48) = 0;
        while (*reinterpret_cast<int32_t*>(ebp10 - 48) < 4) {
            cl11 = *reinterpret_cast<signed char*>(ebp12 + *reinterpret_cast<uint32_t*>(ebp13 - 48) - 16);
            v14 = reinterpret_cast<void***>(*reinterpret_cast<uint32_t*>(ebp13 - 48) << 2);
            *reinterpret_cast<signed char*>(ebp15 - 57) = cl11;
            eax17 = _ZNSt6__ndk16vectorIhNS_9allocatorIhEEEixEj(reinterpret_cast<int32_t>(ebp16) - 32, v14);
            *reinterpret_cast<unsigned char**>(ebp18 - 64) = eax17;
            **reinterpret_cast<signed char**>(ebp19 - 64) = *reinterpret_cast<signed char*>(ebp20 - 57);
            *reinterpret_cast<int32_t*>(ebp21 - 48) = *reinterpret_cast<int32_t*>(ebp22 - 48) + 1;
        }
        *reinterpret_cast<int32_t*>(ebp23 - 52) = 0;
        while (*reinterpret_cast<int32_t*>(ebp24 - 52) < 4) {
            v25 = *reinterpret_cast<void**>(ebp26 - 36);
            v27 = reinterpret_cast<void**>(&(*reinterpret_cast<struct s668**>(ebp28 - 56))->f4812);
            eax29 = _ZNSt6__ndk16vectorINS0_IhNS_9allocatorIhEEEENS1_IS3_EEEixEj(v27, v25);
            *reinterpret_cast<void****>(ebp30 - 68) = eax29;
            v31 = reinterpret_cast<void***>(*reinterpret_cast<int32_t*>(ebp32 - 52) * 4 + 1);
            v33 = *reinterpret_cast<void****>(ebp34 - 68);
            eax35 = _ZNSt6__ndk16vectorIhNS_9allocatorIhEEEixEj(v33, v31);
            *reinterpret_cast<unsigned char**>(ebp36 - 72) = eax35;
            ecx37 = **reinterpret_cast<unsigned char**>(ebp38 - 72);
            v39 = reinterpret_cast<void***>(*reinterpret_cast<uint32_t*>(ebp40 - 52) << 2);
            *reinterpret_cast<uint32_t*>(ebp41 - 76) = ecx37;
            eax43 = _ZNSt6__ndk16vectorIhNS_9allocatorIhEEEixEj(reinterpret_cast<int32_t>(ebp42) - 32, v39);
            *reinterpret_cast<unsigned char**>(ebp44 - 80) = eax43;
            edx45 = *reinterpret_cast<uint32_t*>(ebp46 - 76) ^ static_cast<uint32_t>(**reinterpret_cast<unsigned char**>(ebp47 - 80));
            v48 = reinterpret_cast<void***>(*reinterpret_cast<int32_t*>(ebp49 - 52) * 4 + 1);
            *reinterpret_cast<signed char*>(ebp50 - 81) = *reinterpret_cast<signed char*>(&edx45);
            eax52 = _ZNSt6__ndk16vectorIhNS_9allocatorIhEEEixEj(reinterpret_cast<int32_t>(ebp51) - 32, v48);
            *reinterpret_cast<unsigned char**>(ebp53 - 88) = eax52;
            **reinterpret_cast<signed char**>(ebp54 - 88) = *reinterpret_cast<signed char*>(ebp55 - 81);
            v56 = *reinterpret_cast<void**>(ebp57 - 36);
            v58 = reinterpret_cast<void**>(&(*reinterpret_cast<struct s669**>(ebp59 - 56))->f4812);
            eax60 = _ZNSt6__ndk16vectorINS0_IhNS_9allocatorIhEEEENS1_IS3_EEEixEj(v58, v56);
            *reinterpret_cast<void****>(ebp61 - 92) = eax60;
            v62 = reinterpret_cast<void***>(*reinterpret_cast<int32_t*>(ebp63 - 52) * 4 + 2);
            v64 = *reinterpret_cast<void****>(ebp65 - 92);
            eax66 = _ZNSt6__ndk16vectorIhNS_9allocatorIhEEEixEj(v64, v62);
            *reinterpret_cast<unsigned char**>(ebp67 - 96) = eax66;
            ecx68 = **reinterpret_cast<unsigned char**>(ebp69 - 96);
            v70 = reinterpret_cast<void***>(*reinterpret_cast<int32_t*>(ebp71 - 52) * 4 + 1);
            *reinterpret_cast<uint32_t*>(ebp72 - 100) = ecx68;
            eax74 = _ZNSt6__ndk16vectorIhNS_9allocatorIhEEEixEj(reinterpret_cast<int32_t>(ebp73) - 32, v70);
            *reinterpret_cast<unsigned char**>(ebp75 - 0x68) = eax74;
            edx76 = *reinterpret_cast<uint32_t*>(ebp77 - 100) ^ static_cast<uint32_t>(**reinterpret_cast<unsigned char**>(ebp78 - 0x68));
            v79 = reinterpret_cast<void***>(*reinterpret_cast<int32_t*>(ebp80 - 52) * 4 + 2);
            *reinterpret_cast<signed char*>(ebp81 - 0x69) = *reinterpret_cast<signed char*>(&edx76);
            eax83 = _ZNSt6__ndk16vectorIhNS_9allocatorIhEEEixEj(reinterpret_cast<int32_t>(ebp82) - 32, v79);
            *reinterpret_cast<unsigned char**>(ebp84 - 0x70) = eax83;
            **reinterpret_cast<signed char**>(ebp85 - 0x70) = *reinterpret_cast<signed char*>(ebp86 - 0x69);
            v87 = *reinterpret_cast<void**>(ebp88 - 36);
            v89 = reinterpret_cast<void**>(&(*reinterpret_cast<struct s670**>(ebp90 - 56))->f4812);
            eax91 = _ZNSt6__ndk16vectorINS0_IhNS_9allocatorIhEEEENS1_IS3_EEEixEj(v89, v87);
            *reinterpret_cast<void****>(ebp92 - 0x74) = eax91;
            v93 = reinterpret_cast<void***>(*reinterpret_cast<int32_t*>(ebp94 - 52) * 4 + 3);
            v95 = *reinterpret_cast<void****>(ebp96 - 0x74);
            eax97 = _ZNSt6__ndk16vectorIhNS_9allocatorIhEEEixEj(v95, v93);
            *reinterpret_cast<unsigned char**>(ebp98 - 0x78) = eax97;
            ecx99 = **reinterpret_cast<unsigned char**>(ebp100 - 0x78);
            v101 = reinterpret_cast<void***>(*reinterpret_cast<int32_t*>(ebp102 - 52) * 4 + 2);
            *reinterpret_cast<uint32_t*>(ebp103 - 0x7c) = ecx99;
            eax105 = _ZNSt6__ndk16vectorIhNS_9allocatorIhEEEixEj(reinterpret_cast<int32_t>(ebp104) - 32, v101);
            *reinterpret_cast<unsigned char**>(ebp106 - 0x80) = eax105;
            edx107 = *reinterpret_cast<uint32_t*>(ebp108 - 0x7c) ^ static_cast<uint32_t>(**reinterpret_cast<unsigned char**>(ebp109 - 0x80));
            v110 = reinterpret_cast<void***>(*reinterpret_cast<int32_t*>(ebp111 - 52) * 4 + 3);
            *reinterpret_cast<signed char*>(ebp112 - 0x81) = *reinterpret_cast<signed char*>(&edx107);
            eax114 = _ZNSt6__ndk16vectorIhNS_9allocatorIhEEEixEj(reinterpret_cast<int32_t>(ebp113) - 32, v110);
            *reinterpret_cast<unsigned char**>(ebp115 - 0x88) = eax114;
            **reinterpret_cast<signed char**>(ebp116 - 0x88) = *reinterpret_cast<signed char*>(ebp117 - 0x81);
            *reinterpret_cast<int32_t*>(ebp118 - 52) = *reinterpret_cast<int32_t*>(ebp119 - 52) + 1;
        }
        v1 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp120) + 0xffffffe0);
        v121 = reinterpret_cast<void**>(&(*reinterpret_cast<struct s671**>(ebp122 - 56))->f4812);
        _ZNSt6__ndk16vectorINS0_IhNS_9allocatorIhEEEENS1_IS3_EEE9push_backERKS3_(v121, v1);
        *reinterpret_cast<int32_t*>(ebp123 - 36) = *reinterpret_cast<int32_t*>(ebp124 - 36) + 1;
    }
    _ZNSt6__ndk16vectorIhNS_9allocatorIhEEED2Ev(reinterpret_cast<int32_t>(ebp125) + 0xffffffe0, v1, v126, v127);
    goto v128;
}

void fun_6b9e();

/* std::__ndk1::vector<std::__ndk1::vector<unsigned char, std::__ndk1::allocator<unsigned char> >, std::__ndk1::allocator<std::__ndk1::vector<unsigned char, std::__ndk1::allocator<unsigned char> > > >::push_back(std::__ndk1::vector<unsigned char, std::__ndk1::allocator<unsigned char> > const&) */
void _ZNSt6__ndk16vectorINS0_IhNS_9allocatorIhEEEENS1_IS3_EEE9push_backERKS3_(void** a1, void** a2) {
    void* ebp3;
    void** edi4;
    void** v5;
    void** v6;
    void*** v7;
    void** eax8;
    void** eax9;
    void** v10;
    void** eax11;

    ebp3 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4);
    fun_6b9e();
    edi4 = *reinterpret_cast<void***>(a1 + 4);
    eax8 = _ZNSt6__ndk113__vector_baseINS_6vectorIhNS_9allocatorIhEEEENS2_IS4_EEE9__end_capEv(a1, v5, v6, v7);
    if (edi4 == *reinterpret_cast<void***>(eax8)) {
        _ZNSt6__ndk16vectorINS0_IhNS_9allocatorIhEEEENS1_IS3_EEE21__push_back_slow_pathIRKS3_EEvOT_(a1, a2);
    } else {
        _ZNSt6__ndk16vectorINS0_IhNS_9allocatorIhEEEENS1_IS3_EEE24__RAII_IncreaseAnnotatorC2ERKS5_j(reinterpret_cast<int32_t>(ebp3) + 0xfffffff0, a1, 1);
        eax9 = _ZNSt6__ndk113__vector_baseINS_6vectorIhNS_9allocatorIhEEEENS2_IS4_EEE7__allocEv(edi4, a1, a1, 1);
        v10 = *reinterpret_cast<void***>(a1 + 4);
        eax11 = _ZNSt6__ndk116__to_raw_pointerINS_6vectorIhNS_9allocatorIhEEEEEEPT_S6_(v10, a1, 1, eax9, edi4);
        _ZNSt6__ndk116allocator_traitsINS_9allocatorINS_6vectorIhNS1_IhEEEEEEE9constructIS4_JRKS4_EEEvRS5_PT_DpOT0_(eax9, eax11, a2, eax9);
        _ZNSt6__ndk16vectorINS0_IhNS_9allocatorIhEEEENS1_IS3_EEE24__RAII_IncreaseAnnotator6__doneEv(reinterpret_cast<int32_t>(ebp3) - 16, eax11, a2);
        *reinterpret_cast<void***>(a1 + 4) = *reinterpret_cast<void***>(a1 + 4) + 12;
    }
    goto a1;
}

struct s672 {
    signed char[8] pad8;
    int32_t f8;
};

struct s673 {
    signed char[8] pad8;
    void** f8;
};

void fun_695d() {
    int32_t ecx1;
    struct s672* ebp2;
    void** edx3;
    struct s673* ebp4;
    int32_t ebp5;
    int32_t ebp6;
    int32_t ebp7;
    void** v8;
    int32_t ebp9;
    int32_t v10;

    ecx1 = ebp2->f8;
    edx3 = ebp4->f8;
    *reinterpret_cast<int32_t*>(ebp5 - 20) = reinterpret_cast<int32_t>(__return_address()) + 0xc5c7;
    *reinterpret_cast<int32_t*>(ebp6 - 24) = ecx1;
    *reinterpret_cast<void***>(ebp7 - 28) = edx3;
    _ZNKSt6__ndk16vectorIhNS_9allocatorIhEEE17__annotate_deleteEv(edx3);
    v8 = *reinterpret_cast<void***>(ebp9 - 28);
    _ZNSt6__ndk113__vector_baseIhNS_9allocatorIhEEED2Ev(v8);
    goto v10;
}

struct s674 {
    signed char[12] pad12;
    int32_t f12;
};

struct s675 {
    signed char[8] pad8;
    int32_t f8;
};

struct s676 {
    signed char[8] pad8;
    int32_t f8;
};

struct s677 {
    signed char[12] pad12;
    void** f12;
};

struct s678 {
    signed char[12] pad12;
    void** f12;
};

struct s679 {
    signed char[12] pad12;
    void** f12;
};

struct s680 {
    signed char[12] pad12;
    void** f12;
};

struct s681 {
    signed char[12] pad12;
    void** f12;
};

struct s682 {
    void** f0;
    signed char[3] pad4;
    void** f4;
    signed char[3] pad8;
    void** f8;
};

void fun_6cee() {
    int32_t ecx1;
    struct s674* ebp2;
    int32_t edx3;
    struct s675* ebp4;
    int32_t esi5;
    struct s676* ebp6;
    void** v7;
    struct s677* ebp8;
    int32_t ebp9;
    int32_t ebp10;
    int32_t ebp11;
    int32_t ebp12;
    void** v13;
    void** eax14;
    void* ebp15;
    void** v16;
    int32_t ebp17;
    void** v18;
    void* ebp19;
    void** v20;
    struct s678* ebp21;
    void** v22;
    void** v23;
    void** v24;
    void** v25;
    void** v26;
    void** v27;
    void** v28;
    void** v29;
    void** v30;
    unsigned char al31;
    void** v32;
    struct s679* ebp33;
    void** v34;
    void** eax35;
    void** v36;
    void** eax37;
    void** v38;
    struct s680* ebp39;
    int32_t ebp40;
    void** v41;
    void** eax42;
    void** v43;
    int32_t ebp44;
    void** v45;
    int32_t ebp46;
    void** v47;
    struct s681* ebp48;
    void** v49;
    void** v50;
    int32_t v51;
    struct s4* eax52;
    void** v53;
    int32_t ebp54;
    int32_t ebp55;
    void** v56;
    void** v57;
    void** v58;
    void** v59;
    struct s4* v60;
    struct s3* eax61;
    struct s682* ecx62;
    int32_t ebp63;
    int32_t v64;

    ecx1 = ebp2->f12;
    edx3 = ebp4->f8;
    esi5 = ebp6->f8;
    v7 = ebp8->f12;
    *reinterpret_cast<int32_t*>(ebp9 - 28) = reinterpret_cast<int32_t>(__return_address()) + 0xc236;
    *reinterpret_cast<int32_t*>(ebp10 - 32) = ecx1;
    *reinterpret_cast<int32_t*>(ebp11 - 36) = edx3;
    *reinterpret_cast<int32_t*>(ebp12 - 40) = esi5;
    eax14 = _ZNKSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE7__allocEv(v7, v13);
    _ZNSt6__ndk116allocator_traitsINS_9allocatorIcEEE37select_on_container_copy_constructionERKS2_(reinterpret_cast<int32_t>(ebp15) - 24, eax14);
    v16 = *reinterpret_cast<void***>(ebp17 - 40);
    v18 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp19) + 0xffffffe8);
    _ZNSt6__ndk117__compressed_pairINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE5__repES5_EC2IS5_EENS_12__second_tagEOT_(v16, v18);
    v20 = ebp21->f12;
    al31 = _ZNKSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9__is_longEv(v20, v18, v22, v23, v24, v25, v26, v27, v28, v29, v30);
    if (al31 & 1) {
        v32 = ebp33->f12;
        eax35 = _ZNKSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE18__get_long_pointerEv(v32, v18, v34);
        eax37 = _ZNSt6__ndk116__to_raw_pointerIKcEEPT_S3_(eax35, v18, v36);
        v38 = ebp39->f12;
        *reinterpret_cast<void***>(ebp40 - 48) = eax37;
        eax42 = _ZNKSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE15__get_long_sizeEv(v38, v18, v41);
        v43 = *reinterpret_cast<void***>(ebp44 - 40);
        v45 = *reinterpret_cast<void***>(ebp46 - 48);
        _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6__initEPKcj(v43, v45, eax42);
    } else {
        v47 = ebp48->f12;
        eax52 = _ZNKSt6__ndk117__compressed_pairINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE5__repES5_E5firstEv(v47, v18, v49, v50, v51);
        v53 = *reinterpret_cast<void***>(ebp54 - 40);
        *reinterpret_cast<struct s4**>(ebp55 - 44) = eax52;
        eax61 = _ZNSt6__ndk117__compressed_pairINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE5__repES5_E5firstEv(v53, v18, v56, v57, v58, v59, v60);
        ecx62 = *reinterpret_cast<struct s682**>(ebp63 - 44);
        eax61->f0 = ecx62->f0;
        eax61->f4 = ecx62->f4;
        eax61->f8 = ecx62->f8;
    }
    goto v64;
}

struct s683 {
    signed char[8] pad8;
    int32_t f8;
};

struct s684 {
    signed char[12] pad12;
    int32_t f12;
};

struct s685 {
    signed char[12] pad12;
    void** f12;
};

struct s686 {
    signed char[12] pad12;
    void** f12;
};

struct s687 {
    signed char[12] pad12;
    void** f12;
};

void fun_6ded() {
    int32_t esi1;
    struct s683* ebp2;
    int1_t zf3;
    struct s684* ebp4;
    int32_t ebp5;
    int32_t ebp6;
    void** eax7;
    struct s685* ebp8;
    void** v9;
    int32_t ebp10;
    void** v11;
    struct s686* ebp12;
    void** v13;
    void** v14;
    int32_t v15;
    void** eax16;
    void** v17;
    struct s687* ebp18;
    int32_t ebp19;
    void** v20;
    void** v21;
    void** v22;
    void** v23;
    void** v24;
    void** eax25;
    void** v26;
    int32_t ebp27;
    void** v28;
    int32_t ebp29;
    int32_t v30;

    esi1 = ebp2->f8;
    zf3 = esi1 == ebp4->f12;
    *reinterpret_cast<int32_t*>(ebp5 - 12) = reinterpret_cast<int32_t>(__return_address()) + 0xc137;
    *reinterpret_cast<int32_t*>(ebp6 - 16) = esi1;
    if (!zf3) {
        eax7 = ebp8->f12;
        v9 = *reinterpret_cast<void***>(ebp10 - 16);
        _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE19__copy_assign_allocERKS5_(v9, eax7);
        v11 = ebp12->f12;
        eax16 = _ZNKSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE4dataEv(v11, eax7, v13, v14, v15);
        v17 = ebp18->f12;
        *reinterpret_cast<void***>(ebp19 - 20) = eax16;
        eax25 = _ZNKSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE4sizeEv(v17, eax7, v20, v21, v22, v23, v24);
        v26 = *reinterpret_cast<void***>(ebp27 - 16);
        v28 = *reinterpret_cast<void***>(ebp29 - 20);
        _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6assignEPKcj(v26, v28, eax25);
    }
    goto v30;
}

struct s688 {
    signed char[8] pad8;
    int32_t f8;
};

struct s689 {
    signed char[8] pad8;
    void** f8;
};

void fun_726d() {
    int32_t ecx1;
    struct s688* ebp2;
    void** v3;
    struct s689* ebp4;
    int32_t ebp5;
    int32_t ebp6;
    void** eax7;
    int32_t eax8;
    int32_t ebp9;
    int32_t eax10;
    int32_t ebp11;
    void* ebp12;
    void* ebp13;
    int32_t eax14;
    int32_t ebp15;
    int32_t v16;

    ecx1 = ebp2->f8;
    v3 = ebp4->f8;
    *reinterpret_cast<int32_t*>(ebp5 - 20) = reinterpret_cast<int32_t>(__return_address()) + 0xbcb7;
    *reinterpret_cast<int32_t*>(ebp6 - 24) = ecx1;
    eax7 = _ZNKSt6__ndk113__vector_baseIhNS_9allocatorIhEEE7__allocEv(v3);
    eax8 = _ZNSt6__ndk116allocator_traitsINS_9allocatorIhEEE8max_sizeERKS2_(eax7);
    *reinterpret_cast<int32_t*>(ebp9 - 12) = eax8;
    eax10 = _ZNSt6__ndk114numeric_limitsIiE3maxEv(eax7);
    *reinterpret_cast<int32_t*>(ebp11 - 16) = eax10;
    eax14 = _ZNSt6__ndk13minIjEERKT_S3_S3_(reinterpret_cast<int32_t>(ebp12) + 0xfffffff4, reinterpret_cast<int32_t>(ebp13) + 0xfffffff0);
    *reinterpret_cast<int32_t*>(ebp15 - 28) = eax14;
    goto v16;
}

struct s690 {
    signed char[8] pad8;
    void** f8;
};

struct s691 {
    signed char[8] pad8;
    int32_t* f8;
};

void fun_70bc() {
    void** ecx1;
    struct s690* ebp2;
    int32_t* edx3;
    struct s691* ebp4;
    int1_t zf5;
    int32_t ebp6;
    int32_t ebp7;
    void** v8;
    int32_t ebp9;
    void** v10;
    int32_t ebp11;
    void** v12;
    void** eax13;
    void** edx14;
    int32_t ebp15;
    void** v16;
    int32_t ebp17;
    int32_t ebp18;
    int32_t eax19;
    void** v20;
    int32_t ebp21;
    void** v22;
    int32_t ebp23;
    int32_t v24;

    ecx1 = ebp2->f8;
    edx3 = ebp4->f8;
    zf5 = *edx3 == 0;
    *reinterpret_cast<int32_t*>(ebp6 - 8) = reinterpret_cast<int32_t>(__return_address()) + 0xbe68;
    *reinterpret_cast<int32_t**>(ebp7 - 12) = edx3;
    if (!zf5) {
        v8 = *reinterpret_cast<void***>(ebp9 - 12);
        _ZNSt6__ndk113__vector_baseIhNS_9allocatorIhEEE5clearEv(ecx1, v8);
        v10 = *reinterpret_cast<void***>(ebp11 - 12);
        eax13 = _ZNSt6__ndk113__vector_baseIhNS_9allocatorIhEEE7__allocEv(ecx1, v10, v12);
        edx14 = *reinterpret_cast<void***>(*reinterpret_cast<void***>(ebp15 - 12));
        v16 = *reinterpret_cast<void***>(ebp15 - 12);
        *reinterpret_cast<void***>(ebp17 - 16) = eax13;
        *reinterpret_cast<void***>(ebp18 - 20) = edx14;
        eax19 = _ZNKSt6__ndk113__vector_baseIhNS_9allocatorIhEEE8capacityEv(v16);
        v20 = *reinterpret_cast<void***>(ebp21 - 16);
        v22 = *reinterpret_cast<void***>(ebp23 - 20);
        _ZNSt6__ndk116allocator_traitsINS_9allocatorIhEEE10deallocateERS2_Phj(v20, v22, eax19);
    }
    goto v24;
}

/* std::__ndk1::vector<unsigned char, std::__ndk1::allocator<unsigned char> >::__RAII_IncreaseAnnotator::__RAII_IncreaseAnnotator(std::__ndk1::vector<unsigned char, std::__ndk1::allocator<unsigned char> > const&, unsigned int) */
void** _ZNSt6__ndk16vectorIhNS_9allocatorIhEEE24__RAII_IncreaseAnnotatorC2ERKS3_j(void* a1, void** a2, void** a3) {
    return a3;
}

void fun_790e();

void _ZNSt6__ndk116allocator_traitsINS_9allocatorIhEEE25__construct_range_forwardIKhhhhEENS_9enable_ifIXaaaasr31is_trivially_move_constructibleIT0_EE5valuesr7is_sameIT1_T2_EE5valueooL_ZNS_17integral_constantIbLb1EE5valueEEntsr15__has_constructIS2_PS7_RT_EE5valueEvE4typeERS2_PSD_SI_RSC_(void** a1, void** a2, void** a3, void** a4) {
    void* v5;
    void** v6;

    fun_790e();
    v5 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(a3) - reinterpret_cast<unsigned char>(a2));
    if (reinterpret_cast<int32_t>(v5) > reinterpret_cast<int32_t>(0)) {
        v6 = *reinterpret_cast<void***>(a4);
        fun_2010(v6, a2, static_cast<uint32_t>(v5));
        *reinterpret_cast<void***>(a4) = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(v5) + reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(a4)));
    }
    goto a1;
}

/* std::__ndk1::vector<unsigned char, std::__ndk1::allocator<unsigned char> >::__RAII_IncreaseAnnotator::__done() */
void* _ZNSt6__ndk16vectorIhNS_9allocatorIhEEE24__RAII_IncreaseAnnotator6__doneEv(void* a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9) {
    return a1;
}

/* std::__ndk1::__vector_base<unsigned char, std::__ndk1::allocator<unsigned char> >::~__vector_base() */
void _ZNSt6__ndk113__vector_baseIhNS_9allocatorIhEEED2Ev(void** a1) {
    int1_t zf2;
    void** v3;
    void** eax4;
    void** edx5;
    int32_t eax6;

    fun_70bc();
    zf2 = *reinterpret_cast<void***>(a1) == 0;
    if (!zf2) {
        _ZNSt6__ndk113__vector_baseIhNS_9allocatorIhEEE5clearEv(a1, a1);
        eax4 = _ZNSt6__ndk113__vector_baseIhNS_9allocatorIhEEE7__allocEv(a1, a1, v3);
        edx5 = *reinterpret_cast<void***>(a1);
        eax6 = _ZNKSt6__ndk113__vector_baseIhNS_9allocatorIhEEE8capacityEv(a1);
        _ZNSt6__ndk116allocator_traitsINS_9allocatorIhEEE10deallocateERS2_Phj(eax4, edx5, eax6);
    }
    goto a1;
}

/* void std::__ndk1::allocator_traits<std::__ndk1::allocator<unsigned char> >::construct<unsigned char>(std::__ndk1::allocator<unsigned char>&, unsigned char*) */
void _ZNSt6__ndk116allocator_traitsINS_9allocatorIhEEE9constructIhJEEEvRS2_PT_DpOT0_(void** a1, void** a2, void** a3) {
    fun_84ce();
    _ZNSt6__ndk116allocator_traitsINS_9allocatorIhEEE11__constructIhJEEEvNS_17integral_constantIbLb1EEERS2_PT_DpOT0_(a1, a1, a2);
    goto a1;
}

struct s692 {
    signed char[8] pad8;
    int32_t f8;
};

struct s693 {
    signed char[8] pad8;
    void** f8;
};

void fun_83bc() {
    int32_t ecx1;
    struct s692* ebp2;
    void** v3;
    struct s693* ebp4;
    int32_t ebp5;
    int32_t v6;

    ecx1 = ebp2->f8;
    v3 = ebp4->f8;
    *reinterpret_cast<int32_t*>(ebp5 - 8) = ecx1;
    _ZNSt6__ndk122__compressed_pair_elemINS_9allocatorINS_6vectorIhNS1_IhEEEEEELi1ELb1EE5__getEv(v3);
    goto v6;
}

struct s694 {
    signed char[16] pad16;
    int32_t f16;
};

struct s695 {
    signed char[12] pad12;
    int32_t f12;
};

struct s696 {
    signed char[8] pad8;
    int32_t f8;
};

struct s697 {
    signed char[8] pad8;
    int32_t f8;
};

struct s698 {
    signed char[12] pad12;
    int32_t f12;
};

struct s699 {
    signed char[16] pad16;
    void** f16;
};

void fun_87ae() {
    int32_t ecx1;
    struct s694* ebp2;
    int32_t edx3;
    struct s695* ebp4;
    int32_t esi5;
    struct s696* ebp6;
    int32_t edi7;
    struct s697* ebp8;
    int32_t ebx9;
    struct s698* ebp10;
    int32_t ebp11;
    void** v12;
    struct s699* ebp13;
    int32_t ebp14;
    int32_t ebp15;
    int32_t ebp16;
    int32_t ebp17;
    int32_t ebp18;
    void** v19;
    void** v20;
    void** v21;
    void** v22;
    void** v23;
    void** v24;
    void** v25;
    void** v26;
    void** eax27;
    void** v28;
    int32_t ebp29;
    void** v30;
    int32_t ebp31;
    int32_t v32;

    ecx1 = ebp2->f16;
    edx3 = ebp4->f12;
    esi5 = ebp6->f8;
    edi7 = ebp8->f8;
    ebx9 = ebp10->f12;
    *reinterpret_cast<int32_t*>(ebp11 - 20) = reinterpret_cast<int32_t>(__return_address()) + 0xa776;
    v12 = ebp13->f16;
    *reinterpret_cast<int32_t*>(ebp14 - 24) = ebx9;
    *reinterpret_cast<int32_t*>(ebp15 - 28) = ecx1;
    *reinterpret_cast<int32_t*>(ebp16 - 32) = edx3;
    *reinterpret_cast<int32_t*>(ebp17 - 36) = esi5;
    *reinterpret_cast<int32_t*>(ebp18 - 40) = edi7;
    eax27 = _ZNSt6__ndk17forwardIRKNS_6vectorIhNS_9allocatorIhEEEEEEOT_RNS_16remove_referenceIS7_E4typeE(v12, v19, v20, v21, v22, v23, v24, v25, v26);
    v28 = *reinterpret_cast<void***>(ebp29 - 40);
    v30 = *reinterpret_cast<void***>(ebp31 - 24);
    _ZNSt6__ndk19allocatorINS_6vectorIhNS0_IhEEEEE9constructIS3_JRKS3_EEEvPT_DpOT0_(v28, v30, eax27);
    goto v32;
}

/* std::__ndk1::vector<std::__ndk1::vector<unsigned char, std::__ndk1::allocator<unsigned char> >, std::__ndk1::allocator<std::__ndk1::vector<unsigned char, std::__ndk1::allocator<unsigned char> > > >::size() const */
void** _ZNKSt6__ndk16vectorINS0_IhNS_9allocatorIhEEEENS1_IS3_EEE4sizeEv(void** a1, void** a2, void** a3, void*** a4) {
    void* edx5;

    edx5 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(a1 + 4)) - reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(a1)));
    __asm__("cdq ");
    return reinterpret_cast<int32_t>(edx5) / 12;
}

/* std::__ndk1::vector<std::__ndk1::vector<unsigned char, std::__ndk1::allocator<unsigned char> >, std::__ndk1::allocator<std::__ndk1::vector<unsigned char, std::__ndk1::allocator<unsigned char> > > >::__recommend(unsigned int) const */
void** _ZNKSt6__ndk16vectorINS0_IhNS_9allocatorIhEEEENS1_IS3_EEE11__recommendEj(void** a1, void** a2) {
    void* ebp3;
    void** eax4;
    uint32_t eax5;

    ebp3 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4);
    fun_8ccd();
    eax4 = _ZNKSt6__ndk16vectorINS0_IhNS_9allocatorIhEEEENS1_IS3_EEE8max_sizeEv(a1);
    if (reinterpret_cast<unsigned char>(a2) > reinterpret_cast<unsigned char>(eax4)) {
        _ZNKSt6__ndk120__vector_base_commonILb1EE20__throw_length_errorEv(a1);
    }
    eax5 = _ZNKSt6__ndk16vectorINS0_IhNS_9allocatorIhEEEENS1_IS3_EEE8capacityEv(a1);
    if (eax5 < reinterpret_cast<unsigned char>(eax4) >> 1) {
        _ZNSt6__ndk13maxIjEERKT_S3_S3_(reinterpret_cast<int32_t>(ebp3) + 0xffffffe8, reinterpret_cast<int32_t>(ebp3) + 12);
    }
    goto a1;
}

/* std::__ndk1::__split_buffer<std::__ndk1::vector<unsigned char, std::__ndk1::allocator<unsigned char> >, std::__ndk1::allocator<std::__ndk1::vector<unsigned char, std::__ndk1::allocator<unsigned char> > >&>::__split_buffer(unsigned int, unsigned int, std::__ndk1::allocator<std::__ndk1::vector<unsigned char, std::__ndk1::allocator<unsigned char> > >&) */
void _ZNSt6__ndk114__split_bufferINS_6vectorIhNS_9allocatorIhEEEERNS2_IS4_EEEC2EjjS6_(void** a1, void** a2, void** a3, void** a4) {
    void** v5;
    void** v6;
    void** eax7;
    void** eax8;
    void** eax9;
    void** eax10;
    void*** v11;
    void** eax12;

    fun_8d7e();
    v5 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 + 0xfffffff0);
    _ZNSt6__ndk117__compressed_pairIPNS_6vectorIhNS_9allocatorIhEEEERNS2_IS4_EEEC2IDnS7_EEOT_OT0_(a1 + 12, v5, a4);
    if (!a2) {
        v6 = reinterpret_cast<void**>(0);
    } else {
        eax7 = _ZNSt6__ndk114__split_bufferINS_6vectorIhNS_9allocatorIhEEEERNS2_IS4_EEE7__allocEv(a1, v5, a4);
        v5 = a2;
        eax8 = _ZNSt6__ndk116allocator_traitsINS_9allocatorINS_6vectorIhNS1_IhEEEEEEE8allocateERS5_j(eax7, v5, a4);
        v6 = eax8;
    }
    *reinterpret_cast<void***>(a1) = v6;
    eax9 = *reinterpret_cast<void***>(a1) + reinterpret_cast<unsigned char>(a3) * 12;
    *reinterpret_cast<void***>(a1 + 8) = eax9;
    *reinterpret_cast<void***>(a1 + 4) = eax9;
    eax10 = *reinterpret_cast<void***>(a1) + reinterpret_cast<unsigned char>(a2) * 12;
    eax12 = _ZNSt6__ndk114__split_bufferINS_6vectorIhNS_9allocatorIhEEEERNS2_IS4_EEE9__end_capEv(a1, v5, a4, v11);
    *reinterpret_cast<void***>(eax12) = eax10;
    goto a1;
}

struct s700 {
    signed char[8] pad8;
    int32_t f8;
};

struct s701 {
    signed char[8] pad8;
    void** f8;
};

void fun_49ac() {
    int32_t ecx1;
    struct s700* ebp2;
    void** edx3;
    struct s701* ebp4;
    int32_t ebp5;
    int32_t ebp6;
    int32_t ebp7;
    void** v8;
    void** v9;
    void** v10;
    void** v11;
    void** v12;
    void** v13;
    void** v14;
    void** v15;
    void** v16;
    void** v17;
    unsigned char al18;
    void** v19;
    int32_t ebp20;
    void** v21;
    void** v22;
    void** eax23;
    int32_t ebp24;
    void** v25;
    int32_t ebp26;
    int32_t eax27;
    int32_t ebp28;
    int32_t v29;

    ecx1 = ebp2->f8;
    edx3 = ebp4->f8;
    *reinterpret_cast<int32_t*>(ebp5 - 8) = reinterpret_cast<int32_t>(__return_address()) + reinterpret_cast<int32_t>("TJvKd31RN3YgCxCbhBEe+bGnufcpmN6ZvyeTsNEP6zX6wN59epCF/vPRchlwMFeXo8Eg96JmgG19x1seTnyPhH99oQYn/ebSP47ELOiwQg62Mq/mPfUXE3YgCehc1m9rHn9AZ6bgEkTYAe5mgPehx1htfnyPHk3+89FyGXAwVVuxRj3c4LQyDQzHCKyy5juZCRzNO/7H7N+JqIqvch9+M6OLmybzqRn+89FyGXAwVzOrq1+rnjJBOOCPSq31tW50PjEC5jissRzPmQrO5oGmN5oWzp8vPxlAmke8hED3NJuEER6rPZmWb+bDpGVfWjmh5s61ncPno/0r9Qlx/vPQVhlwMjPOfLcAU7Agf32jhif95Qb0QTuMsuY4rRqUWQKmS6zYU7AjAf7z0XIZcDBW4ibgc3g8nIn5ryf2OiZ49UemiLSLe20oEGem4yC1e73k0gbifXqQhw+lHPAHYwIqDsAgf+g4P7nXvlQU21HtzLKhDF27gX2cmbiphVEkXJxKcwSWOzVcFIt4PJy8Xi0NR6aIt+iynCpu0cP6vbByzL6C0hWTo/H7GWupFlWTPRA5kpdlfcdYbArOo4iw+2LgjO5V6FyyoQ6A57zQnIt4PC+vmvTVpWNLCnLjSXvqjaz5eMRJPdl/qj1vDhlVv/SuvH0eDRZAA1UkXJ1T+O/n0Dyci3r0L6+bSNWlY0sKcuGte+qPxoxGjhgY1yh2gK95GTTA4/0jkD8C7N1KWk3EVUpCqJJwULlPAwC+BAFDFVXW+Q0TodWqnOreebFWqDW4Q5+XQX55xu0oTN+Ci/aIgWdukMg==7ai6NPV2bXGQr0Np5ImWzUjl6PCgPeiZ1htfcSPHk58UeVSEMzf9Yw3NIDiE3kwVE57U+9AmnUmFHEK6IvfKH2TS7CCq/VbM/O9R5SdZDW14bohAkY4uN9Wm/Col7ZLu07gKfimHuWgt8iNKBQUFBQ==XP5rChOX5IfmEBCR8F2EpKo+9bwFBQUFBQUFBQUFBQU=7ai6NPV2bXG");
    *reinterpret_cast<int32_t*>(ebp6 - 12) = ecx1;
    *reinterpret_cast<void***>(ebp7 - 16) = edx3;
    al18 = _ZNKSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9__is_longEv(edx3, v8, v9, v10, v11, v12, v13, v14, v15, v16, v17);
    if (al18 & 1) {
        v19 = *reinterpret_cast<void***>(ebp20 - 16);
        eax23 = _ZNKSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE18__get_long_pointerEv(v19, v21, v22);
        *reinterpret_cast<void***>(ebp24 - 20) = eax23;
    } else {
        v25 = *reinterpret_cast<void***>(ebp26 - 16);
        eax27 = _ZNKSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE19__get_short_pointerEv(v25);
        *reinterpret_cast<int32_t*>(ebp28 - 20) = eax27;
    }
    goto v29;
}

/* std::__ndk1::__compressed_pair<unsigned char*, std::__ndk1::allocator<unsigned char> >::__compressed_pair<decltype(nullptr), true>(decltype(nullptr)&&) */
void _ZNSt6__ndk117__compressed_pairIPhNS_9allocatorIhEEEC2IDnLb1EEEOT_(void** a1, void** a2) {
    void** eax3;

    fun_714e();
    eax3 = _ZNSt6__ndk17forwardIDnEEOT_RNS_16remove_referenceIS1_E4typeE(a2);
    _ZNSt6__ndk122__compressed_pair_elemIPhLi0ELb0EEC2IDnvEEOT_(a1, eax3);
    _ZNSt6__ndk122__compressed_pair_elemINS_9allocatorIhEELi1ELb1EEC2Ev(a1, eax3);
    goto a1;
}

struct s702 {
    signed char[16] pad16;
    int32_t f16;
};

struct s703 {
    signed char[12] pad12;
    int32_t f12;
};

struct s704 {
    signed char[8] pad8;
    int32_t f8;
};

struct s705 {
    signed char[12] pad12;
    int32_t f12;
};

struct s706 {
    signed char[8] pad8;
    void** f8;
};

struct s707 {
    signed char[12] pad12;
    uint32_t f12;
};

void fun_767e() {
    int32_t ecx1;
    struct s702* ebp2;
    int32_t edx3;
    struct s703* ebp4;
    int32_t esi5;
    struct s704* ebp6;
    int32_t ebx7;
    struct s705* ebp8;
    void** v9;
    struct s706* ebp10;
    int32_t ebp11;
    int32_t ebp12;
    int32_t ebp13;
    int32_t ebp14;
    int32_t ebp15;
    void** v16;
    void** v17;
    void** v18;
    int32_t v19;
    void** eax20;
    int32_t ebp21;
    uint32_t v22;
    int32_t ebp23;
    void** v24;
    void** v25;
    void** v26;
    int32_t v27;
    void** v28;
    int32_t v29;
    uint32_t v30;
    struct s707* ebp31;
    void** v32;
    void** v33;
    int32_t v34;

    ecx1 = ebp2->f16;
    edx3 = ebp4->f12;
    esi5 = ebp6->f8;
    ebx7 = ebp8->f12;
    v9 = ebp10->f8;
    *reinterpret_cast<int32_t*>(ebp11 - 16) = ebx7;
    *reinterpret_cast<int32_t*>(ebp12 - 20) = reinterpret_cast<int32_t>(__return_address()) + 0xb8a6;
    *reinterpret_cast<int32_t*>(ebp13 - 24) = ecx1;
    *reinterpret_cast<int32_t*>(ebp14 - 28) = edx3;
    *reinterpret_cast<int32_t*>(ebp15 - 32) = esi5;
    eax20 = _ZNKSt6__ndk19allocatorIhE8max_sizeEv(v9, v16, v17, v18, v19);
    if (reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(ebp21 - 16)) > reinterpret_cast<unsigned char>(eax20)) {
        v22 = *reinterpret_cast<int32_t*>(ebp23 - 20) + 0xffffb131;
        _ZNSt6__ndk120__throw_length_errorEPKc(v22, v24, v25, v26, v27, v28, v29);
    }
    v30 = ebp31->f12;
    _ZNSt6__ndk117__libcpp_allocateEjj(v30, 1, v32, v33);
    goto v34;
}

struct s708 {
    signed char[8] pad8;
    int32_t f8;
};

struct s709 {
    signed char[8] pad8;
    void** f8;
};

void fun_774c() {
    int32_t ecx1;
    struct s708* ebp2;
    void** v3;
    struct s709* ebp4;
    int32_t ebp5;
    int32_t v6;

    ecx1 = ebp2->f8;
    v3 = ebp4->f8;
    *reinterpret_cast<int32_t*>(ebp5 - 8) = ecx1;
    _ZNSt6__ndk122__compressed_pair_elemIPhLi0ELb0EE5__getEv(v3);
    goto v6;
}

struct s710 {
    signed char[8] pad8;
    int32_t f8;
};

struct s711 {
    signed char[8] pad8;
    void*** f8;
};

void fun_77bc() {
    int32_t ecx1;
    struct s710* ebp2;
    void** v3;
    struct s711* ebp4;
    int32_t ebp5;
    void** v6;
    void** v7;
    void** v8;
    void** v9;
    void** v10;
    void** v11;
    int32_t v12;

    ecx1 = ebp2->f8;
    v3 = *ebp4->f8;
    *reinterpret_cast<int32_t*>(ebp5 - 8) = ecx1;
    _ZNSt6__ndk116__to_raw_pointerIhEEPT_S2_(v3, v6, v7, v8, v9, v10, v11);
    goto v12;
}

struct s712 {
    signed char[8] pad8;
    int32_t f8;
};

struct s713 {
    signed char[8] pad8;
    void** f8;
};

void fun_77ec() {
    int32_t ecx1;
    struct s712* ebp2;
    void** v3;
    struct s713* ebp4;
    int32_t ebp5;
    int32_t v6;

    ecx1 = ebp2->f8;
    v3 = ebp4->f8;
    *reinterpret_cast<int32_t*>(ebp5 - 8) = ecx1;
    _ZNKSt6__ndk113__vector_baseIhNS_9allocatorIhEEE8capacityEv(v3);
    goto v6;
}

struct s714 {
    signed char[12] pad12;
    int32_t f12;
};

struct s715 {
    signed char[8] pad8;
    int32_t f8;
};

struct s716 {
    signed char[12] pad12;
    void** f12;
};

struct s717 {
    signed char[8] pad8;
    void** f8;
};

/* unsigned int const& std::__ndk1::min<unsigned int, std::__ndk1::__less<unsigned int, unsigned int> >(unsigned int const&, unsigned int const&, std::__ndk1::__less<unsigned int, unsigned int>) */
void _ZNSt6__ndk13minIjNS_6__lessIjjEEEERKT_S5_S5_T0_(void** a1, void** a2);

void fun_749e() {
    int32_t ecx1;
    struct s714* ebp2;
    int32_t edx3;
    struct s715* ebp4;
    void** edi5;
    struct s716* ebp6;
    void** v7;
    struct s717* ebp8;
    int32_t ebp9;
    int32_t ebp10;
    int32_t v11;

    ecx1 = ebp2->f12;
    edx3 = ebp4->f8;
    edi5 = ebp6->f12;
    v7 = ebp8->f8;
    *reinterpret_cast<int32_t*>(ebp9 - 20) = ecx1;
    *reinterpret_cast<int32_t*>(ebp10 - 24) = edx3;
    _ZNSt6__ndk13minIjNS_6__lessIjjEEEERKT_S5_S5_T0_(v7, edi5);
    goto v11;
}

struct s718 {
    signed char[4] pad4;
    int32_t f4;
};

struct s719 {
    signed char[8] pad8;
    struct s718* f8;
};

struct s720 {
    signed char[12] pad12;
    int32_t f12;
};

struct s721 {
    signed char[4] pad4;
    int32_t f4;
};

struct s722 {
    signed char[12] pad12;
    int32_t f12;
};

void fun_7a1e() {
    struct s718* esi1;
    struct s719* ebp2;
    int32_t ebp3;
    int32_t ebp4;
    int32_t ebp5;
    struct s720* ebp6;
    int32_t ebp7;
    void** ecx8;
    int32_t ebp9;
    void** v10;
    void** eax11;
    void** ecx12;
    int32_t ebp13;
    int32_t ebp14;
    int32_t ebp15;
    void** v16;
    void** v17;
    void** v18;
    void** v19;
    void** v20;
    void** eax21;
    void** v22;
    int32_t ebp23;
    int32_t ebp24;
    struct s722* ebp25;
    int32_t v26;

    esi1 = ebp2->f8;
    *reinterpret_cast<int32_t*>(ebp3 - 16) = esi1->f4;
    *reinterpret_cast<int32_t*>(ebp4 - 20) = reinterpret_cast<int32_t>(__return_address()) + 0xb506;
    *reinterpret_cast<struct s718**>(ebp5 - 24) = esi1;
    while (ebp6->f12 != *reinterpret_cast<int32_t*>(ebp7 - 16)) {
        ecx8 = *reinterpret_cast<void***>(ebp9 - 24);
        eax11 = _ZNSt6__ndk113__vector_baseIhNS_9allocatorIhEEE7__allocEv(ecx8, ecx8, v10);
        ecx12 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(*reinterpret_cast<void**>(ebp13 - 16)) - 1);
        *reinterpret_cast<void***>(ebp14 - 16) = ecx12;
        *reinterpret_cast<void***>(ebp15 - 28) = eax11;
        eax21 = _ZNSt6__ndk116__to_raw_pointerIhEEPT_S2_(ecx12, v10, v16, v17, v18, v19, v20);
        v10 = eax21;
        v22 = *reinterpret_cast<void***>(ebp23 - 28);
        _ZNSt6__ndk116allocator_traitsINS_9allocatorIhEEE7destroyIhEEvRS2_PT_(v22, v10);
    }
    (*reinterpret_cast<struct s721**>(ebp24 - 24))->f4 = ebp25->f12;
    goto v26;
}

struct s723 {
    signed char[8] pad8;
    int32_t f8;
};

struct s725 {
    signed char[8] pad8;
    void** f8;
};

struct s724 {
    signed char[8] pad8;
    struct s725* f8;
};

void fun_787c() {
    int32_t ecx1;
    struct s723* ebp2;
    void** v3;
    struct s724* ebp4;
    int32_t ebp5;
    int32_t v6;

    ecx1 = ebp2->f8;
    v3 = reinterpret_cast<void**>(&ebp4->f8->f8);
    *reinterpret_cast<int32_t*>(ebp5 - 8) = ecx1;
    _ZNKSt6__ndk117__compressed_pairIPhNS_9allocatorIhEEE5firstEv(v3);
    goto v6;
}

struct s726 {
    signed char[16] pad16;
    int32_t f16;
};

struct s727 {
    signed char[12] pad12;
    int32_t f12;
};

struct s728 {
    signed char[8] pad8;
    int32_t f8;
};

struct s729 {
    signed char[12] pad12;
    void** f12;
};

struct s730 {
    signed char[16] pad16;
    void** f16;
};

void fun_7b4e() {
    int32_t ecx1;
    struct s726* ebp2;
    int32_t edx3;
    struct s727* ebp4;
    int32_t esi5;
    struct s728* ebp6;
    void** edi7;
    struct s729* ebp8;
    void** ebx9;
    struct s730* ebp10;
    int32_t ebp11;
    int32_t ebp12;
    int32_t ebp13;
    int32_t ebp14;
    int32_t v15;

    ecx1 = ebp2->f16;
    edx3 = ebp4->f12;
    esi5 = ebp6->f8;
    edi7 = ebp8->f12;
    ebx9 = ebp10->f16;
    *reinterpret_cast<int32_t*>(ebp11 - 16) = reinterpret_cast<int32_t>(__return_address()) + 0xb3d6;
    *reinterpret_cast<int32_t*>(ebp12 - 20) = ecx1;
    *reinterpret_cast<int32_t*>(ebp13 - 24) = edx3;
    *reinterpret_cast<int32_t*>(ebp14 - 28) = esi5;
    _ZNSt6__ndk119__libcpp_deallocateEPvjj(edi7, ebx9, 1);
    goto v15;
}

/* decltype(nullptr)&& std::__ndk1::forward<decltype(nullptr)>(std::__ndk1::remove_reference<decltype(nullptr)>::type&) */
void** _ZNSt6__ndk17forwardIDnEEOT_RNS_16remove_referenceIS1_E4typeE(void** a1) {
    return a1;
}

void fun_71de();

/* std::__ndk1::__compressed_pair_elem<unsigned char*, 0, false>::__compressed_pair_elem<decltype(nullptr), void>(decltype(nullptr)&&) */
void _ZNSt6__ndk122__compressed_pair_elemIPhLi0ELb0EEC2IDnvEEOT_(void** a1, void** a2) {
    fun_71de();
    _ZNSt6__ndk17forwardIDnEEOT_RNS_16remove_referenceIS1_E4typeE(a2);
    *reinterpret_cast<void***>(a1) = reinterpret_cast<void**>(0);
    goto a1;
}

void fun_722c();

/* std::__ndk1::allocator<unsigned char>::allocator() */
void** _ZNSt6__ndk19allocatorIhEC2Ev(void** a1);

/* std::__ndk1::__compressed_pair_elem<std::__ndk1::allocator<unsigned char>, 1, true>::__compressed_pair_elem() */
void _ZNSt6__ndk122__compressed_pair_elemINS_9allocatorIhEELi1ELb1EEC2Ev(void** a1, void** a2) {
    fun_722c();
    _ZNSt6__ndk19allocatorIhEC2Ev(a1);
    goto a1;
}

/* std::__ndk1::allocator<unsigned char>::max_size() const */
void** _ZNKSt6__ndk19allocatorIhE8max_sizeEv(void** a1, void** a2, void** a3, void** a4, int32_t a5) {
    return 0xffffffff;
}

struct s731 {
    signed char[12] pad12;
    int32_t f12;
};

struct s732 {
    signed char[8] pad8;
    int32_t f8;
};

struct s733 {
    signed char[12] pad12;
    void** f12;
};

struct s734 {
    signed char[8] pad8;
    void** f8;
};

void fun_7afe() {
    int32_t ecx1;
    struct s731* ebp2;
    int32_t edx3;
    struct s732* ebp4;
    void** edi5;
    struct s733* ebp6;
    void** v7;
    struct s734* ebp8;
    int32_t ebp9;
    int32_t ebp10;
    int32_t v11;

    ecx1 = ebp2->f12;
    edx3 = ebp4->f8;
    edi5 = ebp6->f12;
    v7 = ebp8->f8;
    *reinterpret_cast<int32_t*>(ebp9 - 20) = ecx1;
    *reinterpret_cast<int32_t*>(ebp10 - 24) = edx3;
    _ZNSt6__ndk19allocatorIhE7destroyEPh(v7, edi5);
    goto v11;
}

struct s735 {
    signed char[4] pad4;
    int32_t f4;
};

struct s736 {
    signed char[8] pad8;
    struct s735* f8;
};

struct s737 {
    signed char[12] pad12;
    int32_t f12;
};

struct s738 {
    signed char[4] pad4;
    int32_t f4;
};

struct s739 {
    signed char[12] pad12;
    int32_t f12;
};

void fun_81ee() {
    struct s735* esi1;
    struct s736* ebp2;
    int32_t ebp3;
    int32_t ebp4;
    int32_t ebp5;
    struct s737* ebp6;
    int32_t ebp7;
    void** ecx8;
    int32_t ebp9;
    void** v10;
    void** v11;
    void** eax12;
    void** ecx13;
    int32_t ebp14;
    int32_t ebp15;
    int32_t ebp16;
    void** v17;
    void** v18;
    void** v19;
    void** eax20;
    void** v21;
    int32_t ebp22;
    int32_t ebp23;
    struct s739* ebp24;
    int32_t v25;

    esi1 = ebp2->f8;
    *reinterpret_cast<int32_t*>(ebp3 - 16) = esi1->f4;
    *reinterpret_cast<int32_t*>(ebp4 - 20) = reinterpret_cast<int32_t>(__return_address()) + 0xad36;
    *reinterpret_cast<struct s735**>(ebp5 - 24) = esi1;
    while (ebp6->f12 != *reinterpret_cast<int32_t*>(ebp7 - 16)) {
        ecx8 = *reinterpret_cast<void***>(ebp9 - 24);
        eax12 = _ZNSt6__ndk113__vector_baseINS_6vectorIhNS_9allocatorIhEEEENS2_IS4_EEE7__allocEv(ecx8, ecx8, v10, v11);
        ecx13 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(*reinterpret_cast<void**>(ebp14 - 16)) + 0xfffffff4);
        *reinterpret_cast<void***>(ebp15 - 16) = ecx13;
        *reinterpret_cast<void***>(ebp16 - 28) = eax12;
        eax20 = _ZNSt6__ndk116__to_raw_pointerINS_6vectorIhNS_9allocatorIhEEEEEEPT_S6_(ecx13, v10, v17, v18, v19);
        v10 = eax20;
        v21 = *reinterpret_cast<void***>(ebp22 - 28);
        _ZNSt6__ndk116allocator_traitsINS_9allocatorINS_6vectorIhNS1_IhEEEEEEE7destroyIS4_EEvRS5_PT_(v21, v10);
    }
    (*reinterpret_cast<struct s738**>(ebp23 - 24))->f4 = ebp24->f12;
    goto v25;
}

struct s740 {
    signed char[8] pad8;
    int32_t f8;
};

struct s742 {
    signed char[8] pad8;
    void** f8;
};

struct s741 {
    signed char[8] pad8;
    struct s742* f8;
};

void fun_80ac() {
    int32_t ecx1;
    struct s740* ebp2;
    void** v3;
    struct s741* ebp4;
    int32_t ebp5;
    int32_t v6;

    ecx1 = ebp2->f8;
    v3 = reinterpret_cast<void**>(&ebp4->f8->f8);
    *reinterpret_cast<int32_t*>(ebp5 - 8) = ecx1;
    _ZNKSt6__ndk117__compressed_pairIPNS_6vectorIhNS_9allocatorIhEEEENS2_IS4_EEE5firstEv(v3);
    goto v6;
}

struct s743 {
    signed char[16] pad16;
    int32_t f16;
};

struct s744 {
    signed char[12] pad12;
    int32_t f12;
};

struct s745 {
    signed char[8] pad8;
    int32_t f8;
};

struct s746 {
    signed char[12] pad12;
    void** f12;
};

struct s747 {
    signed char[16] pad16;
    int32_t f16;
};

void fun_834e() {
    int32_t ecx1;
    struct s743* ebp2;
    int32_t edx3;
    struct s744* ebp4;
    int32_t esi5;
    struct s745* ebp6;
    void** edi7;
    struct s746* ebp8;
    void*** ebx9;
    struct s747* ebp10;
    int32_t ebp11;
    int32_t ebp12;
    int32_t ebp13;
    int32_t ebp14;
    int32_t v15;

    ecx1 = ebp2->f16;
    edx3 = ebp4->f12;
    esi5 = ebp6->f8;
    edi7 = ebp8->f12;
    ebx9 = reinterpret_cast<void***>(ebp10->f16 << 2);
    *reinterpret_cast<int32_t*>(ebp11 - 16) = reinterpret_cast<int32_t>(__return_address()) + 0xabd6;
    *reinterpret_cast<int32_t*>(ebp12 - 20) = ecx1;
    *reinterpret_cast<int32_t*>(ebp13 - 24) = edx3;
    *reinterpret_cast<int32_t*>(ebp14 - 28) = esi5;
    _ZNSt6__ndk119__libcpp_deallocateEPvjj(edi7, ebx9 + reinterpret_cast<int32_t>(ebx9) * 2, 4);
    goto v15;
}

struct s748 {
    signed char[12] pad12;
    int32_t f12;
};

struct s749 {
    signed char[8] pad8;
    int32_t f8;
};

struct s750 {
    signed char[12] pad12;
    void** f12;
};

struct s751 {
    signed char[8] pad8;
    void** f8;
};

void fun_82ce() {
    int32_t ecx1;
    struct s748* ebp2;
    int32_t edx3;
    struct s749* ebp4;
    void** edi5;
    struct s750* ebp6;
    void** v7;
    struct s751* ebp8;
    int32_t ebp9;
    int32_t ebp10;
    int32_t v11;

    ecx1 = ebp2->f12;
    edx3 = ebp4->f8;
    edi5 = ebp6->f12;
    v7 = ebp8->f8;
    *reinterpret_cast<int32_t*>(ebp9 - 20) = ecx1;
    *reinterpret_cast<int32_t*>(ebp10 - 24) = edx3;
    _ZNSt6__ndk19allocatorINS_6vectorIhNS0_IhEEEEE7destroyEPS3_(v7, edi5);
    goto v11;
}

struct s752 {
    signed char[12] pad12;
    int32_t f12;
};

struct s753 {
    signed char[8] pad8;
    int32_t f8;
};

struct s754 {
    signed char[12] pad12;
    void** f12;
};

struct s755 {
    signed char[8] pad8;
    void** f8;
};

void fun_850e() {
    int32_t ecx1;
    struct s752* ebp2;
    int32_t edx3;
    struct s753* ebp4;
    void** edi5;
    struct s754* ebp6;
    void** v7;
    struct s755* ebp8;
    int32_t ebp9;
    int32_t ebp10;
    int32_t v11;

    ecx1 = ebp2->f12;
    edx3 = ebp4->f8;
    edi5 = ebp6->f12;
    v7 = ebp8->f8;
    *reinterpret_cast<int32_t*>(ebp9 - 20) = ecx1;
    *reinterpret_cast<int32_t*>(ebp10 - 24) = edx3;
    _ZNSt6__ndk19allocatorIhE9constructIhJEEEvPT_DpOT0_(v7, edi5);
    goto v11;
}

void fun_8c5e();

void _ZNSt6__ndk116allocator_traitsINS_9allocatorIhEEE25__construct_range_forwardIhhhhEENS_9enable_ifIXaaaasr31is_trivially_move_constructibleIT0_EE5valuesr7is_sameIT1_T2_EE5valueooL_ZNS_17integral_constantIbLb1EE5valueEEntsr15__has_constructIS2_PS6_RT_EE5valueEvE4typeERS2_PSC_SH_RSB_(void** a1, void** a2, void** a3, void** a4) {
    void* v5;
    void** v6;

    fun_8c5e();
    v5 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(a3) - reinterpret_cast<unsigned char>(a2));
    if (reinterpret_cast<int32_t>(v5) > reinterpret_cast<int32_t>(0)) {
        v6 = *reinterpret_cast<void***>(a4);
        fun_2010(v6, a2, static_cast<uint32_t>(v5));
        *reinterpret_cast<void***>(a4) = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(v5) + reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(a4)));
    }
    goto a1;
}

struct s756 {
    signed char[8] pad8;
    int32_t f8;
};

struct s757 {
    signed char[8] pad8;
    void** f8;
};

void fun_8ffd() {
    int32_t ecx1;
    struct s756* ebp2;
    void** v3;
    struct s757* ebp4;
    int32_t ebp5;
    int32_t ebp6;
    void** eax7;
    int32_t eax8;
    int32_t ebp9;
    int32_t eax10;
    int32_t ebp11;
    void* ebp12;
    void* ebp13;
    int32_t eax14;
    int32_t ebp15;
    int32_t v16;

    ecx1 = ebp2->f8;
    v3 = ebp4->f8;
    *reinterpret_cast<int32_t*>(ebp5 - 20) = reinterpret_cast<int32_t>(__return_address()) + 0x9f27;
    *reinterpret_cast<int32_t*>(ebp6 - 24) = ecx1;
    eax7 = _ZNKSt6__ndk113__vector_baseINS_6vectorIhNS_9allocatorIhEEEENS2_IS4_EEE7__allocEv(v3);
    eax8 = _ZNSt6__ndk116allocator_traitsINS_9allocatorINS_6vectorIhNS1_IhEEEEEEE8max_sizeERKS5_(eax7);
    *reinterpret_cast<int32_t*>(ebp9 - 12) = eax8;
    eax10 = _ZNSt6__ndk114numeric_limitsIiE3maxEv(eax7);
    *reinterpret_cast<int32_t*>(ebp11 - 16) = eax10;
    eax14 = _ZNSt6__ndk13minIjEERKT_S3_S3_(reinterpret_cast<int32_t>(ebp12) + 0xfffffff4, reinterpret_cast<int32_t>(ebp13) + 0xfffffff0);
    *reinterpret_cast<int32_t*>(ebp15 - 28) = eax14;
    goto v16;
}

void fun_917e();

/* std::__ndk1::__compressed_pair_elem<std::__ndk1::vector<unsigned char, std::__ndk1::allocator<unsigned char> >*, 0, false>::__compressed_pair_elem<decltype(nullptr), void>(decltype(nullptr)&&) */
void _ZNSt6__ndk122__compressed_pair_elemIPNS_6vectorIhNS_9allocatorIhEEEELi0ELb0EEC2IDnvEEOT_(void** a1, void** a2);

/* std::__ndk1::allocator<std::__ndk1::vector<unsigned char, std::__ndk1::allocator<unsigned char> > >& std::__ndk1::forward<std::__ndk1::allocator<std::__ndk1::vector<unsigned char, std::__ndk1::allocator<unsigned char> > >&>(std::__ndk1::remove_reference<std::__ndk1::allocator<std::__ndk1::vector<unsigned char, std::__ndk1::allocator<unsigned char> > >&>::type&) */
void** _ZNSt6__ndk17forwardIRNS_9allocatorINS_6vectorIhNS1_IhEEEEEEEEOT_RNS_16remove_referenceIS7_E4typeE(void** a1, void** a2);

/* std::__ndk1::__compressed_pair_elem<std::__ndk1::allocator<std::__ndk1::vector<unsigned char, std::__ndk1::allocator<unsigned char> > >&, 1, false>::__compressed_pair_elem<std::__ndk1::allocator<std::__ndk1::vector<unsigned char, std::__ndk1::allocator<unsigned char> > >&, void>(std::__ndk1::allocator<std::__ndk1::vector<unsigned char, std::__ndk1::allocator<unsigned char> > >&) */
void _ZNSt6__ndk122__compressed_pair_elemIRNS_9allocatorINS_6vectorIhNS1_IhEEEEEELi1ELb0EEC2IS6_vEEOT_(void*** a1, void** a2);

/* std::__ndk1::__compressed_pair<std::__ndk1::vector<unsigned char, std::__ndk1::allocator<unsigned char> >*, std::__ndk1::allocator<std::__ndk1::vector<unsigned char, std::__ndk1::allocator<unsigned char> > >&>::__compressed_pair<decltype(nullptr), std::__ndk1::allocator<std::__ndk1::vector<unsigned char, std::__ndk1::allocator<unsigned char> > >&>(decltype(nullptr)&&, std::__ndk1::allocator<std::__ndk1::vector<unsigned char, std::__ndk1::allocator<unsigned char> > >&) */
void _ZNSt6__ndk117__compressed_pairIPNS_6vectorIhNS_9allocatorIhEEEERNS2_IS4_EEEC2IDnS7_EEOT_OT0_(void** a1, void** a2, void** a3) {
    void** eax4;
    void** eax5;

    fun_917e();
    eax4 = _ZNSt6__ndk17forwardIDnEEOT_RNS_16remove_referenceIS1_E4typeE(a2);
    _ZNSt6__ndk122__compressed_pair_elemIPNS_6vectorIhNS_9allocatorIhEEEELi0ELb0EEC2IDnvEEOT_(a1, eax4);
    eax5 = _ZNSt6__ndk17forwardIRNS_9allocatorINS_6vectorIhNS1_IhEEEEEEEEOT_RNS_16remove_referenceIS7_E4typeE(a3, eax4);
    _ZNSt6__ndk122__compressed_pair_elemIRNS_9allocatorINS_6vectorIhNS1_IhEEEEEELi1ELb0EEC2IS6_vEEOT_(a1 + 4, eax5);
    goto a1;
}

struct s758 {
    signed char[16] pad16;
    int32_t f16;
};

struct s759 {
    signed char[12] pad12;
    int32_t f12;
};

struct s760 {
    signed char[8] pad8;
    int32_t f8;
};

struct s761 {
    signed char[12] pad12;
    int32_t f12;
};

struct s762 {
    signed char[8] pad8;
    void** f8;
};

struct s763 {
    signed char[12] pad12;
    int32_t f12;
};

void fun_932e() {
    int32_t ecx1;
    struct s758* ebp2;
    int32_t edx3;
    struct s759* ebp4;
    int32_t esi5;
    struct s760* ebp6;
    int32_t ebx7;
    struct s761* ebp8;
    void** v9;
    struct s762* ebp10;
    int32_t ebp11;
    int32_t ebp12;
    int32_t ebp13;
    int32_t ebp14;
    int32_t ebp15;
    void** v16;
    void** v17;
    void** v18;
    int32_t v19;
    void** eax20;
    int32_t ebp21;
    uint32_t v22;
    int32_t ebp23;
    void** v24;
    void** v25;
    void** v26;
    int32_t v27;
    void** v28;
    int32_t v29;
    uint32_t v30;
    struct s763* ebp31;
    void** v32;
    void** v33;
    int32_t v34;

    ecx1 = ebp2->f16;
    edx3 = ebp4->f12;
    esi5 = ebp6->f8;
    ebx7 = ebp8->f12;
    v9 = ebp10->f8;
    *reinterpret_cast<int32_t*>(ebp11 - 16) = ebx7;
    *reinterpret_cast<int32_t*>(ebp12 - 20) = reinterpret_cast<int32_t>(__return_address()) + 0x9bf6;
    *reinterpret_cast<int32_t*>(ebp13 - 24) = ecx1;
    *reinterpret_cast<int32_t*>(ebp14 - 28) = edx3;
    *reinterpret_cast<int32_t*>(ebp15 - 32) = esi5;
    eax20 = _ZNKSt6__ndk19allocatorINS_6vectorIhNS0_IhEEEEE8max_sizeEv(v9, v16, v17, v18, v19);
    if (reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(ebp21 - 16)) > reinterpret_cast<unsigned char>(eax20)) {
        v22 = *reinterpret_cast<int32_t*>(ebp23 - 20) + 0xffffb131;
        _ZNSt6__ndk120__throw_length_errorEPKc(v22, v24, v25, v26, v27, v28, v29);
    }
    v30 = ebp31->f12 * 12;
    _ZNSt6__ndk117__libcpp_allocateEjj(v30, 4, v32, v33);
    goto v34;
}

void fun_93fc();

/* std::__ndk1::__compressed_pair_elem<std::__ndk1::vector<unsigned char, std::__ndk1::allocator<unsigned char> >*, 0, false>::__get() */
void** _ZNSt6__ndk122__compressed_pair_elemIPNS_6vectorIhNS_9allocatorIhEEEELi0ELb0EE5__getEv(void** a1);

/* std::__ndk1::__compressed_pair<std::__ndk1::vector<unsigned char, std::__ndk1::allocator<unsigned char> >*, std::__ndk1::allocator<std::__ndk1::vector<unsigned char, std::__ndk1::allocator<unsigned char> > >&>::first() */
void _ZNSt6__ndk117__compressed_pairIPNS_6vectorIhNS_9allocatorIhEEEERNS2_IS4_EEE5firstEv(void** a1) {
    fun_93fc();
    _ZNSt6__ndk122__compressed_pair_elemIPNS_6vectorIhNS_9allocatorIhEEEELi0ELb0EE5__getEv(a1);
    goto a1;
}

void fun_7e2e();

/* std::__ndk1::vector<std::__ndk1::vector<unsigned char, std::__ndk1::allocator<unsigned char> >, std::__ndk1::allocator<std::__ndk1::vector<unsigned char, std::__ndk1::allocator<unsigned char> > > >::data() const */
int32_t _ZNKSt6__ndk16vectorINS0_IhNS_9allocatorIhEEEENS1_IS3_EEE4dataEv(void** a1);

/* std::__ndk1::vector<std::__ndk1::vector<unsigned char, std::__ndk1::allocator<unsigned char> >, std::__ndk1::allocator<std::__ndk1::vector<unsigned char, std::__ndk1::allocator<unsigned char> > > >::__annotate_contiguous_container(void const*, void const*, void const*, void const*) const */
uint32_t _ZNKSt6__ndk16vectorINS0_IhNS_9allocatorIhEEEENS1_IS3_EEE31__annotate_contiguous_containerEPKvS7_S7_S7_(void** a1, int32_t a2, uint32_t a3, uint32_t a4, uint32_t a5);

/* std::__ndk1::vector<std::__ndk1::vector<unsigned char, std::__ndk1::allocator<unsigned char> >, std::__ndk1::allocator<std::__ndk1::vector<unsigned char, std::__ndk1::allocator<unsigned char> > > >::__annotate_delete() const */
void _ZNKSt6__ndk16vectorINS0_IhNS_9allocatorIhEEEENS1_IS3_EEE17__annotate_deleteEv(void** a1) {
    int32_t eax2;
    int32_t eax3;
    uint32_t eax4;
    int32_t eax5;
    void** v6;
    void** v7;
    void*** v8;
    void** eax9;
    int32_t eax10;
    uint32_t eax11;

    fun_7e2e();
    eax2 = _ZNKSt6__ndk16vectorINS0_IhNS_9allocatorIhEEEENS1_IS3_EEE4dataEv(a1);
    eax3 = _ZNKSt6__ndk16vectorINS0_IhNS_9allocatorIhEEEENS1_IS3_EEE4dataEv(a1);
    eax4 = _ZNKSt6__ndk16vectorINS0_IhNS_9allocatorIhEEEENS1_IS3_EEE8capacityEv(a1);
    eax5 = _ZNKSt6__ndk16vectorINS0_IhNS_9allocatorIhEEEENS1_IS3_EEE4dataEv(a1);
    eax9 = _ZNKSt6__ndk16vectorINS0_IhNS_9allocatorIhEEEENS1_IS3_EEE4sizeEv(a1, v6, v7, v8);
    eax10 = _ZNKSt6__ndk16vectorINS0_IhNS_9allocatorIhEEEENS1_IS3_EEE4dataEv(a1);
    eax11 = _ZNKSt6__ndk16vectorINS0_IhNS_9allocatorIhEEEENS1_IS3_EEE8capacityEv(a1);
    _ZNKSt6__ndk16vectorINS0_IhNS_9allocatorIhEEEENS1_IS3_EEE31__annotate_contiguous_containerEPKvS7_S7_S7_(a1, eax2, eax3 + eax4 * 12, eax5 + reinterpret_cast<unsigned char>(eax9) * 12, eax10 + eax11 * 12);
    goto a1;
}

void fun_942e();

/* void std::__ndk1::allocator_traits<std::__ndk1::allocator<std::__ndk1::vector<unsigned char, std::__ndk1::allocator<unsigned char> > > >::__construct_backward<std::__ndk1::vector<unsigned char, std::__ndk1::allocator<unsigned char> >*>(std::__ndk1::allocator<std::__ndk1::vector<unsigned char, std::__ndk1::allocator<unsigned char> > >&, std::__ndk1::vector<unsigned char, std::__ndk1::allocator<unsigned char> >*, std::__ndk1::vector<unsigned char, std::__ndk1::allocator<unsigned char> >*, std::__ndk1::vector<unsigned char, std::__ndk1::allocator<unsigned char> >*&) */
void _ZNSt6__ndk116allocator_traitsINS_9allocatorINS_6vectorIhNS1_IhEEEEEEE20__construct_backwardIPS4_EEvRS5_T_SA_RSA_(void** a1, void** a2, void** a3, void*** a4) {
    void** v5;
    void** v6;
    void** v7;
    void** v8;
    void** eax9;
    void** ecx10;
    void** eax11;

    fun_942e();
    while (a3 != a2) {
        v5 = *a4 + 0xfffffff4;
        eax9 = _ZNSt6__ndk116__to_raw_pointerINS_6vectorIhNS_9allocatorIhEEEEEEPT_S6_(v5, v6, v7, v8, a1);
        ecx10 = a3 + 0xfffffff4;
        a3 = ecx10;
        v8 = eax9;
        eax11 = _ZNSt6__ndk116move_if_noexceptINS_6vectorIhNS_9allocatorIhEEEEEENS_11conditionalIXaantsr29is_nothrow_move_constructibleIT_EE5valuesr21is_copy_constructibleIS6_EE5valueERKS6_OS6_E4typeERS6_(ecx10, v6, v7);
        v6 = v8;
        v7 = eax11;
        _ZNSt6__ndk116allocator_traitsINS_9allocatorINS_6vectorIhNS1_IhEEEEEEE9constructIS4_JS4_EEEvRS5_PT_DpOT0_(a1, v6, v7);
        *a4 = *a4 + 0xfffffff4;
    }
    goto a1;
}

void fun_856c();

/* std::__ndk1::__compressed_pair<std::__ndk1::vector<unsigned char, std::__ndk1::allocator<unsigned char> >*, std::__ndk1::allocator<std::__ndk1::vector<unsigned char, std::__ndk1::allocator<unsigned char> > > >::first() */
void _ZNSt6__ndk117__compressed_pairIPNS_6vectorIhNS_9allocatorIhEEEENS2_IS4_EEE5firstEv(void** a1);

/* std::__ndk1::__vector_base<std::__ndk1::vector<unsigned char, std::__ndk1::allocator<unsigned char> >, std::__ndk1::allocator<std::__ndk1::vector<unsigned char, std::__ndk1::allocator<unsigned char> > > >::__end_cap() */
void** _ZNSt6__ndk113__vector_baseINS_6vectorIhNS_9allocatorIhEEEENS2_IS4_EEE9__end_capEv(void** a1, void** a2, void** a3, void*** a4) {
    fun_856c();
    _ZNSt6__ndk117__compressed_pairIPNS_6vectorIhNS_9allocatorIhEEEENS2_IS4_EEE5firstEv(a1 + 8);
    goto a1;
}

void fun_952e();

/* std::__ndk1::vector<std::__ndk1::vector<unsigned char, std::__ndk1::allocator<unsigned char> >, std::__ndk1::allocator<std::__ndk1::vector<unsigned char, std::__ndk1::allocator<unsigned char> > > >::__annotate_new(unsigned int) const */
void _ZNKSt6__ndk16vectorINS0_IhNS_9allocatorIhEEEENS1_IS3_EEE14__annotate_newEj(void** a1, void** a2, void** a3, void*** a4) {
    int32_t eax5;
    int32_t eax6;
    uint32_t eax7;
    int32_t eax8;
    uint32_t eax9;
    int32_t eax10;

    fun_952e();
    eax5 = _ZNKSt6__ndk16vectorINS0_IhNS_9allocatorIhEEEENS1_IS3_EEE4dataEv(a1);
    eax6 = _ZNKSt6__ndk16vectorINS0_IhNS_9allocatorIhEEEENS1_IS3_EEE4dataEv(a1);
    eax7 = _ZNKSt6__ndk16vectorINS0_IhNS_9allocatorIhEEEENS1_IS3_EEE8capacityEv(a1);
    eax8 = _ZNKSt6__ndk16vectorINS0_IhNS_9allocatorIhEEEENS1_IS3_EEE4dataEv(a1);
    eax9 = _ZNKSt6__ndk16vectorINS0_IhNS_9allocatorIhEEEENS1_IS3_EEE8capacityEv(a1);
    eax10 = _ZNKSt6__ndk16vectorINS0_IhNS_9allocatorIhEEEENS1_IS3_EEE4dataEv(a1);
    _ZNKSt6__ndk16vectorINS0_IhNS_9allocatorIhEEEENS1_IS3_EEE31__annotate_contiguous_containerEPKvS7_S7_S7_(a1, eax5, eax6 + eax7 * 12, eax8 + eax9 * 12, eax10 + reinterpret_cast<unsigned char>(a2) * 12);
    goto a1;
}

/* std::__ndk1::vector<std::__ndk1::vector<unsigned char, std::__ndk1::allocator<unsigned char> >, std::__ndk1::allocator<std::__ndk1::vector<unsigned char, std::__ndk1::allocator<unsigned char> > > >::__invalidate_all_iterators() */
void** _ZNSt6__ndk16vectorINS0_IhNS_9allocatorIhEEEENS1_IS3_EEE26__invalidate_all_iteratorsEv(void** a1, void** a2, void** a3, void*** a4) {
    return a1;
}

struct s764 {
    signed char[8] pad8;
    int32_t f8;
};

struct s766 {
    signed char[12] pad12;
    void** f12;
};

struct s765 {
    signed char[8] pad8;
    struct s766* f8;
};

void fun_9a0c() {
    int32_t ecx1;
    struct s764* ebp2;
    void** v3;
    struct s765* ebp4;
    int32_t ebp5;
    int32_t v6;

    ecx1 = ebp2->f8;
    v3 = reinterpret_cast<void**>(&ebp4->f8->f12);
    *reinterpret_cast<int32_t*>(ebp5 - 8) = ecx1;
    _ZNKSt6__ndk117__compressed_pairIPNS_6vectorIhNS_9allocatorIhEEEERNS2_IS4_EEE5firstEv(v3);
    goto v6;
}

struct s767 {
    signed char[12] pad12;
    int32_t f12;
};

struct s768 {
    signed char[8] pad8;
    int32_t f8;
};

struct s769 {
    signed char[12] pad12;
    void** f12;
};

struct s770 {
    signed char[8] pad8;
    void** f8;
};

/* std::__ndk1::__split_buffer<std::__ndk1::vector<unsigned char, std::__ndk1::allocator<unsigned char> >, std::__ndk1::allocator<std::__ndk1::vector<unsigned char, std::__ndk1::allocator<unsigned char> > >&>::__destruct_at_end(std::__ndk1::vector<unsigned char, std::__ndk1::allocator<unsigned char> >*, std::__ndk1::integral_constant<bool, false>) */
void _ZNSt6__ndk114__split_bufferINS_6vectorIhNS_9allocatorIhEEEERNS2_IS4_EEE17__destruct_at_endEPS4_NS_17integral_constantIbLb0EEE(void** a1, void** a2);

void fun_993e() {
    int32_t ecx1;
    struct s767* ebp2;
    int32_t edx3;
    struct s768* ebp4;
    void** edi5;
    struct s769* ebp6;
    void** v7;
    struct s770* ebp8;
    int32_t ebp9;
    int32_t ebp10;
    int32_t v11;

    ecx1 = ebp2->f12;
    edx3 = ebp4->f8;
    edi5 = ebp6->f12;
    v7 = ebp8->f8;
    *reinterpret_cast<int32_t*>(ebp9 - 20) = ecx1;
    *reinterpret_cast<int32_t*>(ebp10 - 24) = edx3;
    _ZNSt6__ndk114__split_bufferINS_6vectorIhNS_9allocatorIhEEEERNS2_IS4_EEE17__destruct_at_endEPS4_NS_17integral_constantIbLb0EEE(v7, edi5);
    goto v11;
}

void fun_3929() {
    void** v1;
    void** v2;
    int32_t v3;

    fun_21d0();
    fun_2290();
    fun_395e();
    _ZNSt6__ndk117_DeallocateCaller27__do_deallocate_handle_sizeEPvj(v1, v2);
    goto v3;
}

struct s771 {
    signed char[16] pad16;
    int32_t f16;
};

struct s772 {
    signed char[12] pad12;
    int32_t f12;
};

struct s773 {
    signed char[8] pad8;
    int32_t f8;
};

struct s774 {
    signed char[8] pad8;
    int32_t f8;
};

struct s775 {
    signed char[12] pad12;
    int32_t f12;
};

struct s776 {
    signed char[16] pad16;
    void** f16;
};

void fun_96ae() {
    int32_t ecx1;
    struct s771* ebp2;
    int32_t edx3;
    struct s772* ebp4;
    int32_t esi5;
    struct s773* ebp6;
    int32_t edi7;
    struct s774* ebp8;
    int32_t ebx9;
    struct s775* ebp10;
    int32_t ebp11;
    void** v12;
    struct s776* ebp13;
    int32_t ebp14;
    int32_t ebp15;
    int32_t ebp16;
    int32_t ebp17;
    int32_t ebp18;
    void** eax19;
    void** v20;
    int32_t ebp21;
    void** v22;
    int32_t ebp23;
    int32_t v24;

    ecx1 = ebp2->f16;
    edx3 = ebp4->f12;
    esi5 = ebp6->f8;
    edi7 = ebp8->f8;
    ebx9 = ebp10->f12;
    *reinterpret_cast<int32_t*>(ebp11 - 20) = reinterpret_cast<int32_t>(__return_address()) + 0x9876;
    v12 = ebp13->f16;
    *reinterpret_cast<int32_t*>(ebp14 - 24) = ebx9;
    *reinterpret_cast<int32_t*>(ebp15 - 28) = ecx1;
    *reinterpret_cast<int32_t*>(ebp16 - 32) = edx3;
    *reinterpret_cast<int32_t*>(ebp17 - 36) = esi5;
    *reinterpret_cast<int32_t*>(ebp18 - 40) = edi7;
    eax19 = _ZNSt6__ndk17forwardINS_6vectorIhNS_9allocatorIhEEEEEEOT_RNS_16remove_referenceIS5_E4typeE(v12);
    v20 = *reinterpret_cast<void***>(ebp21 - 40);
    v22 = *reinterpret_cast<void***>(ebp23 - 24);
    _ZNSt6__ndk19allocatorINS_6vectorIhNS0_IhEEEEE9constructIS3_JS3_EEEvPT_DpOT0_(v20, v22, eax19);
    goto v24;
}

/* std::__ndk1::remove_reference<std::__ndk1::vector<unsigned char, std::__ndk1::allocator<unsigned char> >*&>::type&& std::__ndk1::move<std::__ndk1::vector<unsigned char, std::__ndk1::allocator<unsigned char> >*&>(std::__ndk1::vector<unsigned char, std::__ndk1::allocator<unsigned char> >*&) */
void** _ZNSt6__ndk14moveIRPNS_6vectorIhNS_9allocatorIhEEEEEEONS_16remove_referenceIT_E4typeEOS8_(void** a1) {
    return a1;
}

struct s777 {
    signed char[8] pad8;
    int32_t f8;
};

struct s778 {
    signed char[8] pad8;
    void** f8;
};

void fun_a41d() {
    int32_t ecx1;
    struct s777* ebp2;
    void** edx3;
    struct s778* ebp4;
    int32_t ebp5;
    int32_t ebp6;
    int32_t ebp7;
    void** v8;
    int32_t ebp9;
    int32_t v10;

    ecx1 = ebp2->f8;
    edx3 = ebp4->f8;
    *reinterpret_cast<int32_t*>(ebp5 - 12) = reinterpret_cast<int32_t>(__return_address()) + 0x8b07;
    *reinterpret_cast<int32_t*>(ebp6 - 16) = ecx1;
    *reinterpret_cast<void***>(ebp7 - 20) = edx3;
    _ZNSt6__ndk117__compressed_pairINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE5__repES5_EC2ILb1EvEEv(edx3);
    v8 = *reinterpret_cast<void***>(ebp9 - 20);
    _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6__zeroEv(v8);
    goto v10;
}

struct s779 {
    signed char[20] pad20;
    uint32_t f20;
};

struct s780 {
    signed char[12] pad12;
    uint32_t f12;
};

struct s781 {
    signed char[12] pad12;
    void* f12;
};

struct s782 {
    signed char[20] pad20;
    uint32_t f20;
};

struct s783 {
    signed char[8] pad8;
    void* f8;
};

struct s784 {
    signed char[20] pad20;
    void* f20;
};

struct s785 {
    signed char[16] pad16;
    signed char f16;
};

struct s786 {
    signed char[8] pad8;
    int32_t f8;
};

void fun_a59e() {
    int1_t cf1;
    struct s779* ebp2;
    struct s780* ebp3;
    int32_t ebp4;
    void* ecx5;
    struct s781* ebp6;
    struct s782* ebp7;
    void* v8;
    struct s783* ebp9;
    struct s784* ebp10;
    struct s785* ebp11;
    int32_t eax12;
    int32_t ebp13;
    int32_t ebp14;
    int32_t ebp15;
    int32_t ebp16;
    struct s786* ebp17;
    int32_t ebp18;
    int32_t ebp19;
    int32_t v20;

    cf1 = ebp2->f20 < ebp3->f12;
    *reinterpret_cast<int32_t*>(ebp4 - 24) = reinterpret_cast<int32_t>(__return_address()) + 0x8986;
    if (cf1) {
        ecx5 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(ebp6->f12) - ebp7->f20);
        v8 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(ebp9->f8) + reinterpret_cast<uint32_t>(ebp10->f20));
        eax12 = _ZNSt6__ndk111char_traitsIcE4findEPKcjRS2_(v8, ecx5, &ebp11->f16);
        *reinterpret_cast<int32_t*>(ebp13 - 20) = eax12;
        if (*reinterpret_cast<int32_t*>(ebp14 - 20)) {
            *reinterpret_cast<int32_t*>(ebp15 - 16) = *reinterpret_cast<int32_t*>(ebp16 - 20) - ebp17->f8;
        } else {
            *reinterpret_cast<int32_t*>(ebp18 - 16) = -1;
        }
    } else {
        *reinterpret_cast<int32_t*>(ebp19 - 16) = -1;
    }
    goto v20;
}

struct s787 {
    signed char[8] pad8;
    int32_t f8;
};

struct s788 {
    signed char[8] pad8;
    void** f8;
};

void fun_a53c() {
    int32_t ecx1;
    struct s787* ebp2;
    void** v3;
    struct s788* ebp4;
    int32_t ebp5;
    void** v6;
    void** v7;
    void** v8;
    void** v9;
    void** v10;
    struct s4* v11;
    struct s3* eax12;
    int32_t ebp13;
    int32_t ebp14;
    int32_t ebp15;
    int32_t ebp16;
    int32_t ebp17;
    int32_t ebp18;
    int32_t ebp19;
    int32_t v20;

    ecx1 = ebp2->f8;
    v3 = ebp4->f8;
    *reinterpret_cast<int32_t*>(ebp5 - 16) = ecx1;
    eax12 = _ZNSt6__ndk117__compressed_pairINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE5__repES5_E5firstEv(v3, v6, v7, v8, v9, v10, v11);
    *reinterpret_cast<struct s3**>(ebp13 - 8) = eax12;
    *reinterpret_cast<int32_t*>(ebp14 - 12) = 0;
    while (*reinterpret_cast<uint32_t*>(ebp15 - 12) < 3) {
        (*reinterpret_cast<int32_t**>(ebp16 - 8))[*reinterpret_cast<int32_t*>(ebp17 - 12)] = 0;
        *reinterpret_cast<int32_t*>(ebp18 - 12) = *reinterpret_cast<int32_t*>(ebp19 - 12) + 1;
    }
    goto v20;
}

struct s789 {
    signed char[156] pad156;
    int32_t f156;
};

void fun_2250(int32_t a1, int32_t a2, int32_t a3, int32_t a4) {
    struct s789* ebx5;

    goto ebx5->f156;
}

struct s790 {
    signed char[4824] pad4824;
    void** f4824;
};

/* base64_decode(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */
void _Z13base64_decodeRKNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEE(void** a1, void** a2) {
    void* ebp3;
    struct s790* v4;
    void* v5;
    void** v6;
    void** v7;
    void** v8;
    void** v9;
    void** v10;
    void** v11;
    void** eax12;
    void** v13;
    void* v14;
    void** v15;
    void** ecx16;
    void** v17;
    void** v18;
    unsigned char* eax19;
    int1_t zf20;
    unsigned char* eax21;
    uint32_t v22;
    unsigned char al23;
    unsigned char* eax24;
    unsigned char dl25;
    void* eax26;
    void* v27;
    signed char al28;
    void* v29;
    void* v30;
    signed char al31;
    void* v32;

    ebp3 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4);
    fun_a07e();
    v4 = reinterpret_cast<struct s790*>(reinterpret_cast<int32_t>(v5) + 0x8ea6);
    v6 = a1;
    v7 = a2;
    eax12 = _ZNKSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE4sizeEv(a2, v8, v9, v10, v11, v7, a1);
    v13 = eax12;
    v14 = reinterpret_cast<void*>(0);
    v15 = reinterpret_cast<void**>(0);
    _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2Ev(v6);
    while (1) {
        ecx16 = v13;
        v13 = ecx16 + 0xffffffff;
        *reinterpret_cast<unsigned char*>(&v17 + 3) = 0;
        if (ecx16 && (v18 = v15, eax19 = _ZNKSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEixEj(a2, v18, 0, 0), zf20 = static_cast<int32_t>(reinterpret_cast<signed char>(*eax19)) == 61, *reinterpret_cast<unsigned char*>(&v17 + 3) = 0, !zf20)) {
            v18 = v15;
            eax21 = _ZNKSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEixEj(a2, v18, 0, 0);
            v22 = *eax21;
            al23 = _ZL9is_base64h(v22, v18, 0, 0);
            *reinterpret_cast<unsigned char*>(&v17 + 2) = al23;
            *reinterpret_cast<unsigned char*>(&v17 + 3) = *reinterpret_cast<unsigned char*>(&v17 + 2);
        }
        if (!(*reinterpret_cast<unsigned char*>(&v17 + 3) & 1)) 
            break;
        v18 = v15;
        eax24 = _ZNKSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEixEj(a2, v18, 0, 0);
        dl25 = *eax24;
        eax26 = v14;
        v14 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(eax26) + 1);
        *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(ebp3) + reinterpret_cast<int32_t>(eax26) - 32) = dl25;
        ++v15;
        if (reinterpret_cast<int1_t>(v14 == 4)) {
            v27 = reinterpret_cast<void*>(0);
            while (reinterpret_cast<int32_t>(v27) < 4) {
                v18 = reinterpret_cast<void**>(static_cast<int32_t>(*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(ebp3) + reinterpret_cast<int32_t>(v27) - 32)));
                al28 = _ZNKSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE4findEcj(&v4->f4824, v18, 0, 0);
                *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(ebp3) + reinterpret_cast<int32_t>(v27) - 32) = al28;
                v27 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(v27) + 1);
            }
            v29 = reinterpret_cast<void*>(0);
            while (reinterpret_cast<int32_t>(v29) < 3) {
                v18 = reinterpret_cast<void**>(static_cast<int32_t>(*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(ebp3) + reinterpret_cast<int32_t>(v29) - 35)));
                _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEpLEc(v6, v18, 0, 0);
                v29 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(v29) + 1);
            }
            v14 = reinterpret_cast<void*>(0);
        }
    }
    if (v14) {
        v30 = reinterpret_cast<void*>(0);
        while (reinterpret_cast<int32_t>(v30) < reinterpret_cast<int32_t>(v14)) {
            v18 = reinterpret_cast<void**>(static_cast<int32_t>(*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(ebp3) + reinterpret_cast<int32_t>(v30) - 32)));
            al31 = _ZNKSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE4findEcj(&v4->f4824, v18, 0, 0);
            *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(ebp3) + reinterpret_cast<int32_t>(v30) - 32) = al31;
            v30 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(v30) + 1);
        }
        v32 = reinterpret_cast<void*>(0);
        while (reinterpret_cast<int32_t>(v32) < reinterpret_cast<int32_t>(v14) - 1) {
            v18 = reinterpret_cast<void**>(static_cast<int32_t>(*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(ebp3) + reinterpret_cast<int32_t>(v32) - 35)));
            _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEpLEc(v6, v18, 0, 0);
            v32 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(v32) + 1);
        }
    }
    if (!1) {
        _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(v6, v18, 0, 0, v17, v7);
    }
    goto a2;
}

struct s791 {
    signed char[28] pad28;
    int32_t f28;
};

int32_t fun_2050(int32_t a1, void** a2, void** a3) {
    struct s791* ebx4;

    goto ebx4->f28;
}

/* std::__ndk1::vector<unsigned char, std::__ndk1::allocator<unsigned char> >::vector(std::initializer_list<unsigned char>) */
void _ZNSt6__ndk16vectorIhNS_9allocatorIhEEEC2ESt16initializer_listIhE(void** a1, void* a2, int32_t a3) {
    struct s13* v4;
    void** v5;
    void** eax6;
    void** v7;
    void** eax8;
    void** eax9;
    void** eax10;
    void** eax11;

    fun_685e();
    v4 = reinterpret_cast<struct s13*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 + 12);
    _ZNSt6__ndk113__vector_baseIhNS_9allocatorIhEEEC2Ev(a1);
    eax6 = _ZNKSt16initializer_listIhE4sizeEv(v4, v5);
    if (reinterpret_cast<unsigned char>(eax6) > reinterpret_cast<unsigned char>(0)) {
        eax8 = _ZNKSt16initializer_listIhE4sizeEv(v4, v7);
        _ZNSt6__ndk16vectorIhNS_9allocatorIhEEE11__vallocateEj(a1, eax8);
        eax9 = _ZNKSt16initializer_listIhE5beginEv(v4, eax8);
        eax10 = _ZNKSt16initializer_listIhE3endEv(v4, eax8);
        eax11 = _ZNKSt16initializer_listIhE4sizeEv(v4, eax8);
        _ZNSt6__ndk16vectorIhNS_9allocatorIhEEE18__construct_at_endIPKhEENS_9enable_ifIXsr21__is_forward_iteratorIT_EE5valueEvE4typeES8_S8_j(a1, eax9, eax10, eax11);
    }
    goto a1;
}

struct s792 {
    signed char[164] pad164;
    int32_t f164;
};

void fun_2270() {
    struct s792* ebx1;

    goto ebx1->f164;
}

struct s793 {
    signed char[100] pad100;
    int32_t f100;
};

void fun_2170(int32_t a1, void** a2, void** a3) {
    struct s793* ebx4;

    goto ebx4->f100;
}

struct s794 {
    signed char[8] pad8;
    int32_t f8;
};

struct s795 {
    signed char[8] pad8;
    void** f8;
};

void fun_3abd() {
    int32_t ecx1;
    struct s794* ebp2;
    void** edx3;
    struct s795* ebp4;
    int32_t ebp5;
    int32_t ebp6;
    int32_t ebp7;
    void** v8;
    void** v9;
    int32_t ebp10;
    void** v11;
    int32_t v12;

    ecx1 = ebp2->f8;
    edx3 = ebp4->f8;
    *reinterpret_cast<int32_t*>(ebp5 - 12) = reinterpret_cast<int32_t>(__return_address()) + 0xf467;
    *reinterpret_cast<int32_t*>(ebp6 - 16) = ecx1;
    *reinterpret_cast<void***>(ebp7 - 20) = edx3;
    _ZNSt6__ndk122__compressed_pair_elemINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE5__repELi0ELb0EEC2Ev(edx3, v8);
    v9 = *reinterpret_cast<void***>(ebp10 - 20);
    _ZNSt6__ndk122__compressed_pair_elemINS_9allocatorIcEELi1ELb1EEC2Ev(v9, v11);
    goto v12;
}

void fun_4ade();

/* std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::append(char const*, unsigned int) */
void _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcj(void** a1, void** a2, void** a3);

/* std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::append(char const*) */
void _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKc(void** a1, void** a2) {
    void** eax3;

    fun_4ade();
    eax3 = _ZNSt6__ndk111char_traitsIcE6lengthEPKc(a2);
    _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcj(a1, a2, eax3);
    goto a1;
}

struct s796 {
    signed char[16] pad16;
    int32_t f16;
};

struct s797 {
    signed char[12] pad12;
    int32_t f12;
};

struct s798 {
    signed char[8] pad8;
    int32_t f8;
};

struct s799 {
    signed char[12] pad12;
    int32_t f12;
};

struct s800 {
    signed char[8] pad8;
    void** f8;
};

struct s801 {
    signed char[12] pad12;
    uint32_t f12;
};

void fun_42fe() {
    int32_t ecx1;
    struct s796* ebp2;
    int32_t edx3;
    struct s797* ebp4;
    int32_t esi5;
    struct s798* ebp6;
    int32_t ebx7;
    struct s799* ebp8;
    void** v9;
    struct s800* ebp10;
    int32_t ebp11;
    int32_t ebp12;
    int32_t ebp13;
    int32_t ebp14;
    int32_t ebp15;
    void** v16;
    void** v17;
    void** v18;
    int32_t v19;
    void** eax20;
    int32_t ebp21;
    uint32_t v22;
    int32_t ebp23;
    void** v24;
    void** v25;
    void** v26;
    int32_t v27;
    void** v28;
    int32_t v29;
    uint32_t v30;
    struct s801* ebp31;
    void** v32;
    void** v33;
    int32_t v34;

    ecx1 = ebp2->f16;
    edx3 = ebp4->f12;
    esi5 = ebp6->f8;
    ebx7 = ebp8->f12;
    v9 = ebp10->f8;
    *reinterpret_cast<int32_t*>(ebp11 - 16) = ebx7;
    *reinterpret_cast<int32_t*>(ebp12 - 20) = reinterpret_cast<int32_t>(__return_address()) + reinterpret_cast<int32_t>("VXomaA9X3HWG5OfI8dUhBR5f1NC9CxLIIIlI1OMkPyqbb1zRhFg4eB26BkOdmGe/mUPJyLevQvr5hYA/SNl4G7GyeSmb0P67DSwN81+pCGfXjF2/ZxCtLhkIbcA2Cci3g/TEAF0NgyVGGcYiH2QTZ8zQGIvAKp7E3Hkpm/J1TScKKzcvYuVAyRBC+vmvUXGWurye1PTW9kRP3o1V68KeoyarBpT+jN2ofzc7EYFGwN5O9IVI5xeguZBekDHGvRJ+GYA2CG3uhrc2UkXJ1Q55RwFMOXkpD/BoJC6+iPv2cAbOPtpgQOwS0irTalP+FRJFyf0/jv53g8nIua9C+tY0jVpuNLCnKNrXvoxEj5eX+pPdsOGj1sBGNfhIt4PJ+vmvQtpWNI1nLjSwvqja15eMRI+dl/qT1vDho+EFHlUU0L0f+NR+HnQapxVIbcA2NzZuhqO41BRmsy6l9TFL9Qk7duPWtjtW/NDEW7tpLw0X/rmh8Y5CkMtty3Ygbh5NKQhn15HPMPpp3aUcUMXLKiFEnlx8MvfzN4PJyJ2Iop21+EBGA8nIt4iinZ2NEP67M+lJgUsqEMXaRa66cJihyYiw0PvBXXvlavhaBy8vAmdQk4FiHr8MOimGeEmMSxERAV175Wx2SEMkq2plbjoEfr+1llSuJIGiqKfU12IrdMdTlUbS23w9i+1rbc+e4Jq3zapkuvIGAyzBTYhOwJYK9aXE+rnv6QetEturH1J/WtkeVjRhLNSjcV+UTK8buX5DIaFa98EGiIlbmq0CVwxtFqdevGVs1KNxX5RMrzuXugbZnlrGpvXQE2SramV4HBdgDD86XE6OEeajnftV9zEkLYXS0gJ0nzL9Lh5NIFLSAkXJzlZhA9fvnu2otYRDLPIGAftbOrFmRWw8dLllC8ujW5T3fNYIbFyTLoLl33q5Adc2sRlXbn+yN31GFiaRhG9c6HC4PRgDjJQ+fT+OyLeDyfr5r0LaVjSNcKepK8h3s6KGsERujGYZYvr5gsqeLZmTaC0h");
    *reinterpret_cast<int32_t*>(ebp13 - 24) = ecx1;
    *reinterpret_cast<int32_t*>(ebp14 - 28) = edx3;
    *reinterpret_cast<int32_t*>(ebp15 - 32) = esi5;
    eax20 = _ZNKSt6__ndk19allocatorIcE8max_sizeEv(v9, v16, v17, v18, v19);
    if (reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(ebp21 - 16)) > reinterpret_cast<unsigned char>(eax20)) {
        v22 = *reinterpret_cast<int32_t*>(ebp23 - 20) + 0xffffb131;
        _ZNSt6__ndk120__throw_length_errorEPKc(v22, v24, v25, v26, v27, v28, v29);
    }
    v30 = ebp31->f12;
    _ZNSt6__ndk117__libcpp_allocateEjj(v30, 1, v32, v33);
    goto v34;
}

/* char* std::__ndk1::addressof<char>(char&) */
int32_t _ZNSt6__ndk19addressofIcEEPT_RS1_(int32_t a1) {
    return a1;
}

struct s802 {
    signed char[8] pad8;
    int32_t f8;
};

struct s803 {
    signed char[8] pad8;
    void** f8;
};

void fun_21c0(void** a1, int32_t a2, int32_t a3);

void fun_3c9d() {
    int32_t ecx1;
    struct s802* ebp2;
    void** v3;
    struct s803* ebp4;
    int32_t ebp5;
    int32_t ebp6;
    int32_t v7;

    ecx1 = ebp2->f8;
    v3 = ebp4->f8;
    *reinterpret_cast<int32_t*>(ebp5 - 12) = ecx1;
    *reinterpret_cast<int32_t*>(ebp6 - 16) = 0;
    fun_21c0(v3, 0, 12);
    goto v7;
}

struct s804 {
    signed char[40] pad40;
    int32_t f40;
};

void fun_2080(int32_t* a1, uint32_t a2) {
    struct s804* ebx3;

    goto ebx3->f40;
}

void fun_40cc();

/* std::__ndk1::__compressed_pair<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::__rep, std::__ndk1::allocator<char> >::second() const */
void _ZNKSt6__ndk117__compressed_pairINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE5__repES5_E6secondEv(void** a1);

/* std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::__alloc() const */
void** _ZNKSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE7__allocEv(void** a1, void** a2) {
    fun_40cc();
    _ZNKSt6__ndk117__compressed_pairINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE5__repES5_E6secondEv(a1);
    goto a1;
}

/* std::__ndk1::allocator_traits<std::__ndk1::allocator<char> >::max_size(std::__ndk1::allocator<char> const&) */
int32_t _ZNSt6__ndk116allocator_traitsINS_9allocatorIcEEE8max_sizeERKS2_(void** a1, void** a2) {
    fun_409c();
    _ZNSt6__ndk116allocator_traitsINS_9allocatorIcEEE10__max_sizeENS_17integral_constantIbLb1EEERKS2_(a1);
    goto a1;
}

/* std::__ndk1::__less<unsigned int, unsigned int>::operator()(unsigned int const&, unsigned int const&) const */
unsigned char _ZNKSt6__ndk16__lessIjjEclERKjS3_(void* a1, void** a2, void** a3, void** a4, void** a5) {
    uint32_t esi6;
    uint32_t eax7;

    esi6 = static_cast<unsigned char>(reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(a2)) < reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(a3)))) & 1;
    eax7 = esi6;
    return *reinterpret_cast<unsigned char*>(&eax7);
}

/* std::__ndk1::__compressed_pair_elem<std::__ndk1::allocator<char>, 1, true>::__get() */
void** _ZNSt6__ndk122__compressed_pair_elemINS_9allocatorIcEELi1ELb1EE5__getEv(void** a1) {
    return a1;
}

void fun_38de();

/* std::__ndk1::_DeallocateCaller::__do_deallocate_handle_size_align(void*, unsigned int, unsigned int) */
void _ZNSt6__ndk117_DeallocateCaller33__do_deallocate_handle_size_alignEPvjj(void** a1, void** a2, void** a3, void** a4, int32_t a5);

/* std::__ndk1::__libcpp_deallocate(void*, unsigned int, unsigned int) */
void _ZNSt6__ndk119__libcpp_deallocateEPvjj(void** a1, void** a2, int32_t a3) {
    fun_38de();
    _ZNSt6__ndk117_DeallocateCaller33__do_deallocate_handle_size_alignEPvjj(a1, a2, a1, a2, a3);
    goto a1;
}

struct s805 {
    signed char[8] pad8;
    int32_t f8;
};

struct s806 {
    signed char[8] pad8;
    int32_t f8;
};

void fun_4a8c() {
    int32_t ecx1;
    struct s805* ebp2;
    int32_t v3;
    struct s806* ebp4;
    int32_t ebp5;
    int32_t v6;

    ecx1 = ebp2->f8;
    v3 = ebp4->f8;
    *reinterpret_cast<int32_t*>(ebp5 - 8) = ecx1;
    _ZNSt6__ndk19addressofIKcEEPT_RS2_(v3);
    goto v6;
}

struct s807 {
    signed char[8] pad8;
    int32_t f8;
};

struct s808 {
    signed char[8] pad8;
    void** f8;
};

void fun_40fc() {
    int32_t ecx1;
    struct s807* ebp2;
    void** v3;
    struct s808* ebp4;
    int32_t ebp5;
    void** v6;
    void** v7;
    void** v8;
    int32_t v9;
    int32_t v10;

    ecx1 = ebp2->f8;
    v3 = ebp4->f8;
    *reinterpret_cast<int32_t*>(ebp5 - 12) = ecx1;
    _ZNKSt6__ndk19allocatorIcE8max_sizeEv(v3, v6, v7, v8, v9);
    goto v10;
}

/* std::__ndk1::vector<unsigned char, std::__ndk1::allocator<unsigned char> >::vector(unsigned int) */
void _ZNSt6__ndk16vectorIhNS_9allocatorIhEEEC2Ej(void** a1, void** a2) {
    fun_6aee();
    _ZNSt6__ndk113__vector_baseIhNS_9allocatorIhEEEC2Ev(a1);
    if (reinterpret_cast<unsigned char>(a2) > reinterpret_cast<unsigned char>(0)) {
        _ZNSt6__ndk16vectorIhNS_9allocatorIhEEE11__vallocateEj(a1, a2);
        _ZNSt6__ndk16vectorIhNS_9allocatorIhEEE18__construct_at_endEj(a1, a2);
    }
    goto a1;
}

struct s809 {
    signed char[12] pad12;
    int32_t f12;
};

struct s810 {
    signed char[8] pad8;
    int32_t f8;
};

struct s811 {
    signed char[8] pad8;
    void** f8;
};

struct s812 {
    signed char[12] pad12;
    void** f12;
};

struct s813 {
    signed char[4] pad4;
    void** f4;
};

struct s814 {
    signed char[12] pad12;
    void** f12;
};

struct s815 {
    signed char[4] pad4;
    int32_t f4;
};

void fun_6b9e() {
    int32_t ecx1;
    struct s809* ebp2;
    int32_t edx3;
    struct s810* ebp4;
    void** esi5;
    struct s811* ebp6;
    void** edi7;
    int32_t ebp8;
    int32_t ebp9;
    int32_t ebp10;
    int32_t ebp11;
    int32_t ebp12;
    void** v13;
    void** v14;
    void*** v15;
    void** eax16;
    void** ecx17;
    int32_t ebp18;
    void** eax19;
    struct s812* ebp20;
    void** v21;
    int32_t ebp22;
    void** v23;
    int32_t ebp24;
    void* ebp25;
    void** v26;
    int32_t ebp27;
    void** eax28;
    void** v29;
    int32_t ebp30;
    int32_t ebp31;
    void** v32;
    void** v33;
    void** eax34;
    void** ecx35;
    struct s814* ebp36;
    void** v37;
    int32_t ebp38;
    void** v39;
    void* ebp40;
    int32_t ebp41;
    int32_t v42;

    ecx1 = ebp2->f12;
    edx3 = ebp4->f8;
    esi5 = ebp6->f8;
    edi7 = *reinterpret_cast<void***>(esi5 + 4);
    *reinterpret_cast<int32_t*>(ebp8 - 20) = reinterpret_cast<int32_t>(__return_address()) + 0xc386;
    *reinterpret_cast<int32_t*>(ebp9 - 24) = ecx1;
    *reinterpret_cast<int32_t*>(ebp10 - 28) = edx3;
    *reinterpret_cast<void***>(ebp11 - 32) = esi5;
    *reinterpret_cast<void***>(ebp12 - 36) = edi7;
    eax16 = _ZNSt6__ndk113__vector_baseINS_6vectorIhNS_9allocatorIhEEEENS2_IS4_EEE9__end_capEv(esi5, v13, v14, v15);
    ecx17 = *reinterpret_cast<void***>(ebp18 - 36);
    if (ecx17 == *reinterpret_cast<void***>(eax16)) {
        eax19 = ebp20->f12;
        v21 = *reinterpret_cast<void***>(ebp22 - 32);
        _ZNSt6__ndk16vectorINS0_IhNS_9allocatorIhEEEENS1_IS3_EEE21__push_back_slow_pathIRKS3_EEvOT_(v21, eax19);
    } else {
        v23 = *reinterpret_cast<void***>(ebp24 - 32);
        _ZNSt6__ndk16vectorINS0_IhNS_9allocatorIhEEEENS1_IS3_EEE24__RAII_IncreaseAnnotatorC2ERKS5_j(reinterpret_cast<int32_t>(ebp25) + 0xfffffff0, v23, 1);
        v26 = *reinterpret_cast<void***>(ebp27 - 32);
        eax28 = _ZNSt6__ndk113__vector_baseINS_6vectorIhNS_9allocatorIhEEEENS2_IS4_EEE7__allocEv(ecx17, v26, v23, 1);
        v29 = (*reinterpret_cast<struct s813**>(ebp30 - 32))->f4;
        *reinterpret_cast<void***>(ebp31 - 40) = eax28;
        eax34 = _ZNSt6__ndk116__to_raw_pointerINS_6vectorIhNS_9allocatorIhEEEEEEPT_S6_(v29, v23, 1, v32, v33);
        ecx35 = ebp36->f12;
        v37 = *reinterpret_cast<void***>(ebp38 - 40);
        _ZNSt6__ndk116allocator_traitsINS_9allocatorINS_6vectorIhNS1_IhEEEEEEE9constructIS4_JRKS4_EEEvRS5_PT_DpOT0_(v37, eax34, ecx35, v39);
        _ZNSt6__ndk16vectorINS0_IhNS_9allocatorIhEEEENS1_IS3_EEE24__RAII_IncreaseAnnotator6__doneEv(reinterpret_cast<int32_t>(ebp40) - 16, eax34, ecx35);
        (*reinterpret_cast<struct s815**>(ebp41 - 32))->f4 = (*reinterpret_cast<struct s815**>(ebp41 - 32))->f4 + 12;
    }
    goto v42;
}

void fun_7bbc();

/* std::__ndk1::vector<unsigned char, std::__ndk1::allocator<unsigned char> >::size() const */
void** _ZNKSt6__ndk16vectorIhNS_9allocatorIhEEE4sizeEv(void** a1, void** a2);

/* std::__ndk1::vector<unsigned char, std::__ndk1::allocator<unsigned char> >::__annotate_delete() const */
void _ZNKSt6__ndk16vectorIhNS_9allocatorIhEEE17__annotate_deleteEv(void** a1) {
    int32_t eax2;
    int32_t eax3;
    int32_t eax4;
    int32_t eax5;
    void** v6;
    void** eax7;
    int32_t eax8;
    int32_t eax9;

    fun_7bbc();
    eax2 = _ZNKSt6__ndk16vectorIhNS_9allocatorIhEEE4dataEv(a1);
    eax3 = _ZNKSt6__ndk16vectorIhNS_9allocatorIhEEE4dataEv(a1);
    eax4 = _ZNKSt6__ndk16vectorIhNS_9allocatorIhEEE8capacityEv(a1);
    eax5 = _ZNKSt6__ndk16vectorIhNS_9allocatorIhEEE4dataEv(a1);
    eax7 = _ZNKSt6__ndk16vectorIhNS_9allocatorIhEEE4sizeEv(a1, v6);
    eax8 = _ZNKSt6__ndk16vectorIhNS_9allocatorIhEEE4dataEv(a1);
    eax9 = _ZNKSt6__ndk16vectorIhNS_9allocatorIhEEE8capacityEv(a1);
    _ZNKSt6__ndk16vectorIhNS_9allocatorIhEEE31__annotate_contiguous_containerEPKvS5_S5_S5_(a1, eax2, eax3 + eax4, eax5 + reinterpret_cast<unsigned char>(eax7), eax8 + eax9);
    goto a1;
}

struct s816 {
    signed char[4800] pad4800;
    void** f4800;
    signed char[11] pad4812;
    void** f4812;
};

struct s817 {
    signed char[8] pad8;
    int32_t f8;
};

struct s818 {
    signed char[8] pad8;
    void** f8;
};

/* Cipher::padBytes(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >&) */
void _ZN6Cipher8padBytesERNSt6__ndk112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE(void** a1, void** a2);

struct s819 {
    signed char[8] pad8;
    void** f8;
};

struct s820 {
    signed char[8] pad8;
    void** f8;
};

struct s821 {
    signed char[8] pad8;
    void** f8;
};

struct s822 {
    signed char[8] pad8;
    void** f8;
};

struct s823 {
    signed char[8] pad8;
    void** f8;
};

struct s824 {
    signed char[8] pad8;
    void** f8;
};

struct s825 {
    signed char[8] pad8;
    void** f8;
};

struct s826 {
    signed char[8] pad8;
    void** f8;
};

struct s827 {
    signed char[8] pad8;
    void** f8;
};

struct s828 {
    signed char[8] pad8;
    void** f8;
};

struct s829 {
    signed char[8] pad8;
    void** f8;
};

void fun_56ad() {
    struct s816* eax1;
    int32_t ecx2;
    struct s817* ebp3;
    void** v4;
    int32_t ebp5;
    int32_t ebp6;
    void** v7;
    struct s818* ebp8;
    void** v9;
    struct s819* ebp10;
    void** v11;
    struct s820* ebp12;
    void** v13;
    struct s821* ebp14;
    void** ecx15;
    struct s822* ebp16;
    int32_t ebp17;
    int32_t ebp18;
    int32_t ebp19;
    void** v20;
    struct s823* ebp21;
    void** v22;
    struct s824* ebp23;
    void** v24;
    struct s825* ebp25;
    void** ecx26;
    struct s826* ebp27;
    void* v28;
    int32_t ebp29;
    int32_t ebp30;
    int32_t ebp31;
    void** v32;
    struct s827* ebp33;
    void** v34;
    struct s828* ebp35;
    void** eax36;
    struct s829* ebp37;
    int32_t v38;

    eax1 = reinterpret_cast<struct s816*>(reinterpret_cast<int32_t>(__return_address()) + 0xd877);
    ecx2 = ebp3->f8;
    v4 = reinterpret_cast<void**>(&eax1->f4800);
    *reinterpret_cast<struct s816**>(ebp5 - 16) = eax1;
    *reinterpret_cast<int32_t*>(ebp6 - 20) = ecx2;
    _ZNSt6__ndk16vectorINS0_IhNS_9allocatorIhEEEENS1_IS3_EEE9push_backERKS3_(&eax1->f4812, v4);
    v7 = ebp8->f8;
    _ZN6Cipher8padBytesERNSt6__ndk112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE(v7, v4);
    _ZN6Cipher11keyScheduleEv(v7, v4);
    v9 = ebp10->f8;
    _ZN6Cipher8subBytesERNSt6__ndk112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEb(v9, 1);
    v11 = ebp12->f8;
    _ZN6Cipher9shiftRowsERNSt6__ndk112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEb(v11, 1);
    v13 = ebp14->f8;
    _ZN6Cipher10mixColumnsERNSt6__ndk112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEb(v13, 1);
    ecx15 = ebp16->f8;
    *reinterpret_cast<int32_t*>(ebp17 - 24) = 0;
    _ZN6Cipher11addRoundKeyEiRNSt6__ndk112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE(0, ecx15);
    *reinterpret_cast<int32_t*>(ebp18 - 12) = 1;
    while (*reinterpret_cast<int32_t*>(ebp19 - 12) < 10) {
        v20 = ebp21->f8;
        _ZN6Cipher8subBytesERNSt6__ndk112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEb(v20, 1);
        v22 = ebp23->f8;
        _ZN6Cipher9shiftRowsERNSt6__ndk112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEb(v22, 1);
        v24 = ebp25->f8;
        _ZN6Cipher10mixColumnsERNSt6__ndk112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEb(v24, 1);
        ecx26 = ebp27->f8;
        v28 = *reinterpret_cast<void**>(ebp29 - 12);
        _ZN6Cipher11addRoundKeyEiRNSt6__ndk112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE(v28, ecx26);
        *reinterpret_cast<int32_t*>(ebp30 - 12) = *reinterpret_cast<int32_t*>(ebp31 - 12) + 1;
    }
    v32 = ebp33->f8;
    _ZN6Cipher8subBytesERNSt6__ndk112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEb(v32, 1);
    v34 = ebp35->f8;
    _ZN6Cipher9shiftRowsERNSt6__ndk112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEb(v34, 1);
    eax36 = ebp37->f8;
    _ZN6Cipher11addRoundKeyEiRNSt6__ndk112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE(10, eax36);
    goto v38;
}

void fun_9a6e();

/* std::__ndk1::allocator_traits<std::__ndk1::allocator<char> >::__select_on_container_copy_construction(std::__ndk1::integral_constant<bool, false>, std::__ndk1::allocator<char> const&) */
void** _ZNSt6__ndk116allocator_traitsINS_9allocatorIcEEE39__select_on_container_copy_constructionENS_17integral_constantIbLb0EEERKS2_(void** a1, void* a2);

/* std::__ndk1::allocator_traits<std::__ndk1::allocator<char> >::select_on_container_copy_construction(std::__ndk1::allocator<char> const&) */
void _ZNSt6__ndk116allocator_traitsINS_9allocatorIcEEE37select_on_container_copy_constructionERKS2_(void* a1, void** a2) {
    fun_9a6e();
    _ZNSt6__ndk116allocator_traitsINS_9allocatorIcEEE39__select_on_container_copy_constructionENS_17integral_constantIbLb0EEERKS2_(a2, a1);
    goto a2;
}

void fun_9abe();

/* std::__ndk1::allocator<char>&& std::__ndk1::forward<std::__ndk1::allocator<char> >(std::__ndk1::remove_reference<std::__ndk1::allocator<char> >::type&) */
void** _ZNSt6__ndk17forwardINS_9allocatorIcEEEEOT_RNS_16remove_referenceIS3_E4typeE(void** a1, void** a2, void** a3, int32_t a4);

/* std::__ndk1::__compressed_pair_elem<std::__ndk1::allocator<char>, 1, true>::__compressed_pair_elem<std::__ndk1::allocator<char>, void>(std::__ndk1::allocator<char>&&) */
void _ZNSt6__ndk122__compressed_pair_elemINS_9allocatorIcEELi1ELb1EEC2IS2_vEEOT_(void** a1, void** a2);

/* std::__ndk1::__compressed_pair<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::__rep, std::__ndk1::allocator<char> >::__compressed_pair<std::__ndk1::allocator<char> >(std::__ndk1::__second_tag, std::__ndk1::allocator<char>&&) */
void _ZNSt6__ndk117__compressed_pairINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE5__repES5_EC2IS5_EENS_12__second_tagEOT_(void** a1, void** a2) {
    void** v3;
    void** v4;
    void** v5;
    int32_t v6;
    void** eax7;

    fun_9abe();
    _ZNSt6__ndk122__compressed_pair_elemINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE5__repELi0ELb0EEC2Ev(a1, v3);
    eax7 = _ZNSt6__ndk17forwardINS_9allocatorIcEEEEOT_RNS_16remove_referenceIS3_E4typeE(a2, v4, v5, v6);
    _ZNSt6__ndk122__compressed_pair_elemINS_9allocatorIcEELi1ELb1EEC2IS2_vEEOT_(a1, eax7);
    goto a1;
}

struct s830 {
    signed char[4800] pad4800;
    void** f4800;
    signed char[11] pad4812;
    void** f4812;
};

struct s831 {
    signed char[8] pad8;
    int32_t f8;
};

struct s832 {
    signed char[8] pad8;
    void** f8;
};

struct s833 {
    signed char[8] pad8;
    void** f8;
};

struct s834 {
    signed char[8] pad8;
    void** f8;
};

struct s835 {
    signed char[8] pad8;
    void** f8;
};

struct s836 {
    signed char[8] pad8;
    void** f8;
};

struct s837 {
    signed char[8] pad8;
    void** f8;
};

struct s838 {
    signed char[8] pad8;
    void** f8;
};

struct s839 {
    signed char[8] pad8;
    void** f8;
};

struct s840 {
    signed char[8] pad8;
    void** f8;
};

struct s841 {
    signed char[8] pad8;
    void** f8;
};

struct s842 {
    signed char[8] pad8;
    void** f8;
};

void fun_663d() {
    struct s830* eax1;
    int32_t ecx2;
    struct s831* ebp3;
    void** v4;
    void** v5;
    int32_t ebp6;
    int32_t ebp7;
    void** eax8;
    struct s832* ebp9;
    void** v10;
    struct s833* ebp11;
    int32_t ebp12;
    void** v13;
    struct s834* ebp14;
    int32_t ebp15;
    int32_t ebp16;
    int32_t ebp17;
    void** ecx18;
    struct s835* ebp19;
    void* v20;
    int32_t ebp21;
    void** v22;
    struct s836* ebp23;
    int32_t ebp24;
    void** v25;
    struct s837* ebp26;
    int32_t ebp27;
    void** v28;
    struct s838* ebp29;
    int32_t ebp30;
    int32_t ebp31;
    int32_t ebp32;
    void** ecx33;
    struct s839* ebp34;
    int32_t ebp35;
    void** v36;
    struct s840* ebp37;
    int32_t ebp38;
    void** v39;
    struct s841* ebp40;
    int32_t ebp41;
    void** v42;
    struct s842* ebp43;
    int32_t ebp44;
    int32_t v45;

    eax1 = reinterpret_cast<struct s830*>(reinterpret_cast<int32_t>(__return_address()) + 0xc8e7);
    ecx2 = ebp3->f8;
    v4 = reinterpret_cast<void**>(&eax1->f4812);
    v5 = reinterpret_cast<void**>(&eax1->f4800);
    *reinterpret_cast<struct s830**>(ebp6 - 16) = eax1;
    *reinterpret_cast<int32_t*>(ebp7 - 20) = ecx2;
    _ZNSt6__ndk16vectorINS0_IhNS_9allocatorIhEEEENS1_IS3_EEE9push_backERKS3_(v4, v5);
    _ZN6Cipher11keyScheduleEv(v4, v5);
    eax8 = ebp9->f8;
    _ZN6Cipher11addRoundKeyEiRNSt6__ndk112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE(10, eax8);
    v10 = ebp11->f8;
    *reinterpret_cast<int32_t*>(ebp12 - 24) = 0;
    _ZN6Cipher9shiftRowsERNSt6__ndk112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEb(v10, 0);
    v13 = ebp14->f8;
    *reinterpret_cast<int32_t*>(ebp15 - 28) = 0;
    _ZN6Cipher8subBytesERNSt6__ndk112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEb(v13, 0);
    *reinterpret_cast<int32_t*>(ebp16 - 12) = 9;
    while (*reinterpret_cast<int32_t*>(ebp17 - 12) >= 1) {
        ecx18 = ebp19->f8;
        v20 = *reinterpret_cast<void**>(ebp21 - 12);
        _ZN6Cipher11addRoundKeyEiRNSt6__ndk112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE(v20, ecx18);
        v22 = ebp23->f8;
        *reinterpret_cast<int32_t*>(ebp24 - 32) = 0;
        _ZN6Cipher10mixColumnsERNSt6__ndk112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEb(v22, 0);
        v25 = ebp26->f8;
        *reinterpret_cast<int32_t*>(ebp27 - 36) = 0;
        _ZN6Cipher9shiftRowsERNSt6__ndk112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEb(v25, 0);
        v28 = ebp29->f8;
        *reinterpret_cast<int32_t*>(ebp30 - 40) = 0;
        _ZN6Cipher8subBytesERNSt6__ndk112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEb(v28, 0);
        *reinterpret_cast<int32_t*>(ebp31 - 12) = *reinterpret_cast<int32_t*>(ebp32 - 12) - 1;
    }
    ecx33 = ebp34->f8;
    *reinterpret_cast<int32_t*>(ebp35 - 44) = 0;
    _ZN6Cipher11addRoundKeyEiRNSt6__ndk112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE(0, ecx33);
    v36 = ebp37->f8;
    *reinterpret_cast<int32_t*>(ebp38 - 48) = 0;
    _ZN6Cipher10mixColumnsERNSt6__ndk112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEb(v36, 0);
    v39 = ebp40->f8;
    *reinterpret_cast<int32_t*>(ebp41 - 52) = 0;
    _ZN6Cipher9shiftRowsERNSt6__ndk112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEb(v39, 0);
    v42 = ebp43->f8;
    *reinterpret_cast<int32_t*>(ebp44 - 56) = 0;
    _ZN6Cipher8subBytesERNSt6__ndk112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEb(v42, 0);
    goto v45;
}

void fun_750c();

/* std::__ndk1::__compressed_pair<unsigned char*, std::__ndk1::allocator<unsigned char> >::second() const */
void _ZNKSt6__ndk117__compressed_pairIPhNS_9allocatorIhEEE6secondEv(void** a1);

/* std::__ndk1::__vector_base<unsigned char, std::__ndk1::allocator<unsigned char> >::__alloc() const */
void** _ZNKSt6__ndk113__vector_baseIhNS_9allocatorIhEEE7__allocEv(void** a1) {
    fun_750c();
    _ZNKSt6__ndk117__compressed_pairIPhNS_9allocatorIhEEE6secondEv(a1 + 8);
    goto a1;
}

void fun_74dc();

/* std::__ndk1::allocator_traits<std::__ndk1::allocator<unsigned char> >::__max_size(std::__ndk1::integral_constant<bool, true>, std::__ndk1::allocator<unsigned char> const&) */
void _ZNSt6__ndk116allocator_traitsINS_9allocatorIhEEE10__max_sizeENS_17integral_constantIbLb1EEERKS2_(void** a1);

/* std::__ndk1::allocator_traits<std::__ndk1::allocator<unsigned char> >::max_size(std::__ndk1::allocator<unsigned char> const&) */
int32_t _ZNSt6__ndk116allocator_traitsINS_9allocatorIhEEE8max_sizeERKS2_(void** a1) {
    fun_74dc();
    _ZNSt6__ndk116allocator_traitsINS_9allocatorIhEEE10__max_sizeENS_17integral_constantIbLb1EEERKS2_(a1);
    goto a1;
}

void fun_753a(int32_t a1, int32_t a2, int32_t a3, int32_t a4);

/* std::__ndk1::__libcpp_numeric_limits<int, true>::max() */
int32_t _ZNSt6__ndk123__libcpp_numeric_limitsIiLb1EE3maxEv(int32_t a1);

/* std::__ndk1::numeric_limits<int>::max() */
int32_t _ZNSt6__ndk114numeric_limitsIiE3maxEv(void** a1) {
    int32_t eax2;
    int32_t ebx3;
    int32_t ebp4;

    fun_753a(eax2, ebx3, ebp4, __return_address());
    _ZNSt6__ndk123__libcpp_numeric_limitsIiLb1EE3maxEv(ebx3);
    goto a1;
}

/* unsigned int const& std::__ndk1::min<unsigned int>(unsigned int const&, unsigned int const&) */
int32_t _ZNSt6__ndk13minIjEERKT_S3_S3_(void** a1, void** a2) {
    fun_749e();
    _ZNSt6__ndk13minIjNS_6__lessIjjEEEERKT_S5_S5_T0_(a1, a2);
    goto a1;
}

struct s843 {
    signed char[16] pad16;
    int32_t f16;
};

struct s844 {
    signed char[12] pad12;
    int32_t f12;
};

struct s845 {
    signed char[12] pad12;
    void** f12;
};

struct s846 {
    signed char[20] pad20;
    void*** f20;
};

struct s847 {
    signed char[20] pad20;
    int32_t* f20;
};

void fun_790e() {
    int32_t ebx1;
    struct s843* ebp2;
    int32_t ebp3;
    int32_t ebp4;
    struct s844* ebp5;
    int32_t ebp6;
    void** ecx7;
    struct s845* ebp8;
    void** edx9;
    int32_t ebp10;
    void** v11;
    struct s846* ebp12;
    struct s847* ebp13;
    int32_t ebp14;
    int32_t v15;

    ebx1 = ebp2->f16;
    *reinterpret_cast<int32_t*>(ebp3 - 20) = reinterpret_cast<int32_t>(__return_address()) + 0xb616;
    *reinterpret_cast<int32_t*>(ebp4 - 16) = ebx1 - ebp5->f12;
    if (*reinterpret_cast<int32_t*>(ebp6 - 16) > 0) {
        ecx7 = ebp8->f12;
        edx9 = reinterpret_cast<void**>(*reinterpret_cast<uint32_t*>(ebp10 - 16));
        v11 = *ebp12->f20;
        fun_2010(v11, ecx7, edx9);
        *ebp13->f20 = *reinterpret_cast<int32_t*>(ebp14 - 16) + *ebp13->f20;
    }
    goto v15;
}

/* std::__ndk1::__compressed_pair_elem<std::__ndk1::allocator<std::__ndk1::vector<unsigned char, std::__ndk1::allocator<unsigned char> > >, 1, true>::__get() */
void** _ZNSt6__ndk122__compressed_pair_elemINS_9allocatorINS_6vectorIhNS1_IhEEEEEELi1ELb1EE5__getEv(void** a1) {
    return a1;
}

struct s848 {
    signed char[16] pad16;
    int32_t f16;
};

struct s849 {
    signed char[12] pad12;
    int32_t f12;
};

struct s850 {
    signed char[8] pad8;
    int32_t f8;
};

struct s851 {
    signed char[12] pad12;
    int32_t f12;
};

struct s852 {
    signed char[16] pad16;
    void** f16;
};

/* std::__ndk1::vector<unsigned char, std::__ndk1::allocator<unsigned char> >::vector(std::__ndk1::vector<unsigned char, std::__ndk1::allocator<unsigned char> > const&) */
void _ZNSt6__ndk16vectorIhNS_9allocatorIhEEEC2ERKS3_(void** a1, void** a2, void** a3, void** a4, void** a5);

void fun_883e() {
    int32_t ecx1;
    struct s848* ebp2;
    int32_t edx3;
    struct s849* ebp4;
    int32_t esi5;
    struct s850* ebp6;
    int32_t edi7;
    struct s851* ebp8;
    void** v9;
    struct s852* ebp10;
    int32_t ebp11;
    int32_t ebp12;
    int32_t ebp13;
    int32_t ebp14;
    int32_t ebp15;
    void** v16;
    void** v17;
    void** v18;
    void** v19;
    void** v20;
    void** v21;
    void** v22;
    void** v23;
    void** eax24;
    void** v25;
    int32_t ebp26;
    void** v27;
    void** v28;
    void** v29;
    int32_t v30;

    ecx1 = ebp2->f16;
    edx3 = ebp4->f12;
    esi5 = ebp6->f8;
    edi7 = ebp8->f12;
    v9 = ebp10->f16;
    *reinterpret_cast<int32_t*>(ebp11 - 16) = reinterpret_cast<int32_t>(__return_address()) + 0xa6e6;
    *reinterpret_cast<int32_t*>(ebp12 - 20) = ecx1;
    *reinterpret_cast<int32_t*>(ebp13 - 24) = edx3;
    *reinterpret_cast<int32_t*>(ebp14 - 28) = esi5;
    *reinterpret_cast<int32_t*>(ebp15 - 32) = edi7;
    eax24 = _ZNSt6__ndk17forwardIRKNS_6vectorIhNS_9allocatorIhEEEEEEOT_RNS_16remove_referenceIS7_E4typeE(v9, v16, v17, v18, v19, v20, v21, v22, v23);
    v25 = *reinterpret_cast<void***>(ebp26 - 32);
    _ZNSt6__ndk16vectorIhNS_9allocatorIhEEEC2ERKS3_(v25, eax24, v27, v28, v29);
    goto v30;
}

struct s853 {
    signed char[42726] pad42726;
    void** f42726;
};

/* void std::__ndk1::allocator<std::__ndk1::vector<unsigned char, std::__ndk1::allocator<unsigned char> > >::construct<std::__ndk1::vector<unsigned char, std::__ndk1::allocator<unsigned char> >, std::__ndk1::vector<unsigned char, std::__ndk1::allocator<unsigned char> > const&>(std::__ndk1::vector<unsigned char, std::__ndk1::allocator<unsigned char> >*, std::__ndk1::vector<unsigned char, std::__ndk1::allocator<unsigned char> > const&) */
void _ZNSt6__ndk19allocatorINS_6vectorIhNS0_IhEEEEE9constructIS3_JRKS3_EEEvPT_DpOT0_(void** a1, void** a2, void** a3) {
    struct s853* v4;
    void** esi5;
    void** edi6;
    void** ebx7;
    void** eax8;

    fun_883e();
    eax8 = _ZNSt6__ndk17forwardIRKNS_6vectorIhNS_9allocatorIhEEEEEEOT_RNS_16remove_referenceIS7_E4typeE(a3, a2, a1, a2, a3, &v4->f42726, esi5, edi6, ebx7);
    _ZNSt6__ndk16vectorIhNS_9allocatorIhEEEC2ERKS3_(a2, eax8, a1, a2, a3);
    goto a1;
}

/* std::__ndk1::vector<std::__ndk1::vector<unsigned char, std::__ndk1::allocator<unsigned char> >, std::__ndk1::allocator<std::__ndk1::vector<unsigned char, std::__ndk1::allocator<unsigned char> > > >::__swap_out_circular_buffer(std::__ndk1::__split_buffer<std::__ndk1::vector<unsigned char, std::__ndk1::allocator<unsigned char> >, std::__ndk1::allocator<std::__ndk1::vector<unsigned char, std::__ndk1::allocator<unsigned char> > >&>&) */
void _ZNSt6__ndk16vectorINS0_IhNS_9allocatorIhEEEENS1_IS3_EEE26__swap_out_circular_bufferERNS_14__split_bufferIS3_RS4_EE(void** a1, void** a2, void** a3, void** a4) {
    void** v5;
    void** v6;
    void** eax7;
    void** edx8;
    void** esi9;
    void** eax10;
    void** eax11;
    void** eax12;

    fun_8e4e();
    _ZNKSt6__ndk16vectorINS0_IhNS_9allocatorIhEEEENS1_IS3_EEE17__annotate_deleteEv(a1);
    eax7 = _ZNSt6__ndk113__vector_baseINS_6vectorIhNS_9allocatorIhEEEENS2_IS4_EEE7__allocEv(a2, a1, v5, v6);
    edx8 = *reinterpret_cast<void***>(a1);
    esi9 = *reinterpret_cast<void***>(a1 + 4);
    _ZNSt6__ndk116allocator_traitsINS_9allocatorINS_6vectorIhNS1_IhEEEEEEE20__construct_backwardIPS4_EEvRS5_T_SA_RSA_(eax7, edx8, esi9, a2 + 4);
    _ZNSt6__ndk14swapIPNS_6vectorIhNS_9allocatorIhEEEEEENS_9enable_ifIXaasr21is_move_constructibleIT_EE5valuesr18is_move_assignableIS7_EE5valueEvE4typeERS7_SA_(a1, a2 + 4, esi9, a2 + 4);
    _ZNSt6__ndk14swapIPNS_6vectorIhNS_9allocatorIhEEEEEENS_9enable_ifIXaasr21is_move_constructibleIT_EE5valuesr18is_move_assignableIS7_EE5valueEvE4typeERS7_SA_(a1 + 4, a2 + 8, esi9, a2 + 4);
    eax10 = _ZNSt6__ndk113__vector_baseINS_6vectorIhNS_9allocatorIhEEEENS2_IS4_EEE9__end_capEv(a1, a2 + 8, esi9, a2 + 4);
    eax11 = _ZNSt6__ndk114__split_bufferINS_6vectorIhNS_9allocatorIhEEEERNS2_IS4_EEE9__end_capEv(a2, a2 + 8, esi9, a2 + 4);
    _ZNSt6__ndk14swapIPNS_6vectorIhNS_9allocatorIhEEEEEENS_9enable_ifIXaasr21is_move_constructibleIT_EE5valuesr18is_move_assignableIS7_EE5valueEvE4typeERS7_SA_(eax10, eax11, esi9, a2 + 4);
    *reinterpret_cast<void***>(a2) = *reinterpret_cast<void***>(a2 + 4);
    eax12 = _ZNKSt6__ndk16vectorINS0_IhNS_9allocatorIhEEEENS1_IS3_EEE4sizeEv(a1, eax11, esi9, a2 + 4);
    _ZNKSt6__ndk16vectorINS0_IhNS_9allocatorIhEEEENS1_IS3_EEE14__annotate_newEj(a1, eax12, esi9, a2 + 4);
    _ZNSt6__ndk16vectorINS0_IhNS_9allocatorIhEEEENS1_IS3_EEE26__invalidate_all_iteratorsEv(a1, eax12, esi9, a2 + 4);
    goto a1;
}

/* std::__ndk1::__compressed_pair_elem<unsigned char*, 0, false>::__get() */
void** _ZNSt6__ndk122__compressed_pair_elemIPhLi0ELb0EE5__getEv(void** a1) {
    return a1;
}

void fun_755e();

/* unsigned int const& std::__ndk1::min<unsigned int, std::__ndk1::__less<unsigned int, unsigned int> >(unsigned int const&, unsigned int const&, std::__ndk1::__less<unsigned int, unsigned int>) */
void _ZNSt6__ndk13minIjNS_6__lessIjjEEEERKT_S5_S5_T0_(void** a1, void** a2) {
    unsigned char al3;

    fun_755e();
    al3 = _ZNKSt6__ndk16__lessIjjEclERKjS3_(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 - 16, a2, a1, a1, a2);
    if (al3 & 1) {
    }
    goto a1;
}

void fun_78ac();

/* std::__ndk1::__compressed_pair_elem<unsigned char*, 0, false>::__get() const */
void** _ZNKSt6__ndk122__compressed_pair_elemIPhLi0ELb0EE5__getEv(void** a1);

/* std::__ndk1::__compressed_pair<unsigned char*, std::__ndk1::allocator<unsigned char> >::first() const */
void _ZNKSt6__ndk117__compressed_pairIPhNS_9allocatorIhEEE5firstEv(void** a1) {
    fun_78ac();
    _ZNKSt6__ndk122__compressed_pair_elemIPhLi0ELb0EE5__getEv(a1);
    goto a1;
}

struct s854 {
    signed char[12] pad12;
    int32_t f12;
};

struct s855 {
    signed char[8] pad8;
    int32_t f8;
};

struct s856 {
    signed char[8] pad8;
    int32_t f8;
};

struct s857 {
    signed char[12] pad12;
    void** f12;
};

void fun_71de() {
    int32_t ecx1;
    struct s854* ebp2;
    int32_t edx3;
    struct s855* ebp4;
    int32_t esi5;
    struct s856* ebp6;
    void** v7;
    struct s857* ebp8;
    int32_t ebp9;
    int32_t ebp10;
    int32_t ebp11;
    int32_t ebp12;
    int32_t v13;

    ecx1 = ebp2->f12;
    edx3 = ebp4->f8;
    esi5 = ebp6->f8;
    v7 = ebp8->f12;
    *reinterpret_cast<int32_t*>(ebp9 - 16) = ecx1;
    *reinterpret_cast<int32_t*>(ebp10 - 20) = edx3;
    *reinterpret_cast<int32_t*>(ebp11 - 24) = esi5;
    _ZNSt6__ndk17forwardIDnEEOT_RNS_16remove_referenceIS1_E4typeE(v7);
    **reinterpret_cast<int32_t**>(ebp12 - 24) = 0;
    goto v13;
}

struct s858 {
    signed char[8] pad8;
    int32_t f8;
};

struct s859 {
    signed char[8] pad8;
    void** f8;
};

void fun_722c() {
    int32_t ecx1;
    struct s858* ebp2;
    void** v3;
    struct s859* ebp4;
    int32_t ebp5;
    int32_t v6;

    ecx1 = ebp2->f8;
    v3 = ebp4->f8;
    *reinterpret_cast<int32_t*>(ebp5 - 8) = ecx1;
    _ZNSt6__ndk19allocatorIhEC2Ev(v3);
    goto v6;
}

/* std::__ndk1::allocator<unsigned char>::destroy(unsigned char*) */
void** _ZNSt6__ndk19allocatorIhE7destroyEPh(void** a1, void** a2) {
    return a2;
}

void fun_80dc();

/* std::__ndk1::__compressed_pair_elem<std::__ndk1::vector<unsigned char, std::__ndk1::allocator<unsigned char> >*, 0, false>::__get() const */
void** _ZNKSt6__ndk122__compressed_pair_elemIPNS_6vectorIhNS_9allocatorIhEEEELi0ELb0EE5__getEv(void** a1);

/* std::__ndk1::__compressed_pair<std::__ndk1::vector<unsigned char, std::__ndk1::allocator<unsigned char> >*, std::__ndk1::allocator<std::__ndk1::vector<unsigned char, std::__ndk1::allocator<unsigned char> > > >::first() const */
void _ZNKSt6__ndk117__compressed_pairIPNS_6vectorIhNS_9allocatorIhEEEENS2_IS4_EEE5firstEv(void** a1) {
    fun_80dc();
    _ZNKSt6__ndk122__compressed_pair_elemIPNS_6vectorIhNS_9allocatorIhEEEELi0ELb0EE5__getEv(a1);
    goto a1;
}

void fun_830d();

/* std::__ndk1::allocator<std::__ndk1::vector<unsigned char, std::__ndk1::allocator<unsigned char> > >::destroy(std::__ndk1::vector<unsigned char, std::__ndk1::allocator<unsigned char> >*) */
void _ZNSt6__ndk19allocatorINS_6vectorIhNS0_IhEEEEE7destroyEPS3_(void** a1, void** a2) {
    unsigned char* esi3;

    fun_830d();
    _ZNSt6__ndk16vectorIhNS_9allocatorIhEEED2Ev(a2, a1, a2, esi3);
    goto a1;
}

/* void std::__ndk1::allocator<unsigned char>::construct<unsigned char>(unsigned char*) */
void** _ZNSt6__ndk19allocatorIhE9constructIhJEEEvPT_DpOT0_(void** a1, void** a2) {
    *reinterpret_cast<void***>(a2) = reinterpret_cast<void**>(0);
    return a2;
}

struct s860 {
    signed char[16] pad16;
    int32_t f16;
};

struct s861 {
    signed char[12] pad12;
    int32_t f12;
};

struct s862 {
    signed char[12] pad12;
    void** f12;
};

struct s863 {
    signed char[20] pad20;
    void*** f20;
};

struct s864 {
    signed char[20] pad20;
    int32_t* f20;
};

void fun_8c5e() {
    int32_t ebx1;
    struct s860* ebp2;
    int32_t ebp3;
    int32_t ebp4;
    struct s861* ebp5;
    int32_t ebp6;
    void** ecx7;
    struct s862* ebp8;
    void** edx9;
    int32_t ebp10;
    void** v11;
    struct s863* ebp12;
    struct s864* ebp13;
    int32_t ebp14;
    int32_t v15;

    ebx1 = ebp2->f16;
    *reinterpret_cast<int32_t*>(ebp3 - 20) = reinterpret_cast<int32_t>(__return_address()) + 0xa2c6;
    *reinterpret_cast<int32_t*>(ebp4 - 16) = ebx1 - ebp5->f12;
    if (*reinterpret_cast<int32_t*>(ebp6 - 16) > 0) {
        ecx7 = ebp8->f12;
        edx9 = reinterpret_cast<void**>(*reinterpret_cast<uint32_t*>(ebp10 - 16));
        v11 = *ebp12->f20;
        fun_2010(v11, ecx7, edx9);
        *ebp13->f20 = *reinterpret_cast<int32_t*>(ebp14 - 16) + *ebp13->f20;
    }
    goto v15;
}

struct s865 {
    signed char[8] pad8;
    void** f8;
};

struct s866 {
    signed char[12] pad12;
    int32_t f12;
};

struct s867 {
    signed char[12] pad12;
    void* f12;
};

/* std::__ndk1::allocator_traits<std::__ndk1::allocator<unsigned char> >::__select_on_container_copy_construction(std::__ndk1::integral_constant<bool, false>, std::__ndk1::allocator<unsigned char> const&) */
void** _ZNSt6__ndk116allocator_traitsINS_9allocatorIhEEE39__select_on_container_copy_constructionENS_17integral_constantIbLb0EEERKS2_(void** a1, void* a2);

void fun_899e() {
    void** edx1;
    struct s865* ebp2;
    int32_t esi3;
    struct s866* ebp4;
    void* edi5;
    struct s867* ebp6;
    void** v7;
    int32_t ebp8;
    int32_t ebp9;
    int32_t v10;

    edx1 = ebp2->f8;
    esi3 = ebp4->f12;
    edi5 = ebp6->f12;
    v7 = ebp2->f8;
    *reinterpret_cast<void***>(ebp8 - 28) = edx1;
    *reinterpret_cast<int32_t*>(ebp9 - 32) = esi3;
    _ZNSt6__ndk116allocator_traitsINS_9allocatorIhEEE39__select_on_container_copy_constructionENS_17integral_constantIbLb0EEERKS2_(v7, edi5);
    goto v10;
}

void fun_90ac();

/* std::__ndk1::__compressed_pair<std::__ndk1::vector<unsigned char, std::__ndk1::allocator<unsigned char> >*, std::__ndk1::allocator<std::__ndk1::vector<unsigned char, std::__ndk1::allocator<unsigned char> > > >::second() const */
void _ZNKSt6__ndk117__compressed_pairIPNS_6vectorIhNS_9allocatorIhEEEENS2_IS4_EEE6secondEv(void** a1);

/* std::__ndk1::__vector_base<std::__ndk1::vector<unsigned char, std::__ndk1::allocator<unsigned char> >, std::__ndk1::allocator<std::__ndk1::vector<unsigned char, std::__ndk1::allocator<unsigned char> > > >::__alloc() const */
void** _ZNKSt6__ndk113__vector_baseINS_6vectorIhNS_9allocatorIhEEEENS2_IS4_EEE7__allocEv(void** a1) {
    fun_90ac();
    _ZNKSt6__ndk117__compressed_pairIPNS_6vectorIhNS_9allocatorIhEEEENS2_IS4_EEE6secondEv(a1 + 8);
    goto a1;
}

void fun_907c();

/* std::__ndk1::allocator_traits<std::__ndk1::allocator<std::__ndk1::vector<unsigned char, std::__ndk1::allocator<unsigned char> > > >::__max_size(std::__ndk1::integral_constant<bool, true>, std::__ndk1::allocator<std::__ndk1::vector<unsigned char, std::__ndk1::allocator<unsigned char> > > const&) */
void _ZNSt6__ndk116allocator_traitsINS_9allocatorINS_6vectorIhNS1_IhEEEEEEE10__max_sizeENS_17integral_constantIbLb1EEERKS5_(void** a1);

/* std::__ndk1::allocator_traits<std::__ndk1::allocator<std::__ndk1::vector<unsigned char, std::__ndk1::allocator<unsigned char> > > >::max_size(std::__ndk1::allocator<std::__ndk1::vector<unsigned char, std::__ndk1::allocator<unsigned char> > > const&) */
int32_t _ZNSt6__ndk116allocator_traitsINS_9allocatorINS_6vectorIhNS1_IhEEEEEEE8max_sizeERKS5_(void** a1) {
    fun_907c();
    _ZNSt6__ndk116allocator_traitsINS_9allocatorINS_6vectorIhNS1_IhEEEEEEE10__max_sizeENS_17integral_constantIbLb1EEERKS5_(a1);
    goto a1;
}

struct s868 {
    signed char[16] pad16;
    int32_t f16;
};

struct s869 {
    signed char[12] pad12;
    int32_t f12;
};

struct s870 {
    signed char[8] pad8;
    int32_t f8;
};

struct s871 {
    signed char[8] pad8;
    int32_t f8;
};

struct s872 {
    signed char[12] pad12;
    void** f12;
};

struct s873 {
    signed char[16] pad16;
    void** f16;
};

void fun_917e() {
    int32_t ecx1;
    struct s868* ebp2;
    int32_t edx3;
    struct s869* ebp4;
    int32_t esi5;
    struct s870* ebp6;
    int32_t edi7;
    struct s871* ebp8;
    int32_t ebp9;
    void** v10;
    struct s872* ebp11;
    int32_t ebp12;
    int32_t ebp13;
    int32_t ebp14;
    int32_t ebp15;
    int32_t ebp16;
    void** eax17;
    void** v18;
    int32_t ebp19;
    int32_t eax20;
    int32_t ebp21;
    void** v22;
    struct s873* ebp23;
    int32_t ebp24;
    void** eax25;
    void*** v26;
    int32_t ebp27;
    int32_t v28;

    ecx1 = ebp2->f16;
    edx3 = ebp4->f12;
    esi5 = ebp6->f8;
    edi7 = ebp8->f8;
    *reinterpret_cast<int32_t*>(ebp9 - 16) = reinterpret_cast<int32_t>(__return_address()) + 0x9da6;
    v10 = ebp11->f12;
    *reinterpret_cast<int32_t*>(ebp12 - 20) = edi7;
    *reinterpret_cast<int32_t*>(ebp13 - 24) = ecx1;
    *reinterpret_cast<int32_t*>(ebp14 - 28) = edx3;
    *reinterpret_cast<int32_t*>(ebp15 - 32) = esi5;
    *reinterpret_cast<int32_t*>(ebp16 - 36) = edi7;
    eax17 = _ZNSt6__ndk17forwardIDnEEOT_RNS_16remove_referenceIS1_E4typeE(v10);
    v18 = *reinterpret_cast<void***>(ebp19 - 20);
    _ZNSt6__ndk122__compressed_pair_elemIPNS_6vectorIhNS_9allocatorIhEEEELi0ELb0EEC2IDnvEEOT_(v18, eax17);
    eax20 = *reinterpret_cast<int32_t*>(ebp21 - 36) + 4;
    v22 = ebp23->f16;
    *reinterpret_cast<int32_t*>(ebp24 - 40) = eax20;
    eax25 = _ZNSt6__ndk17forwardIRNS_9allocatorINS_6vectorIhNS1_IhEEEEEEEEOT_RNS_16remove_referenceIS7_E4typeE(v22, eax17);
    v26 = *reinterpret_cast<void****>(ebp27 - 40);
    _ZNSt6__ndk122__compressed_pair_elemIRNS_9allocatorINS_6vectorIhNS1_IhEEEEEELi1ELb0EEC2IS6_vEEOT_(v26, eax25);
    goto v28;
}

/* std::__ndk1::allocator<std::__ndk1::vector<unsigned char, std::__ndk1::allocator<unsigned char> > >::max_size() const */
void** _ZNKSt6__ndk19allocatorINS_6vectorIhNS0_IhEEEEE8max_sizeEv(void** a1, void** a2, void** a3, void** a4, int32_t a5) {
    return 0x15555555;
}

struct s874 {
    signed char[8] pad8;
    int32_t f8;
};

struct s875 {
    signed char[8] pad8;
    void** f8;
};

void fun_93fc() {
    int32_t ecx1;
    struct s874* ebp2;
    void** v3;
    struct s875* ebp4;
    int32_t ebp5;
    int32_t v6;

    ecx1 = ebp2->f8;
    v3 = ebp4->f8;
    *reinterpret_cast<int32_t*>(ebp5 - 8) = ecx1;
    _ZNSt6__ndk122__compressed_pair_elemIPNS_6vectorIhNS_9allocatorIhEEEELi0ELb0EE5__getEv(v3);
    goto v6;
}

struct s876 {
    signed char[8] pad8;
    int32_t f8;
};

struct s877 {
    signed char[8] pad8;
    void** f8;
};

void fun_7e2e() {
    int32_t ecx1;
    struct s876* ebp2;
    void** edx3;
    struct s877* ebp4;
    int32_t ebp5;
    int32_t ebp6;
    int32_t ebp7;
    int32_t eax8;
    void** v9;
    int32_t ebp10;
    int32_t ebp11;
    int32_t eax12;
    void** v13;
    int32_t ebp14;
    int32_t ebp15;
    uint32_t eax16;
    uint32_t ecx17;
    int32_t ebp18;
    void** v19;
    int32_t ebp20;
    int32_t ebp21;
    int32_t eax22;
    void** v23;
    int32_t ebp24;
    int32_t ebp25;
    void** v26;
    void** v27;
    void*** v28;
    void** eax29;
    uint32_t ecx30;
    int32_t ebp31;
    void** v32;
    int32_t ebp33;
    int32_t ebp34;
    int32_t eax35;
    void** v36;
    int32_t ebp37;
    int32_t ebp38;
    uint32_t eax39;
    uint32_t ecx40;
    int32_t ebp41;
    void** v42;
    int32_t ebp43;
    int32_t v44;
    int32_t ebp45;
    uint32_t v46;
    int32_t ebp47;
    uint32_t v48;
    int32_t ebp49;
    int32_t v50;

    ecx1 = ebp2->f8;
    edx3 = ebp4->f8;
    *reinterpret_cast<int32_t*>(ebp5 - 16) = reinterpret_cast<int32_t>(__return_address()) + 0xb0f6;
    *reinterpret_cast<int32_t*>(ebp6 - 20) = ecx1;
    *reinterpret_cast<void***>(ebp7 - 24) = edx3;
    eax8 = _ZNKSt6__ndk16vectorINS0_IhNS_9allocatorIhEEEENS1_IS3_EEE4dataEv(edx3);
    v9 = *reinterpret_cast<void***>(ebp10 - 24);
    *reinterpret_cast<int32_t*>(ebp11 - 28) = eax8;
    eax12 = _ZNKSt6__ndk16vectorINS0_IhNS_9allocatorIhEEEENS1_IS3_EEE4dataEv(v9);
    v13 = *reinterpret_cast<void***>(ebp14 - 24);
    *reinterpret_cast<int32_t*>(ebp15 - 32) = eax12;
    eax16 = _ZNKSt6__ndk16vectorINS0_IhNS_9allocatorIhEEEENS1_IS3_EEE8capacityEv(v13);
    ecx17 = *reinterpret_cast<int32_t*>(ebp18 - 32) + eax16 * 12;
    v19 = *reinterpret_cast<void***>(ebp20 - 24);
    *reinterpret_cast<uint32_t*>(ebp21 - 36) = ecx17;
    eax22 = _ZNKSt6__ndk16vectorINS0_IhNS_9allocatorIhEEEENS1_IS3_EEE4dataEv(v19);
    v23 = *reinterpret_cast<void***>(ebp24 - 24);
    *reinterpret_cast<int32_t*>(ebp25 - 40) = eax22;
    eax29 = _ZNKSt6__ndk16vectorINS0_IhNS_9allocatorIhEEEENS1_IS3_EEE4sizeEv(v23, v26, v27, v28);
    ecx30 = *reinterpret_cast<int32_t*>(ebp31 - 40) + reinterpret_cast<unsigned char>(eax29) * 12;
    v32 = *reinterpret_cast<void***>(ebp33 - 24);
    *reinterpret_cast<uint32_t*>(ebp34 - 44) = ecx30;
    eax35 = _ZNKSt6__ndk16vectorINS0_IhNS_9allocatorIhEEEENS1_IS3_EEE4dataEv(v32);
    v36 = *reinterpret_cast<void***>(ebp37 - 24);
    *reinterpret_cast<int32_t*>(ebp38 - 48) = eax35;
    eax39 = _ZNKSt6__ndk16vectorINS0_IhNS_9allocatorIhEEEENS1_IS3_EEE8capacityEv(v36);
    ecx40 = *reinterpret_cast<int32_t*>(ebp41 - 48) + eax39 * 12;
    v42 = *reinterpret_cast<void***>(ebp43 - 24);
    v44 = *reinterpret_cast<int32_t*>(ebp45 - 28);
    v46 = *reinterpret_cast<uint32_t*>(ebp47 - 36);
    v48 = *reinterpret_cast<uint32_t*>(ebp49 - 44);
    _ZNKSt6__ndk16vectorINS0_IhNS_9allocatorIhEEEENS1_IS3_EEE31__annotate_contiguous_containerEPKvS7_S7_S7_(v42, v44, v46, v48, ecx40);
    goto v50;
}

struct s878 {
    signed char[16] pad16;
    int32_t f16;
};

struct s879 {
    signed char[12] pad12;
    int32_t f12;
};

struct s880 {
    signed char[8] pad8;
    int32_t f8;
};

struct s881 {
    signed char[20] pad20;
    void** f20;
};

struct s882 {
    signed char[16] pad16;
    void* f16;
};

struct s883 {
    signed char[16] pad16;
    void** f16;
};

struct s884 {
    signed char[20] pad20;
    int32_t* f20;
};

void fun_942e() {
    int32_t ebp1;
    struct s878* ebp2;
    struct s879* ebp3;
    int32_t eax4;
    struct s880* ebp5;
    void** v6;
    struct s881* ebp7;
    int32_t ebp8;
    void** v9;
    void** v10;
    void** v11;
    void** v12;
    void** eax13;
    void** ecx14;
    struct s882* ebp15;
    struct s883* ebp16;
    int32_t ebp17;
    void** eax18;
    void** v19;
    int32_t ebp20;
    int32_t ebp21;
    struct s884* ebp22;
    int32_t v23;

    *reinterpret_cast<int32_t*>(ebp1 - 16) = reinterpret_cast<int32_t>(__return_address()) + reinterpret_cast<int32_t>("F");
    while (ebp2->f16 != ebp3->f12) {
        eax4 = ebp5->f8;
        v6 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(*ebp7->f20) + 0xfffffff4);
        *reinterpret_cast<int32_t*>(ebp8 - 20) = eax4;
        eax13 = _ZNSt6__ndk116__to_raw_pointerINS_6vectorIhNS_9allocatorIhEEEEEEPT_S6_(v6, v9, v10, v11, v12);
        ecx14 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp15->f16) + 0xfffffff4);
        ebp16->f16 = ecx14;
        *reinterpret_cast<void***>(ebp17 - 24) = eax13;
        eax18 = _ZNSt6__ndk116move_if_noexceptINS_6vectorIhNS_9allocatorIhEEEEEENS_11conditionalIXaantsr29is_nothrow_move_constructibleIT_EE5valuesr21is_copy_constructibleIS6_EE5valueERKS6_OS6_E4typeERS6_(ecx14, v9, v10);
        v19 = *reinterpret_cast<void***>(ebp20 - 20);
        v9 = *reinterpret_cast<void***>(ebp21 - 24);
        v10 = eax18;
        _ZNSt6__ndk116allocator_traitsINS_9allocatorINS_6vectorIhNS1_IhEEEEEEE9constructIS4_JS4_EEEvRS5_PT_DpOT0_(v19, v9, v10);
        *ebp22->f20 = *ebp22->f20 - 12;
    }
    goto v23;
}

struct s885 {
    signed char[8] pad8;
    int32_t f8;
};

struct s887 {
    signed char[8] pad8;
    void** f8;
};

struct s886 {
    signed char[8] pad8;
    struct s887* f8;
};

void fun_856c() {
    int32_t ecx1;
    struct s885* ebp2;
    void** v3;
    struct s886* ebp4;
    int32_t ebp5;
    int32_t v6;

    ecx1 = ebp2->f8;
    v3 = reinterpret_cast<void**>(&ebp4->f8->f8);
    *reinterpret_cast<int32_t*>(ebp5 - 8) = ecx1;
    _ZNSt6__ndk117__compressed_pairIPNS_6vectorIhNS_9allocatorIhEEEENS2_IS4_EEE5firstEv(v3);
    goto v6;
}

struct s888 {
    signed char[12] pad12;
    int32_t f12;
};

struct s889 {
    signed char[8] pad8;
    int32_t f8;
};

struct s890 {
    signed char[8] pad8;
    void** f8;
};

struct s891 {
    signed char[12] pad12;
    int32_t f12;
};

void fun_952e() {
    int32_t ecx1;
    struct s888* ebp2;
    int32_t edx3;
    struct s889* ebp4;
    void** esi5;
    struct s890* ebp6;
    int32_t ebp7;
    int32_t ebp8;
    int32_t ebp9;
    int32_t ebp10;
    int32_t eax11;
    void** v12;
    int32_t ebp13;
    int32_t ebp14;
    int32_t eax15;
    void** v16;
    int32_t ebp17;
    int32_t ebp18;
    uint32_t eax19;
    uint32_t ecx20;
    int32_t ebp21;
    void** v22;
    int32_t ebp23;
    int32_t ebp24;
    int32_t eax25;
    void** v26;
    int32_t ebp27;
    int32_t ebp28;
    uint32_t eax29;
    uint32_t ecx30;
    int32_t ebp31;
    void** v32;
    int32_t ebp33;
    int32_t ebp34;
    int32_t eax35;
    uint32_t eax36;
    struct s891* ebp37;
    void** v38;
    int32_t ebp39;
    int32_t v40;
    int32_t ebp41;
    uint32_t v42;
    int32_t ebp43;
    uint32_t v44;
    int32_t ebp45;
    int32_t v46;

    ecx1 = ebp2->f12;
    edx3 = ebp4->f8;
    esi5 = ebp6->f8;
    *reinterpret_cast<int32_t*>(ebp7 - 16) = reinterpret_cast<int32_t>(__return_address()) + 0x99f6;
    *reinterpret_cast<int32_t*>(ebp8 - 20) = ecx1;
    *reinterpret_cast<int32_t*>(ebp9 - 24) = edx3;
    *reinterpret_cast<void***>(ebp10 - 28) = esi5;
    eax11 = _ZNKSt6__ndk16vectorINS0_IhNS_9allocatorIhEEEENS1_IS3_EEE4dataEv(esi5);
    v12 = *reinterpret_cast<void***>(ebp13 - 28);
    *reinterpret_cast<int32_t*>(ebp14 - 32) = eax11;
    eax15 = _ZNKSt6__ndk16vectorINS0_IhNS_9allocatorIhEEEENS1_IS3_EEE4dataEv(v12);
    v16 = *reinterpret_cast<void***>(ebp17 - 28);
    *reinterpret_cast<int32_t*>(ebp18 - 36) = eax15;
    eax19 = _ZNKSt6__ndk16vectorINS0_IhNS_9allocatorIhEEEENS1_IS3_EEE8capacityEv(v16);
    ecx20 = *reinterpret_cast<int32_t*>(ebp21 - 36) + eax19 * 12;
    v22 = *reinterpret_cast<void***>(ebp23 - 28);
    *reinterpret_cast<uint32_t*>(ebp24 - 40) = ecx20;
    eax25 = _ZNKSt6__ndk16vectorINS0_IhNS_9allocatorIhEEEENS1_IS3_EEE4dataEv(v22);
    v26 = *reinterpret_cast<void***>(ebp27 - 28);
    *reinterpret_cast<int32_t*>(ebp28 - 44) = eax25;
    eax29 = _ZNKSt6__ndk16vectorINS0_IhNS_9allocatorIhEEEENS1_IS3_EEE8capacityEv(v26);
    ecx30 = *reinterpret_cast<int32_t*>(ebp31 - 44) + eax29 * 12;
    v32 = *reinterpret_cast<void***>(ebp33 - 28);
    *reinterpret_cast<uint32_t*>(ebp34 - 48) = ecx30;
    eax35 = _ZNKSt6__ndk16vectorINS0_IhNS_9allocatorIhEEEENS1_IS3_EEE4dataEv(v32);
    eax36 = reinterpret_cast<uint32_t>(eax35 + ebp37->f12 * 12);
    v38 = *reinterpret_cast<void***>(ebp39 - 28);
    v40 = *reinterpret_cast<int32_t*>(ebp41 - 32);
    v42 = *reinterpret_cast<uint32_t*>(ebp43 - 40);
    v44 = *reinterpret_cast<uint32_t*>(ebp45 - 48);
    _ZNKSt6__ndk16vectorINS0_IhNS_9allocatorIhEEEENS1_IS3_EEE31__annotate_contiguous_containerEPKvS7_S7_S7_(v38, v40, v42, v44, eax36);
    goto v46;
}

struct s892 {
    signed char[8] pad8;
    int32_t f8;
};

struct s893 {
    signed char[8] pad8;
    void** f8;
};

/* std::__ndk1::__split_buffer<std::__ndk1::vector<unsigned char, std::__ndk1::allocator<unsigned char> >, std::__ndk1::allocator<std::__ndk1::vector<unsigned char, std::__ndk1::allocator<unsigned char> > >&>::clear() */
void _ZNSt6__ndk114__split_bufferINS_6vectorIhNS_9allocatorIhEEEERNS2_IS4_EEE5clearEv(void** a1);

void fun_8f5d() {
    int32_t ecx1;
    struct s892* ebp2;
    void** edx3;
    struct s893* ebp4;
    int32_t ebp5;
    int32_t ebp6;
    int32_t ebp7;
    int32_t ebp8;
    void** v9;
    int32_t ebp10;
    void** v11;
    void** v12;
    void** eax13;
    void** edx14;
    int32_t ebp15;
    void** v16;
    int32_t ebp17;
    int32_t ebp18;
    int32_t eax19;
    int32_t ebp20;
    void** v21;
    int32_t ebp22;
    void** v23;
    int32_t ebp24;
    int32_t v25;
    int32_t ebp26;
    int32_t v27;

    ecx1 = ebp2->f8;
    edx3 = ebp4->f8;
    *reinterpret_cast<int32_t*>(ebp5 - 12) = reinterpret_cast<int32_t>(__return_address()) + 0x9fc7;
    *reinterpret_cast<int32_t*>(ebp6 - 16) = ecx1;
    *reinterpret_cast<void***>(ebp7 - 20) = edx3;
    _ZNSt6__ndk114__split_bufferINS_6vectorIhNS_9allocatorIhEEEERNS2_IS4_EEE5clearEv(edx3);
    if (**reinterpret_cast<int32_t**>(ebp8 - 20)) {
        v9 = *reinterpret_cast<void***>(ebp10 - 20);
        eax13 = _ZNSt6__ndk114__split_bufferINS_6vectorIhNS_9allocatorIhEEEERNS2_IS4_EEE7__allocEv(v9, v11, v12);
        edx14 = *reinterpret_cast<void***>(*reinterpret_cast<void***>(ebp15 - 20));
        v16 = *reinterpret_cast<void***>(ebp15 - 20);
        *reinterpret_cast<void***>(ebp17 - 24) = eax13;
        *reinterpret_cast<void***>(ebp18 - 28) = edx14;
        eax19 = _ZNKSt6__ndk114__split_bufferINS_6vectorIhNS_9allocatorIhEEEERNS2_IS4_EEE8capacityEv(v16);
        *reinterpret_cast<int32_t*>(ebp20 - 32) = eax19;
        v21 = *reinterpret_cast<void***>(ebp22 - 24);
        v23 = *reinterpret_cast<void***>(ebp24 - 28);
        v25 = *reinterpret_cast<int32_t*>(ebp26 - 32);
        _ZNSt6__ndk116allocator_traitsINS_9allocatorINS_6vectorIhNS1_IhEEEEEEE10deallocateERS5_PS4_j(v21, v23, v25);
    }
    goto v27;
}

void fun_9a3c();

/* std::__ndk1::__compressed_pair<std::__ndk1::vector<unsigned char, std::__ndk1::allocator<unsigned char> >*, std::__ndk1::allocator<std::__ndk1::vector<unsigned char, std::__ndk1::allocator<unsigned char> > >&>::first() const */
void _ZNKSt6__ndk117__compressed_pairIPNS_6vectorIhNS_9allocatorIhEEEERNS2_IS4_EEE5firstEv(void** a1) {
    fun_9a3c();
    _ZNKSt6__ndk122__compressed_pair_elemIPNS_6vectorIhNS_9allocatorIhEEEELi0ELb0EE5__getEv(a1);
    goto a1;
}

void fun_997d();

struct s894 {
    signed char[38311] pad38311;
    void** f38311;
};

/* std::__ndk1::__split_buffer<std::__ndk1::vector<unsigned char, std::__ndk1::allocator<unsigned char> >, std::__ndk1::allocator<std::__ndk1::vector<unsigned char, std::__ndk1::allocator<unsigned char> > >&>::__destruct_at_end(std::__ndk1::vector<unsigned char, std::__ndk1::allocator<unsigned char> >*, std::__ndk1::integral_constant<bool, false>) */
void _ZNSt6__ndk114__split_bufferINS_6vectorIhNS_9allocatorIhEEEERNS2_IS4_EEE17__destruct_at_endEPS4_NS_17integral_constantIbLb0EEE(void** a1, void** a2) {
    void** v3;
    struct s894* v4;
    void** v5;
    void** v6;
    void** v7;
    void** eax8;
    void** edx9;
    void** eax10;

    fun_997d();
    v3 = reinterpret_cast<void**>(&v4->f38311);
    v5 = a1;
    while (a2 != *reinterpret_cast<void***>(v5 + 8)) {
        eax8 = _ZNSt6__ndk114__split_bufferINS_6vectorIhNS_9allocatorIhEEEERNS2_IS4_EEE7__allocEv(v5, v6, v7);
        edx9 = *reinterpret_cast<void***>(v5 + 8) + 0xfffffff4;
        *reinterpret_cast<void***>(v5 + 8) = edx9;
        v7 = eax8;
        eax10 = _ZNSt6__ndk116__to_raw_pointerINS_6vectorIhNS_9allocatorIhEEEEEEPT_S6_(edx9, v6, v7, v5, v3);
        v6 = eax10;
        _ZNSt6__ndk116allocator_traitsINS_9allocatorINS_6vectorIhNS1_IhEEEEEEE7destroyIS4_EEvRS5_PT_(v7, v6);
    }
    goto a1;
}

struct s895 {
    signed char[124] pad124;
    int32_t f124;
};

int32_t fun_21d0() {
    struct s895* ebx1;

    goto ebx1->f124;
}

struct s896 {
    signed char[16] pad16;
    int32_t f16;
};

struct s897 {
    signed char[12] pad12;
    int32_t f12;
};

struct s898 {
    signed char[8] pad8;
    int32_t f8;
};

struct s899 {
    signed char[12] pad12;
    void** f12;
};

struct s900 {
    signed char[8] pad8;
    void** f8;
};

void fun_395e() {
    int32_t ecx1;
    struct s896* ebp2;
    int32_t edx3;
    struct s897* ebp4;
    int32_t esi5;
    struct s898* ebp6;
    void** ebx7;
    struct s899* ebp8;
    void** v9;
    struct s900* ebp10;
    int32_t ebp11;
    int32_t ebp12;
    int32_t ebp13;
    int32_t v14;

    ecx1 = ebp2->f16;
    edx3 = ebp4->f12;
    esi5 = ebp6->f8;
    ebx7 = ebp8->f12;
    v9 = ebp10->f8;
    *reinterpret_cast<int32_t*>(ebp11 - 16) = ecx1;
    *reinterpret_cast<int32_t*>(ebp12 - 20) = edx3;
    *reinterpret_cast<int32_t*>(ebp13 - 24) = esi5;
    _ZNSt6__ndk117_DeallocateCaller27__do_deallocate_handle_sizeEPvj(v9, ebx7);
    goto v14;
}

struct s901 {
    signed char[16] pad16;
    int32_t f16;
};

struct s902 {
    signed char[12] pad12;
    int32_t f12;
};

struct s903 {
    signed char[8] pad8;
    int32_t f8;
};

struct s904 {
    signed char[12] pad12;
    int32_t f12;
};

struct s905 {
    signed char[16] pad16;
    void** f16;
};

/* std::__ndk1::vector<unsigned char, std::__ndk1::allocator<unsigned char> >::vector(std::__ndk1::vector<unsigned char, std::__ndk1::allocator<unsigned char> >&&) */
void _ZNSt6__ndk16vectorIhNS_9allocatorIhEEEC2EOS3_(void** a1, void** a2, void** a3, void** a4, void** a5);

void fun_973e() {
    int32_t ecx1;
    struct s901* ebp2;
    int32_t edx3;
    struct s902* ebp4;
    int32_t esi5;
    struct s903* ebp6;
    int32_t edi7;
    struct s904* ebp8;
    void** v9;
    struct s905* ebp10;
    int32_t ebp11;
    int32_t ebp12;
    int32_t ebp13;
    int32_t ebp14;
    int32_t ebp15;
    void** eax16;
    void** v17;
    int32_t ebp18;
    void** v19;
    void** v20;
    void** v21;
    int32_t v22;

    ecx1 = ebp2->f16;
    edx3 = ebp4->f12;
    esi5 = ebp6->f8;
    edi7 = ebp8->f12;
    v9 = ebp10->f16;
    *reinterpret_cast<int32_t*>(ebp11 - 16) = reinterpret_cast<int32_t>(__return_address()) + 0x97e6;
    *reinterpret_cast<int32_t*>(ebp12 - 20) = ecx1;
    *reinterpret_cast<int32_t*>(ebp13 - 24) = edx3;
    *reinterpret_cast<int32_t*>(ebp14 - 28) = esi5;
    *reinterpret_cast<int32_t*>(ebp15 - 32) = edi7;
    eax16 = _ZNSt6__ndk17forwardINS_6vectorIhNS_9allocatorIhEEEEEEOT_RNS_16remove_referenceIS5_E4typeE(v9);
    v17 = *reinterpret_cast<void***>(ebp18 - 32);
    _ZNSt6__ndk16vectorIhNS_9allocatorIhEEEC2EOS3_(v17, eax16, v19, v20, v21);
    goto v22;
}

/* void std::__ndk1::allocator<std::__ndk1::vector<unsigned char, std::__ndk1::allocator<unsigned char> > >::construct<std::__ndk1::vector<unsigned char, std::__ndk1::allocator<unsigned char> >, std::__ndk1::vector<unsigned char, std::__ndk1::allocator<unsigned char> > >(std::__ndk1::vector<unsigned char, std::__ndk1::allocator<unsigned char> >*, std::__ndk1::vector<unsigned char, std::__ndk1::allocator<unsigned char> >&&) */
void _ZNSt6__ndk19allocatorINS_6vectorIhNS0_IhEEEEE9constructIS3_JS3_EEEvPT_DpOT0_(void** a1, void** a2, void** a3) {
    void** eax4;

    fun_973e();
    eax4 = _ZNSt6__ndk17forwardINS_6vectorIhNS_9allocatorIhEEEEEEOT_RNS_16remove_referenceIS5_E4typeE(a3);
    _ZNSt6__ndk16vectorIhNS_9allocatorIhEEEC2EOS3_(a2, eax4, a1, a2, a3);
    goto a1;
}

void fun_2589() {
    int32_t v1;

    fun_2270();
    goto v1;
}

struct s906 {
    signed char[4800] pad4800;
    void** f4800;
    signed char[11] pad4812;
    void** f4812;
};

/* Cipher::decrypt(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >&) */
void _ZN6Cipher7decryptERNSt6__ndk112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE(void** a1) {
    struct s906* eax2;
    void* v3;
    void** v4;
    void** v5;
    void* v6;

    fun_663d();
    eax2 = reinterpret_cast<struct s906*>(reinterpret_cast<int32_t>(v3) + 0xc8e7);
    v4 = reinterpret_cast<void**>(&eax2->f4812);
    v5 = reinterpret_cast<void**>(&eax2->f4800);
    _ZNSt6__ndk16vectorINS0_IhNS_9allocatorIhEEEENS1_IS3_EEE9push_backERKS3_(v4, v5);
    _ZN6Cipher11keyScheduleEv(v4, v5);
    _ZN6Cipher11addRoundKeyEiRNSt6__ndk112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE(10, a1);
    _ZN6Cipher9shiftRowsERNSt6__ndk112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEb(a1, 0);
    _ZN6Cipher8subBytesERNSt6__ndk112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEb(a1, 0);
    v6 = reinterpret_cast<void*>(9);
    while (reinterpret_cast<int32_t>(v6) >= reinterpret_cast<int32_t>(1)) {
        _ZN6Cipher11addRoundKeyEiRNSt6__ndk112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE(v6, a1);
        _ZN6Cipher10mixColumnsERNSt6__ndk112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEb(a1, 0);
        _ZN6Cipher9shiftRowsERNSt6__ndk112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEb(a1, 0);
        _ZN6Cipher8subBytesERNSt6__ndk112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEb(a1, 0);
        v6 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(v6) + 0xffffffff);
    }
    _ZN6Cipher11addRoundKeyEiRNSt6__ndk112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE(0, a1);
    _ZN6Cipher10mixColumnsERNSt6__ndk112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEb(a1, 0);
    _ZN6Cipher9shiftRowsERNSt6__ndk112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEb(a1, 0);
    _ZN6Cipher8subBytesERNSt6__ndk112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEb(a1, 0);
    goto a1;
}

struct s907 {
    signed char[120] pad120;
    int32_t f120;
};

void fun_21c0(void** a1, int32_t a2, int32_t a3) {
    struct s907* ebx4;

    goto ebx4->f120;
}

struct s908 {
    signed char[4812] pad4812;
    void** f4812;
};

/* std::__ndk1::vector<std::__ndk1::vector<unsigned char, std::__ndk1::allocator<unsigned char> >, std::__ndk1::allocator<std::__ndk1::vector<unsigned char, std::__ndk1::allocator<unsigned char> > > >::vector() */
void _ZNSt6__ndk16vectorINS0_IhNS_9allocatorIhEEEENS1_IS3_EEEC2Ev(void** a1);

struct s909 {
    signed char[4812] pad4812;
    void** f4812;
};

void fun_239d() {
    struct s908* eax1;
    int32_t ebp2;
    void** edx3;
    int32_t ebp4;
    uint32_t esi5;
    uint32_t v6;
    int32_t v7;
    int32_t v8;

    eax1 = reinterpret_cast<struct s908*>(reinterpret_cast<int32_t>(__return_address()) + 0x10b87);
    *reinterpret_cast<struct s908**>(ebp2 - 12) = eax1;
    _ZNSt6__ndk16vectorINS0_IhNS_9allocatorIhEEEENS1_IS3_EEEC2Ev(&eax1->f4812);
    edx3 = reinterpret_cast<void**>(&(*reinterpret_cast<struct s909**>(ebp4 - 12))->f4812);
    esi5 = reinterpret_cast<int32_t>(*reinterpret_cast<struct s909**>(ebp4 - 12)) + 0x31c;
    v6 = reinterpret_cast<int32_t>(*reinterpret_cast<struct s909**>(ebp4 - 12)) + 0xffff3acc;
    fun_2200(v6, edx3, esi5, v7);
    goto v8;
}

/* std::__ndk1::__compressed_pair_elem<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::__rep, 0, false>::__compressed_pair_elem() */
void _ZNSt6__ndk122__compressed_pair_elemINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE5__repELi0ELb0EEC2Ev(void** a1, void** a2) {
    fun_3c9d();
    fun_21c0(a1, 0, 12);
    goto a1;
}

void fun_3cec();

/* std::__ndk1::allocator<char>::allocator() */
void** _ZNSt6__ndk19allocatorIcEC2Ev(void** a1);

/* std::__ndk1::__compressed_pair_elem<std::__ndk1::allocator<char>, 1, true>::__compressed_pair_elem() */
void _ZNSt6__ndk122__compressed_pair_elemINS_9allocatorIcEELi1ELb1EEC2Ev(void** a1, void** a2) {
    fun_3cec();
    _ZNSt6__ndk19allocatorIcEC2Ev(a1);
    goto a1;
}

struct s910 {
    signed char[12] pad12;
    int32_t f12;
};

struct s911 {
    signed char[8] pad8;
    int32_t f8;
};

struct s912 {
    signed char[8] pad8;
    int32_t f8;
};

struct s913 {
    signed char[12] pad12;
    int32_t f12;
};

struct s914 {
    signed char[12] pad12;
    void** f12;
};

void fun_4ade() {
    int32_t ecx1;
    struct s910* ebp2;
    int32_t edx3;
    struct s911* ebp4;
    int32_t esi5;
    struct s912* ebp6;
    int32_t edi7;
    struct s913* ebp8;
    void** v9;
    struct s914* ebp10;
    int32_t ebp11;
    int32_t ebp12;
    int32_t ebp13;
    int32_t ebp14;
    int32_t ebp15;
    void** eax16;
    void** v17;
    int32_t ebp18;
    void** v19;
    int32_t ebp20;
    int32_t v21;

    ecx1 = ebp2->f12;
    edx3 = ebp4->f8;
    esi5 = ebp6->f8;
    edi7 = ebp8->f12;
    v9 = ebp10->f12;
    *reinterpret_cast<int32_t*>(ebp11 - 16) = reinterpret_cast<int32_t>(__return_address()) + reinterpret_cast<int32_t>("3ZJHiDX8P4MY6kbCZu0cP6vbByzL6C0hfWn0tvJMFD9Kyy5juZCRzOgabO5hbON5s/Gp8uR71AmPc0hEARHJuFmZarPNekhTIUvoLTb9afSDanA83D+m7TIqWTfB51z30G0KbSaRh13If+jaPCjxaSXE+rnp7xP4bmOKyxHM+ZCs7mgaY3mhbOny8/GUCaR7yEQPc0m4QRHqs9mZexP+8rfB51ztEG0KXeaRh1oIf+jpPCjxeeXE+qtf/bBm7Rw/u8YJfCfCg87eLVRZlk6ekJcSOEUGFy4HCxfuAODNnlTOiwQC3ETJvKd31RN3YgCxCbhBEe+bGnufcpmN6ZvyeTsNEP6zX6wN59epCF/vPRchlwMFeXo8Eg96JmgG19x1seTnyPhH99oQYn/ebSP47ELOiwQg62Mq/mPfUXE3YgCehc1m9rHn9AZ6bgEkTYAe5mgPehx1htfnyPHk3+89FyGXAwVVuxRj3c4LQyDQzHCKyy5juZCRzNO/7H7N+JqIqvch9+M6OLmybzqRn+89FyGXAwVzOrq1+rnjJBOOCPSq31tW50PjEC5jissRzPmQrO5oGmN5oWzp8vPxlAmke8hED3NJuEER6rPZmWb+bDpGVfWjmh5s61ncPno/0r9Qlx/vPQVhlwMjPOfLcAU7Agf32jhif95Qb0QTuMsuY4rRqUWQKmS6zYU7AjAf7z0XIZcDBW4ibgc3g8nIn5ryf2OiZ49UemiLSLe20oEGem4yC1e73k0gbifXqQhw+lHPAHYwIqDsAgf+g4P7nXvlQU21HtzLKhDF27gX2cmbiphVEkXJxKcwSWOzVcFIt4PJy8Xi0NR6aIt+iynCpu0cP6vbByzL6C0hWTo/H7GWupFlWTPRA5kpdlfcdYbArOo4iw+2LgjO5V6FyyoQ6A57zQnIt4PC+vmvTVpWNLCnLjSXvqjaz5eMRJPdl/qj1vDhlVv/SuvH0eDRZAA1UkXJ1T+O/n0Dyci3r0L6+bSNWlY0sKcuGte+qPxoxGjhgY1y");
    *reinterpret_cast<int32_t*>(ebp12 - 20) = ecx1;
    *reinterpret_cast<int32_t*>(ebp13 - 24) = edx3;
    *reinterpret_cast<int32_t*>(ebp14 - 28) = esi5;
    *reinterpret_cast<int32_t*>(ebp15 - 32) = edi7;
    eax16 = _ZNSt6__ndk111char_traitsIcE6lengthEPKc(v9);
    v17 = *reinterpret_cast<void***>(ebp18 - 28);
    v19 = *reinterpret_cast<void***>(ebp20 - 32);
    _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcj(v17, v19, eax16);
    goto v21;
}

/* std::__ndk1::allocator<char>::max_size() const */
void** _ZNKSt6__ndk19allocatorIcE8max_sizeEv(void** a1, void** a2, void** a3, void** a4, int32_t a5) {
    return 0xffffffff;
}

struct s915 {
    signed char[8] pad8;
    int32_t f8;
};

struct s916 {
    signed char[8] pad8;
    void** f8;
};

void fun_40cc() {
    int32_t ecx1;
    struct s915* ebp2;
    void** v3;
    struct s916* ebp4;
    int32_t ebp5;
    int32_t v6;

    ecx1 = ebp2->f8;
    v3 = ebp4->f8;
    *reinterpret_cast<int32_t*>(ebp5 - 8) = ecx1;
    _ZNKSt6__ndk117__compressed_pairINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE5__repES5_E6secondEv(v3);
    goto v6;
}

struct s917 {
    signed char[16] pad16;
    int32_t f16;
};

struct s918 {
    signed char[12] pad12;
    int32_t f12;
};

struct s919 {
    signed char[8] pad8;
    int32_t f8;
};

struct s920 {
    signed char[8] pad8;
    void** f8;
};

struct s921 {
    signed char[12] pad12;
    void** f12;
};

struct s922 {
    signed char[16] pad16;
    void** f16;
};

void fun_38de() {
    int32_t ecx1;
    struct s917* ebp2;
    int32_t edx3;
    struct s918* ebp4;
    int32_t esi5;
    struct s919* ebp6;
    void** edi7;
    struct s920* ebp8;
    void** ebx9;
    struct s921* ebp10;
    int32_t ebp11;
    void** eax12;
    struct s922* ebp13;
    int32_t ebp14;
    int32_t ebp15;
    int32_t ebp16;
    void** v17;
    int32_t v18;
    int32_t v19;

    ecx1 = ebp2->f16;
    edx3 = ebp4->f12;
    esi5 = ebp6->f8;
    edi7 = ebp8->f8;
    ebx9 = ebp10->f12;
    *reinterpret_cast<int32_t*>(ebp11 - 16) = reinterpret_cast<int32_t>(__return_address()) + 0xf646;
    eax12 = ebp13->f16;
    *reinterpret_cast<int32_t*>(ebp14 - 20) = ecx1;
    *reinterpret_cast<int32_t*>(ebp15 - 24) = edx3;
    *reinterpret_cast<int32_t*>(ebp16 - 28) = esi5;
    _ZNSt6__ndk117_DeallocateCaller33__do_deallocate_handle_size_alignEPvjj(edi7, ebx9, eax12, v17, v18);
    goto v19;
}

/* char const* std::__ndk1::addressof<char const>(char const&) */
int32_t _ZNSt6__ndk19addressofIKcEEPT_RS2_(int32_t a1) {
    return a1;
}

struct s923 {
    signed char[8] pad8;
    int32_t f8;
};

struct s924 {
    signed char[8] pad8;
    void** f8;
};

void fun_7bbc() {
    int32_t ecx1;
    struct s923* ebp2;
    void** edx3;
    struct s924* ebp4;
    int32_t ebp5;
    int32_t ebp6;
    int32_t ebp7;
    int32_t eax8;
    void** v9;
    int32_t ebp10;
    int32_t ebp11;
    int32_t eax12;
    void** v13;
    int32_t ebp14;
    int32_t ebp15;
    int32_t eax16;
    int32_t ecx17;
    int32_t ebp18;
    void** v19;
    int32_t ebp20;
    int32_t ebp21;
    int32_t eax22;
    void** v23;
    int32_t ebp24;
    int32_t ebp25;
    void** v26;
    void** eax27;
    uint32_t ecx28;
    int32_t ebp29;
    void** v30;
    int32_t ebp31;
    int32_t ebp32;
    int32_t eax33;
    void** v34;
    int32_t ebp35;
    int32_t ebp36;
    int32_t eax37;
    int32_t ecx38;
    int32_t ebp39;
    void** v40;
    int32_t ebp41;
    int32_t v42;
    int32_t ebp43;
    int32_t v44;
    int32_t ebp45;
    uint32_t v46;
    int32_t ebp47;
    int32_t v48;

    ecx1 = ebp2->f8;
    edx3 = ebp4->f8;
    *reinterpret_cast<int32_t*>(ebp5 - 8) = reinterpret_cast<int32_t>(__return_address()) + 0xb368;
    *reinterpret_cast<int32_t*>(ebp6 - 12) = ecx1;
    *reinterpret_cast<void***>(ebp7 - 16) = edx3;
    eax8 = _ZNKSt6__ndk16vectorIhNS_9allocatorIhEEE4dataEv(edx3);
    v9 = *reinterpret_cast<void***>(ebp10 - 16);
    *reinterpret_cast<int32_t*>(ebp11 - 20) = eax8;
    eax12 = _ZNKSt6__ndk16vectorIhNS_9allocatorIhEEE4dataEv(v9);
    v13 = *reinterpret_cast<void***>(ebp14 - 16);
    *reinterpret_cast<int32_t*>(ebp15 - 24) = eax12;
    eax16 = _ZNKSt6__ndk16vectorIhNS_9allocatorIhEEE8capacityEv(v13);
    ecx17 = *reinterpret_cast<int32_t*>(ebp18 - 24) + eax16;
    v19 = *reinterpret_cast<void***>(ebp20 - 16);
    *reinterpret_cast<int32_t*>(ebp21 - 28) = ecx17;
    eax22 = _ZNKSt6__ndk16vectorIhNS_9allocatorIhEEE4dataEv(v19);
    v23 = *reinterpret_cast<void***>(ebp24 - 16);
    *reinterpret_cast<int32_t*>(ebp25 - 32) = eax22;
    eax27 = _ZNKSt6__ndk16vectorIhNS_9allocatorIhEEE4sizeEv(v23, v26);
    ecx28 = *reinterpret_cast<int32_t*>(ebp29 - 32) + reinterpret_cast<unsigned char>(eax27);
    v30 = *reinterpret_cast<void***>(ebp31 - 16);
    *reinterpret_cast<uint32_t*>(ebp32 - 36) = ecx28;
    eax33 = _ZNKSt6__ndk16vectorIhNS_9allocatorIhEEE4dataEv(v30);
    v34 = *reinterpret_cast<void***>(ebp35 - 16);
    *reinterpret_cast<int32_t*>(ebp36 - 40) = eax33;
    eax37 = _ZNKSt6__ndk16vectorIhNS_9allocatorIhEEE8capacityEv(v34);
    ecx38 = *reinterpret_cast<int32_t*>(ebp39 - 40) + eax37;
    v40 = *reinterpret_cast<void***>(ebp41 - 16);
    v42 = *reinterpret_cast<int32_t*>(ebp43 - 20);
    v44 = *reinterpret_cast<int32_t*>(ebp45 - 28);
    v46 = *reinterpret_cast<uint32_t*>(ebp47 - 36);
    _ZNKSt6__ndk16vectorIhNS_9allocatorIhEEE31__annotate_contiguous_containerEPKvS5_S5_S5_(v40, v42, v44, v46, ecx38);
    goto v48;
}

struct s925 {
    signed char[55048] pad55048;
    void** f55048;
};

/* Cipher::padBytes(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >&) */
void _ZN6Cipher8padBytesERNSt6__ndk112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE(void** a1, void** a2) {
    void** v3;
    void** v4;
    void** ebp5;
    void** v6;
    void** ebx7;
    void** v8;
    struct s925* v9;
    void** v10;
    void** v11;
    void** eax12;
    void** eax13;

    v3 = reinterpret_cast<void**>(__return_address());
    v4 = ebp5;
    v6 = ebx7;
    fun_581c();
    v8 = reinterpret_cast<void**>(&v9->f55048);
    v10 = a1;
    eax12 = _ZNKSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE4sizeEv(a1, v11, v10, v8, v6, v4, v3);
    if (reinterpret_cast<unsigned char>(eax12) & 15) {
        while (eax13 = _ZNKSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE4sizeEv(a1, 0, v10, v8, v6, v4, v3), !!(reinterpret_cast<unsigned char>(eax13) & 15)) {
            _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc(a1, 0, v10);
        }
    }
    goto a1;
}

struct s926 {
    signed char[8] pad8;
    void** f8;
};

struct s927 {
    signed char[12] pad12;
    int32_t f12;
};

struct s928 {
    signed char[12] pad12;
    void* f12;
};

void fun_9a6e() {
    void** edx1;
    struct s926* ebp2;
    int32_t esi3;
    struct s927* ebp4;
    void* edi5;
    struct s928* ebp6;
    void** v7;
    int32_t ebp8;
    int32_t ebp9;
    int32_t v10;

    edx1 = ebp2->f8;
    esi3 = ebp4->f12;
    edi5 = ebp6->f12;
    v7 = ebp2->f8;
    *reinterpret_cast<void***>(ebp8 - 28) = edx1;
    *reinterpret_cast<int32_t*>(ebp9 - 32) = esi3;
    _ZNSt6__ndk116allocator_traitsINS_9allocatorIcEEE39__select_on_container_copy_constructionENS_17integral_constantIbLb0EEERKS2_(v7, edi5);
    goto v10;
}

struct s929 {
    signed char[12] pad12;
    int32_t f12;
};

struct s930 {
    signed char[8] pad8;
    int32_t f8;
};

struct s931 {
    signed char[8] pad8;
    void** f8;
};

struct s932 {
    signed char[12] pad12;
    void** f12;
};

void fun_9abe() {
    int32_t ecx1;
    struct s929* ebp2;
    int32_t edx3;
    struct s930* ebp4;
    void** esi5;
    struct s931* ebp6;
    int32_t ebp7;
    int32_t ebp8;
    int32_t ebp9;
    int32_t ebp10;
    void** v11;
    int32_t eax12;
    int32_t ebp13;
    void** v14;
    struct s932* ebp15;
    int32_t ebp16;
    void** v17;
    void** v18;
    int32_t v19;
    void** eax20;
    void** v21;
    int32_t ebp22;
    int32_t v23;

    ecx1 = ebp2->f12;
    edx3 = ebp4->f8;
    esi5 = ebp6->f8;
    *reinterpret_cast<int32_t*>(ebp7 - 20) = reinterpret_cast<int32_t>(__return_address()) + 0x9466;
    *reinterpret_cast<int32_t*>(ebp8 - 24) = ecx1;
    *reinterpret_cast<int32_t*>(ebp9 - 28) = edx3;
    *reinterpret_cast<void***>(ebp10 - 32) = esi5;
    _ZNSt6__ndk122__compressed_pair_elemINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE5__repELi0ELb0EEC2Ev(esi5, v11);
    eax12 = *reinterpret_cast<int32_t*>(ebp13 - 32);
    v14 = ebp15->f12;
    *reinterpret_cast<int32_t*>(ebp16 - 36) = eax12;
    eax20 = _ZNSt6__ndk17forwardINS_9allocatorIcEEEEOT_RNS_16remove_referenceIS3_E4typeE(v14, v17, v18, v19);
    v21 = *reinterpret_cast<void***>(ebp22 - 36);
    _ZNSt6__ndk122__compressed_pair_elemINS_9allocatorIcEELi1ELb1EEC2IS2_vEEOT_(v21, eax20);
    goto v23;
}

struct s933 {
    signed char[8] pad8;
    int32_t f8;
};

struct s935 {
    signed char[8] pad8;
    void** f8;
};

struct s934 {
    signed char[8] pad8;
    struct s935* f8;
};

void fun_750c() {
    int32_t ecx1;
    struct s933* ebp2;
    void** v3;
    struct s934* ebp4;
    int32_t ebp5;
    int32_t v6;

    ecx1 = ebp2->f8;
    v3 = reinterpret_cast<void**>(&ebp4->f8->f8);
    *reinterpret_cast<int32_t*>(ebp5 - 8) = ecx1;
    _ZNKSt6__ndk117__compressed_pairIPhNS_9allocatorIhEEE6secondEv(v3);
    goto v6;
}

struct s936 {
    signed char[8] pad8;
    int32_t f8;
};

struct s937 {
    signed char[8] pad8;
    void** f8;
};

void fun_74dc() {
    int32_t ecx1;
    struct s936* ebp2;
    void** v3;
    struct s937* ebp4;
    int32_t ebp5;
    int32_t v6;

    ecx1 = ebp2->f8;
    v3 = ebp4->f8;
    *reinterpret_cast<int32_t*>(ebp5 - 20) = ecx1;
    _ZNSt6__ndk116allocator_traitsINS_9allocatorIhEEE10__max_sizeENS_17integral_constantIbLb1EEERKS2_(v3);
    goto v6;
}

void fun_753a(int32_t a1, int32_t a2, int32_t a3, int32_t a4) {
    _ZNSt6__ndk123__libcpp_numeric_limitsIiLb1EE3maxEv(a1);
    goto a4;
}

void fun_889e();

/* std::__ndk1::allocator_traits<std::__ndk1::allocator<unsigned char> >::select_on_container_copy_construction(std::__ndk1::allocator<unsigned char> const&) */
void _ZNSt6__ndk116allocator_traitsINS_9allocatorIhEEE37select_on_container_copy_constructionERKS2_(void* a1, void** a2);

/* std::__ndk1::__vector_base<unsigned char, std::__ndk1::allocator<unsigned char> >::__vector_base(std::__ndk1::allocator<unsigned char>&&) */
void _ZNSt6__ndk113__vector_baseIhNS_9allocatorIhEEEC2EOS2_(void** a1, void** a2);

/* std::__ndk1::vector<unsigned char, std::__ndk1::allocator<unsigned char> >::vector(std::__ndk1::vector<unsigned char, std::__ndk1::allocator<unsigned char> > const&) */
void _ZNSt6__ndk16vectorIhNS_9allocatorIhEEEC2ERKS3_(void** a1, void** a2, void** a3, void** a4, void** a5) {
    void* ebp6;
    void** eax7;
    void** v8;
    void** eax9;
    void** ecx10;
    void** eax11;

    ebp6 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4);
    fun_889e();
    eax7 = _ZNKSt6__ndk113__vector_baseIhNS_9allocatorIhEEE7__allocEv(a2);
    _ZNSt6__ndk116allocator_traitsINS_9allocatorIhEEE37select_on_container_copy_constructionERKS2_(reinterpret_cast<int32_t>(ebp6) - 16, eax7);
    v8 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp6) + 0xfffffff0);
    _ZNSt6__ndk113__vector_baseIhNS_9allocatorIhEEEC2EOS2_(a1, v8);
    eax9 = _ZNKSt6__ndk16vectorIhNS_9allocatorIhEEE4sizeEv(a2, v8);
    if (reinterpret_cast<unsigned char>(eax9) > reinterpret_cast<unsigned char>(0)) {
        _ZNSt6__ndk16vectorIhNS_9allocatorIhEEE11__vallocateEj(a1, eax9);
        ecx10 = *reinterpret_cast<void***>(a2);
        eax11 = *reinterpret_cast<void***>(a2 + 4);
        _ZNSt6__ndk16vectorIhNS_9allocatorIhEEE18__construct_at_endIPhEENS_9enable_ifIXsr21__is_forward_iteratorIT_EE5valueEvE4typeES7_S7_j(a1, ecx10, eax11, eax9);
    }
    goto a1;
}

/* std::__ndk1::__split_buffer<std::__ndk1::vector<unsigned char, std::__ndk1::allocator<unsigned char> >, std::__ndk1::allocator<std::__ndk1::vector<unsigned char, std::__ndk1::allocator<unsigned char> > >&>::~__split_buffer() */
void _ZNSt6__ndk114__split_bufferINS_6vectorIhNS_9allocatorIhEEEERNS2_IS4_EEED2Ev(void** a1, void** a2, void** a3, void** a4) {
    void** v5;
    void** v6;
    void** eax7;
    void** edx8;
    int32_t eax9;

    fun_8f5d();
    _ZNSt6__ndk114__split_bufferINS_6vectorIhNS_9allocatorIhEEEERNS2_IS4_EEE5clearEv(a1);
    if (*reinterpret_cast<void***>(a1)) {
        eax7 = _ZNSt6__ndk114__split_bufferINS_6vectorIhNS_9allocatorIhEEEERNS2_IS4_EEE7__allocEv(a1, v5, v6);
        edx8 = *reinterpret_cast<void***>(a1);
        eax9 = _ZNKSt6__ndk114__split_bufferINS_6vectorIhNS_9allocatorIhEEEERNS2_IS4_EEE8capacityEv(a1);
        _ZNSt6__ndk116allocator_traitsINS_9allocatorINS_6vectorIhNS1_IhEEEEEEE10deallocateERS5_PS4_j(eax7, edx8, eax9);
    }
    goto a1;
}

struct s938 {
    signed char[12] pad12;
    int32_t f12;
};

struct s939 {
    signed char[8] pad8;
    int32_t f8;
};

struct s940 {
    signed char[12] pad12;
    void** f12;
};

struct s941 {
    signed char[8] pad8;
    void** f8;
};

struct s942 {
    signed char[12] pad12;
    int32_t f12;
};

struct s943 {
    signed char[8] pad8;
    int32_t f8;
};

void fun_755e() {
    int32_t ecx1;
    struct s938* ebp2;
    int32_t edx3;
    struct s939* ebp4;
    void** esi5;
    struct s940* ebp6;
    void** edi7;
    struct s941* ebp8;
    int32_t ebp9;
    int32_t ebp10;
    int32_t ebp11;
    void** v12;
    void** v13;
    unsigned char al14;
    int32_t ebp15;
    struct s942* ebp16;
    int32_t ebp17;
    struct s943* ebp18;
    int32_t v19;

    ecx1 = ebp2->f12;
    edx3 = ebp4->f8;
    esi5 = ebp6->f12;
    edi7 = ebp8->f8;
    *reinterpret_cast<int32_t*>(ebp9 - 20) = ecx1;
    *reinterpret_cast<int32_t*>(ebp10 - 24) = edx3;
    al14 = _ZNKSt6__ndk16__lessIjjEclERKjS3_(ebp11 - 16, esi5, edi7, v12, v13);
    if (al14 & 1) {
        *reinterpret_cast<int32_t*>(ebp15 - 28) = ebp16->f12;
    } else {
        *reinterpret_cast<int32_t*>(ebp17 - 28) = ebp18->f8;
    }
    goto v19;
}

struct s944 {
    signed char[8] pad8;
    int32_t f8;
};

struct s945 {
    signed char[8] pad8;
    void** f8;
};

void fun_78ac() {
    int32_t ecx1;
    struct s944* ebp2;
    void** v3;
    struct s945* ebp4;
    int32_t ebp5;
    int32_t v6;

    ecx1 = ebp2->f8;
    v3 = ebp4->f8;
    *reinterpret_cast<int32_t*>(ebp5 - 8) = ecx1;
    _ZNKSt6__ndk122__compressed_pair_elemIPhLi0ELb0EE5__getEv(v3);
    goto v6;
}

/* std::__ndk1::allocator<unsigned char>::allocator() */
void** _ZNSt6__ndk19allocatorIhEC2Ev(void** a1) {
    return a1;
}

struct s946 {
    signed char[8] pad8;
    int32_t f8;
};

struct s947 {
    signed char[8] pad8;
    void** f8;
};

/* std::__ndk1::__compressed_pair_elem<std::__ndk1::allocator<unsigned char>, 1, true>::__get() const */
void** _ZNKSt6__ndk122__compressed_pair_elemINS_9allocatorIhEELi1ELb1EE5__getEv(void** a1);

void fun_761c() {
    int32_t ecx1;
    struct s946* ebp2;
    void** v3;
    struct s947* ebp4;
    int32_t ebp5;
    int32_t v6;

    ecx1 = ebp2->f8;
    v3 = ebp4->f8;
    *reinterpret_cast<int32_t*>(ebp5 - 8) = ecx1;
    _ZNKSt6__ndk122__compressed_pair_elemINS_9allocatorIhEELi1ELb1EE5__getEv(v3);
    goto v6;
}

struct s948 {
    signed char[8] pad8;
    int32_t f8;
};

struct s949 {
    signed char[8] pad8;
    void** f8;
};

void fun_80dc() {
    int32_t ecx1;
    struct s948* ebp2;
    void** v3;
    struct s949* ebp4;
    int32_t ebp5;
    int32_t v6;

    ecx1 = ebp2->f8;
    v3 = ebp4->f8;
    *reinterpret_cast<int32_t*>(ebp5 - 8) = ecx1;
    _ZNKSt6__ndk122__compressed_pair_elemIPNS_6vectorIhNS_9allocatorIhEEEELi0ELb0EE5__getEv(v3);
    goto v6;
}

struct s950 {
    signed char[12] pad12;
    int32_t f12;
};

struct s951 {
    signed char[8] pad8;
    int32_t f8;
};

struct s952 {
    signed char[12] pad12;
    void** f12;
};

void fun_830d() {
    int32_t ecx1;
    struct s950* ebp2;
    int32_t edx3;
    struct s951* ebp4;
    void** v5;
    struct s952* ebp6;
    int32_t ebp7;
    int32_t ebp8;
    void** v9;
    void** v10;
    unsigned char* v11;
    int32_t v12;

    ecx1 = ebp2->f12;
    edx3 = ebp4->f8;
    v5 = ebp6->f12;
    *reinterpret_cast<int32_t*>(ebp7 - 12) = ecx1;
    *reinterpret_cast<int32_t*>(ebp8 - 16) = edx3;
    _ZNSt6__ndk16vectorIhNS_9allocatorIhEEED2Ev(v5, v9, v10, v11);
    goto v12;
}

/* std::__ndk1::allocator_traits<std::__ndk1::allocator<unsigned char> >::__select_on_container_copy_construction(std::__ndk1::integral_constant<bool, false>, std::__ndk1::allocator<unsigned char> const&) */
void** _ZNSt6__ndk116allocator_traitsINS_9allocatorIhEEE39__select_on_container_copy_constructionENS_17integral_constantIbLb0EEERKS2_(void** a1, void* a2) {
    return a1;
}

struct s953 {
    signed char[8] pad8;
    int32_t f8;
};

struct s955 {
    signed char[8] pad8;
    void** f8;
};

struct s954 {
    signed char[8] pad8;
    struct s955* f8;
};

void fun_90ac() {
    int32_t ecx1;
    struct s953* ebp2;
    void** v3;
    struct s954* ebp4;
    int32_t ebp5;
    int32_t v6;

    ecx1 = ebp2->f8;
    v3 = reinterpret_cast<void**>(&ebp4->f8->f8);
    *reinterpret_cast<int32_t*>(ebp5 - 8) = ecx1;
    _ZNKSt6__ndk117__compressed_pairIPNS_6vectorIhNS_9allocatorIhEEEENS2_IS4_EEE6secondEv(v3);
    goto v6;
}

struct s956 {
    signed char[8] pad8;
    int32_t f8;
};

struct s957 {
    signed char[8] pad8;
    void** f8;
};

void fun_907c() {
    int32_t ecx1;
    struct s956* ebp2;
    void** v3;
    struct s957* ebp4;
    int32_t ebp5;
    int32_t v6;

    ecx1 = ebp2->f8;
    v3 = ebp4->f8;
    *reinterpret_cast<int32_t*>(ebp5 - 20) = ecx1;
    _ZNSt6__ndk116allocator_traitsINS_9allocatorINS_6vectorIhNS1_IhEEEEEEE10__max_sizeENS_17integral_constantIbLb1EEERKS5_(v3);
    goto v6;
}

void fun_7d9e();

/* std::__ndk1::__compressed_pair_elem<std::__ndk1::vector<unsigned char, std::__ndk1::allocator<unsigned char> >*, 0, false>::__compressed_pair_elem<decltype(nullptr), void>(decltype(nullptr)&&) */
void _ZNSt6__ndk122__compressed_pair_elemIPNS_6vectorIhNS_9allocatorIhEEEELi0ELb0EEC2IDnvEEOT_(void** a1, void** a2) {
    fun_7d9e();
    _ZNSt6__ndk17forwardIDnEEOT_RNS_16remove_referenceIS1_E4typeE(a2);
    *reinterpret_cast<void***>(a1) = reinterpret_cast<void**>(0);
    goto a1;
}

/* std::__ndk1::allocator<std::__ndk1::vector<unsigned char, std::__ndk1::allocator<unsigned char> > >& std::__ndk1::forward<std::__ndk1::allocator<std::__ndk1::vector<unsigned char, std::__ndk1::allocator<unsigned char> > >&>(std::__ndk1::remove_reference<std::__ndk1::allocator<std::__ndk1::vector<unsigned char, std::__ndk1::allocator<unsigned char> > >&>::type&) */
void** _ZNSt6__ndk17forwardIRNS_9allocatorINS_6vectorIhNS1_IhEEEEEEEEOT_RNS_16remove_referenceIS7_E4typeE(void** a1, void** a2) {
    return a1;
}

void fun_92de();

/* std::__ndk1::__compressed_pair_elem<std::__ndk1::allocator<std::__ndk1::vector<unsigned char, std::__ndk1::allocator<unsigned char> > >&, 1, false>::__compressed_pair_elem<std::__ndk1::allocator<std::__ndk1::vector<unsigned char, std::__ndk1::allocator<unsigned char> > >&, void>(std::__ndk1::allocator<std::__ndk1::vector<unsigned char, std::__ndk1::allocator<unsigned char> > >&) */
void _ZNSt6__ndk122__compressed_pair_elemIRNS_9allocatorINS_6vectorIhNS1_IhEEEEEELi1ELb0EEC2IS6_vEEOT_(void*** a1, void** a2) {
    void** v3;
    void** eax4;

    fun_92de();
    eax4 = _ZNSt6__ndk17forwardIRNS_9allocatorINS_6vectorIhNS1_IhEEEEEEEEOT_RNS_16remove_referenceIS7_E4typeE(a2, v3);
    *a1 = eax4;
    goto a1;
}

/* std::__ndk1::__compressed_pair_elem<std::__ndk1::vector<unsigned char, std::__ndk1::allocator<unsigned char> >*, 0, false>::__get() */
void** _ZNSt6__ndk122__compressed_pair_elemIPNS_6vectorIhNS_9allocatorIhEEEELi0ELb0EE5__getEv(void** a1) {
    return a1;
}

/* std::__ndk1::vector<std::__ndk1::vector<unsigned char, std::__ndk1::allocator<unsigned char> >, std::__ndk1::allocator<std::__ndk1::vector<unsigned char, std::__ndk1::allocator<unsigned char> > > >::data() const */
int32_t _ZNKSt6__ndk16vectorINS0_IhNS_9allocatorIhEEEENS1_IS3_EEE4dataEv(void** a1) {
    void** v2;
    void** v3;
    void** v4;
    void** ebx5;

    fun_7fac();
    v2 = *reinterpret_cast<void***>(a1);
    _ZNSt6__ndk116__to_raw_pointerINS_6vectorIhNS_9allocatorIhEEEEEEPT_S6_(v2, v3, v4, a1, ebx5);
    goto a1;
}

/* std::__ndk1::vector<std::__ndk1::vector<unsigned char, std::__ndk1::allocator<unsigned char> >, std::__ndk1::allocator<std::__ndk1::vector<unsigned char, std::__ndk1::allocator<unsigned char> > > >::__annotate_contiguous_container(void const*, void const*, void const*, void const*) const */
uint32_t _ZNKSt6__ndk16vectorINS0_IhNS_9allocatorIhEEEENS1_IS3_EEE31__annotate_contiguous_containerEPKvS7_S7_S7_(void** a1, int32_t a2, uint32_t a3, uint32_t a4, uint32_t a5) {
    return a5;
}

void fun_875c();

/* std::__ndk1::__compressed_pair<std::__ndk1::vector<unsigned char, std::__ndk1::allocator<unsigned char> >*, std::__ndk1::allocator<std::__ndk1::vector<unsigned char, std::__ndk1::allocator<unsigned char> > > >::first() */
void _ZNSt6__ndk117__compressed_pairIPNS_6vectorIhNS_9allocatorIhEEEENS2_IS4_EEE5firstEv(void** a1) {
    fun_875c();
    _ZNSt6__ndk122__compressed_pair_elemIPNS_6vectorIhNS_9allocatorIhEEEELi0ELb0EE5__getEv(a1);
    goto a1;
}

void fun_98ad();

/* std::__ndk1::__split_buffer<std::__ndk1::vector<unsigned char, std::__ndk1::allocator<unsigned char> >, std::__ndk1::allocator<std::__ndk1::vector<unsigned char, std::__ndk1::allocator<unsigned char> > >&>::__destruct_at_end(std::__ndk1::vector<unsigned char, std::__ndk1::allocator<unsigned char> >*) */
void _ZNSt6__ndk114__split_bufferINS_6vectorIhNS_9allocatorIhEEEERNS2_IS4_EEE17__destruct_at_endEPS4_(void** a1, void** a2, void** a3, int32_t a4);

/* std::__ndk1::__split_buffer<std::__ndk1::vector<unsigned char, std::__ndk1::allocator<unsigned char> >, std::__ndk1::allocator<std::__ndk1::vector<unsigned char, std::__ndk1::allocator<unsigned char> > >&>::clear() */
void _ZNSt6__ndk114__split_bufferINS_6vectorIhNS_9allocatorIhEEEERNS2_IS4_EEE5clearEv(void** a1) {
    void** esi2;
    int32_t esi3;

    fun_98ad();
    esi2 = *reinterpret_cast<void***>(a1 + 4);
    _ZNSt6__ndk114__split_bufferINS_6vectorIhNS_9allocatorIhEEEERNS2_IS4_EEE17__destruct_at_endEPS4_(a1, esi2, a1, esi3);
    goto a1;
}

struct s958 {
    signed char[8] pad8;
    int32_t f8;
};

struct s959 {
    signed char[8] pad8;
    void** f8;
};

void fun_9a3c() {
    int32_t ecx1;
    struct s958* ebp2;
    void** v3;
    struct s959* ebp4;
    int32_t ebp5;
    int32_t v6;

    ecx1 = ebp2->f8;
    v3 = ebp4->f8;
    *reinterpret_cast<int32_t*>(ebp5 - 8) = ecx1;
    _ZNKSt6__ndk122__compressed_pair_elemIPNS_6vectorIhNS_9allocatorIhEEEELi0ELb0EE5__getEv(v3);
    goto v6;
}

struct s960 {
    signed char[8] pad8;
    int32_t f8;
};

struct s961 {
    signed char[12] pad12;
    int32_t f12;
};

struct s962 {
    signed char[8] pad8;
    int32_t f8;
};

struct s963 {
    signed char[8] pad8;
    void** f8;
};

void fun_997d() {
    int32_t esi1;
    struct s960* ebp2;
    int32_t ebp3;
    int32_t ebp4;
    struct s961* ebp5;
    int32_t ebp6;
    void** v7;
    int32_t ebp8;
    void** v9;
    void** v10;
    void** eax11;
    void** edx12;
    int32_t ebp13;
    int32_t ebp14;
    void** v15;
    void** v16;
    void** v17;
    void** eax18;
    void** v19;
    int32_t ebp20;
    int32_t v21;

    esi1 = ebp2->f8;
    *reinterpret_cast<int32_t*>(ebp3 - 20) = reinterpret_cast<int32_t>(__return_address()) + 0x95a7;
    *reinterpret_cast<int32_t*>(ebp4 - 24) = esi1;
    while (ebp5->f12 != (*reinterpret_cast<struct s962**>(ebp6 - 24))->f8) {
        v7 = *reinterpret_cast<void***>(ebp8 - 24);
        eax11 = _ZNSt6__ndk114__split_bufferINS_6vectorIhNS_9allocatorIhEEEERNS2_IS4_EEE7__allocEv(v7, v9, v10);
        edx12 = (*reinterpret_cast<struct s963**>(ebp13 - 24))->f8 + 0xfffffff4;
        (*reinterpret_cast<struct s963**>(ebp13 - 24))->f8 = edx12;
        *reinterpret_cast<void***>(ebp14 - 28) = eax11;
        eax18 = _ZNSt6__ndk116__to_raw_pointerINS_6vectorIhNS_9allocatorIhEEEEEEPT_S6_(edx12, v9, v15, v16, v17);
        v9 = eax18;
        v19 = *reinterpret_cast<void***>(ebp20 - 28);
        _ZNSt6__ndk116allocator_traitsINS_9allocatorINS_6vectorIhNS1_IhEEEEEEE7destroyIS4_EEvRS5_PT_(v19, v9);
    }
    goto v21;
}

void fun_39ad();

/* std::__ndk1::_DeallocateCaller::__do_call(void*) */
void _ZNSt6__ndk117_DeallocateCaller9__do_callEPv(void** a1, void** a2, void** a3, int32_t a4);

/* std::__ndk1::_DeallocateCaller::__do_deallocate_handle_size(void*, unsigned int) */
void _ZNSt6__ndk117_DeallocateCaller27__do_deallocate_handle_sizeEPvj(void** a1, void** a2) {
    int32_t esi3;

    fun_39ad();
    _ZNSt6__ndk117_DeallocateCaller9__do_callEPv(a1, a1, a2, esi3);
    goto a1;
}

void fun_979e();

/* std::__ndk1::remove_reference<std::__ndk1::allocator<unsigned char>&>::type&& std::__ndk1::move<std::__ndk1::allocator<unsigned char>&>(std::__ndk1::allocator<unsigned char>&) */
void** _ZNSt6__ndk14moveIRNS_9allocatorIhEEEEONS_16remove_referenceIT_E4typeEOS5_(void** a1);

/* std::__ndk1::vector<unsigned char, std::__ndk1::allocator<unsigned char> >::vector(std::__ndk1::vector<unsigned char, std::__ndk1::allocator<unsigned char> >&&) */
void _ZNSt6__ndk16vectorIhNS_9allocatorIhEEEC2EOS3_(void** a1, void** a2, void** a3, void** a4, void** a5) {
    void** v6;
    void** eax7;
    void** eax8;
    void** eax9;
    void* eax10;
    void** eax11;
    void** eax12;

    fun_979e();
    eax7 = _ZNSt6__ndk113__vector_baseIhNS_9allocatorIhEEE7__allocEv(a2, a2, v6);
    eax8 = _ZNSt6__ndk14moveIRNS_9allocatorIhEEEEONS_16remove_referenceIT_E4typeEOS5_(eax7);
    _ZNSt6__ndk113__vector_baseIhNS_9allocatorIhEEEC2EOS2_(a1, eax8);
    *reinterpret_cast<void***>(a1) = *reinterpret_cast<void***>(a2);
    *reinterpret_cast<void***>(a1 + 4) = *reinterpret_cast<void***>(a2 + 4);
    eax9 = _ZNSt6__ndk113__vector_baseIhNS_9allocatorIhEEE9__end_capEv(a2, eax8);
    eax10 = *eax9;
    eax11 = _ZNSt6__ndk113__vector_baseIhNS_9allocatorIhEEE9__end_capEv(a1, eax8);
    *eax11 = eax10;
    eax12 = _ZNSt6__ndk113__vector_baseIhNS_9allocatorIhEEE9__end_capEv(a2, eax8);
    *eax12 = reinterpret_cast<void*>(0);
    *reinterpret_cast<void***>(a2 + 4) = reinterpret_cast<void**>(0);
    *reinterpret_cast<void***>(a2) = reinterpret_cast<void**>(0);
    goto a1;
}

/* std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::__zero() */
void _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6__zeroEv(void** a1) {
    void** v2;
    void** v3;
    void** ebx4;
    void** ebp5;
    struct s3* eax6;
    struct s3* v7;
    uint32_t v8;

    fun_a53c();
    eax6 = _ZNSt6__ndk117__compressed_pairINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE5__repES5_E5firstEv(a1, a1, v2, v3, ebx4, ebp5, __return_address());
    v7 = eax6;
    v8 = 0;
    while (v8 < 3) {
        *reinterpret_cast<void***>(reinterpret_cast<int32_t>(v7) + v8 * 4) = reinterpret_cast<void**>(0);
        ++v8;
    }
    goto a1;
}

void fun_69cc();

/* std::__ndk1::__vector_base<std::__ndk1::vector<unsigned char, std::__ndk1::allocator<unsigned char> >, std::__ndk1::allocator<std::__ndk1::vector<unsigned char, std::__ndk1::allocator<unsigned char> > > >::__vector_base() */
void _ZNSt6__ndk113__vector_baseINS_6vectorIhNS_9allocatorIhEEEENS2_IS4_EEEC2Ev(void** a1);

/* std::__ndk1::vector<std::__ndk1::vector<unsigned char, std::__ndk1::allocator<unsigned char> >, std::__ndk1::allocator<std::__ndk1::vector<unsigned char, std::__ndk1::allocator<unsigned char> > > >::vector() */
void _ZNSt6__ndk16vectorINS0_IhNS_9allocatorIhEEEENS1_IS3_EEEC2Ev(void** a1) {
    fun_69cc();
    _ZNSt6__ndk113__vector_baseINS_6vectorIhNS_9allocatorIhEEEENS2_IS4_EEEC2Ev(a1);
    goto a1;
}

struct s964 {
    signed char[8] pad8;
    int32_t f8;
};

struct s965 {
    signed char[8] pad8;
    void** f8;
};

void fun_3cec() {
    int32_t ecx1;
    struct s964* ebp2;
    void** v3;
    struct s965* ebp4;
    int32_t ebp5;
    int32_t v6;

    ecx1 = ebp2->f8;
    v3 = ebp4->f8;
    *reinterpret_cast<int32_t*>(ebp5 - 8) = ecx1;
    _ZNSt6__ndk19allocatorIcEC2Ev(v3);
    goto v6;
}

void fun_4b3e();

/* std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::append(char const*, unsigned int) */
void _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcj(void** a1, void** a2, void** a3) {
    void** v4;
    void** v5;
    void** v6;
    void** eax7;
    void** v8;
    void** v9;
    void** v10;
    void** v11;
    void** v12;
    void** v13;
    void** eax14;
    void** v15;
    void** v16;
    void** v17;
    void** eax18;
    void** v19;
    void** v20;
    void** eax21;
    void** v22;
    void** v23;
    void** v24;
    void** v25;
    void** v26;
    void** v27;
    void** v28;
    void** v29;

    fun_4b3e();
    eax7 = _ZNKSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE8capacityEv(a1, v4, v5, v6);
    eax14 = _ZNKSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE4sizeEv(a1, v8, v9, v10, v11, v12, v13);
    if (reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(eax7) - reinterpret_cast<unsigned char>(eax14)) < reinterpret_cast<unsigned char>(a3)) {
        _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE21__grow_by_and_replaceEjjjjjjPKc(a1, eax7, reinterpret_cast<unsigned char>(eax14) + reinterpret_cast<unsigned char>(a3) - reinterpret_cast<unsigned char>(eax7), eax14, eax14, 0, a3, a2);
    } else {
        if (a3) {
            eax18 = _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE13__get_pointerEv(a1, v15, v16, v17);
            eax21 = _ZNSt6__ndk116__to_raw_pointerIcEEPT_S2_(eax18, v19, v20);
            _ZNSt6__ndk111char_traitsIcE4copyEPcPKcj(reinterpret_cast<unsigned char>(eax21) + reinterpret_cast<unsigned char>(eax14), a2, a3);
            _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE10__set_sizeEj(a1, reinterpret_cast<unsigned char>(a3) + reinterpret_cast<unsigned char>(eax14), a3);
            _ZNSt6__ndk111char_traitsIcE6assignERcRKc(reinterpret_cast<unsigned char>(eax21) + reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(a3) + reinterpret_cast<unsigned char>(eax14)), reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 - 25, a3, v22, v23, v24, v25, v26, v27, v28, v29);
        }
    }
    goto a1;
}

void fun_414c();

/* std::__ndk1::__compressed_pair_elem<std::__ndk1::allocator<char>, 1, true>::__get() const */
void** _ZNKSt6__ndk122__compressed_pair_elemINS_9allocatorIcEELi1ELb1EE5__getEv(void** a1);

/* std::__ndk1::__compressed_pair<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::__rep, std::__ndk1::allocator<char> >::second() const */
void _ZNKSt6__ndk117__compressed_pairINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE5__repES5_E6secondEv(void** a1) {
    fun_414c();
    _ZNKSt6__ndk122__compressed_pair_elemINS_9allocatorIcEELi1ELb1EE5__getEv(a1);
    goto a1;
}

/* std::__ndk1::_DeallocateCaller::__do_deallocate_handle_size_align(void*, unsigned int, unsigned int) */
void _ZNSt6__ndk117_DeallocateCaller33__do_deallocate_handle_size_alignEPvjj(void** a1, void** a2, void** a3, void** a4, int32_t a5) {
    fun_395e();
    _ZNSt6__ndk117_DeallocateCaller27__do_deallocate_handle_sizeEPvj(a1, a2);
    goto a1;
}

/* std::__ndk1::vector<unsigned char, std::__ndk1::allocator<unsigned char> >::size() const */
void** _ZNKSt6__ndk16vectorIhNS_9allocatorIhEEE4sizeEv(void** a1, void** a2) {
    void** edx3;

    edx3 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(a1 + 4)) - reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(a1)));
    return edx3;
}

/* std::__ndk1::allocator_traits<std::__ndk1::allocator<char> >::__select_on_container_copy_construction(std::__ndk1::integral_constant<bool, false>, std::__ndk1::allocator<char> const&) */
void** _ZNSt6__ndk116allocator_traitsINS_9allocatorIcEEE39__select_on_container_copy_constructionENS_17integral_constantIbLb0EEERKS2_(void** a1, void* a2) {
    return a1;
}

/* std::__ndk1::allocator<char>&& std::__ndk1::forward<std::__ndk1::allocator<char> >(std::__ndk1::remove_reference<std::__ndk1::allocator<char> >::type&) */
void** _ZNSt6__ndk17forwardINS_9allocatorIcEEEEOT_RNS_16remove_referenceIS3_E4typeE(void** a1, void** a2, void** a3, int32_t a4) {
    return a1;
}

void fun_9b6d();

/* std::__ndk1::__compressed_pair_elem<std::__ndk1::allocator<char>, 1, true>::__compressed_pair_elem<std::__ndk1::allocator<char>, void>(std::__ndk1::allocator<char>&&) */
void _ZNSt6__ndk122__compressed_pair_elemINS_9allocatorIcEELi1ELb1EEC2IS2_vEEOT_(void** a1, void** a2) {
    int32_t esi3;

    fun_9b6d();
    _ZNSt6__ndk17forwardINS_9allocatorIcEEEEOT_RNS_16remove_referenceIS3_E4typeE(a2, a1, a2, esi3);
    goto a1;
}

/* std::__ndk1::__compressed_pair<unsigned char*, std::__ndk1::allocator<unsigned char> >::second() const */
void _ZNKSt6__ndk117__compressed_pairIPhNS_9allocatorIhEEE6secondEv(void** a1) {
    fun_761c();
    _ZNKSt6__ndk122__compressed_pair_elemINS_9allocatorIhEELi1ELb1EE5__getEv(a1);
    goto a1;
}

/* std::__ndk1::allocator_traits<std::__ndk1::allocator<unsigned char> >::__max_size(std::__ndk1::integral_constant<bool, true>, std::__ndk1::allocator<unsigned char> const&) */
void _ZNSt6__ndk116allocator_traitsINS_9allocatorIhEEE10__max_sizeENS_17integral_constantIbLb1EEERKS2_(void** a1) {
    void** v2;
    void** v3;
    int32_t ebx4;

    fun_75cc();
    _ZNKSt6__ndk19allocatorIhE8max_sizeEv(a1, v2, a1, v3, ebx4);
    goto a1;
}

/* std::__ndk1::__libcpp_numeric_limits<int, true>::max() */
int32_t _ZNSt6__ndk123__libcpp_numeric_limitsIiLb1EE3maxEv(int32_t a1) {
    return 0x7fffffff;
}

struct s966 {
    signed char[12] pad12;
    int32_t f12;
};

struct s967 {
    signed char[8] pad8;
    int32_t f8;
};

struct s968 {
    signed char[8] pad8;
    int32_t f8;
};

struct s969 {
    signed char[12] pad12;
    void** f12;
};

struct s970 {
    signed char[12] pad12;
    void** f12;
};

struct s972 {
    void** f0;
    signed char[3] pad4;
    void** f4;
};

struct s971 {
    signed char[12] pad12;
    struct s972* f12;
};

void fun_889e() {
    int32_t ecx1;
    struct s966* ebp2;
    int32_t edx3;
    struct s967* ebp4;
    int32_t esi5;
    struct s968* ebp6;
    void** v7;
    struct s969* ebp8;
    int32_t ebp9;
    int32_t ebp10;
    int32_t ebp11;
    int32_t ebp12;
    int32_t ebp13;
    void** eax14;
    void* ebp15;
    void** v16;
    int32_t ebp17;
    void** v18;
    void* ebp19;
    void** v20;
    struct s970* ebp21;
    void** eax22;
    int32_t ebp23;
    int32_t ebp24;
    void** v25;
    int32_t ebp26;
    void** v27;
    int32_t ebp28;
    void** ecx29;
    struct s971* ebp30;
    void** eax31;
    void** v32;
    int32_t ebp33;
    void** v34;
    int32_t ebp35;
    int32_t v36;

    ecx1 = ebp2->f12;
    edx3 = ebp4->f8;
    esi5 = ebp6->f8;
    v7 = ebp8->f12;
    *reinterpret_cast<int32_t*>(ebp9 - 32) = reinterpret_cast<int32_t>(__return_address()) + 0xa686;
    *reinterpret_cast<int32_t*>(ebp10 - 36) = ecx1;
    *reinterpret_cast<int32_t*>(ebp11 - 40) = edx3;
    *reinterpret_cast<int32_t*>(ebp12 - 44) = esi5;
    *reinterpret_cast<int32_t*>(ebp13 - 48) = esi5;
    eax14 = _ZNKSt6__ndk113__vector_baseIhNS_9allocatorIhEEE7__allocEv(v7);
    _ZNSt6__ndk116allocator_traitsINS_9allocatorIhEEE37select_on_container_copy_constructionERKS2_(reinterpret_cast<int32_t>(ebp15) - 16, eax14);
    v16 = *reinterpret_cast<void***>(ebp17 - 48);
    v18 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp19) + 0xfffffff0);
    _ZNSt6__ndk113__vector_baseIhNS_9allocatorIhEEEC2EOS2_(v16, v18);
    v20 = ebp21->f12;
    eax22 = _ZNKSt6__ndk16vectorIhNS_9allocatorIhEEE4sizeEv(v20, v18);
    *reinterpret_cast<void***>(ebp23 - 20) = eax22;
    if (*reinterpret_cast<uint32_t*>(ebp24 - 20) > 0) {
        v25 = *reinterpret_cast<void***>(ebp26 - 20);
        v27 = *reinterpret_cast<void***>(ebp28 - 44);
        _ZNSt6__ndk16vectorIhNS_9allocatorIhEEE11__vallocateEj(v27, v25);
        ecx29 = ebp30->f12->f0;
        eax31 = ebp30->f12->f4;
        v32 = *reinterpret_cast<void***>(ebp33 - 20);
        v34 = *reinterpret_cast<void***>(ebp35 - 44);
        _ZNSt6__ndk16vectorIhNS_9allocatorIhEEE18__construct_at_endIPhEENS_9enable_ifIXsr21__is_forward_iteratorIT_EE5valueEvE4typeES7_S7_j(v34, ecx29, eax31, v32);
    }
    goto v36;
}

/* std::__ndk1::__compressed_pair_elem<unsigned char*, 0, false>::__get() const */
void** _ZNKSt6__ndk122__compressed_pair_elemIPhLi0ELb0EE5__getEv(void** a1) {
    return a1;
}

/* std::__ndk1::__compressed_pair_elem<std::__ndk1::allocator<unsigned char>, 1, true>::__get() const */
void** _ZNKSt6__ndk122__compressed_pair_elemINS_9allocatorIhEELi1ELb1EE5__getEv(void** a1) {
    return a1;
}

/* std::__ndk1::__compressed_pair_elem<std::__ndk1::vector<unsigned char, std::__ndk1::allocator<unsigned char> >*, 0, false>::__get() const */
void** _ZNKSt6__ndk122__compressed_pair_elemIPNS_6vectorIhNS_9allocatorIhEEEELi0ELb0EE5__getEv(void** a1) {
    return a1;
}

struct s973 {
    signed char[16] pad16;
    int32_t f16;
};

struct s974 {
    signed char[12] pad12;
    int32_t f12;
};

struct s975 {
    signed char[8] pad8;
    int32_t f8;
};

struct s976 {
    signed char[8] pad8;
    int32_t f8;
};

struct s977 {
    signed char[12] pad12;
    void** f12;
};

struct s978 {
    signed char[16] pad16;
    void** f16;
};

/* std::__ndk1::allocator<unsigned char>&& std::__ndk1::forward<std::__ndk1::allocator<unsigned char> >(std::__ndk1::remove_reference<std::__ndk1::allocator<unsigned char> >::type&) */
void** _ZNSt6__ndk17forwardINS_9allocatorIhEEEEOT_RNS_16remove_referenceIS3_E4typeE(void** a1, void** a2, void** a3, void** a4);

/* std::__ndk1::__compressed_pair_elem<std::__ndk1::allocator<unsigned char>, 1, true>::__compressed_pair_elem<std::__ndk1::allocator<unsigned char>, void>(std::__ndk1::allocator<unsigned char>&&) */
void _ZNSt6__ndk122__compressed_pair_elemINS_9allocatorIhEELi1ELb1EEC2IS2_vEEOT_(void** a1, void** a2);

void fun_8b6e() {
    int32_t ecx1;
    struct s973* ebp2;
    int32_t edx3;
    struct s974* ebp4;
    int32_t esi5;
    struct s975* ebp6;
    int32_t edi7;
    struct s976* ebp8;
    int32_t ebp9;
    void** v10;
    struct s977* ebp11;
    int32_t ebp12;
    int32_t ebp13;
    int32_t ebp14;
    int32_t ebp15;
    int32_t ebp16;
    void** eax17;
    void** v18;
    int32_t ebp19;
    int32_t eax20;
    int32_t ebp21;
    void** v22;
    struct s978* ebp23;
    int32_t ebp24;
    void** v25;
    void** v26;
    void** eax27;
    void** v28;
    int32_t ebp29;
    int32_t v30;

    ecx1 = ebp2->f16;
    edx3 = ebp4->f12;
    esi5 = ebp6->f8;
    edi7 = ebp8->f8;
    *reinterpret_cast<int32_t*>(ebp9 - 16) = reinterpret_cast<int32_t>(__return_address()) + 0xa3b6;
    v10 = ebp11->f12;
    *reinterpret_cast<int32_t*>(ebp12 - 20) = edi7;
    *reinterpret_cast<int32_t*>(ebp13 - 24) = ecx1;
    *reinterpret_cast<int32_t*>(ebp14 - 28) = edx3;
    *reinterpret_cast<int32_t*>(ebp15 - 32) = esi5;
    *reinterpret_cast<int32_t*>(ebp16 - 36) = edi7;
    eax17 = _ZNSt6__ndk17forwardIDnEEOT_RNS_16remove_referenceIS1_E4typeE(v10);
    v18 = *reinterpret_cast<void***>(ebp19 - 20);
    _ZNSt6__ndk122__compressed_pair_elemIPhLi0ELb0EEC2IDnvEEOT_(v18, eax17);
    eax20 = *reinterpret_cast<int32_t*>(ebp21 - 36);
    v22 = ebp23->f16;
    *reinterpret_cast<int32_t*>(ebp24 - 40) = eax20;
    eax27 = _ZNSt6__ndk17forwardINS_9allocatorIhEEEEOT_RNS_16remove_referenceIS3_E4typeE(v22, eax17, v25, v26);
    v28 = *reinterpret_cast<void***>(ebp29 - 40);
    _ZNSt6__ndk122__compressed_pair_elemINS_9allocatorIhEELi1ELb1EEC2IS2_vEEOT_(v28, eax27);
    goto v30;
}

struct s979 {
    signed char[12] pad12;
    int32_t f12;
};

struct s980 {
    signed char[8] pad8;
    int32_t f8;
};

struct s981 {
    signed char[8] pad8;
    void** f8;
};

struct s982 {
    int32_t f0;
    int32_t f4;
};

struct s983 {
    signed char[12] pad12;
    void** f12;
};

/* std::__ndk1::__compressed_pair<unsigned char*, std::__ndk1::allocator<unsigned char> >::__compressed_pair<decltype(nullptr), std::__ndk1::allocator<unsigned char> >(decltype(nullptr)&&, std::__ndk1::allocator<unsigned char>&&) */
void _ZNSt6__ndk117__compressed_pairIPhNS_9allocatorIhEEEC2IDnS3_EEOT_OT0_(void** a1, void** a2, void** a3);

void fun_89ee() {
    int32_t ecx1;
    struct s979* ebp2;
    int32_t edx3;
    struct s980* ebp4;
    void** esi5;
    struct s981* ebp6;
    int32_t ebp7;
    int32_t ebp8;
    int32_t ebp9;
    int32_t ebp10;
    struct s982* eax11;
    int32_t ebp12;
    int32_t ebp13;
    void** v14;
    struct s983* ebp15;
    int32_t ebp16;
    void** eax17;
    void** v18;
    int32_t ebp19;
    void* ebp20;
    int32_t v21;

    ecx1 = ebp2->f12;
    edx3 = ebp4->f8;
    esi5 = ebp6->f8;
    *reinterpret_cast<int32_t*>(ebp7 - 20) = reinterpret_cast<int32_t>(__return_address()) + 0xa536;
    *reinterpret_cast<int32_t*>(ebp8 - 24) = ecx1;
    *reinterpret_cast<int32_t*>(ebp9 - 28) = edx3;
    *reinterpret_cast<void***>(ebp10 - 32) = esi5;
    _ZNSt6__ndk120__vector_base_commonILb1EEC2Ev(esi5);
    eax11 = *reinterpret_cast<struct s982**>(ebp12 - 32);
    eax11->f0 = 0;
    eax11->f4 = 0;
    *reinterpret_cast<int32_t*>(ebp13 - 16) = 0;
    v14 = ebp15->f12;
    *reinterpret_cast<int32_t*>(ebp16 - 36) = reinterpret_cast<int32_t>(eax11 + 1);
    eax17 = _ZNSt6__ndk14moveIRNS_9allocatorIhEEEEONS_16remove_referenceIT_E4typeEOS5_(v14);
    v18 = *reinterpret_cast<void***>(ebp19 - 36);
    _ZNSt6__ndk117__compressed_pairIPhNS_9allocatorIhEEEC2IDnS3_EEOT_OT0_(v18, reinterpret_cast<int32_t>(ebp20) + 0xfffffff0, eax17);
    goto v21;
}

void fun_912c();

/* std::__ndk1::__compressed_pair_elem<std::__ndk1::allocator<std::__ndk1::vector<unsigned char, std::__ndk1::allocator<unsigned char> > >, 1, true>::__get() const */
void** _ZNKSt6__ndk122__compressed_pair_elemINS_9allocatorINS_6vectorIhNS1_IhEEEEEELi1ELb1EE5__getEv(void** a1);

/* std::__ndk1::__compressed_pair<std::__ndk1::vector<unsigned char, std::__ndk1::allocator<unsigned char> >*, std::__ndk1::allocator<std::__ndk1::vector<unsigned char, std::__ndk1::allocator<unsigned char> > > >::second() const */
void _ZNKSt6__ndk117__compressed_pairIPNS_6vectorIhNS_9allocatorIhEEEENS2_IS4_EEE6secondEv(void** a1) {
    fun_912c();
    _ZNKSt6__ndk122__compressed_pair_elemINS_9allocatorINS_6vectorIhNS1_IhEEEEEELi1ELb1EE5__getEv(a1);
    goto a1;
}

void fun_90dc();

/* std::__ndk1::allocator_traits<std::__ndk1::allocator<std::__ndk1::vector<unsigned char, std::__ndk1::allocator<unsigned char> > > >::__max_size(std::__ndk1::integral_constant<bool, true>, std::__ndk1::allocator<std::__ndk1::vector<unsigned char, std::__ndk1::allocator<unsigned char> > > const&) */
void _ZNSt6__ndk116allocator_traitsINS_9allocatorINS_6vectorIhNS1_IhEEEEEEE10__max_sizeENS_17integral_constantIbLb1EEERKS5_(void** a1) {
    void** v2;
    void** v3;
    int32_t ebx4;

    fun_90dc();
    _ZNKSt6__ndk19allocatorINS_6vectorIhNS0_IhEEEEE8max_sizeEv(a1, v2, a1, v3, ebx4);
    goto a1;
}

struct s984 {
    signed char[12] pad12;
    int32_t f12;
};

struct s985 {
    signed char[8] pad8;
    int32_t f8;
};

struct s986 {
    signed char[8] pad8;
    int32_t f8;
};

struct s987 {
    signed char[12] pad12;
    void** f12;
};

void fun_7d9e() {
    int32_t ecx1;
    struct s984* ebp2;
    int32_t edx3;
    struct s985* ebp4;
    int32_t esi5;
    struct s986* ebp6;
    void** v7;
    struct s987* ebp8;
    int32_t ebp9;
    int32_t ebp10;
    int32_t ebp11;
    int32_t ebp12;
    int32_t v13;

    ecx1 = ebp2->f12;
    edx3 = ebp4->f8;
    esi5 = ebp6->f8;
    v7 = ebp8->f12;
    *reinterpret_cast<int32_t*>(ebp9 - 16) = ecx1;
    *reinterpret_cast<int32_t*>(ebp10 - 20) = edx3;
    *reinterpret_cast<int32_t*>(ebp11 - 24) = esi5;
    _ZNSt6__ndk17forwardIDnEEOT_RNS_16remove_referenceIS1_E4typeE(v7);
    **reinterpret_cast<int32_t**>(ebp12 - 24) = 0;
    goto v13;
}

struct s988 {
    signed char[12] pad12;
    int32_t f12;
};

struct s989 {
    signed char[8] pad8;
    int32_t f8;
};

struct s990 {
    signed char[8] pad8;
    int32_t f8;
};

struct s991 {
    signed char[12] pad12;
    void** f12;
};

void fun_92de() {
    int32_t ecx1;
    struct s988* ebp2;
    int32_t edx3;
    struct s989* ebp4;
    int32_t esi5;
    struct s990* ebp6;
    void** v7;
    struct s991* ebp8;
    int32_t ebp9;
    int32_t ebp10;
    int32_t ebp11;
    void** v12;
    void** eax13;
    int32_t ebp14;
    int32_t v15;

    ecx1 = ebp2->f12;
    edx3 = ebp4->f8;
    esi5 = ebp6->f8;
    v7 = ebp8->f12;
    *reinterpret_cast<int32_t*>(ebp9 - 16) = ecx1;
    *reinterpret_cast<int32_t*>(ebp10 - 20) = edx3;
    *reinterpret_cast<int32_t*>(ebp11 - 24) = esi5;
    eax13 = _ZNSt6__ndk17forwardIRNS_9allocatorINS_6vectorIhNS1_IhEEEEEEEEOT_RNS_16remove_referenceIS7_E4typeE(v7, v12);
    **reinterpret_cast<void****>(ebp14 - 24) = eax13;
    goto v15;
}

struct s992 {
    signed char[8] pad8;
    void** f8;
};

struct s993 {
    signed char[8] pad8;
    int32_t* f8;
};

void fun_7f0c() {
    void** ecx1;
    struct s992* ebp2;
    int32_t* edx3;
    struct s993* ebp4;
    int1_t zf5;
    int32_t ebp6;
    int32_t ebp7;
    void** v8;
    int32_t ebp9;
    void** v10;
    int32_t ebp11;
    void** v12;
    void** v13;
    void** eax14;
    void** edx15;
    int32_t ebp16;
    void** v17;
    int32_t ebp18;
    int32_t ebp19;
    int32_t eax20;
    void** v21;
    int32_t ebp22;
    void** v23;
    int32_t ebp24;
    int32_t v25;

    ecx1 = ebp2->f8;
    edx3 = ebp4->f8;
    zf5 = *edx3 == 0;
    *reinterpret_cast<int32_t*>(ebp6 - 8) = reinterpret_cast<int32_t>(__return_address()) + 0xb018;
    *reinterpret_cast<int32_t**>(ebp7 - 12) = edx3;
    if (!zf5) {
        v8 = *reinterpret_cast<void***>(ebp9 - 12);
        _ZNSt6__ndk113__vector_baseINS_6vectorIhNS_9allocatorIhEEEENS2_IS4_EEE5clearEv(ecx1, v8);
        v10 = *reinterpret_cast<void***>(ebp11 - 12);
        eax14 = _ZNSt6__ndk113__vector_baseINS_6vectorIhNS_9allocatorIhEEEENS2_IS4_EEE7__allocEv(ecx1, v10, v12, v13);
        edx15 = *reinterpret_cast<void***>(*reinterpret_cast<void***>(ebp16 - 12));
        v17 = *reinterpret_cast<void***>(ebp16 - 12);
        *reinterpret_cast<void***>(ebp18 - 16) = eax14;
        *reinterpret_cast<void***>(ebp19 - 20) = edx15;
        eax20 = _ZNKSt6__ndk113__vector_baseINS_6vectorIhNS_9allocatorIhEEEENS2_IS4_EEE8capacityEv(v17);
        v21 = *reinterpret_cast<void***>(ebp22 - 16);
        v23 = *reinterpret_cast<void***>(ebp24 - 20);
        _ZNSt6__ndk116allocator_traitsINS_9allocatorINS_6vectorIhNS1_IhEEEEEEE10deallocateERS5_PS4_j(v21, v23, eax20);
    }
    goto v25;
}

struct s994 {
    signed char[8] pad8;
    int32_t f8;
};

struct s995 {
    signed char[8] pad8;
    void** f8;
};

void fun_875c() {
    int32_t ecx1;
    struct s994* ebp2;
    void** v3;
    struct s995* ebp4;
    int32_t ebp5;
    int32_t v6;

    ecx1 = ebp2->f8;
    v3 = ebp4->f8;
    *reinterpret_cast<int32_t*>(ebp5 - 8) = ecx1;
    _ZNSt6__ndk122__compressed_pair_elemIPNS_6vectorIhNS_9allocatorIhEEEELi0ELb0EE5__getEv(v3);
    goto v6;
}

struct s996 {
    signed char[8] pad8;
    int32_t f8;
};

struct s997 {
    signed char[8] pad8;
    void** f8;
};

void fun_98ad() {
    int32_t ecx1;
    struct s996* ebp2;
    void** esi3;
    struct s997* ebp4;
    void** v5;
    int32_t ebp6;
    void** v7;
    int32_t v8;
    int32_t v9;

    ecx1 = ebp2->f8;
    esi3 = *reinterpret_cast<void***>(ebp4->f8 + 4);
    v5 = ebp4->f8;
    *reinterpret_cast<int32_t*>(ebp6 - 12) = ecx1;
    _ZNSt6__ndk114__split_bufferINS_6vectorIhNS_9allocatorIhEEEERNS2_IS4_EEE17__destruct_at_endEPS4_(v5, esi3, v7, v8);
    goto v9;
}

struct s998 {
    signed char[12] pad12;
    int32_t f12;
};

struct s999 {
    signed char[8] pad8;
    int32_t f8;
};

struct s1000 {
    signed char[8] pad8;
    void** f8;
};

void fun_39ad() {
    int32_t ecx1;
    struct s998* ebp2;
    int32_t edx3;
    struct s999* ebp4;
    void** v5;
    struct s1000* ebp6;
    int32_t ebp7;
    int32_t ebp8;
    void** v9;
    void** v10;
    int32_t v11;
    int32_t v12;

    ecx1 = ebp2->f12;
    edx3 = ebp4->f8;
    v5 = ebp6->f8;
    *reinterpret_cast<int32_t*>(ebp7 - 12) = ecx1;
    *reinterpret_cast<int32_t*>(ebp8 - 16) = edx3;
    _ZNSt6__ndk117_DeallocateCaller9__do_callEPv(v5, v9, v10, v11);
    goto v12;
}

struct s1001 {
    signed char[12] pad12;
    void** f12;
};

struct s1002 {
    signed char[8] pad8;
    int32_t f8;
};

struct s1003 {
    signed char[8] pad8;
    int32_t f8;
};

struct s1004 {
    signed char[12] pad12;
    void** f12;
};

struct s1005 {
    int32_t f0;
    int32_t f4;
};

struct s1006 {
    signed char[12] pad12;
    int32_t* f12;
};

struct s1008 {
    signed char[4] pad4;
    int32_t f4;
};

struct s1007 {
    signed char[12] pad12;
    struct s1008* f12;
};

struct s1009 {
    signed char[12] pad12;
    void** f12;
};

struct s1010 {
    signed char[12] pad12;
    void** f12;
};

struct s1012 {
    signed char[4] pad4;
    int32_t f4;
};

struct s1011 {
    signed char[12] pad12;
    struct s1012* f12;
};

struct s1013 {
    signed char[12] pad12;
    int32_t* f12;
};

void fun_979e() {
    void** ecx1;
    struct s1001* ebp2;
    int32_t edx3;
    struct s1002* ebp4;
    int32_t esi5;
    struct s1003* ebp6;
    void** v7;
    struct s1004* ebp8;
    int32_t ebp9;
    int32_t ebp10;
    int32_t ebp11;
    int32_t ebp12;
    int32_t ebp13;
    void** v14;
    void** eax15;
    void** eax16;
    void** v17;
    int32_t ebp18;
    struct s1005* ecx19;
    int32_t ebp20;
    struct s1006* ebp21;
    struct s1007* ebp22;
    void** v23;
    struct s1009* ebp24;
    void** eax25;
    void* eax26;
    void** v27;
    int32_t ebp28;
    int32_t ebp29;
    void** eax30;
    int32_t ebp31;
    void** v32;
    struct s1010* ebp33;
    void** eax34;
    struct s1011* ebp35;
    struct s1013* ebp36;
    int32_t v37;

    ecx1 = ebp2->f12;
    edx3 = ebp4->f8;
    esi5 = ebp6->f8;
    v7 = ebp8->f12;
    *reinterpret_cast<int32_t*>(ebp9 - 16) = reinterpret_cast<int32_t>(__return_address()) + 0x9786;
    *reinterpret_cast<void***>(ebp10 - 20) = ecx1;
    *reinterpret_cast<int32_t*>(ebp11 - 24) = edx3;
    *reinterpret_cast<int32_t*>(ebp12 - 28) = esi5;
    *reinterpret_cast<int32_t*>(ebp13 - 32) = esi5;
    eax15 = _ZNSt6__ndk113__vector_baseIhNS_9allocatorIhEEE7__allocEv(ecx1, v7, v14);
    eax16 = _ZNSt6__ndk14moveIRNS_9allocatorIhEEEEONS_16remove_referenceIT_E4typeEOS5_(eax15);
    v17 = *reinterpret_cast<void***>(ebp18 - 32);
    _ZNSt6__ndk113__vector_baseIhNS_9allocatorIhEEEC2EOS2_(v17, eax16);
    ecx19 = *reinterpret_cast<struct s1005**>(ebp20 - 28);
    ecx19->f0 = *ebp21->f12;
    ecx19->f4 = ebp22->f12->f4;
    v23 = ebp24->f12;
    eax25 = _ZNSt6__ndk113__vector_baseIhNS_9allocatorIhEEE9__end_capEv(v23, eax16);
    eax26 = *eax25;
    v27 = *reinterpret_cast<void***>(ebp28 - 28);
    *reinterpret_cast<void**>(ebp29 - 36) = eax26;
    eax30 = _ZNSt6__ndk113__vector_baseIhNS_9allocatorIhEEE9__end_capEv(v27, eax16);
    *eax30 = *reinterpret_cast<void**>(ebp31 - 36);
    v32 = ebp33->f12;
    eax34 = _ZNSt6__ndk113__vector_baseIhNS_9allocatorIhEEE9__end_capEv(v32, eax16);
    *eax34 = reinterpret_cast<void*>(0);
    ebp35->f12->f4 = 0;
    *ebp36->f12 = 0;
    goto v37;
}

struct s1014 {
    signed char[8] pad8;
    int32_t f8;
};

struct s1015 {
    signed char[8] pad8;
    void** f8;
};

void fun_69cc() {
    int32_t ecx1;
    struct s1014* ebp2;
    void** v3;
    struct s1015* ebp4;
    int32_t ebp5;
    int32_t v6;

    ecx1 = ebp2->f8;
    v3 = ebp4->f8;
    *reinterpret_cast<int32_t*>(ebp5 - 8) = ecx1;
    _ZNSt6__ndk113__vector_baseINS_6vectorIhNS_9allocatorIhEEEENS2_IS4_EEEC2Ev(v3);
    goto v6;
}

/* __cxx_global_var_init.1 */
void __cxx_global_var_init_1(int32_t a1);

void fun_23fa(int32_t a1, int32_t a2, int32_t a3, int32_t a4) {
    int32_t ebp5;

    *reinterpret_cast<int32_t*>(ebp5 - 8) = reinterpret_cast<int32_t>(__return_address()) + 0x10b2a;
    __cxx_global_var_init(a1);
    __cxx_global_var_init_1(a1);
    goto a4;
}

/* std::__ndk1::allocator<char>::allocator() */
void** _ZNSt6__ndk19allocatorIcEC2Ev(void** a1) {
    return a1;
}

struct s1016 {
    signed char[16] pad16;
    int32_t f16;
};

struct s1017 {
    signed char[12] pad12;
    int32_t f12;
};

struct s1018 {
    signed char[8] pad8;
    int32_t f8;
};

struct s1019 {
    signed char[8] pad8;
    void** f8;
};

struct s1020 {
    signed char[16] pad16;
    uint32_t f16;
};

struct s1021 {
    signed char[16] pad16;
    int32_t f16;
};

struct s1022 {
    signed char[16] pad16;
    void** f16;
};

struct s1023 {
    signed char[12] pad12;
    int32_t f12;
};

struct s1024 {
    signed char[16] pad16;
    int32_t f16;
};

struct s1025 {
    signed char[12] pad12;
    void** f12;
};

struct s1026 {
    signed char[16] pad16;
    void** f16;
};

struct s1027 {
    signed char[16] pad16;
    int32_t f16;
};

void fun_4b3e() {
    int32_t ecx1;
    struct s1016* ebp2;
    int32_t edx3;
    struct s1017* ebp4;
    int32_t esi5;
    struct s1018* ebp6;
    void** edi7;
    struct s1019* ebp8;
    int32_t ebp9;
    int32_t ebp10;
    int32_t ebp11;
    int32_t ebp12;
    int32_t ebp13;
    void** v14;
    void** v15;
    void** v16;
    void** eax17;
    int32_t ebp18;
    void** v19;
    int32_t ebp20;
    void** v21;
    void** v22;
    void** v23;
    void** v24;
    void** v25;
    void** v26;
    void** eax27;
    int32_t ebp28;
    int32_t ebp29;
    int32_t ebp30;
    struct s1020* ebp31;
    void** ecx32;
    int32_t ebp33;
    void* edx34;
    int32_t ebp35;
    struct s1021* ebp36;
    int32_t ebp37;
    void** esi38;
    int32_t ebp39;
    void** edi40;
    int32_t ebp41;
    void** ebx42;
    struct s1022* ebp43;
    int32_t ebp44;
    int32_t ebp45;
    struct s1023* ebp46;
    void** v47;
    int32_t ebp48;
    void** v49;
    int32_t ebp50;
    struct s1024* ebp51;
    void** v52;
    int32_t ebp53;
    void** v54;
    void** v55;
    void** v56;
    void** eax57;
    void** v58;
    void** v59;
    void** eax60;
    int32_t ebp61;
    void** ecx62;
    struct s1025* ebp63;
    void** edx64;
    struct s1026* ebp65;
    void** v66;
    int32_t ebp67;
    int32_t ebp68;
    void** eax69;
    int32_t ebp70;
    struct s1027* ebp71;
    int32_t ebp72;
    void** ecx73;
    int32_t ebp74;
    void** v75;
    int32_t ebp76;
    int32_t ebp77;
    signed char* eax78;
    int32_t ebp79;
    int32_t ebp80;
    int32_t ebp81;
    void* ebp82;
    void** v83;
    void** v84;
    void** v85;
    void** v86;
    void** v87;
    void** v88;
    void** v89;
    void** v90;
    int32_t v91;

    ecx1 = ebp2->f16;
    edx3 = ebp4->f12;
    esi5 = ebp6->f8;
    edi7 = ebp8->f8;
    *reinterpret_cast<int32_t*>(ebp9 - 32) = reinterpret_cast<int32_t>(__return_address()) + reinterpret_cast<int32_t>("AwVhly4HLiJJyLeD4p2diJD+uw0lwbS8Fy4HBhfuAMsNnlTgywQCzoTJvJx31RNnYgCxN3hBEcmbGnuvspmN324eTSBS0gJF3ZJHiDX8P4MY6kbCZu0cP6vbByzL6C0hfWn0tvJMFD9Kyy5juZCRzOgabO5hbON5s/Gp8uR71AmPc0hEARHJuFmZarPNekhTIUvoLTb9afSDanA83D+m7TIqWTfB51z30G0KbSaRh13If+jaPCjxaSXE+rnp7xP4bmOKyxHM+ZCs7mgaY3mhbOny8/GUCaR7yEQPc0m4QRHqs9mZexP+8rfB51ztEG0KXeaRh1oIf+jpPCjxeeXE+qtf/bBm7Rw/u8YJfCfCg87eLVRZlk6ekJcSOEUGFy4HCxfuAODNnlTOiwQC3ETJvKd31RN3YgCxCbhBEe+bGnufcpmN6ZvyeTsNEP6zX6wN59epCF/vPRchlwMFeXo8Eg96JmgG19x1seTnyPhH99oQYn/ebSP47ELOiwQg62Mq/mPfUXE3YgCehc1m9rHn9AZ6bgEkTYAe5mgPehx1htfnyPHk3+89FyGXAwVVuxRj3c4LQyDQzHCKyy5juZCRzNO/7H7N+JqIqvch9+M6OLmybzqRn+89FyGXAwVzOrq1+rnjJBOOCPSq31tW50PjEC5jissRzPmQrO5oGmN5oWzp8vPxlAmke8hED3NJuEER6rPZmWb+bDpGVfWjmh5s61ncPno/0r9Qlx/vPQVhlwMjPOfLcAU7Agf32jhif95Qb0QTuMsuY4rRqUWQKmS6zYU7AjAf7z0XIZcDBW4ibgc3g8nIn5ryf2OiZ49UemiLSLe20oEGem4yC1e73k0gbifXqQhw+lHPAHYwIqDsAgf+g4P7nXvlQU21HtzLKhDF27gX2cmbiphVEkXJxKcwSWOzVcFIt4PJy8Xi0NR6aIt+iynCpu0cP6vbByzL6C0hWTo/H7GWupFlWTPRA5kpdlfcdYbArOo4iw+2LgjO5V6FyyoQ6A57zQnIt4PC+vmv");
    *reinterpret_cast<int32_t*>(ebp10 - 36) = ecx1;
    *reinterpret_cast<int32_t*>(ebp11 - 40) = edx3;
    *reinterpret_cast<int32_t*>(ebp12 - 44) = esi5;
    *reinterpret_cast<void***>(ebp13 - 48) = edi7;
    eax17 = _ZNKSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE8capacityEv(edi7, v14, v15, v16);
    *reinterpret_cast<void***>(ebp18 - 16) = eax17;
    v19 = *reinterpret_cast<void***>(ebp20 - 48);
    eax27 = _ZNKSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE4sizeEv(v19, v21, v22, v23, v24, v25, v26);
    *reinterpret_cast<void***>(ebp28 - 20) = eax27;
    if (reinterpret_cast<uint32_t>(*reinterpret_cast<int32_t*>(ebp29 - 16) - *reinterpret_cast<int32_t*>(ebp30 - 20)) < ebp31->f16) {
        ecx32 = *reinterpret_cast<void***>(ebp33 - 16);
        edx34 = reinterpret_cast<void*>(*reinterpret_cast<int32_t*>(ebp35 - 20) + ebp36->f16 - *reinterpret_cast<uint32_t*>(ebp37 - 16));
        esi38 = *reinterpret_cast<void***>(ebp39 - 20);
        edi40 = *reinterpret_cast<void***>(ebp41 - 20);
        ebx42 = ebp43->f16;
        *reinterpret_cast<int32_t*>(ebp44 - 56) = 0;
        *reinterpret_cast<int32_t*>(ebp45 - 60) = ebp46->f12;
        v47 = *reinterpret_cast<void***>(ebp48 - 48);
        v49 = *reinterpret_cast<void***>(ebp50 - 60);
        _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE21__grow_by_and_replaceEjjjjjjPKc(v47, ecx32, edx34, esi38, edi40, 0, ebx42, v49);
    } else {
        if (ebp51->f16) {
            v52 = *reinterpret_cast<void***>(ebp53 - 48);
            eax57 = _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE13__get_pointerEv(v52, v54, v55, v56);
            eax60 = _ZNSt6__ndk116__to_raw_pointerIcEEPT_S2_(eax57, v58, v59);
            *reinterpret_cast<void***>(ebp61 - 24) = eax60;
            ecx62 = ebp63->f12;
            edx64 = ebp65->f16;
            v66 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(*reinterpret_cast<void**>(ebp67 - 24)) + reinterpret_cast<uint32_t>(*reinterpret_cast<void**>(ebp68 - 20)));
            eax69 = _ZNSt6__ndk111char_traitsIcE4copyEPcPKcj(v66, ecx62, edx64);
            *reinterpret_cast<int32_t*>(ebp70 - 20) = ebp71->f16 + *reinterpret_cast<int32_t*>(ebp72 - 20);
            ecx73 = *reinterpret_cast<void***>(ebp74 - 20);
            v75 = *reinterpret_cast<void***>(ebp76 - 48);
            *reinterpret_cast<void***>(ebp77 - 52) = eax69;
            _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE10__set_sizeEj(v75, ecx73, edx64);
            eax78 = reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(*reinterpret_cast<void**>(ebp79 - 24)) + reinterpret_cast<uint32_t>(*reinterpret_cast<void**>(ebp80 - 20)));
            *reinterpret_cast<signed char*>(ebp81 - 25) = 0;
            _ZNSt6__ndk111char_traitsIcE6assignERcRKc(eax78, reinterpret_cast<int32_t>(ebp82) - 25, edx64, v83, v84, v85, v86, v87, v88, v89, v90);
        }
    }
    goto v91;
}

struct s1028 {
    signed char[8] pad8;
    int32_t f8;
};

struct s1029 {
    signed char[8] pad8;
    void** f8;
};

void fun_414c() {
    int32_t ecx1;
    struct s1028* ebp2;
    void** v3;
    struct s1029* ebp4;
    int32_t ebp5;
    int32_t v6;

    ecx1 = ebp2->f8;
    v3 = ebp4->f8;
    *reinterpret_cast<int32_t*>(ebp5 - 8) = ecx1;
    _ZNKSt6__ndk122__compressed_pair_elemINS_9allocatorIcEELi1ELb1EE5__getEv(v3);
    goto v6;
}

struct s1030 {
    signed char[12] pad12;
    int32_t f12;
};

struct s1031 {
    signed char[8] pad8;
    int32_t f8;
};

struct s1032 {
    signed char[12] pad12;
    void** f12;
};

void fun_9b6d() {
    int32_t ecx1;
    struct s1030* ebp2;
    int32_t edx3;
    struct s1031* ebp4;
    void** v5;
    struct s1032* ebp6;
    int32_t ebp7;
    int32_t ebp8;
    void** v9;
    void** v10;
    int32_t v11;
    int32_t v12;

    ecx1 = ebp2->f12;
    edx3 = ebp4->f8;
    v5 = ebp6->f12;
    *reinterpret_cast<int32_t*>(ebp7 - 12) = ecx1;
    *reinterpret_cast<int32_t*>(ebp8 - 16) = edx3;
    _ZNSt6__ndk17forwardINS_9allocatorIcEEEEOT_RNS_16remove_referenceIS3_E4typeE(v5, v9, v10, v11);
    goto v12;
}

/* std::__ndk1::allocator_traits<std::__ndk1::allocator<unsigned char> >::select_on_container_copy_construction(std::__ndk1::allocator<unsigned char> const&) */
void _ZNSt6__ndk116allocator_traitsINS_9allocatorIhEEE37select_on_container_copy_constructionERKS2_(void* a1, void** a2) {
    fun_899e();
    _ZNSt6__ndk116allocator_traitsINS_9allocatorIhEEE39__select_on_container_copy_constructionENS_17integral_constantIbLb0EEERKS2_(a2, a1);
    goto a2;
}

/* std::__ndk1::__vector_base<unsigned char, std::__ndk1::allocator<unsigned char> >::__vector_base(std::__ndk1::allocator<unsigned char>&&) */
void _ZNSt6__ndk113__vector_baseIhNS_9allocatorIhEEEC2EOS2_(void** a1, void** a2) {
    void** eax3;

    fun_89ee();
    _ZNSt6__ndk120__vector_base_commonILb1EEC2Ev(a1);
    *reinterpret_cast<void***>(a1) = reinterpret_cast<void**>(0);
    *reinterpret_cast<void***>(a1 + 4) = reinterpret_cast<void**>(0);
    eax3 = _ZNSt6__ndk14moveIRNS_9allocatorIhEEEEONS_16remove_referenceIT_E4typeEOS5_(a2);
    _ZNSt6__ndk117__compressed_pairIPhNS_9allocatorIhEEEC2IDnS3_EEOT_OT0_(a1 + 8, reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 + 0xfffffff0, eax3);
    goto a1;
}

/* std::__ndk1::allocator<unsigned char>&& std::__ndk1::forward<std::__ndk1::allocator<unsigned char> >(std::__ndk1::remove_reference<std::__ndk1::allocator<unsigned char> >::type&) */
void** _ZNSt6__ndk17forwardINS_9allocatorIhEEEEOT_RNS_16remove_referenceIS3_E4typeE(void** a1, void** a2, void** a3, void** a4) {
    return a1;
}

void fun_8c1d();

/* std::__ndk1::__compressed_pair_elem<std::__ndk1::allocator<unsigned char>, 1, true>::__compressed_pair_elem<std::__ndk1::allocator<unsigned char>, void>(std::__ndk1::allocator<unsigned char>&&) */
void _ZNSt6__ndk122__compressed_pair_elemINS_9allocatorIhEELi1ELb1EEC2IS2_vEEOT_(void** a1, void** a2) {
    void** esi3;

    fun_8c1d();
    _ZNSt6__ndk17forwardINS_9allocatorIhEEEEOT_RNS_16remove_referenceIS3_E4typeE(a2, a1, a2, esi3);
    goto a1;
}

struct s1033 {
    signed char[8] pad8;
    int32_t f8;
};

struct s1034 {
    signed char[8] pad8;
    void** f8;
};

void fun_912c() {
    int32_t ecx1;
    struct s1033* ebp2;
    void** v3;
    struct s1034* ebp4;
    int32_t ebp5;
    int32_t v6;

    ecx1 = ebp2->f8;
    v3 = ebp4->f8;
    *reinterpret_cast<int32_t*>(ebp5 - 8) = ecx1;
    _ZNKSt6__ndk122__compressed_pair_elemINS_9allocatorINS_6vectorIhNS1_IhEEEEEELi1ELb1EE5__getEv(v3);
    goto v6;
}

struct s1035 {
    signed char[8] pad8;
    int32_t f8;
};

struct s1036 {
    signed char[8] pad8;
    void** f8;
};

void fun_90dc() {
    int32_t ecx1;
    struct s1035* ebp2;
    void** v3;
    struct s1036* ebp4;
    int32_t ebp5;
    void** v6;
    void** v7;
    void** v8;
    int32_t v9;
    int32_t v10;

    ecx1 = ebp2->f8;
    v3 = ebp4->f8;
    *reinterpret_cast<int32_t*>(ebp5 - 12) = ecx1;
    _ZNKSt6__ndk19allocatorINS_6vectorIhNS0_IhEEEEE8max_sizeEv(v3, v6, v7, v8, v9);
    goto v10;
}

/* std::__ndk1::__split_buffer<std::__ndk1::vector<unsigned char, std::__ndk1::allocator<unsigned char> >, std::__ndk1::allocator<std::__ndk1::vector<unsigned char, std::__ndk1::allocator<unsigned char> > >&>::__destruct_at_end(std::__ndk1::vector<unsigned char, std::__ndk1::allocator<unsigned char> >*) */
void _ZNSt6__ndk114__split_bufferINS_6vectorIhNS_9allocatorIhEEEERNS2_IS4_EEE17__destruct_at_endEPS4_(void** a1, void** a2, void** a3, int32_t a4) {
    fun_993e();
    _ZNSt6__ndk114__split_bufferINS_6vectorIhNS_9allocatorIhEEEERNS2_IS4_EEE17__destruct_at_endEPS4_NS_17integral_constantIbLb0EEE(a1, a2);
    goto a1;
}

void fun_39ec();

/* std::__ndk1::_DeallocateCaller::__do_call(void*) */
void _ZNSt6__ndk117_DeallocateCaller9__do_callEPv(void** a1, void** a2, void** a3, int32_t a4) {
    fun_39ec();
    fun_2070(a1);
    goto a1;
}

/* std::__ndk1::remove_reference<std::__ndk1::allocator<unsigned char>&>::type&& std::__ndk1::move<std::__ndk1::allocator<unsigned char>&>(std::__ndk1::allocator<unsigned char>&) */
void** _ZNSt6__ndk14moveIRNS_9allocatorIhEEEEONS_16remove_referenceIT_E4typeEOS5_(void** a1) {
    return a1;
}

void fun_7cad();

/* std::__ndk1::__compressed_pair<std::__ndk1::vector<unsigned char, std::__ndk1::allocator<unsigned char> >*, std::__ndk1::allocator<std::__ndk1::vector<unsigned char, std::__ndk1::allocator<unsigned char> > > >::__compressed_pair<decltype(nullptr), true>(decltype(nullptr)&&) */
void _ZNSt6__ndk117__compressed_pairIPNS_6vectorIhNS_9allocatorIhEEEENS2_IS4_EEEC2IDnLb1EEEOT_(void** a1, void** a2);

/* std::__ndk1::__vector_base<std::__ndk1::vector<unsigned char, std::__ndk1::allocator<unsigned char> >, std::__ndk1::allocator<std::__ndk1::vector<unsigned char, std::__ndk1::allocator<unsigned char> > > >::__vector_base() */
void _ZNSt6__ndk113__vector_baseINS_6vectorIhNS_9allocatorIhEEEENS2_IS4_EEEC2Ev(void** a1) {
    fun_7cad();
    _ZNSt6__ndk120__vector_base_commonILb1EEC2Ev(a1);
    *reinterpret_cast<void***>(a1) = reinterpret_cast<void**>(0);
    *reinterpret_cast<void***>(a1 + 4) = reinterpret_cast<void**>(0);
    _ZNSt6__ndk117__compressed_pairIPNS_6vectorIhNS_9allocatorIhEEEENS2_IS4_EEEC2IDnLb1EEEOT_(a1 + 8, reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 + 0xfffffff4);
    goto a1;
}

struct s1037 {
    signed char[4812] pad4812;
    void** f4812;
};

/* __cxx_global_var_init.1 */
void __cxx_global_var_init_1(int32_t a1) {
    struct s1037* eax2;
    void* v3;
    int32_t esi4;

    fun_239d();
    eax2 = reinterpret_cast<struct s1037*>(reinterpret_cast<int32_t>(v3) + 0x10b87);
    _ZNSt6__ndk16vectorINS0_IhNS_9allocatorIhEEEENS1_IS3_EEEC2Ev(&eax2->f4812);
    fun_2200(reinterpret_cast<int32_t>(eax2) + 0xffff3acc, &eax2->f4812, reinterpret_cast<int32_t>(eax2) + 0x31c, esi4);
    goto a1;
}

/* std::__ndk1::__compressed_pair_elem<std::__ndk1::allocator<char>, 1, true>::__get() const */
void** _ZNKSt6__ndk122__compressed_pair_elemINS_9allocatorIcEELi1ELb1EE5__getEv(void** a1) {
    return a1;
}

struct s1038 {
    signed char[12] pad12;
    int32_t f12;
};

struct s1039 {
    signed char[8] pad8;
    int32_t f8;
};

struct s1040 {
    signed char[12] pad12;
    void** f12;
};

void fun_8c1d() {
    int32_t ecx1;
    struct s1038* ebp2;
    int32_t edx3;
    struct s1039* ebp4;
    void** v5;
    struct s1040* ebp6;
    int32_t ebp7;
    int32_t ebp8;
    void** v9;
    void** v10;
    void** v11;
    int32_t v12;

    ecx1 = ebp2->f12;
    edx3 = ebp4->f8;
    v5 = ebp6->f12;
    *reinterpret_cast<int32_t*>(ebp7 - 12) = ecx1;
    *reinterpret_cast<int32_t*>(ebp8 - 16) = edx3;
    _ZNSt6__ndk17forwardINS_9allocatorIhEEEEOT_RNS_16remove_referenceIS3_E4typeE(v5, v9, v10, v11);
    goto v12;
}

/* std::__ndk1::__compressed_pair<unsigned char*, std::__ndk1::allocator<unsigned char> >::__compressed_pair<decltype(nullptr), std::__ndk1::allocator<unsigned char> >(decltype(nullptr)&&, std::__ndk1::allocator<unsigned char>&&) */
void _ZNSt6__ndk117__compressed_pairIPhNS_9allocatorIhEEEC2IDnS3_EEOT_OT0_(void** a1, void** a2, void** a3) {
    void** eax4;
    void** v5;
    void** eax6;

    fun_8b6e();
    eax4 = _ZNSt6__ndk17forwardIDnEEOT_RNS_16remove_referenceIS1_E4typeE(a2);
    _ZNSt6__ndk122__compressed_pair_elemIPhLi0ELb0EEC2IDnvEEOT_(a1, eax4);
    eax6 = _ZNSt6__ndk17forwardINS_9allocatorIhEEEEOT_RNS_16remove_referenceIS3_E4typeE(a3, eax4, v5, a1);
    _ZNSt6__ndk122__compressed_pair_elemINS_9allocatorIhEELi1ELb1EEC2IS2_vEEOT_(a1, eax6);
    goto a1;
}

/* std::__ndk1::__compressed_pair_elem<std::__ndk1::allocator<std::__ndk1::vector<unsigned char, std::__ndk1::allocator<unsigned char> > >, 1, true>::__get() const */
void** _ZNKSt6__ndk122__compressed_pair_elemINS_9allocatorINS_6vectorIhNS1_IhEEEEEELi1ELb1EE5__getEv(void** a1) {
    return a1;
}

struct s1041 {
    signed char[8] pad8;
    int32_t f8;
};

struct s1042 {
    signed char[8] pad8;
    void** f8;
};

/* std::__ndk1::allocator<std::__ndk1::vector<unsigned char, std::__ndk1::allocator<unsigned char> > >::allocator() */
void** _ZNSt6__ndk19allocatorINS_6vectorIhNS0_IhEEEEEC2Ev(void** a1);

void fun_7dec() {
    int32_t ecx1;
    struct s1041* ebp2;
    void** v3;
    struct s1042* ebp4;
    int32_t ebp5;
    int32_t v6;

    ecx1 = ebp2->f8;
    v3 = ebp4->f8;
    *reinterpret_cast<int32_t*>(ebp5 - 8) = ecx1;
    _ZNSt6__ndk19allocatorINS_6vectorIhNS0_IhEEEEEC2Ev(v3);
    goto v6;
}

struct s1043 {
    signed char[8] pad8;
    int32_t f8;
};

struct s1044 {
    signed char[8] pad8;
    void** f8;
};

void fun_39ec() {
    int32_t ecx1;
    struct s1043* ebp2;
    void** v3;
    struct s1044* ebp4;
    int32_t ebp5;
    int32_t v6;

    ecx1 = ebp2->f8;
    v3 = ebp4->f8;
    *reinterpret_cast<int32_t*>(ebp5 - 8) = ecx1;
    fun_2070(v3);
    goto v6;
}

struct s1045 {
    signed char[8] pad8;
    int32_t f8;
};

struct s1046 {
    signed char[8] pad8;
    void** f8;
};

struct s1047 {
    int32_t f0;
    int32_t f4;
    void** f8;
};

void fun_7cad() {
    int32_t ecx1;
    struct s1045* ebp2;
    void** edx3;
    struct s1046* ebp4;
    int32_t ebp5;
    int32_t ebp6;
    int32_t ebp7;
    struct s1047* eax8;
    int32_t ebp9;
    int32_t ebp10;
    void* ebp11;
    int32_t v12;

    ecx1 = ebp2->f8;
    edx3 = ebp4->f8;
    *reinterpret_cast<int32_t*>(ebp5 - 16) = reinterpret_cast<int32_t>(__return_address()) + 0xb277;
    *reinterpret_cast<int32_t*>(ebp6 - 20) = ecx1;
    *reinterpret_cast<void***>(ebp7 - 24) = edx3;
    _ZNSt6__ndk120__vector_base_commonILb1EEC2Ev(edx3);
    eax8 = *reinterpret_cast<struct s1047**>(ebp9 - 24);
    eax8->f0 = 0;
    eax8->f4 = 0;
    *reinterpret_cast<int32_t*>(ebp10 - 12) = 0;
    _ZNSt6__ndk117__compressed_pairIPNS_6vectorIhNS_9allocatorIhEEEENS2_IS4_EEEC2IDnLb1EEEOT_(&eax8->f8, reinterpret_cast<int32_t>(ebp11) + 0xfffffff4);
    goto v12;
}

struct s1048 {
    signed char[8] pad8;
    int32_t f8;
};

struct s1049 {
    signed char[8] pad8;
    void** f8;
};

/* std::__ndk1::__vector_base<std::__ndk1::vector<unsigned char, std::__ndk1::allocator<unsigned char> >, std::__ndk1::allocator<std::__ndk1::vector<unsigned char, std::__ndk1::allocator<unsigned char> > > >::~__vector_base() */
void _ZNSt6__ndk113__vector_baseINS_6vectorIhNS_9allocatorIhEEEENS2_IS4_EEED2Ev(void** a1);

void fun_69fd() {
    int32_t ecx1;
    struct s1048* ebp2;
    void** edx3;
    struct s1049* ebp4;
    int32_t ebp5;
    int32_t ebp6;
    int32_t ebp7;
    void** v8;
    int32_t ebp9;
    int32_t v10;

    ecx1 = ebp2->f8;
    edx3 = ebp4->f8;
    *reinterpret_cast<int32_t*>(ebp5 - 20) = reinterpret_cast<int32_t>(__return_address()) + 0xc527;
    *reinterpret_cast<int32_t*>(ebp6 - 24) = ecx1;
    *reinterpret_cast<void***>(ebp7 - 28) = edx3;
    _ZNKSt6__ndk16vectorINS0_IhNS_9allocatorIhEEEENS1_IS3_EEE17__annotate_deleteEv(edx3);
    v8 = *reinterpret_cast<void***>(ebp9 - 28);
    _ZNSt6__ndk113__vector_baseINS_6vectorIhNS_9allocatorIhEEEENS2_IS4_EEED2Ev(v8);
    goto v10;
}

struct s1050 {
    signed char[4824] pad4824;
    void** f4824;
};

struct s1051 {
    signed char[4824] pad4824;
    void** f4824;
};

void fun_242d() {
    struct s1050* eax1;
    int32_t ebp2;
    void** v3;
    int32_t v4;
    void** edx5;
    int32_t ebp6;
    uint32_t esi7;
    uint32_t v8;
    int32_t v9;
    int32_t v10;

    eax1 = reinterpret_cast<struct s1050*>(reinterpret_cast<int32_t>(__return_address()) + 0x10af7);
    *reinterpret_cast<struct s1050**>(ebp2 - 12) = eax1;
    _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2EPKc(&eax1->f4824, reinterpret_cast<int32_t>(eax1) + 0xffffc468, v3, v4);
    edx5 = reinterpret_cast<void**>(&(*reinterpret_cast<struct s1051**>(ebp6 - 12))->f4824);
    esi7 = reinterpret_cast<int32_t>(*reinterpret_cast<struct s1051**>(ebp6 - 12)) + 0x31c;
    v8 = reinterpret_cast<int32_t>(*reinterpret_cast<struct s1051**>(ebp6 - 12)) + 0xffff06bc;
    fun_2200(v8, edx5, esi7, v9);
    goto v10;
}

/* std::__ndk1::allocator<std::__ndk1::vector<unsigned char, std::__ndk1::allocator<unsigned char> > >::allocator() */
void** _ZNSt6__ndk19allocatorINS_6vectorIhNS0_IhEEEEEC2Ev(void** a1) {
    return a1;
}

void fun_7d2e();

/* std::__ndk1::__compressed_pair_elem<std::__ndk1::allocator<std::__ndk1::vector<unsigned char, std::__ndk1::allocator<unsigned char> > >, 1, true>::__compressed_pair_elem() */
void _ZNSt6__ndk122__compressed_pair_elemINS_9allocatorINS_6vectorIhNS1_IhEEEEEELi1ELb1EEC2Ev(void** a1, void** a2);

/* std::__ndk1::__compressed_pair<std::__ndk1::vector<unsigned char, std::__ndk1::allocator<unsigned char> >*, std::__ndk1::allocator<std::__ndk1::vector<unsigned char, std::__ndk1::allocator<unsigned char> > > >::__compressed_pair<decltype(nullptr), true>(decltype(nullptr)&&) */
void _ZNSt6__ndk117__compressed_pairIPNS_6vectorIhNS_9allocatorIhEEEENS2_IS4_EEEC2IDnLb1EEEOT_(void** a1, void** a2) {
    void** eax3;

    fun_7d2e();
    eax3 = _ZNSt6__ndk17forwardIDnEEOT_RNS_16remove_referenceIS1_E4typeE(a2);
    _ZNSt6__ndk122__compressed_pair_elemIPNS_6vectorIhNS_9allocatorIhEEEELi0ELb0EEC2IDnvEEOT_(a1, eax3);
    _ZNSt6__ndk122__compressed_pair_elemINS_9allocatorINS_6vectorIhNS1_IhEEEEEELi1ELb1EEC2Ev(a1, eax3);
    goto a1;
}

/* std::__ndk1::__vector_base<std::__ndk1::vector<unsigned char, std::__ndk1::allocator<unsigned char> >, std::__ndk1::allocator<std::__ndk1::vector<unsigned char, std::__ndk1::allocator<unsigned char> > > >::~__vector_base() */
void _ZNSt6__ndk113__vector_baseINS_6vectorIhNS_9allocatorIhEEEENS2_IS4_EEED2Ev(void** a1) {
    int1_t zf2;
    void** v3;
    void** v4;
    void** eax5;
    void** edx6;
    int32_t eax7;

    fun_7f0c();
    zf2 = *reinterpret_cast<void***>(a1) == 0;
    if (!zf2) {
        _ZNSt6__ndk113__vector_baseINS_6vectorIhNS_9allocatorIhEEEENS2_IS4_EEE5clearEv(a1, a1);
        eax5 = _ZNSt6__ndk113__vector_baseINS_6vectorIhNS_9allocatorIhEEEENS2_IS4_EEE7__allocEv(a1, a1, v3, v4);
        edx6 = *reinterpret_cast<void***>(a1);
        eax7 = _ZNKSt6__ndk113__vector_baseINS_6vectorIhNS_9allocatorIhEEEENS2_IS4_EEE8capacityEv(a1);
        _ZNSt6__ndk116allocator_traitsINS_9allocatorINS_6vectorIhNS1_IhEEEEEEE10deallocateERS5_PS4_j(eax5, edx6, eax7);
    }
    goto a1;
}

void __cxx_global_var_init(int32_t a1);

void fun_248a(int32_t a1, int32_t a2, int32_t a3, int32_t a4) {
    __cxx_global_var_init(a1);
    goto a4;
}

struct s1052 {
    signed char[12] pad12;
    int32_t f12;
};

struct s1053 {
    signed char[8] pad8;
    int32_t f8;
};

struct s1054 {
    signed char[8] pad8;
    int32_t f8;
};

struct s1055 {
    signed char[12] pad12;
    void** f12;
};

void fun_7d2e() {
    int32_t ecx1;
    struct s1052* ebp2;
    int32_t edx3;
    struct s1053* ebp4;
    int32_t esi5;
    struct s1054* ebp6;
    void** v7;
    struct s1055* ebp8;
    int32_t ebp9;
    int32_t ebp10;
    int32_t ebp11;
    int32_t ebp12;
    int32_t ebp13;
    void** eax14;
    void** v15;
    int32_t ebp16;
    void** v17;
    int32_t ebp18;
    int32_t v19;

    ecx1 = ebp2->f12;
    edx3 = ebp4->f8;
    esi5 = ebp6->f8;
    v7 = ebp8->f12;
    *reinterpret_cast<int32_t*>(ebp9 - 16) = reinterpret_cast<int32_t>(__return_address()) + 0xb1f6;
    *reinterpret_cast<int32_t*>(ebp10 - 20) = ecx1;
    *reinterpret_cast<int32_t*>(ebp11 - 24) = edx3;
    *reinterpret_cast<int32_t*>(ebp12 - 28) = esi5;
    *reinterpret_cast<int32_t*>(ebp13 - 32) = esi5;
    eax14 = _ZNSt6__ndk17forwardIDnEEOT_RNS_16remove_referenceIS1_E4typeE(v7);
    v15 = *reinterpret_cast<void***>(ebp16 - 32);
    _ZNSt6__ndk122__compressed_pair_elemIPNS_6vectorIhNS_9allocatorIhEEEELi0ELb0EEC2IDnvEEOT_(v15, eax14);
    v17 = *reinterpret_cast<void***>(ebp18 - 28);
    _ZNSt6__ndk122__compressed_pair_elemINS_9allocatorINS_6vectorIhNS1_IhEEEEEELi1ELb1EEC2Ev(v17, eax14);
    goto v19;
}

struct s1056 {
    signed char[68343] pad68343;
    void** f68343;
};

void __cxx_global_var_init(int32_t a1) {
    void** eax2;
    struct s1056* v3;
    int32_t esi4;

    fun_242d();
    eax2 = reinterpret_cast<void**>(&v3->f68343);
    _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2EPKc(eax2 + 0x12d8, eax2 + 0xffffc468, eax2, esi4);
    fun_2200(eax2 + 0xffff06bc, eax2 + 0x12d8, eax2 + 0x31c, esi4);
    goto a1;
}

/* std::__ndk1::__compressed_pair_elem<std::__ndk1::allocator<std::__ndk1::vector<unsigned char, std::__ndk1::allocator<unsigned char> > >, 1, true>::__compressed_pair_elem() */
void _ZNSt6__ndk122__compressed_pair_elemINS_9allocatorINS_6vectorIhNS1_IhEEEEEELi1ELb1EEC2Ev(void** a1, void** a2) {
    fun_7dec();
    _ZNSt6__ndk19allocatorINS_6vectorIhNS0_IhEEEEEC2Ev(a1);
    goto a1;
}

void fun_24b9();

void fun_2509();

void _start_main(void* a1, int32_t a2) {
    int32_t edx3;
    int32_t v4;

    fun_24b9();
    edx3 = *reinterpret_cast<int32_t*>(v4 + 0x10a6b + 0xd0);
    fun_20b0();
    fun_2509();
    if (edx3) {
        edx3();
    }
    goto 0;
}

void fun_24b9() {
    int32_t edx1;

    edx1 = *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(__return_address()) + 0x10a6b + 0xd0);
    fun_20b0();
    fun_2509();
    if (edx1) {
        edx1();
    }
    goto 0;
}

void fun_2509() {
    int32_t v1;
    int32_t v2;

    if (v1) {
        v1();
    }
    goto v2;
}

void fun_200c() {
    signed char* eax1;
    signed char* eax2;
    signed char al3;
    signed char* eax4;
    signed char* eax5;
    signed char al6;

    *eax1 = reinterpret_cast<signed char>(*eax2 + al3);
    *eax4 = reinterpret_cast<signed char>(*eax5 + al6);
}

void atexit() {
    fun_2529();
}

void fun_26fe(void** a1) {
    int32_t ebp2;
    int32_t eax3;
    int32_t ebp4;
    int32_t edx5;
    void** v6;
    int32_t ebp7;
    void** v8;
    void** v9;
    int32_t v10;
    void* ebp11;
    void** v12;
    void** v13;
    int32_t v14;
    struct s6* v15;
    int32_t ebp16;

    *reinterpret_cast<int32_t*>(ebp2 - 40) = eax3;
    *reinterpret_cast<int32_t*>(ebp4 - 44) = edx5;
    v6 = *reinterpret_cast<void***>(ebp7 - 68);
    _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(v6, v8, v9, v10, __return_address(), a1);
    _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(reinterpret_cast<int32_t>(ebp11) + 0xffffffe0, v12, v13, v14, __return_address(), a1);
    v15 = *reinterpret_cast<struct s6**>(ebp16 - 40);
    _Unwind_Resume(v15);
    fun_2790();
}

void fun_31dd(void** a1, void** a2, int32_t a3, void** a4, void** a5) {
    int32_t ebp6;
    int32_t eax7;
    int32_t ebp8;
    int32_t edx9;
    void* ebp10;
    struct s6* v11;
    int32_t ebp12;

    *reinterpret_cast<int32_t*>(ebp6 - 0xc4) = eax7;
    *reinterpret_cast<int32_t*>(ebp8 - 0xc8) = edx9;
    _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(reinterpret_cast<int32_t>(ebp10) + 0xffffff40, a1, a2, a3, a4, a5);
    v11 = *reinterpret_cast<struct s6**>(ebp12 - 0xc4);
    _Unwind_Resume(v11);
}

void fun_a1e1(void** a1, void** a2, int32_t a3, void** a4, void** a5) {
    int32_t ebp6;
    int32_t eax7;
    int32_t ebp8;
    int32_t edx9;
    void** v10;
    int32_t ebp11;
    struct s6* v12;
    int32_t ebp13;

    *reinterpret_cast<int32_t*>(ebp6 - 40) = eax7;
    *reinterpret_cast<int32_t*>(ebp8 - 44) = edx9;
    v10 = *reinterpret_cast<void***>(ebp11 - 52);
    _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(v10, a1, a2, a3, a4, a5);
    v12 = *reinterpret_cast<struct s6**>(ebp13 - 40);
    _Unwind_Resume(v12);
}

/* .L20 */
void L20(void** ecx, void** a2, void** a3) {
    read_uleb128(ecx, __return_address(), a2, a3);
    goto 0xa7a2;
}

struct s1057 {
    signed char[8] pad8;
    struct s18* f8;
};

struct s1058 {
    signed char[164] pad164;
    int32_t f164;
};

struct s1059 {
    signed char[12] pad12;
    struct s1058* f12;
};

/* .L147 */
void L147(void** ecx) {
    struct s18* edx2;
    struct s1057* ebp3;
    void** v4;
    int32_t ebp5;
    void* ebp6;
    void** eax7;
    struct s1058* edi8;
    struct s1059* ebp9;
    int32_t ebp10;
    int32_t ebp11;

    edx2 = ebp3->f8;
    base_of_encoded_value(ecx, __return_address());
    v4 = *reinterpret_cast<void***>(ebp5 - 44);
    eax7 = read_encoded_value_with_base(v4, reinterpret_cast<int32_t>(ebp6) + 0xffffffe4, edx2, edx2, __return_address());
    edi8 = ebp9->f12;
    *reinterpret_cast<void***>(ebp10 - 44) = eax7;
    edi8->f164 = *reinterpret_cast<int32_t*>(ebp11 - 28);
    goto 0xb040;
}

struct s1060 {
    signed char[12] pad12;
    void* f12;
};

/* .L152 */
void L152(void** ecx, void** a2, void** a3) {
    void** eax4;
    int32_t ebp5;
    int32_t ebp6;
    struct s1060* ebp7;

    eax4 = read_uleb128(ecx, __return_address(), a2, a3);
    *reinterpret_cast<void***>(ebp5 - 44) = eax4;
    if (*reinterpret_cast<uint32_t*>(ebp6 - 36) > 17) 
        goto 0xb040;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(ebp7->f12) + *reinterpret_cast<uint32_t*>(ebp6 - 36) * 8 + 4) = 0;
    goto 0xb040;
}

struct s1061 {
    signed char[12] pad12;
    void* f12;
};

/* .L154 */
void L154(void** ecx, void** a2, void** a3) {
    void** eax4;
    int32_t ebp5;
    int32_t ebp6;
    struct s1061* ebp7;

    eax4 = read_uleb128(ecx, __return_address(), a2, a3);
    *reinterpret_cast<void***>(ebp5 - 44) = eax4;
    if (*reinterpret_cast<uint32_t*>(ebp6 - 36) > 17) 
        goto 0xb040;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(ebp7->f12) + *reinterpret_cast<uint32_t*>(ebp6 - 36) * 8 + 4) = 0;
    goto 0xb040;
}

struct s1062 {
    signed char[12] pad12;
    void* f12;
};

/* .L153 */
void L153(void** ecx, void** a2, void** a3) {
    void** eax4;
    int32_t ebp5;
    int32_t ebp6;
    struct s1062* ebp7;

    eax4 = read_uleb128(ecx, __return_address(), a2, a3);
    *reinterpret_cast<void***>(ebp5 - 44) = eax4;
    if (*reinterpret_cast<uint32_t*>(ebp6 - 36) > 17) 
        goto 0xb040;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(ebp7->f12) + *reinterpret_cast<uint32_t*>(ebp6 - 36) * 8 + 4) = 6;
    goto 0xb040;
}

struct s1063 {
    int32_t f0;
    int32_t f4;
};

struct s1064 {
    signed char[12] pad12;
    int32_t* f12;
};

/* .L155 */
void L155(void** ecx, void** a2, void** a3) {
    void** eax4;
    int32_t ebp5;
    int32_t ebp6;
    int32_t edx7;
    int32_t ebp8;
    struct s1063* eax9;
    struct s1064* ebp10;

    read_uleb128(ecx, __return_address(), a2, a3);
    eax4 = read_uleb128(ecx, __return_address(), a2, a3);
    *reinterpret_cast<void***>(ebp5 - 44) = eax4;
    if (*reinterpret_cast<uint32_t*>(ebp6 - 36) > 17) 
        goto 0xb040;
    edx7 = *reinterpret_cast<int32_t*>(ebp8 - 28);
    eax9 = reinterpret_cast<struct s1063*>(ebp10->f12 + *reinterpret_cast<uint32_t*>(ebp6 - 36) * 2);
    eax9->f4 = 2;
    eax9->f0 = edx7;
    goto 0xb040;
}

struct s1065 {
    signed char[144] pad144;
    int32_t f144;
};

struct s1067 {
    signed char[144] pad144;
    struct s1065* f144;
};

struct s1066 {
    signed char[12] pad12;
    struct s1067* f12;
};

/* .L156 */
void L156() {
    int32_t ebp1;
    struct s1065* eax2;
    int32_t ebp3;
    int32_t ebp4;
    int32_t ecx5;
    struct s1066* ebp6;

    if (!*reinterpret_cast<int32_t*>(ebp1 - 52)) {
        eax2 = reinterpret_cast<struct s1065*>(reinterpret_cast<uint32_t>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 0xc0 + 15) & 0xfffffff0);
    } else {
        eax2 = *reinterpret_cast<struct s1065**>(ebp3 - 52);
        *reinterpret_cast<int32_t*>(ebp4 - 52) = eax2->f144;
    }
    ecx5 = 41;
    while (ecx5) {
        --ecx5;
    }
    ebp6->f12->f144 = eax2;
    goto 0xb040;
}

struct s1068 {
    signed char[12] pad12;
    int32_t* f12;
};

struct s1069 {
    int32_t f0;
    signed char[140] pad144;
    int32_t f144;
};

struct s1071 {
    signed char[144] pad144;
    struct s1069* f144;
};

struct s1070 {
    signed char[12] pad12;
    struct s1071* f12;
};

/* .L157 */
void L157() {
    int32_t ecx1;
    int32_t* edi2;
    struct s1068* ebp3;
    struct s1069* eax4;
    struct s1070* ebp5;
    struct s1069* esi6;
    int32_t ecx7;
    int32_t ebp8;
    int32_t ebp9;

    ecx1 = 41;
    edi2 = ebp3->f12;
    eax4 = ebp5->f12->f144;
    esi6 = eax4;
    while (ecx1) {
        --ecx1;
        *edi2 = esi6->f0;
        ++edi2;
        esi6 = reinterpret_cast<struct s1069*>(&esi6->pad144);
    }
    ecx7 = *reinterpret_cast<int32_t*>(ebp8 - 52);
    *reinterpret_cast<struct s1069**>(ebp9 - 52) = eax4;
    eax4->f144 = ecx7;
    goto 0xb040;
}

struct s1073 {
    signed char[152] pad152;
    int32_t f152;
};

struct s1072 {
    signed char[12] pad12;
    struct s1073* f12;
};

struct s1074 {
    signed char[148] pad148;
    int32_t f148;
    signed char[8] pad160;
    int32_t f160;
};

struct s1075 {
    signed char[12] pad12;
    struct s1074* f12;
};

/* .L158 */
void L158(void** ecx, void** a2, void** a3) {
    struct s1072* ebp4;
    int32_t ebp5;
    void** eax6;
    struct s1074* esi7;
    struct s1075* ebp8;
    int32_t ebp9;
    int32_t ebp10;

    read_uleb128(ecx, __return_address(), a2, a3);
    ebp4->f12->f152 = *reinterpret_cast<int32_t*>(ebp5 - 32);
    eax6 = read_uleb128(ecx, __return_address(), a2, a3);
    esi7 = ebp8->f12;
    *reinterpret_cast<void***>(ebp9 - 44) = eax6;
    esi7->f148 = *reinterpret_cast<int32_t*>(ebp10 - 32);
    esi7->f160 = 1;
    goto 0xb040;
}

/* .L163 */
void L163(void** ecx, void** a2, void** a3) {
    void** eax4;
    uint32_t edx5;
    int32_t ebp6;
    int32_t ebp7;

    read_uleb128(ecx, __return_address(), a2, a3);
    eax4 = read_sleb128(ecx, __return_address());
    edx5 = *reinterpret_cast<uint32_t*>(ebp6 - 36);
    *reinterpret_cast<void***>(ebp7 - 44) = eax4;
    if (edx5 > 17) 
        goto 0xb040;
}

struct s1076 {
    signed char[12] pad12;
    void* f12;
};

/* .L167 */
void L167(void** ecx, void** a2, void** a3) {
    void** eax4;
    void* esi5;
    struct s1076* ebp6;
    uint32_t edx7;
    int32_t ebp8;
    int32_t ebp9;

    read_uleb128(ecx, __return_address(), a2, a3);
    eax4 = read_sleb128(ecx, __return_address());
    esi5 = ebp6->f12;
    edx7 = *reinterpret_cast<uint32_t*>(ebp8 - 36);
    *reinterpret_cast<void***>(ebp9 - 44) = eax4;
    if (edx7 > 17) 
        goto 0xb040;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(esi5) + edx7 * 8 + 4) = 4;
    goto 0xacbb;
}

struct s1077 {
    signed char[104] pad104;
    int32_t f104;
};

struct s1078 {
    signed char[8] pad8;
    struct s1077* f8;
};

/* .L169 */
void L169(void** ecx, void** a2, void** a3) {
    void** eax4;
    struct s1077* esi5;
    struct s1078* ebp6;
    int32_t ebp7;
    int32_t ebp8;

    eax4 = read_uleb128(ecx, __return_address(), a2, a3);
    esi5 = ebp6->f8;
    *reinterpret_cast<void***>(ebp7 - 44) = eax4;
    esi5->f104 = *reinterpret_cast<int32_t*>(ebp8 - 32);
    goto 0xb040;
}

/* .L247 */
void L247() {
    goto 0xb5ba;
}

struct s1079 {
    signed char[99] pad99;
    unsigned char f99;
};

/* .L313 */
void L313() {
    int32_t ebp1;
    int32_t esi2;

    if ((*reinterpret_cast<struct s1079**>(ebp1 - 0xac))->f99 & 64) {
        *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(*reinterpret_cast<struct s1079**>(ebp1 - 0xac)) + esi2 + 0x6c) = 0;
    }
    goto 0xb82d;
}

struct s1080 {
    signed char[99] pad99;
    unsigned char f99;
};

/* .L316 */
void L316(void** ecx, void** a2, void** a3) {
    void* ebp4;
    int32_t edi5;
    void* eax6;
    int32_t ebp7;
    int32_t esi8;
    int32_t ebp9;
    int32_t esi10;

    read_uleb128(ecx, __return_address(), a2, a3);
    eax6 = execute_stack_op(reinterpret_cast<int32_t>(ebp4) + 0xffffff68, edi5, ecx, ecx, __return_address());
    if ((*reinterpret_cast<struct s1080**>(ebp7 - 0xac))->f99 & 64) {
        *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(*reinterpret_cast<struct s1080**>(ebp7 - 0xac)) + esi8 + 0x6c) = 0;
    }
    (*reinterpret_cast<void***>(ebp9 - 0xac))[esi10] = eax6;
    goto 0xb830;
}

/* .L317 */
void L317() {
    int32_t esi1;
    int32_t ebx2;
    int32_t ebp3;
    int32_t esi4;

    if (*reinterpret_cast<unsigned char*>(esi1 + ebx2 + 0x12e8) > 4) 
        goto 0xb755;
    *reinterpret_cast<signed char*>(*reinterpret_cast<int32_t*>(ebp3 - 0xac) + esi4 + 0x6c) = 1;
}

void** _Unwind_Resume_or_Rethrow(struct s395* a1) {
    void* ebp2;
    void** eax3;
    void** ecx4;
    void** eax5;
    void* eax6;
    int32_t v7;
    int32_t v8;
    void** v9;
    void** v10;
    void** v11;

    ebp2 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4);
    __x86_get_pc_thunk_bx();
    if (!a1->f12) {
        eax3 = _Unwind_RaiseException(a1);
        return eax3;
    }
    uw_init_context_1(__return_address());
    ecx4 = reinterpret_cast<void**>(32);
    while (ecx4) {
        --ecx4;
    }
    eax5 = _Unwind_ForcedUnwind_Phase2();
    if (eax5 != 7) 
        goto addr_c1f9_7;
    addr_c1fe_8:
    eax6 = uw_install_context_1(ecx4);
    _Unwind_DebugHook(v7, v8, eax6, eax6);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(ebp2) + reinterpret_cast<uint32_t>(eax6) + 4) = v8;
    goto *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(ebp2) + reinterpret_cast<uint32_t>(eax6) + 4);
    addr_c1f9_7:
    fun_21e0(v9, v10, v11);
    goto addr_c1fe_8;
}

int32_t _Unwind_Backtrace(int32_t a1, int32_t a2) {
    void* ebp3;
    void** eax4;
    int32_t eax5;
    int32_t eax6;

    ebp3 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4);
    uw_init_context_1(__return_address());
    while (((eax4 = uw_frame_state_for(), eax4 == 5) || !eax4) && (eax5 = reinterpret_cast<int32_t>(a1(reinterpret_cast<int32_t>(ebp3) - 0x148, a2, eax4, eax4)), !eax5)) {
        if (eax4 == 5) 
            goto addr_c2f1_4;
        uw_update_context();
    }
    eax6 = 3;
    addr_c2f6_7:
    return eax6;
    addr_c2f1_4:
    eax6 = 5;
    goto addr_c2f6_7;
}

/* .L95 */
void L95(void** ecx) {
    read_uleb128(ecx, __return_address());
    goto 0xc5ed;
}

struct s1081 {
    signed char[8] pad8;
    int32_t f8;
};

void fun_22c6() {
    struct s1081* ebx1;

    goto ebx1->f8;
}

void fun_2226() {
    goto 0x2000;
}

void main() {
    fun_2ad1();
}

void fun_2126() {
    goto 0x2000;
}

void fun_3202(void** a1, void** a2, int32_t a3, void** a4, void** a5) {
    int32_t ebp6;
    int32_t eax7;
    int32_t ebp8;
    int32_t edx9;
    void* ebp10;

    *reinterpret_cast<int32_t*>(ebp6 - 0xc4) = eax7;
    *reinterpret_cast<int32_t*>(ebp8 - 0xc8) = edx9;
    _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(reinterpret_cast<int32_t>(ebp10) + 0xffffed60, a1, a2, a3, a4, a5);
    goto 0x3507;
}

void fun_5309(void** a1, void** a2, unsigned char* a3) {
    int32_t ebp4;
    int32_t eax5;
    int32_t ebp6;
    int32_t edx7;
    void* ebp8;
    struct s6* v9;
    int32_t ebp10;

    *reinterpret_cast<int32_t*>(ebp4 - 40) = eax5;
    *reinterpret_cast<int32_t*>(ebp6 - 44) = edx7;
    _ZNSt6__ndk16vectorIhNS_9allocatorIhEEED2Ev(reinterpret_cast<int32_t>(ebp8) + 0xffffffe0, a1, a2, a3);
    v9 = *reinterpret_cast<struct s6**>(ebp10 - 40);
    _Unwind_Resume(v9);
}

void fun_2016() {
    goto 0x2000;
}

void fun_8fda(int32_t a1) {
    int32_t ebp2;
    int32_t edx3;
    int32_t eax4;

    *reinterpret_cast<int32_t*>(ebp2 - 36) = edx3;
    __clang_call_terminate(eax4, a1);
}

/* base64_encode(unsigned char const*, unsigned int) */
void _Z13base64_encodePKhj() {
    fun_9dce();
}

/* .L24 */
void L24(void** ecx) {
    read_sleb128(ecx, __return_address());
}

void fun_21e6() {
    goto 0x2000;
}

struct s1082 {
    signed char[76] pad76;
    int32_t f76;
};

int32_t _Unwind_GetIP(struct s1082* a1) {
    return a1->f76;
}

struct s1083 {
    signed char[12] pad12;
    void** f12;
};

struct s1084 {
    signed char[148] pad148;
    int32_t f148;
    signed char[20] pad172;
    int32_t f172;
};

struct s1085 {
    signed char[12] pad12;
    struct s1084* f12;
};

struct s1087 {
    signed char[160] pad160;
    int32_t f160;
};

struct s1086 {
    signed char[12] pad12;
    struct s1087* f12;
};

/* .L164 */
void L164(void** ecx, void** a2, void** a3) {
    void** ecx4;
    struct s1083* ebp5;
    int32_t ebp6;
    void** eax7;
    int32_t ebp8;
    struct s1084* esi9;
    struct s1085* ebp10;
    struct s1086* ebp11;
    int32_t ebp12;

    read_uleb128(ecx, __return_address(), a2, a3);
    ecx4 = ebp5->f12;
    *reinterpret_cast<void**>(ecx4 + 0x98) = *reinterpret_cast<void**>(ebp6 - 32);
    eax7 = read_sleb128(ecx4, __return_address());
    *reinterpret_cast<void***>(ebp8 - 44) = eax7;
    esi9 = ebp10->f12;
    ebp11->f12->f160 = 1;
    esi9->f148 = *reinterpret_cast<int32_t*>(ebp12 - 28) * esi9->f172;
    goto 0xb040;
}

struct s1089 {
    signed char[164] pad164;
    uint32_t f164;
    signed char[8] pad176;
    int32_t f176;
};

struct s1088 {
    signed char[12] pad12;
    struct s1089* f12;
};

struct s1090 {
    signed char[1] pad1;
    unsigned char f1;
};

/* .L148 */
void L148() {
    struct s1088* ebp1;
    int32_t esi2;
    struct s1090* eax3;
    int32_t ebp4;
    int32_t eax5;

    ebp1->f12->f164 = esi2 + eax3->f1 * ebp1->f12->f176;
    *reinterpret_cast<int32_t*>(ebp4 - 44) = eax5 + 2;
    goto 0xb040;
}

struct s1091 {
    signed char[152] pad152;
    int32_t f152;
};

struct s1092 {
    signed char[12] pad12;
    struct s1091* f12;
};

/* .L159 */
void L159(void** ecx, void** a2, void** a3) {
    void** eax4;
    struct s1091* ecx5;
    struct s1092* ebp6;
    int32_t ebp7;
    int32_t ebp8;

    eax4 = read_uleb128(ecx, __return_address(), a2, a3);
    ecx5 = ebp6->f12;
    *reinterpret_cast<void***>(ebp7 - 44) = eax4;
    ecx5->f152 = *reinterpret_cast<int32_t*>(ebp8 - 32);
}

struct s1094 {
    signed char[164] pad164;
    int32_t f164;
};

struct s1093 {
    signed char[12] pad12;
    struct s1094* f12;
};

struct s1096 {
    signed char[176] pad176;
    int32_t f176;
};

struct s1095 {
    signed char[12] pad12;
    struct s1096* f12;
};

/* .L150 */
void L150() {
    struct s1093* ebp1;
    int32_t esi2;
    struct s1095* ebp3;
    int32_t eax4;

    ebp1->f12->f164 = esi2 + ebp3->f12->f176 * *reinterpret_cast<int32_t*>(eax4 + 5 - 4);
    goto 0xac5d;
}

struct s1097 {
    signed char[12] pad12;
    void** f12;
};

struct s1098 {
    void** f0;
    signed char[3] pad4;
    int32_t f4;
};

/* .L168 */
void L168(void** ecx, void** a2, void** a3) {
    void** eax4;
    int32_t ebp5;
    struct s1097* ebp6;
    struct s1098* edx7;

    eax4 = read_uleb128(ecx, __return_address(), a2, a3);
    if (*reinterpret_cast<uint32_t*>(ebp5 - 36) <= 17) {
        ecx = ebp6->f12;
        edx7 = reinterpret_cast<struct s1098*>(ecx + *reinterpret_cast<uint32_t*>(ebp5 - 36) * 8);
        edx7->f4 = 5;
        edx7->f0 = eax4;
    }
    read_uleb128(ecx, __return_address(), a2, a3);
    goto 0xac5d;
}

struct s1099 {
    signed char[12] pad12;
    void* f12;
};

/* .L170 */
void L170(void** ecx, void** a2, void** a3) {
    void** eax4;
    int32_t ebp5;
    int32_t ebp6;
    struct s1099* ebp7;

    read_uleb128(ecx, __return_address(), a2, a3);
    eax4 = read_uleb128(ecx, __return_address(), a2, a3);
    *reinterpret_cast<void***>(ebp5 - 44) = eax4;
    if (*reinterpret_cast<uint32_t*>(ebp6 - 36) > 17) 
        goto 0xb040;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(ebp7->f12) + *reinterpret_cast<uint32_t*>(ebp6 - 36) * 8 + 4) = 1;
    goto 0xacbb;
}

/* .L249 */
void L249() {
    __asm__("cdq ");
    goto 0xb582;
}

/* .L315 */
void L315() {
    void* eax1;
    int32_t ebp2;
    int32_t esi3;
    void* ebp4;
    void* ebp5;
    void** edx6;
    void** edx7;
    int32_t esi8;
    int32_t ebx9;

    eax1 = (*reinterpret_cast<void***>(ebp2 - 0xb0))[esi3 * 2];
    if (*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(ebp4) + reinterpret_cast<uint32_t>(eax1) - 44)) {
        _Unwind_GetGR(reinterpret_cast<int32_t>(ebp5) + 0xffffff68, eax1, edx6, edx7, __return_address());
        if (*reinterpret_cast<unsigned char*>(esi8 + ebx9 + 0x12e8) <= 4) 
            goto 0xb75a; else 
            goto "???";
    }
}

/* .L318 */
void L318(void** ecx, void** a2, void** a3) {
    void** edx4;
    int32_t ebp5;
    void* ebp6;
    int32_t edi7;

    edx4 = *reinterpret_cast<void***>(ebp5 - 0xb4);
    read_uleb128(ecx, __return_address(), a2, a3);
    execute_stack_op(reinterpret_cast<int32_t>(ebp6) + 0xffffff68, edi7, edx4, edx4, __return_address());
}

struct s1100 {
    signed char[4] pad4;
    int32_t f4;
    int32_t f8;
    int32_t f12;
    signed char[72] pad88;
    int16_t f88;
    int16_t f90;
    signed char f92;
};

struct s1100* __frame_state_for(int32_t a1, struct s1100* a2) {
    int32_t ecx3;
    void* ebp4;
    struct s1100* esi5;
    void** eax6;
    struct s1100* edx7;
    int32_t v8;
    int32_t* eax9;
    int32_t* v10;
    signed char* edx11;
    int32_t edi12;
    int32_t v13;
    int32_t v14;
    int32_t v15;
    int32_t v16;
    int32_t eax17;
    int32_t v18;
    int32_t eax19;
    int32_t v20;
    int32_t v21;
    int32_t v22;

    ecx3 = 32;
    ebp4 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4);
    esi5 = a2;
    while (ecx3) {
        --ecx3;
        esi5 = reinterpret_cast<struct s1100*>(&esi5->f4);
    }
    eax6 = uw_frame_state_for();
    edx7 = reinterpret_cast<struct s1100*>(0);
    if (!eax6 && v8 != 2) {
        eax9 = reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(ebp4) - 0xc8);
        v10 = reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(ebp4) - 56);
        edx11 = &esi5->f92;
        edi12 = reinterpret_cast<int32_t>(esi5) * -3;
        do {
            v13 = v14;
            *edx11 = *reinterpret_cast<signed char*>(&v13);
            if (*reinterpret_cast<signed char*>(&v13) == 1 || *reinterpret_cast<signed char*>(&v13) == 2) {
                *reinterpret_cast<int32_t*>(edi12 + reinterpret_cast<int32_t>(edx11) * 4 - 0x160) = v15;
            } else {
                *reinterpret_cast<int32_t*>(edi12 + reinterpret_cast<int32_t>(edx11) * 4 - 0x160) = 0;
            }
            ++edx11;
            eax9 = eax9 + 2;
        } while (eax9 != v10);
        edx7 = esi5;
        esi5->f8 = v16;
        eax17 = v18;
        esi5->f88 = *reinterpret_cast<int16_t*>(&eax17);
        eax19 = v20;
        esi5->f90 = *reinterpret_cast<int16_t*>(&eax19);
        esi5->f12 = v21;
        esi5->f4 = v22;
    }
    return edx7;
}

void _Unwind_ForcedUnwind(void** a1, void** a2, void** a3) {
    void* ebp4;
    void** edx5;
    int32_t ecx6;
    void** eax7;
    void** eax8;
    void* eax9;
    int32_t v10;
    int32_t v11;

    ebp4 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4);
    uw_init_context_1(__return_address());
    edx5 = a1;
    ecx6 = 32;
    *reinterpret_cast<void***>(edx5 + 12) = a2;
    eax7 = a3;
    while (ecx6) {
        --ecx6;
    }
    *reinterpret_cast<void***>(edx5 + 16) = eax7;
    eax8 = _Unwind_ForcedUnwind_Phase2();
    if (!reinterpret_cast<int1_t>(eax8 == 7)) {
        return;
    } else {
        eax9 = uw_install_context_1(edx5);
        _Unwind_DebugHook(v10, v11, eax9, eax9);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(ebp4) + reinterpret_cast<uint32_t>(eax9) + 4) = v11;
        goto *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(ebp4) + reinterpret_cast<uint32_t>(eax9) + 4);
    }
}

struct s1101 {
    signed char[8] pad8;
    uint32_t f8;
};

struct s1102 {
    signed char[8] pad8;
    uint32_t f8;
};

uint32_t fde_unencoded_compare() {
    uint32_t eax1;
    struct s1101* v2;
    struct s1102* v3;

    eax1 = 1;
    if (v2->f8 <= v3->f8) {
        eax1 = v3->f8 - (v3->f8 + reinterpret_cast<uint1_t>(v3->f8 < v3->f8 + reinterpret_cast<uint1_t>(v2->f8 < v3->f8)));
    }
    return eax1;
}

struct s1103 {
    signed char[8] pad8;
    void** f8;
};

struct s1104 {
    signed char[8] pad8;
    void** f8;
};

uint32_t fde_single_encoding_compare(void** a1, struct s1103* a2, struct s1104* a3) {
    void* ebp4;
    void** eax5;
    uint32_t eax6;
    uint32_t v7;
    uint32_t v8;
    uint32_t v9;

    ebp4 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4);
    eax5 = base_from_object(a1);
    read_encoded_value_with_base(&a2->f8, reinterpret_cast<int32_t>(ebp4) + 0xfffffff0, eax5, eax5);
    read_encoded_value_with_base(&a3->f8, reinterpret_cast<int32_t>(ebp4) + 0xfffffff4, eax5, eax5);
    eax6 = 1;
    if (v7 <= v8) {
        eax6 = reinterpret_cast<unsigned char>(eax5) - (reinterpret_cast<unsigned char>(eax5) + reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(eax5) < reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(eax5) + reinterpret_cast<uint1_t>(v9 < v8))));
    }
    return eax6;
}

/* .L99 */
void L99(void** ecx) {
    read_sleb128(ecx, __return_address());
}

struct s1105 {
    signed char[8] pad8;
    void** f8;
};

struct s1106 {
    signed char[8] pad8;
    void** f8;
};

uint32_t fde_mixed_encoding_compare(void** ecx, void** a2, struct s1105* a3, struct s1106* a4) {
    void* ebp5;
    void** ecx6;
    void** eax7;
    uint32_t eax8;
    uint32_t v9;
    uint32_t v10;
    uint32_t v11;

    ebp5 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4);
    get_fde_encoding(ecx);
    base_from_object(ecx);
    ecx6 = reinterpret_cast<void**>(&a3->f8);
    read_encoded_value_with_base(ecx6, reinterpret_cast<int32_t>(ebp5) + 0xfffffff0, a2, a2);
    get_fde_encoding(ecx6);
    eax7 = base_from_object(ecx6);
    read_encoded_value_with_base(&a4->f8, reinterpret_cast<int32_t>(ebp5) + 0xfffffff4, a2, a2);
    eax8 = 1;
    if (v9 <= v10) {
        eax8 = reinterpret_cast<unsigned char>(eax7) - (reinterpret_cast<unsigned char>(eax7) + reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(eax7) < reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(eax7) + reinterpret_cast<uint1_t>(v11 < v10))));
    }
    return eax8;
}

struct s1107 {
    void** f0;
    signed char[7] pad8;
    void** f8;
    signed char[3] pad12;
    uint16_t f12;
    signed char[2] pad16;
    int32_t f16;
    int32_t f20;
    int32_t f24;
    int32_t f28;
};

struct s1108 {
    signed char[748] pad748;
    int32_t f748;
    int32_t f752;
    signed char[4152] pad4908;
    int32_t f4908;
    int32_t f4912;
    void** f4916;
    signed char[39] pad4956;
    void** f4956;
    signed char[187] pad5144;
    int32_t f5144;
};

struct s1109 {
    signed char f0;
    signed char[1] pad2;
    signed char f2;
    signed char f3;
    void** f4;
};

struct s1110 {
    void** f0;
    signed char[3] pad4;
    void* f4;
};

struct s1111 {
    int32_t f0;
    void** f4;
};

void** _Unwind_IteratePhdrCallback(struct s1107* a1, uint32_t a2, void** a3) {
    void* ebp4;
    struct s1108* ebx5;
    void* ebx6;
    struct s1107* eax7;
    void** v8;
    void** edi9;
    void** v10;
    int1_t below_or_equal11;
    void** v12;
    void** eax13;
    void** edx14;
    int32_t edx15;
    int32_t esi16;
    int32_t edi17;
    void** ecx18;
    void** esi19;
    void** edi20;
    void** v21;
    void** edi22;
    void** esi23;
    void** edx24;
    void** edi25;
    void** eax26;
    void** esi27;
    void** v28;
    void** v29;
    int32_t v30;
    void** v31;
    void** v32;
    void** eax33;
    void** v34;
    void** eax35;
    void** ecx36;
    void** eax37;
    int1_t cf38;
    int32_t eax39;
    void** eax40;
    void** eax41;
    struct s1109* eax42;
    struct s1109* esi43;
    void** v44;
    void** v45;
    void** v46;
    void** eax47;
    void** ecx48;
    void** v49;
    void** eax50;
    void** edx51;
    void** v52;
    void** eax53;
    int32_t v54;
    void** edi55;
    void** ecx56;
    void** v57;
    uint32_t edx58;
    void** ecx59;
    struct s1110* edi60;
    void** v61;
    void** eax62;
    void** v63;
    void* eax64;
    void** esi65;
    void* v66;
    uint32_t v67;
    uint32_t v68;
    void** v69;
    struct s1111* edi70;
    void** eax71;

    ebp4 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4);
    __x86_get_pc_thunk_bx();
    ebx5 = reinterpret_cast<struct s1108*>(reinterpret_cast<int32_t>(ebx6) + 0x66d1);
    eax7 = a1;
    v8 = eax7->f8;
    edi9 = eax7->f0;
    v10 = edi9;
    if (edi9) {
        addr_c895_2:
        below_or_equal11 = a2 <= 31;
        *reinterpret_cast<unsigned char*>(&v12 + 3) = reinterpret_cast<uint1_t>(!below_or_equal11);
        if (below_or_equal11 || !*reinterpret_cast<void***>(a3 + 20)) {
            if (a2 <= 13) {
                eax13 = reinterpret_cast<void**>(0xffffffff);
            } else {
                edx14 = reinterpret_cast<void**>(0);
                goto addr_c9ce_6;
            }
        } else {
            edx15 = eax7->f20;
            if (edx15 != ebx5->f752 || (eax7->f16 != ebx5->f748 || (eax7->f28 != ebx5->f4912 || eax7->f24 != ebx5->f4908))) {
                esi16 = eax7->f24;
                edi17 = eax7->f28;
                ebx5->f748 = eax7->f16;
                ecx18 = reinterpret_cast<void**>(&ebx5->f4956);
                ebx5->f752 = edx15;
                edx14 = reinterpret_cast<void**>(0);
                ebx5->f4908 = esi16;
                ebx5->f4912 = edi17;
                do {
                    *reinterpret_cast<int32_t*>(reinterpret_cast<unsigned char>(edx14) + reinterpret_cast<uint32_t>(ebx5) + 0x135c) = 0;
                    esi19 = edx14 + 24;
                    *reinterpret_cast<int32_t*>(reinterpret_cast<unsigned char>(edx14) + reinterpret_cast<uint32_t>(ebx5) + 0x1360) = 0;
                    *reinterpret_cast<void**>(reinterpret_cast<unsigned char>(edx14) + reinterpret_cast<uint32_t>(ebx5) + 0x1370) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(esi19) + reinterpret_cast<unsigned char>(ecx18));
                    edx14 = esi19;
                } while (!reinterpret_cast<int1_t>(esi19 == 0xc0));
                *reinterpret_cast<signed char*>(&edx14) = 0;
                ebx5->f5144 = 0;
                ebx5->f4916 = ecx18;
                *reinterpret_cast<void***>(a3 + 20) = reinterpret_cast<void**>(0);
                goto addr_c9ce_6;
            } else {
                edi20 = ebx5->f4916;
                edx14 = reinterpret_cast<void**>(0);
                v21 = edi20;
                ecx18 = edi20;
                edi22 = reinterpret_cast<void**>(0);
                while (ecx18) {
                    if (reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(a3)) < reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(ecx18))) 
                        goto addr_c93a_14;
                    if (reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(a3)) < reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(ecx18 + 4))) 
                        goto addr_c90b_16;
                    addr_c93a_14:
                    if (!(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(ecx18)) | reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(ecx18 + 4)))) 
                        goto addr_c9d2_17;
                    edx14 = ecx18;
                    if (*reinterpret_cast<void***>(ecx18 + 20)) {
                        edi22 = ecx18;
                    }
                    ecx18 = *reinterpret_cast<void***>(ecx18 + 20);
                }
                goto addr_c9d4_21;
            }
        }
    } else {
        esi23 = reinterpret_cast<void**>(static_cast<uint32_t>(eax7->f12));
        ecx18 = reinterpret_cast<void**>(0);
        edx24 = v8;
        while (reinterpret_cast<unsigned char>(ecx18) < reinterpret_cast<unsigned char>(esi23)) {
            edi25 = edx24;
            edx24 = edx24 + 32;
            if (*reinterpret_cast<int32_t*>(edx24 + 0xffffffe0) == 6) 
                goto addr_c887_25;
            ++ecx18;
        }
        goto addr_c895_2;
    }
    addr_ccd9_27:
    return eax13;
    addr_c9ce_6:
    edi22 = reinterpret_cast<void**>(0);
    addr_c9d4_21:
    eax26 = reinterpret_cast<void**>(static_cast<uint32_t>(eax7->f12));
    esi27 = reinterpret_cast<void**>(0);
    v28 = reinterpret_cast<void**>(0);
    v29 = reinterpret_cast<void**>(0);
    v30 = 0;
    v31 = reinterpret_cast<void**>(0);
    v32 = eax26;
    while (--v32, v32 != 0xffffffff) {
        if (!reinterpret_cast<int1_t>(*reinterpret_cast<void***>(v8) == 1)) {
            if (*reinterpret_cast<void***>(v8) == 0x6474e550) {
                esi27 = v8;
            } else {
                eax33 = v31;
                if (*reinterpret_cast<void***>(v8) == 2) {
                    eax33 = v8;
                }
                v31 = eax33;
            }
        } else {
            v34 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v10) + reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(v8 + 8)));
            ecx18 = v34;
            eax35 = *reinterpret_cast<void***>(a3);
            if (reinterpret_cast<unsigned char>(eax35) >= reinterpret_cast<unsigned char>(ecx18)) {
                ecx36 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(ecx18) + reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(v8 + 20)));
                eax37 = v28;
                cf38 = reinterpret_cast<unsigned char>(eax35) < reinterpret_cast<unsigned char>(ecx36);
                if (cf38) {
                    eax37 = ecx36;
                }
                ecx18 = v34;
                v28 = eax37;
                eax39 = 1;
                if (!cf38) {
                    eax39 = v30;
                }
                if (!cf38) {
                    ecx18 = v29;
                }
                v30 = eax39;
                v29 = ecx18;
            }
        }
        v8 = v8 + 32;
    }
    if (!v30) 
        goto addr_ca79_45;
    if (*reinterpret_cast<unsigned char*>(&v12 + 3)) {
        if (edi22 && edx14) {
            *reinterpret_cast<void***>(edi22 + 20) = *reinterpret_cast<void***>(edx14 + 20);
            eax40 = ebx5->f4916;
            ebx5->f4916 = edx14;
            *reinterpret_cast<void***>(edx14 + 20) = eax40;
        }
        eax41 = ebx5->f4916;
        *reinterpret_cast<void***>(eax41 + 12) = esi27;
        *reinterpret_cast<void***>(eax41 + 8) = v10;
        *reinterpret_cast<void***>(eax41 + 16) = v31;
        *reinterpret_cast<void***>(eax41) = v29;
        *reinterpret_cast<void***>(eax41 + 4) = v28;
    }
    addr_cac3_50:
    if (!esi27) {
        addr_ca79_45:
        eax13 = reinterpret_cast<void**>(0);
        goto addr_ccd9_27;
    } else {
        eax42 = reinterpret_cast<struct s1109*>(reinterpret_cast<unsigned char>(v10) + reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(esi27 + 8)));
        esi43 = eax42;
        if (eax42->f0 != 1) 
            goto addr_ccc8_52;
        *reinterpret_cast<void***>(a3 + 8) = reinterpret_cast<void**>(0);
        if (v31) 
            goto addr_cae8_54;
    }
    addr_cb0c_55:
    base_from_cb_data(ecx18);
    v44 = ecx18;
    v45 = ecx18;
    v46 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp4) + 0xffffffc8);
    eax47 = read_encoded_value_with_base(&esi43->f4, v46, v45, v44);
    ecx48 = eax47;
    if (esi43->f2 == -1 || esi43->f3 != 59) {
        addr_cc47_56:
        v49 = *reinterpret_cast<void***>(a3);
        eax50 = linear_search_fdes(ecx48, v49, v46, v45, v44);
        *reinterpret_cast<void***>(a3 + 16) = eax50;
        if (eax50) {
            get_fde_encoding(ecx48);
            base_from_cb_data(ecx48);
            edx51 = *reinterpret_cast<void***>(a3 + 16);
            read_encoded_value_with_base(edx51 + 8, reinterpret_cast<int32_t>(ebp4) + 0xffffffcc, a3, a3);
            *reinterpret_cast<void***>(a3 + 12) = v52;
            goto addr_ccc8_52;
        }
    } else {
        base_from_cb_data(ecx48);
        v44 = a3;
        ecx48 = ecx48;
        v45 = a3;
        v46 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp4) + 0xffffffcc);
        eax53 = read_encoded_value_with_base(ecx48, v46, v45, v44);
        if (!v54) 
            goto addr_ccc8_52;
        if (*reinterpret_cast<unsigned char*>(&eax53) & 3) 
            goto addr_cc47_56;
    }
    edi55 = *reinterpret_cast<void***>(a3);
    ecx56 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax53)) + reinterpret_cast<uint32_t>(esi43));
    v57 = edi55;
    if (reinterpret_cast<unsigned char>(edi55) < reinterpret_cast<unsigned char>(ecx56)) {
        addr_ccc8_52:
        eax13 = reinterpret_cast<void**>(1);
        goto addr_ccd9_27;
    } else {
        edx58 = reinterpret_cast<uint32_t>(v54 - 1);
        ecx59 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax53 + edx58 * 8)) + reinterpret_cast<uint32_t>(esi43));
        if (reinterpret_cast<unsigned char>(edi55) >= reinterpret_cast<unsigned char>(ecx59)) {
            addr_cbeb_62:
            edi60 = reinterpret_cast<struct s1110*>(eax53 + edx58 * 8);
            v61 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(edi60->f4) + reinterpret_cast<uint32_t>(esi43));
            eax62 = get_fde_encoding(ecx59);
            eax64 = size_of_encoded_value(eax62, v63, v12, v32, v34);
            read_encoded_value_with_base(reinterpret_cast<unsigned char>(v61) + reinterpret_cast<uint32_t>(eax64) + 8, reinterpret_cast<int32_t>(ebp4) + 0xffffffd0, eax62, eax62);
            esi65 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(esi43) + reinterpret_cast<unsigned char>(edi60->f0));
            if (reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(a3)) < reinterpret_cast<unsigned char>(reinterpret_cast<int32_t>(v66) + reinterpret_cast<unsigned char>(esi65))) {
                *reinterpret_cast<void***>(a3 + 16) = v61;
            }
        } else {
            v67 = edx58;
            v68 = 0;
            while (v68 < v67) {
                edx58 = v67 + v68 >> 1;
                if (reinterpret_cast<unsigned char>(v57) < reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax53 + edx58 * 8)) + reinterpret_cast<uint32_t>(esi43))) {
                    v67 = edx58;
                } else {
                    v68 = edx58 + 1;
                    ecx59 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(*reinterpret_cast<void**>(reinterpret_cast<uint32_t>(eax53 + edx58 * 8) + 8)) + reinterpret_cast<uint32_t>(esi43));
                    if (reinterpret_cast<unsigned char>(v57) < reinterpret_cast<unsigned char>(ecx59)) 
                        goto addr_cbe4_69;
                }
            }
            goto addr_ccd4_70;
        }
    }
    *reinterpret_cast<void***>(a3 + 12) = esi65;
    goto addr_ccc8_52;
    addr_ccd4_70:
    eax13 = fun_21e0(v69, v12, v32);
    goto addr_ccd9_27;
    addr_cbe4_69:
    goto addr_cbeb_62;
    addr_cae8_54:
    edi70 = reinterpret_cast<struct s1111*>(reinterpret_cast<unsigned char>(v10) + reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(v31 + 8)));
    while (edi70->f0) {
        if (edi70->f0 == 3) 
            goto addr_cafc_74;
        edi70 = reinterpret_cast<struct s1111*>(reinterpret_cast<uint32_t>(edi70) + 8);
    }
    goto addr_cb0c_55;
    addr_cafc_74:
    *reinterpret_cast<void***>(a3 + 8) = edi70->f4;
    goto addr_cb0c_55;
    addr_c90b_16:
    esi27 = *reinterpret_cast<void***>(ecx18 + 12);
    v10 = *reinterpret_cast<void***>(ecx18 + 8);
    v31 = *reinterpret_cast<void***>(ecx18 + 16);
    if (ecx18 != v21) {
        eax71 = *reinterpret_cast<void***>(ecx18 + 20);
        ebx5->f4916 = ecx18;
        *reinterpret_cast<void***>(edi22 + 20) = eax71;
        *reinterpret_cast<void***>(ecx18 + 20) = v21;
        goto addr_cac3_50;
    }
    addr_c9d2_17:
    edx14 = ecx18;
    goto addr_c9d4_21;
    addr_c887_25:
    v10 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v8) - reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(edi25 + 8)));
    goto addr_c895_2;
}

void fun_20c6() {
    goto 0x2000;
}

void fun_2236() {
    goto 0x2000;
}

void fun_2186() {
    goto 0x2000;
}

void** __register_frame(void** a1) {
    void** eax2;
    void** eax3;
    int32_t v4;

    eax2 = __x86_get_pc_thunk_bx();
    if (*reinterpret_cast<void***>(a1)) {
        eax3 = fun_20c0(24);
        eax2 = __register_frame_info(v4, a1, eax3);
    }
    return eax2;
}

void fun_20a6() {
    goto 0x2000;
}

void __deregister_frame(void** a1) {
    void** eax2;
    void** eax3;
    void** v4;
    void** v5;
    void** v6;

    eax2 = __x86_get_pc_thunk_bx();
    if (*reinterpret_cast<void***>(a1)) {
        eax3 = __deregister_frame_info(a1);
        fun_20a0(eax3, v4, v5, v6, eax2);
    }
    return;
}

void pthread_atfork() {
    fun_2559();
}

void fun_26a2() {
    int32_t ebp1;
    int32_t eax2;
    int32_t ebp3;
    int32_t edx4;

    *reinterpret_cast<int32_t*>(ebp1 - 40) = eax2;
    *reinterpret_cast<int32_t*>(ebp3 - 44) = edx4;
    goto 0x2757;
}

void fun_2286() {
    goto 0x2000;
}

void fun_2066() {
    goto 0x2000;
}

void fun_21a6() {
    goto 0x2000;
}

void fun_3227(void** a1, void** a2, int32_t a3, void** a4, void** a5) {
    int32_t ebp6;
    int32_t eax7;
    int32_t ebp8;
    int32_t edx9;
    void* ebp10;

    *reinterpret_cast<int32_t*>(ebp6 - 0xc4) = eax7;
    *reinterpret_cast<int32_t*>(ebp8 - 0xc8) = edx9;
    _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(reinterpret_cast<int32_t>(ebp10) + 0xffffed50, a1, a2, a3, a4, a5);
    goto 0x3507;
}

void fun_691e() {
    int32_t ebp1;
    int32_t eax2;
    int32_t ebp3;
    int32_t edx4;
    void** v5;
    int32_t ebp6;
    struct s6* v7;
    int32_t ebp8;

    *reinterpret_cast<int32_t*>(ebp1 - 16) = eax2;
    *reinterpret_cast<int32_t*>(ebp3 - 20) = edx4;
    v5 = *reinterpret_cast<void***>(ebp6 - 36);
    _ZNSt6__ndk113__vector_baseIhNS_9allocatorIhEEED2Ev(v5);
    v7 = *reinterpret_cast<struct s6**>(ebp8 - 16);
    _Unwind_Resume(v7);
}

void fun_6b59() {
    int32_t ebp1;
    int32_t eax2;
    int32_t ebp3;
    int32_t edx4;
    void** v5;
    int32_t ebp6;
    struct s6* v7;
    int32_t ebp8;

    *reinterpret_cast<int32_t*>(ebp1 - 16) = eax2;
    *reinterpret_cast<int32_t*>(ebp3 - 20) = edx4;
    v5 = *reinterpret_cast<void***>(ebp6 - 36);
    _ZNSt6__ndk113__vector_baseIhNS_9allocatorIhEEED2Ev(v5);
    v7 = *reinterpret_cast<struct s6**>(ebp8 - 16);
    _Unwind_Resume(v7);
}

void fun_7a98(int32_t a1) {
    int32_t ebp2;
    int32_t edx3;
    int32_t eax4;

    *reinterpret_cast<int32_t*>(ebp2 - 32) = edx3;
    __clang_call_terminate(eax4, a1);
}

void fun_826a(int32_t a1) {
    int32_t ebp2;
    int32_t edx3;
    int32_t eax4;

    *reinterpret_cast<int32_t*>(ebp2 - 32) = edx3;
    __clang_call_terminate(eax4, a1);
}

void fun_8958() {
    int32_t ebp1;
    int32_t eax2;
    int32_t ebp3;
    int32_t edx4;
    void** v5;
    int32_t ebp6;
    struct s6* v7;
    int32_t ebp8;

    *reinterpret_cast<int32_t*>(ebp1 - 24) = eax2;
    *reinterpret_cast<int32_t*>(ebp3 - 28) = edx4;
    v5 = *reinterpret_cast<void***>(ebp6 - 44);
    _ZNSt6__ndk113__vector_baseIhNS_9allocatorIhEEED2Ev(v5);
    v7 = *reinterpret_cast<struct s6**>(ebp8 - 24);
    _Unwind_Resume(v7);
}

void fun_99ef(int32_t a1) {
    int32_t ebp2;
    int32_t edx3;
    int32_t eax4;

    *reinterpret_cast<int32_t*>(ebp2 - 32) = edx3;
    __clang_call_terminate(eax4, a1);
}

void fun_20e6() {
    goto 0x2000;
}

void fun_9ef5(void** a1, void** a2, int32_t a3, void** a4, void** a5) {
    int32_t ebp6;
    int32_t eax7;
    int32_t ebp8;
    int32_t edx9;
    void** v10;
    int32_t ebp11;
    struct s6* v12;
    int32_t ebp13;

    *reinterpret_cast<int32_t*>(ebp6 - 36) = eax7;
    *reinterpret_cast<int32_t*>(ebp8 - 40) = edx9;
    v10 = *reinterpret_cast<void***>(ebp11 - 48);
    _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(v10, a1, a2, a3, a4, a5);
    v12 = *reinterpret_cast<struct s6**>(ebp13 - 36);
    _Unwind_Resume(v12);
}

void fun_2036() {
    goto 0x2000;
}

/* .L21 */
void L21() {
    goto 0xa7a2;
}

struct s1112 {
    void** f0;
    signed char[95] pad99;
    unsigned char f99;
};

void _Unwind_SetGR(struct s1112* a1, int32_t a2, void** a3) {
    void** v4;
    void** ebp5;
    void** v6;
    void** esi7;
    struct s1112* edx8;
    void** v9;
    void** ebx10;
    void** eax11;
    void* ebx12;
    void* ebx13;
    void** esi14;

    v4 = ebp5;
    v6 = esi7;
    edx8 = a1;
    v9 = ebx10;
    eax11 = __x86_get_pc_thunk_bx();
    ebx12 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(ebx13) + reinterpret_cast<int32_t>(_ZNSt6__ndk113__vector_baseINS_6vectorIhNS_9allocatorIhEEEENS2_IS4_EEE9__end_capEv));
    esi14 = a3;
    if (reinterpret_cast<signed char>(eax11) > reinterpret_cast<signed char>(17)) 
        goto addr_a9d2_2;
    while (!(edx8->f99 & 64) || !*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(edx8) + reinterpret_cast<unsigned char>(eax11) + 0x6c)) {
        if (*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(ebx12) + reinterpret_cast<unsigned char>(eax11) + 0x12e8) == 4) 
            goto addr_a9f8_5;
        addr_a9d2_2:
        eax11 = fun_21e0(v9, v6, v4);
    }
    *reinterpret_cast<void***>(reinterpret_cast<int32_t>(edx8) + reinterpret_cast<unsigned char>(eax11) * 4) = esi14;
    addr_a9fa_7:
    return;
    addr_a9f8_5:
    *reinterpret_cast<void***>(*reinterpret_cast<void***>(reinterpret_cast<int32_t>(edx8) + reinterpret_cast<unsigned char>(eax11) * 4)) = esi14;
    goto addr_a9fa_7;
}

struct s1113 {
    signed char[76] pad76;
    int32_t f76;
    signed char[16] pad96;
    uint32_t f96;
};

int32_t _Unwind_GetIPInfo(struct s1113* a1, uint32_t* a2) {
    *a2 = a1->f96 >> 31;
    return a1->f76;
}

struct s1114 {
    signed char[148] pad148;
    int32_t f148;
    signed char[20] pad172;
    int32_t f172;
};

struct s1115 {
    signed char[12] pad12;
    struct s1114* f12;
};

/* .L165 */
void L165(void** ecx) {
    void** eax2;
    struct s1114* ecx3;
    struct s1115* ebp4;
    int32_t ebp5;
    int32_t ebp6;

    eax2 = read_sleb128(ecx, __return_address());
    ecx3 = ebp4->f12;
    *reinterpret_cast<void***>(ebp5 - 44) = eax2;
    ecx3->f148 = *reinterpret_cast<int32_t*>(ebp6 - 28) * ecx3->f172;
    goto 0xb040;
}

struct s1117 {
    signed char[164] pad164;
    uint32_t f164;
    signed char[8] pad176;
    int32_t f176;
};

struct s1116 {
    signed char[12] pad12;
    struct s1117* f12;
};

struct s1118 {
    signed char[1] pad1;
    uint16_t f1;
};

/* .L149 */
void L149() {
    struct s1116* ebp1;
    int32_t esi2;
    struct s1118* eax3;

    ebp1->f12->f164 = esi2 + eax3->f1 * ebp1->f12->f176;
}

/* .L160 */
void L160(void** ecx, void** a2, void** a3) {
    void** eax4;
    int32_t ebp5;

    eax4 = read_uleb128(ecx, __return_address(), a2, a3);
    *reinterpret_cast<void***>(ebp5 - 44) = eax4;
    goto 0xaf3d;
}

/* .L151 */
void L151(void** ecx, void** a2, void** a3) {
    void** eax4;
    uint32_t edx5;
    int32_t ebp6;
    int32_t ebp7;

    read_uleb128(ecx, __return_address(), a2, a3);
    eax4 = read_uleb128(ecx, __return_address(), a2, a3);
    edx5 = *reinterpret_cast<uint32_t*>(ebp6 - 36);
    *reinterpret_cast<void***>(ebp7 - 44) = eax4;
    if (edx5 > 17) 
        goto 0xb040;
}

/* .L253 */
void L253() {
    goto 0xb539;
}

/* .L250 */
void L250() {
    goto 0xb54a;
}

void fun_20f6() {
    goto 0x2000;
}

struct s1119 {
    signed char[8] pad8;
    int32_t f8;
};

void _Unwind_DeleteException(int32_t ecx, struct s1119* a2) {
    int32_t eax3;

    eax3 = a2->f8;
    if (eax3) {
        eax3(1, a2, ecx, ecx);
    }
    return;
}

/* .L96 */
void L96() {
    goto 0xc5ed;
}

void __register_frame_table(void** a1) {
    void** eax2;
    int32_t v3;

    __x86_get_pc_thunk_bx();
    eax2 = fun_20c0(24);
    __register_frame_info_table(v3, a1, eax2);
    return;
}

void fun_22a6() {
    goto 0x2000;
}

void fun_2206() {
    goto 0x2000;
}

void fun_2266() {
    goto 0x2000;
}

void fun_2166() {
    goto 0x2000;
}

void fun_20d6() {
    goto 0x2000;
}

void fun_2216() {
    goto 0x2000;
}

void fun_2046() {
    goto 0x2000;
}

void fun_2136() {
    goto 0x2000;
}

void fun_324c(void** a1, void** a2, int32_t a3, void** a4, void** a5) {
    int32_t ebp6;
    int32_t eax7;
    int32_t ebp8;
    int32_t edx9;
    void* ebp10;

    *reinterpret_cast<int32_t*>(ebp6 - 0xc4) = eax7;
    *reinterpret_cast<int32_t*>(ebp8 - 0xc8) = edx9;
    _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(reinterpret_cast<int32_t>(ebp10) + 0xffffed40, a1, a2, a3, a4, a5);
    goto 0x3507;
}

void fun_2096() {
    goto 0x2000;
}

/* Cipher::encrypt(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >&) */
void _ZN6Cipher7encryptERNSt6__ndk112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE() {
    fun_56ad();
}

void fun_2026() {
    goto 0x2000;
}

void fun_2146() {
    goto 0x2000;
}

/* .L25 */
void L25() {
}

void fun_21f6() {
    goto 0x2000;
}

struct s1120 {
    signed char[76] pad76;
    int32_t f76;
};

void _Unwind_SetIP(struct s1120* a1, int32_t a2) {
    a1->f76 = a2;
    return;
}

int32_t _Unwind_FindEnclosingFunction(void* a1) {
    void*** v2;
    void*** v3;
    void** eax4;
    int32_t edx5;
    int32_t v6;

    __x86_get_pc_thunk_bx();
    eax4 = _Unwind_Find_FDE(reinterpret_cast<int32_t>(a1) - 1, reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 + 0xffffffec, v2, v3);
    edx5 = 0;
    if (eax4) {
        edx5 = v6;
    }
    return edx5;
}

/* .L166 */
void L166(void** ecx, void** a2, void** a3) {
    void** eax4;
    uint32_t edx5;
    int32_t ebp6;
    int32_t ebp7;

    read_uleb128(ecx, __return_address(), a2, a3);
    eax4 = read_uleb128(ecx, __return_address(), a2, a3);
    edx5 = *reinterpret_cast<uint32_t*>(ebp6 - 36);
    *reinterpret_cast<void***>(ebp7 - 44) = eax4;
    if (edx5 > 17) 
        goto 0xb040;
    goto 0xafae;
}

struct s1121 {
    signed char[156] pad156;
    int32_t f156;
    int32_t f160;
};

struct s1122 {
    signed char[12] pad12;
    struct s1121* f12;
};

/* .L161 */
void L161() {
    struct s1121* eax1;
    struct s1122* ebp2;
    int32_t edi3;
    int32_t ebp4;

    eax1 = ebp2->f12;
    edi3 = *reinterpret_cast<int32_t*>(ebp4 - 44);
    eax1->f160 = 2;
    eax1->f156 = edi3;
    goto 0xae93;
}

/* .L264 */
void L264() {
}

/* .L254 */
void L254() {
    goto 0xb582;
}

/* .L256 */
void L256() {
    goto 0xb54a;
}

/* .L251 */
void L251() {
    goto 0xb582;
}

/* .L100 */
void L100() {
}

void fun_2246() {
    goto 0x2000;
}

void fun_2196() {
    goto 0x2000;
}

void fun_20b6() {
    goto 0x2000;
}

void __stack_chk_fail_local() {
    fun_2589();
}

void fun_21b6() {
    goto 0x2000;
}

void fun_2296() {
    goto 0x2000;
}

void fun_2076() {
    goto 0x2000;
}

void fun_2156() {
    goto 0x2000;
}

void fun_2106() {
    goto 0x2000;
}

void fun_3271(void** a1, void** a2, int32_t a3, void** a4, void** a5) {
    int32_t ebp6;
    int32_t eax7;
    int32_t ebp8;
    int32_t edx9;
    void* ebp10;

    *reinterpret_cast<int32_t*>(ebp6 - 0xc4) = eax7;
    *reinterpret_cast<int32_t*>(ebp8 - 0xc8) = edx9;
    _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(reinterpret_cast<int32_t>(ebp10) + 0xffffed30, a1, a2, a3, a4, a5);
    goto 0x3507;
}

void fun_2116() {
    goto 0x2000;
}

void fun_22b6() {
    goto 0x2000;
}

void fun_6edb(int32_t a1) {
    int32_t ebp2;
    int32_t edx3;
    int32_t eax4;

    *reinterpret_cast<int32_t*>(ebp2 - 28) = edx3;
    __clang_call_terminate(eax4, a1);
}

/* .L26 */
void L26() {
    goto 0xa7a2;
}

struct s1123 {
    signed char[80] pad80;
    int32_t f80;
};

int32_t _Unwind_GetLanguageSpecificData(struct s1123* a1) {
    return a1->f80;
}

struct s1124 {
    signed char[12] pad12;
    void* f12;
};

/* .L162 */
void L162(void** ecx, void** a2, void** a3) {
    int32_t ebp4;
    struct s1124* ebp5;

    read_uleb128(ecx, __return_address(), a2, a3);
    if (*reinterpret_cast<uint32_t*>(ebp4 - 36) > 17) 
        goto 0xae90;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(ebp5->f12) + *reinterpret_cast<uint32_t*>(ebp4 - 36) * 8 + 4) = 3;
}

/* .L255 */
void L255() {
}

/* .L257 */
void L257() {
    goto 0xb54a;
}

/* .L252 */
void L252() {
}

/* .L101 */
void L101() {
    goto 0xc5ed;
}

void fun_2256() {
    goto 0x2000;
}

void fun_2056() {
    goto 0x2000;
}

void fun_2904(void** a1, void** a2, int32_t a3, void** a4, void** a5) {
    int32_t ebp6;
    int32_t eax7;
    int32_t ebp8;
    int32_t edx9;
    void* ebp10;
    struct s6* v11;
    int32_t ebp12;

    *reinterpret_cast<int32_t*>(ebp6 - 68) = eax7;
    *reinterpret_cast<int32_t*>(ebp8 - 72) = edx9;
    _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(reinterpret_cast<int32_t>(ebp10) + 0xffffffc0, a1, a2, a3, a4, a5);
    v11 = *reinterpret_cast<struct s6**>(ebp12 - 68);
    _Unwind_Resume(v11);
}

void fun_2276() {
    goto 0x2000;
}

void fun_2176() {
    goto 0x2000;
}

void fun_2086() {
    goto 0x2000;
}

void fun_38b3(int32_t a1) {
    int32_t ebp2;
    int32_t edx3;
    int32_t eax4;

    *reinterpret_cast<int32_t*>(ebp2 - 32) = edx3;
    __clang_call_terminate(eax4, a1);
}

void fun_6998(int32_t a1) {
    int32_t ebp2;
    int32_t eax3;
    int32_t ebp4;
    int32_t edx5;
    void** v6;
    int32_t ebp7;
    int32_t v8;
    int32_t ebp9;

    *reinterpret_cast<int32_t*>(ebp2 - 12) = eax3;
    *reinterpret_cast<int32_t*>(ebp4 - 16) = edx5;
    v6 = *reinterpret_cast<void***>(ebp7 - 28);
    _ZNSt6__ndk113__vector_baseIhNS_9allocatorIhEEED2Ev(v6);
    v8 = *reinterpret_cast<int32_t*>(ebp9 - 12);
    __clang_call_terminate(v8, a1);
}

void fun_72ce(int32_t a1) {
    int32_t ebp2;
    int32_t edx3;
    int32_t eax4;

    *reinterpret_cast<int32_t*>(ebp2 - 32) = edx3;
    __clang_call_terminate(eax4, a1);
}

void fun_8727(void** a1, void** a2, void** a3) {
    int32_t ebp4;
    int32_t eax5;
    int32_t ebp6;
    int32_t edx7;
    void* ebp8;
    struct s6* v9;
    int32_t ebp10;

    *reinterpret_cast<int32_t*>(ebp4 - 44) = eax5;
    *reinterpret_cast<int32_t*>(ebp6 - 48) = edx7;
    _ZNSt6__ndk114__split_bufferINS_6vectorIhNS_9allocatorIhEEEERNS2_IS4_EEED2Ev(reinterpret_cast<int32_t>(ebp8) + 0xffffffd8, a1, a2, a3);
    v9 = *reinterpret_cast<struct s6**>(ebp10 - 44);
    _Unwind_Resume(v9);
}

void fun_7b93(int32_t a1) {
    int32_t ebp2;
    int32_t edx3;
    int32_t eax4;

    *reinterpret_cast<int32_t*>(ebp2 - 32) = edx3;
    __clang_call_terminate(eax4, a1);
}

void fun_8399(int32_t a1) {
    int32_t ebp2;
    int32_t edx3;
    int32_t eax4;

    *reinterpret_cast<int32_t*>(ebp2 - 32) = edx3;
    __clang_call_terminate(eax4, a1);
}

void fun_905e(int32_t a1) {
    int32_t ebp2;
    int32_t edx3;
    int32_t eax4;

    *reinterpret_cast<int32_t*>(ebp2 - 32) = edx3;
    __clang_call_terminate(eax4, a1);
}

void fun_21d6() {
    goto 0x2000;
}

void fun_a458(int32_t a1) {
    int32_t ebp2;
    int32_t edx3;
    int32_t eax4;

    *reinterpret_cast<int32_t*>(ebp2 - 24) = edx3;
    __clang_call_terminate(eax4, a1);
}

/* .L27 */
void L27() {
    goto 0xa7a2;
}

/* .L258 */
void L258() {
    goto 0xb539;
}

/* .L102 */
void L102() {
    goto 0xc5ed;
}

void fun_21c6() {
    goto 0x2000;
}

void fun_2920(void** a1, void** a2, int32_t a3, void** a4, void** a5) {
    int32_t ebp6;
    int32_t eax7;
    int32_t ebp8;
    int32_t edx9;
    void* ebp10;

    *reinterpret_cast<int32_t*>(ebp6 - 68) = eax7;
    *reinterpret_cast<int32_t*>(ebp8 - 72) = edx9;
    _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(reinterpret_cast<int32_t>(ebp10) + 0xffffff80, a1, a2, a3, a4, a5);
}

/* _GLOBAL__sub_I_cipher.cpp */
void _GLOBAL__sub_I_cipher_cpp() {
    int32_t eax1;
    int32_t ebx2;
    int32_t ebp3;

    fun_23fa(eax1, ebx2, ebp3, __return_address());
}

void fun_34af(void** a1, void** a2, int32_t a3, void** a4, void** a5) {
    int32_t ebp6;
    int32_t eax7;
    int32_t ebp8;
    int32_t edx9;
    void* ebp10;

    *reinterpret_cast<int32_t*>(ebp6 - 0xc4) = eax7;
    *reinterpret_cast<int32_t*>(ebp8 - 0xc8) = edx9;
    _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(reinterpret_cast<int32_t>(ebp10) + 0xffffec98, a1, a2, a3, a4, a5);
    goto 0x3507;
}

/* .L262 */
void L262() {
    goto 0xb57f;
}

void fun_34d4(void** a1, void** a2, int32_t a3, void** a4, void** a5) {
    int32_t ebp6;
    int32_t eax7;
    int32_t ebp8;
    int32_t edx9;
    void* ebp10;

    *reinterpret_cast<int32_t*>(ebp6 - 0xc4) = eax7;
    *reinterpret_cast<int32_t*>(ebp8 - 0xc8) = edx9;
    _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(reinterpret_cast<int32_t>(ebp10) + 0xffffeca8, a1, a2, a3, a4, a5);
    goto 0x3507;
}

void fun_3339(void** a1, void** a2, int32_t a3, void** a4, void** a5) {
    int32_t ebp6;
    int32_t eax7;
    int32_t ebp8;
    int32_t edx9;
    void* ebp10;

    *reinterpret_cast<int32_t*>(ebp6 - 0xc4) = eax7;
    *reinterpret_cast<int32_t*>(ebp8 - 0xc8) = edx9;
    _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(reinterpret_cast<int32_t>(ebp10) + 0xffffecf8, a1, a2, a3, a4, a5);
    goto 0x3507;
}

/* .L260 */
void L260() {
    goto 0xb57f;
}

/* std::__ndk1::vector<std::__ndk1::vector<unsigned char, std::__ndk1::allocator<unsigned char> >, std::__ndk1::allocator<std::__ndk1::vector<unsigned char, std::__ndk1::allocator<unsigned char> > > >::~vector() */
void _ZNSt6__ndk16vectorINS0_IhNS_9allocatorIhEEEENS1_IS3_EEED2Ev() {
    fun_69fd();
}

void fun_602a(void** a1, void** a2, int32_t a3, void** a4, void** a5) {
    int32_t ebp6;
    int32_t eax7;
    int32_t ebp8;
    int32_t edx9;
    void* ebp10;
    struct s6* v11;
    int32_t ebp12;

    *reinterpret_cast<int32_t*>(ebp6 - 40) = eax7;
    *reinterpret_cast<int32_t*>(ebp8 - 44) = edx9;
    _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(reinterpret_cast<int32_t>(ebp10) + 0xffffffe0, a1, a2, a3, a4, a5);
    v11 = *reinterpret_cast<struct s6**>(ebp12 - 40);
    _Unwind_Resume(v11);
}

/* .L259 */
void L259() {
    goto 0xb57f;
}

void fun_8a6b(int32_t a1) {
    int32_t ebp2;
    int32_t edx3;
    int32_t eax4;

    *reinterpret_cast<int32_t*>(ebp2 - 40) = edx3;
    __clang_call_terminate(eax4, a1);
}

/* .L263 */
void L263() {
    goto 0xb57f;
}

/* _GLOBAL__sub_I_base64.cpp */
void _GLOBAL__sub_I_base64_cpp() {
    int32_t eax1;
    int32_t ebx2;
    int32_t ebp3;

    fun_248a(eax1, ebx2, ebp3, __return_address());
}

/* .L261 */
void L261() {
}

void fun_6a38(int32_t a1) {
    int32_t ebp2;
    int32_t eax3;
    int32_t ebp4;
    int32_t edx5;
    void** v6;
    int32_t ebp7;
    int32_t v8;
    int32_t ebp9;

    *reinterpret_cast<int32_t*>(ebp2 - 12) = eax3;
    *reinterpret_cast<int32_t*>(ebp4 - 16) = edx5;
    v6 = *reinterpret_cast<void***>(ebp7 - 28);
    _ZNSt6__ndk113__vector_baseINS_6vectorIhNS_9allocatorIhEEEENS2_IS4_EEED2Ev(v6);
    v8 = *reinterpret_cast<int32_t*>(ebp9 - 12);
    __clang_call_terminate(v8, a1);
}

void fun_7d0b(int32_t a1) {
    int32_t ebp2;
    int32_t edx3;
    int32_t eax4;

    *reinterpret_cast<int32_t*>(ebp2 - 28) = edx3;
    __clang_call_terminate(eax4, a1);
}

void _start() {
    int32_t v1;

    _start_main(__zero_stack_offset(), v1);
}
