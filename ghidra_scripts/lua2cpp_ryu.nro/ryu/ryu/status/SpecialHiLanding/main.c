
void __thiscall
L2CFighterRyu::status::SpecialHiLanding_main(L2CFighterRyu *this,L2CValue *return_value)

{
  byte bVar1;
  uint uVar2;
  Hash40 HVar3;
  float fVar4;
  float fVar5;
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  lib::L2CValue::L2CValue(aLStack80,0x12cb4acfbc);
  HVar3 = lib::L2CValue::as_hash(aLStack80);
  uVar2 = app::lua_bind::MotionModule__end_frame_from_hash_impl(this->moduleAccessor,HVar3);
  lib::L2CValue::L2CValue(aLStack96,uVar2);
  FUN_7100048850(aLStack128,this);
  lib::L2CValue::operator_(aLStack96,aLStack128);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::L2CValue(aLStack128,0);
  lib::L2CValue::L2CValue(aLStack144,false);
  HVar3 = lib::L2CValue::as_hash(aLStack80);
  fVar4 = (float)lib::L2CValue::as_number(aLStack128);
  fVar5 = (float)lib::L2CValue::as_number(aLStack112);
  bVar1 = lib::L2CValue::as_bool(aLStack144);
  app::lua_bind::MotionModule__change_motion_impl
            (this->moduleAccessor,HVar3,fVar4,fVar5,(bool)(bVar1 & 1),0.0,false,false);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::L2CValue(aLStack128,SpecialHiLanding_main_loop);
  lua2cpp::L2CFighterCommon::sub_shift_status_main(this,(L2CValue)0x80);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  return;
}

