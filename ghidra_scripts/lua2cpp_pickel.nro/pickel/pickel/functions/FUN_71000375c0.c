
/* WARNING: Could not reconcile some variable overlaps */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_71000375c0(L2CValue *param_1,L2CAgent *param_2,L2CValue *param_3,L2CValue *param_4)

{
  byte bVar1;
  uint uVar2;
  GroundTouchID GVar3;
  int iVar4;
  ulong uVar5;
  void *pvVar6;
  BattleObjectModuleAccessor *pBVar7;
  GroundCollisionLine *pGVar8;
  undefined8 *puVar9;
  L2CValue *pLVar10;
  L2CValue *pLVar11;
  L2CValue *pLVar12;
  L2CValue *pLVar13;
  L2CValue *pLVar14;
  BattleObjectModuleAccessor *pBVar15;
  float fVar16;
  float fVar17;
  undefined8 uVar18;
  L2CValue aLStack864 [16];
  L2CValue aLStack848 [16];
  L2CValue aLStack832 [16];
  L2CValue aLStack816 [16];
  L2CValue aLStack800 [16];
  L2CValue aLStack784 [16];
  undefined auStack768 [32];
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
  undefined local_230 [32];
  L2CValue aLStack528 [16];
  L2CValue aLStack512 [16];
  L2CValue aLStack496 [16];
  L2CValue aLStack480 [16];
  L2CValue aLStack464 [16];
  L2CValue aLStack448 [16];
  L2CValue aLStack432 [16];
  L2CValue aLStack416 [16];
  undefined8 auStack400 [2];
  L2CValue aLStack384 [16];
  L2CValue aLStack368 [16];
  undefined8 auStack352 [2];
  L2CValue aLStack336 [16];
  undefined auStack320 [32];
  L2CValue aLStack288 [16];
  L2CValue aLStack272 [16];
  L2CValue aLStack256 [16];
  L2CValue aLStack240 [16];
  L2CValue aLStack224 [16];
  L2CValue aLStack208 [16];
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  undefined8 local_90;
  ulonglong uStack136;
  
  uVar2 = lib::L2CValue::as_integer(param_3);
  bVar1 = app::sv_battle_object::is_active(uVar2);
  lib::L2CValue::L2CValue((L2CValue *)&local_90,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue((L2CValue *)local_230,false);
  uVar5 = lib::L2CValue::operator==((L2CValue *)&local_90,(L2CValue *)local_230);
  lib::L2CValue::~L2CValue((L2CValue *)local_230);
  lib::L2CValue::~L2CValue((L2CValue *)&local_90);
  if ((uVar5 & 1) != 0) {
    lib::L2CValue::L2CValue(param_1,(L2CValue *)&LUA_SCRIPT_LINE_SYSTEM_POST);
    lib::L2CValue::L2CValue(param_1 + 0x10,0);
    lib::L2CValue::L2CValue(param_1 + 0x20,0);
    lib::L2CValue::L2CValue(param_1 + 0x30,0);
    lib::L2CValue::L2CValue(param_1 + 0x40,0);
    return;
  }
  uVar2 = lib::L2CValue::as_integer(param_3);
  pvVar6 = (void *)app::sv_battle_object::module_accessor(uVar2);
  if (pvVar6 == (void *)0x0) {
    lib::L2CValue::L2CValue(aLStack192,(L2CValue *)&LUA_SCRIPT_LINE_SYSTEM_POST);
  }
  else {
    lib::L2CValue::L2CValue(aLStack192,pvVar6);
  }
  uVar5 = lib::L2CValue::operator==(aLStack192,(L2CValue *)&LUA_SCRIPT_LINE_SYSTEM_POST);
  if ((uVar5 & 1) != 0) {
    lib::L2CValue::L2CValue(param_1,(L2CValue *)&LUA_SCRIPT_LINE_SYSTEM_POST);
    lib::L2CValue::L2CValue(param_1 + 0x10,0);
    lib::L2CValue::L2CValue(param_1 + 0x20,0);
    lib::L2CValue::L2CValue(param_1 + 0x30,0);
    lib::L2CValue::L2CValue(param_1 + 0x40,0);
    goto LAB_7100038cc8;
  }
  lib::L2CValue::L2CValue(aLStack208);
  lib::L2CValue::L2CValue(aLStack224);
  pBVar7 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(aLStack192);
  uVar18 = app::lua_bind::GroundModule__get_down_pos_impl(pBVar7);
  lib::L2CValue::L2CValue((L2CValue *)local_230,(float)uVar18);
  pLVar10 = (L2CValue *)(local_230 + 0x10);
  lib::L2CValue::L2CValue(pLVar10,(float)((ulong)uVar18 >> 0x20));
  lib::L2CValue::operator=(aLStack208,(L2CValue *)local_230);
  lib::L2CValue::operator=(aLStack224,pLVar10);
  lib::L2CValue::~L2CValue(pLVar10);
  lib::L2CValue::~L2CValue((L2CValue *)local_230);
  lib::L2CValue::L2CValue((L2CValue *)local_230,_GROUND_TOUCH_ID_DOWN);
  GVar3 = lib::L2CValue::as_integer((L2CValue *)local_230);
  pBVar7 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(aLStack192);
  pvVar6 = (void *)app::lua_bind::GroundModule__get_touch_line_raw_impl(pBVar7,GVar3);
  if (pvVar6 == (void *)0x0) {
    lib::L2CValue::L2CValue(aLStack240,(L2CValue *)&LUA_SCRIPT_LINE_SYSTEM_POST);
  }
  else {
    lib::L2CValue::L2CValue(aLStack240,pvVar6);
  }
  lib::L2CValue::~L2CValue((L2CValue *)local_230);
  uVar5 = lib::L2CValue::operator==(aLStack240,(L2CValue *)&LUA_SCRIPT_LINE_SYSTEM_POST);
  if ((uVar5 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack272,param_3);
    uVar2 = lib::L2CValue::as_integer(aLStack272);
    bVar1 = app::sv_battle_object::is_active(uVar2);
    lib::L2CValue::L2CValue((L2CValue *)&local_90,(bool)(bVar1 & 1));
    lib::L2CValue::L2CValue((L2CValue *)local_230,false);
    uVar5 = lib::L2CValue::operator==((L2CValue *)&local_90,(L2CValue *)local_230);
    lib::L2CValue::~L2CValue((L2CValue *)local_230);
    lib::L2CValue::~L2CValue((L2CValue *)&local_90);
    if ((uVar5 & 1) == 0) {
      uVar2 = lib::L2CValue::as_integer(aLStack272);
      pvVar6 = (void *)app::sv_battle_object::module_accessor(uVar2);
      if (pvVar6 == (void *)0x0) {
        lib::L2CValue::L2CValue((L2CValue *)&local_90,(L2CValue *)&LUA_SCRIPT_LINE_SYSTEM_POST);
      }
      else {
        lib::L2CValue::L2CValue((L2CValue *)&local_90,pvVar6);
      }
      uVar5 = lib::L2CValue::operator==
                        ((L2CValue *)&local_90,(L2CValue *)&LUA_SCRIPT_LINE_SYSTEM_POST);
      if ((uVar5 & 1) == 0) {
        uVar2 = lib::L2CValue::as_integer(aLStack272);
        uVar2 = app::sv_battle_object::category(uVar2);
        lib::L2CValue::L2CValue(aLStack160,uVar2 & 0xff);
        lib::L2CValue::L2CValue((L2CValue *)local_230,_BATTLE_OBJECT_CATEGORY_ITEM);
        uVar5 = lib::L2CValue::operator==(aLStack160,(L2CValue *)local_230);
        lib::L2CValue::~L2CValue((L2CValue *)local_230);
        lib::L2CValue::~L2CValue(aLStack160);
        if ((uVar5 & 1) == 0) {
          lib::L2CValue::L2CValue(aLStack176,aLStack272);
          FUN_7100032ca0(aLStack160,aLStack176);
          lib::L2CValue::L2CValue((L2CValue *)local_230,true);
          uVar5 = lib::L2CValue::operator==(aLStack160,(L2CValue *)local_230);
          lib::L2CValue::~L2CValue((L2CValue *)local_230);
          lib::L2CValue::~L2CValue(aLStack160);
          lib::L2CValue::~L2CValue(aLStack176);
          if ((uVar5 & 1) == 0) {
            lib::L2CValue::L2CValue
                      ((L2CValue *)local_230,_WEAPON_PICKEL_PLATE_INSTANCE_WORK_ID_FLOAT_SCALE);
            iVar4 = lib::L2CValue::as_integer((L2CValue *)local_230);
            pBVar7 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer((L2CValue *)&local_90);
            fVar16 = (float)app::lua_bind::WorkModule__get_float_impl(pBVar7,iVar4);
            lib::L2CValue::L2CValue(aLStack256,fVar16);
          }
          else {
            lib::L2CValue::L2CValue
                      ((L2CValue *)local_230,_WEAPON_PICKEL_STONE_INSTANCE_WORK_ID_FLOAT_SCALE);
            iVar4 = lib::L2CValue::as_integer((L2CValue *)local_230);
            pBVar7 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer((L2CValue *)&local_90);
            fVar16 = (float)app::lua_bind::WorkModule__get_float_impl(pBVar7,iVar4);
            lib::L2CValue::L2CValue(aLStack256,fVar16);
          }
          lib::L2CValue::~L2CValue((L2CValue *)local_230);
        }
        else {
          pBVar7 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer((L2CValue *)&local_90);
          fVar16 = (float)app::lua_bind::ModelModule__scale_impl(pBVar7);
          lib::L2CValue::L2CValue(aLStack256,fVar16);
        }
      }
      else {
        lib::L2CValue::L2CValue(aLStack256,1.0);
      }
      lib::L2CValue::~L2CValue((L2CValue *)&local_90);
    }
    else {
      lib::L2CValue::L2CValue(aLStack256,1.0);
    }
    lib::L2CValue::~L2CValue(aLStack272);
    lib::L2CValue::operator*(param_4,aLStack256);
    lib::L2CValue::operator=(param_4,(L2CValue *)local_230);
    lib::L2CValue::~L2CValue((L2CValue *)local_230);
    lib::L2CValue::L2CValue(aLStack288,param_3);
    lib::L2CValue::L2CValue((L2CValue *)(auStack320 + 0x10),false);
    FUN_7100039600(aLStack176,param_2,aLStack288,auStack320 + 0x10);
    lib::L2CValue::L2CValue((L2CValue *)local_230,0.5);
    lib::L2CValue::operator*(aLStack176,(L2CValue *)local_230);
    lib::L2CValue::~L2CValue((L2CValue *)local_230);
    lib::L2CValue::operator+((L2CValue *)&local_90,param_4);
    lib::L2CValue::~L2CValue((L2CValue *)&local_90);
    lib::L2CValue::~L2CValue(aLStack176);
    lib::L2CValue::~L2CValue((L2CValue *)(auStack320 + 0x10));
    lib::L2CValue::~L2CValue(aLStack288);
    lib::L2CValue::L2CValue(aLStack176);
    lib::L2CValue::L2CValue((L2CValue *)auStack320);
    uVar2 = lib::L2CValue::as_integer(param_3);
    uVar2 = app::sv_battle_object::category(uVar2);
    lib::L2CValue::L2CValue((L2CValue *)&local_90,uVar2 & 0xff);
    lib::L2CValue::L2CValue((L2CValue *)local_230,_BATTLE_OBJECT_CATEGORY_ITEM);
    uVar5 = lib::L2CValue::operator==((L2CValue *)&local_90,(L2CValue *)local_230);
    lib::L2CValue::~L2CValue((L2CValue *)local_230);
    lib::L2CValue::~L2CValue((L2CValue *)&local_90);
    if ((uVar5 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack368,param_3);
      lib::L2CValue::L2CValue(aLStack384,false);
      pLVar10 = aLStack368;
      FUN_7100039600(auStack352,param_2,pLVar10,aLStack384);
      lib::L2CValue::L2CValue((L2CValue *)local_230,0.5);
      lib::L2CValue::operator*((L2CValue *)auStack352,(L2CValue *)local_230);
      lib::L2CValue::~L2CValue((L2CValue *)local_230);
      lib::L2CValue::operator*(aLStack336,aLStack256);
      lib::L2CValue::~L2CValue(aLStack336);
      lib::L2CValue::~L2CValue((L2CValue *)auStack352);
      lib::L2CValue::~L2CValue(aLStack384);
      lib::L2CValue::~L2CValue(aLStack368);
      pGVar8 = (GroundCollisionLine *)lib::L2CValue::as_pointer(aLStack240);
      uVar18 = app::sv_ground_collision_line::get_normal(pGVar8);
      lib::L2CValue::L2CValue((L2CValue *)local_230,(float)uVar18);
      pLVar11 = (L2CValue *)(local_230 + 0x10);
      lib::L2CValue::L2CValue(pLVar11,(float)((ulong)uVar18 >> 0x20));
      lib::L2CValue::operator=(aLStack176,(L2CValue *)local_230);
      lib::L2CValue::operator=((L2CValue *)auStack320,pLVar11);
      lib::L2CValue::~L2CValue(pLVar11);
      lib::L2CValue::~L2CValue((L2CValue *)local_230);
      lib::L2CAgent::math_atan((L2CAgent *)auStack320,aLStack176,pLVar10);
      fVar16 = (float)app::lua_bind::PostureModule__lr_impl(param_2->moduleAccessor);
      lib::L2CValue::L2CValue((L2CValue *)auStack352,fVar16);
      puVar9 = auStack352;
      lib::L2CValue::operator*(aLStack336,(L2CValue *)puVar9);
      lib::L2CValue::~L2CValue((L2CValue *)auStack352);
      lib::L2CValue::~L2CValue(aLStack336);
      lib::L2CAgent::math_cos((L2CAgent *)local_230,(L2CValue *)puVar9);
      lib::L2CValue::operator*((L2CValue *)&local_90,(L2CValue *)auStack400);
      lib::L2CValue::operator-(aLStack208,(L2CValue *)auStack352);
      lib::L2CValue::operator=(aLStack208,aLStack336);
      lib::L2CValue::~L2CValue(aLStack336);
      lib::L2CValue::~L2CValue((L2CValue *)auStack352);
      lib::L2CValue::~L2CValue((L2CValue *)auStack400);
      lib::L2CValue::~L2CValue((L2CValue *)local_230);
      lib::L2CValue::~L2CValue((L2CValue *)&local_90);
    }
    lib::L2CValue::L2CValue(aLStack416,param_3);
    lib::L2CValue::L2CValue(aLStack432,true);
    FUN_7100035ca0(aLStack336,param_2,aLStack416,aLStack432);
    lib::L2CValue::~L2CValue(aLStack432);
    lib::L2CValue::~L2CValue(aLStack416);
    uVar18 = app::lua_bind::GroundModule__get_down_pos_impl(param_2->moduleAccessor);
    lib::L2CValue::L2CValue((L2CValue *)local_230,(float)uVar18);
    pLVar10 = (L2CValue *)(local_230 + 0x10);
    lib::L2CValue::L2CValue(pLVar10,(float)((ulong)uVar18 >> 0x20));
    lib::L2CValue::operator=(aLStack176,(L2CValue *)local_230);
    lib::L2CValue::operator=((L2CValue *)auStack320,pLVar10);
    lib::L2CValue::~L2CValue(pLVar10);
    lib::L2CValue::~L2CValue((L2CValue *)local_230);
    lib::L2CValue::L2CValue(aLStack448,aLStack336);
    lib::L2CValue::L2CValue(aLStack464,aLStack176);
    lib::L2CValue::L2CValue((L2CValue *)local_230,0.1);
    lib::L2CValue::operator+((L2CValue *)auStack320,(L2CValue *)local_230);
    lib::L2CValue::~L2CValue((L2CValue *)local_230);
    FUN_7100035f40(&local_90,aLStack448,aLStack464,aLStack480);
    lib::L2CValue::L2CValue((L2CValue *)local_230,true);
    uVar5 = lib::L2CValue::operator==((L2CValue *)&local_90,(L2CValue *)local_230);
    lib::L2CValue::~L2CValue((L2CValue *)local_230);
    lib::L2CValue::~L2CValue((L2CValue *)&local_90);
    lib::L2CValue::~L2CValue(aLStack480);
    lib::L2CValue::~L2CValue(aLStack464);
    lib::L2CValue::~L2CValue(aLStack448);
    if ((uVar5 & 1) == 0) {
      fVar16 = (float)app::lua_bind::PostureModule__pos_x_impl(param_2->moduleAccessor);
      lib::L2CValue::L2CValue((L2CValue *)&local_90,fVar16);
      lib::L2CValue::operator-(aLStack208,(L2CValue *)&local_90);
      lib::L2CValue::operator=(aLStack176,(L2CValue *)local_230);
      lib::L2CValue::~L2CValue((L2CValue *)local_230);
      lib::L2CValue::~L2CValue((L2CValue *)&local_90);
      lib::L2CValue::L2CValue((L2CValue *)local_230,0.0);
      uVar5 = lib::L2CValue::operator==((L2CValue *)local_230,aLStack176);
      lib::L2CValue::~L2CValue((L2CValue *)local_230);
      if ((uVar5 & 1) != 0) {
        fVar16 = (float)app::lua_bind::PostureModule__lr_impl(param_2->moduleAccessor);
        lib::L2CValue::L2CValue((L2CValue *)&local_90,fVar16);
        lib::L2CValue::operator*(aLStack160,(L2CValue *)&local_90);
        lib::L2CValue::operator=(aLStack160,(L2CValue *)local_230);
        puVar9 = (undefined8 *)local_230;
        goto LAB_710003806c;
      }
      lib::L2CValue::L2CValue((L2CValue *)local_230,0.0);
      uVar5 = lib::L2CValue::operator<((L2CValue *)local_230,aLStack176);
      lib::L2CValue::~L2CValue((L2CValue *)local_230);
      if ((uVar5 & 1) != 0) {
        lib::L2CValue::L2CValue((L2CValue *)local_230,-1);
        lib::L2CValue::operator*(aLStack160,(L2CValue *)local_230);
        lib::L2CValue::~L2CValue((L2CValue *)local_230);
        lib::L2CValue::operator=(aLStack160,(L2CValue *)&local_90);
        goto LAB_7100038070;
      }
    }
    else {
      lib::L2CValue::L2CValue((L2CValue *)local_230,FIGHTER_KINETIC_ENERGY_ID_MOTION);
      lib::L2CAgent::clear_lua_stack(param_2);
      lib::L2CAgent::push_lua_stack(param_2,(L2CValue *)local_230);
      fVar16 = (float)app::sv_kinetic_energy::get_speed_x(param_2->luaStateAgent);
      lib::L2CValue::L2CValue((L2CValue *)&local_90,fVar16);
      lib::L2CValue::~L2CValue((L2CValue *)local_230);
      lib::L2CValue::L2CValue((L2CValue *)local_230,0.0);
      uVar5 = lib::L2CValue::operator==((L2CValue *)&local_90,(L2CValue *)local_230);
      lib::L2CValue::~L2CValue((L2CValue *)local_230);
      if ((uVar5 & 1) == 0) {
        lib::L2CValue::L2CValue((L2CValue *)local_230,0.0);
        uVar5 = lib::L2CValue::operator<((L2CValue *)&local_90,(L2CValue *)local_230);
        lib::L2CValue::~L2CValue((L2CValue *)local_230);
        if ((uVar5 & 1) != 0) {
          lib::L2CValue::L2CValue((L2CValue *)local_230,-1);
          lib::L2CValue::operator*(aLStack160,(L2CValue *)local_230);
          lib::L2CValue::~L2CValue((L2CValue *)local_230);
          lib::L2CValue::operator=(aLStack160,(L2CValue *)auStack352);
          goto LAB_7100038068;
        }
      }
      else {
        uVar2 = lib::L2CValue::as_integer(param_3);
        uVar2 = app::sv_battle_object::category(uVar2);
        lib::L2CValue::L2CValue((L2CValue *)auStack352,uVar2 & 0xff);
        lib::L2CValue::L2CValue((L2CValue *)local_230,_BATTLE_OBJECT_CATEGORY_ITEM);
        uVar5 = lib::L2CValue::operator==((L2CValue *)auStack352,(L2CValue *)local_230);
        lib::L2CValue::~L2CValue((L2CValue *)local_230);
        lib::L2CValue::~L2CValue((L2CValue *)auStack352);
        if ((uVar5 & 1) != 0) {
          fVar16 = (float)app::lua_bind::PostureModule__lr_impl(param_2->moduleAccessor);
          lib::L2CValue::L2CValue((L2CValue *)auStack400,fVar16);
          lib::L2CValue::operator-((L2CValue *)auStack400);
          lib::L2CValue::operator*(aLStack160,(L2CValue *)auStack352);
          lib::L2CValue::operator=(aLStack160,(L2CValue *)local_230);
          lib::L2CValue::~L2CValue((L2CValue *)local_230);
          lib::L2CValue::~L2CValue((L2CValue *)auStack352);
          puVar9 = auStack400;
          goto LAB_710003806c;
        }
        fVar16 = (float)app::lua_bind::PostureModule__lr_impl(param_2->moduleAccessor);
        lib::L2CValue::L2CValue((L2CValue *)auStack352,fVar16);
        lib::L2CValue::operator*(aLStack160,(L2CValue *)auStack352);
        lib::L2CValue::operator=(aLStack160,(L2CValue *)local_230);
        lib::L2CValue::~L2CValue((L2CValue *)local_230);
LAB_7100038068:
        puVar9 = auStack352;
LAB_710003806c:
        lib::L2CValue::~L2CValue((L2CValue *)puVar9);
      }
LAB_7100038070:
      lib::L2CValue::~L2CValue((L2CValue *)&local_90);
    }
    lib::L2CValue::L2CValue(aLStack496,0.0);
    lib::L2CValue::L2CValue(aLStack512,0.0);
    lua2cpp::L2CFighterBase::Vector2__create(param_2,(L2CValue)0x10,(L2CValue)0x0);
    lib::L2CValue::~L2CValue(aLStack512);
    lib::L2CValue::~L2CValue(aLStack496);
    lib::L2CValue::L2CValue((L2CValue *)auStack400,(L2CValue *)&LUA_SCRIPT_LINE_SYSTEM_POST);
    pLVar10 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)auStack352,0x18cdc1683);
    pLVar11 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)auStack352,0x1fbdb2615);
    pLVar12 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)&param_2[2].battleObject,5);
    pLVar13 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)auStack352,0x18cdc1683);
    pLVar14 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)auStack352,0x1fbdb2615);
    pBVar7 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(pLVar12);
    pBVar15 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(aLStack192);
    pGVar8 = (GroundCollisionLine *)lib::L2CValue::as_pointer(aLStack240);
    fVar16 = (float)lib::L2CValue::as_number(aLStack208);
    fVar17 = (float)lib::L2CValue::as_number(aLStack160);
    uVar5 = lib::L2CValue::as_number(pLVar13);
    uVar2 = lib::L2CValue::as_number(pLVar14);
    local_90 = (Hash40MapEntry **)(uVar5 & 0xffffffff | (ulong)uVar2 << 0x20);
    uStack136 = 0;
    pvVar6 = (void *)app::FighterSpecializer_Pickel::get_pos_on_line_ignore_link
                               (pBVar7,pBVar15,pGVar8,fVar16,fVar17,(Vector2f *)&local_90);
    if (pvVar6 == (void *)0x0) {
      lib::L2CValue::L2CValue((L2CValue *)local_230,(L2CValue *)&LUA_SCRIPT_LINE_SYSTEM_POST);
    }
    else {
      lib::L2CValue::L2CValue((L2CValue *)local_230,pvVar6);
    }
    pLVar12 = (L2CValue *)(local_230 + 0x10);
    lib::L2CValue::L2CValue(pLVar12,(float)local_90);
    lib::L2CValue::L2CValue(aLStack528,local_90._4_4_);
    lib::L2CValue::operator=((L2CValue *)auStack400,(L2CValue *)local_230);
    lib::L2CValue::operator=(pLVar10,pLVar12);
    lib::L2CValue::operator=(pLVar11,aLStack528);
    lib::L2CValue::~L2CValue(aLStack528);
    lib::L2CValue::~L2CValue(pLVar12);
    lib::L2CValue::~L2CValue((L2CValue *)local_230);
    uVar5 = lib::L2CValue::operator==
                      ((L2CValue *)auStack400,(L2CValue *)&LUA_SCRIPT_LINE_SYSTEM_POST);
    if ((uVar5 & 1) == 0) {
      iVar4 = app::sv_information::stage_id();
      lib::L2CValue::L2CValue((L2CValue *)&local_90,iVar4);
      lib::L2CValue::L2CValue((L2CValue *)local_230,_DAT_7100475ab4);
      uVar5 = lib::L2CValue::operator==((L2CValue *)&local_90,(L2CValue *)local_230);
      lib::L2CValue::~L2CValue((L2CValue *)local_230);
      lib::L2CValue::~L2CValue((L2CValue *)&local_90);
      if ((uVar5 & 1) != 0) {
        pGVar8 = (GroundCollisionLine *)lib::L2CValue::as_pointer(aLStack240);
        uVar18 = app::sv_ground_collision_line::get_left_pos(pGVar8);
        lib::L2CValue::L2CValue(aLStack608,(float)uVar18);
        lib::L2CValue::L2CValue(aLStack592,(float)((ulong)uVar18 >> 0x20));
        lib::L2CValue::L2CValue((L2CValue *)local_230,aLStack608);
        lib::L2CValue::L2CValue((L2CValue *)&local_90,aLStack592);
        lua2cpp::L2CFighterBase::Vector2__create(param_2,(L2CValue)0xd0,(L2CValue)0x70);
        lib::L2CValue::~L2CValue((L2CValue *)&local_90);
        lib::L2CValue::~L2CValue((L2CValue *)local_230);
        lib::L2CValue::~L2CValue(aLStack592);
        lib::L2CValue::~L2CValue(aLStack608);
        pGVar8 = (GroundCollisionLine *)lib::L2CValue::as_pointer(aLStack240);
        uVar18 = app::sv_ground_collision_line::get_right_pos(pGVar8);
        lib::L2CValue::L2CValue(aLStack656,(float)uVar18);
        lib::L2CValue::L2CValue(aLStack640,(float)((ulong)uVar18 >> 0x20));
        lib::L2CValue::L2CValue((L2CValue *)local_230,aLStack656);
        lib::L2CValue::L2CValue((L2CValue *)&local_90,aLStack640);
        lua2cpp::L2CFighterBase::Vector2__create(param_2,(L2CValue)0xd0,(L2CValue)0x70);
        lib::L2CValue::~L2CValue((L2CValue *)&local_90);
        lib::L2CValue::~L2CValue((L2CValue *)local_230);
        lib::L2CValue::~L2CValue(aLStack640);
        lib::L2CValue::~L2CValue(aLStack656);
        lib::L2CValue::operator-(aLStack624,aLStack576);
        pLVar10 = (L2CValue *)lib::L2CValue::operator[](aLStack576,0x18cdc1683);
        lib::L2CValue::operator-(aLStack208,pLVar10);
        pLVar10 = (L2CValue *)lib::L2CValue::operator[](aLStack624,0x18cdc1683);
        pLVar11 = (L2CValue *)lib::L2CValue::operator[](aLStack576,0x18cdc1683);
        lib::L2CValue::operator-(pLVar10,pLVar11);
        lib::L2CValue::operator/(aLStack704,aLStack720);
        lib::L2CValue::operator*((L2CValue *)&local_90,aLStack688);
        lib::L2CValue::operator+(aLStack576,(L2CValue *)local_230);
        lib::L2CValue::~L2CValue((L2CValue *)local_230);
        lib::L2CValue::~L2CValue(aLStack688);
        lib::L2CValue::~L2CValue(aLStack720);
        lib::L2CValue::~L2CValue(aLStack704);
        lib::L2CValue::~L2CValue((L2CValue *)&local_90);
        lib::L2CValue::operator-(aLStack624,aLStack672);
        lua2cpp::L2CFighterBase::Vector2__normalize(param_2,(L2CValue)0x20);
        lib::L2CValue::~L2CValue(aLStack736);
        lib::L2CValue::L2CValue((L2CValue *)local_230,0.01);
        lib::L2CValue::operator*(aLStack688,(L2CValue *)local_230);
        lib::L2CValue::~L2CValue((L2CValue *)local_230);
        lib::L2CValue::operator-(aLStack672,(L2CValue *)(auStack768 + 0x10));
        pGVar8 = (GroundCollisionLine *)lib::L2CValue::as_pointer(aLStack240);
        uVar18 = app::sv_ground_collision_line::get_normal(pGVar8);
        lib::L2CValue::L2CValue(aLStack816,(float)uVar18);
        lib::L2CValue::L2CValue(aLStack800,(float)((ulong)uVar18 >> 0x20));
        lib::L2CValue::L2CValue((L2CValue *)local_230,aLStack816);
        lib::L2CValue::L2CValue((L2CValue *)&local_90,aLStack800);
        puVar9 = &local_90;
        lua2cpp::L2CFighterBase::Vector2__create(param_2,(L2CValue)0xd0,SUB81(puVar9,0));
        lib::L2CValue::~L2CValue((L2CValue *)&local_90);
        lib::L2CValue::~L2CValue((L2CValue *)local_230);
        lib::L2CValue::L2CValue((L2CValue *)local_230,0.01);
        lib::L2CValue::operator*(aLStack784,(L2CValue *)local_230);
        lib::L2CValue::~L2CValue((L2CValue *)local_230);
        lib::L2CValue::operator+(aLStack720,(L2CValue *)auStack768);
        lib::L2CValue::~L2CValue((L2CValue *)auStack768);
        lib::L2CValue::~L2CValue(aLStack784);
        lib::L2CValue::~L2CValue(aLStack800);
        lib::L2CValue::~L2CValue(aLStack816);
        lib::L2CValue::~L2CValue(aLStack720);
        lib::L2CValue::~L2CValue((L2CValue *)(auStack768 + 0x10));
        lib::L2CValue::operator-(aLStack624,aLStack672);
        pLVar10 = aLStack832;
        lua2cpp::L2CFighterBase::Vector2__length(param_2,SUB81(pLVar10,0));
        lib::L2CAgent::math_abs((L2CAgent *)aLStack160,pLVar10);
        lib::L2CAgent::math_min((L2CAgent *)auStack768,aLStack784,(L2CValue *)puVar9);
        lib::L2CValue::L2CValue((L2CValue *)local_230,1.0);
        lib::L2CValue::operator+((L2CValue *)(auStack768 + 0x10),(L2CValue *)local_230);
        lib::L2CValue::~L2CValue((L2CValue *)local_230);
        lib::L2CValue::operator*(aLStack688,(L2CValue *)&local_90);
        lib::L2CValue::~L2CValue((L2CValue *)&local_90);
        lib::L2CValue::~L2CValue((L2CValue *)(auStack768 + 0x10));
        lib::L2CValue::~L2CValue(aLStack784);
        lib::L2CValue::~L2CValue((L2CValue *)auStack768);
        lib::L2CValue::~L2CValue(aLStack832);
        pLVar10 = (L2CValue *)lib::L2CValue::operator[](aLStack704,0x18cdc1683);
        pLVar11 = (L2CValue *)lib::L2CValue::operator[](aLStack704,0x1fbdb2615);
        pLVar12 = (L2CValue *)lib::L2CValue::operator[](aLStack720,0x18cdc1683);
        pLVar13 = (L2CValue *)lib::L2CValue::operator[](aLStack720,0x1fbdb2615);
        lib::L2CValue::L2CValue((L2CValue *)auStack768,true);
        uVar5 = lib::L2CValue::as_number(pLVar10);
        uVar2 = lib::L2CValue::as_number(pLVar11);
        local_230._0_8_ = (void **)(uVar5 & 0xffffffff | (ulong)uVar2 << 0x20);
        local_230._8_8_ = (lua_State *)0x0;
        uVar5 = lib::L2CValue::as_number(pLVar12);
        uVar2 = lib::L2CValue::as_number(pLVar13);
        local_90 = (Hash40MapEntry **)(uVar5 & 0xffffffff | (ulong)uVar2 << 0x20);
        uStack136 = 0;
        bVar1 = lib::L2CValue::as_bool((L2CValue *)auStack768);
        pvVar6 = (void *)app::lua_bind::GroundModule__ray_check_get_line_impl
                                   (param_2->moduleAccessor,(Vector2f *)local_230,
                                    (Vector2f *)&local_90,(bool)(bVar1 & 1));
        if (pvVar6 == (void *)0x0) {
          lib::L2CValue::L2CValue
                    ((L2CValue *)(auStack768 + 0x10),(L2CValue *)&LUA_SCRIPT_LINE_SYSTEM_POST);
        }
        else {
          lib::L2CValue::L2CValue((L2CValue *)(auStack768 + 0x10),pvVar6);
        }
        lib::L2CValue::~L2CValue((L2CValue *)auStack768);
        uVar5 = lib::L2CValue::operator==
                          ((L2CValue *)(auStack768 + 0x10),(L2CValue *)&LUA_SCRIPT_LINE_SYSTEM_POST)
        ;
        if ((uVar5 & 1) == 0) {
          pGVar8 = (GroundCollisionLine *)lib::L2CValue::as_pointer((L2CValue *)(auStack768 + 0x10))
          ;
          bVar1 = app::sv_ground_collision_line::is_floor(pGVar8);
          lib::L2CValue::L2CValue((L2CValue *)&local_90,(bool)(bVar1 & 1));
          lib::L2CValue::L2CValue((L2CValue *)local_230,false);
          uVar5 = lib::L2CValue::operator==((L2CValue *)&local_90,(L2CValue *)local_230);
          lib::L2CValue::~L2CValue((L2CValue *)local_230);
          lib::L2CValue::~L2CValue((L2CValue *)&local_90);
          if ((uVar5 & 1) != 0) {
            pGVar8 = (GroundCollisionLine *)lib::L2CValue::as_pointer(aLStack240);
            uVar18 = app::sv_ground_collision_line::get_normal(pGVar8);
            lib::L2CValue::L2CValue(aLStack864,(float)uVar18);
            lib::L2CValue::L2CValue(aLStack848,(float)((ulong)uVar18 >> 0x20));
            lib::L2CValue::L2CValue((L2CValue *)local_230,aLStack864);
            lib::L2CValue::L2CValue((L2CValue *)&local_90,aLStack848);
            lua2cpp::L2CFighterBase::Vector2__create(param_2,(L2CValue)0xd0,(L2CValue)0x70);
            lib::L2CValue::~L2CValue((L2CValue *)&local_90);
            lib::L2CValue::~L2CValue((L2CValue *)local_230);
            lib::L2CValue::L2CValue((L2CValue *)local_230,1.0);
            lib::L2CValue::operator*(aLStack784,(L2CValue *)local_230);
            lib::L2CValue::~L2CValue((L2CValue *)local_230);
            lib::L2CValue::operator=(aLStack688,(L2CValue *)auStack768);
            lib::L2CValue::~L2CValue((L2CValue *)auStack768);
            lib::L2CValue::~L2CValue(aLStack784);
            lib::L2CValue::~L2CValue(aLStack848);
            lib::L2CValue::~L2CValue(aLStack864);
            lib::L2CValue::operator+(aLStack704,aLStack688);
            lib::L2CValue::operator=(aLStack704,(L2CValue *)local_230);
            lib::L2CValue::~L2CValue((L2CValue *)local_230);
            lib::L2CValue::operator+(aLStack720,aLStack688);
            lib::L2CValue::operator=(aLStack720,(L2CValue *)local_230);
            lib::L2CValue::~L2CValue((L2CValue *)local_230);
            pLVar10 = (L2CValue *)lib::L2CValue::operator[](aLStack704,0x18cdc1683);
            pLVar11 = (L2CValue *)lib::L2CValue::operator[](aLStack704,0x1fbdb2615);
            pLVar12 = (L2CValue *)lib::L2CValue::operator[](aLStack720,0x18cdc1683);
            pLVar13 = (L2CValue *)lib::L2CValue::operator[](aLStack720,0x1fbdb2615);
            lib::L2CValue::L2CValue(aLStack784,true);
            uVar5 = lib::L2CValue::as_number(pLVar10);
            uVar2 = lib::L2CValue::as_number(pLVar11);
            local_230._0_8_ = (void **)(uVar5 & 0xffffffff | (ulong)uVar2 << 0x20);
            local_230._8_8_ = (lua_State *)0x0;
            uVar5 = lib::L2CValue::as_number(pLVar12);
            uVar2 = lib::L2CValue::as_number(pLVar13);
            local_90 = (Hash40MapEntry **)(uVar5 & 0xffffffff | (ulong)uVar2 << 0x20);
            uStack136 = 0;
            bVar1 = lib::L2CValue::as_bool(aLStack784);
            pvVar6 = (void *)app::lua_bind::GroundModule__ray_check_get_line_impl
                                       (param_2->moduleAccessor,(Vector2f *)local_230,
                                        (Vector2f *)&local_90,(bool)(bVar1 & 1));
            if (pvVar6 == (void *)0x0) {
              lib::L2CValue::L2CValue
                        ((L2CValue *)auStack768,(L2CValue *)&LUA_SCRIPT_LINE_SYSTEM_POST);
            }
            else {
              lib::L2CValue::L2CValue((L2CValue *)auStack768,pvVar6);
            }
            lib::L2CValue::operator=((L2CValue *)(auStack768 + 0x10),(L2CValue *)auStack768);
            lib::L2CValue::~L2CValue((L2CValue *)auStack768);
            lib::L2CValue::~L2CValue(aLStack784);
            uVar5 = lib::L2CValue::operator==
                              ((L2CValue *)(auStack768 + 0x10),
                               (L2CValue *)&LUA_SCRIPT_LINE_SYSTEM_POST);
            if ((uVar5 & 1) == 0) {
              pGVar8 = (GroundCollisionLine *)
                       lib::L2CValue::as_pointer((L2CValue *)(auStack768 + 0x10));
              bVar1 = app::sv_ground_collision_line::is_floor(pGVar8);
              lib::L2CValue::L2CValue((L2CValue *)&local_90,(bool)(bVar1 & 1));
              lib::L2CValue::L2CValue((L2CValue *)local_230,true);
              uVar5 = lib::L2CValue::operator==((L2CValue *)&local_90,(L2CValue *)local_230);
              lib::L2CValue::~L2CValue((L2CValue *)local_230);
              lib::L2CValue::~L2CValue((L2CValue *)&local_90);
              if ((uVar5 & 1) != 0) {
                pLVar10 = (L2CValue *)lib::L2CValue::operator[](aLStack672,0x18cdc1683);
                pLVar11 = (L2CValue *)lib::L2CValue::operator[](aLStack672,0x1fbdb2615);
                pLVar12 = (L2CValue *)
                          lib::L2CValue::operator[]((L2CValue *)&param_2[2].battleObject,5);
                pLVar13 = (L2CValue *)lib::L2CValue::operator[](aLStack672,0x18cdc1683);
                pLVar14 = (L2CValue *)lib::L2CValue::operator[](aLStack672,0x1fbdb2615);
                pBVar7 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(pLVar12);
                pBVar15 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(aLStack192);
                pGVar8 = (GroundCollisionLine *)
                         lib::L2CValue::as_pointer((L2CValue *)(auStack768 + 0x10));
                fVar16 = (float)lib::L2CValue::as_number(aLStack208);
                fVar17 = (float)lib::L2CValue::as_number(aLStack160);
                uVar5 = lib::L2CValue::as_number(pLVar13);
                uVar2 = lib::L2CValue::as_number(pLVar14);
                local_90 = (Hash40MapEntry **)(uVar5 & 0xffffffff | (ulong)uVar2 << 0x20);
                uStack136 = 0;
                pvVar6 = (void *)app::FighterSpecializer_Pickel::get_pos_on_line_ignore_link
                                           (pBVar7,pBVar15,pGVar8,fVar16,fVar17,
                                            (Vector2f *)&local_90);
                if (pvVar6 == (void *)0x0) {
                  lib::L2CValue::L2CValue
                            ((L2CValue *)local_230,(L2CValue *)&LUA_SCRIPT_LINE_SYSTEM_POST);
                }
                else {
                  lib::L2CValue::L2CValue((L2CValue *)local_230,pvVar6);
                }
                pLVar12 = (L2CValue *)(local_230 + 0x10);
                lib::L2CValue::L2CValue(pLVar12,(float)local_90);
                lib::L2CValue::L2CValue(aLStack528,local_90._4_4_);
                lib::L2CValue::operator=((L2CValue *)(auStack768 + 0x10),(L2CValue *)local_230);
                lib::L2CValue::operator=(pLVar10,pLVar12);
                lib::L2CValue::operator=(pLVar11,aLStack528);
                lib::L2CValue::~L2CValue(aLStack528);
                lib::L2CValue::~L2CValue(pLVar12);
                lib::L2CValue::~L2CValue((L2CValue *)local_230);
                uVar5 = lib::L2CValue::operator==
                                  ((L2CValue *)(auStack768 + 0x10),
                                   (L2CValue *)&LUA_SCRIPT_LINE_SYSTEM_POST);
                if ((uVar5 & 1) == 0) {
                  lib::L2CValue::operator=((L2CValue *)auStack400,(L2CValue *)(auStack768 + 0x10));
                  lib::L2CValue::operator=((L2CValue *)auStack352,aLStack672);
                }
              }
            }
          }
        }
        lib::L2CValue::~L2CValue((L2CValue *)(auStack768 + 0x10));
        lib::L2CValue::~L2CValue(aLStack720);
        lib::L2CValue::~L2CValue(aLStack704);
        lib::L2CValue::~L2CValue(aLStack688);
        lib::L2CValue::~L2CValue(aLStack672);
        lib::L2CValue::~L2CValue(aLStack624);
        lib::L2CValue::~L2CValue(aLStack576);
      }
    }
    lib::L2CValue::L2CValue(param_1,(L2CValue *)auStack400);
    pLVar10 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)auStack352,0x18cdc1683);
    lib::L2CValue::L2CValue(param_1 + 0x10,pLVar10);
    pLVar10 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)auStack352,0x1fbdb2615);
    lib::L2CValue::L2CValue(param_1 + 0x20,pLVar10);
    lib::L2CValue::L2CValue(param_1 + 0x30,aLStack160);
    lib::L2CValue::L2CValue(param_1 + 0x40,aLStack256);
    lib::L2CValue::~L2CValue((L2CValue *)auStack400);
    lib::L2CValue::~L2CValue((L2CValue *)auStack352);
    lib::L2CValue::~L2CValue(aLStack336);
    lib::L2CValue::~L2CValue((L2CValue *)auStack320);
    lib::L2CValue::~L2CValue(aLStack176);
    lib::L2CValue::~L2CValue(aLStack160);
    lib::L2CValue::~L2CValue(aLStack256);
  }
  else {
    lib::L2CValue::L2CValue(param_1,(L2CValue *)&LUA_SCRIPT_LINE_SYSTEM_POST);
    lib::L2CValue::L2CValue(param_1 + 0x10,0);
    lib::L2CValue::L2CValue(param_1 + 0x20,0);
    lib::L2CValue::L2CValue(param_1 + 0x30,0);
    lib::L2CValue::L2CValue(param_1 + 0x40,0);
  }
  lib::L2CValue::~L2CValue(aLStack240);
  lib::L2CValue::~L2CValue(aLStack224);
  lib::L2CValue::~L2CValue(aLStack208);
LAB_7100038cc8:
  lib::L2CValue::~L2CValue(aLStack192);
  return;
}

