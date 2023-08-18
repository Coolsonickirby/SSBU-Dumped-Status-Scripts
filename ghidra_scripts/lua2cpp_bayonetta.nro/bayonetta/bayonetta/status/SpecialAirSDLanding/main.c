
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterBayonetta::status::SpecialAirSDLanding_main
          (L2CFighterBayonetta *this,L2CValue *return_value)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  Hash40 HVar4;
  float fVar5;
  float fVar6;
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  lib::L2CValue::L2CValue(aLStack112,0x170788e51c);
  HVar4 = lib::L2CValue::as_hash(aLStack112);
  uVar2 = app::lua_bind::MotionModule__end_frame_from_hash_impl(this->moduleAccessor,HVar4);
  lib::L2CValue::L2CValue(aLStack96,uVar2);
  lib::L2CValue::L2CValue
            (aLStack144,_FIGHTER_BAYONETTA_INSTANCE_WORK_ID_FLOAT_SPECIAL_LANDING_FRAME);
  iVar3 = lib::L2CValue::as_integer(aLStack144);
  fVar5 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue(aLStack128,fVar5);
  lib::L2CValue::operator_(aLStack96,aLStack128);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::L2CValue(aLStack96,0x170788e51c);
  lib::L2CValue::L2CValue(aLStack112,0);
  lib::L2CValue::L2CValue(aLStack128,false);
  HVar4 = lib::L2CValue::as_hash(aLStack96);
  fVar5 = (float)lib::L2CValue::as_number(aLStack112);
  fVar6 = (float)lib::L2CValue::as_number(aLStack80);
  bVar1 = lib::L2CValue::as_bool(aLStack128);
  app::lua_bind::MotionModule__change_motion_impl
            (this->moduleAccessor,HVar4,fVar5,fVar6,(bool)(bVar1 & 1),0.0,false,false);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack96);
  FUN_710000d730(this);
  lib::L2CValue::L2CValue(aLStack96,SpecialAirSDLanding_main_loop);
  lua2cpp::L2CFighterCommon::sub_shift_status_main(this,(L2CValue)0xa0);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  return;
}

