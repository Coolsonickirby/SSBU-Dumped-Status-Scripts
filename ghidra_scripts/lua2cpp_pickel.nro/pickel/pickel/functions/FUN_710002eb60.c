
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_710002eb60(L2CValue *param_1,long param_2,L2CValue *param_3)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  void *pvVar7;
  BattleObjectModuleAccessor *pBVar8;
  ulong *puVar9;
  L2CValue *pLVar10;
  Fighter *pFVar11;
  Article *pAVar12;
  Rhombus2 *pRVar13;
  L2CValue *pLVar14;
  L2CValue *pLVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined8 uVar19;
  long lVar20;
  L2CValue aLStack1024 [16];
  L2CValue aLStack1008 [16];
  L2CValue aLStack992 [16];
  L2CValue aLStack976 [16];
  L2CValue aLStack960 [16];
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
  undefined auStack704 [16];
  undefined auStack688 [16];
  undefined auStack672 [32];
  L2CValue aLStack640 [16];
  L2CValue aLStack624 [16];
  L2CValue aLStack608 [16];
  L2CValue aLStack592 [16];
  L2CValue aLStack576 [16];
  L2CValue aLStack560 [16];
  L2CValue aLStack544 [16];
  L2CValue aLStack528 [16];
  L2CValue aLStack512 [16];
  ulong local_1f0;
  ulong uStack488;
  L2CValue aLStack480 [16];
  L2CValue aLStack464 [16];
  L2CValue aLStack448 [16];
  L2CValue aLStack432 [16];
  L2CValue aLStack416 [16];
  L2CValue aLStack400 [16];
  L2CValue aLStack384 [16];
  undefined auStack368 [32];
  L2CValue aLStack336 [16];
  L2CValue aLStack320 [16];
  L2CValue aLStack304 [16];
  L2CValue aLStack288 [16];
  L2CValue aLStack272 [16];
  undefined auStack256 [32];
  undefined auStack224 [32];
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  ulong auStack128 [2];
  
  FUN_71000316b0(aLStack272);
  lib::L2CValue::L2CValue((L2CValue *)&local_1f0,0x50000000);
  uVar5 = lib::L2CValue::operator==(aLStack272,(L2CValue *)&local_1f0);
  lib::L2CValue::~L2CValue((L2CValue *)&local_1f0);
  if ((uVar5 & 1) != 0) {
    lib::L2CValue::L2CValue
              ((L2CValue *)auStack128,_FIGHTER_PICKEL_STATUS_SPECIAL_LW_INT_PLATE_PARENT_ID);
    iVar2 = lib::L2CValue::as_integer((L2CValue *)auStack128);
    iVar2 = app::lua_bind::WorkModule__get_int_impl
                      (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar2);
    lib::L2CValue::L2CValue((L2CValue *)&local_1f0,iVar2);
    lib::L2CValue::operator=(aLStack272,(L2CValue *)&local_1f0);
    lib::L2CValue::~L2CValue((L2CValue *)&local_1f0);
    lib::L2CValue::~L2CValue((L2CValue *)auStack128);
  }
  lib::L2CValue::L2CValue((L2CValue *)&local_1f0,0x50000000);
  lib::L2CValue::L2CValue
            ((L2CValue *)auStack128,_FIGHTER_PICKEL_STATUS_SPECIAL_LW_INT_PLATE_PARENT_ID);
  iVar2 = lib::L2CValue::as_integer((L2CValue *)&local_1f0);
  iVar3 = lib::L2CValue::as_integer((L2CValue *)auStack128);
  app::lua_bind::WorkModule__set_int_impl
            (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar2,iVar3);
  lib::L2CValue::~L2CValue((L2CValue *)auStack128);
  lib::L2CValue::~L2CValue((L2CValue *)&local_1f0);
  lib::L2CValue::L2CValue((L2CValue *)&local_1f0,0x50000000);
  uVar5 = lib::L2CValue::operator==(aLStack272,(L2CValue *)&local_1f0);
  lib::L2CValue::~L2CValue((L2CValue *)&local_1f0);
  if ((uVar5 & 1) != 0) {
    lib::L2CValue::L2CValue(param_1,0x50000000);
    goto LAB_7100030a5c;
  }
  lib::L2CValue::L2CValue(aLStack288,aLStack272);
  FUN_7100032a80(auStack128,aLStack288);
  lib::L2CValue::L2CValue((L2CValue *)&local_1f0,false);
  uVar5 = lib::L2CValue::operator==((L2CValue *)auStack128,(L2CValue *)&local_1f0);
  lib::L2CValue::~L2CValue((L2CValue *)&local_1f0);
  lib::L2CValue::~L2CValue((L2CValue *)auStack128);
  lib::L2CValue::~L2CValue(aLStack288);
  if ((uVar5 & 1) != 0) {
    lib::L2CValue::L2CValue(param_1,0x50000000);
    goto LAB_7100030a5c;
  }
  lib::L2CValue::L2CValue(aLStack144,0xbc9917066);
  lib::L2CValue::L2CValue(aLStack160,0x58c1a452f);
  uVar5 = lib::L2CValue::as_integer(aLStack144);
  uVar6 = lib::L2CValue::as_integer(aLStack160);
  fVar16 = (float)app::lua_bind::WorkModule__get_param_float_impl
                            (*(BattleObjectModuleAccessor **)(param_2 + 0x40),uVar5,uVar6);
  lib::L2CValue::L2CValue((L2CValue *)auStack128,fVar16);
  lib::L2CValue::L2CValue((L2CValue *)&local_1f0,0.5);
  lib::L2CValue::operator*((L2CValue *)auStack128,(L2CValue *)&local_1f0);
  lib::L2CValue::~L2CValue((L2CValue *)&local_1f0);
  lib::L2CValue::~L2CValue((L2CValue *)auStack128);
  lib::L2CValue::~L2CValue(aLStack160);
  lib::L2CValue::~L2CValue(aLStack144);
  lib::L2CValue::L2CValue(aLStack320,false);
  lib::L2CValue::L2CValue(aLStack336,0.0);
  lib::L2CValue::L2CValue((L2CValue *)(auStack368 + 0x10),0.0);
  lib::L2CValue::L2CValue((L2CValue *)auStack368,0.0);
  lib::L2CValue::L2CValue(aLStack384,1.0);
  lib::L2CValue::L2CValue(aLStack400,0x50000000);
  lib::L2CValue::L2CValue((L2CValue *)&local_1f0,false);
  uVar5 = lib::L2CValue::operator==(param_3,(L2CValue *)&local_1f0);
  lib::L2CValue::~L2CValue((L2CValue *)&local_1f0);
  if ((uVar5 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack576,aLStack272);
    lib::L2CValue::L2CValue(aLStack592,aLStack304);
    FUN_71000335c0(&local_1f0,param_2,aLStack576,aLStack592);
    lib::L2CValue::operator=(aLStack320,(L2CValue *)&local_1f0);
    lib::L2CValue::operator=(aLStack336,aLStack480);
    lib::L2CValue::operator=((L2CValue *)(auStack368 + 0x10),aLStack464);
    lib::L2CValue::operator=((L2CValue *)auStack368,aLStack448);
    lib::L2CValue::operator=(aLStack384,aLStack432);
    lib::L2CValue::~L2CValue(aLStack432);
    lib::L2CValue::~L2CValue(aLStack448);
    lib::L2CValue::~L2CValue(aLStack464);
    lib::L2CValue::~L2CValue(aLStack480);
    lib::L2CValue::~L2CValue((L2CValue *)&local_1f0);
    lib::L2CValue::~L2CValue(aLStack592);
    lib::L2CValue::~L2CValue(aLStack576);
    lib::L2CValue::L2CValue((L2CValue *)&local_1f0,false);
    uVar5 = lib::L2CValue::operator==(aLStack320,(L2CValue *)&local_1f0);
    lib::L2CValue::~L2CValue((L2CValue *)&local_1f0);
    if ((uVar5 & 1) == 0) {
      lib::L2CValue::L2CValue((L2CValue *)(auStack672 + 0x10),aLStack272);
      FUN_7100032ca0(auStack128,auStack672 + 0x10);
      lib::L2CValue::L2CValue((L2CValue *)&local_1f0,true);
      uVar5 = lib::L2CValue::operator==((L2CValue *)auStack128,(L2CValue *)&local_1f0);
      lib::L2CValue::~L2CValue((L2CValue *)&local_1f0);
      lib::L2CValue::~L2CValue((L2CValue *)auStack128);
      lib::L2CValue::~L2CValue((L2CValue *)(auStack672 + 0x10));
      if ((uVar5 & 1) == 0) {
        lib::L2CValue::L2CValue(aLStack944,aLStack336);
        lib::L2CValue::L2CValue((L2CValue *)&local_1f0,0.1);
        lib::L2CValue::operator+((L2CValue *)(auStack368 + 0x10),(L2CValue *)&local_1f0);
        lib::L2CValue::~L2CValue((L2CValue *)&local_1f0);
        FUN_7100035400(auStack128,param_2,aLStack944,aLStack960);
        lib::L2CValue::~L2CValue(aLStack960);
        lib::L2CValue::~L2CValue(aLStack944);
        lib::L2CValue::L2CValue((L2CValue *)&local_1f0,0x50000000);
        uVar5 = lib::L2CValue::operator==((L2CValue *)auStack128,(L2CValue *)&local_1f0);
        lib::L2CValue::~L2CValue((L2CValue *)&local_1f0);
        if ((uVar5 & 1) == 0) {
          lib::L2CValue::L2CValue(aLStack976,(L2CValue *)auStack128);
          lib::L2CValue::L2CValue(aLStack992,true);
          FUN_7100032db0(&local_1f0,param_2,aLStack976,aLStack992);
          lib::L2CValue::operator=(aLStack320,(L2CValue *)&local_1f0);
          lib::L2CValue::operator=(aLStack336,aLStack480);
          lib::L2CValue::operator=((L2CValue *)(auStack368 + 0x10),aLStack464);
          lib::L2CValue::operator=((L2CValue *)auStack368,aLStack448);
          lib::L2CValue::operator=(aLStack384,aLStack432);
          lib::L2CValue::~L2CValue(aLStack432);
          lib::L2CValue::~L2CValue(aLStack448);
          lib::L2CValue::~L2CValue(aLStack464);
          lib::L2CValue::~L2CValue(aLStack480);
          lib::L2CValue::~L2CValue((L2CValue *)&local_1f0);
          lib::L2CValue::~L2CValue(aLStack992);
          lib::L2CValue::~L2CValue(aLStack976);
          lib::L2CValue::L2CValue((L2CValue *)&local_1f0,true);
          uVar5 = lib::L2CValue::operator==(aLStack320,(L2CValue *)&local_1f0);
          lib::L2CValue::~L2CValue((L2CValue *)&local_1f0);
          if ((uVar5 & 1) != 0) {
            lib::L2CValue::L2CValue((L2CValue *)&local_1f0,(L2CValue *)auStack128);
            uVar4 = lib::L2CValue::as_integer((L2CValue *)auStack128);
            pvVar7 = (void *)app::sv_battle_object::module_accessor(uVar4);
            if (pvVar7 == (void *)0x0) {
              lib::L2CValue::L2CValue(aLStack144,(L2CValue *)&LUA_SCRIPT_LINE_SYSTEM_POST);
            }
            else {
              lib::L2CValue::L2CValue(aLStack144,pvVar7);
            }
            lib::L2CValue::L2CValue(aLStack176,_WEAPON_PICKEL_STONE_INSTANCE_WORK_ID_INT_PREV);
            iVar2 = lib::L2CValue::as_integer(aLStack176);
            pBVar8 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(aLStack144);
            iVar2 = app::lua_bind::WorkModule__get_int_impl(pBVar8,iVar2);
            lib::L2CValue::L2CValue(aLStack160,iVar2);
            lib::L2CValue::operator=(aLStack272,aLStack160);
            lib::L2CValue::~L2CValue(aLStack160);
            lib::L2CValue::~L2CValue(aLStack176);
            lib::L2CValue::L2CValue(aLStack176,_WEAPON_PICKEL_STONE_INSTANCE_WORK_ID_INT_NEXT);
            iVar2 = lib::L2CValue::as_integer(aLStack176);
            pBVar8 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(aLStack144);
            iVar2 = app::lua_bind::WorkModule__get_int_impl(pBVar8,iVar2);
            lib::L2CValue::L2CValue(aLStack160,iVar2);
            lib::L2CValue::operator=(aLStack400,aLStack160);
            lib::L2CValue::~L2CValue(aLStack160);
            lib::L2CValue::~L2CValue(aLStack176);
            uVar4 = lib::L2CValue::as_integer((L2CValue *)&local_1f0);
            app::lua_bind::ArticleModule__remove_exist_object_id_impl
                      (*(BattleObjectModuleAccessor **)(param_2 + 0x40),uVar4);
            lib::L2CValue::~L2CValue(aLStack144);
            lib::L2CValue::~L2CValue((L2CValue *)&local_1f0);
          }
        }
        puVar9 = auStack128;
      }
      else {
        lib::L2CValue::L2CValue((L2CValue *)&local_1f0,true);
        uVar4 = lib::L2CValue::as_bool((L2CValue *)&local_1f0);
        pLVar10 = (L2CValue *)(ulong)(uVar4 & 1);
        pRVar13 = (Rhombus2 *)
                  app::lua_bind::GroundModule__get_rhombus_impl
                            (*(BattleObjectModuleAccessor **)(param_2 + 0x40),SUB41(uVar4 & 1,0));
        app::lua_bind::Rhombus2__store_l2c_table_impl(pRVar13);
        lib::L2CValue::~L2CValue((L2CValue *)&local_1f0);
        lib::L2CValue::L2CValue((L2CValue *)auStack688);
        lib::L2CValue::L2CValue((L2CValue *)auStack704);
        lib::L2CValue::L2CValue((L2CValue *)auStack128,0.0);
        lib::L2CAgent::math_rad((L2CAgent *)auStack368,pLVar10);
        fVar16 = (float)lib::L2CValue::as_number(aLStack304);
        fVar17 = (float)lib::L2CValue::as_number((L2CValue *)auStack128);
        fVar18 = (float)lib::L2CValue::as_number(aLStack144);
        uVar19 = app::sv_math::vec2_rot(fVar16,fVar17,fVar18);
        lib::L2CValue::L2CValue((L2CValue *)&local_1f0,(float)uVar19);
        lib::L2CValue::L2CValue(aLStack480,(float)((ulong)uVar19 >> 0x20));
        lib::L2CValue::operator=((L2CValue *)auStack688,(L2CValue *)&local_1f0);
        pLVar10 = aLStack480;
        lib::L2CValue::operator=((L2CValue *)auStack704,aLStack480);
        lib::L2CValue::~L2CValue(aLStack480);
        lib::L2CValue::~L2CValue((L2CValue *)&local_1f0);
        lib::L2CValue::~L2CValue(aLStack144);
        lib::L2CValue::~L2CValue((L2CValue *)auStack128);
        lib::L2CAgent::math_abs((L2CAgent *)auStack688,pLVar10);
        puVar9 = &local_1f0;
        lib::L2CValue::operator=((L2CValue *)auStack688,(L2CValue *)puVar9);
        lib::L2CValue::~L2CValue((L2CValue *)&local_1f0);
        lib::L2CAgent::math_abs((L2CAgent *)auStack704,(L2CValue *)puVar9);
        lib::L2CValue::L2CValue((L2CValue *)&local_1f0,0.1);
        lib::L2CValue::operator+(aLStack144,(L2CValue *)&local_1f0);
        lib::L2CValue::~L2CValue((L2CValue *)&local_1f0);
        lib::L2CValue::operator=((L2CValue *)auStack704,(L2CValue *)auStack128);
        lib::L2CValue::~L2CValue((L2CValue *)auStack128);
        lib::L2CValue::~L2CValue(aLStack144);
        app::Rhombus2::new_l2c_table();
        pLVar10 = (L2CValue *)lib::L2CValue::operator[](aLStack720,0x24394ee70);
        pLVar10 = (L2CValue *)lib::L2CValue::operator[](pLVar10,0x18cdc1683);
        lib::L2CValue::operator=(pLVar10,aLStack336);
        lib::L2CValue::operator+((L2CValue *)(auStack368 + 0x10),(L2CValue *)auStack704);
        pLVar10 = (L2CValue *)lib::L2CValue::operator[](aLStack720,0x24394ee70);
        pLVar10 = (L2CValue *)lib::L2CValue::operator[](pLVar10,0x1fbdb2615);
        lib::L2CValue::operator=(pLVar10,(L2CValue *)&local_1f0);
        lib::L2CValue::~L2CValue((L2CValue *)&local_1f0);
        pLVar10 = (L2CValue *)lib::L2CValue::operator[](aLStack720,0x41cff903b);
        pLVar10 = (L2CValue *)lib::L2CValue::operator[](pLVar10,0x18cdc1683);
        lib::L2CValue::operator=(pLVar10,aLStack336);
        lib::L2CValue::operator-((L2CValue *)(auStack368 + 0x10),(L2CValue *)auStack704);
        pLVar10 = (L2CValue *)lib::L2CValue::operator[](aLStack720,0x41cff903b);
        pLVar10 = (L2CValue *)lib::L2CValue::operator[](pLVar10,0x1fbdb2615);
        lib::L2CValue::operator=(pLVar10,(L2CValue *)&local_1f0);
        lib::L2CValue::~L2CValue((L2CValue *)&local_1f0);
        lib::L2CValue::operator-(aLStack336,(L2CValue *)auStack688);
        pLVar10 = (L2CValue *)lib::L2CValue::operator[](aLStack720,0x47a67e768);
        pLVar10 = (L2CValue *)lib::L2CValue::operator[](pLVar10,0x18cdc1683);
        lib::L2CValue::operator=(pLVar10,(L2CValue *)&local_1f0);
        lib::L2CValue::~L2CValue((L2CValue *)&local_1f0);
        pLVar10 = (L2CValue *)lib::L2CValue::operator[](aLStack720,0x47a67e768);
        pLVar10 = (L2CValue *)lib::L2CValue::operator[](pLVar10,0x1fbdb2615);
        lib::L2CValue::operator=(pLVar10,(L2CValue *)(auStack368 + 0x10));
        lib::L2CValue::operator+(aLStack336,(L2CValue *)auStack688);
        pLVar10 = (L2CValue *)lib::L2CValue::operator[](aLStack720,0x5b4ca7514);
        pLVar10 = (L2CValue *)lib::L2CValue::operator[](pLVar10,0x18cdc1683);
        lib::L2CValue::operator=(pLVar10,(L2CValue *)&local_1f0);
        lib::L2CValue::~L2CValue((L2CValue *)&local_1f0);
        pLVar10 = (L2CValue *)lib::L2CValue::operator[](aLStack720,0x5b4ca7514);
        pLVar10 = (L2CValue *)lib::L2CValue::operator[](pLVar10,0x1fbdb2615);
        lib::L2CValue::operator=(pLVar10,(L2CValue *)(auStack368 + 0x10));
        uVar4 = lib::L2CValue::as_integer(aLStack272);
        pvVar7 = (void *)app::sv_battle_object::module_accessor(uVar4);
        if (pvVar7 == (void *)0x0) {
          lib::L2CValue::L2CValue(aLStack736,(L2CValue *)&LUA_SCRIPT_LINE_SYSTEM_POST);
        }
        else {
          lib::L2CValue::L2CValue(aLStack736,pvVar7);
        }
        lib::L2CValue::L2CValue
                  ((L2CValue *)&local_1f0,_WEAPON_PICKEL_STONE_INSTANCE_WORK_ID_INT_PREV);
        iVar2 = lib::L2CValue::as_integer((L2CValue *)&local_1f0);
        pBVar8 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(aLStack736);
        iVar2 = app::lua_bind::WorkModule__get_int_impl(pBVar8,iVar2);
        lib::L2CValue::L2CValue(aLStack752,iVar2);
        lib::L2CValue::~L2CValue((L2CValue *)&local_1f0);
        lib::L2CValue::L2CValue
                  ((L2CValue *)&local_1f0,_WEAPON_PICKEL_STONE_INSTANCE_WORK_ID_INT_NEXT);
        iVar2 = lib::L2CValue::as_integer((L2CValue *)&local_1f0);
        pBVar8 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(aLStack736);
        iVar2 = app::lua_bind::WorkModule__get_int_impl(pBVar8,iVar2);
        lib::L2CValue::L2CValue(aLStack768,iVar2);
        lib::L2CValue::~L2CValue((L2CValue *)&local_1f0);
        lib::L2CValue::L2CValue((L2CValue *)&local_1f0,0x50000000);
        uVar5 = lib::L2CValue::operator==(aLStack752,(L2CValue *)&local_1f0);
        lib::L2CValue::~L2CValue((L2CValue *)&local_1f0);
        if ((uVar5 & 1) == 0) {
          lib::L2CValue::L2CValue((L2CValue *)&local_1f0,0x50000000);
          uVar5 = lib::L2CValue::operator==(aLStack768,(L2CValue *)&local_1f0);
          lib::L2CValue::~L2CValue((L2CValue *)&local_1f0);
          if ((uVar5 & 1) != 0) goto LAB_710002f9c8;
LAB_710002fa30:
          lib::L2CValue::L2CValue(aLStack816,aLStack272);
          lib::L2CValue::L2CValue(aLStack832,true);
          FUN_7100032db0(&local_1f0,param_2,aLStack816,aLStack832);
          lib::L2CValue::operator=(aLStack320,(L2CValue *)&local_1f0);
          lib::L2CValue::operator=(aLStack336,aLStack480);
          lib::L2CValue::operator=((L2CValue *)(auStack368 + 0x10),aLStack464);
          lib::L2CValue::operator=((L2CValue *)auStack368,aLStack448);
          lib::L2CValue::operator=(aLStack384,aLStack432);
          lib::L2CValue::~L2CValue(aLStack432);
          lib::L2CValue::~L2CValue(aLStack448);
          lib::L2CValue::~L2CValue(aLStack464);
          lib::L2CValue::~L2CValue(aLStack480);
          lib::L2CValue::~L2CValue((L2CValue *)&local_1f0);
          lib::L2CValue::~L2CValue(aLStack832);
          lib::L2CValue::~L2CValue(aLStack816);
          lib::L2CValue::L2CValue((L2CValue *)&local_1f0,true);
          uVar5 = lib::L2CValue::operator==(aLStack320,(L2CValue *)&local_1f0);
          lib::L2CValue::~L2CValue((L2CValue *)&local_1f0);
          if ((uVar5 & 1) != 0) {
            lib::L2CValue::L2CValue((L2CValue *)&local_1f0,aLStack272);
            uVar4 = lib::L2CValue::as_integer(aLStack272);
            pvVar7 = (void *)app::sv_battle_object::module_accessor(uVar4);
            if (pvVar7 == (void *)0x0) {
              lib::L2CValue::L2CValue
                        ((L2CValue *)auStack128,(L2CValue *)&LUA_SCRIPT_LINE_SYSTEM_POST);
            }
            else {
              lib::L2CValue::L2CValue((L2CValue *)auStack128,pvVar7);
            }
            lib::L2CValue::L2CValue(aLStack160,_WEAPON_PICKEL_STONE_INSTANCE_WORK_ID_INT_PREV);
            iVar2 = lib::L2CValue::as_integer(aLStack160);
            pBVar8 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer((L2CValue *)auStack128)
            ;
            iVar2 = app::lua_bind::WorkModule__get_int_impl(pBVar8,iVar2);
            lib::L2CValue::L2CValue(aLStack144,iVar2);
            lib::L2CValue::operator=(aLStack272,aLStack144);
            lib::L2CValue::~L2CValue(aLStack144);
            lib::L2CValue::~L2CValue(aLStack160);
            lib::L2CValue::L2CValue(aLStack160,_WEAPON_PICKEL_STONE_INSTANCE_WORK_ID_INT_NEXT);
            iVar2 = lib::L2CValue::as_integer(aLStack160);
            pBVar8 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer((L2CValue *)auStack128)
            ;
            iVar2 = app::lua_bind::WorkModule__get_int_impl(pBVar8,iVar2);
            lib::L2CValue::L2CValue(aLStack144,iVar2);
            lib::L2CValue::operator=(aLStack400,aLStack144);
            lib::L2CValue::~L2CValue(aLStack144);
            lib::L2CValue::~L2CValue(aLStack160);
            uVar4 = lib::L2CValue::as_integer((L2CValue *)&local_1f0);
            app::lua_bind::ArticleModule__remove_exist_object_id_impl
                      (*(BattleObjectModuleAccessor **)(param_2 + 0x40),uVar4);
LAB_710002fdf4:
            lib::L2CValue::~L2CValue((L2CValue *)auStack128);
            lib::L2CValue::~L2CValue((L2CValue *)&local_1f0);
          }
        }
        else {
LAB_710002f9c8:
          lib::L2CValue::L2CValue(aLStack784,(L2CValue *)auStack672);
          lib::L2CValue::L2CValue(aLStack800,aLStack720);
          FUN_7100035280(auStack128,aLStack784,aLStack800);
          lib::L2CValue::L2CValue((L2CValue *)&local_1f0,true);
          uVar5 = lib::L2CValue::operator==((L2CValue *)auStack128,(L2CValue *)&local_1f0);
          lib::L2CValue::~L2CValue((L2CValue *)&local_1f0);
          lib::L2CValue::~L2CValue((L2CValue *)auStack128);
          lib::L2CValue::~L2CValue(aLStack800);
          lib::L2CValue::~L2CValue(aLStack784);
          if ((uVar5 & 1) != 0) goto LAB_710002fa30;
          lib::L2CValue::L2CValue(aLStack864,aLStack336);
          lib::L2CValue::L2CValue((L2CValue *)&local_1f0,0.1);
          lib::L2CValue::operator+((L2CValue *)(auStack368 + 0x10),(L2CValue *)&local_1f0);
          lib::L2CValue::~L2CValue((L2CValue *)&local_1f0);
          lib::L2CValue::L2CValue((L2CValue *)(auStack256 + 0x10),aLStack864);
          lib::L2CValue::L2CValue((L2CValue *)auStack256,aLStack880);
          lib::L2CValue::L2CValue
                    ((L2CValue *)&local_1f0,_FIGHTER_PICKEL_GENERATE_ARTICLE_PICKELBOMB);
          iVar2 = lib::L2CValue::as_integer((L2CValue *)&local_1f0);
          pvVar7 = (void *)app::lua_bind::ArticleModule__get_article_impl
                                     (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar2);
          if (pvVar7 == (void *)0x0) {
            lib::L2CValue::L2CValue((L2CValue *)auStack128,(L2CValue *)&LUA_SCRIPT_LINE_SYSTEM_POST)
            ;
          }
          else {
            lib::L2CValue::L2CValue((L2CValue *)auStack128,pvVar7);
          }
          lib::L2CValue::~L2CValue((L2CValue *)&local_1f0);
          uVar5 = lib::L2CValue::operator==
                            ((L2CValue *)auStack128,(L2CValue *)&LUA_SCRIPT_LINE_SYSTEM_POST);
          if ((uVar5 & 1) == 0) {
            pAVar12 = (Article *)lib::L2CValue::as_pointer((L2CValue *)auStack128);
            uVar4 = app::lua_bind::Article__get_battle_object_id_impl(pAVar12);
            lib::L2CValue::L2CValue(aLStack144,uVar4);
            lib::L2CValue::L2CValue((L2CValue *)&local_1f0,0x50000000);
            uVar5 = lib::L2CValue::operator==(aLStack144,(L2CValue *)&local_1f0);
            lib::L2CValue::~L2CValue((L2CValue *)&local_1f0);
            if ((uVar5 & 1) == 0) {
              lib::L2CValue::L2CValue(aLStack160,aLStack144);
              lib::L2CValue::L2CValue(aLStack176,false);
              FUN_7100035ca0(&local_1f0,param_2,aLStack160,aLStack176);
              lib::L2CValue::L2CValue(aLStack192,(L2CValue *)(auStack256 + 0x10));
              lib::L2CValue::L2CValue((L2CValue *)(auStack224 + 0x10),(L2CValue *)auStack256);
              FUN_7100035f40(auStack224,&local_1f0,aLStack192,auStack224 + 0x10);
              lib::L2CValue::~L2CValue((L2CValue *)(auStack224 + 0x10));
              lib::L2CValue::~L2CValue(aLStack192);
              lib::L2CValue::~L2CValue((L2CValue *)&local_1f0);
              lib::L2CValue::~L2CValue(aLStack176);
              lib::L2CValue::~L2CValue(aLStack160);
            }
            else {
              lib::L2CValue::L2CValue((L2CValue *)auStack224,false);
            }
            lib::L2CValue::~L2CValue(aLStack144);
          }
          else {
            lib::L2CValue::L2CValue((L2CValue *)auStack224,false);
          }
          lib::L2CValue::~L2CValue((L2CValue *)auStack128);
          lib::L2CValue::L2CValue((L2CValue *)&local_1f0,true);
          uVar5 = lib::L2CValue::operator==((L2CValue *)auStack224,(L2CValue *)&local_1f0);
          lib::L2CValue::~L2CValue((L2CValue *)&local_1f0);
          lib::L2CValue::~L2CValue((L2CValue *)auStack224);
          lib::L2CValue::~L2CValue((L2CValue *)auStack256);
          lib::L2CValue::~L2CValue((L2CValue *)(auStack256 + 0x10));
          if ((uVar5 & 1) == 0) {
            lib::L2CValue::L2CValue(aLStack144,aLStack864);
            lib::L2CValue::L2CValue(aLStack160,aLStack880);
            FUN_7100037290(auStack128,param_2,aLStack144,aLStack160);
            lib::L2CValue::L2CValue((L2CValue *)&local_1f0,true);
            uVar5 = lib::L2CValue::operator==((L2CValue *)auStack128,(L2CValue *)&local_1f0);
            lib::L2CValue::~L2CValue((L2CValue *)&local_1f0);
            lib::L2CValue::~L2CValue((L2CValue *)auStack128);
            lib::L2CValue::~L2CValue(aLStack160);
            lib::L2CValue::~L2CValue(aLStack144);
            if ((uVar5 & 1) == 0) {
              lib::L2CValue::L2CValue(aLStack176,aLStack864);
              lib::L2CValue::L2CValue(aLStack192,aLStack880);
              FUN_71000374c0(auStack128,param_2,aLStack176,aLStack192);
              lib::L2CValue::L2CValue((L2CValue *)&local_1f0,true);
              uVar5 = lib::L2CValue::operator==((L2CValue *)auStack128,(L2CValue *)&local_1f0);
              lib::L2CValue::~L2CValue((L2CValue *)&local_1f0);
              lib::L2CValue::~L2CValue((L2CValue *)auStack128);
              lib::L2CValue::~L2CValue(aLStack192);
              lib::L2CValue::~L2CValue(aLStack176);
              if ((uVar5 & 1) == 0) {
                lib::L2CValue::L2CValue(aLStack848,false);
              }
              else {
                lib::L2CValue::L2CValue(aLStack848,true);
              }
            }
            else {
              lib::L2CValue::L2CValue(aLStack848,true);
            }
          }
          else {
            lib::L2CValue::L2CValue(aLStack848,true);
          }
          lib::L2CValue::L2CValue((L2CValue *)&local_1f0,true);
          uVar5 = lib::L2CValue::operator==(aLStack848,(L2CValue *)&local_1f0);
          lib::L2CValue::~L2CValue((L2CValue *)&local_1f0);
          lib::L2CValue::~L2CValue(aLStack848);
          lib::L2CValue::~L2CValue(aLStack880);
          lib::L2CValue::~L2CValue(aLStack864);
          if ((uVar5 & 1) != 0) {
            lib::L2CValue::L2CValue(aLStack896,aLStack272);
            FUN_7100032ca0(auStack128,aLStack896);
            lib::L2CValue::L2CValue((L2CValue *)&local_1f0,true);
            uVar5 = lib::L2CValue::operator==((L2CValue *)auStack128,(L2CValue *)&local_1f0);
            lib::L2CValue::~L2CValue((L2CValue *)&local_1f0);
            lib::L2CValue::~L2CValue((L2CValue *)auStack128);
            lib::L2CValue::~L2CValue(aLStack896);
            if ((uVar5 & 1) == 0) goto LAB_7100030270;
            lib::L2CValue::L2CValue(aLStack912,aLStack272);
            lib::L2CValue::L2CValue(aLStack928,true);
            FUN_7100032db0(&local_1f0,param_2,aLStack912,aLStack928);
            lib::L2CValue::operator=(aLStack320,(L2CValue *)&local_1f0);
            lib::L2CValue::operator=(aLStack336,aLStack480);
            lib::L2CValue::operator=((L2CValue *)(auStack368 + 0x10),aLStack464);
            lib::L2CValue::operator=((L2CValue *)auStack368,aLStack448);
            lib::L2CValue::operator=(aLStack384,aLStack432);
            lib::L2CValue::~L2CValue(aLStack432);
            lib::L2CValue::~L2CValue(aLStack448);
            lib::L2CValue::~L2CValue(aLStack464);
            lib::L2CValue::~L2CValue(aLStack480);
            lib::L2CValue::~L2CValue((L2CValue *)&local_1f0);
            lib::L2CValue::~L2CValue(aLStack928);
            lib::L2CValue::~L2CValue(aLStack912);
            lib::L2CValue::L2CValue((L2CValue *)&local_1f0,true);
            uVar5 = lib::L2CValue::operator==(aLStack320,(L2CValue *)&local_1f0);
            lib::L2CValue::~L2CValue((L2CValue *)&local_1f0);
            if ((uVar5 & 1) == 0) goto LAB_7100030270;
            lib::L2CValue::L2CValue((L2CValue *)&local_1f0,aLStack272);
            uVar4 = lib::L2CValue::as_integer(aLStack272);
            pvVar7 = (void *)app::sv_battle_object::module_accessor(uVar4);
            if (pvVar7 == (void *)0x0) {
              lib::L2CValue::L2CValue
                        ((L2CValue *)auStack128,(L2CValue *)&LUA_SCRIPT_LINE_SYSTEM_POST);
            }
            else {
              lib::L2CValue::L2CValue((L2CValue *)auStack128,pvVar7);
            }
            lib::L2CValue::L2CValue(aLStack160,_WEAPON_PICKEL_STONE_INSTANCE_WORK_ID_INT_PREV);
            iVar2 = lib::L2CValue::as_integer(aLStack160);
            pBVar8 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer((L2CValue *)auStack128)
            ;
            iVar2 = app::lua_bind::WorkModule__get_int_impl(pBVar8,iVar2);
            lib::L2CValue::L2CValue(aLStack144,iVar2);
            lib::L2CValue::operator=(aLStack272,aLStack144);
            lib::L2CValue::~L2CValue(aLStack144);
            lib::L2CValue::~L2CValue(aLStack160);
            lib::L2CValue::L2CValue(aLStack160,_WEAPON_PICKEL_STONE_INSTANCE_WORK_ID_INT_NEXT);
            iVar2 = lib::L2CValue::as_integer(aLStack160);
            pBVar8 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer((L2CValue *)auStack128)
            ;
            iVar2 = app::lua_bind::WorkModule__get_int_impl(pBVar8,iVar2);
            lib::L2CValue::L2CValue(aLStack144,iVar2);
            lib::L2CValue::operator=(aLStack400,aLStack144);
            lib::L2CValue::~L2CValue(aLStack144);
            lib::L2CValue::~L2CValue(aLStack160);
            uVar4 = lib::L2CValue::as_integer((L2CValue *)&local_1f0);
            app::lua_bind::ArticleModule__remove_exist_object_id_impl
                      (*(BattleObjectModuleAccessor **)(param_2 + 0x40),uVar4);
            goto LAB_710002fdf4;
          }
        }
LAB_7100030270:
        lib::L2CValue::~L2CValue(aLStack768);
        lib::L2CValue::~L2CValue(aLStack752);
        lib::L2CValue::~L2CValue(aLStack736);
        lib::L2CValue::~L2CValue(aLStack720);
        lib::L2CValue::~L2CValue((L2CValue *)auStack704);
        lib::L2CValue::~L2CValue((L2CValue *)auStack688);
        puVar9 = (ulong *)auStack672;
      }
LAB_71000302a4:
      lib::L2CValue::~L2CValue((L2CValue *)puVar9);
      goto LAB_71000302a8;
    }
    lib::L2CValue::L2CValue(aLStack608,aLStack272);
    FUN_7100032ca0(auStack128,aLStack608);
    lib::L2CValue::L2CValue((L2CValue *)&local_1f0,true);
    uVar5 = lib::L2CValue::operator==((L2CValue *)auStack128,(L2CValue *)&local_1f0);
    lib::L2CValue::~L2CValue((L2CValue *)&local_1f0);
    lib::L2CValue::~L2CValue((L2CValue *)auStack128);
    lib::L2CValue::~L2CValue(aLStack608);
    if ((uVar5 & 1) == 0) {
      lib::L2CValue::L2CValue(param_1,0x50000000);
    }
    else {
      lib::L2CValue::L2CValue(aLStack624,aLStack272);
      lib::L2CValue::L2CValue(aLStack640,true);
      FUN_7100032db0(&local_1f0,param_2,aLStack624,aLStack640);
      lib::L2CValue::operator=(aLStack320,(L2CValue *)&local_1f0);
      lib::L2CValue::operator=(aLStack336,aLStack480);
      lib::L2CValue::operator=((L2CValue *)(auStack368 + 0x10),aLStack464);
      lib::L2CValue::operator=((L2CValue *)auStack368,aLStack448);
      lib::L2CValue::operator=(aLStack384,aLStack432);
      lib::L2CValue::~L2CValue(aLStack432);
      lib::L2CValue::~L2CValue(aLStack448);
      lib::L2CValue::~L2CValue(aLStack464);
      lib::L2CValue::~L2CValue(aLStack480);
      lib::L2CValue::~L2CValue((L2CValue *)&local_1f0);
      lib::L2CValue::~L2CValue(aLStack640);
      lib::L2CValue::~L2CValue(aLStack624);
      lib::L2CValue::L2CValue((L2CValue *)&local_1f0,false);
      uVar5 = lib::L2CValue::operator==(aLStack320,(L2CValue *)&local_1f0);
      lib::L2CValue::~L2CValue((L2CValue *)&local_1f0);
      if ((uVar5 & 1) == 0) {
        lib::L2CValue::L2CValue((L2CValue *)&local_1f0,aLStack272);
        uVar4 = lib::L2CValue::as_integer(aLStack272);
        pvVar7 = (void *)app::sv_battle_object::module_accessor(uVar4);
        if (pvVar7 == (void *)0x0) {
          lib::L2CValue::L2CValue((L2CValue *)auStack128,(L2CValue *)&LUA_SCRIPT_LINE_SYSTEM_POST);
        }
        else {
          lib::L2CValue::L2CValue((L2CValue *)auStack128,pvVar7);
        }
        lib::L2CValue::L2CValue(aLStack160,_WEAPON_PICKEL_STONE_INSTANCE_WORK_ID_INT_PREV);
        iVar2 = lib::L2CValue::as_integer(aLStack160);
        pBVar8 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer((L2CValue *)auStack128);
        iVar2 = app::lua_bind::WorkModule__get_int_impl(pBVar8,iVar2);
        lib::L2CValue::L2CValue(aLStack144,iVar2);
        lib::L2CValue::operator=(aLStack272,aLStack144);
        lib::L2CValue::~L2CValue(aLStack144);
        lib::L2CValue::~L2CValue(aLStack160);
        lib::L2CValue::L2CValue(aLStack160,_WEAPON_PICKEL_STONE_INSTANCE_WORK_ID_INT_NEXT);
        iVar2 = lib::L2CValue::as_integer(aLStack160);
        pBVar8 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer((L2CValue *)auStack128);
        iVar2 = app::lua_bind::WorkModule__get_int_impl(pBVar8,iVar2);
        lib::L2CValue::L2CValue(aLStack144,iVar2);
        lib::L2CValue::operator=(aLStack400,aLStack144);
        lib::L2CValue::~L2CValue(aLStack144);
        lib::L2CValue::~L2CValue(aLStack160);
        uVar4 = lib::L2CValue::as_integer((L2CValue *)&local_1f0);
        app::lua_bind::ArticleModule__remove_exist_object_id_impl
                  (*(BattleObjectModuleAccessor **)(param_2 + 0x40),uVar4);
        lib::L2CValue::~L2CValue((L2CValue *)auStack128);
        puVar9 = &local_1f0;
        goto LAB_71000302a4;
      }
      lib::L2CValue::L2CValue(param_1,0x50000000);
    }
  }
  else {
    lib::L2CValue::L2CValue(aLStack416,aLStack272);
    FUN_7100032ca0(auStack128,aLStack416);
    lib::L2CValue::L2CValue((L2CValue *)&local_1f0,true);
    uVar5 = lib::L2CValue::operator==((L2CValue *)auStack128,(L2CValue *)&local_1f0);
    lib::L2CValue::~L2CValue((L2CValue *)&local_1f0);
    lib::L2CValue::~L2CValue((L2CValue *)auStack128);
    lib::L2CValue::~L2CValue(aLStack416);
    if ((uVar5 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack512,aLStack272);
      lib::L2CValue::L2CValue(aLStack528,false);
      FUN_7100032db0(&local_1f0,param_2,aLStack512,aLStack528);
      lib::L2CValue::operator=(aLStack320,(L2CValue *)&local_1f0);
      lib::L2CValue::operator=(aLStack336,aLStack480);
      lib::L2CValue::operator=((L2CValue *)(auStack368 + 0x10),aLStack464);
      lib::L2CValue::operator=((L2CValue *)auStack368,aLStack448);
      lib::L2CValue::operator=(aLStack384,aLStack432);
      lib::L2CValue::~L2CValue(aLStack432);
      lib::L2CValue::~L2CValue(aLStack448);
      lib::L2CValue::~L2CValue(aLStack464);
      lib::L2CValue::~L2CValue(aLStack480);
      lib::L2CValue::~L2CValue((L2CValue *)&local_1f0);
      lib::L2CValue::~L2CValue(aLStack528);
      lib::L2CValue::~L2CValue(aLStack512);
      lib::L2CValue::L2CValue((L2CValue *)&local_1f0,true);
      uVar5 = lib::L2CValue::operator==(aLStack320,(L2CValue *)&local_1f0);
      lib::L2CValue::~L2CValue((L2CValue *)&local_1f0);
      if ((uVar5 & 1) != 0) {
        lib::L2CValue::L2CValue((L2CValue *)&local_1f0,aLStack272);
        uVar4 = lib::L2CValue::as_integer(aLStack272);
        pvVar7 = (void *)app::sv_battle_object::module_accessor(uVar4);
        if (pvVar7 == (void *)0x0) {
          lib::L2CValue::L2CValue((L2CValue *)auStack128,(L2CValue *)&LUA_SCRIPT_LINE_SYSTEM_POST);
        }
        else {
          lib::L2CValue::L2CValue((L2CValue *)auStack128,pvVar7);
        }
        lib::L2CValue::L2CValue(aLStack160,_WEAPON_PICKEL_STONE_INSTANCE_WORK_ID_INT_PREV);
        iVar2 = lib::L2CValue::as_integer(aLStack160);
        pBVar8 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer((L2CValue *)auStack128);
        iVar2 = app::lua_bind::WorkModule__get_int_impl(pBVar8,iVar2);
        lib::L2CValue::L2CValue(aLStack144,iVar2);
        lib::L2CValue::operator=(aLStack272,aLStack144);
        lib::L2CValue::~L2CValue(aLStack144);
        lib::L2CValue::~L2CValue(aLStack160);
        lib::L2CValue::L2CValue(aLStack160,_WEAPON_PICKEL_STONE_INSTANCE_WORK_ID_INT_NEXT);
        iVar2 = lib::L2CValue::as_integer(aLStack160);
        pBVar8 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer((L2CValue *)auStack128);
        iVar2 = app::lua_bind::WorkModule__get_int_impl(pBVar8,iVar2);
        lib::L2CValue::L2CValue(aLStack144,iVar2);
        lib::L2CValue::operator=(aLStack400,aLStack144);
        lib::L2CValue::~L2CValue(aLStack144);
        lib::L2CValue::~L2CValue(aLStack160);
        uVar4 = lib::L2CValue::as_integer((L2CValue *)&local_1f0);
        app::lua_bind::ArticleModule__remove_exist_object_id_impl
                  (*(BattleObjectModuleAccessor **)(param_2 + 0x40),uVar4);
        lib::L2CValue::~L2CValue((L2CValue *)auStack128);
        lib::L2CValue::~L2CValue((L2CValue *)&local_1f0);
      }
    }
    lib::L2CValue::L2CValue((L2CValue *)&local_1f0,false);
    uVar5 = lib::L2CValue::operator==(aLStack320,(L2CValue *)&local_1f0);
    lib::L2CValue::~L2CValue((L2CValue *)&local_1f0);
    if ((uVar5 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack544,aLStack272);
      lib::L2CValue::L2CValue(aLStack560,aLStack304);
      FUN_71000335c0(&local_1f0,param_2,aLStack544,aLStack560);
      lib::L2CValue::operator=(aLStack320,(L2CValue *)&local_1f0);
      lib::L2CValue::operator=(aLStack336,aLStack480);
      lib::L2CValue::operator=((L2CValue *)(auStack368 + 0x10),aLStack464);
      lib::L2CValue::operator=((L2CValue *)auStack368,aLStack448);
      lib::L2CValue::operator=(aLStack384,aLStack432);
      lib::L2CValue::~L2CValue(aLStack432);
      lib::L2CValue::~L2CValue(aLStack448);
      lib::L2CValue::~L2CValue(aLStack464);
      lib::L2CValue::~L2CValue(aLStack480);
      lib::L2CValue::~L2CValue((L2CValue *)&local_1f0);
      lib::L2CValue::~L2CValue(aLStack560);
      lib::L2CValue::~L2CValue(aLStack544);
      lib::L2CValue::L2CValue((L2CValue *)&local_1f0,false);
      uVar5 = lib::L2CValue::operator==(aLStack320,(L2CValue *)&local_1f0);
      lib::L2CValue::~L2CValue((L2CValue *)&local_1f0);
      if ((uVar5 & 1) != 0) {
        lib::L2CValue::L2CValue(param_1,0x50000000);
        goto LAB_7100030a24;
      }
    }
LAB_71000302a8:
    lib::L2CValue::L2CValue((L2CValue *)&local_1f0,0.0);
    uVar5 = lib::L2CValue::operator<=(aLStack384,(L2CValue *)&local_1f0);
    lib::L2CValue::~L2CValue((L2CValue *)&local_1f0);
    if ((uVar5 & 1) == 0) {
      lib::L2CValue::L2CValue((L2CValue *)&local_1f0,0.0);
      lib::L2CValue::operator+(aLStack336,(L2CValue *)&local_1f0);
      lib::L2CValue::~L2CValue((L2CValue *)&local_1f0);
      lib::L2CValue::L2CValue((L2CValue *)&local_1f0,_FIGHTER_PICKEL_STATUS_SPECIAL_LW_FLOAT_POS_X);
      fVar16 = (float)lib::L2CValue::as_number((L2CValue *)auStack128);
      iVar2 = lib::L2CValue::as_integer((L2CValue *)&local_1f0);
      app::lua_bind::WorkModule__set_float_impl
                (*(BattleObjectModuleAccessor **)(param_2 + 0x40),fVar16,iVar2);
      lib::L2CValue::~L2CValue((L2CValue *)&local_1f0);
      lib::L2CValue::~L2CValue((L2CValue *)auStack128);
      lib::L2CValue::L2CValue((L2CValue *)&local_1f0,0.0);
      lib::L2CValue::operator+((L2CValue *)(auStack368 + 0x10),(L2CValue *)&local_1f0);
      lib::L2CValue::~L2CValue((L2CValue *)&local_1f0);
      lib::L2CValue::L2CValue((L2CValue *)&local_1f0,_FIGHTER_PICKEL_STATUS_SPECIAL_LW_FLOAT_POS_Y);
      fVar16 = (float)lib::L2CValue::as_number((L2CValue *)auStack128);
      iVar2 = lib::L2CValue::as_integer((L2CValue *)&local_1f0);
      app::lua_bind::WorkModule__set_float_impl
                (*(BattleObjectModuleAccessor **)(param_2 + 0x40),fVar16,iVar2);
      lib::L2CValue::~L2CValue((L2CValue *)&local_1f0);
      lib::L2CValue::~L2CValue((L2CValue *)auStack128);
      lib::L2CValue::L2CValue((L2CValue *)&local_1f0,0.0);
      lib::L2CValue::operator+((L2CValue *)auStack368,(L2CValue *)&local_1f0);
      lib::L2CValue::~L2CValue((L2CValue *)&local_1f0);
      lib::L2CValue::L2CValue((L2CValue *)&local_1f0,_FIGHTER_PICKEL_STATUS_SPECIAL_LW_FLOAT_ANGLE);
      fVar16 = (float)lib::L2CValue::as_number((L2CValue *)auStack128);
      iVar2 = lib::L2CValue::as_integer((L2CValue *)&local_1f0);
      app::lua_bind::WorkModule__set_float_impl
                (*(BattleObjectModuleAccessor **)(param_2 + 0x40),fVar16,iVar2);
      lib::L2CValue::~L2CValue((L2CValue *)&local_1f0);
      lib::L2CValue::~L2CValue((L2CValue *)auStack128);
      pLVar10 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)(param_2 + 200),4);
      lib::L2CValue::L2CValue((L2CValue *)&local_1f0,_FIGHTER_PICKEL_GENERATE_ARTICLE_PLATE);
      pFVar11 = (Fighter *)lib::L2CValue::as_pointer(pLVar10);
      iVar2 = lib::L2CValue::as_integer((L2CValue *)&local_1f0);
      uVar4 = app::FighterSpecializer_Pickel::generate_article(pFVar11,iVar2);
      lib::L2CValue::L2CValue((L2CValue *)auStack128,uVar4);
      lib::L2CValue::~L2CValue((L2CValue *)&local_1f0);
      uVar4 = lib::L2CValue::as_integer((L2CValue *)auStack128);
      pvVar7 = (void *)app::sv_battle_object::module_accessor(uVar4);
      if (pvVar7 == (void *)0x0) {
        lib::L2CValue::L2CValue(aLStack144,(L2CValue *)&LUA_SCRIPT_LINE_SYSTEM_POST);
      }
      else {
        lib::L2CValue::L2CValue(aLStack144,pvVar7);
      }
      uVar5 = lib::L2CValue::operator==(aLStack144,(L2CValue *)&LUA_SCRIPT_LINE_SYSTEM_POST);
      if ((uVar5 & 1) == 0) {
        lib::L2CValue::L2CValue(aLStack160,0.0);
        lib::L2CValue::L2CValue(aLStack176,0.0);
        lib::L2CValue::L2CValue(aLStack192,0);
        uVar5 = lib::L2CValue::as_number((L2CValue *)auStack368);
        lVar20 = lib::L2CValue::as_number(aLStack160);
        uVar4 = lib::L2CValue::as_number(aLStack176);
        local_1f0 = uVar5 & 0xffffffff | lVar20 << 0x20;
        uStack488 = (ulong)uVar4;
        uVar5 = lib::L2CValue::as_integer(aLStack192);
        pBVar8 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(aLStack144);
        pLVar10 = (L2CValue *)(uVar5 & 0xffffffff);
        app::lua_bind::PostureModule__set_rot_impl(pBVar8,(Vector3f *)&local_1f0,(int)pLVar10);
        lib::L2CValue::~L2CValue(aLStack192);
        lib::L2CValue::~L2CValue(aLStack176);
        lib::L2CValue::~L2CValue(aLStack160);
        lib::L2CValue::L2CValue((L2CValue *)&local_1f0,false);
        fVar16 = (float)lib::L2CValue::as_number(aLStack384);
        bVar1 = lib::L2CValue::as_bool((L2CValue *)&local_1f0);
        pBVar8 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(aLStack144);
        app::lua_bind::PostureModule__set_scale_impl(pBVar8,fVar16,(bool)(bVar1 & 1));
        lib::L2CValue::~L2CValue((L2CValue *)&local_1f0);
        lib::L2CValue::L2CValue
                  ((L2CValue *)&local_1f0,_WEAPON_PICKEL_PLATE_INSTANCE_WORK_ID_FLOAT_SCALE);
        fVar16 = (float)lib::L2CValue::as_number(aLStack384);
        iVar2 = lib::L2CValue::as_integer((L2CValue *)&local_1f0);
        pBVar8 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(aLStack144);
        app::lua_bind::WorkModule__set_float_impl(pBVar8,fVar16,iVar2);
        lib::L2CValue::~L2CValue((L2CValue *)&local_1f0);
        lib::L2CValue::L2CValue(aLStack1008,(L2CValue *)auStack128);
        lib::L2CValue::L2CValue(aLStack1024,aLStack272);
        FUN_7100035830(aLStack1008,aLStack1024);
        lib::L2CValue::~L2CValue(aLStack1024);
        lib::L2CValue::~L2CValue(aLStack1008);
        lib::L2CValue::L2CValue((L2CValue *)&local_1f0,0x50000000);
        uVar5 = lib::L2CValue::operator==(aLStack400,(L2CValue *)&local_1f0);
        lib::L2CValue::~L2CValue((L2CValue *)&local_1f0);
        if ((uVar5 & 1) == 0) {
          uVar4 = lib::L2CValue::as_integer(aLStack400);
          pvVar7 = (void *)app::sv_battle_object::module_accessor(uVar4);
          if (pvVar7 == (void *)0x0) {
            lib::L2CValue::L2CValue((L2CValue *)&local_1f0,(L2CValue *)&LUA_SCRIPT_LINE_SYSTEM_POST)
            ;
          }
          else {
            lib::L2CValue::L2CValue((L2CValue *)&local_1f0,pvVar7);
          }
          lib::L2CValue::L2CValue(aLStack160,_WEAPON_PICKEL_STONE_INSTANCE_WORK_ID_INT_PREV);
          iVar2 = lib::L2CValue::as_integer((L2CValue *)auStack128);
          iVar3 = lib::L2CValue::as_integer(aLStack160);
          pBVar8 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer((L2CValue *)&local_1f0);
          app::lua_bind::WorkModule__set_int_impl(pBVar8,iVar2,iVar3);
          lib::L2CValue::~L2CValue(aLStack160);
          lib::L2CValue::L2CValue(aLStack160,_WEAPON_PICKEL_PLATE_INSTANCE_WORK_ID_INT_NEXT);
          iVar2 = lib::L2CValue::as_integer(aLStack400);
          uVar5 = lib::L2CValue::as_integer(aLStack160);
          pBVar8 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(aLStack144);
          pLVar10 = (L2CValue *)(uVar5 & 0xffffffff);
          app::lua_bind::WorkModule__set_int_impl(pBVar8,iVar2,(int)pLVar10);
          lib::L2CValue::~L2CValue(aLStack160);
          lib::L2CValue::~L2CValue((L2CValue *)&local_1f0);
        }
        lib::L2CValue::L2CValue((L2CValue *)&local_1f0,_FIGHTER_PICKEL_GENERATE_ARTICLE_PICKELBOMB);
        iVar2 = lib::L2CValue::as_integer((L2CValue *)&local_1f0);
        pvVar7 = (void *)app::lua_bind::ArticleModule__get_article_impl
                                   (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar2);
        if (pvVar7 == (void *)0x0) {
          lib::L2CValue::L2CValue(aLStack160,(L2CValue *)&LUA_SCRIPT_LINE_SYSTEM_POST);
        }
        else {
          lib::L2CValue::L2CValue(aLStack160,pvVar7);
        }
        lib::L2CValue::~L2CValue((L2CValue *)&local_1f0);
        uVar5 = lib::L2CValue::operator==(aLStack160,(L2CValue *)&LUA_SCRIPT_LINE_SYSTEM_POST);
        if ((uVar5 & 1) == 0) {
          pAVar12 = (Article *)lib::L2CValue::as_pointer(aLStack160);
          uVar4 = app::lua_bind::Article__get_battle_object_id_impl(pAVar12);
          lib::L2CValue::L2CValue(aLStack176,uVar4);
          uVar4 = lib::L2CValue::as_integer(aLStack176);
          pvVar7 = (void *)app::sv_battle_object::module_accessor(uVar4);
          if (pvVar7 == (void *)0x0) {
            lib::L2CValue::L2CValue(aLStack192,(L2CValue *)&LUA_SCRIPT_LINE_SYSTEM_POST);
          }
          else {
            lib::L2CValue::L2CValue(aLStack192,pvVar7);
          }
          uVar5 = lib::L2CValue::operator==(aLStack192,(L2CValue *)&LUA_SCRIPT_LINE_SYSTEM_POST);
          if ((uVar5 & 1) == 0) {
            lib::L2CValue::L2CValue((L2CValue *)&local_1f0,true);
            bVar1 = lib::L2CValue::as_bool((L2CValue *)&local_1f0);
            pBVar8 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(aLStack192);
            pRVar13 = (Rhombus2 *)
                      app::lua_bind::GroundModule__get_rhombus_impl(pBVar8,(bool)(bVar1 & 1));
            app::lua_bind::Rhombus2__store_l2c_table_impl(pRVar13);
            lib::L2CValue::~L2CValue((L2CValue *)&local_1f0);
            pLVar14 = (L2CValue *)
                      lib::L2CValue::operator[]((L2CValue *)(auStack224 + 0x10),0x5b4ca7514);
            pLVar14 = (L2CValue *)lib::L2CValue::operator[](pLVar14,0x18cdc1683);
            pLVar15 = (L2CValue *)
                      lib::L2CValue::operator[]((L2CValue *)(auStack224 + 0x10),0x47a67e768);
            pLVar15 = (L2CValue *)lib::L2CValue::operator[](pLVar15,0x18cdc1683);
            lib::L2CValue::operator-(pLVar14,pLVar15);
            lib::L2CAgent::math_abs((L2CAgent *)auStack256,pLVar15);
            lib::L2CValue::L2CValue((L2CValue *)&local_1f0,0.5);
            lib::L2CValue::operator*((L2CValue *)(auStack256 + 0x10),(L2CValue *)&local_1f0);
            lib::L2CValue::~L2CValue((L2CValue *)&local_1f0);
            lib::L2CValue::~L2CValue((L2CValue *)(auStack256 + 0x10));
            lib::L2CValue::~L2CValue((L2CValue *)auStack256);
            pLVar14 = (L2CValue *)
                      lib::L2CValue::operator[]((L2CValue *)(auStack224 + 0x10),0x24394ee70);
            pLVar14 = (L2CValue *)lib::L2CValue::operator[](pLVar14,0x1fbdb2615);
            pLVar15 = (L2CValue *)
                      lib::L2CValue::operator[]((L2CValue *)(auStack224 + 0x10),0x41cff903b);
            pLVar15 = (L2CValue *)lib::L2CValue::operator[](pLVar15,0x1fbdb2615);
            lib::L2CValue::operator-(pLVar14,pLVar15);
            lib::L2CAgent::math_abs((L2CAgent *)auStack672,pLVar15);
            lib::L2CValue::L2CValue((L2CValue *)&local_1f0,0.5);
            lib::L2CValue::operator*((L2CValue *)auStack256,(L2CValue *)&local_1f0);
            lib::L2CValue::~L2CValue((L2CValue *)&local_1f0);
            lib::L2CValue::~L2CValue((L2CValue *)auStack256);
            lib::L2CValue::~L2CValue((L2CValue *)auStack672);
            lib::L2CAgent::math_min((L2CAgent *)auStack224,(L2CValue *)(auStack256 + 0x10),pLVar10);
            pLVar10 = (L2CValue *)0x2;
            lib::L2CValue::L2CValue((L2CValue *)auStack704,2);
            lib::L2CAgent::math_sqrt((L2CAgent *)auStack704,pLVar10);
            lib::L2CValue::operator*((L2CValue *)auStack688,(L2CValue *)&local_1f0);
            lib::L2CValue::operator-((L2CValue *)auStack672,(L2CValue *)&local_1f0);
            lib::L2CValue::operator=((L2CValue *)&local_1f0,(L2CValue *)auStack256);
            lib::L2CValue::~L2CValue((L2CValue *)auStack256);
            lib::L2CValue::~L2CValue((L2CValue *)auStack672);
            lib::L2CValue::~L2CValue((L2CValue *)auStack688);
            lib::L2CValue::~L2CValue((L2CValue *)auStack704);
            lib::L2CValue::L2CValue
                      ((L2CValue *)auStack256,_WEAPON_PICKEL_PLATE_INSTANCE_WORK_ID_FLOAT_RADIUS);
            fVar16 = (float)lib::L2CValue::as_number((L2CValue *)&local_1f0);
            iVar2 = lib::L2CValue::as_integer((L2CValue *)auStack256);
            pBVar8 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(aLStack144);
            app::lua_bind::WorkModule__set_float_impl(pBVar8,fVar16,iVar2);
            lib::L2CValue::~L2CValue((L2CValue *)auStack256);
            lib::L2CValue::~L2CValue((L2CValue *)&local_1f0);
            lib::L2CValue::~L2CValue((L2CValue *)(auStack256 + 0x10));
            lib::L2CValue::~L2CValue((L2CValue *)auStack224);
            lib::L2CValue::~L2CValue((L2CValue *)(auStack224 + 0x10));
          }
          lib::L2CValue::~L2CValue(aLStack192);
          lib::L2CValue::~L2CValue(aLStack176);
        }
        lib::L2CValue::~L2CValue(aLStack160);
      }
      lib::L2CValue::L2CValue(param_1,aLStack272);
      lib::L2CValue::~L2CValue(aLStack144);
      lib::L2CValue::~L2CValue((L2CValue *)auStack128);
    }
    else {
      lib::L2CValue::L2CValue(param_1,0x50000000);
    }
  }
LAB_7100030a24:
  lib::L2CValue::~L2CValue(aLStack400);
  lib::L2CValue::~L2CValue(aLStack384);
  lib::L2CValue::~L2CValue((L2CValue *)auStack368);
  lib::L2CValue::~L2CValue((L2CValue *)(auStack368 + 0x10));
  lib::L2CValue::~L2CValue(aLStack336);
  lib::L2CValue::~L2CValue(aLStack320);
  lib::L2CValue::~L2CValue(aLStack304);
LAB_7100030a5c:
  lib::L2CValue::~L2CValue(aLStack272);
  return;
}

