
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_710003c590(L2CValue *param_1,long param_2)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  ulong uVar6;
  ulong uVar7;
  Rhombus2 *pRVar8;
  L2CValue *pLVar9;
  void *pvVar10;
  BattleObjectModuleAccessor *pBVar11;
  BattleObjectModuleAccessor **ppBVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined8 uVar16;
  long lVar17;
  L2CValue aLStack944 [16];
  L2CValue aLStack928 [16];
  L2CValue aLStack912 [16];
  L2CValue aLStack896 [16];
  L2CValue aLStack880 [16];
  L2CValue aLStack864 [16];
  L2CValue aLStack848 [16];
  L2CValue aLStack832 [16];
  L2CValue aLStack816 [16];
  L2CValue aLStack800 [16];
  L2CValue aLStack784 [16];
  L2CValue aLStack768 [16];
  L2CValue aLStack752 [16];
  L2CValue aLStack736 [16];
  L2CValue aLStack720 [16];
  L2CValue aLStack704 [16];
  L2CValue aLStack688 [16];
  L2CValue aLStack672 [16];
  L2CValue aLStack656 [16];
  L2CValue aLStack640 [16];
  L2CValue aLStack624 [16];
  L2CValue aLStack608 [16];
  L2CValue aLStack592 [16];
  L2CValue aLStack576 [16];
  L2CValue aLStack560 [16];
  L2CValue aLStack544 [16];
  L2CValue aLStack528 [16];
  L2CValue aLStack512 [16];
  L2CValue aLStack496 [16];
  L2CValue aLStack480 [16];
  L2CValue aLStack464 [16];
  L2CValue aLStack448 [16];
  L2CValue aLStack432 [16];
  L2CValue aLStack416 [16];
  undefined auStack400 [16];
  undefined auStack384 [32];
  L2CValue aLStack352 [16];
  L2CValue aLStack336 [16];
  BattleObjectModuleAccessor *local_140;
  ulong uStack312;
  L2CValue aLStack304 [16];
  L2CValue aLStack288 [16];
  L2CValue aLStack272 [16];
  L2CValue aLStack256 [16];
  L2CValue aLStack240 [16];
  undefined auStack224 [32];
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  
  FUN_710003dda0(aLStack144);
  lib::L2CValue::L2CValue((L2CValue *)&local_140,0x50000000);
  uVar6 = lib::L2CValue::operator==(aLStack144,(L2CValue *)&local_140);
  lib::L2CValue::~L2CValue((L2CValue *)&local_140);
  if ((uVar6 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack176,0xba12fa217);
    lib::L2CValue::L2CValue(aLStack192,0x58c1a452f);
    uVar6 = lib::L2CValue::as_integer(aLStack176);
    uVar7 = lib::L2CValue::as_integer(aLStack192);
    fVar13 = (float)app::lua_bind::WorkModule__get_param_float_impl
                              (*(BattleObjectModuleAccessor **)(param_2 + 0x40),uVar6,uVar7);
    lib::L2CValue::L2CValue(aLStack128,fVar13);
    lib::L2CValue::L2CValue((L2CValue *)&local_140,0.5);
    lib::L2CValue::operator*(aLStack128,(L2CValue *)&local_140);
    lib::L2CValue::~L2CValue((L2CValue *)&local_140);
    lib::L2CValue::~L2CValue(aLStack128);
    lib::L2CValue::~L2CValue(aLStack192);
    lib::L2CValue::~L2CValue(aLStack176);
    lib::L2CValue::L2CValue(aLStack176,(L2CValue *)&LUA_SCRIPT_LINE_SYSTEM_POST);
    lib::L2CValue::L2CValue(aLStack192,0.0);
    lib::L2CValue::L2CValue((L2CValue *)(auStack224 + 0x10),0.0);
    lib::L2CValue::L2CValue((L2CValue *)auStack224,0.0);
    lib::L2CValue::L2CValue(aLStack240,1.0);
    lib::L2CValue::L2CValue(aLStack336,aLStack144);
    lib::L2CValue::L2CValue(aLStack352,aLStack160);
    FUN_71000335c0(&local_140,param_2,aLStack336,aLStack352);
    lib::L2CValue::operator=(aLStack176,(L2CValue *)&local_140);
    lib::L2CValue::operator=(aLStack192,aLStack304);
    lib::L2CValue::operator=((L2CValue *)(auStack224 + 0x10),aLStack288);
    lib::L2CValue::operator=((L2CValue *)auStack224,aLStack272);
    lib::L2CValue::operator=(aLStack240,aLStack256);
    lib::L2CValue::~L2CValue(aLStack256);
    lib::L2CValue::~L2CValue(aLStack272);
    lib::L2CValue::~L2CValue(aLStack288);
    lib::L2CValue::~L2CValue(aLStack304);
    lib::L2CValue::~L2CValue((L2CValue *)&local_140);
    lib::L2CValue::~L2CValue(aLStack352);
    lib::L2CValue::~L2CValue(aLStack336);
    lib::L2CValue::L2CValue((L2CValue *)&local_140,false);
    uVar6 = lib::L2CValue::operator==(aLStack176,(L2CValue *)&local_140);
    lib::L2CValue::~L2CValue((L2CValue *)&local_140);
    if ((uVar6 & 1) == 0) {
      lib::L2CValue::L2CValue((L2CValue *)&local_140,true);
      bVar1 = lib::L2CValue::as_bool((L2CValue *)&local_140);
      pRVar8 = (Rhombus2 *)
               app::lua_bind::GroundModule__get_rhombus_impl
                         (*(BattleObjectModuleAccessor **)(param_2 + 0x40),(bool)(bVar1 & 1));
      app::lua_bind::Rhombus2__store_l2c_table_impl(pRVar8);
      lib::L2CValue::~L2CValue((L2CValue *)&local_140);
      pLVar9 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)(auStack384 + 0x10),0x41cff903b);
      pLVar9 = (L2CValue *)lib::L2CValue::operator[](pLVar9,0x18cdc1683);
      lib::L2CValue::operator-(aLStack192,pLVar9);
      fVar13 = (float)app::lua_bind::PostureModule__lr_impl
                                (*(BattleObjectModuleAccessor **)(param_2 + 0x40));
      lib::L2CValue::L2CValue((L2CValue *)auStack400,fVar13);
      lib::L2CValue::operator*((L2CValue *)auStack384,(L2CValue *)auStack400);
      lib::L2CValue::L2CValue((L2CValue *)&local_140,0);
      uVar6 = lib::L2CValue::operator<(aLStack128,(L2CValue *)&local_140);
      lib::L2CValue::~L2CValue((L2CValue *)&local_140);
      lib::L2CValue::~L2CValue(aLStack128);
      lib::L2CValue::~L2CValue((L2CValue *)auStack400);
      lib::L2CValue::~L2CValue((L2CValue *)auStack384);
      if ((uVar6 & 1) == 0) {
        lib::L2CValue::L2CValue((L2CValue *)auStack384);
        lib::L2CValue::L2CValue((L2CValue *)auStack400);
        lib::L2CValue::L2CValue(aLStack128,0.8);
        pLVar9 = aLStack128;
        lib::L2CValue::operator*(aLStack160,pLVar9);
        lib::L2CValue::~L2CValue(aLStack128);
        lib::L2CValue::L2CValue(aLStack128,0.0);
        lib::L2CAgent::math_rad((L2CAgent *)auStack224,pLVar9);
        fVar13 = (float)lib::L2CValue::as_number(aLStack416);
        fVar14 = (float)lib::L2CValue::as_number(aLStack128);
        fVar15 = (float)lib::L2CValue::as_number(aLStack432);
        uVar16 = app::sv_math::vec2_rot(fVar13,fVar14,fVar15);
        lib::L2CValue::L2CValue((L2CValue *)&local_140,(float)uVar16);
        lib::L2CValue::L2CValue(aLStack304,(float)((ulong)uVar16 >> 0x20));
        lib::L2CValue::operator=((L2CValue *)auStack384,(L2CValue *)&local_140);
        pLVar9 = aLStack304;
        lib::L2CValue::operator=((L2CValue *)auStack400,aLStack304);
        lib::L2CValue::~L2CValue(aLStack304);
        lib::L2CValue::~L2CValue((L2CValue *)&local_140);
        lib::L2CValue::~L2CValue(aLStack432);
        lib::L2CValue::~L2CValue(aLStack128);
        lib::L2CValue::~L2CValue(aLStack416);
        lib::L2CAgent::math_abs((L2CAgent *)auStack384,pLVar9);
        ppBVar12 = &local_140;
        lib::L2CValue::operator=((L2CValue *)auStack384,(L2CValue *)ppBVar12);
        lib::L2CValue::~L2CValue((L2CValue *)&local_140);
        lib::L2CAgent::math_abs((L2CAgent *)auStack400,(L2CValue *)ppBVar12);
        lib::L2CValue::operator=((L2CValue *)auStack400,(L2CValue *)&local_140);
        lib::L2CValue::~L2CValue((L2CValue *)&local_140);
        app::Rhombus2::new_l2c_table();
        pLVar9 = (L2CValue *)lib::L2CValue::operator[](aLStack128,0x24394ee70);
        pLVar9 = (L2CValue *)lib::L2CValue::operator[](pLVar9,0x18cdc1683);
        lib::L2CValue::operator=(pLVar9,aLStack192);
        lib::L2CValue::L2CValue((L2CValue *)&local_140,1.0);
        lib::L2CValue::operator+((L2CValue *)(auStack224 + 0x10),(L2CValue *)&local_140);
        lib::L2CValue::~L2CValue((L2CValue *)&local_140);
        lib::L2CValue::operator+(aLStack432,(L2CValue *)auStack400);
        pLVar9 = (L2CValue *)lib::L2CValue::operator[](aLStack128,0x24394ee70);
        pLVar9 = (L2CValue *)lib::L2CValue::operator[](pLVar9,0x1fbdb2615);
        lib::L2CValue::operator=(pLVar9,aLStack416);
        lib::L2CValue::~L2CValue(aLStack416);
        lib::L2CValue::~L2CValue(aLStack432);
        pLVar9 = (L2CValue *)lib::L2CValue::operator[](aLStack128,0x41cff903b);
        pLVar9 = (L2CValue *)lib::L2CValue::operator[](pLVar9,0x18cdc1683);
        lib::L2CValue::operator=(pLVar9,aLStack192);
        lib::L2CValue::operator-((L2CValue *)(auStack224 + 0x10),(L2CValue *)auStack400);
        pLVar9 = (L2CValue *)lib::L2CValue::operator[](aLStack128,0x41cff903b);
        pLVar9 = (L2CValue *)lib::L2CValue::operator[](pLVar9,0x1fbdb2615);
        lib::L2CValue::operator=(pLVar9,(L2CValue *)&local_140);
        lib::L2CValue::~L2CValue((L2CValue *)&local_140);
        lib::L2CValue::operator-(aLStack192,(L2CValue *)auStack384);
        pLVar9 = (L2CValue *)lib::L2CValue::operator[](aLStack128,0x47a67e768);
        pLVar9 = (L2CValue *)lib::L2CValue::operator[](pLVar9,0x18cdc1683);
        lib::L2CValue::operator=(pLVar9,(L2CValue *)&local_140);
        lib::L2CValue::~L2CValue((L2CValue *)&local_140);
        pLVar9 = (L2CValue *)lib::L2CValue::operator[](aLStack128,0x47a67e768);
        pLVar9 = (L2CValue *)lib::L2CValue::operator[](pLVar9,0x1fbdb2615);
        lib::L2CValue::operator=(pLVar9,(L2CValue *)(auStack224 + 0x10));
        lib::L2CValue::operator+(aLStack192,(L2CValue *)auStack384);
        pLVar9 = (L2CValue *)lib::L2CValue::operator[](aLStack128,0x5b4ca7514);
        pLVar9 = (L2CValue *)lib::L2CValue::operator[](pLVar9,0x18cdc1683);
        lib::L2CValue::operator=(pLVar9,(L2CValue *)&local_140);
        lib::L2CValue::~L2CValue((L2CValue *)&local_140);
        pLVar9 = (L2CValue *)lib::L2CValue::operator[](aLStack128,0x5b4ca7514);
        pLVar9 = (L2CValue *)lib::L2CValue::operator[](pLVar9,0x1fbdb2615);
        lib::L2CValue::operator=(pLVar9,(L2CValue *)(auStack224 + 0x10));
        lib::L2CValue::L2CValue(aLStack448,aLStack128);
        pLVar9 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)(auStack384 + 0x10),0x41cff903b);
        pLVar9 = (L2CValue *)lib::L2CValue::operator[](pLVar9,0x18cdc1683);
        lib::L2CValue::L2CValue((L2CValue *)&local_140,0.5);
        lib::L2CValue::operator*((L2CValue *)auStack384,(L2CValue *)&local_140);
        lib::L2CValue::~L2CValue((L2CValue *)&local_140);
        fVar13 = (float)app::lua_bind::PostureModule__lr_impl
                                  (*(BattleObjectModuleAccessor **)(param_2 + 0x40));
        lib::L2CValue::L2CValue(aLStack496,fVar13);
        lib::L2CValue::operator*(aLStack480,aLStack496);
        lib::L2CValue::operator+(pLVar9,aLStack432);
        pLVar9 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)(auStack384 + 0x10),0x41cff903b);
        pLVar9 = (L2CValue *)lib::L2CValue::operator[](pLVar9,0x1fbdb2615);
        lib::L2CValue::L2CValue((L2CValue *)&local_140,0.1);
        lib::L2CValue::operator+(pLVar9,(L2CValue *)&local_140);
        lib::L2CValue::~L2CValue((L2CValue *)&local_140);
        FUN_7100035f40(aLStack416,aLStack448,aLStack464,aLStack512);
        lib::L2CValue::L2CValue((L2CValue *)&local_140,true);
        uVar6 = lib::L2CValue::operator==(aLStack416,(L2CValue *)&local_140);
        lib::L2CValue::~L2CValue((L2CValue *)&local_140);
        lib::L2CValue::~L2CValue(aLStack416);
        lib::L2CValue::~L2CValue(aLStack512);
        lib::L2CValue::~L2CValue(aLStack464);
        lib::L2CValue::~L2CValue(aLStack432);
        lib::L2CValue::~L2CValue(aLStack496);
        lib::L2CValue::~L2CValue(aLStack480);
        lib::L2CValue::~L2CValue(aLStack448);
        if ((uVar6 & 1) == 0) {
          lib::L2CValue::L2CValue(aLStack528,aLStack192);
          lib::L2CValue::L2CValue((L2CValue *)&local_140,0.1);
          lib::L2CValue::operator+((L2CValue *)(auStack224 + 0x10),(L2CValue *)&local_140);
          lib::L2CValue::~L2CValue((L2CValue *)&local_140);
          FUN_7100037290(aLStack416,param_2,aLStack528,aLStack544);
          lib::L2CValue::L2CValue((L2CValue *)&local_140,true);
          uVar6 = lib::L2CValue::operator==(aLStack416,(L2CValue *)&local_140);
          lib::L2CValue::~L2CValue((L2CValue *)&local_140);
          lib::L2CValue::~L2CValue(aLStack416);
          lib::L2CValue::~L2CValue(aLStack544);
          lib::L2CValue::~L2CValue(aLStack528);
          if ((uVar6 & 1) == 0) {
            lib::L2CValue::L2CValue(aLStack560,aLStack192);
            lib::L2CValue::L2CValue((L2CValue *)&local_140,0.1);
            lib::L2CValue::operator+((L2CValue *)(auStack224 + 0x10),(L2CValue *)&local_140);
            lib::L2CValue::~L2CValue((L2CValue *)&local_140);
            FUN_71000374c0(aLStack416,param_2,aLStack560,aLStack576);
            lib::L2CValue::L2CValue((L2CValue *)&local_140,true);
            uVar6 = lib::L2CValue::operator==(aLStack416,(L2CValue *)&local_140);
            lib::L2CValue::~L2CValue((L2CValue *)&local_140);
            lib::L2CValue::~L2CValue(aLStack416);
            lib::L2CValue::~L2CValue(aLStack576);
            lib::L2CValue::~L2CValue(aLStack560);
            if ((uVar6 & 1) == 0) {
              lib::L2CValue::L2CValue((L2CValue *)&local_140,0.0);
              uVar6 = lib::L2CValue::operator<=(aLStack240,(L2CValue *)&local_140);
              lib::L2CValue::~L2CValue((L2CValue *)&local_140);
              if ((uVar6 & 1) == 0) {
                lib::L2CValue::L2CValue(aLStack592,aLStack144);
                lib::L2CValue::L2CValue(aLStack608,aLStack160);
                lib::L2CValue::L2CValue(aLStack624,aLStack192);
                lib::L2CValue::L2CValue(aLStack640,(L2CValue *)(auStack224 + 0x10));
                lib::L2CValue::L2CValue(aLStack656,(L2CValue *)auStack224);
                lib::L2CValue::L2CValue(aLStack672,aLStack240);
                FUN_710003f510(aLStack416,param_2,aLStack592,aLStack608,aLStack624,aLStack640,
                               aLStack656,aLStack672);
                lib::L2CValue::~L2CValue(aLStack672);
                lib::L2CValue::~L2CValue(aLStack656);
                lib::L2CValue::~L2CValue(aLStack640);
                lib::L2CValue::~L2CValue(aLStack624);
                lib::L2CValue::~L2CValue(aLStack608);
                lib::L2CValue::~L2CValue(aLStack592);
                lib::L2CValue::L2CValue((L2CValue *)&local_140,0x50000000);
                uVar6 = lib::L2CValue::operator==(aLStack416,(L2CValue *)&local_140);
                lib::L2CValue::~L2CValue((L2CValue *)&local_140);
                if ((uVar6 & 1) == 0) {
                  lib::L2CValue::L2CValue
                            ((L2CValue *)&local_140,
                             _FIGHTER_PICKEL_STATUS_SPECIAL_LW_INT_GENERATED_ID);
                  iVar3 = lib::L2CValue::as_integer(aLStack416);
                  iVar4 = lib::L2CValue::as_integer((L2CValue *)&local_140);
                  app::lua_bind::WorkModule__set_int_impl
                            (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar3,iVar4);
                  lib::L2CValue::~L2CValue((L2CValue *)&local_140);
                  lib::L2CValue::L2CValue
                            ((L2CValue *)&local_140,
                             _FIGHTER_PICKEL_STATUS_SPECIAL_LW_INT_PLATE_PARENT_ID);
                  iVar3 = lib::L2CValue::as_integer(aLStack416);
                  iVar4 = lib::L2CValue::as_integer((L2CValue *)&local_140);
                  app::lua_bind::WorkModule__set_int_impl
                            (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar3,iVar4);
                  lib::L2CValue::~L2CValue((L2CValue *)&local_140);
                  lib::L2CValue::L2CValue(aLStack688,aLStack144);
                  FUN_7100039930(aLStack432,aLStack688);
                  lib::L2CValue::L2CValue((L2CValue *)&local_140,true);
                  uVar6 = lib::L2CValue::operator==(aLStack432,(L2CValue *)&local_140);
                  lib::L2CValue::~L2CValue((L2CValue *)&local_140);
                  lib::L2CValue::~L2CValue(aLStack432);
                  lib::L2CValue::~L2CValue(aLStack688);
                  if ((uVar6 & 1) != 0) {
                    lib::L2CValue::L2CValue(aLStack704,aLStack144);
                    lib::L2CValue::L2CValue(aLStack720,true);
                    FUN_7100032db0(&local_140,param_2,aLStack704,aLStack720);
                    lib::L2CValue::operator=(aLStack176,(L2CValue *)&local_140);
                    lib::L2CValue::operator=(aLStack192,aLStack304);
                    lib::L2CValue::operator=((L2CValue *)(auStack224 + 0x10),aLStack288);
                    lib::L2CValue::operator=((L2CValue *)auStack224,aLStack272);
                    lib::L2CValue::operator=(aLStack240,aLStack256);
                    lib::L2CValue::~L2CValue(aLStack256);
                    lib::L2CValue::~L2CValue(aLStack272);
                    lib::L2CValue::~L2CValue(aLStack288);
                    lib::L2CValue::~L2CValue(aLStack304);
                    lib::L2CValue::~L2CValue((L2CValue *)&local_140);
                    lib::L2CValue::~L2CValue(aLStack720);
                    lib::L2CValue::~L2CValue(aLStack704);
                    bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack176);
                    if ((bVar2 & 1U) != 0) {
                      lib::L2CValue::L2CValue(aLStack432,aLStack144);
                      uVar5 = lib::L2CValue::as_integer(aLStack144);
                      pvVar10 = (void *)app::sv_battle_object::module_accessor(uVar5);
                      if (pvVar10 == (void *)0x0) {
                        lib::L2CValue::L2CValue(aLStack480,(L2CValue *)&LUA_SCRIPT_LINE_SYSTEM_POST)
                        ;
                      }
                      else {
                        lib::L2CValue::L2CValue(aLStack480,pvVar10);
                      }
                      lib::L2CValue::L2CValue
                                ((L2CValue *)&local_140,
                                 _WEAPON_PICKEL_PLATE_INSTANCE_WORK_ID_INT_PREV);
                      iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_140);
                      pBVar11 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(aLStack480);
                      iVar3 = app::lua_bind::WorkModule__get_int_impl(pBVar11,iVar3);
                      lib::L2CValue::L2CValue(aLStack496,iVar3);
                      lib::L2CValue::~L2CValue((L2CValue *)&local_140);
                      lib::L2CValue::L2CValue
                                ((L2CValue *)&local_140,
                                 _WEAPON_PICKEL_PLATE_INSTANCE_WORK_ID_INT_NEXT);
                      iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_140);
                      pBVar11 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(aLStack480);
                      iVar3 = app::lua_bind::WorkModule__get_int_impl(pBVar11,iVar3);
                      lib::L2CValue::L2CValue(aLStack736,iVar3);
                      lib::L2CValue::~L2CValue((L2CValue *)&local_140);
                      uVar5 = lib::L2CValue::as_integer(aLStack432);
                      app::lua_bind::ArticleModule__remove_exist_object_id_impl
                                (*(BattleObjectModuleAccessor **)(param_2 + 0x40),uVar5);
                      lib::L2CValue::L2CValue(aLStack752,aLStack496);
                      lib::L2CValue::L2CValue(aLStack768,aLStack160);
                      lib::L2CValue::L2CValue(aLStack784,aLStack192);
                      lib::L2CValue::L2CValue(aLStack800,(L2CValue *)(auStack224 + 0x10));
                      lib::L2CValue::L2CValue(aLStack816,(L2CValue *)auStack224);
                      lib::L2CValue::L2CValue(aLStack832,aLStack240);
                      FUN_710003f510(&local_140,param_2,aLStack752,aLStack768,aLStack784,aLStack800,
                                     aLStack816,aLStack832);
                      lib::L2CValue::operator=(aLStack144,(L2CValue *)&local_140);
                      lib::L2CValue::~L2CValue((L2CValue *)&local_140);
                      lib::L2CValue::~L2CValue(aLStack832);
                      lib::L2CValue::~L2CValue(aLStack816);
                      lib::L2CValue::~L2CValue(aLStack800);
                      lib::L2CValue::~L2CValue(aLStack784);
                      lib::L2CValue::~L2CValue(aLStack768);
                      lib::L2CValue::~L2CValue(aLStack752);
                      lib::L2CValue::L2CValue((L2CValue *)&local_140,0x50000000);
                      uVar6 = lib::L2CValue::operator==(aLStack144,(L2CValue *)&local_140);
                      lib::L2CValue::~L2CValue((L2CValue *)&local_140);
                      if ((uVar6 & 1) == 0) {
                        lib::L2CValue::L2CValue(aLStack848,aLStack416);
                        lib::L2CValue::L2CValue(aLStack864,aLStack144);
                        FUN_7100035830(aLStack848,aLStack864);
                        lib::L2CValue::~L2CValue(aLStack864);
                        pLVar9 = aLStack848;
                      }
                      else {
                        uVar5 = lib::L2CValue::as_integer(aLStack416);
                        pvVar10 = (void *)app::sv_battle_object::module_accessor(uVar5);
                        if (pvVar10 == (void *)0x0) {
                          lib::L2CValue::L2CValue
                                    ((L2CValue *)&local_140,(L2CValue *)&LUA_SCRIPT_LINE_SYSTEM_POST
                                    );
                        }
                        else {
                          lib::L2CValue::L2CValue((L2CValue *)&local_140,pvVar10);
                        }
                        lib::L2CValue::operator=(aLStack480,(L2CValue *)&local_140);
                        lib::L2CValue::~L2CValue((L2CValue *)&local_140);
                        uVar6 = lib::L2CValue::as_number(aLStack192);
                        uVar5 = lib::L2CValue::as_number((L2CValue *)(auStack224 + 0x10));
                        local_140 = (BattleObjectModuleAccessor *)
                                    (uVar6 & 0xffffffff | (ulong)uVar5 << 0x20);
                        uStack312 = 0;
                        pBVar11 = (BattleObjectModuleAccessor *)
                                  lib::L2CValue::as_pointer(aLStack480);
                        app::lua_bind::PostureModule__set_pos_2d_impl
                                  (pBVar11,(Vector2f *)&local_140);
                        lib::L2CValue::L2CValue(aLStack880,0.0);
                        lib::L2CValue::L2CValue(aLStack896,0.0);
                        lib::L2CValue::L2CValue(aLStack912,0);
                        uVar6 = lib::L2CValue::as_number((L2CValue *)auStack224);
                        lVar17 = lib::L2CValue::as_number(aLStack880);
                        uVar5 = lib::L2CValue::as_number(aLStack896);
                        local_140 = (BattleObjectModuleAccessor *)
                                    (uVar6 & 0xffffffff | lVar17 << 0x20);
                        uStack312 = (ulong)uVar5;
                        iVar3 = lib::L2CValue::as_integer(aLStack912);
                        pBVar11 = (BattleObjectModuleAccessor *)
                                  lib::L2CValue::as_pointer(aLStack480);
                        app::lua_bind::PostureModule__set_rot_impl
                                  (pBVar11,(Vector3f *)&local_140,iVar3);
                        lib::L2CValue::~L2CValue(aLStack912);
                        lib::L2CValue::~L2CValue(aLStack896);
                        lib::L2CValue::~L2CValue(aLStack880);
                        lib::L2CValue::L2CValue((L2CValue *)&local_140,false);
                        fVar13 = (float)lib::L2CValue::as_number(aLStack240);
                        bVar1 = lib::L2CValue::as_bool((L2CValue *)&local_140);
                        pBVar11 = (BattleObjectModuleAccessor *)
                                  lib::L2CValue::as_pointer(aLStack480);
                        app::lua_bind::PostureModule__set_scale_impl
                                  (pBVar11,fVar13,(bool)(bVar1 & 1));
                        lib::L2CValue::~L2CValue((L2CValue *)&local_140);
                        lib::L2CValue::L2CValue
                                  ((L2CValue *)&local_140,
                                   _WEAPON_PICKEL_STONE_INSTANCE_WORK_ID_FLOAT_SCALE);
                        fVar13 = (float)lib::L2CValue::as_number(aLStack240);
                        iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_140);
                        pBVar11 = (BattleObjectModuleAccessor *)
                                  lib::L2CValue::as_pointer(aLStack480);
                        app::lua_bind::WorkModule__set_float_impl(pBVar11,fVar13,iVar3);
                        lib::L2CValue::~L2CValue((L2CValue *)&local_140);
                        lib::L2CValue::L2CValue(aLStack928,aLStack416);
                        lib::L2CValue::L2CValue(aLStack944,aLStack496);
                        FUN_7100035830(aLStack928,aLStack944);
                        lib::L2CValue::~L2CValue(aLStack944);
                        pLVar9 = aLStack928;
                      }
                      lib::L2CValue::~L2CValue(pLVar9);
                      lib::L2CValue::~L2CValue(aLStack736);
                      lib::L2CValue::~L2CValue(aLStack496);
                      lib::L2CValue::~L2CValue(aLStack480);
                      lib::L2CValue::~L2CValue(aLStack432);
                    }
                  }
                  lib::L2CValue::L2CValue(param_1,aLStack144);
                }
                else {
                  lib::L2CValue::L2CValue(param_1,0x50000000);
                }
                lib::L2CValue::~L2CValue(aLStack416);
              }
              else {
                lib::L2CValue::L2CValue(param_1,0x50000000);
              }
            }
            else {
              lib::L2CValue::L2CValue(param_1,0x50000000);
            }
          }
          else {
            lib::L2CValue::L2CValue(param_1,0x50000000);
          }
        }
        else {
          lib::L2CValue::L2CValue(param_1,0x50000000);
        }
        lib::L2CValue::~L2CValue(aLStack128);
        lib::L2CValue::~L2CValue((L2CValue *)auStack400);
        lib::L2CValue::~L2CValue((L2CValue *)auStack384);
      }
      else {
        lib::L2CValue::L2CValue(param_1,0x50000000);
      }
      lib::L2CValue::~L2CValue((L2CValue *)(auStack384 + 0x10));
    }
    else {
      lib::L2CValue::L2CValue(param_1,0x50000000);
    }
    lib::L2CValue::~L2CValue(aLStack240);
    lib::L2CValue::~L2CValue((L2CValue *)auStack224);
    lib::L2CValue::~L2CValue((L2CValue *)(auStack224 + 0x10));
    lib::L2CValue::~L2CValue(aLStack192);
    lib::L2CValue::~L2CValue(aLStack176);
    lib::L2CValue::~L2CValue(aLStack160);
  }
  else {
    lib::L2CValue::L2CValue(param_1,aLStack144);
  }
  lib::L2CValue::~L2CValue(aLStack144);
  return;
}

