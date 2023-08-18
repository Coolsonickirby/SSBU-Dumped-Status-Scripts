
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterCaptain::status::SpecialS_main(L2CFighterCaptain *this,L2CValue *return_value)

{
  L2CValue *this_00;
  byte bVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  L2CValue *pLVar7;
  Hash40 HVar8;
  float fVar9;
  float fVar10;
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_CAPTAIN_STATUS_WORK_ID_FLAG_FALCON_KNUCKLE_HIT);
  iVar2 = lib::L2CValue::as_integer(aLStack96);
  app::lua_bind::WorkModule__off_flag_impl(this->moduleAccessor,iVar2);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue
            (aLStack96,_FIGHTER_CAPTAIN_STATUS_WORK_ID_FLAG_FALCON_KNUCKLE_HIT_CHECK_ONOFF);
  iVar2 = lib::L2CValue::as_integer(aLStack96);
  app::lua_bind::WorkModule__off_flag_impl(this->moduleAccessor,iVar2);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue
            (aLStack96,_FIGHTER_CAPTAIN_STATUS_WORK_ID_FLAG_FALCON_KNUCKLE_CLIFF_FALL_ONOFF);
  iVar2 = lib::L2CValue::as_integer(aLStack96);
  app::lua_bind::WorkModule__off_flag_impl(this->moduleAccessor,iVar2);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue
            (aLStack96,_FIGHTER_CAPTAIN_STATUS_WORK_ID_FLAG_FALCON_KNUCKLE_GRAVITY_ONOFF);
  iVar2 = lib::L2CValue::as_integer(aLStack96);
  app::lua_bind::WorkModule__off_flag_impl(this->moduleAccessor,iVar2);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack144,0xfea97fe73);
  lib::L2CValue::L2CValue(aLStack160,0xab0b7c28c);
  uVar5 = lib::L2CValue::as_integer(aLStack144);
  uVar6 = lib::L2CValue::as_integer(aLStack160);
  fVar9 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar5,uVar6);
  lib::L2CValue::L2CValue(aLStack128,fVar9);
  lib::L2CValue::L2CValue(aLStack96,0.0);
  lib::L2CValue::operator_(aLStack128,aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_STATUS_WORK_ID_FLOAT_RESERVE_KINETIC_MOTION_SPEED_MUL);
  fVar9 = (float)lib::L2CValue::as_number(aLStack112);
  iVar2 = lib::L2CValue::as_integer(aLStack96);
  app::lua_bind::WorkModule__set_float_impl(this->moduleAccessor,fVar9,iVar2);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue(aLStack144);
  bVar1 = app::lua_bind::PostureModule__set_stick_lr_impl(this->moduleAccessor,0.0);
  lib::L2CValue::L2CValue(aLStack112,(bool)(bVar1 & 1));
  lib::L2CValue::_L2CValue(aLStack112);
  app::lua_bind::PostureModule__update_rot_y_lr_impl(this->moduleAccessor);
  this_00 = &this->globalTable;
  pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
  lib::L2CValue::L2CValue(aLStack96,_SITUATION_KIND_GROUND);
  uVar5 = lib::L2CValue::operator__(pLVar7,aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  if ((uVar5 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack96,SITUATION_KIND_AIR);
    lib::L2CValue::L2CValue
              (aLStack128,_FIGHTER_CAPTAIN_STATUS_WORK_ID_INT_FALCON_KNUCKLE_START_SITUATION);
    iVar2 = lib::L2CValue::as_integer(aLStack96);
    iVar3 = lib::L2CValue::as_integer(aLStack128);
    app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar2,iVar3);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::L2CValue(aLStack96,0x1337fadc39);
    lib::L2CValue::L2CValue(aLStack128,0);
    lib::L2CValue::L2CValue(aLStack144,1.0);
    lib::L2CValue::L2CValue(aLStack160,false);
    HVar8 = lib::L2CValue::as_hash(aLStack96);
    fVar9 = (float)lib::L2CValue::as_number(aLStack128);
    fVar10 = (float)lib::L2CValue::as_number(aLStack144);
    bVar1 = lib::L2CValue::as_bool(aLStack160);
    app::lua_bind::MotionModule__change_motion_impl
              (this->moduleAccessor,HVar8,fVar9,fVar10,(bool)(bVar1 & 1),0.0,false,false);
    lib::L2CValue::_L2CValue(aLStack160);
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::_L2CValue(aLStack96);
    FUN_7100010cc0(this);
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_KINETIC_TYPE_MOTION_AIR);
    iVar2 = lib::L2CValue::as_integer(aLStack96);
    app::lua_bind::KineticModule__change_kinetic_impl(this->moduleAccessor,iVar2);
    lib::L2CValue::_L2CValue(aLStack96);
    bVar1 = app::lua_bind::StopModule__is_stop_impl(this->moduleAccessor);
    lib::L2CValue::L2CValue(aLStack128,(bool)(bVar1 & 1));
    lib::L2CValue::L2CValue(aLStack96,false);
    uVar5 = lib::L2CValue::operator__(aLStack128,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack128);
    if ((uVar5 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack144,false);
      FUN_71000142f0(aLStack128,this,aLStack144);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue(aLStack144);
    }
    pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x15);
    lib::L2CValue::L2CValue(aLStack96,&DAT_7100014410);
    lib::L2CValue::operator_(pLVar7,aLStack96);
  }
  else {
    lib::L2CValue::L2CValue(aLStack96,_SITUATION_KIND_GROUND);
    lib::L2CValue::L2CValue
              (aLStack128,_FIGHTER_CAPTAIN_STATUS_WORK_ID_INT_FALCON_KNUCKLE_START_SITUATION);
    iVar2 = lib::L2CValue::as_integer(aLStack96);
    iVar3 = lib::L2CValue::as_integer(aLStack128);
    app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar2,iVar3);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::L2CValue(aLStack96,0xf3c6351ed);
    lib::L2CValue::L2CValue(aLStack128,0);
    lib::L2CValue::L2CValue(aLStack144,1.0);
    lib::L2CValue::L2CValue(aLStack160,false);
    HVar8 = lib::L2CValue::as_hash(aLStack96);
    fVar9 = (float)lib::L2CValue::as_number(aLStack128);
    fVar10 = (float)lib::L2CValue::as_number(aLStack144);
    bVar1 = lib::L2CValue::as_bool(aLStack160);
    app::lua_bind::MotionModule__change_motion_impl
              (this->moduleAccessor,HVar8,fVar9,fVar10,(bool)(bVar1 & 1),0.0,false,false);
    lib::L2CValue::_L2CValue(aLStack160);
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::_L2CValue(aLStack96);
    FUN_7100010c20(this);
    lib::L2CValue::L2CValue(aLStack96,FIGHTER_KINETIC_TYPE_MOTION);
    iVar2 = lib::L2CValue::as_integer(aLStack96);
    app::lua_bind::KineticModule__change_kinetic_impl(this->moduleAccessor,iVar2);
    lib::L2CValue::_L2CValue(aLStack96);
    bVar1 = app::lua_bind::StopModule__is_stop_impl(this->moduleAccessor);
    lib::L2CValue::L2CValue(aLStack128,(bool)(bVar1 & 1));
    lib::L2CValue::L2CValue(aLStack96,false);
    uVar5 = lib::L2CValue::operator__(aLStack128,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack128);
    if ((uVar5 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack144,false);
      FUN_7100014170(aLStack128,this,aLStack144);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue(aLStack144);
    }
    pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x15);
    lib::L2CValue::L2CValue(aLStack96,&DAT_7100014290);
    lib::L2CValue::operator_(pLVar7,aLStack96);
  }
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_CAPTAIN_CLIFF_HANG_DATA_SPECIAL_S);
  uVar4 = lib::L2CValue::as_integer(aLStack96);
  app::lua_bind::GroundModule__select_cliff_hangdata_impl(this->moduleAccessor,uVar4);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack96,SpecialS_main_loop);
  lua2cpp::L2CFighterCommon::sub_shift_status_main(this,(L2CValue)0xa0);
  lib::L2CValue::_L2CValue(aLStack96);
  return;
}

