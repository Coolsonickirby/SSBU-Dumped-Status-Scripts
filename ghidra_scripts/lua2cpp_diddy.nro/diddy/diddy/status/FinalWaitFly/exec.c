
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterDiddy::status::FinalWaitFly_exec(L2CFighterDiddy *this,L2CValue *return_value)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  ulong uVar5;
  Hash40 HVar6;
  L2CValue *pLVar7;
  L2CValue *pLVar8;
  BattleObjectModuleAccessor *pBVar9;
  L2CValue *pLVar10;
  L2CValue *pLVar11;
  float fVar12;
  undefined4 uVar13;
  long lVar14;
  undefined4 uVar15;
  undefined8 in_d1;
  undefined4 uVar16;
  undefined8 in_d2;
  undefined4 in_s3;
  L2CValue aLStack400 [16];
  L2CValue aLStack384 [16];
  L2CValue aLStack368 [16];
  L2CValue aLStack352 [16];
  undefined auStack336 [32];
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
  L2CValue aLStack112 [16];
  void **local_60;
  lua_State *plStack88;
  
  lib::L2CValue::L2CValue(aLStack128,_FIGHTER_DIDDY_STATUS_FINAL_FLAG_START_FLY_COUNT);
  iVar2 = lib::L2CValue::as_integer(aLStack128);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar2);
  lib::L2CValue::L2CValue(aLStack112,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue((L2CValue *)&local_60,true);
  uVar5 = lib::L2CValue::operator__(aLStack112,(L2CValue *)&local_60);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack128);
  if ((uVar5 & 1) != 0) {
    lib::L2CValue::L2CValue((L2CValue *)&local_60,_FIGHTER_DIDDY_STATUS_FINAL_WORK_INT_FLY_COUNT);
    iVar2 = lib::L2CValue::as_integer((L2CValue *)&local_60);
    app::lua_bind::WorkModule__dec_int_impl(this->moduleAccessor,iVar2);
    lib::L2CValue::_L2CValue((L2CValue *)&local_60);
    lib::L2CValue::L2CValue(aLStack128,_FIGHTER_DIDDY_STATUS_FINAL_WORK_INT_FLY_COUNT);
    iVar2 = lib::L2CValue::as_integer(aLStack128);
    iVar2 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar2);
    lib::L2CValue::L2CValue(aLStack112,iVar2);
    lib::L2CValue::L2CValue((L2CValue *)&local_60,0);
    uVar5 = lib::L2CValue::operator__(aLStack112,(L2CValue *)&local_60);
    lib::L2CValue::_L2CValue((L2CValue *)&local_60);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack128);
    if ((uVar5 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack144,_FIGHTER_DIDDY_STATUS_KIND_FINAL_READY_CHARGE);
      lib::L2CValue::L2CValue(aLStack160,false);
      lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0x70,(L2CValue)0x60);
      lib::L2CValue::_L2CValue(aLStack160);
      lib::L2CValue::_L2CValue(aLStack144);
      goto LAB_710000ae0c;
    }
  }
  lib::L2CValue::L2CValue((L2CValue *)&local_60,_FIGHTER_DIDDY_STATUS_FINAL_WORK_INT_WAIT_FLY_COUNT)
  ;
  iVar2 = lib::L2CValue::as_integer((L2CValue *)&local_60);
  app::lua_bind::WorkModule__dec_int_impl(this->moduleAccessor,iVar2);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  lib::L2CValue::L2CValue(aLStack128,_FIGHTER_DIDDY_STATUS_FINAL_WORK_INT_WAIT_FLY_COUNT);
  iVar2 = lib::L2CValue::as_integer(aLStack128);
  iVar2 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar2);
  lib::L2CValue::L2CValue(aLStack112,iVar2);
  lib::L2CValue::L2CValue((L2CValue *)&local_60,0);
  uVar5 = lib::L2CValue::operator__(aLStack112,(L2CValue *)&local_60);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack128);
  if ((uVar5 & 1) == 0) {
LAB_710000ae0c:
    lib::L2CValue::L2CValue((L2CValue *)return_value,0);
    return;
  }
  lib::L2CValue::L2CValue
            ((L2CValue *)&local_60,_FIGHTER_DIDDY_STATUS_FINAL_WORK_INT_PRE_FLY_DIR_BUNSHIN0);
  iVar2 = lib::L2CValue::as_integer((L2CValue *)&local_60);
  iVar2 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar2);
  lib::L2CValue::L2CValue(aLStack112,iVar2);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  lib::L2CValue::L2CValue
            ((L2CValue *)&local_60,_FIGHTER_DIDDY_STATUS_FINAL_WORK_INT_PRE_FLY_DIR_BUNSHIN1);
  iVar2 = lib::L2CValue::as_integer((L2CValue *)&local_60);
  iVar2 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar2);
  lib::L2CValue::L2CValue(aLStack128,iVar2);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  lib::L2CValue::L2CValue(aLStack176,_FIGHTER_DIDDY_FINAL_DIR_NONE);
  do {
    do {
      lib::L2CValue::L2CValue(aLStack192,0x77a08c3fc);
      lib::L2CValue::L2CValue(aLStack208,_FIGHTER_DIDDY_FINAL_DIR_TERM + -1);
      HVar6 = lib::L2CValue::as_hash(aLStack192);
      iVar2 = lib::L2CValue::as_integer(aLStack208);
      uVar3 = app::sv_math::rand(HVar6,iVar2);
      lib::L2CValue::L2CValue((L2CValue *)&local_60,uVar3);
      lib::L2CValue::operator_(aLStack176,(L2CValue *)&local_60);
      lib::L2CValue::_L2CValue((L2CValue *)&local_60);
      lib::L2CValue::_L2CValue(aLStack208);
      lib::L2CValue::_L2CValue(aLStack192);
      uVar5 = lib::L2CValue::operator__(aLStack176,aLStack112);
    } while ((uVar5 & 1) != 0);
    uVar5 = lib::L2CValue::operator__(aLStack176,aLStack128);
    uVar16 = (undefined4)in_d2;
    uVar15 = (undefined4)in_d1;
  } while ((uVar5 & 1) != 0);
  lib::L2CValue::L2CValue((L2CValue *)&local_60,_FIGHTER_DIDDY_STATUS_FINAL_WORK_INT_FLY_DIR);
  iVar2 = lib::L2CValue::as_integer(aLStack176);
  iVar4 = lib::L2CValue::as_integer((L2CValue *)&local_60);
  app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar2,iVar4);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  lib::L2CValue::L2CValue
            ((L2CValue *)&local_60,_FIGHTER_DIDDY_STATUS_FINAL_WORK_INT_PRE_FLY_DIR_FIGHTER);
  iVar2 = lib::L2CValue::as_integer(aLStack176);
  iVar4 = lib::L2CValue::as_integer((L2CValue *)&local_60);
  app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar2,iVar4);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  lib::L2CValue::L2CValue((L2CValue *)&local_60,0xb54dafbfb);
  lib::L2CValue::L2CValue(aLStack208,0x1012db265f);
  uVar5 = lib::L2CValue::as_integer((L2CValue *)&local_60);
  pLVar7 = (L2CValue *)lib::L2CValue::as_integer(aLStack208);
  fVar12 = (float)app::lua_bind::WorkModule__get_param_float_impl
                            (this->moduleAccessor,uVar5,(ulong)pLVar7);
  lib::L2CValue::L2CValue(aLStack192,fVar12);
  lib::L2CValue::_L2CValue(aLStack208);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  lib::L2CValue::L2CValue((L2CValue *)&local_60,0x77a08c3fc);
  lib::L2CValue::L2CValue(aLStack224,99);
  HVar6 = lib::L2CValue::as_hash((L2CValue *)&local_60);
  iVar2 = lib::L2CValue::as_integer(aLStack224);
  uVar3 = app::sv_math::rand(HVar6,iVar2);
  lib::L2CValue::L2CValue(aLStack208,uVar3);
  lib::L2CValue::_L2CValue(aLStack224);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  lib::L2CValue::L2CValue(aLStack224,false);
  uVar5 = lib::L2CValue::operator_(aLStack208,aLStack192);
  if ((uVar5 & 1) != 0) {
    pLVar8 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,5);
    lib::L2CValue::L2CValue(aLStack240,false);
    pBVar9 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(pLVar8);
    bVar1 = lib::L2CValue::as_bool(aLStack240);
    bVar1 = app::FighterSpecializer_Diddy::final_decide_target_dir(pBVar9,(bool)(bVar1 & 1));
    lib::L2CValue::L2CValue((L2CValue *)&local_60,(bool)(bVar1 & 1));
    lib::L2CValue::operator_(aLStack224,(L2CValue *)&local_60);
    lib::L2CValue::_L2CValue((L2CValue *)&local_60);
    lib::L2CValue::_L2CValue(aLStack240);
  }
  lib::L2CValue::L2CValue((L2CValue *)&local_60,false);
  uVar5 = lib::L2CValue::operator__(aLStack224,(L2CValue *)&local_60);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  if ((uVar5 & 1) == 0) goto LAB_710000b58c;
  uVar13 = app::sv_camera_manager::camera_range();
  local_60 = (void **)CONCAT44(uVar15,uVar13);
  plStack88 = (lua_State *)CONCAT44(in_s3,uVar16);
  app::lua_bind::lib__Rect__store_l2c_table_impl((Rect *)&local_60);
  lib::L2CValue::L2CValue(aLStack256,0.0);
  lib::L2CValue::L2CValue(aLStack272,0.0);
  lib::L2CValue::L2CValue(aLStack288,0.0);
  lib::L2CValue::L2CValue(aLStack304,0.0);
  lib::L2CValue::L2CValue((L2CValue *)&local_60,_FIGHTER_DIDDY_FINAL_DIR_UP);
  uVar5 = lib::L2CValue::operator__(aLStack176,(L2CValue *)&local_60);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  if ((uVar5 & 1) == 0) {
    lib::L2CValue::L2CValue((L2CValue *)&local_60,_FIGHTER_DIDDY_FINAL_DIR_DOWN);
    uVar5 = lib::L2CValue::operator__(aLStack176,(L2CValue *)&local_60);
    lib::L2CValue::_L2CValue((L2CValue *)&local_60);
    if ((uVar5 & 1) == 0) {
      lib::L2CValue::L2CValue((L2CValue *)&local_60,_FIGHTER_DIDDY_FINAL_DIR_RIGHT);
      uVar5 = lib::L2CValue::operator__(aLStack176,(L2CValue *)&local_60);
      lib::L2CValue::_L2CValue((L2CValue *)&local_60);
      if ((uVar5 & 1) == 0) {
        lib::L2CValue::L2CValue((L2CValue *)&local_60,_FIGHTER_DIDDY_FINAL_DIR_LEFT);
        uVar5 = lib::L2CValue::operator__(aLStack176,(L2CValue *)&local_60);
        lib::L2CValue::_L2CValue((L2CValue *)&local_60);
        if ((uVar5 & 1) == 0) goto LAB_710000b438;
        pLVar8 = (L2CValue *)lib::L2CValue::operator__(aLStack240,0x5b4ca7514);
        lib::L2CValue::operator_(aLStack256,pLVar8);
        pLVar8 = (L2CValue *)lib::L2CValue::operator__(aLStack240,0x6895f72a4);
        lib::L2CValue::L2CValue(aLStack352,0x77a08c3fc);
        HVar6 = lib::L2CValue::as_hash(aLStack352);
        fVar12 = (float)app::sv_math::randf(HVar6,1.0);
        lib::L2CValue::L2CValue((L2CValue *)auStack336,fVar12);
        pLVar10 = (L2CValue *)lib::L2CValue::operator__(aLStack240,0x31ed91fca);
        pLVar11 = (L2CValue *)lib::L2CValue::operator__(aLStack240,0x6895f72a4);
        lib::L2CValue::operator_(pLVar10,pLVar11);
        lib::L2CValue::operator_((L2CValue *)auStack336,aLStack368);
        lib::L2CValue::operator_(pLVar8,(L2CValue *)(auStack336 + 0x10));
        lib::L2CValue::operator_(aLStack272,(L2CValue *)&local_60);
        lib::L2CValue::_L2CValue((L2CValue *)&local_60);
        lib::L2CValue::_L2CValue((L2CValue *)(auStack336 + 0x10));
        lib::L2CValue::_L2CValue(aLStack368);
        lib::L2CValue::_L2CValue((L2CValue *)auStack336);
        lib::L2CValue::_L2CValue(aLStack352);
        pLVar8 = (L2CValue *)lib::L2CValue::operator__(aLStack240,0x47a67e768);
        lib::L2CValue::operator_(aLStack288,pLVar8);
        pLVar8 = (L2CValue *)lib::L2CValue::operator__(aLStack240,0x6895f72a4);
        lib::L2CValue::L2CValue(aLStack352,0x77a08c3fc);
        HVar6 = lib::L2CValue::as_hash(aLStack352);
        fVar12 = (float)app::sv_math::randf(HVar6,1.0);
        lib::L2CValue::L2CValue((L2CValue *)auStack336,fVar12);
        pLVar10 = (L2CValue *)lib::L2CValue::operator__(aLStack240,0x31ed91fca);
        pLVar11 = (L2CValue *)lib::L2CValue::operator__(aLStack240,0x6895f72a4);
        lib::L2CValue::operator_(pLVar10,pLVar11);
        lib::L2CValue::operator_((L2CValue *)auStack336,aLStack368);
        lib::L2CValue::operator_(pLVar8,(L2CValue *)(auStack336 + 0x10));
        lib::L2CValue::operator_(aLStack304,(L2CValue *)&local_60);
      }
      else {
        pLVar8 = (L2CValue *)lib::L2CValue::operator__(aLStack240,0x47a67e768);
        lib::L2CValue::operator_(aLStack256,pLVar8);
        pLVar8 = (L2CValue *)lib::L2CValue::operator__(aLStack240,0x6895f72a4);
        lib::L2CValue::L2CValue(aLStack352,0x77a08c3fc);
        HVar6 = lib::L2CValue::as_hash(aLStack352);
        fVar12 = (float)app::sv_math::randf(HVar6,1.0);
        lib::L2CValue::L2CValue((L2CValue *)auStack336,fVar12);
        pLVar10 = (L2CValue *)lib::L2CValue::operator__(aLStack240,0x31ed91fca);
        pLVar11 = (L2CValue *)lib::L2CValue::operator__(aLStack240,0x6895f72a4);
        lib::L2CValue::operator_(pLVar10,pLVar11);
        lib::L2CValue::operator_((L2CValue *)auStack336,aLStack368);
        lib::L2CValue::operator_(pLVar8,(L2CValue *)(auStack336 + 0x10));
        lib::L2CValue::operator_(aLStack272,(L2CValue *)&local_60);
        lib::L2CValue::_L2CValue((L2CValue *)&local_60);
        lib::L2CValue::_L2CValue((L2CValue *)(auStack336 + 0x10));
        lib::L2CValue::_L2CValue(aLStack368);
        lib::L2CValue::_L2CValue((L2CValue *)auStack336);
        lib::L2CValue::_L2CValue(aLStack352);
        pLVar8 = (L2CValue *)lib::L2CValue::operator__(aLStack240,0x5b4ca7514);
        lib::L2CValue::operator_(aLStack288,pLVar8);
        pLVar8 = (L2CValue *)lib::L2CValue::operator__(aLStack240,0x6895f72a4);
        lib::L2CValue::L2CValue(aLStack352,0x77a08c3fc);
        HVar6 = lib::L2CValue::as_hash(aLStack352);
        fVar12 = (float)app::sv_math::randf(HVar6,1.0);
        lib::L2CValue::L2CValue((L2CValue *)auStack336,fVar12);
        pLVar10 = (L2CValue *)lib::L2CValue::operator__(aLStack240,0x31ed91fca);
        pLVar11 = (L2CValue *)lib::L2CValue::operator__(aLStack240,0x6895f72a4);
        lib::L2CValue::operator_(pLVar10,pLVar11);
        lib::L2CValue::operator_((L2CValue *)auStack336,aLStack368);
        lib::L2CValue::operator_(pLVar8,(L2CValue *)(auStack336 + 0x10));
        lib::L2CValue::operator_(aLStack304,(L2CValue *)&local_60);
      }
      lib::L2CValue::_L2CValue((L2CValue *)&local_60);
      lib::L2CValue::_L2CValue((L2CValue *)(auStack336 + 0x10));
      lib::L2CValue::_L2CValue(aLStack368);
      lib::L2CValue::_L2CValue((L2CValue *)auStack336);
      lib::L2CValue::_L2CValue(aLStack352);
    }
    else {
      pLVar8 = (L2CValue *)lib::L2CValue::operator__(aLStack240,0x47a67e768);
      lib::L2CValue::L2CValue(aLStack352,0x77a08c3fc);
      HVar6 = lib::L2CValue::as_hash(aLStack352);
      fVar12 = (float)app::sv_math::randf(HVar6,1.0);
      lib::L2CValue::L2CValue((L2CValue *)auStack336,fVar12);
      pLVar10 = (L2CValue *)lib::L2CValue::operator__(aLStack240,0x5b4ca7514);
      pLVar11 = (L2CValue *)lib::L2CValue::operator__(aLStack240,0x47a67e768);
      lib::L2CValue::operator_(pLVar10,pLVar11);
      lib::L2CValue::operator_((L2CValue *)auStack336,aLStack368);
      lib::L2CValue::operator_(pLVar8,(L2CValue *)(auStack336 + 0x10));
      lib::L2CValue::operator_(aLStack256,(L2CValue *)&local_60);
      lib::L2CValue::_L2CValue((L2CValue *)&local_60);
      lib::L2CValue::_L2CValue((L2CValue *)(auStack336 + 0x10));
      lib::L2CValue::_L2CValue(aLStack368);
      lib::L2CValue::_L2CValue((L2CValue *)auStack336);
      lib::L2CValue::_L2CValue(aLStack352);
      pLVar8 = (L2CValue *)lib::L2CValue::operator__(aLStack240,0x31ed91fca);
      lib::L2CValue::operator_(aLStack272,pLVar8);
      pLVar8 = (L2CValue *)lib::L2CValue::operator__(aLStack240,0x47a67e768);
      lib::L2CValue::L2CValue(aLStack352,0x77a08c3fc);
      HVar6 = lib::L2CValue::as_hash(aLStack352);
      fVar12 = (float)app::sv_math::randf(HVar6,1.0);
      lib::L2CValue::L2CValue((L2CValue *)auStack336,fVar12);
      pLVar10 = (L2CValue *)lib::L2CValue::operator__(aLStack240,0x5b4ca7514);
      pLVar11 = (L2CValue *)lib::L2CValue::operator__(aLStack240,0x47a67e768);
      lib::L2CValue::operator_(pLVar10,pLVar11);
      lib::L2CValue::operator_((L2CValue *)auStack336,aLStack368);
      lib::L2CValue::operator_(pLVar8,(L2CValue *)(auStack336 + 0x10));
      lib::L2CValue::operator_(aLStack288,(L2CValue *)&local_60);
      lib::L2CValue::_L2CValue((L2CValue *)&local_60);
      lib::L2CValue::_L2CValue((L2CValue *)(auStack336 + 0x10));
      lib::L2CValue::_L2CValue(aLStack368);
      lib::L2CValue::_L2CValue((L2CValue *)auStack336);
      lib::L2CValue::_L2CValue(aLStack352);
      pLVar8 = (L2CValue *)lib::L2CValue::operator__(aLStack240,0x6895f72a4);
      lib::L2CValue::operator_(aLStack304,pLVar8);
    }
  }
  else {
    pLVar8 = (L2CValue *)lib::L2CValue::operator__(aLStack240,0x47a67e768);
    lib::L2CValue::L2CValue(aLStack352,0x77a08c3fc);
    HVar6 = lib::L2CValue::as_hash(aLStack352);
    fVar12 = (float)app::sv_math::randf(HVar6,1.0);
    lib::L2CValue::L2CValue((L2CValue *)auStack336,fVar12);
    pLVar10 = (L2CValue *)lib::L2CValue::operator__(aLStack240,0x5b4ca7514);
    pLVar11 = (L2CValue *)lib::L2CValue::operator__(aLStack240,0x47a67e768);
    lib::L2CValue::operator_(pLVar10,pLVar11);
    lib::L2CValue::operator_((L2CValue *)auStack336,aLStack368);
    lib::L2CValue::operator_(pLVar8,(L2CValue *)(auStack336 + 0x10));
    lib::L2CValue::operator_(aLStack256,(L2CValue *)&local_60);
    lib::L2CValue::_L2CValue((L2CValue *)&local_60);
    lib::L2CValue::_L2CValue((L2CValue *)(auStack336 + 0x10));
    lib::L2CValue::_L2CValue(aLStack368);
    lib::L2CValue::_L2CValue((L2CValue *)auStack336);
    lib::L2CValue::_L2CValue(aLStack352);
    pLVar8 = (L2CValue *)lib::L2CValue::operator__(aLStack240,0x6895f72a4);
    lib::L2CValue::operator_(aLStack272,pLVar8);
    pLVar8 = (L2CValue *)lib::L2CValue::operator__(aLStack240,0x47a67e768);
    lib::L2CValue::L2CValue(aLStack352,0x77a08c3fc);
    HVar6 = lib::L2CValue::as_hash(aLStack352);
    fVar12 = (float)app::sv_math::randf(HVar6,1.0);
    lib::L2CValue::L2CValue((L2CValue *)auStack336,fVar12);
    pLVar10 = (L2CValue *)lib::L2CValue::operator__(aLStack240,0x5b4ca7514);
    pLVar11 = (L2CValue *)lib::L2CValue::operator__(aLStack240,0x47a67e768);
    lib::L2CValue::operator_(pLVar10,pLVar11);
    lib::L2CValue::operator_((L2CValue *)auStack336,aLStack368);
    lib::L2CValue::operator_(pLVar8,(L2CValue *)(auStack336 + 0x10));
    lib::L2CValue::operator_(aLStack288,(L2CValue *)&local_60);
    lib::L2CValue::_L2CValue((L2CValue *)&local_60);
    lib::L2CValue::_L2CValue((L2CValue *)(auStack336 + 0x10));
    lib::L2CValue::_L2CValue(aLStack368);
    lib::L2CValue::_L2CValue((L2CValue *)auStack336);
    lib::L2CValue::_L2CValue(aLStack352);
    pLVar8 = (L2CValue *)lib::L2CValue::operator__(aLStack240,0x31ed91fca);
    lib::L2CValue::operator_(aLStack304,pLVar8);
  }
LAB_710000b438:
  lib::L2CValue::operator_(aLStack304,aLStack272);
  lib::L2CValue::operator_(aLStack288,aLStack256);
  pLVar8 = aLStack352;
  lib::L2CAgent::math_atan((L2CAgent *)auStack336,pLVar8,pLVar7);
  lib::L2CAgent::math_deg((L2CAgent *)&local_60,pLVar8);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  lib::L2CValue::_L2CValue(aLStack352);
  lib::L2CValue::_L2CValue((L2CValue *)auStack336);
  lib::L2CValue::L2CValue((L2CValue *)&local_60,0.0);
  lib::L2CValue::operator_((L2CValue *)(auStack336 + 0x10),(L2CValue *)&local_60);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  lib::L2CValue::L2CValue((L2CValue *)&local_60,_FIGHTER_DIDDY_STATUS_FINAL_WORK_FLOAT_ANGLE_X);
  fVar12 = (float)lib::L2CValue::as_number((L2CValue *)auStack336);
  iVar2 = lib::L2CValue::as_integer((L2CValue *)&local_60);
  app::lua_bind::WorkModule__set_float_impl(this->moduleAccessor,fVar12,iVar2);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  lib::L2CValue::_L2CValue((L2CValue *)auStack336);
  fVar12 = (float)app::lua_bind::PostureModule__pos_z_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue((L2CValue *)auStack336,fVar12);
  uVar5 = lib::L2CValue::as_number(aLStack256);
  lVar14 = lib::L2CValue::as_number(aLStack272);
  uVar3 = lib::L2CValue::as_number((L2CValue *)auStack336);
  local_60 = (void **)(uVar5 & 0xffffffff | lVar14 << 0x20);
  plStack88 = (lua_State *)(ulong)uVar3;
  app::lua_bind::PostureModule__init_pos_impl(this->moduleAccessor,(Vector3f *)&local_60,true,true);
  lib::L2CValue::_L2CValue((L2CValue *)auStack336);
  lib::L2CValue::_L2CValue((L2CValue *)(auStack336 + 0x10));
  lib::L2CValue::_L2CValue(aLStack304);
  lib::L2CValue::_L2CValue(aLStack288);
  lib::L2CValue::_L2CValue(aLStack272);
  lib::L2CValue::_L2CValue(aLStack256);
  lib::L2CValue::_L2CValue(aLStack240);
LAB_710000b58c:
  lib::L2CValue::L2CValue(aLStack384,_FIGHTER_DIDDY_STATUS_KIND_FINAL_FLY);
  lib::L2CValue::L2CValue(aLStack400,false);
  lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0x80,(L2CValue)0x70);
  lib::L2CValue::_L2CValue(aLStack400);
  lib::L2CValue::_L2CValue(aLStack384);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  lib::L2CValue::_L2CValue(aLStack224);
  lib::L2CValue::_L2CValue(aLStack208);
  lib::L2CValue::_L2CValue(aLStack192);
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack112);
  return;
}

