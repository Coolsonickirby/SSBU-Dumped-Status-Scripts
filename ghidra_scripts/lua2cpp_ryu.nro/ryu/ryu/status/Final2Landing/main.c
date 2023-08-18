
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterRyu::status::Final2Landing_main(L2CFighterRyu *this,L2CValue *return_value)

{
  byte bVar1;
  HitStatus HVar2;
  uint uVar3;
  int iVar4;
  Hash40 HVar5;
  ulong uVar6;
  ulong uVar7;
  float fVar8;
  float fVar9;
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  lib::L2CValue::L2CValue(aLStack80,_HIT_STATUS_XLU);
  HVar2 = lib::L2CValue::as_integer(aLStack80);
  app::lua_bind::HitModule__set_whole_impl(this->moduleAccessor,HVar2,0);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,0xe49b767ab);
  HVar5 = lib::L2CValue::as_hash(aLStack80);
  uVar3 = app::lua_bind::MotionModule__end_frame_from_hash_impl(this->moduleAccessor,HVar5);
  lib::L2CValue::L2CValue(aLStack96,uVar3);
  lib::L2CValue::L2CValue(aLStack144,0xdf05c072b);
  lib::L2CValue::L2CValue(aLStack160,0x1498e75a4d);
  uVar6 = lib::L2CValue::as_integer(aLStack144);
  uVar7 = lib::L2CValue::as_integer(aLStack160);
  iVar4 = app::lua_bind::WorkModule__get_param_int_impl(this->moduleAccessor,uVar6,uVar7);
  lib::L2CValue::L2CValue(aLStack128,iVar4);
  lib::L2CValue::operator_(aLStack96,aLStack128);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::L2CValue(aLStack128,0);
  lib::L2CValue::L2CValue(aLStack144,false);
  HVar5 = lib::L2CValue::as_hash(aLStack80);
  fVar8 = (float)lib::L2CValue::as_number(aLStack128);
  fVar9 = (float)lib::L2CValue::as_number(aLStack112);
  bVar1 = lib::L2CValue::as_bool(aLStack144);
  app::lua_bind::MotionModule__change_motion_impl
            (this->moduleAccessor,HVar5,fVar8,fVar9,(bool)(bVar1 & 1),0.0,false,false);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::L2CValue(aLStack128,Final2Landing_main_loop);
  lua2cpp::L2CFighterCommon::sub_shift_status_main(this,(L2CValue)0x80);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  return;
}

