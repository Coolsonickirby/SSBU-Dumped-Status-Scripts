
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_710009aae0(L2CValue *param_1,void *param_2,L2CValue *param_3)

{
  bool bVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  ulong uVar5;
  void *pvVar6;
  L2CValue *pLVar7;
  Weapon *pWVar8;
  BattleObjectModuleAccessor *pBVar9;
  L2CValue *pLVar10;
  Rhombus2 *pRVar11;
  ulong uVar12;
  L2CValue *pLVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined8 uVar17;
  long lVar18;
  L2CValue aLStack464 [16];
  L2CValue aLStack448 [16];
  L2CValue aLStack432 [16];
  L2CValue aLStack416 [16];
  L2CValue aLStack400 [16];
  L2CValue aLStack384 [16];
  L2CValue aLStack368 [16];
  L2CValue aLStack352 [16];
  L2CValue aLStack336 [16];
  L2CValue aLStack320 [16];
  L2CValue aLStack304 [16];
  undefined auStack288 [32];
  undefined auStack256 [32];
  L2CValue aLStack224 [16];
  undefined local_d0 [32];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  
  lib::L2CValue::L2CValue((L2CValue *)local_d0,_WEAPON_PICKEL_PLATE_INSTANCE_WORK_ID_INT_PREV);
  iVar3 = lib::L2CValue::as_integer((L2CValue *)local_d0);
  iVar3 = app::lua_bind::WorkModule__get_int_impl
                    (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40),iVar3);
  lib::L2CValue::L2CValue(aLStack112,iVar3);
  lib::L2CValue::~L2CValue((L2CValue *)local_d0);
  lib::L2CValue::L2CValue((L2CValue *)local_d0,0x50000000);
  uVar5 = lib::L2CValue::operator==(aLStack112,(L2CValue *)local_d0);
  lib::L2CValue::~L2CValue((L2CValue *)local_d0);
  if ((uVar5 & 1) == 0) {
    uVar4 = lib::L2CValue::as_integer(aLStack112);
    bVar2 = app::sv_battle_object::is_active(uVar4);
    lib::L2CValue::L2CValue((L2CValue *)auStack256,(bool)(bVar2 & 1));
    lib::L2CValue::L2CValue((L2CValue *)local_d0,false);
    uVar5 = lib::L2CValue::operator==((L2CValue *)auStack256,(L2CValue *)local_d0);
    lib::L2CValue::~L2CValue((L2CValue *)local_d0);
    lib::L2CValue::~L2CValue((L2CValue *)auStack256);
    if ((uVar5 & 1) == 0) {
      uVar4 = lib::L2CValue::as_integer(aLStack112);
      pvVar6 = (void *)app::sv_battle_object::module_accessor(uVar4);
      if (pvVar6 == (void *)0x0) {
        lib::L2CValue::L2CValue(aLStack128,(L2CValue *)&LUA_SCRIPT_LINE_SYSTEM_POST);
      }
      else {
        lib::L2CValue::L2CValue(aLStack128,pvVar6);
      }
      uVar5 = lib::L2CValue::operator==(aLStack128,(L2CValue *)&LUA_SCRIPT_LINE_SYSTEM_POST);
      if ((uVar5 & 1) == 0) {
        pLVar7 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)((long)param_2 + 200),4);
        pWVar8 = (Weapon *)lib::L2CValue::as_pointer(pLVar7);
        uVar4 = app::lua_bind::Weapon__get_founder_id_impl(pWVar8);
        lib::L2CValue::L2CValue(aLStack144,uVar4);
        uVar4 = lib::L2CValue::as_integer(aLStack144);
        pvVar6 = (void *)app::sv_battle_object::module_accessor(uVar4);
        if (pvVar6 == (void *)0x0) {
          lib::L2CValue::L2CValue(aLStack160,(L2CValue *)&LUA_SCRIPT_LINE_SYSTEM_POST);
        }
        else {
          lib::L2CValue::L2CValue(aLStack160,pvVar6);
        }
        uVar5 = lib::L2CValue::operator==(aLStack160,(L2CValue *)&LUA_SCRIPT_LINE_SYSTEM_POST);
        if ((uVar5 & 1) == 0) {
          pBVar9 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(aLStack128);
          uVar17 = app::lua_bind::PostureModule__pos_2d_impl(pBVar9);
          lib::L2CValue::L2CValue((L2CValue *)local_d0,(float)uVar17);
          pLVar7 = (L2CValue *)(local_d0 + 0x10);
          lib::L2CValue::L2CValue(pLVar7,(float)((ulong)uVar17 >> 0x20));
          lib::L2CValue::L2CValue((L2CValue *)auStack256,(L2CValue *)local_d0);
          lib::L2CValue::L2CValue(aLStack368,pLVar7);
          lua2cpp::L2CFighterBase::Vector2__create(param_2,(L2CValue)0x0,(L2CValue)0x90);
          lib::L2CValue::~L2CValue(aLStack368);
          lib::L2CValue::~L2CValue((L2CValue *)auStack256);
          lib::L2CValue::~L2CValue(pLVar7);
          lib::L2CValue::~L2CValue((L2CValue *)local_d0);
          uVar17 = app::lua_bind::PostureModule__pos_2d_impl
                             (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40));
          lib::L2CValue::L2CValue((L2CValue *)auStack256,(float)uVar17);
          pLVar7 = (L2CValue *)(auStack256 + 0x10);
          lib::L2CValue::L2CValue(pLVar7,(float)((ulong)uVar17 >> 0x20));
          lib::L2CValue::L2CValue(aLStack368,(L2CValue *)auStack256);
          lib::L2CValue::L2CValue(aLStack96,pLVar7);
          pLVar13 = aLStack96;
          lua2cpp::L2CFighterBase::Vector2__create(param_2,(L2CValue)0x90,SUB81(pLVar13,0));
          lib::L2CValue::~L2CValue(aLStack96);
          lib::L2CValue::~L2CValue(aLStack368);
          lib::L2CValue::~L2CValue(pLVar7);
          lib::L2CValue::~L2CValue((L2CValue *)auStack256);
          lib::L2CValue::L2CValue((L2CValue *)(auStack288 + 0x10),1.0);
          pLVar7 = (L2CValue *)lib::L2CValue::operator[](aLStack176,0x18cdc1683);
          pLVar10 = (L2CValue *)lib::L2CValue::operator[](aLStack224,0x18cdc1683);
          uVar5 = lib::L2CValue::operator<(pLVar7,pLVar10);
          if ((uVar5 & 1) != 0) {
            lib::L2CValue::L2CValue(aLStack368,-1.0);
            lib::L2CValue::operator=((L2CValue *)(auStack288 + 0x10),aLStack368);
            lib::L2CValue::~L2CValue(aLStack368);
          }
          lib::L2CValue::L2CValue((L2CValue *)auStack288);
          lib::L2CValue::L2CValue(aLStack304);
          lib::L2CValue::L2CValue(aLStack320,0.0);
          uVar4 = lib::L2CValue::as_integer(aLStack112);
          uVar4 = app::sv_battle_object::category(uVar4);
          lib::L2CValue::L2CValue(aLStack96,uVar4 & 0xff);
          lib::L2CValue::L2CValue(aLStack368,_BATTLE_OBJECT_CATEGORY_ITEM);
          uVar5 = lib::L2CValue::operator==(aLStack96,aLStack368);
          lib::L2CValue::~L2CValue(aLStack368);
          lib::L2CValue::~L2CValue(aLStack96);
          if ((uVar5 & 1) == 0) {
            lib::L2CValue::L2CValue(aLStack336,0xba12fa217);
            lib::L2CValue::L2CValue(aLStack384,0x58c1a452f);
            uVar5 = lib::L2CValue::as_integer(aLStack336);
            uVar12 = lib::L2CValue::as_integer(aLStack384);
            pBVar9 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(aLStack160);
            fVar16 = (float)app::lua_bind::WorkModule__get_param_float_impl(pBVar9,uVar5,uVar12);
            lib::L2CValue::L2CValue(aLStack96,fVar16);
            lib::L2CValue::L2CValue(aLStack416,_WEAPON_PICKEL_STONE_INSTANCE_WORK_ID_FLOAT_SCALE);
            iVar3 = lib::L2CValue::as_integer(aLStack416);
            fVar16 = (float)app::lua_bind::WorkModule__get_float_impl
                                      (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40),iVar3)
            ;
            lib::L2CValue::L2CValue(aLStack400,fVar16);
            lib::L2CValue::operator*(aLStack96,aLStack400);
            lib::L2CValue::operator=(aLStack320,aLStack368);
            lib::L2CValue::~L2CValue(aLStack368);
            lib::L2CValue::~L2CValue(aLStack400);
            lib::L2CValue::~L2CValue(aLStack416);
            lib::L2CValue::~L2CValue(aLStack96);
            pLVar7 = aLStack384;
          }
          else {
            lib::L2CValue::L2CValue(aLStack368,true);
            bVar2 = lib::L2CValue::as_bool(aLStack368);
            pBVar9 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(aLStack128);
            pRVar11 = (Rhombus2 *)
                      app::lua_bind::GroundModule__get_rhombus_impl(pBVar9,(bool)(bVar2 & 1));
            app::lua_bind::Rhombus2__store_l2c_table_impl(pRVar11);
            lib::L2CValue::~L2CValue(aLStack368);
            pLVar7 = (L2CValue *)lib::L2CValue::operator[](aLStack336,0x5b4ca7514);
            pLVar7 = (L2CValue *)lib::L2CValue::operator[](pLVar7,0x18cdc1683);
            pLVar10 = (L2CValue *)lib::L2CValue::operator[](aLStack336,0x47a67e768);
            pLVar10 = (L2CValue *)lib::L2CValue::operator[](pLVar10,0x18cdc1683);
            lib::L2CValue::operator-(pLVar7,pLVar10);
            lib::L2CValue::operator=(aLStack320,aLStack368);
            lib::L2CValue::~L2CValue(aLStack368);
            lib::L2CValue::L2CValue(aLStack96,GROUND_TOUCH_FLAG_DOWN);
            uVar4 = lib::L2CValue::as_integer(aLStack96);
            pBVar9 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(aLStack128);
            uVar17 = app::lua_bind::GroundModule__get_touch_normal_consider_gravity_impl
                               (pBVar9,uVar4);
            lib::L2CValue::L2CValue(aLStack368,(float)uVar17);
            lib::L2CValue::L2CValue(aLStack352,(float)((ulong)uVar17 >> 0x20));
            lib::L2CValue::operator=((L2CValue *)auStack288,aLStack368);
            lib::L2CValue::operator=(aLStack304,aLStack352);
            lib::L2CValue::~L2CValue(aLStack352);
            lib::L2CValue::~L2CValue(aLStack368);
            lib::L2CValue::~L2CValue(aLStack96);
            lib::L2CValue::L2CValue(aLStack96,0.5);
            lib::L2CValue::operator*(aLStack320,aLStack96);
            lib::L2CValue::~L2CValue(aLStack96);
            lib::L2CValue::operator*(aLStack400,(L2CValue *)(auStack288 + 0x10));
            pLVar7 = (L2CValue *)lib::L2CValue::operator[](aLStack336,0x24394ee70);
            pLVar7 = (L2CValue *)lib::L2CValue::operator[](pLVar7,0x1fbdb2615);
            pLVar10 = (L2CValue *)lib::L2CValue::operator[](aLStack336,0x41cff903b);
            pLVar10 = (L2CValue *)lib::L2CValue::operator[](pLVar10,0x1fbdb2615);
            lib::L2CValue::operator-(pLVar7,pLVar10);
            lib::L2CValue::L2CValue(aLStack96,0.5);
            lib::L2CValue::operator*(aLStack432,aLStack96);
            lib::L2CValue::~L2CValue(aLStack96);
            lib::L2CAgent::math_atan((L2CAgent *)auStack288,aLStack304,pLVar13);
            lib::L2CValue::operator-(aLStack448);
            fVar16 = (float)lib::L2CValue::as_number(aLStack384);
            fVar14 = (float)lib::L2CValue::as_number(aLStack416);
            fVar15 = (float)lib::L2CValue::as_number(aLStack96);
            uVar17 = app::sv_math::vec2_rot(fVar16,fVar14,fVar15);
            lib::L2CValue::L2CValue(aLStack368,(float)uVar17);
            lib::L2CValue::L2CValue(aLStack352,(float)((ulong)uVar17 >> 0x20));
            lib::L2CValue::operator=((L2CValue *)auStack288,aLStack368);
            lib::L2CValue::operator=(aLStack304,aLStack352);
            lib::L2CValue::~L2CValue(aLStack352);
            lib::L2CValue::~L2CValue(aLStack368);
            lib::L2CValue::~L2CValue(aLStack96);
            lib::L2CValue::~L2CValue(aLStack448);
            lib::L2CValue::~L2CValue(aLStack416);
            lib::L2CValue::~L2CValue(aLStack432);
            lib::L2CValue::~L2CValue(aLStack384);
            lib::L2CValue::~L2CValue(aLStack400);
            pLVar7 = (L2CValue *)lib::L2CValue::operator[](aLStack176,0x18cdc1683);
            lib::L2CValue::operator-(pLVar7,(L2CValue *)auStack288);
            pLVar7 = (L2CValue *)lib::L2CValue::operator[](aLStack176,0x18cdc1683);
            lib::L2CValue::operator=(pLVar7,aLStack368);
            lib::L2CValue::~L2CValue(aLStack368);
            pLVar7 = (L2CValue *)lib::L2CValue::operator[](aLStack176,0x1fbdb2615);
            lib::L2CValue::operator-(pLVar7,aLStack304);
            pLVar7 = (L2CValue *)lib::L2CValue::operator[](aLStack176,0x1fbdb2615);
            lib::L2CValue::operator=(pLVar7,aLStack368);
            pLVar7 = aLStack368;
          }
          lib::L2CValue::~L2CValue(pLVar7);
          lib::L2CValue::~L2CValue(aLStack336);
          lib::L2CValue::L2CValue(aLStack336,0xbc9917066);
          lib::L2CValue::L2CValue(aLStack384,0x58c1a452f);
          uVar5 = lib::L2CValue::as_integer(aLStack336);
          pLVar7 = (L2CValue *)lib::L2CValue::as_integer(aLStack384);
          fVar16 = (float)app::lua_bind::WorkModule__get_param_float_impl
                                    (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40),uVar5,
                                     (ulong)pLVar7);
          lib::L2CValue::L2CValue(aLStack96,fVar16);
          lib::L2CValue::L2CValue(aLStack416,_WEAPON_PICKEL_PLATE_INSTANCE_WORK_ID_FLOAT_SCALE);
          iVar3 = lib::L2CValue::as_integer(aLStack416);
          fVar16 = (float)app::lua_bind::WorkModule__get_float_impl
                                    (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40),iVar3);
          lib::L2CValue::L2CValue(aLStack400,fVar16);
          lib::L2CValue::operator*(aLStack96,aLStack400);
          lib::L2CValue::operator=(aLStack320,aLStack368);
          lib::L2CValue::~L2CValue(aLStack368);
          lib::L2CValue::~L2CValue(aLStack400);
          lib::L2CValue::~L2CValue(aLStack416);
          lib::L2CValue::~L2CValue(aLStack96);
          lib::L2CValue::~L2CValue(aLStack384);
          lib::L2CValue::~L2CValue(aLStack336);
          lib::L2CValue::L2CValue(aLStack96,GROUND_TOUCH_FLAG_DOWN);
          uVar4 = lib::L2CValue::as_integer(aLStack96);
          uVar17 = app::lua_bind::GroundModule__get_touch_normal_consider_gravity_impl
                             (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40),uVar4);
          lib::L2CValue::L2CValue(aLStack368,(float)uVar17);
          lib::L2CValue::L2CValue(aLStack352,(float)((ulong)uVar17 >> 0x20));
          lib::L2CValue::operator=((L2CValue *)auStack288,aLStack368);
          lib::L2CValue::operator=(aLStack304,aLStack352);
          lib::L2CValue::~L2CValue(aLStack352);
          lib::L2CValue::~L2CValue(aLStack368);
          lib::L2CValue::~L2CValue(aLStack96);
          lib::L2CValue::L2CValue(aLStack96,0.5);
          lib::L2CValue::operator*(aLStack320,aLStack96);
          lib::L2CValue::~L2CValue(aLStack96);
          lib::L2CValue::operator-((L2CValue *)(auStack288 + 0x10));
          lib::L2CValue::operator*(aLStack384,aLStack96);
          lib::L2CValue::L2CValue(aLStack400,0.0);
          lib::L2CAgent::math_atan((L2CAgent *)auStack288,aLStack304,pLVar7);
          lib::L2CValue::operator-(aLStack432);
          fVar16 = (float)lib::L2CValue::as_number(aLStack336);
          fVar14 = (float)lib::L2CValue::as_number(aLStack400);
          fVar15 = (float)lib::L2CValue::as_number(aLStack416);
          uVar17 = app::sv_math::vec2_rot(fVar16,fVar14,fVar15);
          lib::L2CValue::L2CValue(aLStack368,(float)uVar17);
          lib::L2CValue::L2CValue(aLStack352,(float)((ulong)uVar17 >> 0x20));
          lib::L2CValue::operator=((L2CValue *)auStack288,aLStack368);
          lib::L2CValue::operator=(aLStack304,aLStack352);
          lib::L2CValue::~L2CValue(aLStack352);
          lib::L2CValue::~L2CValue(aLStack368);
          lib::L2CValue::~L2CValue(aLStack416);
          lib::L2CValue::~L2CValue(aLStack432);
          lib::L2CValue::~L2CValue(aLStack400);
          lib::L2CValue::~L2CValue(aLStack336);
          lib::L2CValue::~L2CValue(aLStack96);
          lib::L2CValue::~L2CValue(aLStack384);
          pLVar7 = (L2CValue *)lib::L2CValue::operator[](aLStack224,0x18cdc1683);
          lib::L2CValue::operator-(pLVar7,(L2CValue *)auStack288);
          pLVar7 = (L2CValue *)lib::L2CValue::operator[](aLStack224,0x18cdc1683);
          lib::L2CValue::operator=(pLVar7,aLStack368);
          lib::L2CValue::~L2CValue(aLStack368);
          pLVar7 = (L2CValue *)lib::L2CValue::operator[](aLStack224,0x1fbdb2615);
          lib::L2CValue::operator-(pLVar7,aLStack304);
          pLVar7 = (L2CValue *)lib::L2CValue::operator[](aLStack224,0x1fbdb2615);
          lib::L2CValue::operator=(pLVar7,aLStack368);
          lib::L2CValue::~L2CValue(aLStack368);
          lib::L2CValue::L2CValue(aLStack96,0x1018dfb2f4);
          lib::L2CValue::L2CValue(aLStack336,0xebac3be57);
          uVar5 = lib::L2CValue::as_integer(aLStack96);
          param_3 = (L2CValue *)lib::L2CValue::as_integer(aLStack336);
          pBVar9 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(aLStack160);
          fVar16 = (float)app::lua_bind::WorkModule__get_param_float_impl
                                    (pBVar9,uVar5,(ulong)param_3);
          lib::L2CValue::L2CValue(aLStack368,fVar16);
          lib::L2CValue::~L2CValue(aLStack336);
          lib::L2CValue::~L2CValue(aLStack96);
          lib::L2CValue::operator-(aLStack176,aLStack224);
          lua2cpp::L2CFighterBase::Vector2__length(param_2,(L2CValue)0xb0);
          uVar5 = lib::L2CValue::operator<=(aLStack368,aLStack96);
          lib::L2CValue::~L2CValue(aLStack96);
          lib::L2CValue::~L2CValue(aLStack336);
          if ((uVar5 & 1) == 0) {
            lib::L2CValue::L2CValue(aLStack464,false);
          }
          else {
            lib::L2CValue::L2CValue(aLStack464,true);
          }
          lib::L2CValue::~L2CValue(aLStack368);
          lib::L2CValue::~L2CValue(aLStack320);
          lib::L2CValue::~L2CValue(aLStack304);
          lib::L2CValue::~L2CValue((L2CValue *)auStack288);
          lib::L2CValue::~L2CValue((L2CValue *)(auStack288 + 0x10));
          lib::L2CValue::~L2CValue(aLStack224);
          lib::L2CValue::~L2CValue(aLStack176);
        }
        else {
          lib::L2CValue::L2CValue(aLStack464,true);
        }
        lib::L2CValue::~L2CValue(aLStack160);
        lib::L2CValue::~L2CValue(aLStack144);
      }
      else {
        lib::L2CValue::L2CValue(aLStack464,true);
      }
      lib::L2CValue::~L2CValue(aLStack128);
    }
    else {
      lib::L2CValue::L2CValue(aLStack464,true);
    }
  }
  else {
    lib::L2CValue::L2CValue(aLStack464,false);
  }
  lib::L2CValue::~L2CValue(aLStack112);
  bVar1 = lib::L2CValue::operator.cast.to.bool(aLStack464);
  lib::L2CValue::~L2CValue(aLStack464);
  if ((bVar1 & 1U) == 0) {
    lib::L2CValue::L2CValue(aLStack368,GROUND_TOUCH_FLAG_DOWN);
    uVar4 = lib::L2CValue::as_integer(aLStack368);
    bVar2 = app::lua_bind::GroundModule__is_touch_impl
                      (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40),uVar4);
    lib::L2CValue::L2CValue((L2CValue *)auStack256,(bool)(bVar2 & 1));
    lib::L2CValue::L2CValue((L2CValue *)local_d0,true);
    uVar5 = lib::L2CValue::operator==((L2CValue *)auStack256,(L2CValue *)local_d0);
    lib::L2CValue::~L2CValue((L2CValue *)local_d0);
    lib::L2CValue::~L2CValue((L2CValue *)auStack256);
    lib::L2CValue::~L2CValue(aLStack368);
    if ((uVar5 & 1) != 0) {
      lib::L2CValue::L2CValue((L2CValue *)auStack256);
      lib::L2CValue::L2CValue(aLStack368);
      lib::L2CValue::L2CValue(aLStack96,GROUND_TOUCH_FLAG_DOWN);
      uVar4 = lib::L2CValue::as_integer(aLStack96);
      uVar17 = app::lua_bind::GroundModule__get_touch_normal_impl
                         (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40),uVar4);
      lib::L2CValue::L2CValue((L2CValue *)local_d0,(float)uVar17);
      pLVar7 = (L2CValue *)(local_d0 + 0x10);
      lib::L2CValue::L2CValue(pLVar7,(float)((ulong)uVar17 >> 0x20));
      lib::L2CValue::operator=((L2CValue *)auStack256,(L2CValue *)local_d0);
      lib::L2CValue::operator=(aLStack368,pLVar7);
      lib::L2CValue::~L2CValue(pLVar7);
      lib::L2CValue::~L2CValue((L2CValue *)local_d0);
      lib::L2CValue::~L2CValue(aLStack96);
      lib::L2CAgent::math_atan((L2CAgent *)auStack256,aLStack368,param_3);
      fVar16 = (float)app::lua_bind::PostureModule__lr_impl
                                (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40));
      lib::L2CValue::L2CValue(aLStack128,fVar16);
      pLVar7 = aLStack128;
      lib::L2CValue::operator*(aLStack112,pLVar7);
      lib::L2CAgent::math_deg((L2CAgent *)local_d0,pLVar7);
      lib::L2CValue::~L2CValue((L2CValue *)local_d0);
      lib::L2CValue::~L2CValue(aLStack128);
      lib::L2CValue::~L2CValue(aLStack112);
      lib::L2CValue::L2CValue(aLStack112,0.0);
      lib::L2CValue::L2CValue(aLStack128,0.0);
      uVar5 = lib::L2CValue::as_number(aLStack96);
      lVar18 = lib::L2CValue::as_number(aLStack112);
      uVar4 = lib::L2CValue::as_number(aLStack128);
      local_d0._0_8_ = (void **)(uVar5 & 0xffffffff | lVar18 << 0x20);
      local_d0._8_8_ = (BattleObject *)(ulong)uVar4;
      app::lua_bind::PostureModule__set_rot_impl
                (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40),(Vector3f *)local_d0,0);
      lib::L2CValue::~L2CValue(aLStack128);
      lib::L2CValue::~L2CValue(aLStack112);
      lib::L2CValue::~L2CValue(aLStack96);
      lib::L2CValue::~L2CValue(aLStack368);
      lib::L2CValue::~L2CValue((L2CValue *)auStack256);
    }
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  lib::L2CValue::L2CValue(param_1,bVar1);
  return;
}

