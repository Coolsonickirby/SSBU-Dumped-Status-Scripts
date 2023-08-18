
void __thiscall L2CFighterRyu::status::GuardOff_main(L2CFighterRyu *this,L2CValue *return_value)

{
  byte bVar1;
  Hash40 HVar2;
  float fVar3;
  float fVar4;
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  lua2cpp::L2CFighterCommon::status_GuardOff_Common(this);
  lib::L2CValue::L2CValue(aLStack96,0x97ab1c684);
  lib::L2CValue::L2CValue(aLStack112,0);
  lib::L2CValue::L2CValue(aLStack128,false);
  HVar2 = lib::L2CValue::as_hash(aLStack96);
  fVar3 = (float)lib::L2CValue::as_number(aLStack112);
  fVar4 = (float)lib::L2CValue::as_number(aLStack80);
  bVar1 = lib::L2CValue::as_bool(aLStack128);
  app::lua_bind::MotionModule__change_motion_impl
            (this->moduleAccessor,HVar2,fVar3,fVar4,(bool)(bVar1 & 1),0.0,false,false);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack96,GuardOff_main_loop);
  lua2cpp::L2CFighterCommon::sub_shift_status_main(this,(L2CValue)0xa0);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  return;
}

