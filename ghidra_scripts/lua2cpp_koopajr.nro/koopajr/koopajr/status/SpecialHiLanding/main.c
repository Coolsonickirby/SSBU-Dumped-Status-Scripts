
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterKoopajr::status::SpecialHiLanding_main(L2CFighterKoopajr *this,L2CValue *return_value)

{
  L2CValue *this_00;
  byte bVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  L2CValue *pLVar5;
  ulong uVar6;
  ulong uVar7;
  Hash40 HVar8;
  float fVar9;
  float fVar10;
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  
  FUN_710000f410();
  lib::L2CValue::L2CValue(aLStack112,0x12cb4acfbc);
  lib::L2CValue::L2CValue(aLStack128,1.0);
  this_00 = &this->globalTable;
  pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,10);
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_KOOPAJR_STATUS_KIND_SPECIAL_HI_FALL);
  uVar6 = lib::L2CValue::operator__(pLVar5,aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  if ((uVar6 & 1) == 0) {
    pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,10);
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_KOOPAJR_STATUS_KIND_SPECIAL_HI_SHOOT);
    uVar6 = lib::L2CValue::operator__(pLVar5,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((uVar6 & 1) != 0) goto LAB_7100009e5c;
    pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,10);
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_KOOPAJR_STATUS_KIND_SPECIAL_HI_ATTACK);
    uVar6 = lib::L2CValue::operator__(pLVar5,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((uVar6 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack144,0x1086bc4a93);
      lib::L2CValue::L2CValue(aLStack160,0x1417ed5a1b);
      uVar6 = lib::L2CValue::as_integer(aLStack144);
      uVar7 = lib::L2CValue::as_integer(aLStack160);
      fVar9 = (float)app::lua_bind::WorkModule__get_param_float_impl
                               (this->moduleAccessor,uVar6,uVar7);
      lib::L2CValue::L2CValue(aLStack96,fVar9);
      lib::L2CValue::operator_(aLStack128,aLStack96);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::_L2CValue(aLStack160);
      lib::L2CValue::_L2CValue(aLStack144);
      lib::L2CValue::L2CValue(aLStack96,0x19d9693f4c);
      lib::L2CValue::operator_(aLStack112,aLStack96);
      pLVar5 = aLStack96;
      goto LAB_7100009ed0;
    }
    pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,10);
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_KOOPAJR_STATUS_KIND_SPECIAL_HI_ESCAPE);
    uVar6 = lib::L2CValue::operator__(pLVar5,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((uVar6 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack144,0x1086bc4a93);
      lib::L2CValue::L2CValue(aLStack160,0x14fe2ffe6c);
      uVar6 = lib::L2CValue::as_integer(aLStack144);
      uVar7 = lib::L2CValue::as_integer(aLStack160);
      fVar9 = (float)app::lua_bind::WorkModule__get_param_float_impl
                               (this->moduleAccessor,uVar6,uVar7);
      lib::L2CValue::L2CValue(aLStack96,fVar9);
      lib::L2CValue::operator_(aLStack128,aLStack96);
      goto LAB_7100009ebc;
    }
  }
  else {
LAB_7100009e5c:
    lib::L2CValue::L2CValue(aLStack144,0x1086bc4a93);
    lib::L2CValue::L2CValue(aLStack160,0xd07d69a9b);
    uVar6 = lib::L2CValue::as_integer(aLStack144);
    uVar7 = lib::L2CValue::as_integer(aLStack160);
    fVar9 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar6,uVar7)
    ;
    lib::L2CValue::L2CValue(aLStack96,fVar9);
    lib::L2CValue::operator_(aLStack128,aLStack96);
LAB_7100009ebc:
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack160);
    pLVar5 = aLStack144;
LAB_7100009ed0:
    lib::L2CValue::_L2CValue(pLVar5);
  }
  lib::L2CValue::L2CValue(aLStack144,_FIGHTER_STATUS_WORK_ID_FLAG_RESERVE_DIVE);
  iVar3 = lib::L2CValue::as_integer(aLStack144);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack96);
  if ((bVar2 & 1U) == 0) {
    pLVar5 = aLStack96;
  }
  else {
    lib::L2CValue::L2CValue(aLStack176,0x1086bc4a93);
    lib::L2CValue::L2CValue(aLStack192,0x121d58812f);
    uVar6 = lib::L2CValue::as_integer(aLStack176);
    uVar7 = lib::L2CValue::as_integer(aLStack192);
    fVar9 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar6,uVar7)
    ;
    lib::L2CValue::L2CValue(aLStack160,fVar9);
    uVar6 = lib::L2CValue::operator_(aLStack128,aLStack160);
    lib::L2CValue::_L2CValue(aLStack160);
    lib::L2CValue::_L2CValue(aLStack192);
    lib::L2CValue::_L2CValue(aLStack176);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack144);
    if ((uVar6 & 1) == 0) goto LAB_710000a01c;
    lib::L2CValue::L2CValue(aLStack144,0x1086bc4a93);
    lib::L2CValue::L2CValue(aLStack160,0x121d58812f);
    uVar6 = lib::L2CValue::as_integer(aLStack144);
    uVar7 = lib::L2CValue::as_integer(aLStack160);
    fVar9 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar6,uVar7)
    ;
    lib::L2CValue::L2CValue(aLStack96,fVar9);
    lib::L2CValue::operator_(aLStack128,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    pLVar5 = aLStack160;
  }
  lib::L2CValue::_L2CValue(pLVar5);
  lib::L2CValue::_L2CValue(aLStack144);
LAB_710000a01c:
  lib::L2CValue::L2CValue(aLStack144,1.0);
  lib::L2CValue::L2CValue(aLStack96,0);
  uVar6 = lib::L2CValue::operator__(aLStack128,aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  if ((uVar6 & 1) == 0) {
    HVar8 = lib::L2CValue::as_hash(aLStack112);
    uVar4 = app::lua_bind::MotionModule__end_frame_from_hash_impl(this->moduleAccessor,HVar8);
    lib::L2CValue::L2CValue(aLStack96,uVar4);
    lib::L2CValue::operator_(aLStack96,aLStack128);
    lib::L2CValue::operator_(aLStack144,aLStack160);
    lib::L2CValue::_L2CValue(aLStack160);
    lib::L2CValue::_L2CValue(aLStack96);
  }
  lib::L2CValue::L2CValue(aLStack96,0.0);
  lib::L2CValue::L2CValue(aLStack160,false);
  HVar8 = lib::L2CValue::as_hash(aLStack112);
  fVar9 = (float)lib::L2CValue::as_number(aLStack96);
  fVar10 = (float)lib::L2CValue::as_number(aLStack144);
  bVar1 = lib::L2CValue::as_bool(aLStack160);
  app::lua_bind::MotionModule__change_motion_impl
            (this->moduleAccessor,HVar8,fVar9,fVar10,(bool)(bVar1 & 1),0.0,false,false);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue(aLStack96);
  bVar1 = app::lua_bind::StopModule__is_stop_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack160,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue(aLStack96,false);
  uVar6 = lib::L2CValue::operator__(aLStack160,aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack160);
  if ((uVar6 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack176,false);
    bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack176);
    if ((bVar2 & 1U) == 0) {
      lua2cpp::L2CFighterCommon::sub_landing_uniq_check(this);
      lib::L2CValue::_L2CValue(aLStack96);
    }
    lib::L2CValue::L2CValue(aLStack160,0);
    lib::L2CValue::_L2CValue(aLStack160);
    lib::L2CValue::_L2CValue(aLStack176);
  }
  pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x15);
  lib::L2CValue::L2CValue(aLStack96,&DAT_7100010770);
  lib::L2CValue::operator_(pLVar5,aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack96,SpecialHiLanding_main_loop);
  lua2cpp::L2CFighterCommon::sub_shift_status_main(this,(L2CValue)0xa0);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack112);
  return;
}

