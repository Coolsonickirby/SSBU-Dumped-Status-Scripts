
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CWeaponDiddyBunshin::status::WaitFly_exec(L2CWeaponDiddyBunshin *this,L2CValue *return_value)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  ulong uVar5;
  L2CValue *pLVar6;
  Weapon *pWVar7;
  void *pvVar8;
  BattleObjectModuleAccessor *pBVar9;
  Hash40 HVar10;
  L2CValue *pLVar11;
  L2CValue *pLVar12;
  L2CValue *pLVar13;
  float fVar14;
  undefined4 uVar15;
  long lVar16;
  undefined4 uVar17;
  undefined8 in_d1;
  undefined4 uVar18;
  undefined8 in_d2;
  undefined4 in_s3;
  L2CValue aLStack416 [16];
  L2CValue aLStack400 [16];
  L2CValue aLStack384 [16];
  L2CValue aLStack368 [16];
  undefined auStack352 [32];
  L2CValue aLStack320 [16];
  L2CValue aLStack304 [16];
  L2CValue aLStack288 [16];
  L2CValue aLStack272 [16];
  L2CValue aLStack256 [16];
  L2CValue aLStack240 [16];
  L2CValue aLStack224 [16];
  L2CValue aLStack208 [16];
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  void **local_70;
  lua_State *plStack104;
  
  lib::L2CValue::L2CValue
            ((L2CValue *)&local_70,_WEAPON_DIDDY_BUNSHIN_INSTANCE_WORK_ID_INT_WAIT_FLY_COUNT);
  iVar2 = lib::L2CValue::as_integer((L2CValue *)&local_70);
  app::lua_bind::WorkModule__dec_int_impl(this->moduleAccessor,iVar2);
  lib::L2CValue::_L2CValue((L2CValue *)&local_70);
  lib::L2CValue::L2CValue(aLStack144,_WEAPON_DIDDY_BUNSHIN_INSTANCE_WORK_ID_INT_WAIT_FLY_COUNT);
  iVar2 = lib::L2CValue::as_integer(aLStack144);
  iVar2 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar2);
  lib::L2CValue::L2CValue(aLStack128,iVar2);
  lib::L2CValue::L2CValue((L2CValue *)&local_70,0);
  uVar5 = lib::L2CValue::operator__(aLStack128,(L2CValue *)&local_70);
  lib::L2CValue::_L2CValue((L2CValue *)&local_70);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack144);
  if ((uVar5 & 1) == 0) {
    lib::L2CValue::L2CValue((L2CValue *)return_value,0);
    return;
  }
  pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,4);
  pWVar7 = (Weapon *)lib::L2CValue::as_pointer(pLVar6);
  uVar3 = app::lua_bind::Weapon__get_founder_id_impl(pWVar7);
  lib::L2CValue::L2CValue(aLStack128,uVar3);
  uVar3 = lib::L2CValue::as_integer(aLStack128);
  pvVar8 = (void *)app::sv_battle_object::module_accessor(uVar3);
  if (pvVar8 == (void *)0x0) {
    lib::L2CValue::L2CValue(aLStack144,(L2CValue *)&FIGHTER_STATUS_KIND_CLIFF_WAIT);
  }
  else {
    lib::L2CValue::L2CValue(aLStack144,pvVar8);
  }
  lib::L2CValue::L2CValue
            ((L2CValue *)&local_70,_FIGHTER_DIDDY_STATUS_FINAL_WORK_INT_PRE_FLY_DIR_FIGHTER);
  iVar2 = lib::L2CValue::as_integer((L2CValue *)&local_70);
  pBVar9 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(aLStack144);
  iVar2 = app::lua_bind::WorkModule__get_int_impl(pBVar9,iVar2);
  lib::L2CValue::L2CValue(aLStack160,iVar2);
  lib::L2CValue::_L2CValue((L2CValue *)&local_70);
  lib::L2CValue::L2CValue
            ((L2CValue *)&local_70,_FIGHTER_DIDDY_STATUS_FINAL_WORK_INT_PRE_FLY_DIR_BUNSHIN0);
  iVar2 = lib::L2CValue::as_integer((L2CValue *)&local_70);
  pBVar9 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(aLStack144);
  iVar2 = app::lua_bind::WorkModule__get_int_impl(pBVar9,iVar2);
  lib::L2CValue::L2CValue(aLStack176,iVar2);
  lib::L2CValue::_L2CValue((L2CValue *)&local_70);
  lib::L2CValue::L2CValue(aLStack208,_WEAPON_DIDDY_BUNSHIN_INSTANCE_WORK_ID_INT_NO);
  iVar2 = lib::L2CValue::as_integer(aLStack208);
  iVar2 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar2);
  lib::L2CValue::L2CValue(aLStack192,iVar2);
  lib::L2CValue::L2CValue((L2CValue *)&local_70,0);
  uVar5 = lib::L2CValue::operator__(aLStack192,(L2CValue *)&local_70);
  lib::L2CValue::_L2CValue((L2CValue *)&local_70);
  lib::L2CValue::_L2CValue(aLStack192);
  lib::L2CValue::_L2CValue(aLStack208);
  if ((uVar5 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack192,_FIGHTER_DIDDY_STATUS_FINAL_WORK_INT_PRE_FLY_DIR_BUNSHIN1);
    iVar2 = lib::L2CValue::as_integer(aLStack192);
    pBVar9 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(aLStack144);
    iVar2 = app::lua_bind::WorkModule__get_int_impl(pBVar9,iVar2);
    lib::L2CValue::L2CValue((L2CValue *)&local_70,iVar2);
    lib::L2CValue::operator_(aLStack176,(L2CValue *)&local_70);
    lib::L2CValue::_L2CValue((L2CValue *)&local_70);
    lib::L2CValue::_L2CValue(aLStack192);
  }
  lib::L2CValue::L2CValue(aLStack192,_FIGHTER_DIDDY_FINAL_DIR_NONE);
  do {
    do {
      lib::L2CValue::L2CValue(aLStack208,0x66933a7e6);
      lib::L2CValue::L2CValue(aLStack224,_FIGHTER_DIDDY_FINAL_DIR_TERM + -1);
      HVar10 = lib::L2CValue::as_hash(aLStack208);
      iVar2 = lib::L2CValue::as_integer(aLStack224);
      uVar3 = app::sv_math::rand(HVar10,iVar2);
      lib::L2CValue::L2CValue((L2CValue *)&local_70,uVar3);
      lib::L2CValue::operator_(aLStack192,(L2CValue *)&local_70);
      lib::L2CValue::_L2CValue((L2CValue *)&local_70);
      lib::L2CValue::_L2CValue(aLStack224);
      lib::L2CValue::_L2CValue(aLStack208);
      uVar5 = lib::L2CValue::operator__(aLStack192,aLStack160);
    } while ((uVar5 & 1) != 0);
    uVar5 = lib::L2CValue::operator__(aLStack192,aLStack176);
    uVar18 = (undefined4)in_d2;
    uVar17 = (undefined4)in_d1;
  } while ((uVar5 & 1) != 0);
  lib::L2CValue::L2CValue((L2CValue *)&local_70,_WEAPON_DIDDY_BUNSHIN_INSTANCE_WORK_ID_INT_FLY_DIR);
  iVar2 = lib::L2CValue::as_integer(aLStack192);
  iVar4 = lib::L2CValue::as_integer((L2CValue *)&local_70);
  app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar2,iVar4);
  lib::L2CValue::_L2CValue((L2CValue *)&local_70);
  lib::L2CValue::L2CValue(aLStack224,_WEAPON_DIDDY_BUNSHIN_INSTANCE_WORK_ID_INT_NO);
  iVar2 = lib::L2CValue::as_integer(aLStack224);
  iVar2 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar2);
  lib::L2CValue::L2CValue(aLStack208,iVar2);
  lib::L2CValue::L2CValue((L2CValue *)&local_70,0);
  uVar5 = lib::L2CValue::operator__(aLStack208,(L2CValue *)&local_70);
  lib::L2CValue::_L2CValue((L2CValue *)&local_70);
  lib::L2CValue::_L2CValue(aLStack208);
  lib::L2CValue::_L2CValue(aLStack224);
  if ((uVar5 & 1) == 0) {
    lib::L2CValue::L2CValue
              ((L2CValue *)&local_70,_FIGHTER_DIDDY_STATUS_FINAL_WORK_INT_PRE_FLY_DIR_BUNSHIN1);
    iVar2 = lib::L2CValue::as_integer(aLStack192);
    iVar4 = lib::L2CValue::as_integer((L2CValue *)&local_70);
    pBVar9 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(aLStack144);
    app::lua_bind::WorkModule__set_int_impl(pBVar9,iVar2,iVar4);
  }
  else {
    lib::L2CValue::L2CValue
              ((L2CValue *)&local_70,_FIGHTER_DIDDY_STATUS_FINAL_WORK_INT_PRE_FLY_DIR_BUNSHIN0);
    iVar2 = lib::L2CValue::as_integer(aLStack192);
    iVar4 = lib::L2CValue::as_integer((L2CValue *)&local_70);
    pBVar9 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(aLStack144);
    app::lua_bind::WorkModule__set_int_impl(pBVar9,iVar2,iVar4);
  }
  lib::L2CValue::_L2CValue((L2CValue *)&local_70);
  lib::L2CValue::L2CValue((L2CValue *)&local_70,0xb54dafbfb);
  lib::L2CValue::L2CValue(aLStack224,0x1012db265f);
  uVar5 = lib::L2CValue::as_integer((L2CValue *)&local_70);
  pLVar6 = (L2CValue *)lib::L2CValue::as_integer(aLStack224);
  pBVar9 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(aLStack144);
  fVar14 = (float)app::lua_bind::WorkModule__get_param_float_impl(pBVar9,uVar5,(ulong)pLVar6);
  lib::L2CValue::L2CValue(aLStack208,fVar14);
  lib::L2CValue::_L2CValue(aLStack224);
  lib::L2CValue::_L2CValue((L2CValue *)&local_70);
  lib::L2CValue::L2CValue((L2CValue *)&local_70,0x66933a7e6);
  lib::L2CValue::L2CValue(aLStack240,99);
  HVar10 = lib::L2CValue::as_hash((L2CValue *)&local_70);
  iVar2 = lib::L2CValue::as_integer(aLStack240);
  uVar3 = app::sv_math::rand(HVar10,iVar2);
  lib::L2CValue::L2CValue(aLStack224,uVar3);
  lib::L2CValue::_L2CValue(aLStack240);
  lib::L2CValue::_L2CValue((L2CValue *)&local_70);
  lib::L2CValue::L2CValue(aLStack240,false);
  uVar5 = lib::L2CValue::operator_(aLStack224,aLStack208);
  if ((uVar5 & 1) != 0) {
    pLVar11 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,5);
    lib::L2CValue::L2CValue(aLStack256,true);
    pBVar9 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(pLVar11);
    bVar1 = lib::L2CValue::as_bool(aLStack256);
    bVar1 = app::FighterSpecializer_Diddy::final_decide_target_dir(pBVar9,(bool)(bVar1 & 1));
    lib::L2CValue::L2CValue((L2CValue *)&local_70,(bool)(bVar1 & 1));
    lib::L2CValue::operator_(aLStack240,(L2CValue *)&local_70);
    lib::L2CValue::_L2CValue((L2CValue *)&local_70);
    lib::L2CValue::_L2CValue(aLStack256);
  }
  lib::L2CValue::L2CValue((L2CValue *)&local_70,false);
  uVar5 = lib::L2CValue::operator__(aLStack240,(L2CValue *)&local_70);
  lib::L2CValue::_L2CValue((L2CValue *)&local_70);
  if ((uVar5 & 1) == 0) goto LAB_7100034f28;
  uVar15 = app::sv_camera_manager::camera_range();
  local_70 = (void **)CONCAT44(uVar17,uVar15);
  plStack104 = (lua_State *)CONCAT44(in_s3,uVar18);
  app::lua_bind::lib__Rect__store_l2c_table_impl((Rect *)&local_70);
  lib::L2CValue::L2CValue(aLStack272,0.0);
  lib::L2CValue::L2CValue(aLStack288,0.0);
  lib::L2CValue::L2CValue(aLStack304,0.0);
  lib::L2CValue::L2CValue(aLStack320,0.0);
  lib::L2CValue::L2CValue((L2CValue *)&local_70,_FIGHTER_DIDDY_FINAL_DIR_UP);
  uVar5 = lib::L2CValue::operator__(aLStack192,(L2CValue *)&local_70);
  lib::L2CValue::_L2CValue((L2CValue *)&local_70);
  if ((uVar5 & 1) == 0) {
    lib::L2CValue::L2CValue((L2CValue *)&local_70,_FIGHTER_DIDDY_FINAL_DIR_DOWN);
    uVar5 = lib::L2CValue::operator__(aLStack192,(L2CValue *)&local_70);
    lib::L2CValue::_L2CValue((L2CValue *)&local_70);
    if ((uVar5 & 1) == 0) {
      lib::L2CValue::L2CValue((L2CValue *)&local_70,_FIGHTER_DIDDY_FINAL_DIR_RIGHT);
      uVar5 = lib::L2CValue::operator__(aLStack192,(L2CValue *)&local_70);
      lib::L2CValue::_L2CValue((L2CValue *)&local_70);
      if ((uVar5 & 1) == 0) {
        lib::L2CValue::L2CValue((L2CValue *)&local_70,_FIGHTER_DIDDY_FINAL_DIR_LEFT);
        uVar5 = lib::L2CValue::operator__(aLStack192,(L2CValue *)&local_70);
        lib::L2CValue::_L2CValue((L2CValue *)&local_70);
        if ((uVar5 & 1) == 0) goto LAB_7100034dd4;
        pLVar11 = (L2CValue *)lib::L2CValue::operator__(aLStack256,0x5b4ca7514);
        lib::L2CValue::operator_(aLStack272,pLVar11);
        pLVar11 = (L2CValue *)lib::L2CValue::operator__(aLStack256,0x6895f72a4);
        lib::L2CValue::L2CValue(aLStack368,0x66933a7e6);
        HVar10 = lib::L2CValue::as_hash(aLStack368);
        fVar14 = (float)app::sv_math::randf(HVar10,1.0);
        lib::L2CValue::L2CValue((L2CValue *)auStack352,fVar14);
        pLVar12 = (L2CValue *)lib::L2CValue::operator__(aLStack256,0x31ed91fca);
        pLVar13 = (L2CValue *)lib::L2CValue::operator__(aLStack256,0x6895f72a4);
        lib::L2CValue::operator_(pLVar12,pLVar13);
        lib::L2CValue::operator_((L2CValue *)auStack352,aLStack384);
        lib::L2CValue::operator_(pLVar11,(L2CValue *)(auStack352 + 0x10));
        lib::L2CValue::operator_(aLStack288,(L2CValue *)&local_70);
        lib::L2CValue::_L2CValue((L2CValue *)&local_70);
        lib::L2CValue::_L2CValue((L2CValue *)(auStack352 + 0x10));
        lib::L2CValue::_L2CValue(aLStack384);
        lib::L2CValue::_L2CValue((L2CValue *)auStack352);
        lib::L2CValue::_L2CValue(aLStack368);
        pLVar11 = (L2CValue *)lib::L2CValue::operator__(aLStack256,0x47a67e768);
        lib::L2CValue::operator_(aLStack304,pLVar11);
        pLVar11 = (L2CValue *)lib::L2CValue::operator__(aLStack256,0x6895f72a4);
        lib::L2CValue::L2CValue(aLStack368,0x66933a7e6);
        HVar10 = lib::L2CValue::as_hash(aLStack368);
        fVar14 = (float)app::sv_math::randf(HVar10,1.0);
        lib::L2CValue::L2CValue((L2CValue *)auStack352,fVar14);
        pLVar12 = (L2CValue *)lib::L2CValue::operator__(aLStack256,0x31ed91fca);
        pLVar13 = (L2CValue *)lib::L2CValue::operator__(aLStack256,0x6895f72a4);
        lib::L2CValue::operator_(pLVar12,pLVar13);
        lib::L2CValue::operator_((L2CValue *)auStack352,aLStack384);
        lib::L2CValue::operator_(pLVar11,(L2CValue *)(auStack352 + 0x10));
        lib::L2CValue::operator_(aLStack320,(L2CValue *)&local_70);
      }
      else {
        pLVar11 = (L2CValue *)lib::L2CValue::operator__(aLStack256,0x47a67e768);
        lib::L2CValue::operator_(aLStack272,pLVar11);
        pLVar11 = (L2CValue *)lib::L2CValue::operator__(aLStack256,0x6895f72a4);
        lib::L2CValue::L2CValue(aLStack368,0x66933a7e6);
        HVar10 = lib::L2CValue::as_hash(aLStack368);
        fVar14 = (float)app::sv_math::randf(HVar10,1.0);
        lib::L2CValue::L2CValue((L2CValue *)auStack352,fVar14);
        pLVar12 = (L2CValue *)lib::L2CValue::operator__(aLStack256,0x31ed91fca);
        pLVar13 = (L2CValue *)lib::L2CValue::operator__(aLStack256,0x6895f72a4);
        lib::L2CValue::operator_(pLVar12,pLVar13);
        lib::L2CValue::operator_((L2CValue *)auStack352,aLStack384);
        lib::L2CValue::operator_(pLVar11,(L2CValue *)(auStack352 + 0x10));
        lib::L2CValue::operator_(aLStack288,(L2CValue *)&local_70);
        lib::L2CValue::_L2CValue((L2CValue *)&local_70);
        lib::L2CValue::_L2CValue((L2CValue *)(auStack352 + 0x10));
        lib::L2CValue::_L2CValue(aLStack384);
        lib::L2CValue::_L2CValue((L2CValue *)auStack352);
        lib::L2CValue::_L2CValue(aLStack368);
        pLVar11 = (L2CValue *)lib::L2CValue::operator__(aLStack256,0x5b4ca7514);
        lib::L2CValue::operator_(aLStack304,pLVar11);
        pLVar11 = (L2CValue *)lib::L2CValue::operator__(aLStack256,0x6895f72a4);
        lib::L2CValue::L2CValue(aLStack368,0x66933a7e6);
        HVar10 = lib::L2CValue::as_hash(aLStack368);
        fVar14 = (float)app::sv_math::randf(HVar10,1.0);
        lib::L2CValue::L2CValue((L2CValue *)auStack352,fVar14);
        pLVar12 = (L2CValue *)lib::L2CValue::operator__(aLStack256,0x31ed91fca);
        pLVar13 = (L2CValue *)lib::L2CValue::operator__(aLStack256,0x6895f72a4);
        lib::L2CValue::operator_(pLVar12,pLVar13);
        lib::L2CValue::operator_((L2CValue *)auStack352,aLStack384);
        lib::L2CValue::operator_(pLVar11,(L2CValue *)(auStack352 + 0x10));
        lib::L2CValue::operator_(aLStack320,(L2CValue *)&local_70);
      }
      lib::L2CValue::_L2CValue((L2CValue *)&local_70);
      lib::L2CValue::_L2CValue((L2CValue *)(auStack352 + 0x10));
      lib::L2CValue::_L2CValue(aLStack384);
      lib::L2CValue::_L2CValue((L2CValue *)auStack352);
      lib::L2CValue::_L2CValue(aLStack368);
    }
    else {
      pLVar11 = (L2CValue *)lib::L2CValue::operator__(aLStack256,0x47a67e768);
      lib::L2CValue::L2CValue(aLStack368,0x66933a7e6);
      HVar10 = lib::L2CValue::as_hash(aLStack368);
      fVar14 = (float)app::sv_math::randf(HVar10,1.0);
      lib::L2CValue::L2CValue((L2CValue *)auStack352,fVar14);
      pLVar12 = (L2CValue *)lib::L2CValue::operator__(aLStack256,0x5b4ca7514);
      pLVar13 = (L2CValue *)lib::L2CValue::operator__(aLStack256,0x47a67e768);
      lib::L2CValue::operator_(pLVar12,pLVar13);
      lib::L2CValue::operator_((L2CValue *)auStack352,aLStack384);
      lib::L2CValue::operator_(pLVar11,(L2CValue *)(auStack352 + 0x10));
      lib::L2CValue::operator_(aLStack272,(L2CValue *)&local_70);
      lib::L2CValue::_L2CValue((L2CValue *)&local_70);
      lib::L2CValue::_L2CValue((L2CValue *)(auStack352 + 0x10));
      lib::L2CValue::_L2CValue(aLStack384);
      lib::L2CValue::_L2CValue((L2CValue *)auStack352);
      lib::L2CValue::_L2CValue(aLStack368);
      pLVar11 = (L2CValue *)lib::L2CValue::operator__(aLStack256,0x31ed91fca);
      lib::L2CValue::operator_(aLStack288,pLVar11);
      pLVar11 = (L2CValue *)lib::L2CValue::operator__(aLStack256,0x47a67e768);
      lib::L2CValue::L2CValue(aLStack368,0x66933a7e6);
      HVar10 = lib::L2CValue::as_hash(aLStack368);
      fVar14 = (float)app::sv_math::randf(HVar10,1.0);
      lib::L2CValue::L2CValue((L2CValue *)auStack352,fVar14);
      pLVar12 = (L2CValue *)lib::L2CValue::operator__(aLStack256,0x5b4ca7514);
      pLVar13 = (L2CValue *)lib::L2CValue::operator__(aLStack256,0x47a67e768);
      lib::L2CValue::operator_(pLVar12,pLVar13);
      lib::L2CValue::operator_((L2CValue *)auStack352,aLStack384);
      lib::L2CValue::operator_(pLVar11,(L2CValue *)(auStack352 + 0x10));
      lib::L2CValue::operator_(aLStack304,(L2CValue *)&local_70);
      lib::L2CValue::_L2CValue((L2CValue *)&local_70);
      lib::L2CValue::_L2CValue((L2CValue *)(auStack352 + 0x10));
      lib::L2CValue::_L2CValue(aLStack384);
      lib::L2CValue::_L2CValue((L2CValue *)auStack352);
      lib::L2CValue::_L2CValue(aLStack368);
      pLVar11 = (L2CValue *)lib::L2CValue::operator__(aLStack256,0x6895f72a4);
      lib::L2CValue::operator_(aLStack320,pLVar11);
    }
  }
  else {
    pLVar11 = (L2CValue *)lib::L2CValue::operator__(aLStack256,0x47a67e768);
    lib::L2CValue::L2CValue(aLStack368,0x66933a7e6);
    HVar10 = lib::L2CValue::as_hash(aLStack368);
    fVar14 = (float)app::sv_math::randf(HVar10,1.0);
    lib::L2CValue::L2CValue((L2CValue *)auStack352,fVar14);
    pLVar12 = (L2CValue *)lib::L2CValue::operator__(aLStack256,0x5b4ca7514);
    pLVar13 = (L2CValue *)lib::L2CValue::operator__(aLStack256,0x47a67e768);
    lib::L2CValue::operator_(pLVar12,pLVar13);
    lib::L2CValue::operator_((L2CValue *)auStack352,aLStack384);
    lib::L2CValue::operator_(pLVar11,(L2CValue *)(auStack352 + 0x10));
    lib::L2CValue::operator_(aLStack272,(L2CValue *)&local_70);
    lib::L2CValue::_L2CValue((L2CValue *)&local_70);
    lib::L2CValue::_L2CValue((L2CValue *)(auStack352 + 0x10));
    lib::L2CValue::_L2CValue(aLStack384);
    lib::L2CValue::_L2CValue((L2CValue *)auStack352);
    lib::L2CValue::_L2CValue(aLStack368);
    pLVar11 = (L2CValue *)lib::L2CValue::operator__(aLStack256,0x6895f72a4);
    lib::L2CValue::operator_(aLStack288,pLVar11);
    pLVar11 = (L2CValue *)lib::L2CValue::operator__(aLStack256,0x47a67e768);
    lib::L2CValue::L2CValue(aLStack368,0x66933a7e6);
    HVar10 = lib::L2CValue::as_hash(aLStack368);
    fVar14 = (float)app::sv_math::randf(HVar10,1.0);
    lib::L2CValue::L2CValue((L2CValue *)auStack352,fVar14);
    pLVar12 = (L2CValue *)lib::L2CValue::operator__(aLStack256,0x5b4ca7514);
    pLVar13 = (L2CValue *)lib::L2CValue::operator__(aLStack256,0x47a67e768);
    lib::L2CValue::operator_(pLVar12,pLVar13);
    lib::L2CValue::operator_((L2CValue *)auStack352,aLStack384);
    lib::L2CValue::operator_(pLVar11,(L2CValue *)(auStack352 + 0x10));
    lib::L2CValue::operator_(aLStack304,(L2CValue *)&local_70);
    lib::L2CValue::_L2CValue((L2CValue *)&local_70);
    lib::L2CValue::_L2CValue((L2CValue *)(auStack352 + 0x10));
    lib::L2CValue::_L2CValue(aLStack384);
    lib::L2CValue::_L2CValue((L2CValue *)auStack352);
    lib::L2CValue::_L2CValue(aLStack368);
    pLVar11 = (L2CValue *)lib::L2CValue::operator__(aLStack256,0x31ed91fca);
    lib::L2CValue::operator_(aLStack320,pLVar11);
  }
LAB_7100034dd4:
  lib::L2CValue::operator_(aLStack320,aLStack288);
  lib::L2CValue::operator_(aLStack304,aLStack272);
  pLVar11 = aLStack368;
  lib::L2CAgent::math_atan((L2CAgent *)auStack352,pLVar11,pLVar6);
  lib::L2CAgent::math_deg((L2CAgent *)&local_70,pLVar11);
  lib::L2CValue::_L2CValue((L2CValue *)&local_70);
  lib::L2CValue::_L2CValue(aLStack368);
  lib::L2CValue::_L2CValue((L2CValue *)auStack352);
  lib::L2CValue::L2CValue((L2CValue *)&local_70,0.0);
  lib::L2CValue::operator_((L2CValue *)(auStack352 + 0x10),(L2CValue *)&local_70);
  lib::L2CValue::_L2CValue((L2CValue *)&local_70);
  lib::L2CValue::L2CValue
            ((L2CValue *)&local_70,_WEAPON_DIDDY_BUNSHIN_INSTANCE_WORK_ID_FLOAT_ANGLE_X);
  fVar14 = (float)lib::L2CValue::as_number((L2CValue *)auStack352);
  iVar2 = lib::L2CValue::as_integer((L2CValue *)&local_70);
  app::lua_bind::WorkModule__set_float_impl(this->moduleAccessor,fVar14,iVar2);
  lib::L2CValue::_L2CValue((L2CValue *)&local_70);
  lib::L2CValue::_L2CValue((L2CValue *)auStack352);
  fVar14 = (float)app::lua_bind::PostureModule__pos_z_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue((L2CValue *)auStack352,fVar14);
  uVar5 = lib::L2CValue::as_number(aLStack272);
  lVar16 = lib::L2CValue::as_number(aLStack288);
  uVar3 = lib::L2CValue::as_number((L2CValue *)auStack352);
  local_70 = (void **)(uVar5 & 0xffffffff | lVar16 << 0x20);
  plStack104 = (lua_State *)(ulong)uVar3;
  app::lua_bind::PostureModule__init_pos_impl(this->moduleAccessor,(Vector3f *)&local_70,true,true);
  lib::L2CValue::_L2CValue((L2CValue *)auStack352);
  lib::L2CValue::_L2CValue((L2CValue *)(auStack352 + 0x10));
  lib::L2CValue::_L2CValue(aLStack320);
  lib::L2CValue::_L2CValue(aLStack304);
  lib::L2CValue::_L2CValue(aLStack288);
  lib::L2CValue::_L2CValue(aLStack272);
  lib::L2CValue::_L2CValue(aLStack256);
LAB_7100034f28:
  lib::L2CValue::L2CValue(aLStack400,_WEAPON_DIDDY_BUNSHIN_STATUS_KIND_FLY);
  lib::L2CValue::L2CValue(aLStack416,false);
  lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0x70,(L2CValue)0x60);
  lib::L2CValue::_L2CValue(aLStack416);
  lib::L2CValue::_L2CValue(aLStack400);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  lib::L2CValue::_L2CValue(aLStack240);
  lib::L2CValue::_L2CValue(aLStack224);
  lib::L2CValue::_L2CValue(aLStack208);
  lib::L2CValue::_L2CValue(aLStack192);
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack128);
  return;
}

