
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterDonkey::status::Landing_init(L2CFighterDonkey *this,L2CValue *return_value)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  L2CValue *this_00;
  ulong uVar5;
  ulong uVar6;
  float fVar7;
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lib::L2CValue::L2CValue(aLStack80,0);
  lib::L2CValue::L2CValue(aLStack96,0);
  lib::L2CValue::L2CValue(aLStack112,0);
  lib::L2CValue::L2CValue(aLStack128,false);
  this_00 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,10);
  lib::L2CValue::L2CValue(aLStack64,_FIGHTER_STATUS_KIND_SPECIAL_LW);
  uVar5 = lib::L2CValue::operator__(this_00,aLStack64);
  lib::L2CValue::_L2CValue(aLStack64);
  if ((uVar5 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack160,-1);
    lib::L2CValue::L2CValue(aLStack176,true);
    iVar3 = lib::L2CValue::as_integer(aLStack160);
    bVar1 = lib::L2CValue::as_bool(aLStack176);
    bVar1 = app::lua_bind::FighterMotionModuleImpl__is_valid_cancel_frame_impl
                      (this->moduleAccessor,iVar3,(bool)(bVar1 & 1));
    lib::L2CValue::L2CValue(aLStack144,(bool)(bVar1 & 1));
    lib::L2CValue::L2CValue(aLStack64,false);
    uVar5 = lib::L2CValue::operator__(aLStack144,aLStack64);
    lib::L2CValue::_L2CValue(aLStack64);
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CValue::_L2CValue(aLStack176);
    lib::L2CValue::_L2CValue(aLStack160);
    if ((uVar5 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack64,true);
      lib::L2CValue::operator_(aLStack128,aLStack64);
      lib::L2CValue::_L2CValue(aLStack64);
    }
  }
  lua2cpp::L2CFighterCommon::sub_landing_uniq_process_init(this);
  lib::L2CValue::_L2CValue(aLStack144);
  bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack128);
  if ((bVar2 & 1U) != 0) {
    lib::L2CValue::L2CValue(aLStack160,0x1018dfb2f4);
    lib::L2CValue::L2CValue(aLStack176,0xd07d69a9b);
    uVar5 = lib::L2CValue::as_integer(aLStack160);
    uVar6 = lib::L2CValue::as_integer(aLStack176);
    fVar7 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar5,uVar6)
    ;
    lib::L2CValue::L2CValue(aLStack64,fVar7);
    lib::L2CValue::operator_(aLStack112,aLStack64);
    lib::L2CValue::_L2CValue(aLStack64);
    lib::L2CValue::_L2CValue(aLStack176);
    lib::L2CValue::_L2CValue(aLStack160);
    lib::L2CValue::L2CValue(aLStack64,0);
    uVar5 = lib::L2CValue::operator__(aLStack112,aLStack64);
    lib::L2CValue::_L2CValue(aLStack64);
    if ((uVar5 & 1) == 0) {
      uVar4 = app::lua_bind::MotionModule__end_frame_impl(this->moduleAccessor);
      lib::L2CValue::L2CValue(aLStack64,uVar4);
      lib::L2CValue::operator_(aLStack80,aLStack64);
      lib::L2CValue::_L2CValue(aLStack64);
      lib::L2CValue::operator_(aLStack80,aLStack112);
      lib::L2CValue::operator_(aLStack96,aLStack64);
      lib::L2CValue::_L2CValue(aLStack64);
      fVar7 = (float)lib::L2CValue::as_number(aLStack96);
      app::lua_bind::MotionModule__set_rate_impl(this->moduleAccessor,fVar7);
      lib::L2CValue::L2CValue(aLStack64,_FIGHTER_INSTANCE_WORK_ID_FLAG_DISABLE_LANDING_CANCEL);
      iVar3 = lib::L2CValue::as_integer(aLStack64);
      app::lua_bind::WorkModule__on_flag_impl(this->moduleAccessor,iVar3);
      lib::L2CValue::_L2CValue(aLStack64);
    }
  }
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  return;
}

