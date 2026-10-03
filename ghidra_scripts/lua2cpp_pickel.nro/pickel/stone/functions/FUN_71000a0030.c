
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_71000a0030(L2CValue *param_1,void *param_2)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  ulong uVar4;
  void *pvVar5;
  L2CValue *pLVar6;
  Weapon *pWVar7;
  BattleObjectModuleAccessor *pBVar8;
  L2CValue *pLVar9;
  Rhombus2 *pRVar10;
  ulong uVar11;
  L2CValue *pLVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined8 uVar16;
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
  L2CValue aLStack256 [16];
  L2CValue aLStack240 [16];
  L2CValue aLStack224 [16];
  L2CValue aLStack208 [16];
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  
  lib::L2CValue::L2CValue(aLStack368,_WEAPON_PICKEL_PLATE_INSTANCE_WORK_ID_INT_PREV);
  iVar2 = lib::L2CValue::as_integer(aLStack368);
  iVar2 = app::lua_bind::WorkModule__get_int_impl
                    (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40),iVar2);
  lib::L2CValue::L2CValue(aLStack112,iVar2);
  lib::L2CValue::~L2CValue(aLStack368);
  lib::L2CValue::L2CValue(aLStack368,0x50000000);
  uVar4 = lib::L2CValue::operator==(aLStack112,aLStack368);
  lib::L2CValue::~L2CValue(aLStack368);
  if ((uVar4 & 1) == 0) {
    uVar3 = lib::L2CValue::as_integer(aLStack112);
    bVar1 = app::sv_battle_object::is_active(uVar3);
    lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
    lib::L2CValue::L2CValue(aLStack368,false);
    uVar4 = lib::L2CValue::operator==(aLStack96,aLStack368);
    lib::L2CValue::~L2CValue(aLStack368);
    lib::L2CValue::~L2CValue(aLStack96);
    if ((uVar4 & 1) == 0) {
      uVar3 = lib::L2CValue::as_integer(aLStack112);
      pvVar5 = (void *)app::sv_battle_object::module_accessor(uVar3);
      if (pvVar5 == (void *)0x0) {
        lib::L2CValue::L2CValue(aLStack128,(L2CValue *)&LUA_SCRIPT_LINE_SYSTEM_POST);
      }
      else {
        lib::L2CValue::L2CValue(aLStack128,pvVar5);
      }
      uVar4 = lib::L2CValue::operator==(aLStack128,(L2CValue *)&LUA_SCRIPT_LINE_SYSTEM_POST);
      if ((uVar4 & 1) == 0) {
        pLVar6 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)((long)param_2 + 200),4);
        pWVar7 = (Weapon *)lib::L2CValue::as_pointer(pLVar6);
        uVar3 = app::lua_bind::Weapon__get_founder_id_impl(pWVar7);
        lib::L2CValue::L2CValue(aLStack144,uVar3);
        uVar3 = lib::L2CValue::as_integer(aLStack144);
        pvVar5 = (void *)app::sv_battle_object::module_accessor(uVar3);
        if (pvVar5 == (void *)0x0) {
          lib::L2CValue::L2CValue(aLStack160,(L2CValue *)&LUA_SCRIPT_LINE_SYSTEM_POST);
        }
        else {
          lib::L2CValue::L2CValue(aLStack160,pvVar5);
        }
        uVar4 = lib::L2CValue::operator==(aLStack160,(L2CValue *)&LUA_SCRIPT_LINE_SYSTEM_POST);
        if ((uVar4 & 1) == 0) {
          pBVar8 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(aLStack128);
          uVar16 = app::lua_bind::PostureModule__pos_2d_impl(pBVar8);
          lib::L2CValue::L2CValue(aLStack208,(float)uVar16);
          lib::L2CValue::L2CValue(aLStack192,(float)((ulong)uVar16 >> 0x20));
          lib::L2CValue::L2CValue(aLStack368,aLStack208);
          lib::L2CValue::L2CValue(aLStack96,aLStack192);
          lua2cpp::L2CFighterBase::Vector2__create(param_2,(L2CValue)0x90,(L2CValue)0xa0);
          lib::L2CValue::~L2CValue(aLStack96);
          lib::L2CValue::~L2CValue(aLStack368);
          lib::L2CValue::~L2CValue(aLStack192);
          lib::L2CValue::~L2CValue(aLStack208);
          uVar16 = app::lua_bind::PostureModule__pos_2d_impl
                             (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40));
          lib::L2CValue::L2CValue(aLStack256,(float)uVar16);
          lib::L2CValue::L2CValue(aLStack240,(float)((ulong)uVar16 >> 0x20));
          lib::L2CValue::L2CValue(aLStack368,aLStack256);
          lib::L2CValue::L2CValue(aLStack96,aLStack240);
          pLVar12 = aLStack96;
          lua2cpp::L2CFighterBase::Vector2__create(param_2,(L2CValue)0x90,SUB81(pLVar12,0));
          lib::L2CValue::~L2CValue(aLStack96);
          lib::L2CValue::~L2CValue(aLStack368);
          lib::L2CValue::~L2CValue(aLStack240);
          lib::L2CValue::~L2CValue(aLStack256);
          lib::L2CValue::L2CValue((L2CValue *)(auStack288 + 0x10),1.0);
          pLVar6 = (L2CValue *)lib::L2CValue::operator[](aLStack176,0x18cdc1683);
          pLVar9 = (L2CValue *)lib::L2CValue::operator[](aLStack224,0x18cdc1683);
          uVar4 = lib::L2CValue::operator<(pLVar6,pLVar9);
          if ((uVar4 & 1) != 0) {
            lib::L2CValue::L2CValue(aLStack368,-1.0);
            lib::L2CValue::operator=((L2CValue *)(auStack288 + 0x10),aLStack368);
            lib::L2CValue::~L2CValue(aLStack368);
          }
          lib::L2CValue::L2CValue((L2CValue *)auStack288);
          lib::L2CValue::L2CValue(aLStack304);
          lib::L2CValue::L2CValue(aLStack320,0.0);
          uVar3 = lib::L2CValue::as_integer(aLStack112);
          uVar3 = app::sv_battle_object::category(uVar3);
          lib::L2CValue::L2CValue(aLStack96,uVar3 & 0xff);
          lib::L2CValue::L2CValue(aLStack368,_BATTLE_OBJECT_CATEGORY_ITEM);
          uVar4 = lib::L2CValue::operator==(aLStack96,aLStack368);
          lib::L2CValue::~L2CValue(aLStack368);
          lib::L2CValue::~L2CValue(aLStack96);
          if ((uVar4 & 1) == 0) {
            uVar3 = lib::L2CValue::as_integer(aLStack112);
            uVar3 = app::sv_battle_object::kind(uVar3);
            lib::L2CValue::L2CValue(aLStack96,uVar3);
            lib::L2CValue::L2CValue(aLStack368,_WEAPON_KIND_PICKEL_PLATE);
            uVar4 = lib::L2CValue::operator==(aLStack96,aLStack368);
            lib::L2CValue::~L2CValue(aLStack368);
            lib::L2CValue::~L2CValue(aLStack96);
            if ((uVar4 & 1) == 0) {
              lib::L2CValue::L2CValue(aLStack336,0xba12fa217);
              lib::L2CValue::L2CValue(aLStack384,0x58c1a452f);
              uVar4 = lib::L2CValue::as_integer(aLStack336);
              uVar11 = lib::L2CValue::as_integer(aLStack384);
              pBVar8 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(aLStack160);
              fVar13 = (float)app::lua_bind::WorkModule__get_param_float_impl(pBVar8,uVar4,uVar11);
              lib::L2CValue::L2CValue(aLStack96,fVar13);
              lib::L2CValue::L2CValue(aLStack416,_WEAPON_PICKEL_STONE_INSTANCE_WORK_ID_FLOAT_SCALE);
              iVar2 = lib::L2CValue::as_integer(aLStack416);
              fVar13 = (float)app::lua_bind::WorkModule__get_float_impl
                                        (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40),
                                         iVar2);
              lib::L2CValue::L2CValue(aLStack400,fVar13);
              lib::L2CValue::operator*(aLStack96,aLStack400);
              lib::L2CValue::operator=(aLStack320,aLStack368);
            }
            else {
              lib::L2CValue::L2CValue(aLStack336,0xbc9917066);
              lib::L2CValue::L2CValue(aLStack384,0x58c1a452f);
              uVar4 = lib::L2CValue::as_integer(aLStack336);
              uVar11 = lib::L2CValue::as_integer(aLStack384);
              pBVar8 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(aLStack160);
              fVar13 = (float)app::lua_bind::WorkModule__get_param_float_impl(pBVar8,uVar4,uVar11);
              lib::L2CValue::L2CValue(aLStack96,fVar13);
              lib::L2CValue::L2CValue(aLStack416,_WEAPON_PICKEL_PLATE_INSTANCE_WORK_ID_FLOAT_SCALE);
              iVar2 = lib::L2CValue::as_integer(aLStack416);
              fVar13 = (float)app::lua_bind::WorkModule__get_float_impl
                                        (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40),
                                         iVar2);
              lib::L2CValue::L2CValue(aLStack400,fVar13);
              lib::L2CValue::operator*(aLStack96,aLStack400);
              lib::L2CValue::operator=(aLStack320,aLStack368);
            }
            lib::L2CValue::~L2CValue(aLStack368);
            lib::L2CValue::~L2CValue(aLStack400);
            lib::L2CValue::~L2CValue(aLStack416);
            lib::L2CValue::~L2CValue(aLStack96);
            pLVar6 = aLStack384;
          }
          else {
            lib::L2CValue::L2CValue(aLStack368,true);
            bVar1 = lib::L2CValue::as_bool(aLStack368);
            pBVar8 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(aLStack128);
            pRVar10 = (Rhombus2 *)
                      app::lua_bind::GroundModule__get_rhombus_impl(pBVar8,(bool)(bVar1 & 1));
            app::lua_bind::Rhombus2__store_l2c_table_impl(pRVar10);
            lib::L2CValue::~L2CValue(aLStack368);
            pLVar6 = (L2CValue *)lib::L2CValue::operator[](aLStack336,0x5b4ca7514);
            pLVar6 = (L2CValue *)lib::L2CValue::operator[](pLVar6,0x18cdc1683);
            pLVar9 = (L2CValue *)lib::L2CValue::operator[](aLStack336,0x47a67e768);
            pLVar9 = (L2CValue *)lib::L2CValue::operator[](pLVar9,0x18cdc1683);
            lib::L2CValue::operator-(pLVar6,pLVar9);
            lib::L2CValue::operator=(aLStack320,aLStack368);
            lib::L2CValue::~L2CValue(aLStack368);
            lib::L2CValue::L2CValue(aLStack96,GROUND_TOUCH_FLAG_DOWN);
            uVar3 = lib::L2CValue::as_integer(aLStack96);
            pBVar8 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(aLStack128);
            uVar16 = app::lua_bind::GroundModule__get_touch_normal_consider_gravity_impl
                               (pBVar8,uVar3);
            lib::L2CValue::L2CValue(aLStack368,(float)uVar16);
            lib::L2CValue::L2CValue(aLStack352,(float)((ulong)uVar16 >> 0x20));
            lib::L2CValue::operator=((L2CValue *)auStack288,aLStack368);
            lib::L2CValue::operator=(aLStack304,aLStack352);
            lib::L2CValue::~L2CValue(aLStack352);
            lib::L2CValue::~L2CValue(aLStack368);
            lib::L2CValue::~L2CValue(aLStack96);
            lib::L2CValue::L2CValue(aLStack96,0.5);
            lib::L2CValue::operator*(aLStack320,aLStack96);
            lib::L2CValue::~L2CValue(aLStack96);
            lib::L2CValue::operator*(aLStack400,(L2CValue *)(auStack288 + 0x10));
            pLVar6 = (L2CValue *)lib::L2CValue::operator[](aLStack336,0x24394ee70);
            pLVar6 = (L2CValue *)lib::L2CValue::operator[](pLVar6,0x1fbdb2615);
            pLVar9 = (L2CValue *)lib::L2CValue::operator[](aLStack336,0x41cff903b);
            pLVar9 = (L2CValue *)lib::L2CValue::operator[](pLVar9,0x1fbdb2615);
            lib::L2CValue::operator-(pLVar6,pLVar9);
            lib::L2CValue::L2CValue(aLStack96,0.5);
            lib::L2CValue::operator*(aLStack432,aLStack96);
            lib::L2CValue::~L2CValue(aLStack96);
            lib::L2CAgent::math_atan((L2CAgent *)auStack288,aLStack304,pLVar12);
            lib::L2CValue::operator-(aLStack448);
            fVar13 = (float)lib::L2CValue::as_number(aLStack384);
            fVar14 = (float)lib::L2CValue::as_number(aLStack416);
            fVar15 = (float)lib::L2CValue::as_number(aLStack96);
            uVar16 = app::sv_math::vec2_rot(fVar13,fVar14,fVar15);
            lib::L2CValue::L2CValue(aLStack368,(float)uVar16);
            lib::L2CValue::L2CValue(aLStack352,(float)((ulong)uVar16 >> 0x20));
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
            pLVar6 = (L2CValue *)lib::L2CValue::operator[](aLStack176,0x18cdc1683);
            lib::L2CValue::operator-(pLVar6,(L2CValue *)auStack288);
            pLVar6 = (L2CValue *)lib::L2CValue::operator[](aLStack176,0x18cdc1683);
            lib::L2CValue::operator=(pLVar6,aLStack368);
            lib::L2CValue::~L2CValue(aLStack368);
            pLVar6 = (L2CValue *)lib::L2CValue::operator[](aLStack176,0x1fbdb2615);
            lib::L2CValue::operator-(pLVar6,aLStack304);
            pLVar6 = (L2CValue *)lib::L2CValue::operator[](aLStack176,0x1fbdb2615);
            lib::L2CValue::operator=(pLVar6,aLStack368);
            pLVar6 = aLStack368;
          }
          lib::L2CValue::~L2CValue(pLVar6);
          lib::L2CValue::~L2CValue(aLStack336);
          lib::L2CValue::L2CValue(aLStack336,0xba12fa217);
          lib::L2CValue::L2CValue(aLStack384,0x58c1a452f);
          uVar4 = lib::L2CValue::as_integer(aLStack336);
          pLVar6 = (L2CValue *)lib::L2CValue::as_integer(aLStack384);
          fVar13 = (float)app::lua_bind::WorkModule__get_param_float_impl
                                    (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40),uVar4,
                                     (ulong)pLVar6);
          lib::L2CValue::L2CValue(aLStack96,fVar13);
          lib::L2CValue::L2CValue(aLStack416,_WEAPON_PICKEL_STONE_INSTANCE_WORK_ID_FLOAT_SCALE);
          iVar2 = lib::L2CValue::as_integer(aLStack416);
          fVar13 = (float)app::lua_bind::WorkModule__get_float_impl
                                    (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40),iVar2);
          lib::L2CValue::L2CValue(aLStack400,fVar13);
          lib::L2CValue::operator*(aLStack96,aLStack400);
          lib::L2CValue::operator=(aLStack320,aLStack368);
          lib::L2CValue::~L2CValue(aLStack368);
          lib::L2CValue::~L2CValue(aLStack400);
          lib::L2CValue::~L2CValue(aLStack416);
          lib::L2CValue::~L2CValue(aLStack96);
          lib::L2CValue::~L2CValue(aLStack384);
          lib::L2CValue::~L2CValue(aLStack336);
          lib::L2CValue::L2CValue(aLStack96,GROUND_TOUCH_FLAG_DOWN);
          uVar3 = lib::L2CValue::as_integer(aLStack96);
          uVar16 = app::lua_bind::GroundModule__get_touch_normal_consider_gravity_impl
                             (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40),uVar3);
          lib::L2CValue::L2CValue(aLStack368,(float)uVar16);
          lib::L2CValue::L2CValue(aLStack352,(float)((ulong)uVar16 >> 0x20));
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
          lib::L2CAgent::math_atan((L2CAgent *)auStack288,aLStack304,pLVar6);
          lib::L2CValue::operator-(aLStack432);
          fVar13 = (float)lib::L2CValue::as_number(aLStack336);
          fVar14 = (float)lib::L2CValue::as_number(aLStack400);
          fVar15 = (float)lib::L2CValue::as_number(aLStack416);
          uVar16 = app::sv_math::vec2_rot(fVar13,fVar14,fVar15);
          lib::L2CValue::L2CValue(aLStack368,(float)uVar16);
          lib::L2CValue::L2CValue(aLStack352,(float)((ulong)uVar16 >> 0x20));
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
          pLVar6 = (L2CValue *)lib::L2CValue::operator[](aLStack224,0x18cdc1683);
          lib::L2CValue::operator-(pLVar6,(L2CValue *)auStack288);
          pLVar6 = (L2CValue *)lib::L2CValue::operator[](aLStack224,0x18cdc1683);
          lib::L2CValue::operator=(pLVar6,aLStack368);
          lib::L2CValue::~L2CValue(aLStack368);
          pLVar6 = (L2CValue *)lib::L2CValue::operator[](aLStack224,0x1fbdb2615);
          lib::L2CValue::operator-(pLVar6,aLStack304);
          pLVar6 = (L2CValue *)lib::L2CValue::operator[](aLStack224,0x1fbdb2615);
          lib::L2CValue::operator=(pLVar6,aLStack368);
          lib::L2CValue::~L2CValue(aLStack368);
          lib::L2CValue::L2CValue(aLStack96,0x1018dfb2f4);
          lib::L2CValue::L2CValue(aLStack336,0xebac3be57);
          uVar4 = lib::L2CValue::as_integer(aLStack96);
          uVar11 = lib::L2CValue::as_integer(aLStack336);
          pBVar8 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(aLStack160);
          fVar13 = (float)app::lua_bind::WorkModule__get_param_float_impl(pBVar8,uVar4,uVar11);
          lib::L2CValue::L2CValue(aLStack368,fVar13);
          lib::L2CValue::~L2CValue(aLStack336);
          lib::L2CValue::~L2CValue(aLStack96);
          lib::L2CValue::operator-(aLStack176,aLStack224);
          lua2cpp::L2CFighterBase::Vector2__length(param_2,(L2CValue)0x30);
          uVar4 = lib::L2CValue::operator<=(aLStack368,aLStack96);
          lib::L2CValue::~L2CValue(aLStack96);
          lib::L2CValue::~L2CValue(aLStack464);
          if ((uVar4 & 1) == 0) {
            lib::L2CValue::L2CValue(param_1,false);
          }
          else {
            lib::L2CValue::L2CValue(param_1,true);
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
          lib::L2CValue::L2CValue(param_1,true);
        }
        lib::L2CValue::~L2CValue(aLStack160);
        lib::L2CValue::~L2CValue(aLStack144);
      }
      else {
        lib::L2CValue::L2CValue(param_1,true);
      }
      lib::L2CValue::~L2CValue(aLStack128);
    }
    else {
      lib::L2CValue::L2CValue(param_1,true);
    }
  }
  else {
    lib::L2CValue::L2CValue(param_1,false);
  }
  lib::L2CValue::~L2CValue(aLStack112);
  return;
}

